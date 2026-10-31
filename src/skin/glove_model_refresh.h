#pragma once

#include <cstdint>

namespace GloveModelRefresh
{
    // Queue a one-shot model refresh for the next render-end.
    void Request();

    // Process the pending swap or restore operation.
    void OnRenderEnd();
}