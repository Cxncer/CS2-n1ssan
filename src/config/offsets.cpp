// n1ssan-dll / src/config/offsets.cpp
// Populates g_off from the FB_* field offsets (fixed, rarely change between patches)
// and mirrors AutoOffsets results into the legacy RVA_* globals for backwards compat
// with sdk/entities.cpp and sdk/functions.cpp.

#include "config/offsets.h"
#include "config/auto_offsets.h"
#include "diagnostics/log.h"
#include "inventory/engine_schema_diagnostic.h"
#include "memory/scanner.h"
#include "skin/gloves.h"

#include <windows.h>
#include <cstdint>

// Legacy globals � absolute VAs, read by sdk/entities.cpp and sdk/functions.cpp
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

    // The name tag text lives in C_EconItemView::m_szCustomName. The constant is
    // only a fallback: writing an empty name at a stale offset left the real name
    // on the item, and CS2 then drew a tag with the weapon's own name on skins
    // that have no custom name in the Armory at all.
    {
        uintptr_t schemaOffset = 0;
        if (ResolveEngineSchemaField("C_EconItemView", "m_szCustomName", schemaOffset) && schemaOffset)
        {
            if (schemaOffset != g_off.EIV_CustomName)
            {
                Log("[off] EIV_CustomName schema override: 0x%llX -> 0x%llX",
                    static_cast<unsigned long long>(g_off.EIV_CustomName),
                    static_cast<unsigned long long>(schemaOffset));
            }

            g_off.EIV_CustomName = schemaOffset;
        }
        else
        {
            Log("[off] EIV_CustomName schema field not found; keeping 0x%llX",
                static_cast<unsigned long long>(g_off.EIV_CustomName));
        }
    }

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
    g_off.PAWN_MyWearables = FB_PAWN_MyWearables;

    Log("[off] PAWN_MyWearables = 0x%llX",
        static_cast<unsigned long long>(g_off.PAWN_MyWearables));

    g_off.WS_ActiveWeapon = FB_WS_ActiveWeapon;

    g_off.CTRL_SteamID = FB_CTRL_SteamID;
    g_off.CTRL_hPawn = FB_CTRL_hPawn;

    // ---- Schema override for fields CS2 shifts between updates ----
    // The 12 Nov 2026 update moved m_hHudModelArms away from 0x1DA8: the read
    // returned 0, FindHudWeapon bailed out on an invalid arms handle on every
    // tick, and first-person skins stopped applying (the world model was still
    // painted). The schema system still resolves the field by name, so it wins
    // over the constant whenever it disagrees.
    {
        uintptr_t schemaOffset = 0;
        const char* pawnClasses[] = { "C_CSPlayerPawn", "CCSPlayerPawn" };

        for (const char* className : pawnClasses)
        {
            if (!ResolveEngineSchemaField(className, "m_hHudModelArms", schemaOffset) ||
                schemaOffset == 0 || schemaOffset >= 0x4000)
            {
                continue;
            }

            if (schemaOffset != g_off.PAWN_hHudModelArms)
            {
                Log("[off] PAWN_hHudModelArms schema override: 0x%llX -> 0x%llX (%s)",
                    static_cast<unsigned long long>(g_off.PAWN_hHudModelArms),
                    static_cast<unsigned long long>(schemaOffset),
                    className);
            }

            g_off.PAWN_hHudModelArms = schemaOffset;
            break;
        }
    }

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
        Log("[off] client.dll not loaded � auto-offset skipped");
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