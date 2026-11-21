#pragma once
#include <cstdint>
#include <string>

// Initialize console and file logging.
void LogInit(const std::string& dllPath);

// Standard diagnostic logging.
void Log(const char* fmt, ...);

// Tracing that only runs when N1SSAN_DEBUG=1 is set in the environment.
// The per-frame tags below ([hud-find], [pw], [apply], [attr-entry],
// [charm-entity], ...) wrote tens of thousands of lines a session, and the
// file writes cost more frame time than the code they describe. Everything
// here is observation only, so silence is the normal running mode.
bool DebugLogEnabled();
void DebugLog(const char* fmt, ...);

// Versioned, machine-readable diagnostic status record.
// Protocol 2: N1SSAN_STATUS|2|<utc>|<pid>|<build>|<state>|reason=<reason>|code=<code>
// `code` carries the shared failure classification (see failure-taxonomy.md),
// so the Launcher and Bridge can name a fault and its next action identically.
void LogStatus(const char* state, const char* reason = nullptr, const char* code = nullptr);

// Monotonic millisecond clock.
uint64_t NowMs();

// What the runtime is doing right now: "idle", "apply pass", "model rebuild".
// Cheap enough to set every pass; read by the FPS counter so a frame that ran
// long can name the work it overlapped instead of only its length.
void SetActivity(const char* label);
const char* CurrentActivity();

// Build identifier shared by the session log header, the status record and the
// Armory status document, so every layer can tell which binary is talking.
const char* BuildId();

// Directory that holds the per-session status files, without a trailing
// separator. Empty when no writable status directory was found.
const char* StatusDirectoryPath();

// Names an unhandled exception before the process goes down: the code, the
// faulting module and its offset, and what the runtime was doing. Written with
// raw Win32 so it does not depend on the allocator, stdio or a lock a crashed
// thread may still hold, and the exception is handed back to Windows unchanged.
void LogInstallCrashTrap();