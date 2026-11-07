// n1ssan-dll / src/diagnostics/log.cpp
// Console + append-only diagnostic log and atomic machine-readable status snapshot.

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
