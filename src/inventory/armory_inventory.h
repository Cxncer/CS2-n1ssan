#pragma once

// Armory inventory injection: recreates the active Armory profile's items in
// CS2's local inventory. Separate from Loadout; the file is produced by the
// Bridge and adopted on the game thread outside an active match.
namespace ArmoryInventory
{
    void StartWatcher();
    bool HasPending();
    void AdoptPending();
}
