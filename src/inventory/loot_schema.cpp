#include "inventory/loot_schema.h"
#include "inventory/loot_patterns.h"
#include "config/offsets.h"
#include "diagnostics/log.h"
#include "memory/access.h"
#include "memory/scanner.h"

#include <windows.h>
#include <cstdint>
#include <cstring>
#include <cstdio>

// Defined here; declared in loot_schema.h. PlanA::Start() populates it via pattern scan.
uintptr_t g_esResolved = 0;

namespace
{
    using GetAttrDefByNameFn = void* (__fastcall*)(void* schema, const char* name);
    using GetManagerFn = void* (__fastcall*)();
    using CreateEconItemFn = void* (__fastcall*)();
    using SetAttributeFn = void(__fastcall*)(void* item, void* attributeDefinition, const void* value);

    GetAttrDefByNameFn g_getAttrDefByName = nullptr;
    GetManagerFn       g_getManager = nullptr;
    CreateEconItemFn   g_createEconItem = nullptr;
    SetAttributeFn     g_setUint32 = nullptr;
    SetAttributeFn     g_setFloat = nullptr;
    uint32_t           g_inventoryOffset = 0;
    char               g_lastError[512] = {};

    struct Section { uint8_t* start = nullptr; size_t size = 0; };

    bool GetSection(HMODULE module, const char* name, Section& out)
    {
        if (!module) return false;
        auto* base = reinterpret_cast<uint8_t*>(module);
        const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(base);
        const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS*>(base + dos->e_lfanew);
        const IMAGE_SECTION_HEADER* sec = IMAGE_FIRST_SECTION(nt);
        for (WORD i = 0; i < nt->FileHeader.NumberOfSections; ++i, ++sec)
        {
            if (std::strncmp(reinterpret_cast<const char*>(sec->Name), name, IMAGE_SIZEOF_SHORT_NAME) == 0)
            {
                out.start = base + sec->VirtualAddress;
                out.size = sec->Misc.VirtualSize;
                return true;
            }
        }
        return false;
    }

    bool InSection(const Section& s, const void* a)
    {
        const auto* p = static_cast<const uint8_t*>(a);
        return s.start && p >= s.start && p < s.start + s.size;
    }

    void** FindVTable(HMODULE module, const char* name)
    {
        Section data{}, rdata{};
        if (!GetSection(module, ".data", data) || !GetSection(module, ".rdata", rdata)) return nullptr;

        const size_t nameLen = std::strlen(name);
        const uintptr_t moduleBase = reinterpret_cast<uintptr_t>(module);

        uint8_t* typeDescriptor = nullptr;
        for (size_t i = 16; i + nameLen + 1 < data.size; ++i)
        {
            if (data.start[i] == '.' && std::memcmp(data.start + i, name, nameLen + 1) == 0)
            {
                typeDescriptor = data.start + i - 16; break;
            }
        }
        if (!typeDescriptor) return nullptr;

        const uint32_t typeDescriptorRva = static_cast<uint32_t>(
            reinterpret_cast<uintptr_t>(typeDescriptor) - moduleBase);

        uint8_t* locator = nullptr;
        for (size_t i = 0; i + 24 <= rdata.size; i += 4)
        {
            const auto* cand = reinterpret_cast<const uint32_t*>(rdata.start + i);
            if (cand[3] != typeDescriptorRva || cand[0] != 1 || cand[1] != 0) continue;
            if (cand[5] != static_cast<uint32_t>(
                reinterpret_cast<uintptr_t>(cand) - moduleBase)) continue;
            locator = rdata.start + i;
            break;
        }
        if (!locator) return nullptr;

        const uintptr_t locatorAddress = reinterpret_cast<uintptr_t>(locator);
        for (size_t i = 0; i + 16 <= rdata.size; i += 8)
        {
            if (*reinterpret_cast<const uintptr_t*>(rdata.start + i) == locatorAddress)
                return reinterpret_cast<void**>(rdata.start + i + 8);
        }
        return nullptr;
    }

    SetAttributeFn SetterFromAttributeType(HMODULE module, const char* typeName)
    {
        Section text{};
        if (!GetSection(module, ".text", text)) return nullptr;
        void** vt = FindVTable(module, typeName);
        if (!vt) return nullptr;
        const auto* dispatcher = static_cast<const uint8_t*>(vt[6]);
        if (!InSection(text, dispatcher)) return nullptr;

        static constexpr uint8_t head[] = { 0x48, 0x89, 0x5C, 0x24 };
        if (std::memcmp(dispatcher, head, sizeof(head)) != 0 || dispatcher[5] != 0x57) return nullptr;

        for (int i = 6; i < 0x60; ++i)
        {
            if (dispatcher[i] != 0xE8) continue;
            const int32_t rel = *reinterpret_cast<const int32_t*>(dispatcher + i + 1);
            const uint8_t* target = dispatcher + i + 5 + rel;
            if (InSection(text, target) &&
                target[0] == 0x48 && target[1] == 0x89 && target[2] == 0x6C && target[3] == 0x24)
                return reinterpret_cast<SetAttributeFn>(const_cast<uint8_t*>(target));
            return nullptr;
        }
        return nullptr;
    }

    uint32_t InventoryOffsetFromUseToolFn(const uint8_t* useTool)
    {
        if (!useTool) return 0;
        for (int i = 0; i < 0x90; ++i)
        {
            if (useTool[i] == 0xE8 && useTool[i + 5] == 0x4C &&
                useTool[i + 6] == 0x8B && useTool[i + 7] == 0xB0)
            {
                const uint32_t off = *reinterpret_cast<const uint32_t*>(useTool + i + 8);
                return off > 0 && off < 0x200000 ? off : 0;
            }
        }
        return 0;
    }

    void* CallGetManager()
    {
        __try { return g_getManager ? g_getManager() : nullptr; }
        __except (EXCEPTION_EXECUTE_HANDLER) { return nullptr; }
    }

    bool CallSetAttribute(SetAttributeFn setter, void* item, void* def, const void* val)
    {
        if (!setter || !def) { Log("[loot-schema] CallSetAttribute: setter=%p def=%p", (void*)setter, def); return false; }
        __try { setter(item, def, val); return true; }
        __except (EXCEPTION_EXECUTE_HANDLER) { Log("[loot-schema] CallSetAttribute: threw"); return false; }
    }

    // Attribute names as registered in the game's schema (items_game.txt names).
    const char* AttrNameFromIndex(int idx)
    {
        switch (idx)
        {
        case 6:  return "set item texture prefab";
        case 7:  return "set item texture seed";
        case 8:  return "set item texture wear";
        case 80: return "kill eater";
        case 81: return "kill eater score type";
        default: return nullptr;
        }
    }

    // One-time lookup of the definition by name, cached per attribute slot.
    void* GetCachedAttrDef(int idx)
    {
        static void* s_cache[5] = { nullptr, nullptr, nullptr, nullptr, nullptr }; // [6,7,8,80,81]
        int slot = -1;
        switch (idx) {
        case 6: slot = 0; break; case 7: slot = 1; break; case 8: slot = 2; break;
        case 80: slot = 3; break; case 81: slot = 4; break; default: return nullptr;
        }
        if (s_cache[slot]) return s_cache[slot];
        const char* name = AttrNameFromIndex(idx);
        if (!name) return nullptr;
        void* def = LootSchema::GetAttrDefByName(name);
        if (def) { s_cache[slot] = def; Log("[loot-schema] attr '%s' (idx %d) -> 0x%p", name, idx, def); }
        else { Log("[loot-schema] attr '%s' (idx %d) -> NOT FOUND", name, idx); }
        return def;
    }
}

namespace LootSchema
{
    bool Init()
    {
        g_lastError[0] = '\0';
        const HMODULE clientModule = GetModuleHandleA("client.dll");
        if (!clientModule) { snprintf(g_lastError, sizeof(g_lastError), "client.dll not loaded"); return false; }

        ModuleInfo client = GetClientModule();
        if (!client.valid()) { snprintf(g_lastError, sizeof(g_lastError), "client module info invalid"); return false; }

        // --- Core function patterns ---
        const uintptr_t useToolRva = ScanPattern(client, LootPatterns::UseTool);
        const uintptr_t mgrRva = ScanPattern(client, LootPatterns::InventoryManager);
        const uintptr_t createItemRva = ScanPattern(client, LootPatterns::CreateEconItem);
        const uintptr_t createTCRva = ScanPattern(client, LootPatterns::CreateBaseTypeCache);

        if (!useToolRva) { snprintf(g_lastError, sizeof(g_lastError), "UseTool not found"); return false; }
        if (!mgrRva) { snprintf(g_lastError, sizeof(g_lastError), "InventoryManager not found"); return false; }
        if (!createItemRva) { snprintf(g_lastError, sizeof(g_lastError), "CreateEconItem not found"); return false; }
        if (!createTCRva) { snprintf(g_lastError, sizeof(g_lastError), "CreateBaseTypeCache not found"); return false; }

        g_getManager = reinterpret_cast<GetManagerFn>(mgrRva);
        g_createEconItem = reinterpret_cast<CreateEconItemFn>(createItemRva);
        g_inventoryOffset = InventoryOffsetFromUseToolFn(reinterpret_cast<const uint8_t*>(useToolRva));

        if (!g_inventoryOffset)
        {
            snprintf(g_lastError, sizeof(g_lastError), "inventory offset not found in UseTool");
            return false;
        }

        // --- RTTI-resolved attribute setters ---
        g_setUint32 = SetterFromAttributeType(clientModule, ".?AVCSchemaAttributeType_Uint32@@");
        g_setFloat = SetterFromAttributeType(clientModule, ".?AVCSchemaAttributeType_Float@@");

        if (!g_setUint32 || !g_setFloat)
        {
            snprintf(g_lastError, sizeof(g_lastError), "attribute setters not found (RTTI)");
            return false;
        }

        // --- GetAttributeDefinitionByName resolver ---
        {
            const uintptr_t raw = ScanPattern(client,
                "48 89 5C 24 10 48 89 6C 24 18 57 41 56 41 57 48 83 EC 60 48 8D 05");
            if (raw)
            {
                g_getAttrDefByName = reinterpret_cast<GetAttrDefByNameFn>(raw);
                Log("[loot-schema] GetAttributeDefinitionByName @ 0x%p", (void*)raw);
            }
            else
            {
                Log("[loot-schema] WARNING: GetAttributeDefinitionByName pattern not found");
            }
        }

        Log("[loot-schema] OK (invOffset=0x%X, setUint=%p, setFloat=%p)",
            g_inventoryOffset, (void*)g_setUint32, (void*)g_setFloat);
        return true;
    }

    void* GetAttrDefByName(const char* name)
    {
        if (!g_getAttrDefByName || !name || !g_esResolved) return nullptr;
        uintptr_t schema = 0;
        if (!SafeReadQword(g_esResolved + 0x08, schema) || schema < 0x10000) return nullptr;
        __try { return g_getAttrDefByName(reinterpret_cast<void*>(schema), name); }
        __except (EXCEPTION_EXECUTE_HANDLER) { return nullptr; }
    }

    const char* LastError() { return g_lastError; }

    void* CreateEconItemObject()
    {
        if (!g_createEconItem) return nullptr;
        __try { return g_createEconItem(); }
        __except (EXCEPTION_EXECUTE_HANDLER) { return nullptr; }
    }

    bool SetAttributeInt(void* item, int idx, int32_t value)
    {
        void* def = GetCachedAttrDef(idx);
        if (!def) { Log("[loot-schema] SetAttributeInt(%d): def null", idx); return false; }
        return CallSetAttribute(g_setUint32, item, def, &value);
    }

    bool SetAttributeFloat(void* item, int idx, float value)
    {
        void* def = GetCachedAttrDef(idx);
        if (!def) { Log("[loot-schema] SetAttributeFloat(%d): def null", idx); return false; }
        // Paint kit / seed / wear are all float-typed in items_game.
        if (CallSetAttribute(g_setFloat, item, def, &value)) return true;
        // Fall back to uint32 setter with raw float bits (some builds register them as uint).
        uint32_t raw = 0; std::memcpy(&raw, &value, 4);
        return CallSetAttribute(g_setUint32, item, def, &raw);
    }

    bool IsAttributeUint(int idx)
    {
        return idx == 80 || idx == 81;
    }

    uint32_t InventoryOffsetFromUseTool() { return g_inventoryOffset; }
    void* GetManager() { return CallGetManager(); }
}