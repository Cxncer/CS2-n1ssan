// n1ssan-dll / src/skin/gloves.h
// Glove changer. Reads g_targets for the target glove, applies via
// EconAttr_Create + GloveCreatePaintKit + GloveSetBodyGroup +
// m_bNeedToReApplyGloves. 4-frame apply burst, 2-frame clear on team switch,
// spawn follow-ups. Kit-sold self-heal removed (needs agent changer).
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>

// Called once per FSN stage 6. Idempotent, tracks state internally.
void RunGloves(uintptr_t pawn);

// Force a re-apply on the next RunGloves call.
void ForceGloveUpdate();

// Reset all glove state. Called on round transitions.
void ResetGloves();

void LogGloveModelSnapshot(uintptr_t pawn, const char* stage);