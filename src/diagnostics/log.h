// n1ssan-dll / src/diagnostics/log.h
// Console + file logger. Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>
#include <string>

// Initialize the console and open the log file next to the DLL.
void LogInit(const std::string& dllPath);

// Variadic printf-style logging. Writes to console + file.
void Log(const char* fmt, ...);

// Monotonic millisecond clock (used for rate-limit and timing checks).
uint64_t NowMs();