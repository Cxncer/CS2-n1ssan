#pragma once

#include <cstdint>
#include <string>

struct TargetSkin;

// Armory inventory injection: recreates the active Armory profile's items in
// CS2's local inventory. Separate from Loadout; the file is produced by the
// Bridge and adopted on the game thread outside an active match.
namespace ArmoryInventory
{
    void StartWatcher();
    bool HasPending();
    void AdoptPending();

    // Active Loadout Builder assignments backed by owned Armory instances.
    bool HasEquippedTargets();
    bool GetEquippedTarget(uint16_t definition, const std::string& team, TargetSkin& target);
    bool GetEquippedKnifeTarget(const std::string& team, TargetSkin& target);
    bool GetEquippedGloveTarget(const std::string& team, TargetSkin& target);
}
