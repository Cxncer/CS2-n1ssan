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
#include "config/offsets.h"
#include "config/auto_offsets.h"
#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "memory/access.h"
#include "memory/scanner.h"
#include "hooks/knife_animation.h"
#include "inventory/plan_a.h"
#include "skin/apply.h"
#include "sdk/scene_node.h"
#include "skin/glove_model_refresh.h"

#include <windows.h>
#include <cstdint>
#include <atomic>

// ---- matchdetect offsets (fallback if AutoOffsets hasn't resolved yet) ----
static constexpr uintptr_t RVA_PLOCALPLAYERCONTROLLER = 0x253EEF8;
static constexpr uintptr_t RVA_LOCALPLAYERPAWN_LOCAL = 0x25676D8;
static constexpr uintptr_t RVA_ENTITY_LIST_LOCAL = 0x271C8B8;
static constexpr uintptr_t GES_OFF_HIGHEST_ENTITY = 0x2120;
static constexpr uintptr_t GES_OFF_CHUNK_TABLE = 0x10;
static constexpr uintptr_t GES_OFF_CHUNK_STRIDE = 0x70;
static constexpr uint32_t  CTRL_OFF_PLAYERPAWN = 0x92C;
static constexpr uintptr_t PAWN_OFF_HEALTH = 0x34C;
static constexpr int       VT_SOURCE2CLIENT_FSN = 36;

// ---- matchdetect state (verbatim) ----
typedef void(__fastcall* Fsn_t)(void* client, int stage);
static Fsn_t    g_origFsn = nullptr;
static uintptr_t g_hookTarget = 0;

static volatile LONG g_fsnCount = 0;
static volatile LONG g_stage5Count = 0;
static volatile LONG g_lastStage = -1;
static volatile LONG g_stageHistogram[16] = {};

// ---- match state ----
enum class MatchState { IDLE, IN_MATCH };
static MatchState g_matchState = MatchState::IDLE;
static uint64_t   g_lastDetectLogMs = 0;
static uint64_t   g_lastApplyMs = 0;

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
        Log("[glove-observe] pawn=%p reapply=%u changed=%u "
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
        GloveModelRefresh::OnRenderEnd();
    }

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

    InterlockedIncrement(&g_fsnCount);
    g_lastStage = stage;
    if (stage >= 0 && stage < 16) InterlockedIncrement(&g_stageHistogram[stage]);
    if (stage == 5) InterlockedIncrement(&g_stage5Count);

    // Snapshot every 5s (matchdetect cadence)
    static uint64_t g_lastSnapMs = 0;
    uint64_t now = NowMs();
    if (now - g_lastSnapMs >= 5000)
    {
        g_lastSnapMs = now;
        Log("");
        Log("=== SNAPSHOT ===");
        Snapshot();
    }

    if (stage == 6 || stage == 7)
        KnifeAnimation::FrameStage(stage);

    if (stage != 6) return;
    if (!g_enabled || g_targets.empty()) return;

    uintptr_t observedPawn = MatchdetectGetPawn();
    if (observedPawn > 0x10000)
        ObserveGloveState(observedPawn);

    // ---- matchdetect pawn resolution ----
    uintptr_t pawn = MatchdetectGetPawn();
    int32_t hp = 0;
    if (pawn) SafeReadI32(pawn + PAWN_OFF_HEALTH, hp);

    bool inMatch = (pawn > 0x10000 && hp > 0);

    // ---- state machine ----
    if (inMatch && g_matchState == MatchState::IDLE)
    {
        g_matchState = MatchState::IN_MATCH;
        g_lastApplyMs = 0;
        Log("[match] FOUND pawn=0x%p hp=%d", (void*)pawn, hp);
    }
    else if (!inMatch && g_matchState == MatchState::IN_MATCH)
    {
        g_matchState = MatchState::IDLE;
        Log("[match] LOST pawn=0x%p hp=%d", (void*)pawn, hp);
    }

    if (g_matchState == MatchState::IDLE)
    {
        if (now - g_lastDetectLogMs >= 10000)
        {
            g_lastDetectLogMs = now;
            Log("[detect] pawn=0x%p hp=%d", (void*)pawn, hp);
        }
        return;
    }

    // ---- IN_MATCH: apply cadence 1s ----
    if (now - g_lastApplyMs < 1000) return;
    g_lastApplyMs = now;
    Log("[apply] tick pawn=0x%p", (void*)pawn);

    // ---- m_pWeaponServices ----
    uintptr_t ws = 0;
    if (!SafeReadQword(pawn + g_off.PAWN_WeaponServices, ws) || ws < 0x10000) {
        Log("[apply] ws null");
        RunGloves(pawn);
        return;
    }

    // ---- m_hMyWeapons — C_NetworkUtlVectorBase<CHandle> at +0x48 ----
    uintptr_t wData = 0;
    int32_t wCount = 0;
    SafeReadQword(ws + 0x48, wData);
    SafeReadI32(ws + 0x50, wCount);

    static bool g_loggedWeapons = false;
    if (!g_loggedWeapons) {
        g_loggedWeapons = true;
        Log("[apply] wData=0x%p count=%d", (void*)wData, wCount);
    }

    // ---- m_hActiveWeapon — CHandle at +0x60 ----
    uint32_t activeHandle = 0;
    SafeReadU32(ws + 0x60, activeHandle);

    static bool g_loggedActive = false;
    if (!g_loggedActive) {
        g_loggedActive = true;
        Log("[apply] activeHandle=0x%08X", activeHandle);
    }

    // ============================================================
    // ORDER MATTERS: weapons FIRST, then gloves.
    // GloveSetBodyGroup invalidates the arm's HUD child meshes,
    // which includes the knife. If we rebuild the knife before
    // gloves, the glove pass wipes it out and the knife becomes
    // invisible on HUD.
    // ============================================================
    bool didUpdate = false;

    if (HandleValid(activeHandle)) {
        uintptr_t active = GetEntityByHandle(activeHandle);
        if (active) {
            Log("[apply] active 0x%p", (void*)active);
            __try { ProcessWeapon(active, pawn); didUpdate = true; }
            __except (1) { Log("[apply] exception active"); }
        }
    }

    if (wCount > 0 && wCount <= 32 && wData >= 0x10000) {
        for (int32_t i = 0; i < wCount; ++i) {
            uint32_t h = 0;
            if (!SafeReadU32(wData + i * 4, h) || !HandleValid(h)) continue;
            uintptr_t w = GetEntityByHandle(h);
            if (!w) continue;
            if (h == activeHandle) continue;
            Log("[apply] owned 0x%p (h=0x%08X)", (void*)w, h);
            __try { ProcessWeapon(w, pawn); didUpdate = true; }
            __except (1) { Log("[apply] exception owned"); }
        }
    }

    // ---- Now apply gloves ----
    RunGloves(pawn);

    const bool gloveUpdate = GloveAppliedThisTick();

    Log("[apply-diagnostic] didUpdate=%d gloveUpdate=%d regenAvailable=%d",
        (int)didUpdate,
        (int)gloveUpdate,
        (int)(pRegenerateSkins != nullptr));

    if (didUpdate && pRegenerateSkins) {
        Log("[skin-regenerate] calling pRegenerateSkins "
            "reason=weapon-update gloveUpdate=%d",
            (int)gloveUpdate);

        __try {
            pRegenerateSkins();
            Log("[skin-regenerate] returned");

            LogGloveModelSnapshot(pawn, "AFTER-REGENERATE");
        }
        __except (1) {
            Log("[skin-regenerate] exception");
        }
    }
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