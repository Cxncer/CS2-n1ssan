// N1ssan host interface for the ported standalone glove runtime.

#pragma once
#include <cstdint>

// Called once at FRAME_NET_UPDATE_END (stage 7).
void RunGloves(uintptr_t pawn);

// Reset all glove state. Called on round transitions.
void ResetGloves();

bool GloveAppliedThisTick();
