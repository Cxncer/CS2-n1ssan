#pragma once

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
}
