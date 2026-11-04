// n1ssan-dll / src/diagnostics/log.cpp
// Console + append-only diagnostic log and atomic machine-readable status snapshot.

#include "diagnostics/log.h"

#include <windows.h>
#include <cstdarg>
#include <cstdio>
#include <chrono>
#include <cstdlib>
#include <fstream>
#include <io.h>
#include <fcntl.h>
#include <string>

namespace
{
    FILE* g_logFile = nullptr;
    char g_logPath[MAX_PATH]{};
    char g_statusPath[MAX_PATH]{};
    constexpr const char* kBuildId = "armory-obsidian-3.0";

    void SanitizeStatusField(const char* input, char* output, size_t capacity)
    {
        if (!input) input = "none";
        size_t i = 0;
        while (*input && i + 1 < capacity)
        {
            char c = *input++;
            if (c == '|' || c == '\r' || c == '\n') c = '_';
            output[i++] = c;
        }
        output[i] = '\0';
    }

    void InitializeStatusPath()
    {
        char root[MAX_PATH]{};
        DWORD length = GetEnvironmentVariableA("LOCALAPPDATA", root, MAX_PATH);
        if (length == 0 || length >= MAX_PATH)
        {
            if (GetTempPathA(MAX_PATH, root) == 0) return;
            size_t n = strlen(root);
            if (n && root[n - 1] == '\\') root[n - 1] = '\0';
        }

        char appDir[MAX_PATH]{};
        sprintf_s(appDir, "%s\\n1ssan", root);
        CreateDirectoryA(appDir, nullptr);

        char statusDir[MAX_PATH]{};
        sprintf_s(statusDir, "%s\\status", appDir);
        CreateDirectoryA(statusDir, nullptr);

        sprintf_s(g_statusPath, "%s\\cs2-%lu.status",
            statusDir, static_cast<unsigned long>(GetCurrentProcessId()));
    }

    void WriteStatusSnapshot(const char* record)
    {
        if (!g_statusPath[0] || !record) return;

        char temporaryPath[MAX_PATH]{};
        sprintf_s(temporaryPath, "%s.tmp", g_statusPath);

        {
            std::ofstream output(temporaryPath, std::ios::binary | std::ios::trunc);
            if (!output) return;
            output << record << "\n";
            output.flush();
            if (!output.good()) return;
        }

        MoveFileExA(temporaryPath, g_statusPath,
            MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH);
    }
}

void LogInit(const std::string& dllPath)
{
    if (!AllocConsole()) {}
    freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
    freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
    freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);
    SetConsoleTitleA("Operation Armory x Obsidian Build 3.0");
    setvbuf(stdout, nullptr, _IONBF, 0);
    printf("[n1ssan] console attached\n");

    char dir[MAX_PATH]{};
    strcpy_s(dir, dllPath.c_str());
    char* slash = strrchr(dir, '\\');
    if (slash) *(slash + 1) = 0;
    sprintf_s(g_logPath, "%sn1ssalogs.md", dir);

    // Preserve previous sessions; each new DLL session appends to the log.
    g_logFile = _fsopen(g_logPath, "a", _SH_DENYNO);
    if (!g_logFile)
    {
        char tmp[MAX_PATH]{};
        GetTempPathA(MAX_PATH, tmp);
        sprintf_s(g_logPath, "%sn1ssalogs.md", tmp);
        g_logFile = _fsopen(g_logPath, "a", _SH_DENYNO);
    }

    InitializeStatusPath();
    printf("[n1ssan] log: %s\n", g_logPath);
    if (g_statusPath[0]) printf("[n1ssan] status: %s\n", g_statusPath);

    if (g_logFile)
    {
        Log("");
        Log("# n1ssan diagnostic session");
        Log("[build] %s", kBuildId);
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

void LogStatus(const char* state, const char* reason)
{
    SYSTEMTIME utc{};
    GetSystemTime(&utc);

    char safeState[64]{};
    char safeReason[512]{};
    char record[768]{};

    SanitizeStatusField(state, safeState, sizeof(safeState));
    SanitizeStatusField(reason, safeReason, sizeof(safeReason));

    sprintf_s(record, sizeof(record),
        "N1SSAN_STATUS|1|%04u-%02u-%02uT%02u:%02u:%02uZ|%lu|%s|%s|reason=%s",
        utc.wYear, utc.wMonth, utc.wDay, utc.wHour, utc.wMinute, utc.wSecond,
        static_cast<unsigned long>(GetCurrentProcessId()),
        kBuildId, safeState, safeReason);

    Log("%s", record);
    WriteStatusSnapshot(record);
}

uint64_t NowMs()
{
    using namespace std::chrono;
    return static_cast<uint64_t>(duration_cast<milliseconds>(
        steady_clock::now().time_since_epoch()).count());
}
