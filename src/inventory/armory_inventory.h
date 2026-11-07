#pragma once

#include <cstdint>
#include <string>

struct TargetSkin;

// Armory inventory injection: recreates the active Armory profile's items in
// CS2's local inventory. Separate from Loadout; the files are produced by the
// Bridge and adopted on the game thread outside an active match.
namespace ArmoryInventory
{
    // Why a live weapon resolved (or failed to resolve) to an Armory instance.
    enum class ArmoryMatch
    {
        // Nothing safe to apply.
        None,
        // The equipment document assigns one exact owned instance for this
        // team and slot, so the live weapon can be painted unambiguously.
        Equipped,
        // Every owned instance for the definition renders identically, so the
        // definition alone identifies the cosmetics without picking an
        // arbitrary duplicate.
        Equivalent
    };

    void StartWatcher();
    bool HasPending();
    void AdoptPending();
    bool HasItems();
    bool GetTargetForItemId(uint64_t itemId, TargetSkin& target);

    // Resolve the Armory instance that belongs to a live weapon.
    //   definition: live C_EconItemView definition index.
    //   teamNumber: 2 = T, 3 = CT, anything else = unknown.
    //   knife:      resolve through the equipment slot, because the live
    //               knife's definition may still be the default knife.
    //   detail:     short human-readable reason, for one-line diagnostics.
    ArmoryMatch ResolveTargetForWeapon(
        uint16_t definition,
        uint8_t teamNumber,
        bool knife,
        TargetSkin& target,
        std::string& detail);
}
