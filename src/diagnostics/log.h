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