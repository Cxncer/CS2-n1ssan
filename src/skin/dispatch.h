// n1ssan-dll / src/skin/dispatch.h
// Per-weapon dispatch: knife vs weapon.
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>

// Look up the target for `weaponEnt`'s def index under the pawn's team.
// If found: knife → KnifeApply + ApplyWeaponSkin; weapon → ApplyWeaponSkin.
// If not found: no-op.
bool ProcessWeapon(uintptr_t weaponEnt, uintptr_t pawn);

// Lootline's ProcessWorldGuns: the guns of yours that are no longer in your
// hands (dropped, or left behind at the end of a round) keep your skin, like a
// real one. Scans the entity table every 500 ms, skips the guns you are holding
// (the apply pass owns those), knives, and anything whose item account is not
// provably yours. Bounded per pass.
void ProcessDroppedWeapons(uintptr_t pawn);