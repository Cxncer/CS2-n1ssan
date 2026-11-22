// n1ssan-dll / src/hooks/local_spray.cpp
//
// Port of Lootline 1.5.5's features/unboxer/local_spray.cpp for the Armory's
// graffiti. Same mechanism, nothing invented:
//   * client.dll's spray action (the one the spray wheel calls) is hooked; when
//     the player holds an Armory graffiti nothing is sent to the server and the
//     side effect is produced here instead.
//   * GetSprayApplicationError's check gives the trace of where the player
//     looks: the spray point and the wall normal, exactly what the game uses.
//   * CPlayerSprayDecalRenderHelper (0x30 bytes) is the decal: SetKit loads
//     materials/decals/sprays/<kit>.vtex, Place puts it in the world and is
//     called every frame by the game for its own graffiti, Release takes it
//     down. Ours are kept in a fixed array and drawn the same way.
//   * The pawn's m_flNextSprayDecalTime is set so the spray wheel shows CS2's
//     45 s cooldown, which is the behaviour the game already had on its own.

#include "hooks/local_spray.h"

#include <windows.h>

#include <array>
#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <vector>

#include "diagnostics/log.h"
#include "hooks/minhook_dynamic.h"
#include "inventory/armory_inventory.h"
#include "inventory/engine_schema_diagnostic.h"
#include "inventory/loadout_api.h"
#include "inventory/loot_patterns.h"
#include "memory/scanner.h"
#include "sdk/entities.h"

namespace
{
    constexpr uint16_t kDefinitionSprayPaint = 1349;

    // Lootline's signatures and structure layout (client.dll, 2026-10-08 build).
    // The check the game runs before it lets a spray out: (pawn, CGameTrace* out,
    // Vector* forward out, Vector* left out) - null means "this spot is fine".
    using SprayCheckFn = const char* (__fastcall*)(void*, void*, float*, float*);
    using SetKitFn = void(__fastcall*)(void*, int);
    using PlaceFn = bool(__fastcall*)(void*, const float*, const float*, const float*, int, bool);
    using ReleaseFn = void(__fastcall*)(void*);
    using SprayActionFn = std::uint64_t(__fastcall*)(int);
    // The response rules' level shutdown: (manager). It runs while the world
    // still exists, which is the last moment a decal can be released - after it
    // the scene system deletes the decals' scene objects itself.
    using LevelShutdownFn = std::uintptr_t(__fastcall*)(void*);

    constexpr size_t TRACE_BYTES = 0x100;        // the game's is 0xC0
    constexpr size_t TRACE_END = 0x84;           // m_vecEndPos
    constexpr size_t TRACE_NORMAL = 0x90;        // m_vecNormal
    constexpr size_t HELPER_BYTES = 0x40;        // the game's is 0x30
    constexpr size_t HELPER_CREATION_TIME = 4;
    constexpr size_t HELPER_LOADING = 0x28;
    constexpr size_t GLOBALS_CLOCK = 0x30;
    constexpr size_t MAX_SPRAYS = 12;
    constexpr float COOLDOWN_SECONDS = 45.0f;
    constexpr float GONE_AFTER_SECONDS = 361.0f;

    SprayCheckFn g_check = nullptr;
    SetKitFn     g_setKit = nullptr;
    PlaceFn      g_place = nullptr;
    ReleaseFn    g_release = nullptr;
    SprayActionFn g_originalSprayAction = nullptr;
    LevelShutdownFn g_originalLevelShutdown = nullptr;
    void* const* g_globals = nullptr;

    bool g_ready = false;

    struct Spray
    {
        bool active = false;
        bool broken = false;
        alignas(16) std::uint8_t helper[HELPER_BYTES]{};
        float position[3]{};
        float normal[3]{};
        float negatedLeft[3]{};
        int kit = 0;
        int tint = 0;
        ULONGLONG placedAt = 0;
        float createdAt = -1.0f;
    };

    // Main thread only. The helpers are never freed: the decal's async material
    // load keeps a pointer to its own helper.
    std::array<Spray, MAX_SPRAYS> g_sprays;
    ULONGLONG g_lastSprayAt = 0;

    bool Finite(const float* v)
    {
        return std::isfinite(v[0]) && std::isfinite(v[1]) && std::isfinite(v[2]);
    }

    float Length(const float* v)
    {
        return std::sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    }

    // A helper as the game makes one: no kit (-1), creation time -1.
    void ResetHelper(std::uint8_t* helper)
    {
        std::memset(helper, 0, HELPER_BYTES);
        const std::int32_t noKit = -1;
        const float never = -1.0f;
        std::memcpy(helper, &noKit, sizeof(noKit));
        std::memcpy(helper + HELPER_CREATION_TIME, &never, sizeof(never));
    }

    // Every engine call behind SEH: a signature that shifted must cost a line in
    // the log, not the process.
    const char* CallSprayCheck(void* pawn, void* trace, float* forward, float* left, bool* crashed)
    {
        __try
        {
            *crashed = false;
            return g_check(pawn, trace, forward, left);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            *crashed = true;
            return nullptr;
        }
    }

    bool CallSetKit(void* helper, int kit)
    {
        __try
        {
            g_setKit(helper, kit);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool CallPlace(void* helper, const float* position, const float* normal,
                   const float* negatedLeft, int tint)
    {
        __try
        {
            g_place(helper, position, normal, negatedLeft, tint, false);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool CallRelease(void* helper)
    {
        __try
        {
            g_release(helper);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    // The game's clock, the same value Place compares a decal's creation time
    // with. Without it the pawn's simulation time is the fallback.
    bool ReadClock(float* now)
    {
        if (!g_globals)
            return false;

        __try
        {
            const auto* globals = static_cast<const std::uint8_t*>(*g_globals);

            if (!globals)
                return false;

            float value = 0.0f;
            std::memcpy(&value, globals + GLOBALS_CLOCK, sizeof(value));

            if (!std::isfinite(value) || value < 0.0f || value > 1.0e7f)
                return false;

            *now = value;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    uintptr_t g_simulationTimeOffset = 0;
    uintptr_t g_nextSprayTimeOffset = 0;

    bool ReadSimulationTime(const std::uint8_t* pawn, float* now)
    {
        if (!pawn || !g_simulationTimeOffset)
            return false;

        __try
        {
            float value = 0.0f;
            std::memcpy(&value, pawn + g_simulationTimeOffset, sizeof(value));

            if (!std::isfinite(value) || value <= 0.0f || value > 1.0e7f)
                return false;

            *now = value;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    // The game's own cooldown on the pawn, so the spray wheel counts down like it
    // does after a real spray.
    void SetGameCooldown(std::uint8_t* pawn)
    {
        if (!g_nextSprayTimeOffset || !g_simulationTimeOffset)
            return;

        __try
        {
            float now = 0.0f;
            std::memcpy(&now, pawn + g_simulationTimeOffset, sizeof(now));

            if (now > 0.0f && now < 1.0e7f)
            {
                const float until = now + COOLDOWN_SECONDS;
                std::memcpy(pawn + g_nextSprayTimeOffset, &until, sizeof(until));
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }

    void Remove(Spray& spray)
    {
        if (!spray.active)
            return;

        if (!CallRelease(spray.helper))
            Log("[spray] taking a decal down faulted (signature?)");

        ResetHelper(spray.helper);
        spray.active = false;
        spray.broken = false;
    }

    void RemoveAll()
    {
        for (Spray& spray : g_sprays)
            Remove(spray);
    }

    // Out of the world: the decals went with it, so they are forgotten without
    // touching the game.
    void ForgetAll()
    {
        for (Spray& spray : g_sprays)
        {
            if (!spray.active)
                continue;

            ResetHelper(spray.helper);
            spray.active = false;
            spray.broken = false;
        }
    }

    // The Armory graffiti the player holds. CS2 keeps graffiti in its no-team
    // "spray0" slot; the equipped native id decides, so a real Valve graffiti in
    // that slot still goes through the game's own spray.
    bool FindEquippedGraffiti(int& kit, int& tint)
    {
        std::vector<ArmoryInventory::ManagedItem> items;

        if (!ArmoryInventory::SnapshotManagedItems(items))
            return false;

        const std::uint64_t equipped = LoadoutApi::EquippedItemId("noteam", "spray0");

        const ArmoryInventory::ManagedItem* fallback = nullptr;

        for (const ArmoryInventory::ManagedItem& item : items)
        {
            if (item.definition != kDefinitionSprayPaint || item.stickerKit <= 0)
                continue;

            if (equipped && item.id == equipped)
            {
                kit = item.stickerKit;
                tint = item.sprayTint;
                return true;
            }

            if (!fallback)
                fallback = &item;
        }

        // No native answer for the slot: the projection's own graffiti is the
        // only one that can be equipped, so it is used. When CS2 reports another
        // item there, that one is Valve's and the game sprays it itself.
        if (!equipped && fallback)
        {
            kit = fallback->stickerKit;
            tint = fallback->sprayTint;
            return true;
        }

        return false;
    }

    // True = this spray is ours: the game's spray must not run.
    bool OnSprayAction(int slot)
    {
        int kit = 0;
        int tint = 0;

        if (!FindEquippedGraffiti(kit, tint))
            return false;

        if (!g_ready)
            return false;

        const ULONGLONG now = GetTickCount64();

        if (g_lastSprayAt != 0 && now - g_lastSprayAt < static_cast<ULONGLONG>(COOLDOWN_SECONDS * 1000.0f))
        {
            Log("[spray] cooling down - %llu s left (45 s between sprays, like CS2)",
                static_cast<unsigned long long>(
                    (static_cast<ULONGLONG>(COOLDOWN_SECONDS * 1000.0f) - (now - g_lastSprayAt) + 999) / 1000));
            return true;
        }

        auto* pawn = reinterpret_cast<std::uint8_t*>(GetLocalPawn());

        if (!pawn)
            return true;

        alignas(16) std::uint8_t trace[TRACE_BYTES]{};
        float forward[3]{}, left[3]{};
        bool crashed = false;
        const char* error = CallSprayCheck(pawn, trace, forward, left, &crashed);

        if (crashed)
        {
            Log("[spray] the game's spray check faulted (signature?) - nothing sprayed");
            return true;
        }

        if (error)
        {
            Log("[spray] can't spray there (%s)", error);
            return true;
        }

        float position[3], normal[3];
        std::memcpy(position, trace + TRACE_END, sizeof(position));
        std::memcpy(normal, trace + TRACE_NORMAL, sizeof(normal));

        if (!Finite(position) || !Finite(normal) || !Finite(left) ||
            std::fabs(Length(normal) - 1.0f) > 0.1f || Length(left) < 0.5f)
        {
            Log("[spray] the spray check gave no wall to spray on - nothing sprayed");
            return true;
        }

        Spray* target = nullptr;

        for (Spray& spray : g_sprays)
        {
            if (!spray.active)
            {
                target = &spray;
                break;
            }
        }

        if (!target)
        {
            target = &g_sprays[0];

            for (Spray& spray : g_sprays)
                if (spray.placedAt < target->placedAt)
                    target = &spray;

            Remove(*target);
        }

        ResetHelper(target->helper);

        if (!CallSetKit(target->helper, kit))
        {
            Log("[spray] loading its material faulted (signature?) - nothing sprayed");
            ResetHelper(target->helper);
            return true;
        }

        float createdAt = -1.0f;

        if (!ReadClock(&createdAt) && !ReadSimulationTime(pawn, &createdAt))
        {
            createdAt = -1.0f;
            Log("[spray] the game's clock couldn't be read - the decal may not show");
        }

        std::memcpy(target->helper + HELPER_CREATION_TIME, &createdAt, sizeof(createdAt));
        target->createdAt = createdAt;

        std::memcpy(target->position, position, sizeof(position));
        std::memcpy(target->normal, normal, sizeof(normal));
        for (int k = 0; k < 3; ++k)
            target->negatedLeft[k] = -left[k];

        target->kit = kit;
        target->tint = tint;
        target->placedAt = now;
        target->broken = false;
        target->active = true;
        g_lastSprayAt = now;

        SetGameCooldown(pawn);

        Log("[spray] graffiti on your screen only: kit=%d tint=%d slot=%d at %.0f %.0f %.0f (clock %.1f)",
            kit, tint, slot, position[0], position[1], position[2], createdAt);

        return true;
    }

    std::uint64_t __fastcall HkSprayAction(int slot)
    {
        if (OnSprayAction(slot))
            return 0;

        return g_originalSprayAction ? g_originalSprayAction(slot) : 0;
    }

    // Leaving the map / match: the decals come down here, while the world and
    // their scene objects still exist. Left alone, the scene system deletes
    // those objects at teardown and the release that follows hits
    // CScenSystem::DeleteSceneObject with !pObj->IsDeleted() - the assertion
    // this hook exists for (Lootline does the same in AgentRulesLevelShutdown).
    std::uintptr_t __fastcall HkLevelShutdown(void* manager)
    {
        int count = 0;

        for (const Spray& spray : g_sprays)
            count += spray.active ? 1 : 0;

        if (count > 0)
        {
            Log("[spray] leaving the level - %d decal(s) taken down with the world", count);

            if (g_release)
                RemoveAll();
            else
                ForgetAll();
        }

        return g_originalLevelShutdown ? g_originalLevelShutdown(manager) : 0;
    }
}

namespace LocalSpray
{
    bool Initialize()
    {
        const ModuleInfo client = GetClientModule();

        if (!client.valid())
        {
            Log("[spray] client.dll not loaded - graffiti stays with the server");
            return false;
        }

        g_check = reinterpret_cast<SprayCheckFn>(ScanPattern(client, LootPatterns::SprayCheck));
        g_setKit = reinterpret_cast<SetKitFn>(ScanPattern(client, LootPatterns::SpraySetKit));
        g_place = reinterpret_cast<PlaceFn>(ScanPattern(client, LootPatterns::SprayPlace));
        g_release = reinterpret_cast<ReleaseFn>(ScanPattern(client, LootPatterns::SprayRelease));

        const uintptr_t action = ScanPattern(client, LootPatterns::SprayAction);
        const uintptr_t clock = ScanPattern(client, LootPatterns::SprayClock);

        // mov rax, [rip + disp32]: the variable holding the game's globals pointer.
        if (clock)
        {
            std::int32_t displacement = 0;
            std::memcpy(&displacement, reinterpret_cast<const void*>(clock + 3), sizeof(displacement));
            g_globals = reinterpret_cast<void* const*>(clock + 7 + displacement);
        }

        if (!g_globals)
            Log("[spray] the game's clock wasn't found (SprayClock) - the pawn's time is used instead");

        for (Spray& spray : g_sprays)
            ResetHelper(spray.helper);

        g_simulationTimeOffset = 0;
        ResolveEngineSchemaField("C_BaseEntity", "m_flSimulationTime", g_simulationTimeOffset);

        g_nextSprayTimeOffset = 0;
        ResolveEngineSchemaField("C_CSPlayerPawn", "m_flNextSprayDecalTime", g_nextSprayTimeOffset);

        if (!g_simulationTimeOffset || !g_nextSprayTimeOffset)
            Log("[spray] cooldown fields unresolved (sim=%d next=%d) - the wheel may not count down",
                g_simulationTimeOffset ? 1 : 0, g_nextSprayTimeOffset ? 1 : 0);

        if (!g_check || !g_setKit || !g_place || !g_release || !action)
        {
            Log("[spray] NOT ready - check %s, kit %s, place %s, release %s, action %s",
                g_check ? "ok" : "missing", g_setKit ? "ok" : "missing",
                g_place ? "ok" : "missing", g_release ? "ok" : "missing",
                action ? "ok" : "missing");
            return false;
        }

        if (!MH_CreateHook_p || !MH_EnableHook_p)
        {
            Log("[spray] MinHook unavailable - the spray action is not hooked");
            return false;
        }

        if (MH_CreateHook_p(reinterpret_cast<void*>(action),
                reinterpret_cast<void*>(&HkSprayAction),
                reinterpret_cast<void**>(&g_originalSprayAction)) != 0 ||
            !g_originalSprayAction)
        {
            Log("[spray] could not hook the spray action @ 0x%p", reinterpret_cast<void*>(action));
            return false;
        }

        MH_EnableHook_p(reinterpret_cast<void*>(action));

        g_ready = true;
        Log("[spray] ready: local graffiti decals hooked @ 0x%p (kit %d)", reinterpret_cast<void*>(action), kDefinitionSprayPaint);

        // The decals' release on leaving a match. Without it the scene system
        // deletes their scene objects first and CS2 asserts in
        // CScenSystem::DeleteSceneObject when the decal is released afterwards.
        const uintptr_t levelShutdown = ScanPattern(client, LootPatterns::LevelShutdown);

        if (!levelShutdown ||
            MH_CreateHook_p(reinterpret_cast<void*>(levelShutdown),
                reinterpret_cast<void*>(&HkLevelShutdown),
                reinterpret_cast<void**>(&g_originalLevelShutdown)) != 0 ||
            !g_originalLevelShutdown)
        {
            Log("[spray] the level shutdown wasn't hooked (signature?) - decals may outlive the map");
        }
        else
        {
            MH_EnableHook_p(reinterpret_cast<void*>(levelShutdown));
            Log("[spray] decals are taken down on level shutdown @ 0x%p", reinterpret_cast<void*>(levelShutdown));
        }

        return true;
    }

    void MainThreadTick()
    {
        if (!g_ready || !g_place)
            return;

        if (!GetLocalPawn())
        {
            ForgetAll();
            return;
        }

        float now = 0.0f;
        const bool haveClock = ReadClock(&now);

        // Every frame, like the game does for its own graffiti: the decal stays
        // where it was sprayed, paints in over ~1.5 s and fades after ~6 min.
        for (Spray& spray : g_sprays)
        {
            if (!spray.active)
                continue;

            if (haveClock && spray.createdAt >= 0.0f &&
                (now > spray.createdAt + GONE_AFTER_SECONDS || now + 5.0f < spray.createdAt))
            {
                Remove(spray);
                continue;
            }

            if (spray.broken)
                continue;

            // Still loading its material (Place skips the decal while the byte is
            // set): keep its creation time with the clock so the paint-in starts
            // when it is first drawn.
            if (haveClock && spray.helper[HELPER_LOADING] != 0)
            {
                spray.createdAt = now;
                std::memcpy(spray.helper + HELPER_CREATION_TIME, &now, sizeof(now));
            }

            if (!CallPlace(spray.helper, spray.position, spray.normal, spray.negatedLeft, spray.tint))
            {
                spray.broken = true;
                Log("[spray] placing a decal faulted (signature?) - that one is left alone");
            }
        }
    }
}
