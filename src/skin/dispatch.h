// n1ssan-dll / src/skin/dispatch.h
// Per-weapon dispatch: knife vs weapon.
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>

// Look up the target for `weaponEnt`'s def index under the pawn's team.
// If found: knife → KnifeApply + ApplyWeaponSkin; weapon → ApplyWeaponSkin.
// If not found: no-op.
void ProcessWeapon(uintptr_t weaponEnt, uintptr_t pawn);