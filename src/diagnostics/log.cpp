// n1ssan-dll / src/diagnostics/log.cpp
// Append-only file logger and atomic machine-readable status snapshot.

#include "diagnostics/log.h"

#include <windows.h>
#include <cstdarg>
#include <cstdio>
#include <chrono>
#include <cstdlib>
#include <cstring>
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

    bool EnsureDirectory(const char* path)
    {
        if (CreateDirectoryA(path, nullptr)) return true;
        return GetLastError() == ERROR_ALREADY_EXISTS;
    }

    void InitializeStatusPath()
    {
        char roots[2][MAX_PATH]{};
        DWORD length = GetEnvironmentVariableA("LOCALAPPDATA", roots[0], MAX_PATH);
        if (length == 0 || length >= MAX_PATH)
            roots[0][0] = '\0';

        DWORD tempLength = GetTempPathA(MAX_PATH, roots[1]);
        if (tempLength == 0 || tempLength >= MAX_PATH)
            roots[1][0] = '\0';

        for (int i = 0; i < 2; ++i)
        {
            if (!roots[i][0]) continue;

            size_t rootLength = strlen(roots[i]);
            while (rootLength > 0 &&
                (roots[i][rootLength - 1] == '\\' || roots[i][rootLength - 1] == '/'))
                roots[i][--rootLength] = '\0';

            char appDir[MAX_PATH]{};
            char statusDir[MAX_PATH]{};
            if (sprintf_s(appDir, "%s\\n1ssan", roots[i]) < 0 ||
                sprintf_s(statusDir, "%s\\status", appDir) < 0)
                continue;

            if (!EnsureDirectory(appDir) || !EnsureDirectory(statusDir))
            {
                const DWORD error = GetLastError();
                Log("[status-path] directory creation failed root=%s error=%lu",
                    roots[i], static_cast<unsigned long>(error));
                continue;
            }

            if (sprintf_s(g_statusPath, "%s\\cs2-%lu.status",
                statusDir, static_cast<unsigned long>(GetCurrentProcessId())) > 0)
            {
                Log("[status-path] selected=%s source=%s",
                    g_statusPath, i == 0 ? "LOCALAPPDATA" : "TEMP");
                return;
            }
        }

        Log("[status-path] unavailable; no writable status directory found");
    }

    bool WriteStatusSnapshot(const char* record, DWORD& error)
    {
        error = ERROR_SUCCESS;
        if (!g_statusPath[0] || !record)
        {
            error = ERROR_PATH_NOT_FOUND;
            return false;
        }

        char temporaryPath[MAX_PATH]{};
        if (sprintf_s(temporaryPath, "%s.tmp", g_statusPath) <= 0)
        {
            error = ERROR_BUFFER_OVERFLOW;
            return false;
        }

        HANDLE file = CreateFileA(
            temporaryPath, GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
            nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (file == INVALID_HANDLE_VALUE)
        {
            error = GetLastError();
            return false;
        }

        const DWORD length = static_cast<DWORD>(strlen(record));
        DWORD written = 0;
        bool ok = WriteFile(file, record, length, &written, nullptr) &&
            written == length;
        if (!ok)
        {
            error = GetLastError();
            if (error == ERROR_SUCCESS) error = ERROR_WRITE_FAULT;
        }
        if (ok)
        {
            if (!WriteFile(file, "\n", 1, &written, nullptr) || written != 1)
            {
                ok = false;
                error = GetLastError();
                if (error == ERROR_SUCCESS) error = ERROR_WRITE_FAULT;
            }
        }
        if (ok && !FlushFileBuffers(file))
        {
            ok = false;
            error = GetLastError();
        }

        CloseHandle(file);
        if (!ok)
        {
            DeleteFileA(temporaryPath);
            return false;
        }

        if (!MoveFileExA(temporaryPath, g_statusPath,
            MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
        {
            error = GetLastError();
            DeleteFileA(temporaryPath);
            return false;
        }

        return true;
    }
}

void LogInit(const std::string& dllPath)
{
    g_logPath[0] = '\0';

    // The session log must live beside the injected DLL. Never create a
    // second session log in TEMP if the canonical location is unavailable.
    if (dllPath.empty() || dllPath.size() >= MAX_PATH)
    {
        printf("[n1ssan] ERROR: invalid DLL path; session log was not created.\n");
        InitializeStatusPath();
        if (g_statusPath[0]) printf("[n1ssan] status: %s\n", g_statusPath);
        return;
    }

    char dir[MAX_PATH]{};
    if (strcpy_s(dir, dllPath.c_str()) != 0)
    {
        printf("[n1ssan] ERROR: DLL directory path could not be copied; session log was not created.\n");
        InitializeStatusPath();
        if (g_statusPath[0]) printf("[n1ssan] status: %s\n", g_statusPath);
        return;
    }

    char* slash = strrchr(dir, '\\');
    if (!slash)
    {
        printf("[n1ssan] ERROR: DLL directory could not be resolved; session log was not created.\n");
        InitializeStatusPath();
        if (g_statusPath[0]) printf("[n1ssan] status: %s\n", g_statusPath);
        return;
    }
    *(slash + 1) = '\0';

    if (sprintf_s(g_logPath, "%sn1ssanlogs.md", dir) <= 0)
    {
        g_logPath[0] = '\0';
        printf("[n1ssan] ERROR: canonical session log path is too long.\n");
        InitializeStatusPath();
        if (g_statusPath[0]) printf("[n1ssan] status: %s\n", g_statusPath);
        return;
    }

    // "w" intentionally replaces the previous session on every injection.
    g_logFile = _fsopen(g_logPath, "w", _SH_DENYNO);
    if (!g_logFile)
    {
        printf("[n1ssan] ERROR: cannot open canonical session log: %s\n", g_logPath);
        g_logPath[0] = '\0';
        InitializeStatusPath();
        if (g_statusPath[0]) printf("[n1ssan] status: %s\n", g_statusPath);
        return;
    }

    InitializeStatusPath();
    printf("[n1ssan] log: %s\n", g_logPath);
    if (g_statusPath[0]) printf("[n1ssan] status: %s\n", g_statusPath);

    SYSTEMTIME sessionUtc{};
    GetSystemTime(&sessionUtc);

    // The session stamp is read in Cambodia time (UTC+7, no daylight saving).
    // FILETIME ticks are 100ns, so an hour is 36,000,000,000 ticks.
    SYSTEMTIME sessionLocal = sessionUtc;
    FILETIME utcFileTime{};

    if (SystemTimeToFileTime(&sessionUtc, &utcFileTime))
    {
        ULARGE_INTEGER ticks{};
        ticks.LowPart = utcFileTime.dwLowDateTime;
        ticks.HighPart = utcFileTime.dwHighDateTime;
        ticks.QuadPart += 7ULL * 36000000000ULL;

        utcFileTime.dwLowDateTime = ticks.LowPart;
        utcFileTime.dwHighDateTime = ticks.HighPart;

        if (!FileTimeToSystemTime(&utcFileTime, &sessionLocal))
            sessionLocal = sessionUtc;
    }

    Log("# n1ssan diagnostic session");
    Log("Session started (Cambodia, UTC+7): %04u-%02u-%02u %02u:%02u:%02u",
        sessionLocal.wYear, sessionLocal.wMonth, sessionLocal.wDay,
        sessionLocal.wHour, sessionLocal.wMinute, sessionLocal.wSecond);
    Log("[build] %s", kBuildId);
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

void LogStatus(const char* state, const char* reason, const char* code)
{
    SYSTEMTIME utc{};
    GetSystemTime(&utc);

    char safeState[64]{};
    char safeReason[512]{};
    char safeCode[64]{};
    char record[768]{};

    SanitizeStatusField(state, safeState, sizeof(safeState));
    SanitizeStatusField(reason, safeReason, sizeof(safeReason));
    SanitizeStatusField(code ? code : "E_NONE", safeCode, sizeof(safeCode));

    sprintf_s(record, sizeof(record),
        "N1SSAN_STATUS|2|%04u-%02u-%02uT%02u:%02u:%02uZ|%lu|%s|%s|reason=%s|code=%s",
        utc.wYear, utc.wMonth, utc.wDay, utc.wHour, utc.wMinute, utc.wSecond,
        static_cast<unsigned long>(GetCurrentProcessId()),
        kBuildId, safeState, safeReason, safeCode);

    Log("%s", record);
    Log("[status-write] begin state=%s path=%s", safeState,
        g_statusPath[0] ? g_statusPath : "<unavailable>");

    DWORD writeError = ERROR_SUCCESS;
    const bool written = WriteStatusSnapshot(record, writeError);
    Log("[status-write] %s state=%s error=%lu",
        written ? "success" : "FAILED", safeState,
        static_cast<unsigned long>(writeError));
}

uint64_t NowMs()
{
    using namespace std::chrono;
    return static_cast<uint64_t>(duration_cast<milliseconds>(
        steady_clock::now().time_since_epoch()).count());
}
