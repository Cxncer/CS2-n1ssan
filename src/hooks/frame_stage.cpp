// n1ssan-dll / src/hooks/frame_stage.cpp
// Verbatim n1ssan-matchdetect v1.1 logic + match state machine + skin apply.
//
// Matchdetect parts kept IDENTICAL:
//   - vtable overwrite on Source2Client002 slot 36
//   - dwLocalPlayerPawn direct read
//   - dwLocalPlayerController → m_hPlayerPawn → ResolveEntity
//   - stage histogram tracking
//   - Snapshot() every 5s
//
// Additions:
//   - match state machine: IDLE ↔ IN_MATCH, logged on transition
//   - skin apply pipeline while IN_MATCH
//   - AutoOffsets: runtime-resolved addresses preferred over hardcoded RVAs

#include "hooks/frame_stage.h"
#include "sdk/entities.h"
#include "sdk/functions.h"
#include "sdk/handles.h"
#include "skin/dispatch.h"
#include "skin/gloves.h"
#include "skin/stattrak_counter.h"
#include "skin/agents.h"
#include "config/offsets.h"
#include "config/auto_offsets.h"
#include "diagnostics/log.h"
#include "diagnostics/armory_status.h"
#include "inventory/loadout.h"
#include "memory/access.h"
#include "memory/scanner.h"
#include "hooks/knife_animation.h"
#include "hooks/lineup.h"
#include "inventory/plan_a.h"
#include "inventory/armory_inventory.h"
#include "inventory/auto_accept.h"
#include "inventory/native_equipment.h"
#include "inventory/attachments.h"
#include "inventory/charm.h"
#include "inventory/native_apply.h"
#include "inventory/runtime_mode.h"
#include "skin/apply.h"
#include "sdk/scene_node.h"
#include "skin/glove_model_refresh.h"

#include <windows.h>
#include <cstdint>
#include <atomic>
#include <cmath>

// ---- matchdetect offsets (fallback if AutoOffsets hasn't resolved yet) ----
static constexpr uintptr_t RVA_PLOCALPLAYERCONTROLLER = 0x253EEF8;
static constexpr uintptr_t RVA_LOCALPLAYERPAWN_LOCAL = 0x25676D8;
static constexpr uintptr_t RVA_ENTITY_LIST_LOCAL = 0x271C8B8;
static constexpr uintptr_t GES_OFF_HIGHEST_ENTITY = 0x2120;
static constexpr uintptr_t GES_OFF_CHUNK_TABLE = 0x10;
static constexpr uintptr_t GES_OFF_CHUNK_STRIDE = 0x70;
static constexpr uint32_t  CTRL_OFF_PLAYERPAWN = 0x92C;
static constexpr uintptr_t CTRL_OFF_CONNECTED = 0x6F4;   // PlayerConnectedState: 0 = Connected
static constexpr uintptr_t CTRL_OFF_PAWN_ALIVE = 0x934;  // CCSPlayerController::m_bPawnIsAlive
static constexpr uintptr_t PAWN_OFF_HEALTH = 0x34C;
static constexpr int       VT_SOURCE2CLIENT_FSN = 36;
static constexpr uint64_t SKIN_APPLY_INTERVAL_MS = 250;

// While dead only the frames right after the kill are left alone; after that the
// pass resumes slowly, so the death camera and the spectated viewmodel keep the
// skins. Skipping the whole death camera was what made a gun "sometimes" show
// the default skin.
static constexpr uint64_t SKIN_APPLY_DEAD_INTERVAL_MS = 1000;
static constexpr uint64_t APPLY_DEAD_QUIET_MS = 400;

// A match accepted, a map loaded or a round started: every equipped weapon is
// written during this window, before the player could ask for it by switching.
static constexpr uint64_t EAGER_WINDOW_MS = 4000;

// A full sweep is expected to finish inside the eager window, so it may spend far
// longer per pass while the map or the round is loading.
static constexpr uint64_t APPLY_PASS_BUDGET_EAGER_MS = 40;

// Faster than the normal cadence, but not every frame: the two minutes of freeze
// time a round gives are enough to sweep everything without paying a 40 ms pass
// on each of several hundred frames.
static constexpr uint64_t SKIN_APPLY_EAGER_INTERVAL_MS = 150;
static uint64_t g_eagerUntilMs = 0;
static uint64_t g_deadSinceMs = 0;

// ---- matchdetect state (verbatim) ----
typedef void(__fastcall* Fsn_t)(void* client, int stage);
static Fsn_t    g_origFsn = nullptr;
static uintptr_t g_hookTarget = 0;

static volatile LONG g_fsnCount = 0;
static volatile LONG g_stage5Count = 0;
static volatile LONG g_lastStage = -1;
static volatile LONG g_stageHistogram[16] = {};

static bool g_gloveUpdatePending = false;

// ---- match state ----
enum class MatchState { IDLE, IN_MATCH };
static MatchState g_matchState = MatchState::IDLE;
static uint64_t   g_lastDetectLogMs = 0;
static uint64_t   g_lastInMatchMs = 0;
static uint64_t   g_lastApplyMs = 0;
static uintptr_t g_lastModelCachePawn = 0;
// Spawn-time refresh is guarded: see the burst check in FsnDetour.

// ---- global-address helpers: prefer AutoOffsets, fall back to RVA ----
static uintptr_t CtrlGlobalAddr(const ModuleInfo& client)
{
    return AutoOffsets::g_localPlayerController
        ? AutoOffsets::g_localPlayerController
        : (client.base + RVA_PLOCALPLAYERCONTROLLER);
}
static uintptr_t PawnGlobalAddr(const ModuleInfo& client)
{
    return AutoOffsets::g_localPlayerPawn
        ? AutoOffsets::g_localPlayerPawn
        : (client.base + RVA_LOCALPLAYERPAWN_LOCAL);
}
static uintptr_t EntityListGlobalAddr(const ModuleInfo& client)
{
    return AutoOffsets::g_entityList
        ? AutoOffsets::g_entityList
        : (client.base + RVA_ENTITY_LIST_LOCAL);
}

// ---- matchdetect ResolveEntity (verbatim) ----
static uintptr_t ResolveEntity(uintptr_t entitySystem, uint32_t handle, const ModuleInfo& client)
{
    if (!entitySystem || !handle || handle == 0xFFFFFFFF) return 0;
    uint32_t idx = handle & 0x7FFF;
    if (idx == 0 || idx == 0x7FFF) return 0;
    uint32_t chunkIdx = idx >> 9;
    uint32_t idxInChunk = idx & 0x1FF;

    uintptr_t chunk = 0;
    if (!SafeReadQword(entitySystem + (size_t)chunkIdx * 8 + GES_OFF_CHUNK_TABLE, chunk) || !chunk)
        return 0;
    uintptr_t ent = 0;
    if (!SafeReadQword(chunk + (size_t)idxInChunk * GES_OFF_CHUNK_STRIDE, ent) || !ent)
        return 0;
    uintptr_t vt = 0;
    if (!SafeReadQword(ent, vt) || !client.inside(vt))
        return 0;
    return ent;
}

// ---- matchdetect Snapshot (verbatim, with auto-offset addresses) ----
static void Snapshot()
{
    ModuleInfo client = GetClientModule();
    if (!client.valid()) { Log("[snap] client.dll missing"); return; }

    Log("[snap] fsnCount=%ld lastStage=%ld stage5Count=%ld",
        (long)g_fsnCount, (long)g_lastStage, (long)g_stage5Count);
    Log("[snap] stage histogram:");
    for (int i = 0; i < 16; ++i)
    {
        LONG c = g_stageHistogram[i];
        if (c > 0) Log("[snap]   stage %2d: %ld frames", i, (long)c);
    }

    uintptr_t ctrlGlobal = CtrlGlobalAddr(client);
    uintptr_t pawnGlobal = PawnGlobalAddr(client);

    uintptr_t ctrl = 0, pawn = 0;
    bool ctrlOk = SafeReadQword(ctrlGlobal, ctrl);
    bool pawnOk = SafeReadQword(pawnGlobal, pawn);

    Log("[snap] dwLocalPlayerController @ 0x%p -> 0x%p %s",
        (void*)ctrlGlobal, (void*)ctrl, ctrlOk ? "" : "(read failed)");
    Log("[snap] dwLocalPlayerPawn       @ 0x%p -> 0x%p %s",
        (void*)pawnGlobal, (void*)pawn, pawnOk ? "" : "(read failed)");

    if (pawn > 0x10000)
    {
        uintptr_t vt = 0;
        bool vtOk = SafeReadQword(pawn, vt) && client.inside(vt);
        uint32_t health = 0;
        SafeReadU32(pawn + PAWN_OFF_HEALTH, health);
        Log("[snap] pawn: vtable=0x%p inClient=%d health=%u",
            (void*)vt, (int)vtOk, health);
    }
    else
    {
        Log("[snap] pawn: null or below 0x10000 - not spawned");
    }

    if (ctrl > 0x10000)
    {
        uintptr_t vt = 0;
        bool vtOk = SafeReadQword(ctrl, vt) && client.inside(vt);
        uint32_t h = 0;
        SafeReadU32(ctrl + CTRL_OFF_PLAYERPAWN, h);
        uint32_t idx = h & 0x7FFF;
        Log("[snap] ctrl: vtable=0x%p inClient=%d m_hPlayerPawn@0x%X = 0x%08X (idx=%u)",
            (void*)vt, (int)vtOk, CTRL_OFF_PLAYERPAWN, h, idx);
    }
    else
    {
        Log("[snap] ctrl: null or below 0x10000 - not connected");
    }

    uintptr_t elGlobal = EntityListGlobalAddr(client);
    uintptr_t el = 0;
    if (SafeReadQword(elGlobal, el) && el > 0x10000)
    {
        uint32_t highest = 0;
        SafeReadU32(el + GES_OFF_HIGHEST_ENTITY, highest);
        Log("[snap] entitySystem @ 0x%p = 0x%p highestEntityIndex=%u",
            (void*)elGlobal, (void*)el, highest);

        int valid = 0;
        for (int i = 1; i <= 16; ++i)
            if (ResolveEntity(el, (uint32_t)i, client)) valid++;
        Log("[snap] entity resolution: %d/16 of indices 1..16 valid", valid);
    }
    else
    {
        Log("[snap] entitySystem: null");
    }

    if (ctrl > 0x10000 && el > 0x10000)
    {
        uint32_t h = 0;
        SafeReadU32(ctrl + CTRL_OFF_PLAYERPAWN, h);
        if (h != 0 && h != 0xFFFFFFFF)
        {
            uintptr_t resolved = ResolveEntity(el, h, client);
            Log("[snap] ctrl->pawn handle resolve: 0x%08X -> 0x%p", h, (void*)resolved);
        }
    }

    Log("[snap] ----------------------------------------");
}

// ---- matchdetect-style pawn resolution (auto-offset aware) ----
static uintptr_t MatchdetectGetPawn()
{
    ModuleInfo client = GetClientModule();
    if (!client.valid()) return 0;

    uintptr_t ctrl = 0, pawn = 0;
    SafeReadQword(CtrlGlobalAddr(client), ctrl);
    SafeReadQword(PawnGlobalAddr(client), pawn);

    // Prefer controller → handle → resolve: that path reflects in-match pawn changes
    if (ctrl >= 0x10000)
    {
        uint32_t h = 0;
        SafeReadU32(ctrl + CTRL_OFF_PLAYERPAWN, h);
        if (h != 0 && h != 0xFFFFFFFF)
        {
            uintptr_t el = 0;
            if (SafeReadQword(EntityListGlobalAddr(client), el) && el > 0x10000)
            {
                uintptr_t resolved = ResolveEntity(el, h, client);
                if (resolved > 0x10000) return resolved;
            }
        }
    }

    // Fallback: direct pawn read
    if (pawn > 0x10000) return pawn;

    return 0;
}

// ---- network connection state (engine2!NetworkGameClient) ----
// A pawn can outlive a match and the main menu itself runs a background map, so
// the pawn heuristic alone can stay latched in "in match". The network client
// reports SIGNONSTATE_FULL (6) only for a real session; the menu's background
// map carries its own flag.
static constexpr uintptr_t RVA_NETWORK_GAME_CLIENT = 0x9B88C0;
static constexpr uintptr_t RVA_NETWORK_BACKGROUND_MAP = 0x2C143F;
static constexpr uintptr_t NET_OFF_SIGNON_STATE = 0x230;
static constexpr uintptr_t NET_OFF_MAX_CLIENTS = 0x240;

struct NetworkState
{
    bool available = false;
    int32_t signOn = -1;
    int32_t maxClients = 0;
    bool backgroundMap = false;
};

static NetworkState ReadNetworkState()
{
    NetworkState state;

    ModuleInfo engine = GetModule("engine2.dll");
    if (!engine.valid()) return state;

    uintptr_t client = 0;
    if (!SafeReadQword(engine.base + RVA_NETWORK_GAME_CLIENT, client) || client < 0x10000)
        return state;

    int32_t signOn = 0;
    int32_t maxClients = 0;

    if (!SafeReadI32(client + NET_OFF_SIGNON_STATE, signOn) ||
        !SafeReadI32(client + NET_OFF_MAX_CLIENTS, maxClients))
    {
        return state;
    }

    if (signOn < 0 || signOn > 6 || maxClients < 0 || maxClients > 64)
        return state;

    uint8_t background = 0;
    const bool backgroundOk =
        SafeReadU8(engine.base + RVA_NETWORK_BACKGROUND_MAP, background) && background <= 1;

    state.available = true;
    state.signOn = signOn;
    state.maxClients = maxClients;
    state.backgroundMap = backgroundOk && background == 1;
    return state;
}

static void ObserveGloveState(uintptr_t pawn)
{
    if (!pawn) return;

    static uintptr_t lastPawn = 0;
    static uint8_t lastFlag = 0xFF;
    static uint8_t lastChanged = 0xFF;
    static uint16_t lastDef = 0xFFFF;
    static uint8_t lastInit = 0xFF;
    static uint32_t lastIdHigh = 0xFFFFFFFF;

    const uintptr_t item = pawn + g_off.PAWN_EconGloves;

    uint8_t flag = 0, changed = 0, initialized = 0;
    uint16_t def = 0;
    uint32_t idHigh = 0;

    if (!SafeReadU8(pawn + g_off.PAWN_NeedReapplyGloves, flag) ||
        !SafeReadU8(pawn + g_off.PAWN_EconGlovesChanged, changed) ||
        !SafeReadU16(item + g_off.EIV_ItemDefIndex, def) ||
        !SafeReadU8(item + g_off.EIV_Initialized, initialized) ||
        !SafeReadU32(item + g_off.EIV_ItemIDHigh, idHigh))
        return;

    if (pawn != lastPawn ||
        flag != lastFlag ||
        changed != lastChanged ||
        def != lastDef ||
        initialized != lastInit ||
        idHigh != lastIdHigh)
    {
        DebugLog("[glove-observe] pawn=%p reapply=%u changed=%u "
            "def=%u init=%u idHigh=0x%X",
            (void*)pawn, flag, changed, def, initialized, idHigh);

        lastPawn = pawn;
        lastFlag = flag;
        lastChanged = changed;
        lastDef = def;
        lastInit = initialized;
        lastIdHigh = idHigh;
    }
}

// ---- FSN detour ----
static void __fastcall FsnDetour(void* pClient, int stage)
{
    // Publishes the Armory slot states for the UI. Throttled internally and
    // cheap when nothing changed.
    ArmoryStatus::Tick();

    // A slot that stops holding the skin the Armory gave it is the exact
    // mid-match revert this pass exists for. Run the pass again right away
    // instead of waiting out the apply interval, so the skin returns on the
    // next frame rather than the next round.
    if (ArmoryStatus::ConsumeDriftRequest())
    {
        static uint64_t lastDriftLogMs = 0;
        const uint64_t driftNow = NowMs();
        if (lastDriftLogMs == 0 || driftNow - lastDriftLogMs >= 5000)
        {
            lastDriftLogMs = driftNow;
            Log("[reconcile] a painted slot lost its item; forcing an apply pass");
        }
        g_lastApplyMs = 0;
    }

    bool gloveUpdate = false;
    static bool g_loggedStages = false;
    if (!g_loggedStages)
    {
        g_loggedStages = true;
        Log("[fsn] first stage call seen");
    }

    // Phase B: restore/swap the player model before the original
    // render-end processing. Do not run this on other stages.
    if (stage == 6)
    {
        GloveModelRefresh::OnRenderEnd(
            reinterpret_cast<void*>(MatchdetectGetPawn()));
    }

    // Match Lootline: run glove state handling every network-update tick
    // while in a match, including when custom gloves are disabled.
    if (stage == 7 && g_matchState == MatchState::IN_MATCH)
    {
        const uintptr_t glovePawn = MatchdetectGetPawn();
        int32_t gloveHp = 0;

        if (glovePawn > 0x10000 &&
            SafeReadI32(glovePawn + PAWN_OFF_HEALTH, gloveHp))
        {
            // Called while dead too: RunGloves returns on zero health but records
            // the death, which is how the next alive frame is recognised as a
            // respawn (the spawn-time field cannot be used for that here).
            RunGloves(glovePawn);

            if (gloveHp > 0)
            {
                // A glove re-apply that keeps the same glove definition does not
                // change the pawn's skeleton, so every weapon/HUD model is still
                // valid. Wiping the whole weapon-model cache there rebuilt every
                // gun every few seconds (one session: hundreds of wipes, 1422
                // rebuilds), and each rebuild re-hangs the keychain and repaints
                // the stickers - the flicker and the second charm. Only a real
                // glove or team change needs the invalidate.
                if (GloveAppliedThisTick() && GloveIdentityChangedThisTick())
                    g_gloveUpdatePending = true;

                // Armory agents share the spawn/team transition with gloves: the
                // model is only re-applied when the pawn, team or spawn changes.
                Agents::Run(glovePawn);
                // StatTrak progress: the counter only ever moved for items the
                // game server owns, so an Armory item gets its kills from here.
                StatTrakCounter::Tick(glovePawn);
            }
        }
    }

    // A lineup character's gloves are rebuilt by us (its own update never runs
    // the glove routine) - also on the screens outside a match.
    if (stage == 7)
        Lineup::FrameTick();

    // Preserve exactly one original FrameStageNotify call.
    if (g_origFsn)
    {
        __try
        {
            g_origFsn(pClient, stage);
        }
        __except (1)
        {
        }
    }

    // GloveSetBodyGroup ran at stage 7 and can invalidate HUD/weapon model
    // references. Consume that signal before the stage-6 weapon/knife pass.
    if (stage == 6)
    {
        gloveUpdate = g_gloveUpdatePending;
        g_gloveUpdatePending = false;
        if (gloveUpdate)
            InvalidateWeaponModelCache();
    }

    InterlockedIncrement(&g_fsnCount);
    g_lastStage = stage;
    if (stage >= 0 && stage < 16) InterlockedIncrement(&g_stageHistogram[stage]);
    if (stage == 5) InterlockedIncrement(&g_stage5Count);

    // Snapshot: only run diagnostic dumps when N1SSAN_DEBUG=1 is set to prevent periodic stutter
    static uint64_t g_lastSnapMs = 0;
    uint64_t now = NowMs();
    if (DebugLogEnabled() && now - g_lastSnapMs >= 15000)
    {
        g_lastSnapMs = now;
        Log("");
        Log("=== SNAPSHOT ===");
        Snapshot();
    }

    if (stage == 6 || stage == 7)
        KnifeAnimation::FrameStage(stage);

    if (stage != 6) return;

    const RuntimeMode runtimeMode = RuntimeModeState::Current();
    const bool loadoutMode = runtimeMode == RuntimeMode::Loadout;

    // Armory uses a separate generated-ID namespace. On first entry (including
    // an Armory-first launch), remove only stale PlanA Loadout entries. Retry
    // on subsequent frames if SOCache cleanup cannot complete safely.
    static RuntimeMode lastStableMode = RuntimeMode::Unknown;
    if (runtimeMode == RuntimeMode::Armory && lastStableMode != RuntimeMode::Armory)
    {
        if (PlanA::RemoveAllLoadoutItems())
            lastStableMode = RuntimeMode::Armory;
    }
    else if (runtimeMode == RuntimeMode::Loadout &&
             lastStableMode != RuntimeMode::Loadout &&
             !g_targets.empty())
    {
        // The worker has completed Loadout parsing and compatibility checks.
        // Create its managed items now, on the game thread.
        PlanA::ReconcileAllItems();
        lastStableMode = RuntimeMode::Loadout;
    }

    uintptr_t observedPawn = MatchdetectGetPawn();
    if (observedPawn > 0x10000)
        ObserveGloveState(observedPawn);

    // ---- matchdetect pawn resolution ----
    uintptr_t pawn = MatchdetectGetPawn();
    int32_t hp = 0;
    if (pawn) SafeReadI32(pawn + PAWN_OFF_HEALTH, hp);

    const NetworkState network = ReadNetworkState();

    // The local controller exists at the menu too and can still resolve a stale
    // pawn. Its connection state is the authoritative "still in a server" flag:
    // PlayerConnectedState::Connected == 0.
    uintptr_t controller = 0;
    SafeReadQword(CtrlGlobalAddr(GetClientModule()), controller);

    int32_t connectedState = -1;
    bool connectedKnown = false;
    uint8_t pawnIsAlive = 0;
    bool pawnAliveKnown = false;

    if (controller >= 0x10000)
    {
        connectedKnown = SafeReadI32(controller + CTRL_OFF_CONNECTED, connectedState);
        pawnAliveKnown = SafeReadU8(controller + CTRL_OFF_PAWN_ALIVE, pawnIsAlive);
    }

    const bool connectedToServer = !connectedKnown || connectedState == 0;

    static bool g_loggedNetworkState = false;
    if (!g_loggedNetworkState)
    {
        g_loggedNetworkState = true;

        Log("[match] network signOn=%d maxClients=%d backgroundMap=%d connected=%d alive=%d",
            network.signOn, network.maxClients, network.backgroundMap ? 1 : 0,
            connectedKnown ? connectedState : -999,
            pawnAliveKnown ? (int)pawnIsAlive : -1);

        if (!network.available)
            Log("[match] network state unavailable; using pawn heuristic");
    }

    bool inMatch;

    if (network.available)
    {
        // SIGNONSTATE_FULL on a real map is an active match. The main menu's
        // background map also reports full sign-on but sets the background flag.
        inMatch = network.signOn == 6 && !network.backgroundMap;
    }
    else
    {
        inMatch = (pawn > 0x10000 && hp > 0);
    }

    if (!connectedToServer)
        inMatch = false;

    // The main-menu background scene keeps a controller connected to a local
    // background map. Its pawn (when one resolves at all) is not alive; a real
    // match always has a live pawn at the moment a loadout is sent.
    if (pawnAliveKnown && pawnIsAlive == 0)
        inMatch = false;

    if (inMatch)
        g_lastInMatchMs = now;

    // A respawn is a new round: the game has just re-created the weapons and the
    // viewmodel, so everything is written again without waiting to be held.
    {
        static uint8_t lastAlive = 0;

        if (inMatch && pawnAliveKnown)
        {
            if (pawnIsAlive != 0 && lastAlive == 0)
            {
                g_eagerUntilMs = now + EAGER_WINDOW_MS;
                Log("[apply-eager] respawn: full sweep for the new round");
            }

            lastAlive = pawnIsAlive;
        }
        else if (!inMatch)
        {
            lastAlive = 0;
        }
    }

    // A new pawn means the weapon/HUD entities are new, so the model cache is
    // dropped and the skin goes on right away instead of on the next 250 ms tick.
    //
    // PAWN_SpawnTime is deliberately not part of this any more. On this build it
    // does not hold a spawn time: the log shows nonsense (1.4e34) and, on one
    // unchanged pawn, a value that climbed all match (5.70 -> 1393.03, forty
    // times). Every move dropped the whole cache and rebuilt all ~35 weapons
    // (1422 rebuilds in one session), and each rebuild re-hangs the keychain -
    // the sticker flicker, the second charm and the hitch. Respawn is detected
    // where it is reliable (health 0 -> alive, in the glove runtime), and a view
    // CS2 rebuilt already fails the per-weapon cache compare, so nothing is lost.
    const bool pawnChanged = g_lastModelCachePawn != pawn;

    if (inMatch)
    {
        if (pawnChanged)
        {
            InvalidateWeaponModelCache();
            g_lastModelCachePawn = pawn;
            g_lastApplyMs = 0;
            g_eagerUntilMs = g_eagerUntilMs > now ? g_eagerUntilMs : now + EAGER_WINDOW_MS;

            Log("[apply-cache] pawn reset: pawn=%p", (void*)pawn);
        }
    }
    else if (g_lastModelCachePawn != 0)
    {
        InvalidateWeaponModelCache();
        g_lastModelCachePawn = 0;

        Log("[apply-cache] left active match pawn");
    }

    // ---- state machine ----
    if (inMatch && g_matchState == MatchState::IDLE)
    {
        g_matchState = MatchState::IN_MATCH;
        g_lastApplyMs = 0;
        g_eagerUntilMs = now + EAGER_WINDOW_MS;
        Log("[match] FOUND pawn=0x%p hp=%d signOn=%d bg=%d connected=%d",
            (void*)pawn, hp, network.signOn, network.backgroundMap ? 1 : 0,
            connectedKnown ? connectedState : -999);
    }
    else if (!inMatch && g_matchState == MatchState::IN_MATCH &&
             now - g_lastInMatchMs >= 2000)
    {
        g_matchState = MatchState::IDLE;
        StatTrakCounter::Reset();
        Log("[match] LOST pawn=0x%p hp=%d", (void*)pawn, hp);
    }

    // Auto accept is finished here: the green-button watch only raises a flag
    // from the render thread, and this is the game thread the accept native
    // belongs to. An atomic check when nothing is pending, so it costs nothing.
    AutoAccept::Tick();
    // ---- runtime loadout adoption (profile switching without reinjection) ----
    if (HasStagedLoadout() && loadoutMode)
    {
        if (g_matchState == MatchState::IN_MATCH)
        {
            static uint64_t lastLoadoutDeferMs = 0;
            if (now - lastLoadoutDeferMs >= 10000)
            {
                lastLoadoutDeferMs = now;
                Log("[loadout] runtime change deferred: active match (signOn=%d bg=%d connected=%d)",
                    network.signOn, network.backgroundMap ? 1 : 0,
                    connectedKnown ? connectedState : -999);
            }
        }
        else if (AdoptStagedLoadout())
        {
            PlanA::ReconcileAllItems();
        }
    }

    // Observe native charm entities against the currently active weapon.
    // Resolve the weapon from the pawn's weapon services so global charm
    // entities belonging to other players/weapons are not mistaken as dupes.
    if (runtimeMode == RuntimeMode::Armory)
    {
        // Observation only, and it walks every entity slot in the game:
        // roughly thirty-two thousand reads every five seconds, which showed
        // up as a stutter. Kept behind N1SSAN_DEBUG instead of the frame path.
        static uint64_t lastCharmScanMs = 0;
        if (DebugLogEnabled() && now - lastCharmScanMs >= 5000)
        {
            lastCharmScanMs = now;

            uintptr_t activeWeapon = 0;
            uintptr_t weaponServices = 0;
            uint32_t activeWeaponHandle = 0;

            if (pawn > 0x10000 &&
                SafeReadQword(pawn + g_off.PAWN_WeaponServices, weaponServices) &&
                weaponServices > 0x10000 &&
                SafeReadU32(weaponServices + g_off.WS_ActiveWeapon, activeWeaponHandle) &&
                HandleValid(activeWeaponHandle))
            {
                activeWeapon = GetEntityByHandle(activeWeaponHandle);
            }

            DebugLog("[charm-entity] active weapon handle=0x%08X entity=%p",
                activeWeaponHandle, (void*)activeWeapon);
            LogWorldKeychainEntities(activeWeapon);
        }
    }

    // Armory inventory writes and attachment observation remain restricted to
    // the non-match window. CS2's native inventory UI is authoritative for
    // applying stickers and charms; the Bridge persists the observed result.
    if (!inMatch && runtimeMode == RuntimeMode::Armory)
    {
        // This block runs on every frame the game calls us, and it reads every
        // managed item and its view. The inventory screen opened on a background
        // map therefore paid for that read sixty times a second, which is the
        // stutter in the inventory. Four passes a second are indistinguishable
        // in the UI and cost a fraction of it.
        static uint64_t lastArmoryPassMs = 0;

        if (now - lastArmoryPassMs >= 1000)
        {
            lastArmoryPassMs = now;

            if (ArmoryInventory::HasPending())
                ArmoryInventory::AdoptPending();
            NativeEquipment::Tick();
            Attachments::ObserveAndPersist();
            NativeApply::Tick();
        }
    }

    // Keep the sources isolated while allowing Armory's currently equipped
    // native inventory item to pass through the same entity apply pipeline.
    if (runtimeMode != RuntimeMode::Loadout &&
        runtimeMode != RuntimeMode::Armory)
        return;

    if (loadoutMode && (!g_enabled || g_targets.empty()))
        return;

    // Fail closed: the schema named fields but not the econ ones the writes
    // land on, so the constants describe a different build. Doing nothing keeps
    // the real skins intact and leaves a readable reason in the log.
    if (runtimeMode == RuntimeMode::Armory && !CoreOffsetsTrusted())
    {
        static bool loggedUntrusted = false;
        if (!loggedUntrusted)
        {
            loggedUntrusted = true;
            Log("[armory-apply] disabled: core econ offsets unresolved on this build");
        }
        return;
    }

    if (runtimeMode == RuntimeMode::Armory &&
        !ArmoryInventory::HasItems())
        return;

    if (g_matchState == MatchState::IDLE)
    {
        if (now - g_lastDetectLogMs >= 10000)
        {
            g_lastDetectLogMs = now;
            Log("[detect] pawn=0x%p hp=%d signOn=%d bg=%d",
                (void*)pawn, hp, network.signOn, network.backgroundMap ? 1 : 0);
        }
        return;
    }

    // A dead pawn is normal at every round end and through the match-end
    // screen, and those screens still render the weapons. While the match is
    // still considered active, keep the apply pass running so the entities and
    // their models keep the fake skins instead of reverting to the real ones.
    const bool deadButStillInMatch =
        !inMatch && g_matchState == MatchState::IN_MATCH &&
        pawnAliveKnown && pawnIsAlive == 0 && pawn > 0x10000;

    // Death tears the pawn's weapons, their keychain entities and the viewmodel
    // down. Charm upkeep calls CS2's own entity creator and remover, and doing
    // that on entities that are being destroyed is what the client did not
    // survive. While the pawn is dead the charm is left exactly as it is; the
    // first live pass after the respawn starts every gun over.
    Charm::SetPaused(deadButStillInMatch || !inMatch);

    // The state machine keeps IN_MATCH for a short grace period after the
    // network reports the session ended; do not run the apply pass on a pawn
    // that may already be gone.
    if (!inMatch && !deadButStillInMatch)
        return;

    // A dead pawn used to cost a full pass over every weapon on the exact frame
    // CS2 tears the round down: weapon entities, the HUD viewmodel and the glove
    // request are all being replaced at once, so every read in the pass landed
    // on state that was still changing - the half-second freeze the moment the
    // player is killed. Only those teardown frames are skipped now: the death
    // camera re-creates the viewmodel, and skipping it entirely left that copy on
    // the default skin.
    if (pawnAliveKnown && pawnIsAlive == 0)
    {
        if (g_deadSinceMs == 0)
            g_deadSinceMs = now;

        if (now - g_deadSinceMs < APPLY_DEAD_QUIET_MS)
            return;
    }
    else
    {
        g_deadSinceMs = 0;
    }

    // ---- IN_MATCH: Phase C apply cadence ----
    // An eager window runs on every frame the game calls us; while dead the pass
    // runs slowly, because nothing on the death camera is in a hurry.
    const bool eager = now < g_eagerUntilMs;

    uint64_t applyIntervalMs = SKIN_APPLY_INTERVAL_MS;

    if (pawnAliveKnown && pawnIsAlive == 0)
        applyIntervalMs = SKIN_APPLY_DEAD_INTERVAL_MS;
    else if (eager)
        applyIntervalMs = SKIN_APPLY_EAGER_INTERVAL_MS;

    if (g_lastApplyMs != 0 &&
        now - g_lastApplyMs < applyIntervalMs)
    {
        return;
    }

    g_lastApplyMs = now;
    ClearApplyBuildFault();
    DebugLog("[apply] tick pawn=0x%p", (void*)pawn);

    // The FPS counter attributes a long frame to whatever label is set here.
    SetActivity("apply pass");
    SetEagerApply(eager);

    if (eager)
    {
        static uint64_t lastEagerLogMs = 0;

        if (now - lastEagerLogMs >= EAGER_WINDOW_MS)
        {
            lastEagerLogMs = now;

            Log("[apply-eager] full sweep: every equipped weapon written (budget %llu ms, %d builds per window)",
                static_cast<unsigned long long>(APPLY_PASS_BUDGET_EAGER_MS), 4);
        }
    }

    // ---- m_pWeaponServices ----
    uintptr_t ws = 0;
    if (!SafeReadQword(pawn + g_off.PAWN_WeaponServices, ws) || ws < 0x10000) {
        Log("[apply] ws null");
        return;
    }

    // ---- m_hMyWeapons ----
    // The field is resolved by name: the member this build keeps the list at is
    // not guaranteed to be 0x48, and reading handles out of the wrong member is
    // how a foreign weapon entered the pass - GetEntityByHandle resolves any
    // handle it is given, including another player's gun. The old constant stays
    // as the fallback, and a list whose count or data pointer cannot be a real
    // vector is ignored instead of walked.
    const uintptr_t myWeaponsOffset = g_off.WS_MyWeapons
        ? g_off.WS_MyWeapons
        : FB_WS_MyWeapons;

    // The vector is { int32 m_size; T* m_elements; }: the count comes first and
    // the element pointer sits eight bytes in. Reading it the other way round is
    // what every previous build did, and it is why the log was full of
    // "weapon list looks wrong (count=857719008 data=0x2)": those 857 million and
    // 1.2 billion "counts" are the low halves of heap pointers, and those 1..7
    // "pointers" are the real weapon counts. The list was never wrong - it was
    // read backwards, so the owned-weapon loop never ran once and only the held
    // weapon was ever written.
    int32_t wCount = 0;
    uintptr_t wData = 0;
    SafeReadI32(ws + myWeaponsOffset, wCount);
    SafeReadQword(ws + myWeaponsOffset + 0x08, wData);

    if (wCount < 0 || wCount > 64 || (wCount > 0 && wData < 0x10000))
    {
        static uint64_t lastBadListMs = 0;
        if (now - lastBadListMs >= 5000)
        {
            lastBadListMs = now;
            Log("[apply] weapon list looks wrong (offset=0x%llX count=%d data=0x%p); skipping it",
                static_cast<unsigned long long>(myWeaponsOffset), wCount, (void*)wData);
        }

        wCount = 0;
    }

    static bool g_loggedWeapons = false;
    if (!g_loggedWeapons) {
        g_loggedWeapons = true;
        DebugLog("[apply] wData=0x%p count=%d", (void*)wData, wCount);
    }

    // ---- m_hActiveWeapon — CHandle at +0x60 ----
    uint32_t activeHandle = 0;
    SafeReadU32(ws + 0x60, activeHandle);

    static bool g_loggedActive = false;
    if (!g_loggedActive) {
        g_loggedActive = true;
        DebugLog("[apply] activeHandle=0x%08X", activeHandle);
    }

    // A buy introduces up to ten weapons at once and one pass used to walk -
    // and rebuild - every one of them on a single frame: that is the freeze
    // when a loadout arrives, and the stutter when the active weapon changes.
    // The pass now has a wall-clock budget. The active weapon always runs (it
    // is what the player is holding); the rest finish on the next pass, at most
    // one apply interval later.
    constexpr uint64_t APPLY_PASS_BUDGET_MS = 6;
    const uint64_t passStartMs = NowMs();
    int deferredWeapons = 0;

    // Preserve the existing weapon and knife processing pass.
    bool didUpdate = false;

    if (HandleValid(activeHandle))
    {
        uintptr_t active = GetEntityByHandle(activeHandle);

        if (active)
        {
            DebugLog("[apply] active 0x%p", (void*)active);

            __try
            {
                if (ProcessWeapon(active, pawn))
                    didUpdate = true;
            }
            __except (1)
            {
                Log("[apply] exception active");
            }
        }
    }

    if (wCount > 0 && wCount <= 32 && wData >= 0x10000)
    {
        // The list resumes where the last pass stopped instead of starting at
        // index 0 again. The active weapon is always processed first above, so
        // starting the loop at the top every pass meant the first guns took the
        // whole budget and the rest - the knife above all - were deferred on
        // every single pass. That is why a skin only appeared once its weapon was
        // switched to, icon included.
        static int32_t nextCursor = 0;

        if (nextCursor < 0 || nextCursor >= wCount)
            nextCursor = 0;

        const uint64_t budgetMs =
            eager ? APPLY_PASS_BUDGET_EAGER_MS : APPLY_PASS_BUDGET_MS;

        bool stoppedEarly = false;

        for (int32_t n = 0; n < wCount; ++n)
        {
            const int32_t i = (nextCursor + n) % wCount;

            if (NowMs() - passStartMs >= budgetMs)
            {
                deferredWeapons = wCount - n;
                nextCursor = i;
                stoppedEarly = true;
                break;
            }

            uint32_t h = 0;

            if (!SafeReadU32(wData + i * 4, h) ||
                !HandleValid(h))
                continue;

            if (h == activeHandle)
                continue;

            uintptr_t weapon = GetEntityByHandle(h);

            if (!weapon)
                continue;

            DebugLog("[apply] owned 0x%p (h=0x%08X)",
                (void*)weapon, h);

            __try
            {
                if (ProcessWeapon(weapon, pawn))
                    didUpdate = true;
            }
            __except (1)
            {
                Log("[apply] exception owned");
            }
        }

        if (!stoppedEarly)
            nextCursor = 0;
    }

    DebugLog("[apply-diagnostic] weaponChanged=%d gloveUpdate=%d regenAvailable=%d",
        (int)didUpdate,
        (int)gloveUpdate,
        (int)(pRegenerateSkins != nullptr));

    if (deferredWeapons > 0)
    {
        static uint64_t lastDeferLogMs = 0;

        if (now - lastDeferLogMs >= 5000)
        {
            lastDeferLogMs = now;
            Log("[apply-budget] pass budget reached; %d weapon(s) wait for the next pass",
                deferredWeapons);
        }
    }

    // Match Lootline: the shared regenerate pass is driven by weapon/knife
    // identity changes. Glove rebuilding is handled by its own engine flag.
    if (didUpdate && pRegenerateSkins && ApplyBuildFaulted())
    {
        // A material build faulted on this pass. Handing the half-built item to
        // RegenerateSkins is what faulted the client, so wait for a clean pass.
        Log("[skin-regenerate] skipped: weapon material build faulted");
    }
    else if (didUpdate && pRegenerateSkins)
    {
        Log("[skin-regenerate] calling pRegenerateSkins weaponChanged=%d",
            (int)didUpdate);

        __try
        {
            pRegenerateSkins();

            Log("[skin-regenerate] returned");

        }
        __except (1)
        {
            Log("[skin-regenerate] exception");
        }
    }

    // Turns the next "the game hitched when a round started" report into a
    // number: what the pass cost, and how much of it the shared regenerate was.
    {
        const uint64_t totalMs = NowMs() - passStartMs;

        if (totalMs >= 12)
        {
            static uint64_t lastSlowPassLogMs = 0;

            if (now - lastSlowPassLogMs >= 2000)
            {
                lastSlowPassLogMs = now;
                Log("[perf] apply pass took %llu ms (weapons=%d deferred=%d changed=%d regen=%d)",
                    static_cast<unsigned long long>(totalMs), wCount, deferredWeapons,
                    didUpdate ? 1 : 0, (didUpdate && pRegenerateSkins) ? 1 : 0);
            }
        }
    }

    // ---- what opens the next eager window ----
    // A new round re-issues the loadout, so the weapon list comes back new and
    // every weapon in it is unwritten: that is the round-start sweep, and it is
    // the only thing this has to detect. The handles are hashed rather than the
    // count alone, so a buy or a pickup counts too.
    //
    // Deliberately not triggers: a pass that ran out of budget, and the active
    // weapon changing. Both recur for the whole of a live round - one deferred
    // weapon whose material build is expensive keeps `deferredWeapons` above zero
    // on every pass, and switching guns happens constantly - and each window is
    // 4 s of 40 ms passes. Either one would hold the pass in eager mode through
    // the round it was meant to accelerate. The rotating cursor already carries
    // whatever the window leaves behind, at the normal cadence.
    {
        static uint64_t lastListHash = 0;

        uint64_t hash = 1469598103934665603ull;

        for (int32_t i = 0; i < wCount; ++i)
        {
            uint32_t h = 0;

            if (SafeReadU32(wData + i * 4, h))
            {
                hash ^= h;
                hash *= 1099511628211ull;
            }
        }

        if (wCount > 0 && hash != lastListHash)
        {
            if (!eager)
            {
                g_eagerUntilMs = now + EAGER_WINDOW_MS;

                Log("[apply-eager] weapon list changed: full sweep (weapons=%d)", wCount);
            }

            lastListHash = hash;
        }
    }

    // The pass is over: a frame that runs long from here on is not ours.
    SetEagerApply(false);
    SetActivity("idle");
}

// ---- matchdetect InstallFsnHook (verbatim — vtable overwrite) ----
bool InstallFSNHook()
{
    HMODULE hClient = GetModuleHandleA("client.dll");
    if (!hClient) { Log("[fsn] client.dll missing"); return false; }

    auto createIface = reinterpret_cast<void* (*)(const char*, int*)>(
        GetProcAddress(hClient, "CreateInterface"));
    if (!createIface) { Log("[fsn] CreateInterface missing"); return false; }

    void* pClient = nullptr;
    __try { pClient = createIface("Source2Client002", nullptr); }
    __except (1) { pClient = nullptr; }
    if (!pClient) { Log("[fsn] Source2Client002 not found"); return false; }

    uintptr_t vt = 0;
    if (!SafeReadQword((uintptr_t)pClient, vt) || !vt) { Log("[fsn] no vtable"); return false; }

    uintptr_t fn = 0;
    if (!SafeReadQword(vt + (size_t)VT_SOURCE2CLIENT_FSN * 8, fn)) { Log("[fsn] slot read failed"); return false; }

    ModuleInfo client = GetClientModule();
    if (!client.valid() || !client.inside(fn)) { Log("[fsn] slot not in client.dll"); return false; }

    Log("[fsn] pClient=0x%p vtable=0x%p fn=0x%p slot=%d",
        pClient, (void*)vt, (void*)fn, VT_SOURCE2CLIENT_FSN);

    g_origFsn = (Fsn_t)fn;

    DWORD oldProt = 0;
    if (!VirtualProtect((void*)(vt + VT_SOURCE2CLIENT_FSN * 8), sizeof(void*), PAGE_READWRITE, &oldProt))
    {
        Log("[fsn] VirtualProtect failed");
        return false;
    }
    *(void**)(vt + VT_SOURCE2CLIENT_FSN * 8) = (void*)&FsnDetour;
    VirtualProtect((void*)(vt + VT_SOURCE2CLIENT_FSN * 8), sizeof(void*), oldProt, &oldProt);

    g_hookTarget = vt + VT_SOURCE2CLIENT_FSN * 8;
    Log("[fsn] hooked (vtable overwrite)");
    return true;
}
