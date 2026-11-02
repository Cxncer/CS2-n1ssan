// n1ssan-dll / src/diagnostics/log.cpp
// Console + file logger. Operation Overdrive

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
    SetConsoleTitleA("n1ssan-dll v10.0.0 beta 5.3");
    setvbuf(stdout, nullptr, _IONBF, 0);
    printf("[n1ssan] console attached\n");

    char dir[MAX_PATH]{};
    strcpy_s(dir, dllPath.c_str());
    char* slash = strrchr(dir, '\\');
    if (slash) *(slash + 1) = 0;
    sprintf_s(g_logPath, "%sn1ssalogs.md", dir);
    g_logFile = _fsopen(g_logPath, "w", _SH_DENYNO);
    if (!g_logFile)
    {
        char tmp[MAX_PATH]{};
        GetTempPathA(MAX_PATH, tmp);
        sprintf_s(g_logPath, "%sn1ssalogs.md", tmp);
        g_logFile = _fsopen(g_logPath, "w", _SH_DENYNO);
    }
    printf("[n1ssan] log: %s\n", g_logPath);

    if (g_logFile)
    {
        Log("# n1ssan diagnostic log");
        Log("");
    }
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

static void SanitizeStatusField(
    const char* input,
    char* output,
    size_t capacity)
{
    if (!input)
        input = "none";

    size_t i = 0;

    while (*input && i + 1 < capacity)
    {
        char c = *input++;

        if (c == '|' || c == '\r' || c == '\n')
            c = '_';

        output[i++] = c;
    }

    output[i] = '\0';
}

void LogStatus(const char* state, const char* reason)
{
    SYSTEMTIME utc{};
    GetSystemTime(&utc);

    char safeState[64]{};
    char safeReason[512]{};
    char record[768]{};

    SanitizeStatusField(
        state, safeState, sizeof(safeState));

    SanitizeStatusField(
        reason, safeReason, sizeof(safeReason));

    sprintf_s(
        record,
        sizeof(record),
        "N1SSAN_STATUS|1|%04u-%02u-%02uT%02u:%02u:%02uZ|%s|reason=%s",
        utc.wYear,
        utc.wMonth,
        utc.wDay,
        utc.wHour,
        utc.wMinute,
        utc.wSecond,
        safeState,
        safeReason
    );

    Log("%s", record);
}

uint64_t NowMs()
{
    using namespace std::chrono;
    return (uint64_t)duration_cast<milliseconds>(
        steady_clock::now().time_since_epoch()).count();
}