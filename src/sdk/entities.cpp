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

    constexpr uint32_t MAX_ENTITY_INDEX = 0x7FFE;
    uint32_t found = 0;
    uint32_t onWeapon = 0;
    uint32_t ownerMatches = 0;
    uint32_t parentMatches = 0;
    uint32_t validEntities = 0;
    uintptr_t cachedChunk = 0;
    uint32_t cachedChunkIndex = UINT32_MAX;

    for (uint32_t index = 1; index <= MAX_ENTITY_INDEX; ++index)
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

        Log("[charm-entity] world index=%u handle=0x%08X entity=%p owner=0x%08X ownerMatch=%d parentMatch=%d belongs=%d",
            index, entityHandle, (void*)entity, ownerHandle,
            ownedByWeapon ? 1 : 0, parentedToWeapon ? 1 : 0,
            belongsToWeapon ? 1 : 0);
    }

    Log("[charm-entity] world scan complete weapon=%p weaponNode=%p highestNetworked=%u maxIndex=%u valid=%u globalFound=%u ownerMatches=%u parentMatches=%u onWeapon=%u ownerOffset=0x%llX parentOffset=0x%llX",
        (void*)weapon, (void*)weaponSceneNode, highestNetworked,
        MAX_ENTITY_INDEX, validEntities, found, ownerMatches,
        parentMatches, onWeapon,
        static_cast<unsigned long long>(ownerHandleOffset),
        static_cast<unsigned long long>(sceneParentOffset));
}

// Lootline's RemoveWorldKeychains: every keychain_module entity owned by, or
// hung under, this weapon is removed through CS2's own remover. The charm the
// player sees hanging and swinging is the HUD weapon's "keychain" addon, which
// this never touches - so a weapon keeps exactly one charm.
static int RemoveKeychainsOn(uintptr_t weapon)
{
    if (!weapon || !g_entityListGlobal)
        return 0;

    ModuleInfo client = GetClientModule();
    if (!client.valid())
        return 0;

    const uintptr_t removeNow = ScanPattern(client, LootPatterns::RemoveKeychainModule);
    if (!removeNow)
    {
        Log("[charm-clean] RemoveKeychainModule signature not found");
        return 0;
    }

    using RemoveNowFn = void(__fastcall*)(void*);

    static uintptr_t ownerHandleOffset = 0;
    static uintptr_t sceneParentOffset = 0;
    if (!ownerHandleOffset)
        ResolveEngineSchemaField("C_BaseEntity", "m_hOwnerEntity", ownerHandleOffset);
    if (!sceneParentOffset)
        ResolveEngineSchemaField("CGameSceneNode", "m_pParent", sceneParentOffset);

    uintptr_t weaponSceneNode = 0;
    if (g_off.BE_GameSceneNode)
        SafeReadQword(weapon + g_off.BE_GameSceneNode, weaponSceneNode);

    constexpr uint32_t MAX_ENTITY_INDEX = 0x7FFE;
    uintptr_t cachedChunk = 0;
    uint32_t cachedChunkIndex = UINT32_MAX;
    int removed = 0;

    for (uint32_t index = 1; index <= MAX_ENTITY_INDEX; ++index)
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
        if (!SafeReadQword(cachedChunk + (size_t)(index & 0x1FF) * 0x70, entity) || !entity)
            continue;

        uintptr_t vtable = 0;
        if (!SafeReadQword(entity, vtable) || !client.inside(vtable))
            continue;

        if (!IsDesignerName(entity, "keychain_module"))
            continue;

        bool ownedByWeapon = false;
        uint32_t ownerHandle = 0;
        if (ownerHandleOffset &&
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

        if (!ownedByWeapon && !parentedToWeapon)
            continue;

        __try
        {
            reinterpret_cast<RemoveNowFn>(removeNow)(reinterpret_cast<void*>(entity));
            ++removed;
            Log("[charm-clean] removed world keychain index=%u entity=%p",
                index, (void*)entity);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[charm-clean] removal threw index=%u entity=%p", index, (void*)entity);
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

// Every charm entity hanging on the first-person weapon. Those are the static
// copies a keychain addon owns: remove them and only the gun's simulated
// keychain entity is left on screen.
int RemoveHudKeychainEntities(uintptr_t hudWeapon)
{
    return RemoveKeychainsOn(hudWeapon);
}

// Same scan as the remover, read-only: how many world keychain entities this
// weapon currently carries. Lootline's upkeep checks "anything other than
// exactly the picked charm" once a second; this is that check.
int CountWorldKeychainEntities(uintptr_t weapon)
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

    constexpr uint32_t MAX_ENTITY_INDEX = 0x7FFE;
    uintptr_t cachedChunk = 0;
    uint32_t cachedChunkIndex = UINT32_MAX;
    int count = 0;

    for (uint32_t index = 1; index <= MAX_ENTITY_INDEX; ++index)
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
        if (!SafeReadQword(cachedChunk + (size_t)(index & 0x1FF) * 0x70, entity) || !entity)
            continue;

        uintptr_t vtable = 0;
        if (!SafeReadQword(entity, vtable) || !client.inside(vtable))
            continue;

        if (!IsDesignerName(entity, "keychain_module"))
            continue;

        bool ownedByWeapon = false;
        uint32_t ownerHandle = 0;
        if (ownerHandleOffset &&
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

        if (ownedByWeapon || parentedToWeapon)
            ++count;
    }

    return count;
}

// Lootline's C_CSWeaponBase::AddKeyChainEntity: CS2 builds the gun's keychain
// entity from the item's keychain attribute. This is the simulated charm; the
// HUD addon alone hangs rigidly on the viewmodel.
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
}

bool HudKeychainRebuildAvailable()
{
    ModuleInfo client = GetClientModule();
    if (!client.valid())
        return false;

    static int cached = -1;

    if (cached < 0)
    {
        cached =
            (ScanPattern(client, LootPatterns::FindHudKeychainAddon) &&
             ScanPattern(client, LootPatterns::RemoveHudKeychainAddon)) ? 1 : 0;

        if (!cached)
            Log("[charm-pass] HUD keychain addon signatures not found; writing the charm directly");
    }

    return cached == 1;
}

bool RebuildHudKeychainAddon(uintptr_t weapon, uintptr_t hudWeapon, bool requestRebuild)
{
    if (!weapon || !hudWeapon)
        return false;

    ModuleInfo client = GetClientModule();
    if (!client.valid())
        return false;

    const uintptr_t findAddonAddress =
        ScanPattern(client, LootPatterns::FindHudKeychainAddon);
    const uintptr_t removeAddonAddress =
        ScanPattern(client, LootPatterns::RemoveHudKeychainAddon);

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
        Log("[charm-pass] HUD addon lookup threw hud=%p", (void*)hudWeapon);
        return false;
    }

    Log("[charm-pass] HUD addon lookup hud=%p index=0x%08X", (void*)hudWeapon, addonIndex);

    if (addonIndex == INVALID_HANDLE)
        Log("[charm-pass] no keychain addon entry on hud=%p", (void*)hudWeapon);

    if (addonIndex != INVALID_HANDLE)
    {
        uint32_t allocationFlags = 0;
        uintptr_t entries = 0;

        SafeReadU32(dictionary + 4, allocationFlags);
        SafeReadQword(dictionary + 8, entries);

        const uint32_t capacity = allocationFlags & 0x7FFFFFFFu;

        if (entries && addonIndex < capacity)
        {
            const uintptr_t handleAddress =
                entries + (size_t)addonIndex * HUD_ADDON_ENTRY_SIZE +
                HUD_ADDON_HANDLE_OFFSET;

            uint32_t handle = 0;

            Log("[charm-pass] HUD addon slot entries=%p capacity=%u handleAddress=%p",
                (void*)entries, capacity, (void*)handleAddress);

            if (SafeReadU32(handleAddress, handle) && HandleValid(handle))
            {
                const uintptr_t addon = GetEntityByHandle(handle);

                if (addon)
                {
                    __try
                    {
                        reinterpret_cast<RemoveAddonFn>(removeAddonAddress)(addon);
                        Log("[charm-pass] removed HUD keychain addon entity=%p", (void*)addon);
                    }
                    __except (EXCEPTION_EXECUTE_HANDLER)
                    {
                        Log("[charm-pass] HUD addon removal threw entity=%p", (void*)addon);
                    }
                }
            }

            SafeWriteU32(handleAddress, INVALID_HANDLE);
        }
    }

    // 0xFF asks CS2 to rebuild the addon dictionary from the item's keychain
    // attribute, which is what creates the single first-person charm. When the
    // gun already owns a simulated keychain entity that is deliberately skipped:
    // rebuilding here would create a second, static charm next to it.
    if (requestRebuild)
        SafeWriteU8(hudWeapon + HUD_KEYCHAIN_STATE_OFFSET, 0xFF);

    return true;
}
