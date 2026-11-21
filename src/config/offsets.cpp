// n1ssan-dll / src/config/offsets.cpp
// Populates g_off from the FB_* field offsets (fixed, rarely change between patches)
// and mirrors AutoOffsets results into the legacy RVA_* globals for backwards compat
// with sdk/entities.cpp and sdk/functions.cpp.

#include "config/offsets.h"
#include "config/auto_offsets.h"
#include "diagnostics/armory_status.h"
#include "diagnostics/log.h"
#include "inventory/engine_schema_diagnostic.h"
#include "memory/scanner.h"
#include "skin/gloves.h"

#include <windows.h>
#include <cstdint>
#include <cstring>

// Legacy globals � absolute VAs, read by sdk/entities.cpp and sdk/functions.cpp
uintptr_t RVA_ENTITY_LIST = 0;
uintptr_t RVA_LOCALPLAYERCONTROLLER = 0;
uintptr_t RVA_LOCALPLAYERPAWN = 0;

Offsets g_off;

namespace
{
    struct SchemaField
    {
        const char* label;
        const char* classes;   // '|' separated candidates, declaring class first
        const char* field;
        uintptr_t* target;
    };

    // Every field here moves between CS2 builds, and a stale constant fails
    // silently: the read lands on whatever now occupies the old offset (spawn
    // time at 0x1DC8 pointed at an unrelated float, hud arms at 0x1DA8 returned
    // 0 and first-person skins stopped applying). The schema name is the only
    // stable description of a field, so it wins whenever the engine can still
    // name it; the FB_* constant above stays as the fallback for the builds
    // where it cannot. Names are the declaring class, because the schema lists
    // inherited fields on their own class entry.
    const SchemaField kSchemaFields[] = {
        { "EIV_ItemDefIndex",    "C_EconItemView", "m_iItemDefinitionIndex",      &g_off.EIV_ItemDefIndex },
        { "EIV_EntityQuality",   "C_EconItemView", "m_iEntityQuality",             &g_off.EIV_EntityQuality },
        { "EIV_ItemIDHigh",      "C_EconItemView", "m_iItemIDHigh",                &g_off.EIV_ItemIDHigh },
        { "EIV_ItemIDLow",       "C_EconItemView", "m_iItemIDLow",                 &g_off.EIV_ItemIDLow },
        { "EIV_AccountID",       "C_EconItemView", "m_iAccountID",                 &g_off.EIV_AccountID },
        { "EIV_Initialized",     "C_EconItemView", "m_bInitialized",               &g_off.EIV_Initialized },
        { "EIV_DisallowSOC",     "C_EconItemView", "m_bDisallowSOC",               &g_off.EIV_DisallowSOC },
        { "EIV_RestoreCustom",   "C_EconItemView", "m_bRestoreCustomMaterial",     &g_off.EIV_RestoreCustom },
        { "EIV_AttributeList",   "C_EconItemView", "m_AttributeList",              &g_off.EIV_AttributeList },
        { "EIV_NetworkedAttrs",  "C_EconItemView", "m_NetworkedDynamicAttributes", &g_off.EIV_NetworkedAttrs },
        { "EIV_CustomName",      "C_EconItemView", "m_szCustomName",               &g_off.EIV_CustomName },
        { "AC_Item",             "C_AttributeContainer", "m_Item",                 &g_off.AC_Item },
        { "EE_AttrManager",      "C_EconEntity", "m_AttributeManager",             &g_off.EE_AttrManager },
        { "EE_FallbackPK",       "C_EconEntity", "m_nFallbackPaintKit",            &g_off.EE_FallbackPK },
        { "EE_FallbackSeed",     "C_EconEntity", "m_nFallbackSeed",                &g_off.EE_FallbackSeed },
        { "EE_FallbackWear",     "C_EconEntity", "m_flFallbackWear",               &g_off.EE_FallbackWear },
        { "EE_FallbackStatTrak", "C_EconEntity", "m_nFallbackStatTrak",            &g_off.EE_FallbackStatTrak },
        { "BE_hOwnerEntity",     "C_BaseEntity", "m_hOwnerEntity",                 &g_off.BE_hOwnerEntity },
        { "BE_nSubclassID",      "C_BaseEntity", "m_nSubclassID",                  &g_off.BE_nSubclassID },
        { "GSN_Owner",           "CGameSceneNode", "m_pOwner",                     &g_off.GSN_Owner },
        { "GSN_Child",           "CGameSceneNode", "m_pChild",                     &g_off.GSN_Child },
        { "GSN_NextSibling",     "CGameSceneNode", "m_pNextSibling",               &g_off.GSN_NextSibling },
        { "PAWN_TeamNum",        "C_BaseEntity", "m_iTeamNum",                     &g_off.PAWN_TeamNum },
        { "PAWN_Health",         "C_BaseEntity", "m_iHealth",                      &g_off.PAWN_Health },
        { "PAWN_hHudModelArms",  "C_CSPlayerPawn|CCSPlayerPawn", "m_hHudModelArms", &g_off.PAWN_hHudModelArms },
        { "WS_ActiveWeapon",     "CPlayer_WeaponServices", "m_hActiveWeapon",      &g_off.WS_ActiveWeapon },
        { "WS_MyWeapons",        "CPlayer_WeaponServices", "m_hMyWeapons",         &g_off.WS_MyWeapons },
        { "CTRL_SteamID",        "CBasePlayerController", "m_steamID",            &g_off.CTRL_SteamID },
        { "CTRL_hPawn",          "CCSPlayerController", "m_hPlayerPawn",           &g_off.CTRL_hPawn },
    };

    // Fields a paint write lands on. Losing one of these means the constants are
    // from a different build, which is the one case where doing nothing is safer
    // than writing.
    bool IsCoreSchemaField(const char* label)
    {
        static const char* kCore[] = {
            "EIV_ItemDefIndex", "EIV_ItemIDHigh", "EIV_ItemIDLow",
            "EIV_Initialized", "EIV_AttributeList", "EIV_NetworkedAttrs",
            "AC_Item", "EE_AttrManager",
        };

        for (const char* core : kCore)
            if (std::strcmp(core, label) == 0)
                return true;

        return false;
    }

    bool g_coreTrusted = true;
    int g_unresolvedFields = 0;
    int g_appliedFields = 0;

    // Resolves one row, trying each candidate class in turn.
    bool ResolveFieldOffset(const SchemaField& field, uintptr_t& offset)
    {
        const char* cursor = field.classes;

        while (cursor && *cursor)
        {
            const char* separator = std::strchr(cursor, '|');
            const size_t length = separator
                ? static_cast<size_t>(separator - cursor)
                : std::strlen(cursor);

            char className[64]{};
            if (length == 0 || length >= sizeof(className))
                return false;

            std::memcpy(className, cursor, length);
            className[length] = '\0';

            if (ResolveEngineSchemaField(className, field.field, offset) &&
                offset != 0 && offset < 0x4000)
            {
                return true;
            }

            cursor = separator ? separator + 1 : nullptr;
        }

        return false;
    }

    void ApplySchemaOverrides()
    {
        int checked = 0;
        int applied = 0;
        int corrected = 0;
        int unresolved = 0;
        int coreUnresolved = 0;

        for (const SchemaField& field : kSchemaFields)
        {
            ++checked;

            uintptr_t offset = 0;
            if (!ResolveFieldOffset(field, offset))
            {
                ++unresolved;
                if (IsCoreSchemaField(field.label))
                    ++coreUnresolved;
                continue;
            }

            if (*field.target != offset)
            {
                Log("[off] %s schema override: 0x%llX -> 0x%llX (%s::%s)",
                    field.label,
                    static_cast<unsigned long long>(*field.target),
                    static_cast<unsigned long long>(offset),
                    field.classes, field.field);
                ++corrected;
            }

            *field.target = offset;
            ++applied;
        }

        g_unresolvedFields = unresolved;
        g_appliedFields = applied;
        g_coreTrusted = applied == 0 || coreUnresolved == 0;

        Log("[off] schema fields: %d checked, %d applied by name, %d corrected, %d unresolved (core unresolved=%d, trusted=%d)",
            checked, applied, corrected, unresolved, coreUnresolved,
            g_coreTrusted ? 1 : 0);

        if (!g_coreTrusted)
        {
            Log("[off] FAIL-CLOSED: the schema named fields but not every econ field; "
                "paint writes are disabled until kSchemaFields/FB_* match this build");
        }
    }
}

bool CoreOffsetsTrusted()
{
    return g_coreTrusted;
}

int UnresolvedOffsetFieldCount()
{
    return g_unresolvedFields;
}

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
    g_off.PAWN_SpawnTime = 0;
    g_off.PAWN_hHudModelArms = FB_PAWN_hHudModelArms;
    g_off.PAWN_EconGloves = FB_PAWN_EconGloves;
    g_off.PAWN_NeedReapplyGloves = FB_PAWN_NeedReapplyGloves;
    g_off.PAWN_EconGlovesChanged = FB_PAWN_EconGlovesChanged;
    g_off.PAWN_MyWearables = FB_PAWN_MyWearables;

    Log("[off] PAWN_MyWearables = 0x%llX",
        static_cast<unsigned long long>(g_off.PAWN_MyWearables));

    g_off.WS_ActiveWeapon = FB_WS_ActiveWeapon;
    g_off.WS_MyWeapons = FB_WS_MyWeapons;

    g_off.CTRL_SteamID = FB_CTRL_SteamID;
    g_off.CTRL_hPawn = FB_CTRL_hPawn;

    ApplySchemaOverrides();

    // The spawn time separates "the same pawn kept playing" from "this pawn
    // respawned", which decides when the weapon model cache is rebuilt. It is
    // read by C_CSPlayerPawnBase::m_flLastSpawnTimeIndex, and the field moved
    // between builds (0x1404 / 0x14EC), so the schema name is the only source
    // that stays right. Unresolved means no spawn-time refresh at all: reading
    // a wrong field there would look like a respawn on every single frame.
    {
        const char* spawnTimeClasses[] = {
            "C_CSPlayerPawnBase", "C_CSPlayerPawn", "CCSPlayerPawn",
        };

        for (const char* className : spawnTimeClasses)
        {
            uintptr_t schemaOffset = 0;

            if (!ResolveEngineSchemaField(className, "m_flLastSpawnTimeIndex", schemaOffset) ||
                schemaOffset == 0 || schemaOffset >= 0x4000)
            {
                continue;
            }

            g_off.PAWN_SpawnTime = schemaOffset;
            Log("[off] PAWN_SpawnTime resolved by name: 0x%llX (%s)",
                static_cast<unsigned long long>(schemaOffset), className);
            break;
        }

        if (!g_off.PAWN_SpawnTime)
        {
            Log("[off] m_flLastSpawnTimeIndex not resolved - spawn-time refresh disabled");
        }
    }

    ArmoryStatus::NoteOffsets(
        static_cast<int>(sizeof(kSchemaFields) / sizeof(kSchemaFields[0])),
        g_appliedFields, g_unresolvedFields, g_coreTrusted,
        g_off.PAWN_SpawnTime != 0);

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