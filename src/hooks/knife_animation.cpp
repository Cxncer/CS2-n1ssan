// n1ssan-dll / src/hooks/knife_animation.cpp
// Ported from Chadware's knife_animation.cpp. Same logic, raw pointers.

#include "hooks/knife_animation.h"
#include "hooks/weapon_graph.h"
#include "sdk/entities.h"
#include "sdk/functions.h"
#include "sdk/handles.h"
#include "config/offsets.h"
#include "diagnostics/log.h"
#include "memory/access.h"
#include "memory/scanner.h"
#include "skin/apply.h"
#include <windows.h>
#include "hooks/minhook_dynamic.h"
#include <atomic>

namespace
{
    using KnifeInspectFn = __int64(__fastcall*)(__int64 thisptr);
    using KnifeReflectFn = __int64(__fastcall*)(__int64 thisptr, __int64 a2, __int64 a3);

    KnifeInspectFn oKnifeInspect = nullptr;
    KnifeReflectFn oKnifeReflect = nullptr;

    __int64 __fastcall HkKnifeInspect(__int64 thisptr)
    {
        KnifeAnimation::InspectContext ctx{};
        __try { ctx = KnifeAnimation::BeforeInspect((std::uintptr_t)thisptr); }
        __except (EXCEPTION_EXECUTE_HANDLER) {}

        const __int64 result = oKnifeInspect ? oKnifeInspect(thisptr) : 0;

        __try { KnifeAnimation::AfterInspect((std::uintptr_t)thisptr, ctx, (char)result); }
        __except (EXCEPTION_EXECUTE_HANDLER) {}

        return result;
    }

    __int64 __fastcall HkKnifeReflect(__int64 thisptr, __int64 a2, __int64 a3)
    {
        KnifeAnimation::ReflectionContext ctx{};
        __try { ctx = KnifeAnimation::BeforeReflection((std::uintptr_t)thisptr, 0); }
        __except (EXCEPTION_EXECUTE_HANDLER) {}

        const __int64 result = oKnifeReflect ? oKnifeReflect(thisptr, a2, a3) : 0;

        __try { KnifeAnimation::AfterReflection((std::uintptr_t)thisptr, 0, ctx); }
        __except (EXCEPTION_EXECUTE_HANDLER) {}

        return result;
    }

    constexpr int Inspecting = 1000;
    constexpr int InspectOutro = 1001;
    constexpr int InspectIntroPhase = 1;
    constexpr int InspectOutroPhase = 3;
    constexpr int ResetClear = 0;
    constexpr int ResetPulse = 1;

    using KnifeAnimation::Snapshot;
    using KnifeAnimation::ViewmodelIdentity;

    std::atomic_bool g_ready{ false };
    std::atomic_bool g_stopping{ false };
    std::atomic<DWORD> g_gameThread{ 0 };

    uintptr_t g_off_Ctrl_Action = 0;
    uintptr_t g_off_Ctrl_Reset = 0;
    uintptr_t g_off_Ctrl_Extra = 0;

    struct ReentryState
    {
        std::uintptr_t pawn = 0;
        std::uint32_t pawnHandle = 0xFFFFFFFF;
        float spawnTime = 0;
        ViewmodelIdentity viewmodel;
        Snapshot previousViewmodel;
        Snapshot request;
        float inspectStartTime = 0;
        bool hasViewmodel = false;
        bool hasRequest = false;
        bool hasInspectStart = false;
    };

    ReentryState g_reentry;

    ParameterNode* ReadParamNode(uintptr_t controller, uintptr_t off)
    {
        uintptr_t refAddr = controller + off;
        ParameterGraph* graph = nullptr;
        int16_t index = -1;
        __try
        {
            graph = *reinterpret_cast<ParameterGraph**>(refAddr + 0x8);
            index = *reinterpret_cast<int16_t*>(refAddr + 0x10);
        }
        __except (1) { return nullptr; }

        if (!graph || index < 0) return nullptr;
        ParameterNode** nodes = nullptr;
        __try { nodes = graph->nodes; }
        __except (1) { return nullptr; }
        if (!nodes) return nullptr;
        __try { return nodes[index]; }
        __except (1) { return nullptr; }
    }

    struct ControllerResultsView { uintptr_t graph; uint16_t cachedState; float cachedTime; int phase; bool complete; bool blockInspect; };

    bool ReadControllerResults(uintptr_t controller, ControllerResultsView& out)
    {
        __try
        {
            const auto* base = reinterpret_cast<const uint8_t*>(controller);
            out.graph = *(uintptr_t*)(base + 0x8);
            out.cachedState = *(uint16_t*)(base + 0x2A0);
            out.cachedTime = *(float*)(base + 0x2B0);
            out.complete = *(bool*)(base + 0x2B4);
            out.blockInspect = *(bool*)(base + 0x2BA);
            out.phase = *(int*)(base + 0x2BC);
            return true;
        }
        __except (1) { return false; }
    }

    struct WeaponOffsets { uintptr_t State; uintptr_t StateTime; uintptr_t CancelTime; uintptr_t Pending; uintptr_t ShouldLoop; uintptr_t ItemDef; uintptr_t Subclass; uintptr_t OwnerHandle; };
    WeaponOffsets g_w;

    struct PawnOffsets { uintptr_t Health; uintptr_t SpawnTime; uintptr_t HudModelArms; uintptr_t Controller; };
    PawnOffsets g_p;

    std::uintptr_t ResolveLocalKnife(uintptr_t& pawnOut, uintptr_t& servicesOut)
    {
        pawnOut = 0; servicesOut = 0;
        if (GetCurrentThreadId() != g_gameThread.load(std::memory_order_acquire)) return 0;

        std::uintptr_t pawn = GetLocalPawn();
        if (!pawn) return 0;
        int32_t hp = 0; SafeReadI32(pawn + g_p.Health, hp); if (hp <= 0) return 0;

        uintptr_t services = 0;
        SafeReadQword(pawn + g_off.PAWN_WeaponServices, services);
        if (!services) return 0;

        uint32_t activeHandle = 0;
        SafeReadU32(services + g_off.WS_ActiveWeapon, activeHandle);
        if (!HandleValid(activeHandle)) return 0;

        uintptr_t weapon = GetEntityByHandle(activeHandle);
        if (!weapon) return 0;

        uint32_t wh = 0;
        SafeReadU32(weapon + 0x10, wh);
        if ((wh & 0x7FFF) != (activeHandle & 0x7FFF)) return 0;

        uintptr_t item = weapon + g_off.EE_AttrManager + g_off.AC_Item;
        uint16_t def = 0;
        SafeReadU16(item + g_off.EIV_ItemDefIndex, def);
        if (!IsKnifeDefinition(def)) return 0;

        Log("[knife-anim] pawn=0x%p weapon=0x%p def=%u handle=0x%08X",
            (void*)pawn, (void*)weapon, def, activeHandle);

        pawnOut = pawn;
        servicesOut = services;
        return weapon;
    }

    void ReadSnapshot(Snapshot& row, uintptr_t weapon, uintptr_t controller, uintptr_t services)
    {
        __try
        {
            if (weapon)
            {
                row.weapon = weapon;
                row.handle = *(uint32_t*)(weapon + 0x10);
                uintptr_t item = weapon + g_off.EE_AttrManager + g_off.AC_Item;
                uint16_t def = 0; SafeReadU16(item + g_off.EIV_ItemDefIndex, def);
                row.definition = def;
                int32_t subclass = 0; SafeReadI32(weapon + g_off.BE_nSubclassID, subclass);
                row.subclass = (uint32_t)subclass;
                SafeReadI32(weapon + g_w.State, row.state);
                SafeReadFloat(weapon + g_w.StateTime, row.stateTime);
                SafeReadFloat(weapon + g_w.CancelTime, row.cancelTime);
                SafeReadI32(weapon + g_w.Pending, row.pending);
                SafeReadI32(weapon + g_w.ShouldLoop, row.shouldLoop);
                if (services) {
                    int32_t blocked = 0;
                    SafeReadI32(services + 0x60, blocked);
                    row.serviceBlocked = blocked;
                }
            }
            if (controller)
            {
                row.controller = controller;
                ControllerResultsView rv{};
                if (ReadControllerResults(controller, rv))
                {
                    row.graph = rv.graph;
                    row.cachedState = rv.cachedState;
                    row.cachedTime = rv.cachedTime;
                    row.phase = rv.phase;
                    row.complete = rv.complete ? 1 : 0;
                    row.graphBlocked = rv.blockInspect ? 1 : 0;
                }
                if (auto* n = ReadParamNode(controller, g_off_Ctrl_Action)) row.action = n->value.symbol;
                if (auto* n = ReadParamNode(controller, g_off_Ctrl_Reset))  row.reset = n->value.boolean ? 1 : 0;
                if (auto* n = ReadParamNode(controller, g_off_Ctrl_Extra))  row.extra = n->value.symbol;
            }
        }
        __except (1) { row.readFault = 1; }
    }

    bool SameKnife(const Snapshot& a, const Snapshot& b)
    {
        return a.weapon == b.weapon && a.handle == b.handle && a.definition == b.definition && a.subclass == b.subclass;
    }

    bool CanCorrectKnife(uintptr_t weapon, uintptr_t pawn, uintptr_t activeWeapon)
    {
        if (!g_ready.load(std::memory_order_acquire) || g_stopping.load(std::memory_order_acquire)) return false;
        if (GetCurrentThreadId() != g_gameThread.load(std::memory_order_acquire)) return false;
        if (!weapon || weapon != activeWeapon) return false;
        if (!pawn) return false;

        int32_t hp = 0; SafeReadI32(pawn + g_p.Health, hp); if (hp <= 0) return false;

        uint32_t ownerHandle = 0;
        SafeReadU32(weapon + g_off.BE_hOwnerEntity, ownerHandle);
        if (!HandleValid(ownerHandle)) return false;
        if (GetEntityByHandle(ownerHandle) != pawn) return false;

        uintptr_t item = weapon + g_off.EE_AttrManager + g_off.AC_Item;
        uint16_t def = 0; SafeReadU16(item + g_off.EIV_ItemDefIndex, def);
        if (!IsKnifeDefinition(def) || def < 500) return false;

        float spawnTime = 0; SafeReadFloat(pawn + g_p.SpawnTime, spawnTime);
        uint32_t pawnHandle = *(uint32_t*)(pawn + 0x10);
        if (g_reentry.pawn != pawn || g_reentry.pawnHandle != pawnHandle || g_reentry.spawnTime != spawnTime)
        {
            g_reentry = {};
            g_reentry.pawn = pawn;
            g_reentry.pawnHandle = pawnHandle;
            g_reentry.spawnTime = spawnTime;
        }
        return true;
    }

    void ObserveInspect(ReentryState& state, const Snapshot& before, const Snapshot& after, bool accepted)
    {
        state.hasRequest = accepted && !before.readFault && !after.readFault && SameKnife(before, after) &&
            before.state == Inspecting && after.state == Inspecting && before.stateTime == after.stateTime &&
            after.cancelTime == 0 && after.pending == 0 && after.serviceBlocked == 0;
        state.request = after;
    }

    bool SameViewmodel(const ReentryState& state, const Snapshot& before, ViewmodelIdentity viewmodel)
    {
        return state.hasViewmodel && state.viewmodel == viewmodel && SameKnife(state.previousViewmodel, before) &&
            state.previousViewmodel.controller == before.controller && state.previousViewmodel.graph == before.graph;
    }

    bool NeedsStaleResetSuppression(const ReentryState& state, const Snapshot& before, const Snapshot& after, ViewmodelIdentity viewmodel)
    {
        const bool knownInspect = state.hasInspectStart && !state.hasRequest && SameViewmodel(state, before, viewmodel) &&
            SameKnife(before, after) && before.state == Inspecting && after.state == Inspecting &&
            before.stateTime == state.inspectStartTime && after.stateTime == state.inspectStartTime;
        const bool rewoundOutro = before.cachedState == InspectOutro && before.cachedTime > after.stateTime &&
            state.previousViewmodel.cachedState == before.cachedState && state.previousViewmodel.cachedTime == before.cachedTime &&
            after.cachedState == Inspecting && after.cachedTime == after.stateTime;
        const bool nativeRestart = before.reset == ResetClear && after.reset == ResetPulse && before.action != 0 && before.action == after.action &&
            state.previousViewmodel.action == before.action && before.extra == 0 && after.extra == 0;
        const bool uninterrupted = before.shouldLoop == 0 && after.shouldLoop == 0 && after.cancelTime == 0 &&
            after.pending == 0 && after.serviceBlocked >= 0 && after.graphBlocked >= 0 &&
            before.phase >= InspectIntroPhase && before.phase <= InspectOutroPhase && after.phase == before.phase;
        return knownInspect && rewoundOutro && nativeRestart && uninterrupted && !before.readFault && !after.readFault &&
            before.graph != 0 && before.graph == after.graph && before.controller == after.controller;
    }

    bool NeedsReentry(ReentryState& state, const Snapshot& before, const Snapshot& after, ViewmodelIdentity viewmodel)
    {
        const bool sameGraph = SameViewmodel(state, before, viewmodel);
        const bool freshLoop = sameGraph && state.previousViewmodel.shouldLoop == 0 && after.shouldLoop == 1;
        const bool matchingRequest = state.hasRequest && SameKnife(state.request, after) && state.request.stateTime == after.stateTime;
        const bool unchangedInspect = SameKnife(before, after) && before.state == Inspecting && after.state == Inspecting &&
            before.stateTime == after.stateTime && before.cachedState == Inspecting &&
            before.cachedTime == before.stateTime && after.cachedState == Inspecting && after.cachedTime == after.stateTime;
        const bool unblockedOutro = before.phase == InspectOutroPhase && after.phase == InspectOutroPhase && after.complete >= 0 && after.graphBlocked == 0 &&
            after.cancelTime == 0 && after.pending == 0 && after.serviceBlocked == 0;
        const bool missingReset = before.reset == ResetClear && after.reset == ResetClear && before.action != 0 && before.action == after.action && after.extra != 0;
        const bool correct = freshLoop && matchingRequest && unchangedInspect && unblockedOutro && missingReset &&
            !before.readFault && !after.readFault && before.graph != 0 &&
            before.graph == after.graph && before.controller == after.controller;
        state.hasRequest = false;
        if (!sameGraph || after.readFault || after.graph == 0 || (after.state != Inspecting && after.state != InspectOutro) ||
            after.cancelTime != 0 || after.pending != 0) state.hasInspectStart = false;
        if (!after.readFault && after.graph != 0 && after.state == Inspecting && after.cachedState == Inspecting &&
            after.cachedTime == after.stateTime && after.action != 0 && after.cancelTime == 0 && after.pending == 0 &&
            (!state.hasInspectStart || after.stateTime >= state.inspectStartTime))
        {
            state.inspectStartTime = after.stateTime;
            state.hasInspectStart = true;
        }
        state.hasViewmodel = !after.readFault && after.graph != 0;
        state.viewmodel = viewmodel;
        state.previousViewmodel = after;
        return correct;
    }

    bool WriteReentry(uintptr_t controller)
    {
        __try
        {
            auto* reset = ReadParamNode(controller, g_off_Ctrl_Reset);
            auto* extra = ReadParamNode(controller, g_off_Ctrl_Extra);
            if (!reset || !extra || reset->value.boolean || !extra->value.symbol) return false;
            extra->value.symbol = 0;
            reset->value.boolean = true;
            return true;
        }
        __except (1) { return false; }
    }

    bool ClearStaleReset(uintptr_t controller, const Snapshot& expected)
    {
        __try
        {
            ControllerResultsView rv{};
            if (!ReadControllerResults(controller, rv)) return false;
            auto* reset = ReadParamNode(controller, g_off_Ctrl_Reset);
            auto* action = ReadParamNode(controller, g_off_Ctrl_Action);
            auto* extra = ReadParamNode(controller, g_off_Ctrl_Extra);
            if (expected.reset != ResetPulse || expected.extra != 0 || !reset || !reset->value.boolean || !action || !extra ||
                rv.graph != expected.graph || rv.cachedState != expected.cachedState ||
                rv.cachedTime != expected.cachedTime || action->value.symbol != expected.action || extra->value.symbol != 0)
                return false;
            reset->value.boolean = false;
            return true;
        }
        __except (1) { return false; }
    }

    ViewmodelIdentity LocalViewmodel(uintptr_t controller, uintptr_t pawn)
    {
        ViewmodelIdentity out{};
        if (!controller || GetCurrentThreadId() != g_gameThread.load(std::memory_order_acquire)) return out;
        __try
        {
            if (!pawn) return out;
            uint32_t handle = 0;
            SafeReadU32(pawn + g_p.HudModelArms, handle);
            if (!HandleValid(handle)) return out;
            uintptr_t arms = GetEntityByHandle(handle);
            if (!arms) return out;
            uint32_t ownerH = 0; SafeReadU32(arms + g_off.BE_hOwnerEntity, ownerH);
            if (!HandleValid(ownerH) || GetEntityByHandle(ownerH) != pawn) return out;
            out.entity = (void*)arms;
            out.handle = handle;
            return out;
        }
        __except (1) { return out; }
    }

    bool PrepareReflection(ReentryState& state, const Snapshot& before)
    {
        const bool reset = before.cachedState == 0 && before.cachedTime == 0 && before.action == 0 &&
            before.reset == ResetClear && before.phase == 0;
        if (before.readFault || before.graph == 0 || reset) { state = {}; return false; }
        return true;
    }
}

void KnifeAnimation::Initialize()
{
    g_stopping.store(false, std::memory_order_release);

    g_w.State = 0x19A8;
    g_w.StateTime = 0x19AC;
    g_w.CancelTime = 0x19B0;
    g_w.Pending = 0x19B4;
    g_w.ShouldLoop = 0x19B5;

    g_off_Ctrl_Action = 0xC0;
    g_off_Ctrl_Reset = 0xD8;
    g_off_Ctrl_Extra = 0x270;

    g_p.Health = g_off.PAWN_Health;
    g_p.SpawnTime = g_off.PAWN_SpawnTime;
    g_p.HudModelArms = g_off.PAWN_hHudModelArms;
    g_p.Controller = g_off.PAWN_hController;

    g_ready.store(pBuildModernSkin != nullptr, std::memory_order_release);

    Log("[knife-anim] initialized (State=0x%X Action=0x%X Reset=0x%X Extra=0x%X)",
        (uint32_t)g_w.State, (uint32_t)g_off_Ctrl_Action,
        (uint32_t)g_off_Ctrl_Reset, (uint32_t)g_off_Ctrl_Extra);

    ModuleInfo client = GetClientModule();
    if (!client.valid()) { Log("[knife-anim] client module not ready — hooks not installed"); return; }

    // --- Hook KnifeInspect ---
    {
        const uintptr_t addr = ScanPattern(client,
            "40 53 48 83 EC 40 48 8B 01 48 8B D9 FF 90 F0 0C 00 00 84 C0 75 ? 48 83 C4 40 5B C3");
        if (addr)
        {
            if (MH_CreateHook_p && MH_EnableHook_p &&
                MH_CreateHook_p((void*)addr, (void*)&HkKnifeInspect, (void**)&oKnifeInspect) == 0)
            {
                MH_EnableHook_p((void*)addr);
                Log("[knife-anim] KnifeInspect @ 0x%p HOOKED", (void*)addr);
            }
            else Log("[knife-anim] KnifeInspect @ 0x%p CREATE FAILED (ptr=%p)", (void*)addr, (void*)MH_CreateHook_p);
        }
        else Log("[knife-anim] KnifeInspect pattern not found");
    }

    // --- Hook KnifeReflect ---
    {
        const uintptr_t addr = ScanPattern(client,
            "40 55 53 56 57 41 57 48 8D 6C 24 C9 48 81 EC A0 00 00 00 48 8D 05 ? ? ? ? 48 C7 45 CF B5 00 00 00 48 89 45 C7 4C 8D 45 E7 0F 10 45 C7 48 8D 05 ? ? ? ?");
        if (addr)
        {
            if (MH_CreateHook_p && MH_EnableHook_p &&
                MH_CreateHook_p((void*)addr, (void*)&HkKnifeReflect, (void**)&oKnifeReflect) == 0)
            {
                MH_EnableHook_p((void*)addr);
                Log("[knife-anim] KnifeReflect @ 0x%p HOOKED", (void*)addr);
            }
            else Log("[knife-anim] KnifeReflect @ 0x%p CREATE FAILED (ptr=%p)", (void*)addr, (void*)MH_CreateHook_p);
        }
        else Log("[knife-anim] KnifeReflect pattern not found");
    }
}

KnifeAnimation::InspectContext KnifeAnimation::BeforeInspect(std::uintptr_t weapon)
{
    InspectContext ctx;
    uintptr_t pawn = 0, services = 0;
    uintptr_t active = ResolveLocalKnife(pawn, services);
    ctx.correct = CanCorrectKnife(weapon, pawn, active);
    if (ctx.correct) ReadSnapshot(ctx.before, weapon, 0, services);
    return ctx;
}

void KnifeAnimation::AfterInspect(std::uintptr_t weapon, const InspectContext& context, char result)
{
    if (!context.correct) return;
    uintptr_t pawn = 0, services = 0;
    ResolveLocalKnife(pawn, services);
    Snapshot after;
    ReadSnapshot(after, weapon, 0, services);
    ObserveInspect(g_reentry, context.before, after, result != 0);
}

KnifeAnimation::ReflectionContext KnifeAnimation::BeforeReflection(std::uintptr_t controller, std::uintptr_t /*weapon*/)
{
    ReflectionContext ctx;
    uintptr_t pawn = 0, services = 0;
    uintptr_t active = ResolveLocalKnife(pawn, services);
    if (CanCorrectKnife(active, pawn, active)) ctx.viewmodel = LocalViewmodel(controller, pawn);
    if (ctx.viewmodel.entity)
    {
        ReadSnapshot(ctx.before, active, controller, services);
        ctx.correct = PrepareReflection(g_reentry, ctx.before);
    }
    return ctx;
}

void KnifeAnimation::AfterReflection(std::uintptr_t controller, std::uintptr_t /*weapon*/, const ReflectionContext& context)
{
    if (!context.correct || g_stopping.load(std::memory_order_acquire)) return;
    uintptr_t pawn = 0, services = 0;
    uintptr_t active = ResolveLocalKnife(pawn, services);
    Snapshot after;
    ReadSnapshot(after, active, controller, services);
    if (NeedsStaleResetSuppression(g_reentry, context.before, after, context.viewmodel))
        ClearStaleReset(controller, after);
    else if (NeedsReentry(g_reentry, context.before, after, context.viewmodel))
        WriteReentry(controller);
}

void KnifeAnimation::FrameStage(int stage)
{
    static int logged = 0;
    if (stage == 6 && logged < 3) { ++logged; Log("[knife-anim] stage=6 reached"); }
    if (stage == 6 || stage == 7) g_gameThread.store(GetCurrentThreadId(), std::memory_order_release);
    if (stage != 6 && stage != 7) return;
    if (!g_ready.load(std::memory_order_acquire) || g_stopping.load(std::memory_order_acquire)) return;

    uintptr_t pawn = 0, services = 0;
    uintptr_t weapon = ResolveLocalKnife(pawn, services);
    if (!weapon || !CanCorrectKnife(weapon, pawn, weapon)) { g_reentry = {}; return; }
    if (g_reentry.hasViewmodel)
    {
        auto prevController = g_reentry.previousViewmodel.controller;
        if (g_reentry.previousViewmodel.weapon != weapon ||
            LocalViewmodel(prevController, pawn) != g_reentry.viewmodel)
            g_reentry = {};
    }
}

void KnifeAnimation::Shutdown()
{
    g_stopping.store(true, std::memory_order_release);
    g_ready.store(false, std::memory_order_release);
}