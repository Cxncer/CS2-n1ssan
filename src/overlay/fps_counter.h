#pragma once

// n1ssan-dll / src/overlay/fps_counter.h
//
// The Armory's own FPS pill: a small glassy purple capsule with the white
// n1ssan mark and the live frame rate, drawn in the top-right corner of the
// game where CS2's native counter sits.
//
// The Extra Features "FPS Counter" switch is the only thing that turns it on.
// The Bridge writes `n1ssan-features.json` and this reads it, so the switch
// needs no rebuild and the pill never draws once the switch is off.
namespace FpsCounter
{
    // Hooks the swap chain's Present so the pill can be drawn over the finished
    // frame. Safe to call once at startup; any failure leaves the game alone and
    // says why in the log.
    bool Initialize();
}
