// n1ssan-dll / src/diagnostics/log.cpp
// Console + file logger. Carried forward from v9.0.2 without changes.

#include "diagnostics/log.h"

#include <windows.h>
#include <cstdarg>
#include <cstdio>
#include <chrono>
#include <io.h>
#include <fcntl.h>

namespace
{
    FILE* g_logFile = nullptr;
    char g_logPath[MAX_PATH]{};
}

void LogInit(const std::string& dllPath)
{
    if (!AllocConsole()) {}
    freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
    freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
    freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);
    SetConsoleTitleA("n1ssan-dll v9.0.3 (split)");
    setvbuf(stdout, nullptr, _IONBF, 0);
    printf("[n1ssan] console attached\n");

    char dir[MAX_PATH]{};
    strcpy_s(dir, dllPath.c_str());
    char* slash = strrchr(dir, '\\');
    if (slash) *(slash + 1) = 0;
    sprintf_s(g_logPath, "%sn1ssan-dll.log", dir);
    g_logFile = _fsopen(g_logPath, "w", _SH_DENYNO);
    if (!g_logFile)
    {
        char tmp[MAX_PATH]{};
        GetTempPathA(MAX_PATH, tmp);
        sprintf_s(g_logPath, "%sn1ssan-dll.log", tmp);
        g_logFile = _fsopen(g_logPath, "w", _SH_DENYNO);
    }
    printf("[n1ssan] log: %s\n", g_logPath);
}

void Log(const char* fmt, ...)
{
    char buf[2048]{};
    va_list ap;
    va_start(ap, fmt);
    vsnprintf_s(buf, sizeof(buf), _TRUNCATE, fmt, ap);
    va_end(ap);
    printf("%s\n", buf);
    if (g_logFile) { fputs(buf, g_logFile); fputc('\n', g_logFile); fflush(g_logFile); }
}

uint64_t NowMs()
{
    using namespace std::chrono;
    return (uint64_t)duration_cast<milliseconds>(
        steady_clock::now().time_since_epoch()).count();
}