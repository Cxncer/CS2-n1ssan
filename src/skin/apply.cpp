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
#include <utility>

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

    struct WeaponModelCacheEntry
    {
        uintptr_t view = 0;
        uintptr_t pawn = 0;
        uintptr_t hudWeapon = 0;

        uint16_t defIndex = 0;

        int paintKit = 0;
        int seed = 0;
        int statTrak = 0;
        int quality = 0;

        float wear = 0.0f;

        bool legacyModel = false;
        uint64_t meshMask = 0;
    };

    struct WeaponNameCacheEntry
    {
        uintptr_t view = 0;
        uint16_t defIndex = 0;
        int paintKit = 0;
        std::string skinName;
    };

    static std::unordered_map<uintptr_t, WeaponModelCacheEntry>
        g_weaponModelCache;

    static std::unordered_map<uintptr_t, WeaponNameCacheEntry>
        g_weaponNameCache;

    bool SameModelState(
        const WeaponModelCacheEntry& oldState,
        uintptr_t view,
        uintptr_t pawn,
        uintptr_t hudWeapon,
        const TargetSkin& t,
        int wantQuality,
        uint64_t meshMask)
    {
        return oldState.view == view &&
            oldState.pawn == pawn &&
            oldState.hudWeapon == hudWeapon &&
            oldState.defIndex == t.defIndex &&
            oldState.paintKit == t.paintKit &&
            oldState.seed == t.resolvedSeed &&
            oldState.statTrak == (t.statTrak ? 0 : -1) &&
            oldState.quality == wantQuality &&
            std::fabsf(oldState.wear - t.wear) < 0.000001f &&
            oldState.legacyModel == t.legacyModel &&
            oldState.meshMask == meshMask;
    }


    // ============================================================
    // Lootline parity: paint-kit UsesOldModel -> mesh mask
    // ============================================================

    uint32_t ReadPaintKitMapOffset()
    {
        const ModuleInfo client = GetClientModule();
        if (!client.valid())
            return 0;

        // Same function pattern used by Lootline:
        // Patterns::GloveCreatePaintKit
        const uintptr_t address = ScanPattern(
            client,
            "48 89 5C 24 ? 56 48 83 EC ? 48 8B 01 FF 50");

        if (!address)
            return 0;

        const auto* getPaintKit =
            reinterpret_cast<const uint8_t*>(address);

        __try
        {
            for (int i = 0; i < 0xC0; ++i)
            {
                const uint8_t* p = getPaintKit + i;

                if (p[0] != 0x8B || p[1] != 0xD6 ||
                    p[2] != 0x48 || p[3] != 0x8B ||
                    p[4] != 0x5C || p[5] != 0x24 ||
                    p[7] != 0x48 || p[8] != 0x83 ||
                    p[9] != 0xC4 || p[11] != 0x5E ||
                    p[12] != 0xE9)
                    continue;

                const uint8_t* lookup =
                    p + 17 + *reinterpret_cast<const int32_t*>(p + 13);

                for (int j = 0; j < 0x40; ++j)
                {
                    // cmp r8d, [rbx + disp32]
                    if (lookup[j] == 0x44 &&
                        lookup[j + 1] == 0x3B &&
                        lookup[j + 2] == 0x83)
                    {
                        const uint32_t offset =
                            *reinterpret_cast<const uint32_t*>(lookup + j + 3);

                        return offset >= 0x100 && offset < 0x1000
                            ? offset
                            : 0;
                    }
                }

                return 0;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return 0;
        }

        return 0;
    }

    uint32_t PaintKitMapOffset()
    {
        static uint32_t cachedOffset = 0;

        if (cachedOffset)
            return cachedOffset;

        cachedOffset = ReadPaintKitMapOffset();

        // Lootline's CEconItemSchema layout fallback.
        // m_PaintKits is at 0x2A0.
        if (!cachedOffset)
            cachedOffset = 0x2A0;

        return cachedOffset;
    }

    bool GetPaintKitUsesOldModel(int paintKitId, bool& usesOldModel)
    {
        usesOldModel = false;

        if (paintKitId <= 0 || !g_esResolved)
            return false;

        // g_esResolved points to CEconItemSystem.
        uintptr_t schema = 0;

        if (!SafeReadQword(g_esResolved + 0x08, schema) ||
            schema < 0x10000)
            return false;

        const uintptr_t map =
            schema + PaintKitMapOffset();

        // C_EconUtlMap<int, CPaintKit*>
        // count       +0x00
        // elements    +0x08

        int32_t count = 0;
        uintptr_t elements = 0;

        if (!SafeReadI32(map, count) ||
            count <= 0 || count > 10000 ||
            !SafeReadQword(map + 0x08, elements) ||
            elements < 0x10000)
            return false;

        // Lootline's specialized Node_t:
        // key         +0x10
        // value       +0x18
        // stride      0x20

        for (int32_t i = 0; i < count; ++i)
        {
            const uintptr_t node =
                elements + static_cast<uintptr_t>(i) * 0x20;

            int32_t id = 0;
            uintptr_t paintKit = 0;

            if (!SafeReadI32(node + 0x10, id) ||
                id != paintKitId)
                continue;

            if (!SafeReadQword(node + 0x18, paintKit) ||
                paintKit < 0x10000)
                return false;

            // CPaintKit::m_UsesOldModel = 0xAE
            uint8_t oldModel = 0;

            if (!SafeReadU8(paintKit + 0xAE, oldModel))
                return false;

            usesOldModel = oldModel != 0;
            return true;
        }

        return false;
    }

    uint64_t GetMeshMask(int paintKitId)
    {
        bool usesOldModel = false;

        const bool found =
            GetPaintKitUsesOldModel(paintKitId, usesOldModel);

        const uint64_t mask =
            found && usesOldModel ? 2ULL : 1ULL;

        // Log only when the result changes.
        static bool logged = false;
        static int lastPaintKit = -1;
        static bool lastFound = false;
        static bool lastOldModel = false;
        static uint64_t lastMask = 0;

        if (paintKitId == 413 &&
            (!logged ||
                lastPaintKit != paintKitId ||
                lastFound != found ||
                lastOldModel != usesOldModel ||
                lastMask != mask))
        {
            Log("[mesh-diag] pk=%d found=%d usesOldModel=%u mask=%llu",
                paintKitId,
                found ? 1 : 0,
                usesOldModel ? 1 : 0,
                static_cast<unsigned long long>(mask));

            logged = true;
            lastPaintKit = paintKitId;
            lastFound = found;
            lastOldModel = usesOldModel;
            lastMask = mask;
        }

        return mask;
    }


    bool CallSetModel(uintptr_t weaponEnt, const char* modelName)
    {
        if (!weaponEnt || !modelName || !pAgentSetModel)
            return false;

        __try
        {
            pAgentSetModel(reinterpret_cast<void*>(weaponEnt), modelName);
            return true;
        }
        __except (1)
        {
            return false;
        }
    }

    bool CallUpdateSubclass(uintptr_t weaponEnt)
    {
        if (!weaponEnt || !pKnifeUpdateSubclass)
            return false;

        __try
        {
            pKnifeUpdateSubclass(reinterpret_cast<void*>(weaponEnt));
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool CallBuildModernSkin(uintptr_t item, uintptr_t entity, const char* which)
    {
        if (!pBuildModernSkin || !item || !entity)
            return false;

        __try
        {
            pBuildModernSkin(
                reinterpret_cast<void*>(item),
                reinterpret_cast<void*>(entity),
                0, 2048, 0, 0, nullptr);

            return true;
        }
        __except (1)
        {
            Log("[apply] %s BuildModernSkin THREW", which);
            return false;
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

void InvalidateWeaponModelCache()
{
    g_weaponModelCache.clear();

    Log("[apply-cache] weapon model cache invalidated");
}

// ---- Weapon ----
bool ApplyWeaponSkin(uintptr_t weaponEnt, uintptr_t pawn, const TargetSkin& t)
{
    if (!weaponEnt || !pawn)
        return false;

    const uintptr_t view = GetWeaponItem(weaponEnt);

    if (!view)
        return false;

    const int wantQuality =
        IsKnifeDefinition(t.defIndex) ? 3 : (t.statTrak ? 9 : 0);

    const int wantStatTrak = t.statTrak ? 0 : -1;

    const bool alreadyPainted =
        IsAlreadyApplied(weaponEnt, view, t);

    bool viewWritten = false;

    if (!alreadyPainted)
    {
        Log("[apply] enter (weapon=0x%p def=%u pk=%d)",
            (void*)weaponEnt, t.defIndex, t.paintKit);

        SafeWriteI32(weaponEnt + g_off.EE_FallbackPK, t.paintKit);
        SafeWriteI32(weaponEnt + g_off.EE_FallbackSeed, t.resolvedSeed);
        SafeWriteFloat(weaponEnt + g_off.EE_FallbackWear, t.wear);
        SafeWriteI32(weaponEnt + g_off.EE_FallbackStatTrak, wantStatTrak);

        viewWritten = WriteViewSafely(
            view,
            t,
            wantQuality,
            wantStatTrak,
            "world");
    }

    // --------------------------------------------------------
    // Skin-name / item-description cache
    // --------------------------------------------------------

    auto nameIt = g_weaponNameCache.find(weaponEnt);

    const bool nameChanged =
        nameIt == g_weaponNameCache.end() ||
        nameIt->second.view != view ||
        nameIt->second.defIndex != t.defIndex ||
        nameIt->second.paintKit != t.paintKit ||
        nameIt->second.skinName != t.skinName;

    // WriteViewSafely already invalidates the description when
    // it successfully writes the item view.
    //
    // If it skipped game-owned attributes, or the skin was
    // already painted but the desired name changed, invalidate
    // the description explicitly.
    if (nameChanged && (alreadyPainted || !viewWritten))
    {
        ClearNameCache(view, "skin-name");
    }

    if (nameChanged)
    {
        WeaponNameCacheEntry nameState{};
        nameState.view = view;
        nameState.defIndex = t.defIndex;
        nameState.paintKit = t.paintKit;
        nameState.skinName = t.skinName;

        g_weaponNameCache[weaponEnt] = std::move(nameState);
    }

    // --------------------------------------------------------
    // World / HUD model rebuild
    // --------------------------------------------------------

    const uint64_t mask = GetMeshMask(t.paintKit);

    const uintptr_t hudWeapon =
        FindHudWeapon(weaponEnt, pawn);

    auto cacheIt = g_weaponModelCache.find(weaponEnt);

    const bool modelChanged =
        cacheIt == g_weaponModelCache.end() ||
        !SameModelState(
            cacheIt->second,
            view,
            pawn,
            hudWeapon,
            t,
            wantQuality,
            mask);

    if (modelChanged)
    {
        Log("[apply-cache] rebuilding weapon=%p hud=%p def=%u pk=%d",
            (void*)weaponEnt,
            (void*)hudWeapon,
            t.defIndex,
            t.paintKit);

        // World model.
        if (t.defIndex == 512)
        {
            Log("[mesh-diag] WORLD entity=%p mask=%llu",
                (void*)weaponEnt,
                static_cast<unsigned long long>(mask));
        }

        SetMeshGroup(weaponEnt, mask);

        const bool worldBuilt =
            CallBuildModernSkin(view, weaponEnt, "world");

        bool hudBuilt = (hudWeapon == 0);
        bool hudModelReady = true;

        if (hudWeapon)
        {
            // Restore the original HUD knife model operation.
            // It MUST happen before mesh-group/material rebuilding.
            if (IsKnifeDefinition(t.defIndex))
            {
                const auto& models = KnifeModelTable();
                const auto modelIt = models.find(t.defIndex);

                if (modelIt != models.end())
                {
                    hudModelReady =
                        CallSetModel(hudWeapon, modelIt->second.c_str());

                    if (hudModelReady)
                    {
                        Log("[knife] HUD SetModel: %s",
                            modelIt->second.c_str());
                    }
                }
                else
                {
                    hudModelReady = false;

                    Log("[knife] HUD model path missing for def=%u",
                        t.defIndex);
                }
            }

            if (t.defIndex == 512)
            {
                Log("[mesh-diag] HUD entity=%p mask=%llu",
                    (void*)hudWeapon,
                    static_cast<unsigned long long>(mask));
            }

            SetMeshGroup(hudWeapon, mask);
        }

        // Only cache a completed rebuild. If a required function
        // is unavailable or throws, retry on the next apply tick.
        if (worldBuilt && hudBuilt && hudModelReady)
        {
            WeaponModelCacheEntry state{};

            state.view = view;
            state.pawn = pawn;
            state.hudWeapon = hudWeapon;

            state.defIndex = t.defIndex;

            state.paintKit = t.paintKit;
            state.seed = t.resolvedSeed;
            state.statTrak = wantStatTrak;
            state.quality = wantQuality;

            state.wear = t.wear;

            state.legacyModel = t.legacyModel;
            state.meshMask = mask;

            g_weaponModelCache[weaponEnt] = state;
        }
    }

    // Keep the original contract: true means skin identity /
    // fallback state changed, not merely that a model was rebuilt.
    return !alreadyPainted;
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
    if (!weaponEnt || !view)
        return false;

    uint16_t curDef = 0;

    if (!SafeReadU16(view + g_off.EIV_ItemDefIndex, curDef))
        return false;

    if (!IsKnifeDefinition(curDef) || targetDef < 500)
        return false;

    const uint32_t targetSub = GetKnifeSubclassId(targetDef);

    if (targetSub == 0)
        return false;

    const auto& models = KnifeModelTable();
    const auto it = models.find(targetDef);

    // Lootline requires a valid model and both engine functions.
    if (it == models.end() ||
        !pAgentSetModel ||
        !pKnifeUpdateSubclass)
        return false;

    int32_t curSub = 0;
    const bool subclassRead =
        SafeReadI32(weaponEnt + g_off.BE_nSubclassID, curSub);

    static unsigned int falchionDiagCount = 0;
    const bool diag = targetDef == 512 && falchionDiagCount < 12;

    if (diag)
    {
        ++falchionDiagCount;

        Log("[subclass-diag] BEFORE weapon=%p offset=0x%llX read=%d value=%u target=%u",
            (void*)weaponEnt,
            static_cast<unsigned long long>(g_off.BE_nSubclassID),
            subclassRead ? 1 : 0,
            static_cast<unsigned int>(curSub),
            targetSub);
    }

    if (curDef == targetDef &&
        subclassRead &&
        static_cast<uint32_t>(curSub) == targetSub)
        return false;

    if (!SafeWriteI32(view + g_off.EIV_EntityQuality, 3) ||
        !SafeWriteU16(view + g_off.EIV_ItemDefIndex, targetDef))
        return false;

    // Lootline order: model first.
    Log("[knife] SetModel: %s", it->second.c_str());

    if (!CallSetModel(weaponEnt, it->second.c_str()))
        return false;
    // Then subclass.
    const bool subclassWritten =
        SafeWriteI32(
            weaponEnt + g_off.BE_nSubclassID,
            static_cast<int32_t>(targetSub));

    if (diag)
    {
        Log("[subclass-diag] WRITE success=%d target=%u",
            subclassWritten ? 1 : 0,
            targetSub);
    }

    if (!subclassWritten)
        return false;

    // Finally UpdateSubclass.
    const bool updateSucceeded = CallUpdateSubclass(weaponEnt);

    int32_t afterSub = 0;
    const bool afterRead =
        SafeReadI32(weaponEnt + g_off.BE_nSubclassID, afterSub);

    if (diag)
    {
        Log("[subclass-diag] UPDATE success=%d READBACK read=%d value=%u",
            updateSucceeded ? 1 : 0,
            afterRead ? 1 : 0,
            static_cast<unsigned int>(afterSub));
    }

    if (!updateSucceeded)
        return false;

    return true;
}
