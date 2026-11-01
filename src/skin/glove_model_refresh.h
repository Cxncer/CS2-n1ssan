#pragma once

namespace GloveModelRefresh
{
    // Queue a one-frame alternate-model swap.
    // The actual work runs on FRAME_RENDER_END.
    void Request();

    // Must be called before the original FRAME_RENDER_END.
    void OnRenderEnd(void* pawn);
}
