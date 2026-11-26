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
#include "hooks/frame_stage.h"

#include <windows.h>
#include <atomic>
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

    // What the last apply actually built for a weapon view. This is a record,
    // not a gate: Lootline's Apply builds whenever its NeedsUpdate gate asks it
    // to and remembers no material state at all (skin_application.cpp:1060).
    // It exists only so the two things that cannot be finished in one call - a
    // first-person copy that does not exist yet (a holstered gun has none) and a
    // build that threw - are completed on a later pass without rebuilding the
    // half that is already correct.
    struct BuiltMaterialState
    {
        uintptr_t view = 0;
        uintptr_t hudWeapon = 0;
        bool world = false;
        bool hud = false;
    };

    struct WeaponNameCacheEntry
    {
        uintptr_t view = 0;
        uint16_t defIndex = 0;
        int paintKit = 0;
        std::string skinName;
    };

    static std::unordered_map<uintptr_t, BuiltMaterialState>
        g_builtMaterials;

    static std::unordered_map<uintptr_t, WeaponNameCacheEntry>
        g_weaponNameCache;


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

        // Every paint kit is logged once, not only the one under investigation:
        // whether an Armory kit is an old-model kit (mask 2) decides which mesh
        // its paint is drawn on, and nothing in the log said that for any kit
        // but 413 - which is how two guns could be wrong for weeks without the
        // one field that drives it ever being printed.
        static std::unordered_map<int, uint64_t> g_loggedMasks;

        auto loggedMask = g_loggedMasks.find(paintKitId);

        if (loggedMask == g_loggedMasks.end() || loggedMask->second != mask)
        {
            g_loggedMasks[paintKitId] = mask;

            Log("[mesh-diag] pk=%d found=%d usesOldModel=%u mask=%llu",
                paintKitId,
                found ? 1 : 0,
                usesOldModel ? 1 : 0,
                static_cast<unsigned long long>(mask));
        }

        return mask;
    }

    // Lootline's FitModelToPaint (skin_application.cpp:993), as one call for both
    // of a gun's entities.
    //
    // An old-model paint kit is only right on the gun's old CS:GO mesh (mask 2).
    // CS2 puts its own mesh group back on the entity whenever it re-initializes
    // the skeleton - drawing the gun, dropping it, a respawn - so the mask is
    // read on every pass, and set again only where it differs.
    //
    // Only the mesh is fitted here. Rebuilding the material as well is what made
    // the guns flash and fall back to the stock one (Lootline's note on the same
    // path: "the first try rebuilt the skin material each time too and the guns
    // flashed, then went default").
    //
    // A mask that cannot be read is not a mask that is wrong. ReadMeshGroupMask
    // answers 0 when the scene node or the schema field is missing, and the
    // reference skips the entity in exactly that case (`worldMask != 0`): setting
    // on an unknown read writes the mesh on every pass of every gun, which is a
    // write this exists to avoid.
    bool FitMeshToPaint(uintptr_t weaponEnt, uintptr_t hudWeapon, uint64_t mask)
    {
        const uint64_t worldMask = ReadMeshGroupMask(weaponEnt);
        const uint64_t hudMask = hudWeapon ? ReadMeshGroupMask(hudWeapon) : 0;

        // All ones is not a mask, it is an unreadable field. 0 is the documented
        // "could not read" answer, but a member that moved - or a model state
        // caught mid-rebuild - answers with the sentinel instead. The
        // 2026-11-24 session reads `mesh was 18446744073709551615/0` on a knife
        // whose mask is 1 and wrote the mesh on top of it; the write goes through
        // the same broken member, so this is the case where not writing is the
        // only safe answer.
        constexpr uint64_t kUnreadableMask = ~0ull;

        const bool worldKnown = worldMask != 0 && worldMask != kUnreadableMask;
        const bool hudKnown = hudMask != 0 && hudMask != kUnreadableMask;

        if ((worldMask == kUnreadableMask) || (hudMask == kUnreadableMask))
        {
            static uint64_t lastUnreadableLogMs = 0;
            const uint64_t nowMs = NowMs();

            if (nowMs - lastUnreadableLogMs >= 5000)
            {
                lastUnreadableLogMs = nowMs;

                Log("[mesh-fit] weapon=%p unreadable mask (world=%llu hud=%llu); left as it is",
                    (void*)weaponEnt,
                    static_cast<unsigned long long>(worldMask),
                    static_cast<unsigned long long>(hudMask));
            }
        }

        const bool fitWorld = worldKnown && worldMask != mask;
        const bool fitHud = hudKnown && hudMask != mask;

        if (fitWorld)
            SetMeshGroup(weaponEnt, mask);

        if (fitHud)
            SetMeshGroup(hudWeapon, mask);

        if (!fitWorld && !fitHud)
            return false;

        static std::unordered_map<uintptr_t, int> g_fitCounts;
        const int count = ++g_fitCounts[weaponEnt];

        // A gun that has to be fitted over and over says CS2 keeps taking the
        // mesh back; a gun fitted once says the apply simply never set it again.
        if (count <= 3 || count % 20 == 0)
        {
            Log("[mesh-fit] weapon=%p mesh was %llu/%llu -> %llu (fit #%d)",
                (void*)weaponEnt,
                static_cast<unsigned long long>(worldMask),
                static_cast<unsigned long long>(hudMask),
                static_cast<unsigned long long>(mask), count);
        }

        return true;
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

    // ---- dead-pawn paint ----
    //
    // While the pawn is dead, CS2 is tearing the round down: weapon entities,
    // the viewmodel and the charm entities are all being destroyed, and freeing
    // a list the game still owns is the heap-corruption candidate behind the
    // crash that survived the dead-pawn gate. So the dead pass never reaches
    // WriteViewSafely (which frees and rebuilds the list).
    //
    // What it does instead is the only write that is safe on a view the game
    // owns: the floats already in the view are overwritten, in place. No free,
    // no allocation, no schema setter. This is the data the death camera builds
    // its weapon from, so the Armory paint still reaches it - without
    // restructuring the view CS2 is about to destroy. A view that carries no
    // paint attributes at all is left alone: writing one would mean allocating
    // into it.
    bool RepaintViewInPlace(uintptr_t v, const TargetSkin& t)
    {
        AttributeVector_t* vector = GetAttributeVector(v);

        if (!vector || vector->size <= 0 || vector->size > 512 ||
            !vector->data || vector->data < 0x10000u)
            return false;

        __try
        {
            auto* attributes =
                reinterpret_cast<EconItemAttribute_t*>(vector->data);

            bool paintWritten = false;

            for (int i = 0; i < vector->size; ++i)
            {
                float value = 0.0f;

                switch (attributes[i].defIndex)
                {
                case ATTR_PAINT:
                    value = static_cast<float>(t.paintKit);
                    paintWritten = true;
                    break;
                case ATTR_SEED:
                    value = static_cast<float>(t.resolvedSeed);
                    break;
                case ATTR_WEAR:
                    value = t.wear;
                    break;
                default:
                    continue;
                }

                attributes[i].value = value;
                attributes[i].initialValue = value;
            }

            return paintWritten;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    // Writes identity + paint kit to a given item view. SAFE to call on an
    // empty view. A populated view is reclaimed first: its attribute list is
    // freed and rebuilt. That is the only place this runtime frees a view's
    // list, which is why the dead pawn never reaches here (see
    // RepaintViewInPlace above).
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

        if (!EconAttr_Remove(v))
        {
            Log("[apply] %s view attribute list could not be reclaimed; "
                "leaving the game's item untouched", which);
            return false;
        }

        SafeWriteU32(v + g_off.EIV_ItemIDHigh, 0xFFFFFFFFu);
        SafeWriteU8(v + g_off.EIV_Initialized, 1);
        // Lootline's Apply writes this as false and its skinchanger is the
        // reference for consistency (skin_application.cpp:1139). Setting it true
        // made CS2 skip the item data for every view this runtime painted and
        // dropped almost every gun to its default material in v5.0; it is back to
        // false, the value the reference uses.
        SafeWriteU8(v + g_off.EIV_DisallowSOC, 0);
        SafeWriteU8(v + g_off.EIV_RestoreCustom, 1);
        SafeWriteI32(v + g_off.EIV_EntityQuality, wantQuality);

        // The item id's low half is deliberately left exactly as CS2 has it.
        //
        // This runtime used to stamp a fabricated low id on every painted view
        // so no two guns shared a material. Lootline's Apply writes the high
        // half (0xFFFFFFFF, "this is not an SOC item") and never touches the
        // low one (skin_application.cpp:1139): the game's own low id is already
        // unique per item, and replacing it makes CS2 treat the view as a
        // different item than the one it synced - which is what refilled the
        // held weapon's view between passes ("pre-write: size=0", then
        // "have(pk=0)") and why the gun on screen, above all, kept repainting.
        // Removing the write is the reference's behaviour, not a new guess.

        EconAttr_Create(v, t.paintKit, t.wear, t.resolvedSeed, wantStatTrak, attachments);

        // Diagnostic: check whether attributes were created
        AttributeVector_t* post = GetAttributeVector(v);
        Log("[apply] %s post-create: size=%d data=%p alloc=%d",
            which,
            post ? post->size : -1,
            post ? (void*)post->data : nullptr,
            post ? post->allocationCount : -1);

        // Lootline writes one thing here: the cached description pointer, which
        // ClearNameCache already zeroes at +0x200 (C_EconItemView::m_NameDescription,
        // right after 0x200 bytes of unknown in its own schema). The two dwords
        // this used to write at 0x5A0/0x5A4 are in a region the reference never
        // touches, so they are gone.

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

    // The reference for this whole decision is Lootline's
    // SkinApplication::NeedsUpdate (skin_application.cpp:1062): it compares the
    // weapon's fallback paint/seed/wear/StatTrak, the view's entity quality and
    // the custom name, and nothing else. It never looks at the view's attribute
    // list, so an item view that CS2 re-initialized in place is not treated as a
    // reason to apply again - and that is what keeps a painted gun on its own
    // material for the round. Reading the paint out of the view here (v4.9 and
    // earlier) meant every re-initialized view was rewritten and rebuilt at a
    // moment when the view held the real item's data, which is exactly the "real
    // skin" / "no skin" flicker, and nine rebuilds of one rifle in eleven minutes
    // in the 21:45 session.
    // Lootline's RealItemIdBack (skinchanger.cpp:361).
    //
    // CS2 re-syncs the item view it owns from the real equipped item: taking a
    // gun out, a drop, a respawn, the first draw of the round. When that
    // happens the view's item id high goes back to the game's value, while the
    // weapon's fallback paint fields keep the values this runtime wrote - so the
    // gate above (which is Lootline's NeedsUpdate and compares fallbacks, not
    // the view) said "already applied" and nothing ever put the fake skin back
    // on. That is the "it renders 90% of the time" report, and it is worst on
    // the gun that is actually in hand, because the game re-syncs that one the
    // most.
    //
    // The reference answers it by looking at the one field it stamps on every
    // apply: item id high 0xFFFFFFFF means "this view is ours". Anything else is
    // the real item, and the gun is painted again. The reference throttles this
    // to one repair per second per weapon and stops after five of them for the
    // same gun; both are kept here (see the state below), so a view CS2 rewrites
    // every frame is not rebuilt every frame.
    bool RealItemIdBack(uintptr_t weaponEnt, uintptr_t view)
    {
        if (!view || !g_off.EIV_ItemIDHigh)
            return false;

        uint32_t high = 0;

        if (!SafeReadU32(view + g_off.EIV_ItemIDHigh, high))
            return false;

        if (high == 0xFFFFFFFFu)
            return false;

        constexpr uint64_t ID_BACK_INTERVAL_MS = 1000;

        // Lootline's ID_BACK_MAX_PER_WEAPON (skinchanger.cpp:365): the game sends
        // the item again a handful of times, and beyond that a weapon that keeps
        // coming back is one CS2 is re-syncing every pass. Each repair is a full
        // material rebuild on a gun in the player's hands, so an uncapped repair
        // is a gun that never stops rebuilding - it renders between rebuilds,
        // which is the "one time in ten" report with the log showing an apply
        // every pass. The reference stops after five; so does this.
        constexpr int ID_BACK_MAX_PER_WEAPON = 5;

        // ...but a spent budget must never strand a gun on its real skin, so it is
        // refilled twice. A different item view on the same address is a different
        // weapon (CS2 recycles weapon entities) and starts over, which is what
        // Lootline's "forgotten with the weapon" pruning does. And a gun that has
        // held its skin for ID_BACK_REFILL_MS is not the every-pass loop this cap
        // exists for, so a later re-sync gets its five repairs back. What stays
        // capped is the same view re-sent over and over: 5 rebuilds, then no more
        // until it has been quiet for the refill window.
        constexpr uint64_t ID_BACK_REFILL_MS = 20000;

        struct IdBackState
        {
            uintptr_t view = 0;
            uint64_t lastMs = 0;
            int times = 0;
            bool capLogged = false;
        };

        static std::unordered_map<uintptr_t, IdBackState> g_idBack;
        static int g_idBackReports = 0;

        const uint64_t now = GetTickCount64();
        IdBackState& state = g_idBack[weaponEnt];

        if (state.view != view)
            state = IdBackState{ view, 0, 0, false };

        if (state.lastMs != 0 && now - state.lastMs < ID_BACK_INTERVAL_MS)
            return false;

        if (state.lastMs != 0 && now - state.lastMs >= ID_BACK_REFILL_MS)
        {
            state.times = 0;
            state.capLogged = false;
        }

        if (state.times >= ID_BACK_MAX_PER_WEAPON)
        {
            if (!state.capLogged)
            {
                state.capLogged = true;
                Log("[apply-idback] weapon=%p view=%p repair cap reached (%d); the game keeps re-sending its item",
                    (void*)weaponEnt, (void*)view, state.times);
            }

            return false;
        }

        ++state.times;
        state.lastMs = now;

        // Logged once per view, which the map above already tracks.
        if (g_idBackReports < 30)
        {
            ++g_idBackReports;

            Log("[apply-idback] weapon=%p view=%p item id high=0x%08X (the real item) - applying again",
                (void*)weaponEnt, (void*)view, high);
        }

        return true;
    }

    // The quality CS2 must read on the view for this target: 12 = Souvenir
    // (Lootline's ITEM_QUALITY_TOURNAMENT, skin_application.cpp:39, applied to
    // weapons only at :121), 9 = StatTrak, 3 = knife, 0 = plain. Every pass
    // used to derive this from StatTrak alone, so an Armory Souvenir was
    // written to CS2's inventory as quality 12 and painted on the gun as
    // quality 0: the toggle showed the item as a Souvenir in the Armory and
    // did nothing to the skin in game.
    int WantQuality(const TargetSkin& t)
    {
        if (IsKnifeDefinition(t.defIndex))
            return 3;

        if (t.souvenir)
            return 12;

        return t.statTrak ? 9 : 0;
    }

    bool IsAlreadyApplied(uintptr_t weaponEnt, uintptr_t view, const TargetSkin& t)
    {
        // The game put its own item back on this view; nothing below can say
        // otherwise, so the gate fails and the weapon is written again.
        if (RealItemIdBack(weaponEnt, view))
            return false;

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

        const int wantQuality = WantQuality(t);

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
            curSeed == t.resolvedSeed &&
            wearMatch &&
            statTrakMatches &&
            !killsAhead &&
            curQuality == wantQuality;
    }

    // Names the state that failed the gate, once per weapon and view. The 22:13
    // session re-applied the same rifle twice with no buy or sell in between and
    // nothing in the log said which field disagreed, so the next session answers
    // it instead of another round of guessing. Printed before the write, so these
    // are the values the gate rejected.
    void LogGateMismatch(uintptr_t weaponEnt, uintptr_t view,
        const TargetSkin& t, int wantQuality, int wantStatTrak)
    {
        static std::unordered_map<uintptr_t, uintptr_t> g_lastGateLog;

        if (g_lastGateLog[weaponEnt] == view)
            return;

        g_lastGateLog[weaponEnt] = view;

        int     curPK = -9999;
        int     curSeed = -9999;
        float   curWear = -9999.0f;
        int     curStatTrak = -9999;
        int32_t curQuality = -9999;

        const bool pkOk     = SafeReadI32(weaponEnt + g_off.EE_FallbackPK, curPK);
        const bool seedOk   = SafeReadI32(weaponEnt + g_off.EE_FallbackSeed, curSeed);
        const bool wearOk   = SafeReadFloat(weaponEnt + g_off.EE_FallbackWear, curWear);
        const bool stOk     = SafeReadI32(weaponEnt + g_off.EE_FallbackStatTrak, curStatTrak);
        const bool qualOk   = SafeReadI32(view + g_off.EIV_EntityQuality, curQuality);

        Log("[apply-gate] def=%u view=%p weapon=%p have(pk=%d%s seed=%d%s wear=%.4f%s st=%d%s q=%d%s) want(pk=%d seed=%d wear=%.4f st=%d q=%d)",
            t.defIndex, (void*)view, (void*)weaponEnt,
            curPK, pkOk ? "" : "?",
            curSeed, seedOk ? "" : "?",
            curWear, wearOk ? "" : "?",
            curStatTrak, stOk ? "" : "?",
            curQuality, qualOk ? "" : "?",
            t.paintKit, t.resolvedSeed, t.wear, wantStatTrak, wantQuality);
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
        // Per apply, not once per view, which is what Lootline does: it calls this
        // at the top of every Apply (skin_application.cpp:1124). CS2 refills the
        // list from the equipped item, so a clear that only ever runs once leaves
        // the refilled real charm / StatTrak / paint in place for the rest of the
        // session. Applies are rare now (only a real identity change gets here),
        // so this is not a per-tick write.
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
            g_builtMaterials.erase(weaponEnt);
    }

    // Last first-person weapon that resolved for a gun. CS2 rebuilds the
    // viewmodel after every skin regeneration, so FindHudWeapon legitimately
    // returns 0 for a frame or two; without a fallback the one-charm pass defers
    // its HUD work and the static charm stays on the gun.
    std::unordered_map<uintptr_t, uintptr_t> g_lastHudWeapon;

    // The knife model last written on a first-person weapon, and when. CS2 keeps
    // re-syncing a knife's item view, so the world half's own guard (its def index
    // has to differ) is what stops it repeating - but the HUD half had no guard
    // at all: the 23:20 session set the same butterfly model on the viewmodel 17
    // times, and the fault that ended it was inside animationsystem.dll two lines
    // after the last one. A rename of a model CS2 is already drawing is exactly
    // the skeleton rebuild it does not survive being asked for twice.
    std::unordered_map<uintptr_t, std::pair<std::string, uint64_t>> g_hudKnifeModel;
    constexpr uint64_t HUD_KNIFE_REFRESH_MS = 10000;

    // Only trust a remembered HUD weapon while its owner handle still resolves
    // back to the same world weapon; a respawn or weapon switch frees it.
    bool HudWeaponStillOwned(uintptr_t hudWeapon, uintptr_t weaponEnt)
    {
        if (!hudWeapon || !weaponEnt)
            return false;

        // The pointer has to be a live entity before anything else is believed
        // about it. A viewmodel entity CS2 has already freed still reads as a
        // plausible object - the owner handle check below then passes on stale
        // bytes - and every native call this runtime makes on it (mesh group,
        // material build, composite release, keychain addon) lands on freed
        // memory. A live C_BaseEntity's vtable is inside client.dll; the entity
        // list resolver uses the same test.
        {
            uintptr_t vtable = 0;
            const ModuleInfo client = GetClientModule();

            if (!client.valid() ||
                !SafeReadQword(hudWeapon, vtable) ||
                !client.inside(vtable))
                return false;
        }

        const uint32_t ownerHandle =
            static_cast<uint32_t>(ReadHandle(hudWeapon, g_off.BE_hOwnerEntity));

        if (!HandleValid(ownerHandle))
            return false;

        return GetEntityByHandle(ownerHandle) == weaponEnt;
    }

    // Lootline's ReleaseCompositeMaterials (skin_application.cpp:126): clears a
    // skin material owner's stale composites. `stampGeneration` also runs the
    // derived empty-material callback, which puts the stock material on the gun
    // - it is only right when nothing replaces that material afterwards. A
    // sticker change on a gun that keeps its paint passes false and builds the
    // replacement in the same call, so the default material is never drawn in
    // between ("the replacement paint-only composite is built immediately
    // below, avoiding a transient stock-material reapply").
    void ReleaseEntityCompositeMaterials(uintptr_t entity, bool stampGeneration)
    {
        if (!entity || !pReleaseCompositeMaterials)
            return;

        // A C_BaseEntity's CCompositeMaterialOwner sits at +0x610 on this build;
        // Lootline resolves it by RTTI and lineup.cpp already uses the same
        // constant for the glove material copy.
        constexpr uintptr_t COMPOSITE_MATERIAL_OWNER = 0x610;

        __try
        {
            pReleaseCompositeMaterials(
                reinterpret_cast<void*>(entity + COMPOSITE_MATERIAL_OWNER),
                stampGeneration);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }

    // Kept for the frame-stage API. It no longer changes any build decision:
    // the reference has no rebuild budget, so an apply builds at once (see the
    // model section in ApplyWeaponSkin).
    bool g_eagerApply = false;

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
    g_builtMaterials.clear();
    g_nameTagCache.clear();
    g_foreignCleared.clear();
    g_networkedCleared.clear();
    g_lastHudWeapon.clear();
    g_hudKnifeModel.clear();
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

    // The weapon handle has to name a live entity before anything below reads the
    // item view it embeds. A handle from a list built before the death still
    // resolves through a stale slot, and the view lives inside that entity: every
    // read of its attribute list is then a read of freed memory. That is the
    // "unmapped-address fault" the crash filter wrote down on both 2026-11-24
    // dumps, one line after the pawn died. A live C_BaseEntity's vtable is inside
    // client.dll - the same test the entity resolvers use.
    {
        uintptr_t entityVtable = 0;
        const ModuleInfo client = GetClientModule();

        if (!client.valid() ||
            !SafeReadQword(weaponEnt, entityVtable) ||
            !client.inside(entityVtable))
            return false;
    }

    // The pawn died: CS2 is tearing the round's weapons, the first-person model
    // and the keychain entities down, so this pass must not free, allocate or
    // call into the item schema. The one thing it still does is keep the view's
    // paint values pointed at the Armory skin (the dead branch below) - that is
    // what the death camera builds its weapon from. Everything else waits for
    // the respawn sweep.
    int32_t pawnHealth = 0;
    const bool pawnDead =
        SafeReadI32(pawn + g_off.PAWN_Health, pawnHealth) && pawnHealth <= 0;

    // The charm must be written here: CS2 renders it from these attributes, and
    // without them it only exists in the inventory UI. The duplicate seen in
    // game is a second keychain entity created by the world-model build; it is
    // removed after the rebuild below (see RemoveWorldKeychainEntities).
    const int wantQuality = WantQuality(t);

    // Kills continue from the saved instance: EconAttr_Create writes this into
    // "kill eater", and the game increments it from there.
    // Never lose progress: a view that already counted more kills than the saved
    // instance keeps its number when the skin is written again.
    const int liveKills = t.statTrak ? LiveKillEater(view) : -1;
    const int savedKills = t.statTrak ? (t.statTrakKills > 0 ? t.statTrakKills : 0) : 0;
    const int wantStatTrak = t.statTrak ? (liveKills > savedKills ? liveKills : savedKills) : -1;

    // The charm is written once, inside the view write below, and never cleared:
    // the keychain setters fault on this client after a model build (the 07:52
    // session lost every charm that way), so the attribute stays and
    // Charm::ProcessPending removes the extra entities and rebuilds the HUD addon
    // instead.
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

    if (!alreadyPainted)
        LogGateMismatch(weaponEnt, view, t, wantQuality, wantStatTrak);

    // ---- networked attribute list: cleared when applying, never per tick ----
    //
    // Emptied before the view write, not after it: this list is the one CS2 reads
    // a sticker from, and WriteViewSafely writes the stickers into both lists, so
    // clearing it afterwards removed the stickers that had just been written
    // there (the USP-S that only showed its stickers after a re-buy).
    //
    // Only when applying. Lootline clears this list inside Apply
    // (skin_application.cpp:1124) and does not touch it again until the next
    // apply. This runtime used to strip the real charm/StatTrak - and in v4.8 the
    // real paint too - out of the vector on every pass, i.e. it wrote into CS2's
    // own networked vector with nothing about the gun changed, and the 22:13 log
    // has 19 of those clears for 21 applies, most of them ticks where the gate had
    // already said the gun was finished.
    bool networkedClearedNow = false;

    if (!pawnDead && !alreadyPainted)
        networkedClearedNow = ClearNetworkedAttachmentsInPlace(weaponEnt, view);

    // ---- dead pawn: in-place paint only ----
    //
    // Intent, stated once: while dead the death camera keeps the Armory paint,
    // and the runtime never restructures a view the game is destroying. The
    // paint floats the view already carries are overwritten (RepaintViewInPlace:
    // no free, no allocation, no schema call); a view with no paint attributes
    // is left alone. Nothing else in the pass runs - no attachments, no
    // description invalidation, no material rebuild, no charm, no HUD entry -
    // and no fallback field is recorded, so the respawn pass still performs the
    // full write.
    if (pawnDead)
    {
        const bool repainted = RepaintViewInPlace(view, t);

        if (repainted)
        {
            static std::unordered_map<uintptr_t, uintptr_t> g_lastDeadRepaintLog;

            if (g_lastDeadRepaintLog[weaponEnt] != view)
            {
                g_lastDeadRepaintLog[weaponEnt] = view;
                Log("[apply] dead pass: view=%p def=%u pk=%d repainted in place",
                    (void*)view, t.defIndex, t.paintKit);
            }
        }
        else
        {
            static uint64_t lastDeadSkipLogMs = 0;
            const uint64_t nowMs = GetTickCount64();

            if (nowMs - lastDeadSkipLogMs >= 5000)
            {
                lastDeadSkipLogMs = nowMs;
                Log("[apply] dead pass: view=%p def=%u holds no paint attributes; left untouched",
                    (void*)view, t.defIndex);
            }
        }

        return repainted;
    }

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

    // `forceRebuild` is set by the already-painted attachment path below, when
    // new stickers / a charm were written onto a view whose material already
    // exists. Lootline treats that case by releasing the old composites without
    // the stock-material stamp and building the replacement in the same call.
    bool forceRebuild = false;

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

        // A read that fails is not a set that differs.
        //
        // The write below goes through CS2's attribute setters, and on this
        // client those fault on a live view (the "CallSetAttribute: threw"
        // lines). When the view could not be read back - the game is rebuilding
        // it - the old code wrote the same stickers again on every 250 ms pass,
        // so a re-synced gun faulted inside CS2's setter several times a second
        // for as long as the re-sync lasted. What was just written is remembered
        // per view instead: an unreadable view is not rewritten with that same
        // set until ATTACHMENT_REWRITE_MS has passed. A real change is still
        // written immediately, because a readable set that differs is compared
        // rather than timed.
        constexpr uint64_t ATTACHMENT_REWRITE_MS = 2000;

        struct WrittenAttachments
        {
            uintptr_t view = 0;
            Attachments::Set set;
            uint64_t wroteMs = 0;
        };

        static std::unordered_map<uintptr_t, WrittenAttachments> g_writtenAttachments;

        WrittenAttachments& written = g_writtenAttachments[weaponEnt];

        if (written.view != view)
            written = WrittenAttachments{ view, Attachments::Set{}, 0 };

        const uint64_t attachmentsNowMs = GetTickCount64();

        const bool rewriteHeld =
            !readable && written.wroteMs != 0 &&
            attachmentsNowMs - written.wroteMs < ATTACHMENT_REWRITE_MS &&
            written.set == desired;

        if ((!readable || current != desired) && !rewriteHeld)
        {
            // A charm that was removed: CS2's keychain setters fault on a live
            // view on this client ("CallSetAttribute: threw"), so the write below
            // cannot clear "keychain slot 0 id" - the attribute stayed, the next
            // model build hung the charm again, and an Armory removal looked like
            // it did nothing at all. The entry is zeroed in place instead, on
            // both lists, which is the removal without a setter.
            bool charmCleared = false;

            if (!desired.charm.present)
            {
                const int cleared = Attachments::ClearCharmInPlace(
                    reinterpret_cast<void*>(view));

                charmCleared = cleared > 0;

                if (charmCleared)
                    Log("[attach-view] charm cleared in place on weapon=%p (%d entries)",
                        (void*)weaponEnt, cleared);
            }

            // Only the charm changed: the removal is already done, so the setter
            // path (which would raise once per keychain attribute) is skipped
            // entirely. The charm entry is part of `current` and not of `desired`,
            // so it is taken out before the two are compared.
            bool stickersDiffer = !readable;

            if (readable)
            {
                Attachments::Set withoutCharm = current;
                withoutCharm.charm = Attachments::Charm{};
                stickersDiffer = withoutCharm != desired;
            }

            const bool stickerWrite = stickersDiffer ?
                Attachments::WriteItemView(view, desired,
                    readable ? &current : nullptr, true) : false;

            if (stickerWrite || charmCleared)
            {
                written.view = view;
                written.set = desired;
                written.wroteMs = attachmentsNowMs;

                char text[192]{};
                Attachments::Describe(desired, text, sizeof(text));
                Log("[attach-view] updated weapon=%p: %s", (void*)weaponEnt, text);

                // The material was built without these stickers, so it is
                // replaced in place: the old composites go without the
                // stock-material stamp (nothing is drawn between the two), and
                // the rebuild below runs on this pass.
                ReleaseEntityCompositeMaterials(weaponEnt, false);
                ReleaseEntityCompositeMaterials(g_lastHudWeapon[weaponEnt], false);
                forceRebuild = true;
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

    // The mesh goes on every pass, not only inside a build.
    //
    // This is the one part of Lootline's apply that runs whether or not the
    // material is rebuilt (FitModelToPaint, skin_application.cpp:993): CS2 puts
    // its own mesh group back on the gun and on the first-person copy - drawing
    // it, a drop, a respawn - and an old-model paint kit drawn on the CS2 mesh is
    // the "renders one time in ten" report. It costs a read and, only when the
    // mask actually differs, one SetMeshGroupMask call.
    if (t.paintKit > 0)
        FitMeshToPaint(weaponEnt, hudWeapon, mask);

    // Lootline's Apply has no model cache and no rebuild budget: its caller's
    // NeedsUpdate gate is the only decision (skin_application.cpp:1062) and an
    // apply builds the world and first-person materials in the same call. That
    // is exactly what this runtime had grown away from. The cache turned into a
    // gate of its own, a full loadout rebuilt one gun per 250 ms window (the
    // last gun arriving about two seconds late - the "knives and gloves used to
    // be instant" report), and every cache wipe drew the stock material before
    // the fake one was built again (the flash of the real skin).
    //
    // A build is now driven by the same two facts the reference uses: the view
    // was just written, or a material for it is still missing because the
    // first-person copy did not exist yet or the previous build threw.
    BuiltMaterialState& builtState = g_builtMaterials[weaponEnt];

    if (builtState.view != view)
        builtState = BuiltMaterialState{ view, 0, false, false };

    const bool needWorld =
        viewWritten || forceRebuild || !builtState.world;

    const bool needHud =
        hudWeapon != 0 &&
        (needWorld || !builtState.hud || builtState.hudWeapon != hudWeapon);

    bool modelBuiltThisPass = false;

    if (needWorld || needHud)
    {
        modelBuiltThisPass = true;

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
        // The world material already exists when only the HUD copy appeared, so
        // that case builds the HUD half alone and leaves the world half - its
        // charm shell included - exactly as the last pass left it.
        // Lootline keeps the live keychain hidden from the material build
        // (skin_application.cpp:1148 - SetKeychainId(item, 0) right after the
        // attributes are created). A build that can see "keychain slot 0 id"
        // hangs a keychain module of its own, on the world model and on the
        // viewmodel; the upkeep then has to take those off again, so every apply
        // on a gun with a charm created and destroyed native entities on the gun
        // in the player's hands. It is shelled for both halves now and put back
        // once, after the last build.
        const bool charmShelled =
            (needWorld || needHud) && desired.charm.present;

        int charmShelledCount = 0;

        if (charmShelled)
            charmShelledCount = Attachments::SetCharmIdInPlace(
                reinterpret_cast<void*>(view), 0);

        bool worldBuilt = true;

        if (needWorld)
        {
            SetMeshGroup(weaponEnt, mask);

            worldBuilt =
                CallBuildModernSkin(view, weaponEnt, "world");
        }

        bool hudBuilt = !needHud;
        bool hudModelReady = true;

        // Change the HUD knife model before building its material. Without a
        // HUD entity there is nothing to rename, so the schema lookup is skipped
        // too: requiring its model name here failed the whole build whenever the
        // knife wasn't in first person, the state was never cached, and the pass
        // rebuilt that knife on every tick - holding the single model-build slot
        // the other weapons needed (the report of a few guns staying default for
        // the round: Tec-9, Glock). The lookup matters only when a HUD model
        // exists.
        // Lootline renames the world knife only (KnifeModelChanger::Apply ->
        // SetModel + m_nSubclassID + UpdateSubclass); the first-person copy is
        // CS2's own child of that weapon and takes the model with it. This
        // runtime also renamed the HUD entity directly, and its own note on that
        // path records what it did: a butterfly model set 17 times in one
        // session and "the fault that ended it was inside animationsystem.dll
        // two lines after the last one". A rename of the viewmodel skeleton is a
        // rebuild CS2 is already doing; asking for it a second time is the
        // crash. No HUD rename, like the reference.

        if (needHud && hudModelReady)
        {
            SetMeshGroup(hudWeapon, mask);

            hudBuilt =
                CallBuildModernSkin(view, hudWeapon, "hud");

            // The first-person weapon is drawn from the HUD model weapon entity,
            // and its material can be built from that entity's own fallback
            // paint fields - not the world weapon's. Only the world entity was
            // ever written, so the held gun kept whatever the game synced there
            // (the real item's kit) while the world model was right: the "my
            // stickers are on the real skin" report. Written with the same
            // values as the world entity, once read back so the next log proves
            // which one it was.
            if (g_off.EE_FallbackPK)
            {
                int32_t hudPK = 0;
                const bool hudRead =
                    SafeReadI32(hudWeapon + g_off.EE_FallbackPK, hudPK);

                // A field that does not hold a paint kit is not an econ entity's
                // fallback block; nothing is written there.
                const bool hudIsEcon = hudRead && hudPK >= -1 && hudPK <= 100000;

                if (hudIsEcon)
                {
                    SafeWriteI32(hudWeapon + g_off.EE_FallbackPK, t.paintKit);
                    SafeWriteI32(hudWeapon + g_off.EE_FallbackSeed, t.resolvedSeed);
                    SafeWriteFloat(hudWeapon + g_off.EE_FallbackWear, t.wear);
                    SafeWriteI32(hudWeapon + g_off.EE_FallbackStatTrak, wantStatTrak);
                }

                static std::unordered_map<uintptr_t, uintptr_t> g_lastHudFallbackLog;

                if (g_lastHudFallbackLog[weaponEnt] != hudWeapon)
                {
                    g_lastHudFallbackLog[weaponEnt] = hudWeapon;
                    Log("[hud-fallback] hud=%p read=%d was pk=%d -> pk=%d written=%d",
                        (void*)hudWeapon, hudRead ? 1 : 0, hudPK, t.paintKit,
                        hudIsEcon ? 1 : 0);
                }
            }
        }

        // The charm id goes back once, after the last build that could have hung
        // a copy of it. This is Lootline's deferred keychain pass in miniature:
        // the attribute is the live one again, and the entity CS2 keeps on the gun
        // is the simulated charm.
        if (charmShelled)
        {
            const int restored = Attachments::SetCharmIdInPlace(
                reinterpret_cast<void*>(view), desired.charm.kit);

            Log("[charm-build] weapon=%p kit=%d shelled=%d restored=%d after the builds",
                (void*)weaponEnt, desired.charm.kit, charmShelledCount, restored);
        }

        // A build that faulted leaves the gun's material half-built; regenerating
        // skins on top of that is what the crash log showed faulting, so the pass
        // reports it instead of caching the state.
        g_buildFaulted = g_buildFaulted || !worldBuilt || !hudModelReady;

        // Record which half is done. A half that failed stays unbuilt, so the
        // gate above retries it on the next pass; nothing else about the
        // material is remembered, so a re-written view is simply built again.
        if (worldBuilt)
        {
            builtState.world = true;
            builtState.hudWeapon = hudWeapon;
        }

        if (hudBuilt && hudModelReady)
        {
            builtState.hud = true;
            builtState.hudWeapon = hudWeapon;
        }

        if (!worldBuilt || !hudBuilt || !hudModelReady)
        {
            // Nothing used to report this, so a build that never finished
            // looked exactly like a working one in the log.
            static std::unordered_map<uintptr_t, uintptr_t> g_lastUncached;

            if (g_lastUncached[weaponEnt] != view)
            {
                g_lastUncached[weaponEnt] = view;

                Log("[apply-cache] rebuild incomplete weapon=%p world=%d hud=%d hudModel=%d",
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

    // Charm: Lootline's split. This pass only records what the gun should
    // carry; the keychain entity work runs at FRAME_NET_UPDATE_END after the
    // game's own net-update call, for the gun in your hands (Charm::
    // ProcessPending). Nothing here walks the entity list, creates or removes an
    // entity, or calls into CS2's keychain natives: doing that for every gun on
    // the roster, holstered ones included, from inside this pass is what stalled
    // the game thread and what crashed the client inside animationsystem.dll.
    TraceSwitch("charm request");

    Charm::Request(weaponEnt, Charm::DesiredKit(attachments), modelBuiltThisPass);

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

        // Only the call that stores a new number logs. The staged target keeps its
        // old count until the Bridge refreshes it, so this comparison stayed true
        // on every pass - and the line was flushed to disk each time, which is a
        // hitch on every apply tick.
        if (recorded > t.statTrakKills &&
            StatTrakKills::Record(t.instanceId, recorded))
        {
            Log("[stattrak] recorded kills=%d instance=%s", recorded,
                t.instanceId.c_str());
        }
    }

    const bool identityChanged =
        !alreadyPainted || nameChanged;

        if (identityChanged)
    {
        TraceSwitch("hud weapon selection clear");

        if (ClearHudWeaponSelectionEntry(weaponEnt))
            Log("[hud-name] weapon selection entry refreshed: %p", (void*)weaponEnt);
    }

    return identityChanged;
}

// ---- Default ----
void ApplyDefault(uintptr_t weaponEnt)
{
    if (!weaponEnt) return;

    const uintptr_t view = GetWeaponItem(weaponEnt);
    if (!view) return;

    if (!EconAttr_Remove(view))
        return;

    SafeWriteI32(view + g_off.EIV_EntityQuality, 0);
    SafeWriteU8(view + g_off.EIV_Initialized, 1);
    SafeWriteU8(view + g_off.EIV_DisallowSOC, 0);
    SafeWriteU8(view + g_off.EIV_RestoreCustom, 1);

    SafeWriteI32(weaponEnt + g_off.EE_FallbackPK, 0);
    SafeWriteI32(weaponEnt + g_off.EE_FallbackSeed, 0);
    SafeWriteFloat(weaponEnt + g_off.EE_FallbackWear, 0.0f);
    SafeWriteI32(weaponEnt + g_off.EE_FallbackStatTrak, -1);

    SetCustomName(view, "");

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

    // The entity already carries this knife's subclass, so its world model is
    // the Armory knife and only the item view was re-synced: CS2 puts its own
    // item back on the view (the same re-sync that resets m_iItemIDHigh) while
    // the entity itself is untouched. Calling SetModel here would tear the
    // weapon model and its animation graph down and build them again for
    // nothing - and that rebuild is what the 23:20 and 22:36 sessions faulted
    // on (animationsystem.dll+0x44871D, immediately after this call; the 23:20
    // log sets the same butterfly model three times in one second this way).
    // The view's definition is restored above. A respawn, drop or pickup that
    // really replaces the knife resets the subclass with the model, so the
    // swap below still runs whenever the game actually rebuilt the weapon.
    if (subclassRead && static_cast<uint32_t>(curSub) == targetSub)
    {
        static uint64_t lastViewOnlyLogMs = 0;
        const uint64_t nowMs = GetTickCount64();

        if (nowMs - lastViewOnlyLogMs >= 5000)
        {
            lastViewOnlyLogMs = nowMs;
            Log("[knife] def=%u view restored; the entity already has the model, no rebuild",
                targetDef);
        }

        return true;
    }

    Log("[knife] SetModel (schema): %s (view def %u -> %u, subclass %d -> %u)",
        modelName.c_str(), static_cast<unsigned>(curDef), static_cast<unsigned>(targetDef),
        curSub, targetSub);

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

    const int wantQuality = quality >= 0 ? quality : WantQuality(t);
    const int wantStatTrak =
        t.statTrak ? (t.statTrakKills > 0 ? t.statTrakKills : 0) : -1;

    if (!EconAttr_Remove(view))
        return false;

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
