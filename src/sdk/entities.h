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
