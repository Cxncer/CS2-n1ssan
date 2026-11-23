// n1ssan-dll / src/hooks/frame_stage.h
// FrameStageNotify hook. Applies skin updates at stage 6.
// Carried forward from v9.0.2 without changes.

#pragma once

// Install the FSN vtable hook. Called once from InjectThread.
// Returns true on success. Logs all failures.
bool InstallFSNHook();

// True while a team change is still settling: the game is re-creating the
// player model, the gloves and the first-person viewmodel, so anything that
// swaps a model has to wait.
bool TeamSwitchSettling();

// True while a real match session is running. False on the main menu, in the
// menu's background map and before the first frame stage has been seen, which is
// what the overlay uses to tell the menu from a game.
bool InActiveMatch();

// Names the next game call in the log while a team change is recent, so a crash
// that leaves no dump still names the call it died in. Silent otherwise.
void TraceSwitch(const char* what);