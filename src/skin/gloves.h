// N1ssan host interface for the ported standalone glove runtime.

#pragma once
#include <cstdint>

// Called once at FRAME_NET_UPDATE_END (stage 7).
void RunGloves(uintptr_t pawn);

// Reset all glove state. Called on round transitions.
void ResetGloves();

bool GloveAppliedThisTick();

// Dresses an item view as a glove item without a pawn: your own lineup
// character's gloves on the team select / intro / end of match screens, which
// have no pawn to run the glove routine on. `definition` is a glove definition;
// a paintKit of 0 keeps the default gloves' look.
bool DressGloveItemView(std::uintptr_t item, std::uint16_t definition,
                        int paintKit, int seed, float wear,
                        std::uint32_t accountId = 0);
