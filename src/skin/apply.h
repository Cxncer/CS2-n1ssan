// n1ssan-dll / src/skin/apply.h
// Per-weapon skin application: paint, attributes, mesh group, BuildModernSkin.
// Plus knife model + paint apply.
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>
#include "inventory/loadout.h"

// Apply the target's paint kit to the weapon entity and its HUD weapon.
// Writes item identity, fallbacks, attributes, mesh group, then calls
// BuildModernSkin on both weapon and HUD weapon. Logs each step.
void ApplyWeaponSkin(uintptr_t weaponEnt, uintptr_t pawn, const TargetSkin& t);

// Reset a weapon to its default state (no paint, no attributes, no name).
void ApplyDefault(uintptr_t weaponEnt);

// ---- Knife ----

bool     IsKnifeDefinition(uint16_t d);
uint32_t GetKnifeSubclassId(uint16_t d);

// Change the weapon's model + subclass to the target knife definition.
// Returns true if the entity was modified.
bool KnifeApply(uintptr_t weaponEnt, uintptr_t view, uint16_t targetDef);