// n1ssan-dll / src/hooks/frame_stage.h
// FrameStageNotify hook. Applies skin updates at stage 6.
// Carried forward from v9.0.2 without changes.

#pragma once

// Install the FSN vtable hook. Called once from InjectThread.
// Returns true on success. Logs all failures.
bool InstallFSNHook();