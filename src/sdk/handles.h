// n1ssan-dll / src/sdk/handles.h
// CBaseHandle helpers — mask, index, validity check, raw read.

#pragma once
#include <cstdint>

// Handle layout: bits 0..14 = entity index, bits 15..31 = serial.
static constexpr uint32_t ENT_HANDLE_MASK = 0x7FFF;
static constexpr uint32_t ENT_CHUNK_SHIFT = 9;
static constexpr uint32_t ENT_INDEX_MASK = 0x1FF;

bool     HandleValid(uint32_t h);
uint32_t HandleIndex(uint32_t h);

// Read a 4-byte CHandle from [base + off]. Returns 0 on read failure.
uintptr_t ReadHandle(uintptr_t base, uintptr_t off);