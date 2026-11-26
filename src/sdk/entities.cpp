// n1ssan-dll / src/sdk/entities.cpp
// Verbatim port of n1ssan-matchdetect v1.1 traversal + pawn resolution.
// NO Loot code. NO GetLocalPawnFast/GetLocalPawnViaController wrappers.

#include "sdk/entities.h"
#include "sdk/handles.h"
#include "config/offsets.h"
#include "memory/access.h"
#include "memory/scanner.h"
#include "diagnostics/log.h"
#include "inventory/engine_schema_diagnostic.h"
#include "inventory/loot_patterns.h"
#include "sdk/item_view.h"
#include <windows.h>
#include <cstring>

uintptr_t g_entityListGlobal = 0;

bool HandleValid(uint32_t h)
{
    return h != 0 && h != 0xFFFFFFFF && (h & ENT_HANDLE_MASK) != ENT_HANDLE_MASK;
}

uint32_t HandleIndex(uint32_t h)
{
    return h & ENT_HANDLE_MASK;
}

uintptr_t ReadHandle(uintptr_t base, uintptr_t off)
{
    uint32_t h = 0;
    if (!SafeReadU32(base + off, h)) return 0;
    return h;
}

// Verbatim from matchdetect: ResolveEntity(entitySystem, handle, client)
uintptr_t GetEntityByHandle(uint32_t handle)
{
    if (!g_entityListGlobal || !handle || handle == 0xFFFFFFFF) return 0;

    uint32_t idx = handle & 0x7FFF;
    if (idx == 0 || idx == 0x7FFF) return 0;

    uint32_t chunkIdx = idx >> 9;
    uint32_t idxInChunk = idx & 0x1FF;

    uintptr_t chunk = 0;
    if (!SafeReadQword(g_entityListGlobal + (size_t)chunkIdx * 8 + 0x10, chunk) || !chunk)
        return 0;

    uintptr_t ent = 0;
    if (!SafeReadQword(chunk + (size_t)idxInChunk * 0x70, ent) || !ent)
        return 0;

    ModuleInfo client = GetClientModule();
    uintptr_t vt = 0;
    if (!SafeReadQword(ent, vt) || !client.inside(vt))
        return 0;

    return ent;
}

// Verbatim from matchdetect: dwLocalPlayerPawn @ 0x25676D8, then dwLocalPlayerController @ 0x253EEF8 → m_hPlayerPawn @ 0x92C → ResolveEntity
uintptr_t GetLocalPawn()
{
    ModuleInfo client = GetClientModule();
    if (!client.valid()) return 0;

    // ---- Controller → handle → resolve FIRST (reflects in-match pawn changes) ----
    uintptr_t ctrl = 0;
    if (SafeReadQword(RVA_LOCALPLAYERCONTROLLER, ctrl) && ctrl >= 0x10000)
    {
        uint32_t h = 0;
        if (SafeReadU32(ctrl + FB_CTRL_hPawn, h) && h != 0 && h != 0xFFFFFFFF)
        {
            uintptr_t resolved = GetEntityByHandle(h);
            if (resolved > 0x10000) return resolved;
        }
    }

    // ---- Fallback: direct dwLocalPlayerPawn read ----
    uintptr_t pawn = 0;
    if (SafeReadQword(RVA_LOCALPLAYERPAWN, pawn) && pawn > 0x10000)
        return pawn;

    return 0;
}

// Read-only diagnostic pass for native world charm entities. The entity-list
// traversal mirrors the already-used matchdetect chunk layout. Entity identity
// and designer-name offsets are isolated here and used only for observation;
// no entity is modified or removed by this pass.
// The full range is scanned on purpose.
//
// This used to be bounded by the value at entityList + 0x2120 ("highest
// networked"). That is the networked-slot high-water mark, not the entity index
// limit: the 2026-11-12 session log shows highestNetworked=214 while the
// keychain entities found on the gun sat at index 17007, 17011, 17024, 17041...
// The bounded walk therefore never reached a single charm entity, so every
// cleanup from that release on reported hanging=0 on a gun the player could see
// wearing two charms and removed nothing.
//
// The walk is chunked (one read per 512 slots, skipped when the chunk pointer is
// null), so scanning the full range costs little more than the live entities it
// already touches.
static uint32_t LiveEntityLimit()
{
    return 0x7FFE;
}

static bool IsDesignerName(uintptr_t entity, const char* expected)
{
    uintptr_t identity = 0;
    uintptr_t name = 0;
    if (!SafeReadQword(entity + 0x10, identity) || identity < 0x10000 ||
        !SafeReadQword(identity + 0x20, name) || name < 0x10000)
        return false;

    for (size_t i = 0; expected[i] != '\0'; ++i)
    {
        uint8_t ch = 0;
        if (!SafeReadU8(name + i, ch) ||
            ch != static_cast<uint8_t>(expected[i]))
            return false;
    }

    uint8_t terminator = 1;
    return SafeReadU8(name + std::strlen(expected), terminator) && terminator == 0;
}

void LogWorldKeychainEntities(uintptr_t weapon)
{
    if (!g_entityListGlobal)
        return;

    ModuleInfo client = GetClientModule();
    if (!client.valid())
        return;

    // Resolve the live schema fields once available. The previous hardcoded
    // BE_hOwnerEntity offset did not match this CS2 build, so owner handles
    // were logged as 0xFFFFFFFF and could not identify weapon ownership.
    static uintptr_t ownerHandleOffset = 0;
    static uintptr_t sceneParentOffset = 0;
    if (!ownerHandleOffset)
        ResolveEngineSchemaField("C_BaseEntity", "m_hOwnerEntity", ownerHandleOffset);
    if (!sceneParentOffset)
        ResolveEngineSchemaField("CGameSceneNode", "m_pParent", sceneParentOffset);

    uintptr_t weaponSceneNode = 0;
    if (weapon && g_off.BE_GameSceneNode)
        SafeReadQword(weapon + g_off.BE_GameSceneNode, weaponSceneNode);

    uint32_t highestNetworked = 0;
    SafeReadU32(g_entityListGlobal + 0x2120, highestNetworked);

    const uint32_t maxIndex = LiveEntityLimit();
    uint32_t found = 0;
    uint32_t onWeapon = 0;
    uint32_t ownerMatches = 0;
    uint32_t parentMatches = 0;
    uint32_t validEntities = 0;
    uintptr_t cachedChunk = 0;
    uint32_t cachedChunkIndex = UINT32_MAX;

    for (uint32_t index = 1; index <= maxIndex; ++index)
    {
        const uint32_t chunkIndex = index >> 9;
        if (chunkIndex != cachedChunkIndex)
        {
            cachedChunk = 0;
            SafeReadQword(g_entityListGlobal + (size_t)chunkIndex * 8 + 0x10,
                cachedChunk);
            cachedChunkIndex = chunkIndex;
        }

        if (!cachedChunk)
            continue;

        uintptr_t entity = 0;
        if (!SafeReadQword(cachedChunk + (size_t)(index & 0x1FF) * 0x70,
                entity) || !entity)
            continue;

        uintptr_t vtable = 0;
        if (!SafeReadQword(entity, vtable) || !client.inside(vtable))
            continue;

        ++validEntities;
        if (!IsDesignerName(entity, "keychain_module"))
            continue;

        ++found;

        uintptr_t identity = 0;
        uint32_t entityHandle = 0;
        uint32_t ownerHandle = 0;
        SafeReadQword(entity + 0x10, identity);
        if (identity > 0x10000)
            SafeReadU32(identity + 0x10, entityHandle);

        bool ownedByWeapon = false;
        if (weapon && ownerHandleOffset &&
            SafeReadU32(entity + ownerHandleOffset, ownerHandle) &&
            HandleValid(ownerHandle))
        {
            ownedByWeapon = GetEntityByHandle(ownerHandle) == weapon;
        }

        bool parentedToWeapon = false;
        if (weaponSceneNode && sceneParentOffset && g_off.BE_GameSceneNode)
        {
            uintptr_t node = 0;
            if (SafeReadQword(entity + g_off.BE_GameSceneNode, node))
            {
                // Match Lootline's bounded scene ancestry check.
                for (int depth = 0; node && node > 0x10000 && depth < 5; ++depth)
                {
                    if (node == weaponSceneNode)
                    {
                        parentedToWeapon = true;
                        break;
                    }

                    uintptr_t parent = 0;
                    if (!SafeReadQword(node + sceneParentOffset, parent))
                        break;
                    node = parent;
                }
            }
        }

        if (ownedByWeapon) ++ownerMatches;
        if (parentedToWeapon) ++parentMatches;
        const bool belongsToWeapon = ownedByWeapon || parentedToWeapon;
        if (belongsToWeapon) ++onWeapon;

        DebugLog("[charm-entity] world index=%u handle=0x%08X entity=%p owner=0x%08X ownerMatch=%d parentMatch=%d belongs=%d",
            index, entityHandle, (void*)entity, ownerHandle,
            ownedByWeapon ? 1 : 0, parentedToWeapon ? 1 : 0,
            belongsToWeapon ? 1 : 0);
    }

    DebugLog("[charm-entity] world scan complete weapon=%p weaponNode=%p highestNetworked=%u maxIndex=%u valid=%u globalFound=%u ownerMatches=%u parentMatches=%u onWeapon=%u ownerOffset=0x%llX parentOffset=0x%llX",
        (void*)weapon, (void*)weaponSceneNode, highestNetworked,
        maxIndex, validEntities, found, ownerMatches,
        parentMatches, onWeapon,
        static_cast<unsigned long long>(ownerHandleOffset),
        static_cast<unsigned long long>(sceneParentOffset));
}

// ── charm entity collection (Lootline's CollectWorldKeychains) ──
//
// One snapshot of every charm entity on this gun, and the removals work down
// that snapshot afterwards. Lootline never removes during the walk, and that is
// the whole difference: the client this replaced removed each module inside the
// same loop it was walking, so the engine's identity table shifted under the
// iteration and the same module came back at the next slot. Handing a module
// CS2 has already detached to its remover again is the use-after-free behind
// both 2026-11-25 crashes (animationsystem.dll reading null+0x18, an execute of
// address 0).
//
// A snapshot is only as good as the slots it reads, so a slot's own handle has
// to name that slot - Lootline's `(handle & 0x7FFF) == index` check in
// entity_scan.h. A slot the engine has cleared can still hand back the old
// entity pointer; that stale pointer was the second removal.
namespace
{
    constexpr int MAX_KEYCHAINS = 16;   // Lootline's MAX_KEYCHAINS

    // Owned by the gun, or hung under the gun's scene node (up to five parents,
    // Lootline's UnderNode depth).
    bool KeychainOnWeapon(uintptr_t entity, uintptr_t weapon,
                          uintptr_t weaponSceneNode, uintptr_t ownerHandleOffset,
                          uintptr_t sceneParentOffset)
    {
        uint32_t ownerHandle = 0;

        if (ownerHandleOffset &&
            SafeReadU32(entity + ownerHandleOffset, ownerHandle) &&
            HandleValid(ownerHandle) &&
            GetEntityByHandle(ownerHandle) == weapon)
            return true;

        if (!weaponSceneNode || !sceneParentOffset || !g_off.BE_GameSceneNode)
            return false;

        uintptr_t node = 0;

        if (!SafeReadQword(entity + g_off.BE_GameSceneNode, node))
            return false;

        for (int depth = 0; node && node > 0x10000 && depth < 5; ++depth)
        {
            if (node == weaponSceneNode)
                return true;

            uintptr_t parent = 0;

            if (!SafeReadQword(node + sceneParentOffset, parent))
                return false;

            node = parent;
        }

        return false;
    }

    int CollectKeychainsOn(uintptr_t weapon, uintptr_t (&out)[MAX_KEYCHAINS])
    {
        if (!weapon || !g_entityListGlobal)
            return 0;

        ModuleInfo client = GetClientModule();

        if (!client.valid())
            return 0;

        static uintptr_t ownerHandleOffset = 0;
        static uintptr_t sceneParentOffset = 0;

        if (!ownerHandleOffset)
            ResolveEngineSchemaField("C_BaseEntity", "m_hOwnerEntity", ownerHandleOffset);
        if (!sceneParentOffset)
            ResolveEngineSchemaField("CGameSceneNode", "m_pParent", sceneParentOffset);

        uintptr_t weaponSceneNode = 0;

        if (g_off.BE_GameSceneNode)
            SafeReadQword(weapon + g_off.BE_GameSceneNode, weaponSceneNode);

        const uint32_t maxIndex = LiveEntityLimit();
        uintptr_t cachedChunk = 0;
        uint32_t cachedChunkIndex = UINT32_MAX;
        int count = 0;

        for (uint32_t index = 1; index <= maxIndex && count < MAX_KEYCHAINS; ++index)
        {
            const uint32_t chunkIndex = index >> 9;

            if (chunkIndex != cachedChunkIndex)
            {
                cachedChunk = 0;
                SafeReadQword(g_entityListGlobal + (size_t)chunkIndex * 8 + 0x10, cachedChunk);
                cachedChunkIndex = chunkIndex;
            }

            if (!cachedChunk)
                continue;

            uintptr_t entity = 0;

            if (!SafeReadQword(cachedChunk + (size_t)(index & 0x1FF) * 0x70, entity) ||
                !entity || entity == weapon)
                continue;

            uintptr_t vtable = 0;

            if (!SafeReadQword(entity, vtable) || !client.inside(vtable))
                continue;

            uintptr_t identity = 0;

            if (!SafeReadQword(entity + 0x10, identity) || identity < 0x10000)
                continue;

            uint32_t entityHandle = 0;

            if (!SafeReadU32(identity + 0x10, entityHandle) ||
                (entityHandle & 0x7FFF) != index)
                continue;   // stale slot: this pointer is not this slot's entity

            if (!IsDesignerName(entity, "keychain_module"))
                continue;

            if (!KeychainOnWeapon(entity, weapon, weaponSceneNode,
                    ownerHandleOffset, sceneParentOffset))
                continue;

            out[count++] = entity;
        }

        return count;
    }
}

// Lootline's RemoveWorldKeychains: every charm entity on this gun comes off
// through CS2's own remover, once each, from the snapshot above.
static int RemoveKeychainsOn(uintptr_t weapon)
{
    if (!weapon)
        return 0;

    ModuleInfo client = GetClientModule();

    if (!client.valid())
        return 0;

    // Resolved once: ScanPattern walks the whole client module.
    static uintptr_t removeNow = 0;
    static bool looked = false;

    if (!looked)
    {
        looked = true;
        removeNow = ScanPattern(client, LootPatterns::RemoveKeychainModule);

        if (!removeNow)
            Log("[charm-clean] RemoveKeychainModule signature not found");
    }

    if (!removeNow)
        return 0;

    using RemoveNowFn = void(__fastcall*)(void*);

    uintptr_t found[MAX_KEYCHAINS]{};
    const int count = CollectKeychainsOn(weapon, found);
    int removed = 0;

    for (int i = 0; i < count; ++i)
    {
        __try
        {
            reinterpret_cast<RemoveNowFn>(removeNow)(reinterpret_cast<void*>(found[i]));
            ++removed;

            Log("[charm-clean] removed world keychain entity=%p (%d/%d)",
                (void*)found[i], removed, count);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[charm-clean] removal threw entity=%p", (void*)found[i]);
        }
    }

    return removed;
}

// Every charm entity on this gun: what the world model build hung on it, and the
// ones the game itself put there from the player's inventory item.
int RemoveWorldKeychainEntities(uintptr_t weapon)
{
    return RemoveKeychainsOn(weapon);
}

// Every charm entity hanging on the first-person weapon.
int RemoveHudKeychainEntities(uintptr_t hudWeapon)
{
    return RemoveKeychainsOn(hudWeapon);
}

// Lootline's WorldKeychains: how many charm entities this weapon carries, and
// the keychain definition of the first one (0 when it cannot be read). The
// upkeep's once-a-second check is `count != 1 || (hanging != 0 && hanging !=
// wanted)`.
int CountWorldKeychainEntities(uintptr_t weapon, int* firstKit)
{
    if (firstKit)
        *firstKit = 0;

    if (!weapon)
        return 0;

    uintptr_t found[MAX_KEYCHAINS]{};
    const int count = CollectKeychainsOn(weapon, found);

    if (count > 0 && firstKit)
    {
        static uintptr_t definitionOffset = 0;

        if (!definitionOffset)
            ResolveEngineSchemaField("C_KeychainModule", "m_nKeychainDefID", definitionOffset);

        uint32_t definition = 0;

        if (definitionOffset && SafeReadU32(found[0] + definitionOffset, definition))
            *firstKit = static_cast<int>(definition);
    }

    return count;
}

// ── entity table walk (Lootline's EntityScan::ForEach) ──
//
// For the passes that need every entity rather than the charm entities of one
// gun. Chunks of 512 identities are read straight from the entity system, empty
// chunks are skipped whole, and a slot is only taken when its own handle names
// it - the same `(handle & 0x7FFF) == index` check as the charm walk above, so a
// cleared slot cannot hand back an entity the engine has already released.
// SEH around the walk: the visitor calls into the game.
int ForEachEntity(uintptr_t firstIndex, uintptr_t lastIndex, EntityVisit visit,
                  void* context)
{
    if (!g_entityListGlobal || !visit)
        return 0;

    ModuleInfo client = GetClientModule();

    if (!client.valid())
        return 0;

    const uint32_t maxIndex = LiveEntityLimit();
    const uint32_t first = firstIndex < 1 ? 1 : static_cast<uint32_t>(firstIndex);
    const uint32_t last =
        lastIndex > maxIndex ? maxIndex : static_cast<uint32_t>(lastIndex);

    int visited = 0;
    uintptr_t cachedChunk = 0;
    uint32_t cachedChunkIndex = UINT32_MAX;

    __try
    {
        for (uint32_t index = first; index <= last; ++index)
        {
            const uint32_t chunkIndex = index >> 9;

            if (chunkIndex != cachedChunkIndex)
            {
                cachedChunk = 0;
                SafeReadQword(g_entityListGlobal + (size_t)chunkIndex * 8 + 0x10,
                    cachedChunk);
                cachedChunkIndex = chunkIndex;
            }

            if (!cachedChunk)
                continue;

            uintptr_t entity = 0;

            if (!SafeReadQword(cachedChunk + (size_t)(index & 0x1FF) * 0x70, entity) ||
                !entity)
                continue;

            uintptr_t vtable = 0;

            if (!SafeReadQword(entity, vtable) || !client.inside(vtable))
                continue;

            uintptr_t identity = 0;

            if (!SafeReadQword(entity + 0x10, identity) || identity < 0x10000)
                continue;

            uint32_t entityHandle = 0;

            if (!SafeReadU32(identity + 0x10, entityHandle) ||
                (entityHandle & 0x7FFF) != index)
                continue;

            uintptr_t nameAddress = 0;
            SafeReadQword(identity + 0x20, nameAddress);

            ++visited;

            if (!visit(entity, index,
                    nameAddress >= 0x10000
                        ? reinterpret_cast<const char*>(nameAddress)
                        : nullptr,
                    context))
                break;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }

    return visited;
}

// Lootline's C_CSWeaponBase::AddKeyChainEntity: CS2 builds the gun's keychain
// entity from the item's keychain attribute. This is the simulated charm - the
// one that reacts to movement; the modules a model build hangs, and the
// viewmodel's "keychain" addon, are rigid copies of it.
bool AddKeychainEntity(uintptr_t weapon)
{
    if (!weapon)
        return false;

    ModuleInfo client = GetClientModule();
    if (!client.valid())
        return false;

    static uintptr_t address = 0;
    static bool looked = false;

    if (!looked)
    {
        looked = true;
        address = ScanPattern(client, LootPatterns::AddKeyChainEntity);

        if (!address)
            Log("[charm] AddKeyChainEntity signature not found");
    }

    if (!address)
        return false;

    // CS2's signature is AddKeyChainEntity(weapon, item, bool) - the item is the
    // weapon's own econ view, and passing nothing in its place made the call a
    // no-op.
    uintptr_t item = GetWeaponItem(weapon);

    if (!item)
        return false;

    using AddKeyChainFn = bool(__fastcall*)(uintptr_t, uintptr_t, bool);

    __try
    {
        return reinterpret_cast<AddKeyChainFn>(address)(weapon, item, false);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("[charm] AddKeyChainEntity threw weapon=%p", (void*)weapon);
        return false;
    }
}

// Lootline's AddNametagEntity: CS2 itself reads the item view's custom name and
// hangs, replaces or removes the gun's "nametag" module from it.
bool AddNametag(uintptr_t weapon, uintptr_t itemView)
{
    if (!weapon || !itemView)
        return false;

    ModuleInfo client = GetClientModule();
    if (!client.valid())
        return false;

    static uintptr_t address = 0;
    static bool looked = false;

    if (!looked)
    {
        looked = true;
        address = ScanPattern(client, LootPatterns::AddNametagEntity);

        if (!address)
            Log("[nametag] AddNametagEntity signature not found");
    }

    if (!address)
        return false;

    using AddNametagFn = char(__fastcall*)(uintptr_t, uintptr_t);

    __try
    {
        return reinterpret_cast<AddNametagFn>(address)(weapon, itemView) != 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("[nametag] call threw weapon=%p view=%p", (void*)weapon, (void*)itemView);
        return false;
    }
}

// C_CS2HudModelWeapon, from Lootline's partial layout: the addon dictionary
// sits at 0x1328 and the keychain state byte 0x30 past it. An addon entry is
// 0x10 bytes with a CBaseHandle at +0x0C.
namespace
{
    constexpr size_t HUD_ADDONS_OFFSET = 0x1328;
    constexpr size_t HUD_ADDON_ENTRY_SIZE = 0x10;
    constexpr size_t HUD_ADDON_HANDLE_OFFSET = 0x0C;
    constexpr size_t HUD_KEYCHAIN_STATE_OFFSET = HUD_ADDONS_OFFSET + 0x10 + 0x20;
    constexpr uint32_t KEYCHAIN_ADDON_HASH = 0x0AA5272A;   // native hash of "keychain"
    constexpr uint32_t INVALID_HANDLE = 0xFFFFFFFFu;
    constexpr uint32_t HUD_ADDON_MAX_CAPACITY = 64;

    // The addon's designer name, read in place. Bounded; a name longer than the
    // buffer still compares as far as it was read.
    bool ReadDesignerName(uintptr_t entity, char* out, size_t capacity)
    {
        if (!out || capacity == 0)
            return false;

        out[0] = '\0';

        uintptr_t identity = 0;
        uintptr_t name = 0;

        if (!SafeReadQword(entity + 0x10, identity) || identity < 0x10000 ||
            !SafeReadQword(identity + 0x20, name) || name < 0x10000)
            return false;

        size_t length = 0;

        for (; length + 1 < capacity; ++length)
        {
            uint8_t ch = 0;

            if (!SafeReadU8(name + length, ch))
                break;

            out[length] = static_cast<char>(ch);

            if (ch == 0)
                break;
        }

        out[length] = '\0';
        return true;
    }

    // Removes the addon one entry of the HUD weapon's dictionary names.
    //
    // Returns 1 only when an entity was actually handed to CS2's remover. A slot
    // that does not resolve is not "already removed": it is an entry this build
    // does not understand, and the caller has to say so and look further. The
    // name is checked before anything is removed, so a stale index can never take
    // off an unrelated addon.
    int RemoveHudAddonAt(void(__fastcall* remove)(uintptr_t), uintptr_t entries,
                         uint32_t index, const char* how, uintptr_t hudWeapon)
    {
        if (!remove || !entries)
            return 0;

        const uintptr_t handleAddress =
            entries + static_cast<size_t>(index) * HUD_ADDON_ENTRY_SIZE +
            HUD_ADDON_HANDLE_OFFSET;

        uint32_t handle = 0;

        if (!SafeReadU32(handleAddress, handle) || !HandleValid(handle))
        {
            DebugLog("[charm-pass] hud=%p addon slot %u (%s): no valid handle",
                (void*)hudWeapon, index, how);
            return 0;
        }

        const uintptr_t addon = GetEntityByHandle(handle);

        if (!addon)
        {
            DebugLog("[charm-pass] hud=%p addon slot %u (%s) handle=0x%08X did not resolve",
                (void*)hudWeapon, index, how, handle);
            return 0;
        }

        char name[64]{};
        ReadDesignerName(addon, name, sizeof(name));

        if (!std::strstr(name, "keychain"))
        {
            DebugLog("[charm-pass] hud=%p addon slot %u (%s) entity=%p name=\"%s\" is not the keychain addon",
                (void*)hudWeapon, index, how, (void*)addon, name);
            return 0;
        }

        __try
        {
            remove(addon);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[charm-pass] hud=%p addon slot %u (%s) entity=%p name=\"%s\" removal threw",
                (void*)hudWeapon, index, how, (void*)addon, name);
            return 0;
        }

        SafeWriteU32(handleAddress, INVALID_HANDLE);

        Log("[charm-pass] removed hud keychain addon hud=%p slot=%u (%s) entity=%p name=\"%s\"",
            (void*)hudWeapon, index, how, (void*)addon, name);

        return 1;
    }
}

bool RebuildHudKeychainAddon(uintptr_t weapon, uintptr_t hudWeapon, bool requestRebuild)
{
    if (!weapon || !hudWeapon)
        return false;

    ModuleInfo client = GetClientModule();
    if (!client.valid())
        return false;

    // Resolved once. This now runs on every charm repair (a model build hangs
    // the static charm addon again), and scanning module memory on each call was
    // a per-repair cost with no benefit.
    static uintptr_t findAddonAddress = 0;
    static uintptr_t removeAddonAddress = 0;
    static bool looked = false;

    if (!looked)
    {
        looked = true;
        findAddonAddress = ScanPattern(client, LootPatterns::FindHudKeychainAddon);
        removeAddonAddress = ScanPattern(client, LootPatterns::RemoveHudKeychainAddon);
    }

    if (!findAddonAddress || !removeAddonAddress)
        return false;

    using FindAddonFn = uint32_t(__fastcall*)(void*, const char*, uint32_t, bool*);
    using RemoveAddonFn = void(__fastcall*)(uintptr_t);

    const uintptr_t dictionary = hudWeapon + HUD_ADDONS_OFFSET;
    uint32_t addonIndex = INVALID_HANDLE;

    __try
    {
        addonIndex = reinterpret_cast<FindAddonFn>(findAddonAddress)(
            reinterpret_cast<void*>(dictionary), "keychain",
            KEYCHAIN_ADDON_HASH, nullptr);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        DebugLog("[charm-pass] HUD addon lookup threw hud=%p", (void*)hudWeapon);
        return false;
    }

    uint32_t allocationFlags = 0;
    uintptr_t entries = 0;

    SafeReadU32(dictionary + 4, allocationFlags);
    SafeReadQword(dictionary + 8, entries);

    const uint32_t capacity = allocationFlags & 0x7FFFFFFFu;

    // The dictionary's own lookup is the first answer, but it is not trusted on
    // its own any more: the 2026-11-24 session logged `addonCall=1` on a gun whose
    // charm stayed on screen, because a lookup that returns nothing still made
    // this function report success. The entry table is therefore scanned for the
    // entity whose designer name is the keychain addon, and every entry that is
    // examined is named in the log - so a moved layout says so instead of
    // silently doing nothing.
    int removed = 0;

    const bool looksLikeVector =
        entries >= 0x10000 && capacity > 0 && capacity <= HUD_ADDON_MAX_CAPACITY;

    // Debug by default: the caller retries a few times per selection, and this
    // runs for every gun that wants no charm. A table that does not look like
    // the addon vector is the case worth a session-log line, throttled per
    // viewmodel so a retry cannot flood the log.
    DebugLog("[charm-pass] hud=%p index=0x%08X entries=%p capacity=%u vector=%d",
        (void*)hudWeapon, addonIndex, (void*)entries, capacity, looksLikeVector ? 1 : 0);

    if (!looksLikeVector)
    {
        static uintptr_t lastHeaderHud = 0;
        static ULONGLONG lastHeaderTick = 0;

        const ULONGLONG now = GetTickCount64();

        if (lastHeaderHud != hudWeapon || now - lastHeaderTick >= 10000)
        {
            lastHeaderHud = hudWeapon;
            lastHeaderTick = now;

            Log("[charm-pass] hud=%p addon dictionary does not look like a vector (index=0x%08X entries=%p capacity=%u); the layout moved in this build",
                (void*)hudWeapon, addonIndex, (void*)entries, capacity);
        }
    }

    if (looksLikeVector)
    {
        if (addonIndex != INVALID_HANDLE && addonIndex < capacity)
        {
            removed += RemoveHudAddonAt(
                reinterpret_cast<RemoveAddonFn>(removeAddonAddress),
                entries, addonIndex, "dictionary index", hudWeapon);
        }

        // A dictionary whose index did not name an addon still holds the entry:
        // resolve every slot and take the one whose designer name is the keychain
        // addon. `keychain_module` is the world entity name; the HUD addon this
        // removes is the "keychain" addon the viewmodel hangs.
        if (removed == 0)
        {
            for (uint32_t i = 0; i < capacity; ++i)
            {
                if (i == addonIndex)
                    continue;

                removed += RemoveHudAddonAt(
                    reinterpret_cast<RemoveAddonFn>(removeAddonAddress),
                    entries, i, "name scan", hudWeapon);

                if (removed > 0)
                    break;
            }
        }

        // Nothing came off: name every slot once, so the next session says whether
        // the entries hold different entities, unresolved handles or no names at
        // all. The per-slot detail is debug-only, and the user's session log does
        // not run with the debug flag.
        if (removed == 0)
        {
            char list[1024]{};
            size_t used = 0;

            for (uint32_t i = 0; i < capacity && used + 48 < sizeof(list); ++i)
            {
                const uintptr_t handleAddress =
                    entries + static_cast<size_t>(i) * HUD_ADDON_ENTRY_SIZE +
                    HUD_ADDON_HANDLE_OFFSET;

                uint32_t handle = 0;

                if (!SafeReadU32(handleAddress, handle) || !HandleValid(handle))
                    continue;

                const uintptr_t entryEntity = GetEntityByHandle(handle);
                char entryName[32]{};

                if (entryEntity)
                    ReadDesignerName(entryEntity, entryName, sizeof(entryName));

                const int written = snprintf(list + used, sizeof(list) - used,
                    "%s%u=0x%08X:%s", used > 0 ? " " : "", i, handle,
                    entryName[0] ? entryName : "-");

                if (written <= 0)
                    break;

                used += static_cast<size_t>(written);
            }

            static uintptr_t lastListHud = 0;
            static ULONGLONG lastListTick = 0;

            const ULONGLONG now = GetTickCount64();

            if (lastListHud != hudWeapon || now - lastListTick >= 10000)
            {
                lastListHud = hudWeapon;
                lastListTick = now;

                Log("[charm-pass] hud=%p no keychain addon removed; addon slots: %s",
                    (void*)hudWeapon, list[0] ? list : "(none)");
            }
        }
    }

    // 0xFF asks CS2 to rebuild the addon dictionary from the item's keychain
    // attribute. On the tested build that state change did not bring a charm
    // back (v3.5 log), so this is only the fallback for a gun whose simulated
    // entity could not be created; with one in place it is skipped, because a
    // rebuild here would put a second, static charm next to it.
    if (requestRebuild)
        SafeWriteU8(hudWeapon + HUD_KEYCHAIN_STATE_OFFSET, 0xFF);

    // True only when the addon really came off (or a rebuild was asked for on
    // purpose). The previous `return true` made a lookup that found nothing look
    // like a completed removal, and the caller latched that as done.
    return removed > 0 || requestRebuild;
}
