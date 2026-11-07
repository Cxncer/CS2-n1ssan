#pragma once

#include <cstdint>

struct TargetSkin;

// Armory inventory injection: recreates the active Armory profile's items in
// CS2's local inventory. Separate from Loadout; the file is produced by the
// Bridge and adopted on the game thread outside an active match.
namespace ArmoryInventory
{
    void StartWatcher();
    bool HasPending();
    void AdoptPending();
    bool HasItems();
    bool GetTargetForItemId(uint64_t itemId, TargetSkin& target);
}
