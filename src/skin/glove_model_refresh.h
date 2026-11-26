#pragma once

#include <string>

namespace GloveModelRefresh
{
    // Queue a one-frame alternate-model swap.
    // The actual work runs on FRAME_RENDER_END.
    void Request();

    // Must be called before the original FRAME_RENDER_END.
    void OnRenderEnd(void* pawn);

    // Sets the player model of a pawn (precaches it and preserves collision
    // bounds). Used by Armory agents; returns false when the swap was refused.
    bool ApplyAgentModel(void* pawn, const char* modelName);

    // The pawn's current model path (CSkeletonInstance -> m_modelState.m_hModel's
    // name). False when it cannot be read. Used to put another player's own model
    // back after their agent was put on for them.
    bool PawnModelName(void* pawn, std::string& modelName);
}
