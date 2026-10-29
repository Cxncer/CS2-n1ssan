#include "inventory/schema_probe.h"
#include "config/offsets.h"
#include "diagnostics/log.h"
#include "memory/access.h"

#include <windows.h>
#include <Psapi.h>
#include <cstdint>
#include <cstdio>

#pragma comment(lib, "psapi.lib")

// ---------------------------------------------------------------------------
// Local helpers
// ---------------------------------------------------------------------------
namespace
{
    struct ModuleInfo 
    {
        uintptr_t base = 0;
        size_t    size = 0;
        bool valid() const { return base && size; }
        uintptr_t va(uintptr_t rva) const { return base + rva; }
        bool inside(uintptr_t p) const { return p >= base && p < base + size; }
    };

    ModuleInfo GetClientModule()
    {
        ModuleInfo m;
        HMODULE h = GetModuleHandleA("client.dll");
        if (!h) return m;
        MODULEINFO mi{};
        if (!GetModuleInformation(GetCurrentProcess(), h, &mi, sizeof(mi))) return m;
        m.base = reinterpret_cast<uintptr_t>(mi.lpBaseOfDll);
        m.size = mi.SizeOfImage;
        return m;
    }

    bool ReadCStrLocal(uintptr_t a, char* out, size_t cap)
    {
        if (!out || cap < 2) return false;
        __try
        {
            for (size_t i = 0; i < cap - 1; ++i)
            {
                char c = *reinterpret_cast<char*>(a + i);
                if (c == 0) { out[i] = 0; return i > 0; }
                out[i] = c;
            }
            out[cap - 1] = 0;
            return true;
        }
        __except (1) { out[0] = 0; return false; }
    }

    // 48 8B 1D ? ? ? ? 4D 8B F5   ->   mov rbx, [rip+disp32]; mov r14, r13
    // Resolves to the address holding the CEconItemSystem* heap pointer.
    uintptr_t ResolveEconItemSystemPattern(const ModuleInfo& mod)
    {
        const uint8_t* base = reinterpret_cast<const uint8_t*>(mod.base);
        const size_t sz = mod.size;

        int hits = 0;
        uintptr_t result = 0;

        __try
        {
            for (size_t i = 0; i + 9 < sz; ++i)
            {
                if (base[i] != 0x48 || base[i + 1] != 0x8B || base[i + 2] != 0x1D) continue;
                if (base[i + 7] != 0x4D || base[i + 8] != 0x8B) continue;

                const int32_t disp = *reinterpret_cast<const int32_t*>(base + i + 3);
                const uintptr_t instrEnd = mod.base + i + 7;
                const uintptr_t ptrAddr = instrEnd + static_cast<intptr_t>(disp);
                if (ptrAddr < mod.base || ptrAddr + 8 > mod.base + mod.size) continue;

                uintptr_t es = 0;
                if (!SafeReadQword(ptrAddr, es)) continue;
                if (es < 0x10000) continue;
                if (mod.inside(es)) continue;   // pEconItemSystem must be on the heap

                ++hits;
                if (!result)
                {
                    result = es;
                    Log("[schema-probe] pattern hit @ 0x%p -> ptrAddr 0x%p -> es 0x%p",
                        (void*)(mod.base + i), (void*)ptrAddr, (void*)es);
                }
            }
        }
        __except (1) { return 0; }

        Log("[schema-probe] pattern scan: %d hit(s)", hits);
        return result;
    }

    bool IsSaneMap(uint32_t count, uintptr_t elements, const ModuleInfo& mod)
    {
        if (count == 0 || count >= 5000) return false;
        if (elements <= 0x10000) return false;
        if (mod.inside(elements)) return false;   // elements must be heap
        return true;
    }

    void DumpItemMap(uintptr_t mapAddr, const char* label, const ModuleInfo& mod)
    {
        uint32_t  count = 0;
        uintptr_t elements = 0;
        SafeReadU32(mapAddr + 0x00, count);
        SafeReadQword(mapAddr + 0x08, elements);

        Log("[schema-probe] %s: count=%u elements=0x%p", label, count, (void*)elements);

        if (!IsSaneMap(count, elements, mod)) return;

        int walk = (count < 6) ? static_cast<int>(count) : 6;
        for (int i = 0; i < walk; ++i)
        {
            const uintptr_t node = elements + static_cast<uintptr_t>(i) * 0x18;

            uintptr_t q0 = 0, q1 = 0, q2 = 0;
            SafeReadQword(node + 0x00, q0);
            SafeReadQword(node + 0x08, q1);
            SafeReadQword(node + 0x10, q2);

            uintptr_t defPtr = 0;
            uint32_t  key = 0;
            SafeReadQword(node + 0x08, defPtr);
            SafeReadU32(node + 0x14, key);

            uint16_t defIndex = 0;
            uintptr_t itemBaseNamePtr = 0;
            char nameBuf[96]{};
            if (defPtr && !mod.inside(defPtr))
            {
                SafeReadU16(defPtr + 0x10, defIndex);
                SafeReadQword(defPtr + 0x70, itemBaseNamePtr);
                if (itemBaseNamePtr)
                    ReadCStrLocal(itemBaseNamePtr, nameBuf, sizeof(nameBuf));
            }

            Log("[schema-probe]   %s[%d] node=0x%p raw=%016llX %016llX %016llX key=%u def=0x%p defIdx=%u baseName=\"%s\"",
                label, i, (void*)node,
                (unsigned long long)q0,
                (unsigned long long)q1,
                (unsigned long long)q2,
                key, (void*)defPtr, defIndex, nameBuf);
        }
    }

    void DumpPaintMap(uintptr_t mapAddr, const char* label, const ModuleInfo& mod)
    {
        uint32_t  count = 0;
        uintptr_t elements = 0;
        SafeReadU32(mapAddr + 0x00, count);
        SafeReadQword(mapAddr + 0x08, elements);

        Log("[schema-probe] %s: count=%u elements=0x%p", label, count, (void*)elements);

        if (!IsSaneMap(count, elements, mod)) return;

        int walk = (count < 4) ? static_cast<int>(count) : 4;
        for (int i = 0; i < walk; ++i)
        {
            const uintptr_t node = elements + static_cast<uintptr_t>(i) * 0x20;

            uint32_t  key = 0;
            uintptr_t pkPtr = 0;
            SafeReadU32(node + 0x10, key);
            SafeReadQword(node + 0x18, pkPtr);

            int32_t   pkId = 0;
            uintptr_t pkNamePtr = 0;
            char nameBuf[128]{};
            if (pkPtr && !mod.inside(pkPtr))
            {
                uint32_t rawId = 0;
                if (SafeReadU32(pkPtr + 0x00, rawId))
                    pkId = static_cast<int32_t>(rawId);
                SafeReadQword(pkPtr + 0x08, pkNamePtr);
                if (pkNamePtr)
                    ReadCStrLocal(pkNamePtr, nameBuf, sizeof(nameBuf));
            }

            Log("[schema-probe]   %s[%d] key=%u pk=0x%p id=%d name=\"%s\"",
                label, i, key, (void*)pkPtr, pkId, nameBuf);
        }
    }

    void FindTargetPaintKits(uintptr_t mapAddr, const ModuleInfo& mod)
    {
        constexpr uint32_t targets[] = { 10037, 10045 };
        bool found[] = { false, false };

        uint32_t count = 0;
        uintptr_t elements = 0;

        if (!SafeReadU32(mapAddr + 0x00, count) ||
            !SafeReadQword(mapAddr + 0x08, elements) ||
            !IsSaneMap(count, elements, mod))
        {
            Log("[paint-target] invalid map header: count=%u elements=0x%p",
                count, (void*)elements);
            return;
        }

        Log("[paint-target] scanning %u entries at 0x%p",
            count, (void*)elements);

        for (uint32_t i = 0; i < count; ++i)
        {
            const uintptr_t node =
                elements + static_cast<uintptr_t>(i) * 0x20;

            uint32_t key = 0;
            uintptr_t pk = 0;

            if (!SafeReadU32(node + 0x10, key) ||
                !SafeReadQword(node + 0x18, pk))
            {
                continue;
            }

            if (!pk || mod.inside(pk))
                continue;

            uint32_t rawId = 0;
            if (!SafeReadU32(pk + 0x00, rawId))
                continue;

            const int32_t paintId = static_cast<int32_t>(rawId);

            for (int t = 0; t < 2; ++t)
            {
                if (found[t])
                    continue;

                if (key != targets[t] &&
                    paintId != static_cast<int32_t>(targets[t]))
                {
                    continue;
                }

                uintptr_t namePtr = 0;
                char name[128]{};

                if (SafeReadQword(pk + 0x08, namePtr) &&
                    namePtr != 0)
                {
                    ReadCStrLocal(namePtr, name, sizeof(name));
                }

                Log("[paint-target] target=%u index=%u key=%u "
                    "objectId=%d object=0x%p name=\"%s\"",
                    targets[t], i, key, paintId, (void*)pk, name);

                found[t] = true;
            }

            if (found[0] && found[1])
                break;
        }

        for (int t = 0; t < 2; ++t)
        {
            if (!found[t])
                Log("[paint-target] target=%u NOT FOUND", targets[t]);
        }
    }
}

// ---------------------------------------------------------------------------
// Entry point
// ---------------------------------------------------------------------------
void RunSchemaProbe()
{
    Log("=== [schema-probe] start ===");

    ModuleInfo mod = GetClientModule();
    if (!mod.valid()) { Log("[schema-probe] client.dll not found"); return; }

    // Step 1: resolve CEconItemSystem* (heap).
    uintptr_t es = ResolveEconItemSystemPattern(mod);
    if (!es) { Log("[schema-probe] pattern scan failed"); return; }
    Log("[schema-probe] CEconItemSystem* = 0x%p", (void*)es);

    // Step 2: read CEconItemSchema* at es+0x08 (Loot's layout).
    uintptr_t schema = 0;
    if (!SafeReadQword(es + 0x08, schema) || schema < 0x10000 || mod.inside(schema))
    {
        Log("[schema-probe] es+0x08 is not a heap schema pointer (got 0x%p)", (void*)schema);
        // Dump first 0x80 bytes of es so we can find m_Schema empirically.
        for (uintptr_t off = 0; off < 0x80; off += 8)
        {
            uintptr_t q = 0;
            SafeReadQword(es + off, q);
            Log("[schema-probe]   es+0x%02zX = 0x%016llX", (size_t)off, (unsigned long long)q);
        }
        return;
    }
    Log("[schema-probe] CEconItemSchema* = 0x%p", (void*)schema);

    // Step 3: sweep schema+0x0F8..schema+0x400 for map headers.
    // Tighter IsSaneMap: element pointer must be a valid userspace heap pointer,
    // not inside client.dll, and <= 0x00007FFFFFFFFFFF.
    auto sane = [&](uint32_t count, uintptr_t elements) -> bool
        {
            if (count == 0 || count >= 5000) return false;
            if (elements <= 0x10000) return false;
            if (elements > 0x00007FFFFFFFFFFFULL) return false;
            if (mod.inside(elements)) return false;
            return true;
        };

    Log("[schema-probe] sweeping schema+0x0F8..schema+0x400:");
    int found = 0;
    for (uintptr_t off = 0x0F8; off <= 0x400; off += 8)
    {
        uint32_t  count = 0;
        uintptr_t elements = 0;
        SafeReadU32(schema + off, count);
        SafeReadQword(schema + off + 8, elements);

        if (!sane(count, elements)) continue;

        // Peek node0 value: items map value at +0x08 (ptr), paints value at +0x18 (ptr).
        uintptr_t v08 = 0, v18 = 0;
        SafeReadQword(elements + 0x08, v08);
        SafeReadQword(elements + 0x18, v18);
        Log("[schema-probe]   map @ schema+0x%03zX count=%u elements=0x%p node0[+08]=0x%p node0[+18]=0x%p",
            (size_t)off, count, (void*)elements, (void*)v08, (void*)v18);
        ++found;
    }
    Log("[schema-probe] sane map candidates: %d", found);

    // ---- Verify item map layout ----
    {
        uintptr_t items = schema + 0x0F8;
        uint32_t  count = 0;
        uintptr_t elems = 0;
        SafeReadU32(items + 0, count);
        SafeReadQword(items + 8, elems);
        Log("[verify] items count=%u elems=0x%p", count, (void*)elems);

        for (int i = 0; i < 5 && i < (int)count; ++i)
        {
            uintptr_t node = elems + (uintptr_t)i * 0x18;
            uintptr_t def = 0;
            uint32_t  key = 0;
            SafeReadQword(node + 0x08, def);
            SafeReadU32(node + 0x14, key);

            uint16_t idx = 0;
            uintptr_t baseNamePtr = 0;
            char baseName[64]{};
            if (def)
            {
                SafeReadU16(def + 0x10, idx);
                SafeReadQword(def + 0x70, baseNamePtr);
                if (baseNamePtr) ReadCStrLocal(baseNamePtr, baseName, sizeof(baseName));
            }
            Log("[verify]   items[%d] key=%u defIdx=%u baseName=\"%s\"",
                i, key, idx, baseName);
        }
    }

    // ---- Verify paint kit map layout ----
    {
        uintptr_t paints = schema + 0x2A0;
        uint32_t  count = 0;
        uintptr_t elems = 0;
        SafeReadU32(paints + 0, count);
        SafeReadQword(paints + 8, elems);
        Log("[verify] paints count=%u elems=0x%p", count, (void*)elems);

        for (int i = 0; i < 5 && i < (int)count; ++i)
        {
            uintptr_t node = elems + (uintptr_t)i * 0x20;
            uint32_t  key = 0;
            uintptr_t pk = 0;
            SafeReadU32(node + 0x10, key);
            SafeReadQword(node + 0x18, pk);

            int32_t pkId = 0;
            uintptr_t namePtr = 0;
            char pkName[128]{};
            if (pk)
            {
                uint32_t rawId = 0;
                SafeReadU32(pk + 0, rawId);
                pkId = (int32_t)rawId;
                SafeReadQword(pk + 0x08, namePtr);
                if (namePtr) ReadCStrLocal(namePtr, pkName, sizeof(pkName));
            }
            Log("[verify]   paints[%d] key=%u id=%d name=\"%s\"", i, key, pkId, pkName);
        }
    }
    // ---- Targeted paint-kit lookup ----
    FindTargetPaintKits(schema + 0x2A0, mod);

    Log("=== [schema-probe] done ===");
}