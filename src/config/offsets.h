// n1ssan-dll / src/config/offsets.h
// Hardcoded offsets — verified against a2x 2026-10-23 dumper and matchdetect.
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>

namespace AutoOffsets
{
    // Absolute VAs of the three globals that shift on every client.dll recompile.
    // Zero means "not resolved" — callers should fall back to their hardcoded RVA.
    extern uintptr_t RVA_ENTITY_LIST;
    extern uintptr_t RVA_LOCALPLAYERCONTROLLER;
    extern uintptr_t RVA_LOCALPLAYERPAWN;

    // Runs all pattern scans. Fills the three globals above.
    // Returns true if all three matched. Logs every failure by name.
    bool Resolve();
}

// ---- C_EconItemView ----
static constexpr uintptr_t FB_EIV_ItemDefIndex = 0x1BA;
static constexpr uintptr_t FB_EIV_EntityQuality = 0x1BC;
static constexpr uintptr_t FB_EIV_ItemIDHigh = 0x1D0;
static constexpr uintptr_t FB_EIV_ItemIDLow = 0x1D4;
static constexpr uintptr_t FB_EIV_AccountID = 0x1D8;
static constexpr uintptr_t FB_EIV_Initialized = 0x1E8;
static constexpr uintptr_t FB_EIV_DisallowSOC = 0x1E9;
static constexpr uintptr_t FB_EIV_RestoreCustom = 0x1B8;
static constexpr uintptr_t FB_EIV_AttributeList = 0x208;
static constexpr uintptr_t FB_EIV_NetworkedAttrs = 0x280;
static constexpr uintptr_t FB_EIV_CustomName = 0x2F8;

// ---- C_AttributeContainer ----
static constexpr uintptr_t FB_AC_Item = 0x50;

// ---- C_EconEntity ----
static constexpr uintptr_t FB_EE_AttrManager = 0x1290;
static constexpr uintptr_t FB_EE_FallbackPK = 0x18A8;
static constexpr uintptr_t FB_EE_FallbackSeed = 0x18AC;
static constexpr uintptr_t FB_EE_FallbackWear = 0x18B0;
static constexpr uintptr_t FB_EE_FallbackStatTrak = 0x18B4;

// ---- C_BaseEntity ----
static constexpr uintptr_t FB_BE_GameSceneNode = 0x330;
static constexpr uintptr_t FB_BE_hOwnerEntity = 0x520;
static constexpr uintptr_t FB_BE_nSubclassID = 0x38C;

// ---- CGameSceneNode ----
static constexpr uintptr_t FB_GSN_Owner = 0x30;
static constexpr uintptr_t FB_GSN_Child = 0x40;
static constexpr uintptr_t FB_GSN_NextSibling = 0x48;

// ---- C_BasePlayerPawn / C_CSPlayerPawn ----
static constexpr uintptr_t FB_PAWN_WeaponServices = 0x12F0;
static constexpr uintptr_t FB_PAWN_ItemServices = 0x1210;
static constexpr uintptr_t FB_PAWN_hController = 0x1DE0;
static constexpr uintptr_t FB_PAWN_TeamNum = 0x3E7;
static constexpr uintptr_t FB_PAWN_Health = 0x34C;
static constexpr uintptr_t FB_PAWN_SpawnTime = 0x1DC8;
static constexpr uintptr_t FB_PAWN_hHudModelArms = 0x1DA8;
static constexpr uintptr_t FB_PAWN_EconGloves = 0x1770;
static constexpr uintptr_t FB_PAWN_NeedReapplyGloves = 0x176D;
static constexpr uintptr_t FB_PAWN_EconGlovesChanged = 0x1D20;

// ---- CCSPlayer_WeaponServices ----
static constexpr uintptr_t FB_WS_ActiveWeapon = 0x60;

// ---- CBasePlayerController ----
static constexpr uintptr_t FB_CTRL_SteamID = 0x788;
static constexpr uintptr_t FB_CTRL_hPawn = 0x92C;

// ---- Struct that holds the runtime offsets (currently = the FB_* above) ----
struct Offsets
{
    uintptr_t EIV_ItemDefIndex = 0;
    uintptr_t EIV_EntityQuality = 0;
    uintptr_t EIV_ItemIDHigh = 0;
    uintptr_t EIV_ItemIDLow = 0;
    uintptr_t EIV_AccountID = 0;
    uintptr_t EIV_Initialized = 0;
    uintptr_t EIV_DisallowSOC = 0;
    uintptr_t EIV_RestoreCustom = 0;
    uintptr_t EIV_AttributeList = 0;
    uintptr_t EIV_NetworkedAttrs = 0;
    uintptr_t EIV_CustomName = 0;

    uintptr_t AC_Item = 0;

    uintptr_t EE_AttrManager = 0;
    uintptr_t EE_FallbackPK = 0;
    uintptr_t EE_FallbackSeed = 0;
    uintptr_t EE_FallbackWear = 0;
    uintptr_t EE_FallbackStatTrak = 0;

    uintptr_t BE_GameSceneNode = 0;
    uintptr_t BE_hOwnerEntity = 0;
    uintptr_t BE_nSubclassID = 0;

    uintptr_t GSN_Owner = 0;
    uintptr_t GSN_Child = 0;
    uintptr_t GSN_NextSibling = 0;

    uintptr_t PAWN_WeaponServices = 0;
    uintptr_t PAWN_ItemServices = 0;
    uintptr_t PAWN_hController = 0;
    uintptr_t PAWN_TeamNum = 0;
    uintptr_t PAWN_Health = 0;
    uintptr_t PAWN_SpawnTime = 0;
    uintptr_t PAWN_hHudModelArms = 0;
    uintptr_t PAWN_EconGloves = 0;
    uintptr_t PAWN_NeedReapplyGloves = 0;
    uintptr_t PAWN_EconGlovesChanged = 0;

    uintptr_t WS_ActiveWeapon = 0;

    uintptr_t CTRL_SteamID = 0;
    uintptr_t CTRL_hPawn = 0;
};

extern Offsets g_off;
// Populates g_off from the FB_* constants above. Called once at startup.
void ResolveOffsets();

// ---- Resolved runtime addresses (set by AutoOffsets::Resolve or by the RVA fallback) ----
// These are ABSOLUTE VAs, not RVAs, despite the name. Kept for backward compat with
// functions.cpp / entities.cpp which read them directly.
extern uintptr_t RVA_ENTITY_LIST;
extern uintptr_t RVA_LOCALPLAYERCONTROLLER;
extern uintptr_t RVA_LOCALPLAYERPAWN;