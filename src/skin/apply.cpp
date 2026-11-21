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
#include "inventory/attachments.h"
#include "inventory/charm.h"
#include "inventory/stattrak_kills.h"
#include "inventory/runtime_mode.h"
#include "memory/scanner.h"
#include "inventory/engine_schema_diagnostic.h"

#include <windows.h>
#include <bit>
#include <cmath>
#include <string>
#include <unordered_map>
#include <utility>
#include "sdk/entities.h"
#include <cstddef>
#include <cstdint>

namespace
{
    bool ReadSchemaString(uintptr_t address, std::string& output)
    {
        output.clear();

        if (!address)
            return false;

        for (size_t i = 0; i < 512; ++i)
        {
            uint8_t ch = 0;

            if (!SafeReadU8(address + i, ch))
            {
                output.clear();
                return false;
            }

            if (ch == 0)
                return !output.empty();

            output.push_back(static_cast<char>(ch));
        }

        output.clear();
        return false;
    }

    bool GetKnifeModelName(uint16_t definitionIndex, std::string& modelName)
    {
        modelName.clear();

        static std::unordered_map<uint16_t, std::string> s_knifeModelCache;
        auto it = s_knifeModelCache.find(definitionIndex);
        if (it != s_knifeModelCache.end()) {
            modelName = it->second;
            return !modelName.empty();
        }

        if (!g_esResolved)
            return false;

        // CEconItemSystem -> CEconItemSchema
        uintptr_t schema = 0;

        if (!SafeReadQword(g_esResolved + 0x08, schema) ||
            schema < 0x10000)
            return false;

        // CEconItemSchema::m_SortedItemDefinitions = +0xF8
        const uintptr_t map = schema + 0xF8;

        int32_t count = 0;
        uintptr_t elements = 0;

        if (!SafeReadI32(map, count) ||
            count <= 0 || count > 10000 ||
            !SafeReadQword(map + 0x08, elements) ||
            elements < 0x10000)
            return false;

        // C_EconUtlMap<int, CEconItemDefinition*>
// Node: value +0x08, key +0x14, stride 0x18.
        for (int32_t i = 0; i < count; ++i)
        {
            const uintptr_t node =
                elements + static_cast<uintptr_t>(i) * 0x18;

            uintptr_t definition = 0;
            uint16_t actualDefinitionIndex = 0;

            if (!SafeReadQword(node + 0x08, definition) ||
                definition < 0x10000)
                continue;

            if (!SafeReadU16(definition + 0x10, actualDefinitionIndex) ||
                actualDefinitionIndex != definitionIndex)
                continue;

            uintptr_t modelNamePtr = 0;

            if (!SafeReadQword(definition + 0x148, modelNamePtr))
                return false;

            if (ReadSchemaString(modelNamePtr, modelName)) {
                s_knifeModelCache[definitionIndex] = modelName;
                return true;
            }
            return false;
        }

        return false;
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

        static std::unordered_map<int, bool> s_paintKitOldModelCache;
        auto it = s_paintKitOldModelCache.find(paintKitId);
        if (it != s_paintKitOldModelCache.end()) {
            usesOldModel = it->second;
            return true;
        }

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
            s_paintKitOldModelCache[paintKitId] = usesOldModel;
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

    struct HudWeaponSelectionEntry
    {
        std::byte unknown00[0x38];
        std::int32_t weaponHandle;
        std::byte unknown3C[0x0C];
    };

    struct HudWeaponSelectionLayout
    {
        std::byte unknown00[0x50];
        std::int32_t count;
        std::byte unknown54[0x04];
        HudWeaponSelectionEntry* entries;
        std::byte unknown60[0x38];
        void* hudElementVtable;
    };

    static_assert(
        offsetof(HudWeaponSelectionLayout, hudElementVtable) == 0x98
        );

    static bool ClearHudWeaponSelectionEntrySEH(
        uintptr_t weaponEnt,
        uintptr_t findHudElementAddress,
        uintptr_t clearHudWeaponAddress)
    {
        __try
        {
            using FindHudElementFn =
                uintptr_t(__fastcall*)(const char*);

            using ClearHudWeaponFn =
                int64_t(__fastcall*)(uintptr_t, int32_t, int64_t);

            auto findHudElement =
                reinterpret_cast<FindHudElementFn>(findHudElementAddress);

            auto clearHudWeapon =
                reinterpret_cast<ClearHudWeaponFn>(clearHudWeaponAddress);

            const uintptr_t hud =
                findHudElement("HudWeaponSelection");

            if (!hud)
                return false;

            auto* selection =
                reinterpret_cast<HudWeaponSelectionLayout*>(
                    hud - offsetof(
                        HudWeaponSelectionLayout,
                        hudElementVtable));

            const int32_t count = selection->count;
            const auto* entries = selection->entries;

            if (!entries || count <= 0 || count > 64)
                return false;

            for (int32_t i = count - 1; i >= 0; --i)
            {
                const int32_t handle = entries[i].weaponHandle;

                if (handle < 0)
                    continue;

                const uintptr_t entity =
                    GetEntityByHandle(static_cast<uint32_t>(handle));

                if (entity == weaponEnt)
                {
                    clearHudWeapon(
                        reinterpret_cast<uintptr_t>(selection),
                        i,
                        0);

                    return true;
                }
            }
        }
        __except (1)
        {
            return false;
        }

        return false;
    }

    bool ClearHudWeaponSelectionEntry(uintptr_t weaponEnt)
    {
        static const uintptr_t findHudElementAddress = []()
            {
                return ScanPattern(
                    GetClientModule(),
                    "40 53 48 83 EC ? 48 8B 05 ? ? ? ? "
                    "48 8B D9 48 85 C0 74 ? 48 89 5C 24");
            }();

        static const uintptr_t clearHudWeaponAddress = []()
            {
                uintptr_t call = ScanPattern(
                    GetClientModule(),
                    "E8 ? ? ? ? 8B F8 C6 84 24");

                return call ? ResolveCallTarget(call) : 0;
            }();

        if (!weaponEnt ||
            !findHudElementAddress ||
            !clearHudWeaponAddress)
            return false;

        return ClearHudWeaponSelectionEntrySEH(
            weaponEnt,
            findHudElementAddress,
            clearHudWeaponAddress);
    }

    // Writes identity + paint kit to a given item view. SAFE to call on an
    // empty view. Returns false if the view already has attributes we don't own.
    bool WriteViewSafely(uintptr_t v, const TargetSkin& t,
        int wantQuality, int wantStatTrak, const char* which,
        const Attachments::Set* attachments)
    {
        if (!v) return false;

        // Read the actual CUtlVector size (at v + EIV_AttributeList + 0x08 + 0x00)
        AttributeVector_t* vec = GetAttributeVector(v);
        uint32_t preCount = vec ? (uint32_t)vec->size : 0;
        uintptr_t preData = vec ? vec->data : 0;

        Log("[apply] %s view pre-write: size=%u data=0x%p",
            which, preCount, (void*)preData);

        // CS2 fills the item view of every item it created - the weapon you
        // just bought, the real item behind the skin - with that item's own
        // attributes. Treating those as "game-owned, never write" left the gun
        // on its default skin until CS2 happened to hand us an empty view,
        // which is the "the skin only showed after I re-bought it" report, and
        // it is why every weapon used in a match came back with the real
        // item's look afterwards: the rebuilt view was populated, so the apply
        // pass refused it.
        //
        // The lineup path has always replaced a game-populated view
        // (DressItemView removes the list first), and nothing faults over it
        // because the write goes straight into the vector instead of through
        // CS2's schema setters. The in-match path does the same now: the
        // entries are dropped by EconAttr_Remove below, then ours are built.
        // A size or pointer that cannot be a real attribute list is still left
        // alone, because freeing that would be freeing the game's memory.
        if (preCount > 0)
        {
            if (preCount >= 1000 || preData <= 0x10000)
            {
                Log("[apply] %s view attribute list looks corrupt (%u/0x%p); leaving it alone",
                    which, preCount, (void*)preData);
                return false;
            }

            Log("[apply] %s view had %u game attributes; reclaiming the view",
                which, preCount);
        }

        EconAttr_Remove(v);

        SafeWriteU32(v + g_off.EIV_ItemIDHigh, 0xFFFFFFFFu);
        SafeWriteU8(v + g_off.EIV_Initialized, 1);
        SafeWriteU8(v + g_off.EIV_DisallowSOC, 0);
        SafeWriteU8(v + g_off.EIV_RestoreCustom, 1);
        SafeWriteI32(v + g_off.EIV_EntityQuality, wantQuality);

        EconAttr_Create(v, t.paintKit, t.wear, t.resolvedSeed, wantStatTrak, attachments);

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

    // The counter CS2 draws is the item's "kill eater" attribute, and only the
    // game can raise it. Read it straight off the view instead of trusting the
    // fallback field, which the game never touches: that field is what kept the
    // counter at zero.
    int LiveKillEater(uintptr_t view)
    {
        AttributeVector_t* vector = GetAttributeVector(view);

        if (!vector || vector->size <= 0 || vector->size > 512 || !vector->data)
            return -1;

        auto* attributes = reinterpret_cast<EconItemAttribute_t*>(vector->data);

        // The attribute is an integer bit-cast into a float: a plain cast would
        // read the bits as 1e-45 and report zero kills forever.
        for (int i = 0; i < vector->size; ++i)
            if (attributes[i].defIndex == ATTR_KILL_EATER)
                return std::bit_cast<int32_t>(attributes[i].value);

        return -1;
    }


    // One-shot dump of what the counter looks like on a weapon, so a report of
    // "no counting" or a doubled badge can be read off the log instead of guessed
    // at. Called once per weapon and view.
    void LogStatTrakState(uintptr_t weaponEnt, uintptr_t view)
    {
        int32_t quality = -1;
        int32_t fallbackStatTrak = -1;
        SafeReadI32(view + g_off.EIV_EntityQuality, quality);
        SafeReadI32(weaponEnt + g_off.EE_FallbackStatTrak, fallbackStatTrak);

        int eaters = 0;
        int value = -1;
        std::string dump;

        if (AttributeVector_t* vector = GetAttributeVector(view))
        {
            if (vector->size > 0 && vector->size < 512 && vector->data)
            {
                auto* attributes = reinterpret_cast<EconItemAttribute_t*>(vector->data);
                char entry[48]{};

                for (int i = 0; i < vector->size; ++i)
                {
                    if (attributes[i].defIndex == ATTR_KILL_EATER)
                    {
                        ++eaters;
                        if (value < 0)
                            value = std::bit_cast<int32_t>(attributes[i].value);
                    }

                    std::snprintf(entry, sizeof(entry), "%u ", attributes[i].defIndex);
                    dump += entry;
                }
            }
        }

        Log("[stattrak-diag] weapon=%p view=%p quality=%d fallbackST=%d killEaters=%d value=%d attrs=[%s]",
            (void*)weaponEnt, (void*)view, quality, fallbackStatTrak,
            eaters, value, dump.c_str());
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

        // CS2 rebuilds an item view from scratch on a weapon switch and around
        // some round transitions. The fallback fields live on the weapon entity
        // and survive that, so a painted weapon whose view came back empty was
        // treated as already painted and the gun showed the default skin until
        // it was sold and bought again. An empty attribute list is exactly the
        // state the write path can safely repaint; a view CS2 has populated is
        // left alone above.
        // The fallback fields live on the weapon entity and survive CS2
        // rebuilding the item view, so they alone cannot prove the view still
        // carries our paint. While the view is populated CS2 may have put the
        // real item's attributes back; reading the paint attribute out of the
        // view is what turns that into a re-write on this tick instead of a
        // gun that keeps its default skin until the next buy.
        int viewPaint = -1;
        {
            AttributeVector_t* vector = GetAttributeVector(view);

            if (!vector || vector->size <= 0 || vector->size > 512 || !vector->data)
                return false;

            auto* attributes = reinterpret_cast<EconItemAttribute_t*>(vector->data);

            for (int i = 0; i < vector->size; ++i)
            {
                if (attributes[i].defIndex == ATTR_PAINT)
                {
                    viewPaint = static_cast<int>(attributes[i].value);
                    break;
                }
            }
        }

        const int wantQuality = IsKnifeDefinition(t.defIndex) ? 3 : (t.statTrak ? 9 : 0);

        // StatTrak is identity (present or not), never the saved count: the game
        // increments the counter while the skin is equipped, so comparing counts
        // would rewrite the view every tick and drop the live count back to the
        // saved one.
        const bool statTrakMatches = (curStatTrak >= 0) == t.statTrak;
        const bool wearMatch = std::fabsf(curWear - t.wear) < 0.001f;

        // Only a saved count that is ahead of the live one needs a rewrite (the
        // instance gained kills elsewhere). A live count above the saved one is
        // the game's own progress and must never be reset.
        const bool killsAhead = t.statTrak && t.statTrakKills > curStatTrak;

        return curPK == t.paintKit &&
            (t.paintKit <= 0 || viewPaint == t.paintKit) &&
            curSeed == t.resolvedSeed &&
            wearMatch &&
            statTrakMatches &&
            !killsAhead &&
            curQuality == wantQuality;
    }
}

namespace
{
    // Custom name last handed to CS2's nametag helper, per weapon. A repeated
    // apply must not re-create the tag module; only a name change does.
    std::unordered_map<uintptr_t, std::string> g_nameTagCache;


    // Views whose real stickers/charm were already cleared once. CS2's attribute
    // vector there cannot be rebuilt, but sticker ids are ordinary schema
    // attributes, so a single regular-list write removes them.
    std::unordered_map<uintptr_t, uintptr_t> g_foreignCleared;

    // Views whose networked sticker / charm ids were already zeroed.
    std::unordered_map<uintptr_t, uintptr_t> g_networkedCleared;

    // The player's real item carries its own attributes in the networked list:
    // its stickers, its charm, its name - and its own "kill eater", which is why
    // a fake StatTrak weapon showed the real item's StatTrak badge on top of
    // ours. Every setter on that list faults on this client (the
    // "CallSetAttribute: threw" storm), so nothing is set there. The vector is
    // emptied instead, the way Lootline does it: no setter, no allocation, and
    // CS2 then reads only the ordinary list this apply pass writes.
    bool ClearNetworkedAttachmentsInPlace(uintptr_t weaponEnt, uintptr_t view)
    {
        if (g_networkedCleared[weaponEnt] == view)
            return false;

        g_networkedCleared[weaponEnt] = view;

        constexpr uint16_t STICKER_ID_FIRST = 113;   // "sticker slot 0 id"
        constexpr uint16_t STICKER_STRIDE   = 4;     // id, wear, scale, rotation
        constexpr int      STICKER_SLOTS    = 6;
        constexpr uint16_t CHARM_ID         = 299;   // "keychain slot 0 id"
        constexpr uint16_t CHARM_STICKER    = 321;   // a Slab's sealed sticker
        constexpr int      MAX_ATTRIBUTES   = 512;

        int entries = 0;
        int cleared = 0;

        __try
        {
            AttributeVector_t* vector = GetNetworkedVector(view);

            if (!vector || vector->size <= 0 || vector->size > MAX_ATTRIBUTES ||
                !vector->data)
                return false;

            entries = vector->size;

            // Everything the real item carried stops showing through the fake
            // one, its own StatTrak counter included.
            vector->size = 0;
            cleared = entries;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[attach-foreign] networked clear faulted weapon=%p view=%p",
                (void*)weaponEnt, (void*)view);
            return false;
        }

        if (cleared > 0)
            Log("[attach-foreign] networked cleared %d of %d attributes weapon=%p",
                cleared, entries, (void*)weaponEnt);

        return cleared > 0;
    }

    // Removes the real item's stickers and charm from a view CS2 populated, so a
    // fake skin shows clean (or with the Armory's own attachments) instead of
    // inheriting the equipped item's. Only the ordinary attribute list is
    // written: the networked list's setters fault on this client.
    void ClearForeignAttachments(uintptr_t weaponEnt, uintptr_t view,
                                 const Attachments::Set* attachments)
    {
        auto known = g_foreignCleared.find(weaponEnt);
        if (known != g_foreignCleared.end() && known->second == view)
            return;

        g_foreignCleared[weaponEnt] = view;

        static const Attachments::Set kNone{};
        const Attachments::Set& desired = attachments ? *attachments : kNone;
        void* list = reinterpret_cast<void*>(view + g_off.EIV_AttributeList);
        const bool ok = Attachments::Write(list, desired, nullptr, true, true);

        char text[192]{};
        Attachments::Describe(desired, text, sizeof(text));
        Log("[attach-foreign] weapon=%p view=%p cleared=%d %s",
            (void*)weaponEnt, (void*)view, ok ? 1 : 0, text);

        if (ok)
            g_weaponModelCache.erase(weaponEnt);
    }

    // Last first-person weapon that resolved for a gun. CS2 rebuilds the
    // viewmodel after every skin regeneration, so FindHudWeapon legitimately
    // returns 0 for a frame or two; without a fallback the one-charm pass defers
    // its HUD work and the static charm stays on the gun.
    std::unordered_map<uintptr_t, uintptr_t> g_lastHudWeapon;

    // Only trust a remembered HUD weapon while its owner handle still resolves
    // back to the same world weapon; a respawn or weapon switch frees it.
    bool HudWeaponStillOwned(uintptr_t hudWeapon, uintptr_t weaponEnt)
    {
        if (!hudWeapon || !weaponEnt)
            return false;

        const uint32_t ownerHandle =
            static_cast<uint32_t>(ReadHandle(hudWeapon, g_off.BE_hOwnerEntity));

        if (!HandleValid(ownerHandle))
            return false;

        return GetEntityByHandle(ownerHandle) == weaponEnt;
    }

    // One apply pass runs every 250 ms and walks every owned weapon. A full buy
    // introduces them all at once, and the model rebuild (mesh group, material,
    // HUD knife model) is the expensive part: ten of them in one pass is the
    // freeze at the start of a round. The skin attributes and the name are
    // written either way; only the rebuild waits, so a weapon is never left
    // unpainted - it arrives at most one pass later. The window self-resets, so
    // no caller can leave the budget stuck closed.
    // One rebuild per window, not two: each one compiles a material and re-hangs
    // the HUD model, and two of them in the same frame is already a visible
    // hitch. A weapon that has to wait is painted one pass (250 ms) later.
    constexpr int      MAX_MODEL_BUILDS_PER_WINDOW = 1;
    constexpr int      EAGER_MODEL_BUILDS_PER_WINDOW = 4;

    // Set by the apply pass while a match or round is loading.
    bool               g_eagerApply = false;
    constexpr uint64_t MODEL_BUILD_WINDOW_MS = 250;

    int      g_modelBuildsInWindow = 0;
    uint64_t g_modelBuildWindowStartMs = 0;
    uint64_t g_lastBuildDeferLogMs = 0;

    bool ModelBuildBudgetAllows()
    {
        const uint64_t now = GetTickCount64();

        if (now - g_modelBuildWindowStartMs >= MODEL_BUILD_WINDOW_MS)
        {
            g_modelBuildWindowStartMs = now;
            g_modelBuildsInWindow = 0;
        }

        const int allowed = g_eagerApply ? EAGER_MODEL_BUILDS_PER_WINDOW
                                         : MAX_MODEL_BUILDS_PER_WINDOW;

        if (g_modelBuildsInWindow < allowed)
        {
            ++g_modelBuildsInWindow;
            return true;
        }

        if (now - g_lastBuildDeferLogMs >= 5000)
        {
            g_lastBuildDeferLogMs = now;
            Log("[apply-budget] %d model rebuilds done in this pass; the rest wait for the next one",
                MAX_MODEL_BUILDS_PER_WINDOW);
        }

        return false;
    }

    // Set when an apply pass could not build a weapon's material, so the caller
    // does not hand the half-built item to RegenerateSkins.
    bool g_buildFaulted = false;
}

bool ApplyBuildFaulted()
{
    return g_buildFaulted;
}

void ClearApplyBuildFault()
{
    g_buildFaulted = false;
}

void SetEagerApply(bool eager)
{
    g_eagerApply = eager;
}

bool EagerApplyActive()
{
    return g_eagerApply;
}

void InvalidateWeaponModelCache()
{
    g_weaponModelCache.clear();
    g_nameTagCache.clear();
    g_foreignCleared.clear();
    g_networkedCleared.clear();
    g_lastHudWeapon.clear();
    Charm::ForgetAll();

    Log("[apply-cache] weapon model cache invalidated");
}

bool ResolveDefinitionModelName(uint16_t definitionIndex, std::string& modelName)
{
    return GetKnifeModelName(definitionIndex, modelName);
}

// ---- Weapon ----
bool ApplyWeaponSkin(uintptr_t weaponEnt, uintptr_t pawn, const TargetSkin& t,
                     const Attachments::Set* attachments)
{
    if (!weaponEnt || !pawn)
        return false;

    const uintptr_t view = GetWeaponItem(weaponEnt);

    if (!view)
        return false;

    // The charm must be written here: CS2 renders it from these attributes, and
    // without them it only exists in the inventory UI. The duplicate seen in
    // game is a second keychain entity created by the world-model build; it is
    // removed after the rebuild below (see RemoveWorldKeychainEntities).
    const int wantQuality =
        IsKnifeDefinition(t.defIndex) ? 3 : (t.statTrak ? 9 : 0);

    // Kills continue from the saved instance: EconAttr_Create writes this into
    // "kill eater", and the game increments it from there.
    // Never lose progress: a view that already counted more kills than the saved
    // instance keeps its number when the skin is written again.
    const int liveKills = t.statTrak ? LiveKillEater(view) : -1;
    const int savedKills = t.statTrak ? (t.statTrakKills > 0 ? t.statTrakKills : 0) : 0;
    const int wantStatTrak = t.statTrak ? (liveKills > savedKills ? liveKills : savedKills) : -1;

    // The charm is written once, inside the view write below, and never cleared:
    // the keychain setters fault on this client after a model build (the 07:52
    // session lost every charm that way), so the attribute stays and Charm::Upkeep
    // removes the extra entities and rebuilds the HUD addon instead.
    const Attachments::Set* buildAttachments = attachments;

    // One dump per weapon and view, only for StatTrak items.
    {
        static std::unordered_map<uintptr_t, uintptr_t> g_lastStatTrakDiag;

        if (t.statTrak && g_lastStatTrakDiag[weaponEnt] != view)
        {
            g_lastStatTrakDiag[weaponEnt] = view;
            LogStatTrakState(weaponEnt, view);
        }
    }

    const bool alreadyPainted =
        IsAlreadyApplied(weaponEnt, view, t);

    // Emptied before the view write, not after it. This list is the one CS2 reads
    // a sticker from, and WriteViewSafely writes the stickers into both lists, so
    // clearing it afterwards removed the stickers that had just been written
    // there: the weapon kept the paint but showed no stickers until the game
    // rebuilt the item (the USP-S that only showed its stickers after a re-buy).
    const bool networkedClearedNow =
        ClearNetworkedAttachmentsInPlace(weaponEnt, view);

    if (!alreadyPainted)
    {
        Log("[apply] enter (weapon=0x%p def=%u pk=%d)",
            (void*)weaponEnt, t.defIndex, t.paintKit);

        if (!WriteViewSafely(
                view,
                t,
                wantQuality,
                wantStatTrak,
                "world",
                buildAttachments))
        {
            Log("[apply] def=%u view=0x%p could not be written; leaving the game's item untouched",
                t.defIndex, (void*)view);

            return false;
        }

        // The fallback fields are what this apply pass compares against on the
        // next tick. Only record them once the view is ours: on a game-owned
        // item they would relabel a weapon whose material was never written.
        SafeWriteI32(weaponEnt + g_off.EE_FallbackPK, t.paintKit);
        SafeWriteI32(weaponEnt + g_off.EE_FallbackSeed, t.resolvedSeed);
        SafeWriteFloat(weaponEnt + g_off.EE_FallbackWear, t.wear);
        SafeWriteI32(weaponEnt + g_off.EE_FallbackStatTrak, wantStatTrak);
    }

    const bool viewWritten = !alreadyPainted;

    // CS2 can rebuild an item view in place, so the cached model state still
    // looks current while the paint was just written into it again. Dropping
    // the cache entry makes this pass rebuild the model instead of leaving the
    // gun on the default one until it is re-bought.
    if (viewWritten)
        g_weaponModelCache.erase(weaponEnt);

    // The networked CAttributeList sync that used to run here is deliberately
    // gone. Every attribute it set raised through CS2's schema setter (the log
    // showed twelve "CallSetAttribute: threw" per apply), and the ordinary
    // attribute list - written above and below - is the one CS2 reads for the
    // weapon material. The exception storm also left BuildModernSkin and
    // RegenerateSkins faulting on the very tick a match starts, which is the
    // client crash.

    // Attachments belong to the fake skin, not to the real item it replaces. A
    // real M4A1-S carrying four stickers used to keep them on the injected Blue
    // Phosphor; the Armory set is therefore authoritative and every slot it does
    // not fill is cleared (clearMissing), including the charm. The write still
    // only happens when the view actually differs, so it is not a per-tick cost.
    static const Attachments::Set kNoAttachments{};
    const Attachments::Set& desired =
        buildAttachments ? *buildAttachments : kNoAttachments;

    if (alreadyPainted)
    {
        Attachments::Set current;
        const bool readable =
            Attachments::Read(reinterpret_cast<void*>(view), current);

        // A clear this pass emptied the networked sticker attributes, so the
        // ordinary list matching is not enough: write them back.
        if (networkedClearedNow || !readable || current != desired)
        {
            if (Attachments::WriteItemView(view, desired,
                    readable ? &current : nullptr, true))
            {
                char text[192]{};
                Attachments::Describe(desired, text, sizeof(text));
                Log("[attach-view] updated weapon=%p: %s", (void*)weaponEnt, text);

                // The model was built without these stickers.
                g_weaponModelCache.erase(weaponEnt);
            }
            else
            {
                Log("[attach-view] could not write stickers on weapon=%p", (void*)weaponEnt);
            }
        }
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

    uintptr_t hudWeapon = FindHudWeapon(weaponEnt, pawn);

    if (hudWeapon)
    {
        g_lastHudWeapon[weaponEnt] = hudWeapon;
    }
    else
    {
        auto cachedHud = g_lastHudWeapon.find(weaponEnt);

        if (cachedHud != g_lastHudWeapon.end() &&
            HudWeaponStillOwned(cachedHud->second, weaponEnt))
        {
            hudWeapon = cachedHud->second;
            DebugLog("[hud-find] using remembered hud=%p for weapon=%p",
                (void*)hudWeapon, (void*)weaponEnt);
        }
        else if (cachedHud != g_lastHudWeapon.end())
        {
            g_lastHudWeapon.erase(cachedHud);
        }
    }

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

    if (modelChanged && ModelBuildBudgetAllows())
    {
        // A frame that runs long here is reported as a model rebuild.
        SetActivity("model rebuild");

        const uint64_t rebuildStartMs = NowMs();

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

        // One charm, not two.
        //
        // Both builds read "keychain slot 0 id" from the same item view, and each
        // one hangs a keychain of its own: the world build a rigid one on the gun,
        // the HUD build the first-person charm. In first person both are drawn,
        // which is the double charm the player sees. The id is therefore zeroed
        // for the world build and put back before the HUD build, so exactly one
        // charm is ever created.
        //
        // The edit goes straight into the attribute vector, never through
        // Attachments::WriteCharm: every schema setter faults on a live view on
        // this client ("CallSetAttribute: threw"), and that storm during a match
        // start is what crashed the game. Writing the value of an entry that is
        // already in the vector cannot throw, and a view with no charm entry is
        // left alone.
        const bool charmShelled = desired.charm.present;
        int charmShelledCount = 0;

        if (charmShelled)
            charmShelledCount = Attachments::SetCharmIdInPlace(
                reinterpret_cast<void*>(view), 0);

        SetMeshGroup(weaponEnt, mask);

        const bool worldBuilt =
            CallBuildModernSkin(view, weaponEnt, "world");

        if (charmShelled)
        {
            const int restored = Attachments::SetCharmIdInPlace(
                reinterpret_cast<void*>(view), desired.charm.kit);

            Log("[charm-build] weapon=%p kit=%d shelled=%d restored=%d after the world build",
                (void*)weaponEnt, desired.charm.kit, charmShelledCount, restored);
        }

        bool hudBuilt = (hudWeapon == 0);
        bool hudModelReady = true;

        // Change the HUD knife model before building its material.
        if (IsKnifeDefinition(t.defIndex))
        {
            std::string modelName;

            if (GetKnifeModelName(t.defIndex, modelName))
            {
                hudModelReady =
                    CallSetModel(hudWeapon, modelName.c_str());

                if (hudModelReady)
                    Log("[knife] HUD SetModel (schema): %s",
                        modelName.c_str());
            }
            else
            {
                hudModelReady = false;

                Log("[knife] schema model missing for def=%u",
                    t.defIndex);
            }
        }

        if (hudWeapon && hudModelReady)
        {
            SetMeshGroup(hudWeapon, mask);

            hudBuilt =
                CallBuildModernSkin(view, hudWeapon, "hud");
        }

        // A build that faulted leaves the gun's material half-built; regenerating
        // skins on top of that is what the crash log showed faulting, so the pass
        // reports it instead of caching the state.
        g_buildFaulted = g_buildFaulted || !worldBuilt || !hudModelReady;

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

            // StatTrak is identity here, exactly as SameModelState compares it.
            // This used to store the kill count, so every StatTrak weapon failed
            // the compare on the next pass and rebuilt its model every 250 ms for
            // as long as it was in hand - the non-Stop sticker flicker, a fresh
            // keychain hung every pass (the double charm), and a rebuild of all
            // 35 weapons each round. Non-StatTrak weapons cached normally, which
            // is why the knife settled after two builds and the guns never did.
            state.statTrak = t.statTrak ? 0 : -1;
            state.quality = wantQuality;

            state.wear = t.wear;

            state.legacyModel = t.legacyModel;
            state.meshMask = mask;

            g_weaponModelCache[weaponEnt] = state;
        }
        else
        {
            // Nothing used to report this, so a build that never cached looked
            // exactly like a working one in the log.
            static std::unordered_map<uintptr_t, uintptr_t> g_lastUncached;

            if (g_lastUncached[weaponEnt] != view)
            {
                g_lastUncached[weaponEnt] = view;

                Log("[apply-cache] rebuild not cached weapon=%p world=%d hud=%d hudModel=%d",
                    (void*)weaponEnt, worldBuilt ? 1 : 0, hudBuilt ? 1 : 0,
                    hudModelReady ? 1 : 0);
            }
        }

        SetActivity("apply pass");

        // The rebuild is the expensive half of an apply: material compile, mesh
        // group change and the HUD model. Recording the slow ones is what lets
        // the next log name the cost instead of a vague "it froze".
        const uint64_t rebuildMs = NowMs() - rebuildStartMs;

        if (rebuildMs >= 20)
            Log("[perf] model rebuild took %llu ms (weapon=%p def=%u hud=%p)",
                static_cast<unsigned long long>(rebuildMs), (void*)weaponEnt,
                t.defIndex, (void*)hudWeapon);
    }

    // Name tag: the custom name lives on the item view, and CS2's own helper
    // hangs (or removes) the gun's "nametag" module from it. Done after the
    // material, as Lootline does, and only when the name changed so a repeated
    // apply does not rebuild the module every tick.
    {
        // Lootline calls its nametag helper after every apply and lets CS2 decide:
        // same name = nothing, another name = replace, no name = take the tag off.
        // This reads the name straight off the item view, so a stale tag left by
        // an older build (or a real item name) is cleared, not kept.
        std::string viewName;
        bool nameReadable = false;

        if (g_off.EIV_CustomName)
        {
            const char* raw = reinterpret_cast<const char*>(view + g_off.EIV_CustomName);

            if (raw)
            {
                for (size_t i = 0; i < 160; ++i)
                {
                    if (raw[i] == '\0')
                    {
                        nameReadable = true;
                        break;
                    }

                    viewName.push_back(raw[i]);
                }
            }
        }

        if (!nameReadable || viewName != t.customName)
        {
            SetCustomName(view, t.customName);
            ClearNameCache(view, "nametag");

            const bool tagged = AddNametag(weaponEnt, view);
            Log("[nametag] weapon=%p was=\"%s\" name=\"%s\" applied=%d",
                (void*)weaponEnt, viewName.c_str(), t.customName.c_str(),
                tagged ? 1 : 0);
        }

        if (!t.customName.empty())
            g_nameTagCache[weaponEnt] = t.customName;
        else
            g_nameTagCache.erase(weaponEnt);
    }

    // Charm: Lootline's upkeep. CS2 builds the charm from the item's keychain
    // attribute (written with the view above); the world model build also hangs a
    // rigid copy on the gun, so every charm entity is taken off the gun and the
    // first-person addon is rebuilt from the attribute - once, not every tick.
    Charm::Upkeep(weaponEnt, hudWeapon, attachments);

    // StatTrak: the counter the game keeps lives on the weapon, not on the saved
    // instance. Hand it back to the Armory instance so loading the same skin
    // continues where it stopped.
    if (t.statTrak && !t.instanceId.empty())
    {
        // The fallback field is only a fallback: the game never raises it, so the
        // view's own "kill eater" attribute is the number to trust.
        int recorded = 0;
        SafeReadI32(weaponEnt + g_off.EE_FallbackStatTrak, recorded);

        const int viewKills = LiveKillEater(view);

        if (viewKills > recorded)
            recorded = viewKills;

        if (recorded > t.statTrakKills)
        {
            StatTrakKills::Record(t.instanceId, recorded);
            Log("[stattrak] recorded kills=%d instance=%s", recorded,
                t.instanceId.c_str());
        }
    }

    const bool identityChanged =
        !alreadyPainted || nameChanged;

    if (identityChanged)
    {
        if (ClearHudWeaponSelectionEntry(weaponEnt))
            Log("[hud-name] weapon selection entry refreshed: %p",
                (void*)weaponEnt);
    }

    return identityChanged;
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

    // Remove the gun's name tag with CS2's own helper, then forget the cached
    // name so a later apply of the same name writes it again.
    g_nameTagCache.erase(weaponEnt);
    AddNametag(weaponEnt, view);

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

    std::string modelName;

    if (!GetKnifeModelName(targetDef, modelName) ||
        !pAgentSetModel ||
        !pKnifeUpdateSubclass)
    {
        Log("[knife] schema lookup failed for def=%u", targetDef);
        return false;
    }

    uintptr_t subclassOffset = 0;

    if (!ResolveSubclassOffset(subclassOffset))
        return false;

    int32_t curSub = 0;

    const bool subclassRead =
        SafeReadI32(weaponEnt + subclassOffset, curSub);

    static unsigned int falchionDiagCount = 0;
    const bool diag =
        targetDef == 512 && falchionDiagCount < 12;

    if (diag)
    {
        ++falchionDiagCount;

        Log(
            "[subclass-diag] BEFORE weapon=%p "
            "runtimeOffset=0x%llX read=%d value=%u target=%u",
            (void*)weaponEnt,
            static_cast<unsigned long long>(subclassOffset),
            subclassRead ? 1 : 0,
            static_cast<unsigned int>(curSub),
            targetSub);
    }

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

    Log("[knife] SetModel (schema): %s", modelName.c_str());

    if (!CallSetModel(weaponEnt, modelName.c_str()))
        return false;

    // Then subclass.
    const bool subclassWritten =
        SafeWriteI32(
            weaponEnt + subclassOffset,
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
        SafeReadI32(weaponEnt + subclassOffset, afterSub);

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

// ---- Lineup ----
// Writes a fake item identity + paint onto an item view the game is about to
// read: the weapon item of your own lineup character (team select, team intro,
// wingman intro, end of match). Unlike the in-match path this replaces
// attributes the game owns - the position's items are server-built and recopied
// on every rebuild, so nothing of ours has to survive in them.
// `wearNudge` offsets the wear so the material manager doesn't dedupe our skin
// onto a material built for an item that is never drawn (0 = keep the wear).
bool DressItemView(uintptr_t view, const TargetSkin& t,
                   uint16_t definition, int quality,
                   const Attachments::Set* attachments, float wearNudge)
{
    if (!view || (definition == 0 && t.paintKit <= 0))
        return false;

    if (definition != 0 &&
        !SafeWriteU16(view + g_off.EIV_ItemDefIndex, definition))
        return false;

    float wear = t.wear;
    if (wearNudge > 0.0f)
        wear = wear + wearNudge <= 1.0f ? wear + wearNudge : wear - wearNudge;

    const int wantQuality = quality >= 0
        ? quality
        : IsKnifeDefinition(t.defIndex) ? 3 : (t.statTrak ? 9 : 0);
    const int wantStatTrak =
        t.statTrak ? (t.statTrakKills > 0 ? t.statTrakKills : 0) : -1;

    EconAttr_Remove(view);

    if (!SafeWriteU32(view + g_off.EIV_ItemIDHigh, 0xFFFFFFFFu) ||
        !SafeWriteI32(view + g_off.EIV_EntityQuality, wantQuality) ||
        !SafeWriteU8(view + g_off.EIV_DisallowSOC, 0) ||
        !SafeWriteU8(view + g_off.EIV_RestoreCustom, 1) ||
        !SafeWriteU8(view + g_off.EIV_Initialized, 1))
        return false;

    if (t.paintKit > 0)
    {
        EconAttr_Create(view, t.paintKit, wear, t.resolvedSeed, wantStatTrak, attachments);

        AttributeVector_t* vec = GetAttributeVector(view);
        if (!vec || vec->size <= 0)
            return false;
    }

    SetCustomName(view, t.customName);
    return true;
}
