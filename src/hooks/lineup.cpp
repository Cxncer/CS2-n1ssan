#include "hooks/lineup.h"

#include <atomic>
#include <cstdio>
#include <cstring>
#include <mutex>
#include <string>

#include "config/offsets.h"
#include "diagnostics/log.h"
#include "hooks/minhook_dynamic.h"
#include "inventory/armory_inventory.h"
#include "inventory/attachments.h"
#include "inventory/engine_schema_diagnostic.h"
#include "inventory/loadout.h"
#include "inventory/runtime_mode.h"
#include "memory/access.h"
#include "memory/scanner.h"
#include "sdk/entities.h"
#include "sdk/functions.h"
#include "sdk/item_view.h"
#include "skin/apply.h"
#include "skin/gloves.h"

namespace
{
    // Lootline 1.5.5, client.dll: the builder the position classes' vfunc 146
    // jumps to while a rebuild is wanted. rcx is the
    // C_CSGO_TeamPreviewCharacterPosition; on entry it still holds the agent /
    // gloves / weapon items the game is about to read.
    constexpr const char* LINEUP_BUILD =
        "48 89 5C 24 20 55 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 ? "
        "48 81 EC ? ? ? ? ? 8B F1 48 8B 89 ? ? ? ? E8 ? ? ? ? 45 33 ED";

    // The skin-material manager caches by its inputs (paint, wear, seed...). An
    // item identical to the in-match one is hardly ever drawn, so its material
    // stayed pending for the whole screen; a slightly different wear makes the
    // lineup its own material, built for a model that is on screen.
    constexpr float LINEUP_WEAR_NUDGE = 0.0003f;

    // Lootline 1.5.5, client.dll: "lea rcx, [pawn + glove helper] ; call the
    // glove routine" inside the pawn's update. A lineup character never runs
    // that update, so the routine is run for it from here.
    constexpr const char* LINEUP_GLOVE_UPDATE =
        "48 8D 8B ? ? ? ? E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B ? ? ? 00 00 4C 8B";

    // Lootline 1.5.5, client.dll: a skin material owner's finished materials are
    // copied onto another owner (source, destination, release the destination's
    // first). The `lea rdi, [rcx + disp]` at +0xA is the finished list, so the
    // disp at +0xD is the count field's offset inside the owner.
    constexpr const char* LINEUP_COMPOSITE_COPY =
        "48 89 5C 24 08 57 48 83 EC 20 48 8D B9 ? ? ? ? 48 8B DA 83 3F 00 7E ? "
        "45 84 C0 74 ? 33 D2 48 8B CB E8";

    // A C_BaseEntity's CCompositeMaterialOwner sits right after the entity's own
    // fields (Lootline resolves it by RTTI; the offset is the same on this build).
    constexpr uintptr_t COMPOSITE_MATERIAL_OWNER = 0x610;

    // Lootline 1.5.5, client.dll: the skin material manager's getter (`mov rax,
    // [rip+disp]` at +4, disp at +7) and a request slot's layout.
    constexpr const char* LINEUP_COMPOSITE_MANAGER =
        "48 83 EC 28 48 8B 05 ? ? ? ? 48 85 C0 0F 85 ? ? ? ? 48 89 6C 24 40 "
        "48 89 74 24 48 48 89 7C 24 20 FF 15";

    // Lootline 1.5.5, client.dll: the composite material owner's touch, the kick
    // that makes the manager look at an owner's requests (a request at step 0
    // whose poll counter never moves is otherwise never picked up).
    constexpr const char* LINEUP_COMPOSITE_TOUCH =
        "40 53 48 83 EC 20 48 8B D9 FF 15 ? ? ? ? F3 0F 10 8B ? ? ? ? 0F 57 D2 "
        "F2 0F 5A D0 F3 0F 5F CA F3 0F 11 8B";

    constexpr uint32_t REQUEST_SLOT = 0x1B0;
    constexpr uintptr_t REQUEST_STEP = 0x8;
    constexpr uintptr_t REQUEST_SHARE = 0x88;
    constexpr uintptr_t REQUEST_WAITS_FOR = 0x108;

    // After the position's team int: the built character (a pawn whose
    // m_EconGloves the game filled from the position) and then its gun.
    constexpr uint32_t TEAM_TO_CHARACTER = 0x10;

    using LineupBuildFn = void* (__fastcall*)(void* position);

    LineupBuildFn OriginalLineupBuild = nullptr;

    uint32_t g_offXuid = 0;
    uint32_t g_offWeapon = 0;
    uint32_t g_offAgent = 0;
    uint32_t g_offGloves = 0;
    uint32_t g_offTeam = 0;          // derived: pet item + the items' stride
    bool     g_lookupsResolved = false;
    bool     g_lookupsFailed = false;

    std::atomic_int g_stamps{ 0 };
    bool g_loggedNoTarget = false;
    bool g_loggedCrash = false;

    uintptr_t g_beforePosition = 0;
    uint16_t  g_beforeGloveDefinition = 0;
    int       g_beforeGlovePaintKit = 0;
    int       g_beforeGloveSeed = 0;
    float     g_beforeGloveWear = 0.0f;

    // A built lineup character waiting for its gloves to be rebuilt. The glove
    // model is spawned by the game's glove routine, which the character's own
    // update would have run - it doesn't run on these screens.
    struct GlovePending
    {
        uintptr_t character = 0;
        uintptr_t gloveItem = 0;
        uint16_t  definition = 0;
        int       paintKit = 0;
        int       seed = 0;
        float     wear = 0.0f;
        uint32_t  accountId = 0;
        ULONGLONG createdAt = 0;
        int       frameApplies = 0;   // the first frames after the build
        int       timedApplies = 0;   // then at 0.4 / 1.2 / 3 s
        int       copies = 0;
        uint32_t  copiedModel = 0xFFFFFFFFu;   // glove model we copied onto
        ULONGLONG lastCopyAt = 0;
        char      lastCopyWhy[24] = "";
        bool      loggedLocalCounts = false;
        bool      unsharedLineup = false;
        bool      dressed = false;
        bool      logged = false;
        bool      loggedNoLocal = false;
    };

    std::mutex g_pendingMutex;
    GlovePending g_pendingGloves;

    using GloveRoutineFn = void(__fastcall*)(void* helper);

    struct GloveRoutine
    {
        bool resolved = false;
        GloveRoutineFn routine = nullptr;
        uint32_t helper = 0;   // character + this = the pawn's glove helper
    };

    GloveRoutine g_gloveRoutine;

    const GloveRoutine& GloveRoutineFunction()
    {
        if (g_gloveRoutine.resolved)
            return g_gloveRoutine;

        g_gloveRoutine.resolved = true;

        const uintptr_t site = ScanPattern(GetClientModule(), LINEUP_GLOVE_UPDATE);
        if (site)
        {
            int32_t helper = 0;
            int32_t relative = 0;

            if (SafeReadI32(site + 3, helper) &&
                SafeReadI32(site + 8, relative) &&
                helper > 0 && helper < 0x4000 && relative != 0)
            {
                g_gloveRoutine.helper = static_cast<uint32_t>(helper);
                g_gloveRoutine.routine =
                    reinterpret_cast<GloveRoutineFn>(site + 12 + relative);
            }
        }

        if (!g_gloveRoutine.routine)
            Log("[lineup] the glove routine wasn't found - lineup gloves only get the rebuild flag");

        return g_gloveRoutine;
    }

    using CompositeCopyFn = void(__fastcall*)(void* source, void* destination, char releaseFirst);

    struct CompositeCopy
    {
        bool resolved = false;
        CompositeCopyFn copy = nullptr;
        uint32_t countOffset = 0;   // owner + this = its finished materials' count
    };

    CompositeCopy g_compositeCopy;

    const CompositeCopy& CompositeCopyFunction()
    {
        if (g_compositeCopy.resolved)
            return g_compositeCopy;

        g_compositeCopy.resolved = true;

        const uintptr_t site = ScanPattern(GetClientModule(), LINEUP_COMPOSITE_COPY);
        if (site)
        {
            int32_t count = 0;

            if (SafeReadI32(site + 0xD, count) && count > 0 && count < 0x2000)
            {
                g_compositeCopy.countOffset = static_cast<uint32_t>(count);
                g_compositeCopy.copy = reinterpret_cast<CompositeCopyFn>(site);
            }
        }

        if (!g_compositeCopy.copy)
            Log("[lineup] the skin material copy wasn't found - lineup gloves stay unpainted");

        return g_compositeCopy;
    }

    // The paint kit attribute on an item view, -1 if it has none.
    int ReadPaintKitAttribute(uintptr_t item)
    {
        AttributeVector_t* vec = GetAttributeVector(item);

        if (!vec || vec->size <= 0 || vec->size > 256 || !vec->data)
            return -1;

        for (int32_t i = 0; i < vec->size; ++i)
        {
            const auto* attribute = reinterpret_cast<const EconItemAttribute_t*>(
                vec->data + static_cast<uintptr_t>(i) * sizeof(EconItemAttribute_t));

            if (attribute->defIndex == ATTR_PAINT)
                return static_cast<int>(attribute->value);
        }

        return -1;
    }

    // The glove model entity the character / pawn holds a handle to.
    uintptr_t GloveModelEntity(uintptr_t pawn, uint32_t helper)
    {
        if (!pawn || !helper)
            return 0;

        uint32_t handle = 0;
        if (!SafeReadU32(pawn + helper, handle) || handle == 0xFFFFFFFFu)
            return 0;

        return GetEntityByHandle(handle);
    }

    bool MaterialCounts(uintptr_t entity, int& finished, int& waiting)
    {
        finished = waiting = -1;

        const CompositeCopy& copy = CompositeCopyFunction();
        if (!entity || !copy.copy)
            return false;

        const uintptr_t owner = entity + COMPOSITE_MATERIAL_OWNER;
        int32_t f = 0;
        int32_t w = 0;

        if (!SafeReadI32(owner + copy.countOffset, f) ||
            !SafeReadI32(owner + copy.countOffset + 0x18, w))
            return false;

        // A wrong owner offset reads something that is not a material count:
        // treat it as unreadable rather than copying into it.
        if (f < 0 || f > 4096 || w < 0 || w > 4096)
            return false;

        finished = f;
        waiting = w;
        return true;
    }

    // Your in-match gloves' finished paint onto the lineup character's glove
    // model. The build's own request can sit unfinished (the material manager
    // dedupes it against an identical one that is never drawn), so the built
    // materials are copied instead - Lootline's way.
    // The model's requests that are still waiting for an identical one are made
    // on their own: no sharing, nothing to wait for (Lootline's Unshare). A
    // request that only ever waits never finishes, so the model stays unpainted
    // and there is nothing for the copy to take.
    using CompositeTouchFn = void(__fastcall*)(void* owner);

    struct CompositeTouch
    {
        bool resolved = false;
        CompositeTouchFn touch = nullptr;
    };

    CompositeTouch g_compositeTouch;

    const CompositeTouch& CompositeTouchFunction()
    {
        if (g_compositeTouch.resolved)
            return g_compositeTouch;

        g_compositeTouch.resolved = true;

        const uintptr_t site = ScanPattern(GetClientModule(), LINEUP_COMPOSITE_TOUCH);
        if (site)
            g_compositeTouch.touch = reinterpret_cast<CompositeTouchFn>(site);

        Log("[lineup] material touch %s", site ? "resolved" : "pattern not found");
        return g_compositeTouch;
    }

    // Kicks the owner so the manager picks its requests up (Lootline touches the
    // lineup glove model and yours every frame while it copies).
    void TouchModel(uintptr_t entity)
    {
        const CompositeTouch& touch = CompositeTouchFunction();

        if (!touch.touch || !entity)
            return;

        touch.touch(reinterpret_cast<void*>(entity + COMPOSITE_MATERIAL_OWNER));
    }

    const char* UnshareRequests(uintptr_t entity)
    {
        const CompositeCopy& copy = CompositeCopyFunction();

        if (!entity || !copy.copy || !copy.countOffset)
            return "no request owner";

        const uintptr_t owner = entity + COMPOSITE_MATERIAL_OWNER;

        int32_t count = 0;
        if (!SafeReadI32(owner + copy.countOffset + 0x18, count) ||
            count <= 0 || count > 8)
            return "no requests on your gloves";

        uintptr_t ids = 0;
        if (!SafeReadQword(owner + copy.countOffset + 0x20, ids) || !ids)
            return "no request ids";

        const uintptr_t getter = ScanPattern(GetClientModule(), LINEUP_COMPOSITE_MANAGER);

        if (!getter)
            return "manager pattern not found";

        int32_t offset = 0;
        if (!SafeReadI32(getter + 7, offset) || offset == 0)
            return "manager pattern unreadable";

        uintptr_t manager = 0;
        if (!SafeReadQword(getter + 0xB + offset, manager) || manager < 0x10000)
            return "manager null";

        uintptr_t slots = 0;
        int32_t slotCount = 0;

        if (!SafeReadQword(manager + 0x30, slots) || !slots ||
            !SafeReadI32(manager + 0x3C, slotCount) ||
            slotCount <= 0 || slotCount > 0x10000)
            return "manager slots unreadable";

        int changed = 0;

        for (int32_t k = 0; k < count; ++k)
        {
            uint64_t id = 0;
            if (!SafeReadQword(ids + static_cast<uintptr_t>(k) * 8, id) || !id)
                continue;

            for (int32_t slotIndex = 0; slotIndex < slotCount; ++slotIndex)
            {
                const uintptr_t slot = slots + static_cast<uintptr_t>(slotIndex) * REQUEST_SLOT;

                int32_t used = -1;
                if (!SafeReadI32(slot, used) || used < 0)
                    continue;   // a free slot

                uint64_t slotId = 0;
                if (!SafeReadQword(slot + 0x10, slotId) || slotId != id)
                    continue;

                const uintptr_t request = slot + 0x10;

                uint8_t step = 0;
                if (!SafeReadU8(request + REQUEST_STEP, step) || step != 0)
                    break;   // already being made

                // share = 0 is what lets the manager poll it: a request still
                // marked shared (share = 1) is never looked at, which is exactly
                // the first lineup after a launch. Clearing waits-for is only
                // needed when it waits for something.
                SafeWriteU8(request + REQUEST_SHARE, 0);

                uint64_t waitsFor = 0;
                if (SafeReadQword(request + REQUEST_WAITS_FOR, waitsFor) && waitsFor)
                {
                    SafeWriteU32(request + REQUEST_WAITS_FOR, 0);
                    SafeWriteU32(request + REQUEST_WAITS_FOR + 4, 0);
                }

                ++changed;
                break;
            }
        }

        return changed > 0 ? "freed" : "nothing waiting";
    }

    // What the lineup glove model's first request is doing: a request that sits
    // at step 0 (or whose target never advances) is why the material is black.
    void ProbeRequests(uintptr_t entity, char* out, std::size_t size)
    {
        std::snprintf(out, size, "no owner");

        const CompositeCopy& copy = CompositeCopyFunction();
        if (!entity || !copy.copy || !copy.countOffset)
            return;

        const uintptr_t owner = entity + COMPOSITE_MATERIAL_OWNER;

        int32_t count = 0;
        uintptr_t ids = 0;

        if (!SafeReadI32(owner + copy.countOffset + 0x18, count) || count <= 0 ||
            count > 8 || !SafeReadQword(owner + copy.countOffset + 0x20, ids) || !ids)
        {
            std::snprintf(out, size, "count=%d ids=%p", count, (void*)ids);
            return;
        }

        uint64_t id = 0;
        if (!SafeReadQword(ids, id) || !id)
        {
            std::snprintf(out, size, "count=%d first id empty", count);
            return;
        }

        const uintptr_t getter = ScanPattern(GetClientModule(), LINEUP_COMPOSITE_MANAGER);
        int32_t offset = 0;
        uintptr_t manager = 0;

        if (!getter || !SafeReadI32(getter + 7, offset) || !offset ||
            !SafeReadQword(getter + 0xB + offset, manager))
        {
            std::snprintf(out, size, "count=%d id=%llX manager?", count,
                static_cast<unsigned long long>(id));
            return;
        }

        uintptr_t slots = 0;
        int32_t slotCount = 0;

        if (!SafeReadQword(manager + 0x30, slots) || !slots ||
            !SafeReadI32(manager + 0x3C, slotCount) || slotCount <= 0 || slotCount > 0x10000)
        {
            std::snprintf(out, size, "count=%d id=%llX slots?", count,
                static_cast<unsigned long long>(id));
            return;
        }

        for (int32_t i = 0; i < slotCount; ++i)
        {
            const uintptr_t slot = slots + static_cast<uintptr_t>(i) * REQUEST_SLOT;

            int32_t used = -1;
            uint64_t slotId = 0;

            if (!SafeReadI32(slot, used) || used < 0)
                continue;
            if (!SafeReadQword(slot + 0x10, slotId) || slotId != id)
                continue;

            const uintptr_t request = slot + 0x10;

            uint8_t step = 0;
            uint8_t share = 0;
            int32_t advanced = -1;
            uint64_t waitsFor = 0;

            SafeReadU8(request + REQUEST_STEP, step);
            SafeReadU8(request + REQUEST_SHARE, share);
            SafeReadI32(request + 0x170, advanced);
            SafeReadQword(request + REQUEST_WAITS_FOR, waitsFor);

            std::snprintf(out, size, "count=%d id=%llX slot=%d step=%d share=%d advanced=%d waits=%llX",
                count, static_cast<unsigned long long>(id), i, static_cast<int>(step),
                static_cast<int>(share), advanced,
                static_cast<unsigned long long>(waitsFor));
            return;
        }

        std::snprintf(out, size, "count=%d id=%llX not in the slot table", count,
            static_cast<unsigned long long>(id));
    }

    // Why the copy didn't happen, for the log (a silent skip hid the CT side):
    // "no function", "no glove model", "counts", "rate limited", "no local pawn",
    // "definition", "local model", "local counts", "local not ready" - or "copied".
    bool CopyGloveMaterials(GlovePending& pending, const char*& why)
    {
        why = "no function";

        const CompositeCopy& copy = CompositeCopyFunction();

        if (!copy.copy || !g_gloveRoutine.helper)
            return false;

        why = "no glove model";

        const uintptr_t lineupModel =
            GloveModelEntity(pending.character, g_gloveRoutine.helper);
        if (!lineupModel)
            return false;

        uint32_t modelHandle = 0xFFFFFFFFu;
        if (!SafeReadU32(pending.character + g_gloveRoutine.helper, modelHandle))
            return false;

        if (modelHandle == pending.copiedModel)
        {
            why = "already copied";
            return true;
        }

        why = "counts";

        int finished = -1;
        int waiting = -1;

        if (!MaterialCounts(lineupModel, finished, waiting))
            return false;

        const ULONGLONG now = GetTickCount64();
        if (pending.lastCopyAt && now - pending.lastCopyAt < 250)
        {
            why = "rate limited";
            return false;
        }

        pending.lastCopyAt = now;

        // The character's own glove request can be stuck at step 0 waiting for an
        // identical one that never finishes (that is the CT side): freeing it
        // lets the game build the paint itself, Lootline's unshare. Once.
        if (finished == 0 && !pending.unsharedLineup)
        {
            pending.unsharedLineup = true;
            Log("[lineup] gloves: unshare %s", UnshareRequests(lineupModel));

            char probe[160] = "";
            ProbeRequests(lineupModel, probe, sizeof(probe));
            Log("[lineup] gloves: request %s", probe);
        }

        why = "no local pawn";

        const uintptr_t local = GetLocalPawn();
        if (!local)
            return false;

        why = "definition";

        uint16_t mineDefinition = 0;
        uint16_t lineupDefinition = 0;

        if (!SafeReadU16(local + g_off.PAWN_EconGloves + g_off.EIV_ItemDefIndex, mineDefinition) ||
            !SafeReadU16(pending.gloveItem + g_off.EIV_ItemDefIndex, lineupDefinition) ||
            mineDefinition == 0 || mineDefinition != lineupDefinition)
            return false;

        why = "local model";

        const uintptr_t localModel = GloveModelEntity(local, g_gloveRoutine.helper);
        if (!localModel)
            return false;

        why = "local counts";

        int localFinished = -1;
        int localWaiting = -1;

        if (!MaterialCounts(localModel, localFinished, localWaiting))
            return false;

        // Your own gloves must have built something to copy. A request still
        // pending (localWaiting > 0) is not a reason to wait: on CT the in-match
        // glove request stays pending for the whole screen, so the finished
        // materials that do exist are what the copy can give.
        why = "local not ready";

        if (localFinished <= 0)
        {
            if (!pending.loggedLocalCounts)
            {
                pending.loggedLocalCounts = true;
                Log("[lineup] gloves: yours has %d finished, %d pending - nothing to copy yet",
                    localFinished, localWaiting);
            }
            return false;
        }

        copy.copy(
            reinterpret_cast<void*>(localModel + COMPOSITE_MATERIAL_OWNER),
            reinterpret_cast<void*>(lineupModel + COMPOSITE_MATERIAL_OWNER), 1);

        int afterFinished = -1;
        int afterWaiting = -1;
        MaterialCounts(lineupModel, afterFinished, afterWaiting);

        pending.copiedModel = modelHandle;
        ++pending.copies;
        why = "copied";

        Log("[lineup] gloves: copied %d (mine def=%u pk=%d %d/%d | lineup def=%u "
            "pk=%d %d/%d -> %d/%d)",
            pending.copies, static_cast<unsigned int>(mineDefinition),
            ReadPaintKitAttribute(local + g_off.PAWN_EconGloves),
            localFinished, localWaiting, static_cast<unsigned int>(lineupDefinition),
            ReadPaintKitAttribute(pending.gloveItem), finished, waiting,
            afterFinished, afterWaiting);
        return true;
    }
    uint32_t AccountIdOf(uintptr_t controller)
    {
        uint64_t steamId = 0;
        if (!controller ||
            !SafeReadQword(controller + g_off.CTRL_SteamID, steamId))
            return 0;

        return static_cast<uint32_t>(steamId & 0xFFFFFFFFull);
    }

    uint32_t LocalAccountId()
    {
        static std::atomic_uint32_t cached{ 0 };

        if (const uint32_t id = cached.load(std::memory_order_relaxed))
            return id;

        // The controller is readable on the lineup screens as well, where there
        // is often no local pawn of our own yet (team select before a spawn).
        uintptr_t controller = 0;
        if (RVA_LOCALPLAYERCONTROLLER &&
            SafeReadQword(RVA_LOCALPLAYERCONTROLLER, controller) &&
            controller >= 0x10000)
        {
            if (const uint32_t id = AccountIdOf(controller))
            {
                cached.store(id, std::memory_order_relaxed);
                return id;
            }
        }

        const uintptr_t pawn = GetLocalPawn();
        if (!pawn)
            return 0;

        uint32_t controllerHandle = 0;
        if (!SafeReadU32(pawn + g_off.PAWN_hController, controllerHandle) ||
            !HandleValid(controllerHandle))
            return 0;

        const uint32_t id = AccountIdOf(GetEntityByHandle(controllerHandle));
        if (id)
            cached.store(id, std::memory_order_relaxed);

        return id;
    }

    bool ResolveLookups()
    {
        if (g_lookupsResolved)
            return g_offXuid != 0 && g_offWeapon != 0;

        if (g_lookupsFailed)
            return false;

        uintptr_t xuid = 0;
        uintptr_t weapon = 0;

        const bool ok =
            ResolveEngineSchemaField("C_CSGO_TeamPreviewCharacterPosition", "m_xuid", xuid) &&
            ResolveEngineSchemaField("C_CSGO_TeamPreviewCharacterPosition", "m_weaponItem", weapon) &&
            xuid != 0 && weapon != 0;

        g_lookupsResolved = true;

        if (!ok)
        {
            g_lookupsFailed = true;
            Log("[lineup] the position's fields aren't in the schema - lineups keep the game's items");
            return false;
        }

        g_offXuid = static_cast<uint32_t>(xuid);
        g_offWeapon = static_cast<uint32_t>(weapon);

        // The agent / gloves / weapon / pet items sit back to back, and the team
        // number follows the last one: pet + (gloves - agent). Used when there is
        // no local pawn to read a side from (team select before a spawn).
        uintptr_t agent = 0, gloves = 0, pet = 0;
        const bool items =
            ResolveEngineSchemaField("C_CSGO_TeamPreviewCharacterPosition", "m_agentItem", agent) &&
            ResolveEngineSchemaField("C_CSGO_TeamPreviewCharacterPosition", "m_glovesItem", gloves) &&
            ResolveEngineSchemaField("C_CSGO_TeamPreviewCharacterPosition", "m_petItem", pet);

        if (items)
        {
            g_offAgent = static_cast<uint32_t>(agent);
            g_offGloves = static_cast<uint32_t>(gloves);
        }

        if (items && agent && gloves > agent && weapon == gloves + (gloves - agent) &&
            pet == weapon + (gloves - agent))
        {
            g_offTeam = static_cast<uint32_t>(pet + (gloves - agent));
        }

        Log("[lineup] position fields: xuid=0x%X weaponItem=0x%X agentItem=0x%X "
            "glovesItem=0x%X team=%s",
            g_offXuid, g_offWeapon, g_offAgent, g_offGloves,
            g_offTeam ? "derived" : "unavailable");
        return true;
    }

    // Your armory agent on the position's agent item: the character's model.
    bool DressAgent(uintptr_t pos, uint8_t team)
    {
        if (!g_offAgent || !team)
            return false;

        TargetSkin target{};
        std::string detail;

        if (ArmoryInventory::ResolveTargetForSlot("agent", team, target, detail) ==
                ArmoryInventory::ArmoryMatch::None ||
            !target.defIndex)
            return false;

        return DressItemView(pos + g_offAgent, target, target.defIndex, 0, nullptr, 0.0f);
    }

    // Your armory gloves on the position's glove item.
    bool DressGloves(uintptr_t pos, uint8_t team)
    {
        if (!g_offGloves || !team)
            return false;

        TargetSkin target{};
        std::string detail;

        if (ArmoryInventory::ResolveTargetForSlot("gloves", team, target, detail) ==
                ArmoryInventory::ArmoryMatch::None ||
            !target.defIndex)
            return false;

        const bool dressed = DressGloveItemView(pos + g_offGloves, target.defIndex,
            target.paintKit, target.resolvedSeed, target.wear, LocalAccountId());

        if (dressed)
        {
            // Read again once the character exists (AfterBuild).
            g_beforePosition = pos;
            g_beforeGloveDefinition = target.defIndex;
            g_beforeGlovePaintKit = target.paintKit;
            g_beforeGloveSeed = target.resolvedSeed;
            g_beforeGloveWear = target.wear;
        }

        return dressed;
    }

    // Dresses your own position's items with the Armory's look. Only your
    // position is touched; every other character keeps the server's items.
    bool DressPosition(void* position)
    {
        g_beforePosition = 0;

        if (!position ||
            RuntimeModeState::Current() != RuntimeMode::Armory ||
            !ResolveLookups())
            return false;

        const uintptr_t pos = reinterpret_cast<uintptr_t>(position);

        uint32_t xuid = 0;
        if (!SafeReadU32(pos + g_offXuid, xuid) || xuid == 0)
            return false;

        const uint32_t me = LocalAccountId();
        if (!me)
            return false;

        if (xuid != me)
            return true;   // someone else's character: nothing of ours to do

        const uintptr_t item = pos + g_offWeapon;

        uint16_t def = 0;
        if (!SafeReadU16(item + g_off.EIV_ItemDefIndex, def) || def == 0)
            return false;

        const uintptr_t pawn = GetLocalPawn();
        uint8_t team = 0;
        if (pawn)
            SafeReadU8(pawn + g_off.PAWN_TeamNum, team);

        if (!pawn && g_offTeam)
        {
            int32_t positionTeam = 0;
            if (SafeReadI32(pos + g_offTeam, positionTeam) &&
                positionTeam >= 2 && positionTeam <= 3)
                team = static_cast<uint8_t>(positionTeam);
        }

        const bool knife = IsKnifeDefinition(def);

        TargetSkin target{};
        Attachments::Set attachments;
        std::string detail;

        const ArmoryInventory::ArmoryMatch match =
            ArmoryInventory::ResolveTargetForWeapon(
                def, team, knife, target, detail, &attachments);

        if (match == ArmoryInventory::ArmoryMatch::None)
        {
            if (!g_loggedNoTarget)
            {
                g_loggedNoTarget = true;
                Log("[lineup] no Armory target for your position def=%u team=%u (%s)",
                    static_cast<unsigned int>(def),
                    static_cast<unsigned int>(team), detail.c_str());
            }
            return false;
        }

        const bool weaponDressed = DressItemView(
            item, target,
            0, -1,
            attachments.Empty() ? nullptr : &attachments,
            knife ? 0.0f : LINEUP_WEAR_NUDGE);

        // The character's model comes from its agent item, its hands from the
        // glove item: both are server-built like the gun, so they are dressed
        // the same way.
        const bool agentDressed = DressAgent(pos, team);
        const bool glovesDressed = DressGloves(pos, team);

        if (weaponDressed || agentDressed || glovesDressed)
        {
            const int count = g_stamps.fetch_add(1) + 1;
            if (count <= 4)
            {
                Log("[lineup] your position dressed: def=%u team=%u paintKit=%d "
                    "weapon=%d agent=%d gloves=%d (%s)",
                    static_cast<unsigned int>(def),
                    static_cast<unsigned int>(team), target.paintKit,
                    weaponDressed ? 1 : 0, agentDressed ? 1 : 0,
                    glovesDressed ? 1 : 0, detail.c_str());
            }
        }

        return weaponDressed || agentDressed || glovesDressed;
    }

    // The material manager polls nothing on the first lineup after a launch, so
    // the character's glove material is never built and the gloves keep their
    // default (black) material. Asking the client to regenerate its skins - the
    // call the in-match path already uses - wakes it. N1SSAN_LINEUP_WARM=0 turns
    // this off without a rebuild.
    bool WarmEnabled()
    {
        static const bool enabled = []()
        {
            char buffer[8] = "";
            const DWORD length = GetEnvironmentVariableA(
                "N1SSAN_LINEUP_WARM", buffer, sizeof(buffer));

            return !(length > 0 && buffer[0] == '0');
        }();

        return enabled;
    }

    void WarmMaterialManager()
    {
        static bool attempted = false;

        if (attempted || !WarmEnabled() || !pRegenerateSkins)
            return;

        attempted = true;

        __try
        {
            pRegenerateSkins();
            Log("[lineup] material warm: skins regenerated");
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[lineup] material warm: faulted, left off for this session");
        }
    }

    // After the builder ran: your character exists. Its glove item came from the
    // position; the model has to be spawned by the game's glove routine, which
    // the character's own update never runs on these screens.
    void AfterBuild(void* position)
    {
        const uintptr_t pos = reinterpret_cast<uintptr_t>(position);

        if (!position || g_beforePosition != pos)
            return;

        WarmMaterialManager();

        const uint16_t definition = g_beforeGloveDefinition;
        const int paintKit = g_beforeGlovePaintKit;
        const int seed = g_beforeGloveSeed;
        const float wear = g_beforeGloveWear;

        g_beforePosition = 0;
        g_beforeGloveDefinition = 0;

        uintptr_t character = 0;
        if (g_offTeam)
            SafeReadQword(pos + g_offTeam + TEAM_TO_CHARACTER, character);

        std::lock_guard<std::mutex> lock(g_pendingMutex);

        g_pendingGloves = GlovePending{};

        if (!definition || character < 0x10000)
            return;

        g_pendingGloves.character = character;
        g_pendingGloves.gloveItem = character + g_off.PAWN_EconGloves;
        g_pendingGloves.definition = definition;
        g_pendingGloves.paintKit = paintKit;
        g_pendingGloves.seed = seed;
        g_pendingGloves.wear = wear;
        g_pendingGloves.accountId = LocalAccountId();
        g_pendingGloves.createdAt = GetTickCount64();

        Log("[lineup] built: character=%p gloves def=%u paint=%d queued (owner %s)",
            (void*)character, static_cast<unsigned int>(definition), paintKit,
            g_pendingGloves.accountId ? "known" : "not readable yet");
    }

    void* __fastcall HkLineupBuild(void* position)
    {
        __try
        {
            DressPosition(position);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            if (!g_loggedCrash)
            {
                g_loggedCrash = true;
                Log("[lineup] reading a lineup character faulted - the game's look stays");
            }
        }

        void* result = OriginalLineupBuild ? OriginalLineupBuild(position) : nullptr;

        __try
        {
            AfterBuild(position);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            g_beforePosition = 0;
        }

        return result;
    }

    void InitializeHook()
    {
        ModuleInfo client = GetClientModule();
        if (!client.valid())
        {
            Log("[lineup] client module not ready - hook not installed");
            return;
        }

        const uintptr_t address = ScanPattern(client, LINEUP_BUILD);
        if (!address)
        {
            Log("[lineup] builder signature not found - lineups keep the game's items");
            return;
        }

        if (!MH_CreateHook_p || !MH_EnableHook_p)
        {
            Log("[lineup] MinHook unavailable - hook not installed");
            return;
        }

        const int created = MH_CreateHook_p(
            reinterpret_cast<void*>(address),
            reinterpret_cast<void*>(&HkLineupBuild),
            reinterpret_cast<void**>(&OriginalLineupBuild));

        if (created != 0 || !OriginalLineupBuild)
        {
            OriginalLineupBuild = nullptr;
            Log("[lineup] builder hook failed (%d) @ 0x%p", created, (void*)address);
            return;
        }

        if (MH_EnableHook_p(reinterpret_cast<void*>(address)) != 0)
        {
            Log("[lineup] builder hook could not be enabled @ 0x%p", (void*)address);
            return;
        }

        Log("[lineup] builder hooked @ 0x%p", (void*)address);
    }
}

void Lineup::Initialize()
{
    InitializeHook();
}

// One glove pass, SEH-guarded. Kept out of FrameTick: a function with __try
// cannot also need C++ object unwinding.
static bool ApplyGlovePass(GlovePending& pending, ULONGLONG age)
{
    __try
    {
        // Without an owner id the gloves keep the model and lose the paint (the
        // changer's note), and on team select the controller can be unreadable
        // when the character is built - so the id is filled in as soon as it is.
        if (!pending.accountId)
        {
            const uint32_t id = LocalAccountId();

            if (id)
            {
                pending.accountId = id;
                pending.dressed = false;
                Log("[lineup] gloves: owner account id %08X (late)", id);
            }
        }

        if (!pending.dressed)
        {
            // The character's own glove item (filled by the game from the
            // position's): written again so its identity is certainly ours.
            DressGloveItemView(pending.gloveItem, pending.definition,
                pending.paintKit, pending.seed, pending.wear, pending.accountId);
            pending.dressed = true;
        }

        // The rebuild flag and the glove routine on the first frames, then at
        // 0.4 / 1.2 / 3 s - the character's own update never runs them.
        const bool framePhase = pending.frameApplies < 3;
        const bool timedPhase =
            (pending.timedApplies == 0 && age >= 400) ||
            (pending.timedApplies == 1 && age >= 1200) ||
            (pending.timedApplies == 2 && age >= 3000);

        if (framePhase || timedPhase)
        {
            SafeWriteU8(pending.character + g_off.PAWN_NeedReapplyGloves, 1);

            const GloveRoutine& routine = GloveRoutineFunction();

            if (routine.routine)
            {
                void* helper =
                    reinterpret_cast<void*>(pending.character + routine.helper);
                routine.routine(helper);
            }

            if (framePhase)
                ++pending.frameApplies;
            if (timedPhase)
            {
                ++pending.timedApplies;

                // The timed routine rebuilds the glove model, and its own black
                // material comes back with it: take the copy again afterwards.
                pending.copiedModel = 0xFFFFFFFFu;
            }

            if (!pending.logged)
            {
                pending.logged = true;
                Log("[lineup] gloves rebuilt: def=%u paintKit=%d routine=%s",
                    static_cast<unsigned int>(pending.definition),
                    pending.paintKit, routine.routine ? "yes" : "flag only");
            }
        }

        // The kick that gets the manager to look at the glove models' requests.
        if (const uintptr_t lineupModel = GloveModelEntity(pending.character, g_gloveRoutine.helper))
            TouchModel(lineupModel);

        if (const uintptr_t local = GetLocalPawn())
        {
            if (const uintptr_t localModel = GloveModelEntity(local, g_gloveRoutine.helper))
                TouchModel(localModel);
        }

        // Take your in-match gloves' built paint for the lineup character.
        if (age >= 100)
        {
            const char* why = "";
            CopyGloveMaterials(pending, why);

            if (why && std::strcmp(why, pending.lastCopyWhy) != 0)
            {
                std::snprintf(pending.lastCopyWhy, sizeof(pending.lastCopyWhy), "%s", why);

                // "rate limited" is not a state worth a line.
                if (std::strcmp(why, "rate limited") != 0)
                    Log("[lineup] gloves: copy %s", why);
            }
        }



        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

void Lineup::FrameTick()
{
    GlovePending pending;

    {
        std::lock_guard<std::mutex> lock(g_pendingMutex);

        if (!g_pendingGloves.character)
            return;

        pending = g_pendingGloves;
    }

    const ULONGLONG now = GetTickCount64();
    const ULONGLONG age = now - pending.createdAt;

    // The in-match gloves' build can finish late (the request is pending for a
    // while): keep trying well past the character's own rebuilds. The very first
    // lineup after launch waits for the client's assets, so the window is long
    // enough to still catch it before that screen ends.
    if (age > 60000)
    {
        std::lock_guard<std::mutex> lock(g_pendingMutex);

        if (g_pendingGloves.character == pending.character)
            g_pendingGloves = GlovePending{};

        return;
    }

    const bool keep = ApplyGlovePass(pending, age);

    {
        std::lock_guard<std::mutex> lock(g_pendingMutex);

        if (g_pendingGloves.character != pending.character)
            return;

        g_pendingGloves = keep ? pending : GlovePending{};
    }
}

namespace Lineup
{
    bool RepairGloveMaterials(std::uintptr_t pawn, char* detail,
                              std::size_t size)
    {
        if (!detail || !size)
            return false;

        detail[0] = '\0';

        const GloveRoutine& routine = GloveRoutineFunction();

        if (!routine.helper)
        {
            std::snprintf(detail, size, "no glove routine");
            return false;
        }

        const uintptr_t model = GloveModelEntity(pawn, routine.helper);

        if (!model)
        {
            std::snprintf(detail, size, "no glove model");
            return false;
        }

        int finished = -1;
        int waiting = -1;

        if (!MaterialCounts(model, finished, waiting))
        {
            std::snprintf(detail, size, "counts unreadable");
            return false;
        }

        if (waiting <= 0)
            return false;

        const char* freed = UnshareRequests(model);

        // The same kick the lineup pass gives the local gloves every frame: a
        // request that sits at step 0 is otherwise never looked at.
        TouchModel(model);

        std::snprintf(detail, size, "finished=%d waiting=%d %s",
            finished, waiting, freed);

        return std::strcmp(freed, "freed") == 0;
    }
}
