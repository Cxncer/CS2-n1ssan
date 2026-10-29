// n1ssan-dll / src/config/offsets.cpp
// Populates g_off from the FB_* field offsets (fixed, rarely change between patches)
// and mirrors AutoOffsets results into the legacy RVA_* globals for backwards compat
// with sdk/entities.cpp and sdk/functions.cpp.

#include "config/offsets.h"
#include "config/auto_offsets.h"
#include "diagnostics/log.h"
#include "memory/scanner.h"

#include <windows.h>
#include <cstdint>

// Legacy globals — absolute VAs, read by sdk/entities.cpp and sdk/functions.cpp
uintptr_t RVA_ENTITY_LIST = 0;
uintptr_t RVA_LOCALPLAYERCONTROLLER = 0;
uintptr_t RVA_LOCALPLAYERPAWN = 0;

Offsets g_off;

void ResolveOffsets()
{
    // ---- Field offsets: fixed, no scanning needed ----
    g_off.EIV_ItemDefIndex = FB_EIV_ItemDefIndex;
    g_off.EIV_EntityQuality = FB_EIV_EntityQuality;
    g_off.EIV_ItemIDHigh = FB_EIV_ItemIDHigh;
    g_off.EIV_ItemIDLow = FB_EIV_ItemIDLow;
    g_off.EIV_AccountID = FB_EIV_AccountID;
    g_off.EIV_Initialized = FB_EIV_Initialized;
    g_off.EIV_DisallowSOC = FB_EIV_DisallowSOC;
    g_off.EIV_RestoreCustom = FB_EIV_RestoreCustom;
    g_off.EIV_AttributeList = FB_EIV_AttributeList;
    g_off.EIV_NetworkedAttrs = FB_EIV_NetworkedAttrs;
    g_off.EIV_CustomName = FB_EIV_CustomName;

    g_off.AC_Item = FB_AC_Item;

    g_off.EE_AttrManager = FB_EE_AttrManager;
    g_off.EE_FallbackPK = FB_EE_FallbackPK;
    g_off.EE_FallbackSeed = FB_EE_FallbackSeed;
    g_off.EE_FallbackWear = FB_EE_FallbackWear;
    g_off.EE_FallbackStatTrak = FB_EE_FallbackStatTrak;

    g_off.BE_GameSceneNode = FB_BE_GameSceneNode;
    g_off.BE_hOwnerEntity = FB_BE_hOwnerEntity;
    g_off.BE_nSubclassID = FB_BE_nSubclassID;

    g_off.GSN_Owner = FB_GSN_Owner;
    g_off.GSN_Child = FB_GSN_Child;
    g_off.GSN_NextSibling = FB_GSN_NextSibling;

    g_off.PAWN_WeaponServices = FB_PAWN_WeaponServices;
    g_off.PAWN_ItemServices = FB_PAWN_ItemServices;
    g_off.PAWN_hController = FB_PAWN_hController;
    g_off.PAWN_TeamNum = FB_PAWN_TeamNum;
    g_off.PAWN_Health = FB_PAWN_Health;
    g_off.PAWN_SpawnTime = FB_PAWN_SpawnTime;
    g_off.PAWN_hHudModelArms = FB_PAWN_hHudModelArms;
    g_off.PAWN_EconGloves = FB_PAWN_EconGloves;
    g_off.PAWN_NeedReapplyGloves = FB_PAWN_NeedReapplyGloves;
    g_off.PAWN_EconGlovesChanged = FB_PAWN_EconGlovesChanged;

    g_off.WS_ActiveWeapon = FB_WS_ActiveWeapon;

    g_off.CTRL_SteamID = FB_CTRL_SteamID;
    g_off.CTRL_hPawn = FB_CTRL_hPawn;

    Log("[off] field offsets populated");

    // ---- Global pointer offsets: try runtime scan first ----
    ModuleInfo m = GetClientModule();
    const bool haveModule = m.valid();

    if (haveModule)
    {
        AutoOffsets::Resolve();   // fills AutoOffsets::g_* (0 on failure)
    }
    else
    {
        Log("[off] client.dll not loaded — auto-offset skipped");
    }

    // ---- Mirror to legacy RVA_* as absolute VAs (with fallback to hardcoded RVA + base) ----
    const uintptr_t base = haveModule ? m.base : 0;

    RVA_ENTITY_LIST = AutoOffsets::g_entityList
        ? AutoOffsets::g_entityList
        : (base ? base + 0x271C8B8 : 0);

    RVA_LOCALPLAYERCONTROLLER = AutoOffsets::g_localPlayerController
        ? AutoOffsets::g_localPlayerController
        : (base ? base + 0x253EEF8 : 0);

    RVA_LOCALPLAYERPAWN = AutoOffsets::g_localPlayerPawn
        ? AutoOffsets::g_localPlayerPawn
        : (base ? base + 0x25676D8 : 0);

    Log("[off] RVA_ENTITY_LIST           = 0x%p", (void*)RVA_ENTITY_LIST);
    Log("[off] RVA_LOCALPLAYERCONTROLLER = 0x%p", (void*)RVA_LOCALPLAYERCONTROLLER);
    Log("[off] RVA_LOCALPLAYERPAWN       = 0x%p", (void*)RVA_LOCALPLAYERPAWN);
}