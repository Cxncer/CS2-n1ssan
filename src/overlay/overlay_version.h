#pragma once

// n1ssan-dll / src/overlay/overlay_version.h
//
// The build stamp drawn in the bottom-right corner while the runtime is in Beta,
// so a screenshot or a report names the exact build being looked at.
//
// Scheme: Beta.Build.v1.0.1.Debug.vMAJOR.MINOR
// Bump MINOR by one for every fix; after .9 the major goes up and the minor
// restarts at 0 (v2.9 -> v3.0). This is the only place the number lives; the
// overlay reads it, and the log records it at start-up.
inline constexpr const char* kOverlayVersion = "Beta.Build.v1.0.1.Debug.v3.17";
