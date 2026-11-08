#pragma once

#include <cstdint>

// Armory agent application: the player model of the local pawn is set to the
// agent instance the equipment document assigns to the team's agent slot.
// Loadout mode has no agent path, so this only runs in Armory mode.
namespace Agents
{
    void Run(std::uintptr_t pawn);
}
