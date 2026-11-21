// n1ssan-dll / src/sdk/entities.h
// Matchdetect-style entity + pawn resolution. NO Loot wrappers.

#pragma once
#include <cstdint>

extern uintptr_t g_entityListGlobal;

bool     HandleValid(uint32_t h);

uint32_t HandleIndex(uint32_t h);
uintptr_t ReadHandle(uintptr_t base, uintptr_t off);

uintptr_t GetEntityByHandle(uint32_t handle);
uintptr_t GetLocalPawn();
// Read-only diagnostic: enumerate native world keychain_module entities.
void LogWorldKeychainEntities(uintptr_t weapon);
// Removes the keychain_module entities hung on a weapon and returns how many
// were removed. CS2's simulated charm is the entity AddKeychainEntity creates on
// the weapon; the extra modules a build hangs are the rigid copies.
int RemoveWorldKeychainEntities(uintptr_t weapon);

// Lootline's RebuildHudKeychainAddon: removes the HUD weapon's "keychain" addon
// entity, clears its dictionary slot and flags the addon state so CS2 rebuilds
// it from the item's keychain attribute - one charm instead of two.
// `requestRebuild` writes the 0xFF addon state that makes CS2 create the HUD
// charm again. Pass false to only take the HUD charm off: used once CS2 owns a
// simulated keychain entity, which is the charm that should remain.
bool RebuildHudKeychainAddon(uintptr_t weapon, uintptr_t hudWeapon, bool requestRebuild = true);

// Lootline's C_CSWeaponBase::AddKeyChainEntity: CS2 creates the gun's simulated
// keychain entity from the item view's "keychain slot 0 id". That entity is the
// charm that reacts to movement; the keychain_module copies a build hangs and
// the viewmodel's "keychain" addon are rigid duplicates of it.
bool AddKeychainEntity(uintptr_t weapon);

// How many world keychain_module entities hang on this weapon (owned by it or
// parented under its scene node). Read-only; the scan is shared with the remover.
int CountWorldKeychainEntities(uintptr_t weapon);

// Charm entities hanging on the first-person weapon. They are rigid copies of
// the charm, never the simulated one.
int RemoveHudKeychainEntities(uintptr_t hudWeapon);

// CS2's own name tag helper: reads the item view's custom name and hangs,
// replaces or removes the nametag module on the gun (Lootline's
// AddNametagEntity call). Returns false when the signature is missing or the
// call faulted.
bool AddNametag(uintptr_t weapon, uintptr_t itemView);
