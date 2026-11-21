#pragma once

// n1ssan-dll / src/overlay/pill_art.h
//
// The FPS pill's artwork, drawn with GDI+ into a small BGRA pixmap: a glassy
// purple capsule carrying the white n1ssan mark and the frame rate. Kept apart
// from the swap chain code so the look can be rendered and checked on its own.
#include <cstdint>
#include <vector>

namespace PillArt
{
    struct Pill
    {
        int width = 0;
        int height = 0;
        std::vector<uint8_t> pixels;   // BGRA, premultiplied alpha
    };

    // Starts GDI+ and decodes the embedded white mark. Returns false only when
    // GDI+ itself is unavailable; a missing mark still leaves a usable pill.
    bool Startup();

    // Lays the pill out for one frame rate. `scale` follows the render target
    // height (1.0 at 1080p) so the capsule keeps native proportions.
    // `spike` tints the number amber for a moment after a frame ran long, so a
    // hitch is visible in game and not only in the log.
    bool Compose(int fps, float scale, Pill& out, bool spike = false);

    // The bottom-right build stamp: plain white text with a soft dark shadow so
    // it stays readable over a bright wall. The scale factor is the same one the
    // pill uses, and the font is deliberately smaller than the pill text.
    bool ComposeVersion(const char* text, float scale, Pill& out);
}
