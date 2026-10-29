// n1ssan-dll / src/memory/access.h
// Safe read/write helpers. All wrapped in __try/__except so any invalid
// pointer returns false instead of crashing the game.
//
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>

// ---- Reads ----
bool SafeReadU8(uintptr_t a, uint8_t& v);
bool SafeReadU16(uintptr_t a, uint16_t& v);
bool SafeReadU32(uintptr_t a, uint32_t& v);
bool SafeReadI32(uintptr_t a, int32_t& v);
bool SafeReadFloat(uintptr_t a, float& v);
bool SafeReadQword(uintptr_t a, uintptr_t& v);

// ---- Writes ----
bool SafeWriteU8(uintptr_t a, uint8_t  v);
bool SafeWriteU16(uintptr_t a, uint16_t v);
bool SafeWriteU32(uintptr_t a, uint32_t v);
bool SafeWriteI32(uintptr_t a, int32_t  v);
bool SafeWriteFloat(uintptr_t a, float  v);