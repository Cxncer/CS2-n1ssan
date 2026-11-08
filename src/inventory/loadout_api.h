// n1ssan-dll / src/inventory/loadout_api.h
// What the player has equipped in CS2's own Loadout screen.
//
// The projected inventory makes every owned instance selectable in game, so the
// player decides which one is worn. CS2 keeps that answer in its loadout, and
// the LoadoutAPI panorama natives registered by client.dll expose it:
//   GetSlotEquippedWithDefIndex(team, definition) -> slot name ("rifle1", ...)
//   GetItemID(team, slot)                         -> equipped item id, decimal
//   EquipItemInSlot(team, itemId, slot)            -> changes the native loadout
// All ignore their first argument (the API object) and run on the game thread.

#pragma once

#include <cstdint>
#include <string>

namespace LoadoutApi
{
    // Resolves the two natives (any thread, at most once while client.dll is
    // loaded). False when the registration table or a native is missing, so
    // callers can fall back to the equipment document.
    bool Initialize();
    bool Ready();
    const char* LastError();

    // The CS2 loadout slot an Armory slot name writes to. Null for slots CS2
    // names differently or that are resolved through the game instead.
    const char* NativeSlotName(const char* armorySlot);

    // Game thread. Item id currently equipped in `team`'s `slot`; 0 when the
    // slot is empty or unknown. Cached briefly because weapon dispatch runs on
    // every frame for every live weapon.
    //   team: "t", "ct" or "noteam".
    std::uint64_t EquippedItemId(const char* team, const char* slot);

    // Game thread. Item id the player equipped for a definition, asking CS2 for
    // the slot it belongs to (weapons, knives). 0 when unknown.
    std::uint64_t EquippedItemIdForDefinition(const char* team, std::uint16_t definition);

    // Game thread. Resolves the native slot for a definition ("rifle1", "melee", etc.).
    bool SlotForDefinition(const char* team, std::uint16_t definition, std::string& slot);

    // Game thread. Uses CS2's own CanEquipItemInSlot check before calling its
    // native EquipItemInSlot(team, itemId, slot). Returns false if CS2 rejects it.
    bool CanEquipItemInSlot(const char* team, std::uint64_t itemId, const char* slot);
    bool EquipItemInSlot(const char* team, std::uint64_t itemId, const char* slot);
}
