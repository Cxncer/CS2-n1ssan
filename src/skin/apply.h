// n1ssan-dll / src/skin/apply.h
// Per-weapon skin application: paint, attributes, mesh group, BuildModernSkin.
// Plus knife model + paint apply.
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>
#include <string>
#include "inventory/loadout.h"

namespace Attachments { struct Set; }

// Returns true when the weapon's skin identity/fallback data needed updating.
// `attachments`, when given, carries the stickers / charm of the Armory instance
// being applied; Loadout mode always passes null.
bool ApplyWeaponSkin(uintptr_t weaponEnt, uintptr_t pawn, const TargetSkin& t,
                     const Attachments::Set* attachments = nullptr);

// Reset a weapon to its default state (no paint, no attributes, no name).
void ApplyDefault(uintptr_t weaponEnt);

// ---- Knife ----

bool     IsKnifeDefinition(uint16_t d);
uint32_t GetKnifeSubclassId(uint16_t d);

// Change the weapon's model + subclass to the target knife definition.
// Returns true if the entity was modified.
bool KnifeApply(uintptr_t weaponEnt, uintptr_t view, uint16_t targetDef);

// Invalidate cached weapon world/HUD model state.
// Call after glove body-group changes, pawn changes, or model swaps.
void InvalidateWeaponModelCache();

// Resolve the CEconItemSchema model path for any item definition index
// (weapons, knives, agent player models).
bool ResolveDefinitionModelName(uint16_t definitionIndex, std::string& modelName);