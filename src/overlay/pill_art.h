#pragma once

// n1ssan-dll / src/overlay/pill_art.h
//
// The FPS pill's artwork, drawn with GDI+ into a small BGRA pixmap: a glowing
// purple capsule carrying the white n1ssan mark, the frame rate and the current
// frame time. Kept apart from the swap chain code so the look can be rendered
// and checked on its own.
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
    // `frameMs` is the smoothed frame time shown in the dim right-hand slot, and
    // `phase` is 0..1 around an animation cycle that sweeps one bright band
    // across the body and around the rim - the caller recomposes a few times a
    // second for it, so this stays one bitmap and one draw.
    // `spike` tints the number amber for a moment after a frame ran long, so a
    // hitch is visible in game and not only in the log.
    bool Compose(int fps, float frameMs, float scale, Pill& out,
                 bool spike = false, float phase = 0.0f);

    // The bottom-right build stamp: plain white text with a soft dark shadow so
    // it stays readable over a bright wall. The scale factor is the same one the
    // pill uses, and the font is deliberately smaller than the pill text.
    bool ComposeVersion(const char* text, float scale, Pill& out);
}
