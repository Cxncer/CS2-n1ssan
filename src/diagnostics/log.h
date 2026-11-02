#pragma once
#include <cstdint>
#include <string>

// Initialize console and file logging.
void LogInit(const std::string& dllPath);

// Standard diagnostic logging.
void Log(const char* fmt, ...);

// Versioned, machine-readable diagnostic status record.
void LogStatus(const char* state, const char* reason = nullptr);

// Monotonic millisecond clock.
uint64_t NowMs();