#pragma once

// Per-Armory-profile snapshot of CS2's native Loadout selection.
// All calls run from the game thread while outside an active match.
namespace NativeEquipment
{
    void Tick();
}
