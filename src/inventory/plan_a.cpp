#include "inventory/plan_a.h"
#include "inventory/loot_schema.h"
#include "inventory/loot_socache.h"
#include "inventory/loadout.h"
#include "diagnostics/log.h"
#include "memory/access.h"
#include "memory/scanner.h"

#include <windows.h>
#include <cstdint>

namespace
{
    constexpr uint64_t FAKE_ID_PREFIX = 0x8000000000000000ull;
    bool g_started = false;
    bool g_initialized = false;

    // Resolve CEconItemSystem* via the same pattern schema_probe used (48 8B 1D ? ? ? ? 4D 8B F5).
    // g_esResolved is defined in loot_schema.cpp; we write to it here.
    bool ResolveEconSystem()
    {
        if (g_esResolved) return true;

        ModuleInfo client = GetClientModule();
        if (!client.valid()) return false;

        const uint8_t* base = reinterpret_cast<const uint8_t*>(client.base);
        const size_t sz = client.size;
        __try
        {
            for (size_t i = 0; i + 9 < sz; ++i)
            {
                if (base[i] != 0x48 || base[i + 1] != 0x8B || base[i + 2] != 0x1D) continue;
                if (base[i + 7] != 0x4D || base[i + 8] != 0x8B) continue;
                const int32_t disp = *reinterpret_cast<const int32_t*>(base + i + 3);
                const uintptr_t instrEnd = client.base + i + 7;
                const uintptr_t ptrAddr = instrEnd + (intptr_t)disp;
                if (ptrAddr < client.base || ptrAddr + 8 > client.base + client.size) continue;
                uintptr_t es = 0;
                if (!SafeReadQword(ptrAddr, es)) continue;
                if (es < 0x10000 || client.inside(es)) continue;

                g_esResolved = es;
                Log("[plan-a] CEconItemSystem* = 0x%p (stored)", (void*)es);
                return true;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
        return false;
    }

    void InjectAll()
    {
        if (!g_initialized) return;
        if (!LootSOCache::WaitForInventory(2000)) return;

        int created = 0, existed = 0, failed = 0;
        for (const auto& kv : g_targets)
        {
            const TargetSkin& t = kv.second;
            if (t.defIndex == 0) continue;

            LootSOCache::NewItem n{};
            n.id = PlanA::FakeIdForDef(t.defIndex);
            n.definition = t.defIndex;
            n.quality = t.statTrak ? 9 : (t.defIndex >= 500 ? 3 : 4);
            n.rarity = 6;
            n.paintKit = t.paintKit;
            n.seed = t.resolvedSeed;
            n.wear = t.wear;
            n.statTrak = t.statTrak ? 0 : -1;

            switch (LootSOCache::Create(n))
            {
            case LootSOCache::CreateResult::Ok:              ++created; break;
            case LootSOCache::CreateResult::AlreadyExists:   ++existed; break;
            default:                                          ++failed;  break;
            }
        }
        Log("[plan-a] inject: created=%d existed=%d failed=%d", created, existed, failed);
    }
}

namespace PlanA
{
    uint64_t FakeIdForDef(uint16_t defIndex)
    {
        return FAKE_ID_PREFIX | (uint64_t)defIndex;
    }

    void Start()
    {
        if (g_started) return;
        g_started = true;

        if (!ResolveEconSystem())
        {
            Log("[plan-a] CEconItemSystem* not resolved — abort");
            return;
        }
        if (!LootSchema::Init())
        {
            Log("[plan-a] LootSchema init failed: %s", LootSchema::LastError());
            return;
        }
        g_initialized = true;
        Log("[plan-a] ready, will inject on first stage-6");
        InjectAll();
    }

    void EnsureAllItems()
    {
        if (!g_initialized) return;
        if (LootSOCache::HasItem(FakeIdForDef(4))) return;
        InjectAll();
    }
}