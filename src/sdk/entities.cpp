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
