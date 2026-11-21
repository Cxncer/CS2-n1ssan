#pragma once

#include <string>

// Per-Armory-profile snapshot of CS2's native Loadout selection.
// Tick observes only outside an active match; the slot lookup is a read-only
// game-thread query used by the apply pass, which also runs during a match.
namespace NativeEquipment
{
    void Tick();

    // The Armory's own saved intent for one native slot ("rifle0", "melee",
    // "clothing_hands"...): the instance last equipped there for this team.
    // Used when CS2's live loadout no longer points at one of our items, which
    // happens every time the game re-sends the real loadout mid-match.
    bool SavedInstanceForSlot(
        const char* apiTeam,
        const char* nativeSlot,
        std::string& instanceId);
}
