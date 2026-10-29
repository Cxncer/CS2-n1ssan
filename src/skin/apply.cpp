// n1ssan-dll / src/skin/apply.cpp
// Weapon apply, default reset, knife model + paint.

#include "skin/apply.h"
#include "sdk/functions.h"
#include "sdk/item_view.h"
#include "sdk/scene_node.h"
#include "config/offsets.h"
#include "diagnostics/log.h"
#include "memory/access.h"
#include "config/auto_offsets.h"
#include "inventory/loot_schema.h"
#include "memory/scanner.h"

#include <windows.h>
#include <cmath>
#include <string>
#include <unordered_map>

namespace
{
    const std::unordered_map<uint16_t, std::string>& KnifeModelTable()
    {
        static const std::unordered_map<uint16_t, std::string> table = {
            {500, "weapons/models/knife/knife_bayonet/weapon_knife_bayonet.vmdl"},
            {503, "weapons/models/knife/knife_css/weapon_knife_css.vmdl"},
            {505, "weapons/models/knife/knife_flip/weapon_knife_flip.vmdl"},
            {506, "weapons/models/knife/knife_gut/weapon_knife_gut.vmdl"},
            {507, "weapons/models/knife/knife_karambit/weapon_knife_karambit.vmdl"},
            {508, "weapons/models/knife/knife_m9_bayonet/weapon_knife_m9_bayonet.vmdl"},
            {509, "weapons/models/knife/knife_tactical/weapon_knife_tactical.vmdl"},
            {512, "weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl"},
            {514, "weapons/models/knife/knife_survival_bowie/weapon_knife_survival_bowie.vmdl"},
            {515, "weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl"},
            {516, "weapons/models/knife/knife_push/weapon_knife_push.vmdl"},
            {517, "weapons/models/knife/knife_cord/weapon_knife_cord.vmdl"},
            {518, "weapons/models/knife/knife_canis/weapon_knife_canis.vmdl"},
            {519, "weapons/models/knife/knife_ursus/weapon_knife_ursus.vmdl"},
            {520, "weapons/models/knife/knife_gypsy_jackknife/weapon_knife_gypsy_jackknife.vmdl"},
            {521, "weapons/models/knife/knife_outdoor/weapon_knife_outdoor.vmdl"},
            {522, "weapons/models/knife/knife_stiletto/weapon_knife_stiletto.vmdl"},
            {523, "weapons/models/knife/knife_widowmaker/weapon_knife_widowmaker.vmdl"},
            {525, "weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl"},
            {526, "weapons/models/knife/knife_kukri/weapon_knife_kukri.vmdl"},
        };
        return table;
    }

    void CallSetModel(uintptr_t weaponEnt, const char* modelName)
    {
        __try { pAgentSetModel((void*)weaponEnt, modelName); }
        __except (1) {}
    }

    void CallUpdateSubclass(uintptr_t weaponEnt)
    {
        __try { pKnifeUpdateSubclass((void*)weaponEnt); }
        __except (1) {}
    }

    void CallBuildModernSkin(uintptr_t item, uintptr_t entity, const char* which)
    {
        if (!pBuildModernSkin) return;

        __try
        {
            pBuildModernSkin((void*)item, (void*)entity, 0, 2048, 0, 0, nullptr);
        }
        __except (1)
        {
            Log("[apply] %s BuildModernSkin THREW", which);
        }
    }

    void CallInvalidateDesc(uintptr_t view)
    {
        if (!pInvalidateDescription || !view) return;
        __try { pInvalidateDescription((void*)view); }
        __except (EXCEPTION_EXECUTE_HANDLER) {}
    }

    void ClearNameCache(uintptr_t view, const char* which)
    {
        if (!view) return;
        uint64_t before = 0;
        SafeReadQword(view + 0x200, before);
        SafeWriteU32(view + 0x200, 0);
        SafeWriteU32(view + 0x204, 0);
        CallInvalidateDesc(view);
    }

    // Writes identity + paint kit to a given item view. SAFE to call on an
    // empty view. Returns false if the view already has attributes we don't own.
    bool WriteViewSafely(uintptr_t v, const TargetSkin& t,
        int wantQuality, int wantStatTrak, const char* which)
    {
        if (!v) return false;

        // Read the actual CUtlVector size (at v + EIV_AttributeList + 0x08 + 0x00)
        AttributeVector_t* vec = GetAttributeVector(v);
        uint32_t preCount = vec ? (uint32_t)vec->size : 0;
        uintptr_t preData = vec ? vec->data : 0;

        Log("[apply] %s view pre-write: size=%u data=0x%p",
            which, preCount, (void*)preData);

        // If the game already has attributes here, don't touch them.
        if (preCount > 0 && preCount < 1000 && preData > 0x10000)
        {
            Log("[apply] %s view already has %u attrs — skipping write (game-owned)",
                which, preCount);
            return false;
        }

        EconAttr_Remove(v);

        SafeWriteU32(v + g_off.EIV_ItemIDHigh, 0xFFFFFFFFu);
        SafeWriteU8(v + g_off.EIV_Initialized, 1);
        SafeWriteU8(v + g_off.EIV_DisallowSOC, 0);
        SafeWriteU8(v + g_off.EIV_RestoreCustom, 1);
        SafeWriteI32(v + g_off.EIV_EntityQuality, wantQuality);

        EconAttr_Create(v, t.paintKit, t.wear, t.resolvedSeed, wantStatTrak);

        // Diagnostic: check whether attributes were created
        AttributeVector_t* post = GetAttributeVector(v);
        Log("[apply] %s post-create: size=%d data=%p alloc=%d",
            which,
            post ? post->size : -1,
            post ? (void*)post->data : nullptr,
            post ? post->allocationCount : -1);

        SetCustomName(v, "");
        SafeWriteU32(v + 0x5A0, 0);
        SafeWriteU32(v + 0x5A4, 0);

        ClearNameCache(v, which);

        Log("[apply] %s view 0x%p painted (pk=%d)", which, (void*)v, t.paintKit);
        return true;
    }

    bool IsAlreadyApplied(uintptr_t weaponEnt, uintptr_t view, const TargetSkin& t)
    {
        int     curPK = 0;
        int     curSeed = 0;
        float   curWear = 0.0f;
        int     curStatTrak = 0;
        int32_t curQuality = 0;

        if (!SafeReadI32(weaponEnt + g_off.EE_FallbackPK, curPK))       return false;
        if (!SafeReadI32(weaponEnt + g_off.EE_FallbackSeed, curSeed))   return false;
        if (!SafeReadFloat(weaponEnt + g_off.EE_FallbackWear, curWear)) return false;
        if (!SafeReadI32(weaponEnt + g_off.EE_FallbackStatTrak, curStatTrak)) return false;
        if (!SafeReadI32(view + g_off.EIV_EntityQuality, curQuality))   return false;

        const int wantQuality = IsKnifeDefinition(t.defIndex) ? 3 : (t.statTrak ? 9 : 0);
        const int wantStatTrak = t.statTrak ? 0 : -1;
        const bool wearMatch = std::fabsf(curWear - t.wear) < 0.001f;

        return curPK == t.paintKit &&
            curSeed == t.resolvedSeed &&
            wearMatch &&
            curStatTrak == wantStatTrak &&
            curQuality == wantQuality;
    }
}

// ---- Weapon ----
void ApplyWeaponSkin(uintptr_t weaponEnt, uintptr_t pawn, const TargetSkin& t)
{
    if (!weaponEnt || !pawn) return;

    const uintptr_t view = GetWeaponItem(weaponEnt);
    if (!view) return;

    const int wantQuality = IsKnifeDefinition(t.defIndex) ? 3 : (t.statTrak ? 9 : 0);
    const int wantStatTrak = t.statTrak ? 0 : -1;

    const bool alreadyPainted = IsAlreadyApplied(weaponEnt, view, t);

    if (!alreadyPainted)
    {
        Log("[apply] enter (weapon=0x%p def=%u pk=%d)", (void*)weaponEnt, t.defIndex, t.paintKit);

        SafeWriteI32(weaponEnt + g_off.EE_FallbackPK, t.paintKit);
        SafeWriteI32(weaponEnt + g_off.EE_FallbackSeed, t.resolvedSeed);
        SafeWriteFloat(weaponEnt + g_off.EE_FallbackWear, t.wear);
        SafeWriteI32(weaponEnt + g_off.EE_FallbackStatTrak, wantStatTrak);

        WriteViewSafely(view, t, wantQuality, wantStatTrak, "world");
    }

    // ALWAYS rebuild models — the knife HUD needs every tick.
    const uint64_t mask = IsKnifeDefinition(t.defIndex) ? 1ULL : (t.legacyModel ? 2ULL : 1ULL);

    SetMeshGroup(weaponEnt, mask);
    CallBuildModernSkin(view, weaponEnt, "world");

    uintptr_t hudWeapon = FindHudWeapon(weaponEnt, pawn);
    if (hudWeapon)
    {
        // For knives, set the model on the HUD weapon BEFORE mesh group / build.
        // Without this, the CT HUD knife stays the vanilla mesh (invisible/orange).
        if (IsKnifeDefinition(t.defIndex) && pAgentSetModel)
        {
            const auto& models = KnifeModelTable();
            auto it = models.find(t.defIndex);
            if (it != models.end())
            {
                __try { pAgentSetModel((void*)hudWeapon, it->second.c_str()); }
                __except (1) {}
                Log("[knife] HUD SetModel: %s", it->second.c_str());
            }
        }

        SetMeshGroup(hudWeapon, mask);
        CallBuildModernSkin(view, hudWeapon, "hud");
    }
}

// ---- Default ----
void ApplyDefault(uintptr_t weaponEnt)
{
    if (!weaponEnt) return;

    const uintptr_t view = GetWeaponItem(weaponEnt);
    if (!view) return;

    EconAttr_Remove(view);

    SafeWriteI32(view + g_off.EIV_EntityQuality, 0);
    SafeWriteU8(view + g_off.EIV_Initialized, 1);
    SafeWriteU8(view + g_off.EIV_DisallowSOC, 0);
    SafeWriteU8(view + g_off.EIV_RestoreCustom, 1);

    SafeWriteI32(weaponEnt + g_off.EE_FallbackPK, 0);
    SafeWriteI32(weaponEnt + g_off.EE_FallbackSeed, 0);
    SafeWriteFloat(weaponEnt + g_off.EE_FallbackWear, 0.0f);
    SafeWriteI32(weaponEnt + g_off.EE_FallbackStatTrak, -1);

    SetCustomName(view, "");
    SafeWriteU32(view + 0x5A0, 0);
    SafeWriteU32(view + 0x5A4, 0);

    ClearNameCache(view, "default");
}

// ---- Knife ----
bool IsKnifeDefinition(uint16_t d)
{
    return d == 41 || d == 42 || d == 59 || (d >= 500 && d <= 526);
}

uint32_t GetKnifeSubclassId(uint16_t d)
{
    switch (d)
    {
    case 500: return 3933374535u;
    case 503: return 3787235507u;
    case 505: return 4046390180u;
    case 506: return 2047704618u;
    case 507: return 1731408398u;
    case 508: return 1638561588u;
    case 509: return 2282479884u;
    case 512: return 3412259219u;
    case 514: return 2511498851u;
    case 515: return 1353709123u;
    case 516: return 4269888884u;
    case 517: return 1105782941u;
    case 518: return 275962944u;
    case 519: return 1338637359u;
    case 520: return 3230445913u;
    case 521: return 3206681373u;
    case 522: return 2595277776u;
    case 523: return 4029975521u;
    case 525: return 365028728u;
    case 526: return 3845286452u;
    default:  return 0;
    }
}

bool KnifeApply(uintptr_t weaponEnt, uintptr_t view, uint16_t targetDef)
{
    if (!weaponEnt || !view) return false;

    uint16_t curDef = 0;
    if (!SafeReadU16(view + g_off.EIV_ItemDefIndex, curDef)) return false;
    if (!IsKnifeDefinition(curDef) || targetDef < 500) return false;

    const uint32_t targetSub = GetKnifeSubclassId(targetDef);
    if (targetSub == 0) return false;

    int32_t curSub = 0;
    SafeReadI32(weaponEnt + g_off.BE_nSubclassID, curSub);
    if (curDef == targetDef && (uint32_t)curSub == targetSub) return false;

    SafeWriteI32(view + g_off.EIV_EntityQuality, 3);
    SafeWriteU16(view + g_off.EIV_ItemDefIndex, targetDef);

    const auto& models = KnifeModelTable();
    auto it = models.find(targetDef);
    if (it != models.end() && pAgentSetModel)
    {
        Log("[knife] SetModel: %s", it->second.c_str());
        CallSetModel(weaponEnt, it->second.c_str());
    }
    else
    {
        Log("[knife] no model name for def=%u", targetDef);
    }

    SafeWriteI32(weaponEnt + g_off.BE_nSubclassID, (int32_t)targetSub);

    if (pKnifeUpdateSubclass)
        CallUpdateSubclass(weaponEnt);

    return true;
}