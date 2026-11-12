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
// Removes the world keychain_module entities hung on a weapon and returns how
// many were removed. The first-person charm CS2 simulates is a HUD addon on the
// HUD weapon, not one of these, so this drops the rigid duplicate only.
int RemoveWorldKeychainEntities(uintptr_t weapon);

// True when CS2's HUD addon lookup/removal signatures resolved, i.e. the
// one-charm pass (clear the keychain id for the build, restore it afterwards,
// rebuild the HUD addon) can run.
bool HudKeychainRebuildAvailable();

// Lootline's RebuildHudKeychainAddon: removes the HUD weapon's "keychain" addon
// entity, clears its dictionary slot and flags the addon state so CS2 rebuilds
// it from the item's keychain attribute - one charm instead of two.
// `requestRebuild` writes the 0xFF addon state that makes CS2 create the HUD
// charm again. Pass false to only take the HUD charm off: used once CS2 owns a
// simulated keychain entity, which is the charm that should remain.
bool RebuildHudKeychainAddon(uintptr_t weapon, uintptr_t hudWeapon, bool requestRebuild = true);

// How many world keychain_module entities hang on this weapon (owned by it or
// parented under its scene node). Read-only; the scan is shared with the remover.
int CountWorldKeychainEntities(uintptr_t weapon);

// Charm entities hanging on the first-person weapon (the static copies owned by
// its keychain addon).
int RemoveHudKeychainEntities(uintptr_t hudWeapon);

// Lootline's C_CSWeaponBase::AddKeyChainEntity call: lets CS2 create the gun's
// keychain_module from the item's keychain attribute. That entity is the one
// that simulates - a gun whose charm was only left to the HUD addon has a charm
// that never moves.
bool AddKeychainEntity(uintptr_t weapon);

// CS2's own name tag helper: reads the item view's custom name and hangs,
// replaces or removes the nametag module on the gun (Lootline's
// AddNametagEntity call). Returns false when the signature is missing or the
// call faulted.
bool AddNametag(uintptr_t weapon, uintptr_t itemView);
