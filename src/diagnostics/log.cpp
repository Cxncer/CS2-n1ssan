// n1ssan-dll / src/diagnostics/log.cpp
// Append-only file logger and atomic machine-readable status snapshot.

#include "diagnostics/log.h"
#include "overlay/overlay_version.h"

#include <windows.h>
#include <dbghelp.h>
#include <cstdarg>
#include <cstdio>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <atomic>

namespace
{
    FILE* g_logFile = nullptr;
    char g_logPath[MAX_PATH]{};
    char g_sessionMarkerPath[MAX_PATH]{};
    char g_statusPath[MAX_PATH]{};
    char g_statusDirectory[MAX_PATH]{};
    // The DLL's build id is the overlay stamp, not a second number: a log line
    // and the in-game corner then name the same build, so a code excerpt can be
    // matched to the session it came from.
    constexpr const char* kBuildId = kOverlayVersion;

    // ---- buffered writer ----
    //
    // Every line used to be an fputs plus an fflush, so the apply pass paid a
    // filesystem round trip per weapon per tick. Lines are collected here and
    // written in batches; the crash handler flushes whatever is pending before
    // it appends its own line, so a crash still ends with the log it caused.
    CRITICAL_SECTION g_logLock;
    struct LogLockInit
    {
        LogLockInit() { InitializeCriticalSection(&g_logLock); }
    };
    LogLockInit g_logLockInit;

    std::string g_logBuffer;
    uint64_t g_lastLogFlushMs = 0;
    constexpr size_t kLogFlushBytes = 32 * 1024;
    constexpr uint64_t kLogFlushIntervalMs = 250;

    void FlushLogBuffer();

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
                sprintf_s(g_statusDirectory, "%s", statusDir);
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

    // The previous session's fate decides what happens to its log, so read the
    // marker before anything replaces the file.
    bool previousSessionHung = false;
    if (sprintf_s(g_sessionMarkerPath, "%sn1ssanlogs.open", dir) > 0)
        previousSessionHung =
            GetFileAttributesA(g_sessionMarkerPath) != INVALID_FILE_ATTRIBUTES;
    else
        g_sessionMarkerPath[0] = '\0';

    // One session is tens of thousands of lines; without a cap the file becomes
    // too large to read when a bug report is needed. Keep the previous session
    // as n1ssanlogs.prev.md instead of deleting history outright.
    //
    // A session that died is the only record of its crash, and a match that
    // crashes twice would otherwise lose the first crash to the next session
    // before anyone reads it. An unclean end is kept as its own file, named for
    // the moment it stopped, so every crash of a session stays on disk.
    char previousLogName[MAX_PATH]{};
    {
        constexpr unsigned long long kMaxLogBytes = 4ull * 1024ull * 1024ull;
        WIN32_FILE_ATTRIBUTE_DATA attributes{};
        if (GetFileAttributesExA(g_logPath, GetFileExInfoStandard, &attributes))
        {
            const unsigned long long size =
                (static_cast<unsigned long long>(attributes.nFileSizeHigh) << 32) |
                attributes.nFileSizeLow;

            const bool keepCrashCopy = previousSessionHung && size > 0;

            if (keepCrashCopy)
            {
                FILETIME stoppedLocal{};
                SYSTEMTIME stopped{};
                if (FileTimeToLocalFileTime(&attributes.ftLastWriteTime, &stoppedLocal) &&
                    FileTimeToSystemTime(&stoppedLocal, &stopped))
                {
                    if (sprintf_s(previousLogName, sizeof(previousLogName),
                            "n1ssanlogs.crash-%04u%02u%02u-%02u%02u%02u.md",
                            stopped.wYear, stopped.wMonth, stopped.wDay,
                            stopped.wHour, stopped.wMinute, stopped.wSecond) <= 0)
                        previousLogName[0] = '\0';
                }
                else
                {
                    strcpy_s(previousLogName, "n1ssanlogs.crash.md");
                }
            }

            const char* archiveName = keepCrashCopy
                ? (previousLogName[0] ? previousLogName : nullptr)
                : (size >= kMaxLogBytes ? "n1ssanlogs.prev.md" : nullptr);

            if (archiveName)
            {
                char archivePath[MAX_PATH]{};
                if (sprintf_s(archivePath, "%s%s", dir, archiveName) > 0)
                {
                    DeleteFileA(archivePath);
                    // Best effort: a locked previous log must not stop this session.
                    if (!MoveFileExA(g_logPath, archivePath, MOVEFILE_REPLACE_EXISTING))
                        previousLogName[0] = '\0';
                }
                else
                {
                    previousLogName[0] = '\0';
                }
            }
        }
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

    // A marker next to the log survives a crash but not a clean detach, so the
    // next session can tell "the game closed" apart from "the process died".
    // Fail-fast paths never reach SetUnhandledExceptionFilter, which is why the
    // [crash] line alone could not answer that question.
    if (g_sessionMarkerPath[0])
    {
        HANDLE marker = CreateFileA(g_sessionMarkerPath, GENERIC_WRITE,
            FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, CREATE_ALWAYS,
            FILE_ATTRIBUTE_NORMAL, nullptr);

        if (marker != INVALID_HANDLE_VALUE)
        {
            char pid[32]{};
            sprintf_s(pid, "%lu\n", static_cast<unsigned long>(GetCurrentProcessId()));
            DWORD written = 0;
            WriteFile(marker, pid, static_cast<DWORD>(strlen(pid)), &written, nullptr);
            CloseHandle(marker);
        }
        else
        {
            g_sessionMarkerPath[0] = '\0';
        }

        if (previousSessionHung)
            Log("[session] previous session ended without a clean shutdown (marker %s) - a crash or a forced close",
                g_sessionMarkerPath);
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

    if (previousLogName[0])
        Log("[session] previous session crashed; its log was kept as %s",
            previousLogName);

    // The header must be on disk before the first apply pass runs, so a crash
    // report starts with the session it belongs to.
    LogFlush();
}

namespace
{
    void FlushLogBuffer()
    {
        if (!g_logFile)
            return;

        std::string pending;

        EnterCriticalSection(&g_logLock);
        pending.swap(g_logBuffer);
        LeaveCriticalSection(&g_logLock);

        if (!pending.empty())
        {
            fwrite(pending.data(), 1, pending.size(), g_logFile);
            fflush(g_logFile);
        }

        g_lastLogFlushMs = GetTickCount64();
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

    if (!g_logFile)
        return;

    EnterCriticalSection(&g_logLock);
    g_logBuffer += buf;
    g_logBuffer += '\n';
    const bool due = g_logBuffer.size() >= kLogFlushBytes ||
        GetTickCount64() - g_lastLogFlushMs >= kLogFlushIntervalMs;
    LeaveCriticalSection(&g_logLock);

    if (due)
        FlushLogBuffer();
}

void LogFlush()
{
    FlushLogBuffer();
}

void LogMarkCleanExit()
{
    Log("[session] clean exit");
    FlushLogBuffer();

    if (g_sessionMarkerPath[0])
    {
        DeleteFileA(g_sessionMarkerPath);
        g_sessionMarkerPath[0] = '\0';
    }
}

const char* StatusDirectoryPath()
{
    return g_statusDirectory;
}

const char* BuildId()
{
    return kBuildId;
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

    // A status change is a state boundary: make it visible in the log now.
    LogFlush();
}


namespace
{
    // Read once: the environment cannot change under a running game.
    bool ReadDebugFlag()
    {
        char value[16]{};
        const DWORD length =
            GetEnvironmentVariableA("N1SSAN_DEBUG", value, sizeof(value));

        if (length == 0 || length >= sizeof(value))
            return false;

        return value[0] == '1' || value[0] == 'y' || value[0] == 'Y' ||
               value[0] == 't' || value[0] == 'T';
    }
}

bool DebugLogEnabled()
{
    static const bool enabled = ReadDebugFlag();
    return enabled;
}

void DebugLog(const char* fmt, ...)
{
    if (!DebugLogEnabled() || !fmt)
        return;

    char buffer[1024]{};
    va_list args;
    va_start(args, fmt);
    vsnprintf(buffer, sizeof(buffer), fmt, args);
    va_end(args);

    Log("%s", buffer);
}

uint64_t NowMs()
{
    using namespace std::chrono;
    return static_cast<uint64_t>(duration_cast<milliseconds>(
        steady_clock::now().time_since_epoch()).count());
}

namespace
{
    std::atomic<const char*> g_activity{ "idle" };
}

void SetActivity(const char* label)
{
    g_activity.store(label ? label : "idle", std::memory_order_relaxed);
}

const char* CurrentActivity()
{
    const char* label = g_activity.load(std::memory_order_relaxed);
    return label ? label : "idle";
}

// ---- unhandled-exception breadcrumb ----
//
// A crash that ends the session leaves the log mid-sentence and says nothing
// about why, and Windows recorded no faulting module for this client. This
// writes one line with the exception code, the faulting module and its offset,
// and what the runtime was doing at that moment, then lets Windows handle the
// exception exactly as it would have. Evidence only, no behaviour change.
namespace
{
    LPTOP_LEVEL_EXCEPTION_FILTER g_previousCrashFilter = nullptr;

    void AppendCrashLine(const char* text)
    {
        if (!g_logPath[0] || !text)
            return;

        HANDLE file = CreateFileA(g_logPath, FILE_APPEND_DATA,
            FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING,
            FILE_ATTRIBUTE_NORMAL, nullptr);

        if (file == INVALID_HANDLE_VALUE)
            return;

        DWORD written = 0;
        WriteFile(file, text, static_cast<DWORD>(strlen(text)), &written, nullptr);
        CloseHandle(file);
    }

    // ---- unhandled-exception minidump ----
    //
    // The crash line names where the fault was; a dump says what every thread was
    // doing. MiniDumpWriteDump is resolved up front (the handler must not load a
    // library while the process is going down) and the file is written next to
    // the session log, so the log and the dump of one crash sit together. The
    // exception is still handed to Windows unchanged: evidence only.
    using MiniDumpWriteDumpFn = BOOL (WINAPI*)(HANDLE, DWORD, HANDLE, MINIDUMP_TYPE,
        PMINIDUMP_EXCEPTION_INFORMATION, PMINIDUMP_USER_STREAM_INFORMATION,
        PMINIDUMP_CALLBACK_INFORMATION);

    MiniDumpWriteDumpFn g_miniDumpWriteDump = nullptr;
    char g_dumpDirectory[MAX_PATH]{};

    bool WriteCrashDump(EXCEPTION_POINTERS* info, char* pathOut, size_t pathSize)
    {
        if (!g_miniDumpWriteDump || !g_dumpDirectory[0] || !pathOut || pathSize == 0)
            return false;

        SYSTEMTIME now{};
        GetLocalTime(&now);

        char name[MAX_PATH]{};
        sprintf_s(name, sizeof(name),
            "n1ssan-crash-%04u%02u%02u-%02u%02u%02u-%lu.dmp",
            now.wYear, now.wMonth, now.wDay, now.wHour, now.wMinute, now.wSecond,
            static_cast<unsigned long>(GetCurrentProcessId()));

        char path[MAX_PATH]{};
        sprintf_s(path, sizeof(path), "%s%s", g_dumpDirectory, name);

        HANDLE file = CreateFileA(path, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS,
            FILE_ATTRIBUTE_NORMAL, nullptr);
        if (file == INVALID_HANDLE_VALUE)
            return false;

        MINIDUMP_EXCEPTION_INFORMATION exception{};
        exception.ThreadId = GetCurrentThreadId();
        exception.ExceptionPointers = info;
        exception.ClientPointers = FALSE;

        // MiniDumpNormal already carries every thread's stack; the thread info
        // add-on keeps their names, which is what tells the runtime's threads
        // apart in a dump of the client.
        const BOOL written = g_miniDumpWriteDump(
            GetCurrentProcess(), GetCurrentProcessId(), file,
            static_cast<MINIDUMP_TYPE>(MiniDumpNormal | MiniDumpWithThreadInfo),
            info ? &exception : nullptr, nullptr, nullptr);

        CloseHandle(file);

        if (!written)
        {
            DeleteFileA(path);
            return false;
        }

        strcpy_s(pathOut, pathSize, path);
        return true;
    }

    LONG WINAPI CrashFilter(EXCEPTION_POINTERS* info)
    {
        const DWORD code = (info && info->ExceptionRecord)
            ? info->ExceptionRecord->ExceptionCode
            : 0;

        void* address = (info && info->ExceptionRecord)
            ? info->ExceptionRecord->ExceptionAddress
            : nullptr;

        char moduleName[MAX_PATH]{};
        HMODULE module = nullptr;
        unsigned long long offset = 0;

        if (address && GetModuleHandleExA(
                GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                static_cast<LPCSTR>(address), &module) && module)
        {
            GetModuleFileNameA(module, moduleName, MAX_PATH);
            offset = static_cast<unsigned long long>(
                reinterpret_cast<uintptr_t>(address) -
                reinterpret_cast<uintptr_t>(module));
        }

        char line[512]{};
        sprintf_s(line, sizeof(line),
            "\n[crash] exception 0x%08lX at %p (%s+0x%llX) during %s\n",
            static_cast<unsigned long>(code), address,
            moduleName[0] ? moduleName : "unknown module", offset,
            CurrentActivity());

        // Whatever the pass had buffered belongs in front of this line.
        // The crashed thread may hold the log lock, so this only flushes when
        // the lock is free rather than blocking the handler dead.
        if (TryEnterCriticalSection(&g_logLock))
        {
            LeaveCriticalSection(&g_logLock);
            FlushLogBuffer();
        }

        AppendCrashLine(line);

        char dumpPath[MAX_PATH]{};
        if (WriteCrashDump(info, dumpPath, sizeof(dumpPath)))
        {
            char note[MAX_PATH + 64]{};
            sprintf_s(note, sizeof(note), "[crash] minidump written: %s\n", dumpPath);
            AppendCrashLine(note);
        }
        else
        {
            AppendCrashLine("[crash] minidump not written\n");
        }

        if (g_previousCrashFilter && g_previousCrashFilter != &CrashFilter)
            return g_previousCrashFilter(info);

        return EXCEPTION_CONTINUE_SEARCH;
    }
}

namespace
{
    // ---- first-chance faults ----
    //
    // Every apply path wraps native calls in __except (1), so a schema setter
    // that faults is swallowed without a trace and the next report only says
    // "skins stopped updating". This handler names the fault once per distinct
    // code/address pair: enough to identify a broken setter, cheap enough to
    // leave installed for the whole session.
    constexpr int kMaxFirstChanceEntries = 64;

    struct FirstChanceEntry
    {
        unsigned long code;
        uintptr_t     address;
    };

    FirstChanceEntry g_firstChance[kMaxFirstChanceEntries]{};
    int g_firstChanceCount = 0;
    CRITICAL_SECTION g_firstChanceLock;

    struct FirstChanceLockInit
    {
        FirstChanceLockInit() { InitializeCriticalSection(&g_firstChanceLock); }
    };
    FirstChanceLockInit g_firstChanceLockInit;

    thread_local bool g_inFirstChanceHandler = false;

    // Codes that are part of normal operation: MSVC thread naming, C++ throws
    // (CS2 raises these constantly for its own control flow) and breakpoints.
    bool IsRoutineException(unsigned long code)
    {
        return code == 0x406D1388ul || code == 0xE06D7363ul ||
               code == 0x80000003ul || code == 0x80000004ul;
    }

    LONG WINAPI FirstChanceFilter(EXCEPTION_POINTERS* info)
    {
        if (g_inFirstChanceHandler || !info || !info->ExceptionRecord)
            return EXCEPTION_CONTINUE_SEARCH;

        const unsigned long code = info->ExceptionRecord->ExceptionCode;

        if (IsRoutineException(code))
            return EXCEPTION_CONTINUE_SEARCH;

        const uintptr_t address =
            reinterpret_cast<uintptr_t>(info->ExceptionRecord->ExceptionAddress);

        bool first = false;

        g_inFirstChanceHandler = true;

        EnterCriticalSection(&g_firstChanceLock);

        bool known = false;
        for (int i = 0; i < g_firstChanceCount; ++i)
        {
            if (g_firstChance[i].code == code && g_firstChance[i].address == address)
            {
                known = true;
                break;
            }
        }

        if (!known && g_firstChanceCount < kMaxFirstChanceEntries)
        {
            g_firstChance[g_firstChanceCount].code = code;
            g_firstChance[g_firstChanceCount].address = address;
            ++g_firstChanceCount;
            first = true;
        }

        LeaveCriticalSection(&g_firstChanceLock);

        if (first)
        {
            char moduleName[MAX_PATH]{};
            HMODULE module = nullptr;
            unsigned long long offset = 0;

            if (address && GetModuleHandleExA(
                    GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                    GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                    reinterpret_cast<LPCSTR>(address), &module) && module)
            {
                GetModuleFileNameA(module, moduleName, MAX_PATH);
                offset = static_cast<unsigned long long>(
                    address - reinterpret_cast<uintptr_t>(module));
            }

            char line[512]{};
            sprintf_s(line, sizeof(line),
                "\n[fault] first-chance 0x%08lX at %p (%s+0x%llX) during %s\n",
                code, reinterpret_cast<void*>(address),
                moduleName[0] ? moduleName : "unknown module", offset,
                CurrentActivity());

            AppendCrashLine(line);

            // A fault whose instruction pointer is not inside any loaded module
            // is not a signature that moved: the process is running a heap or
            // stack address, i.e. a corrupted function pointer, vtable or return
            // address. The name alone cannot be acted on - there is nothing to
            // look up - so the first one of those also writes the minidump. The
            // unhandled-exception filter only fires if nobody above us handles
            // the fault, and the 2026-11-22 23:53 session died on exactly this
            // fault (0xC0000005 at 0x...22D08, "unknown module+0x0") with no
            // dump written, which is why this exists.
            if (!module && code == 0xC0000005ul)
            {
                static bool dumpedUnmappedFault = false;

                char dumpPath[MAX_PATH]{};

                if (!dumpedUnmappedFault &&
                    WriteCrashDump(info, dumpPath, sizeof(dumpPath)))
                {
                    dumpedUnmappedFault = true;

                    char note[MAX_PATH + 96]{};
                    sprintf_s(note, sizeof(note),
                        "[crash] unmapped-address fault: minidump written: %s\n",
                        dumpPath);

                    AppendCrashLine(note);
                }
            }
        }

        g_inFirstChanceHandler = false;
        return EXCEPTION_CONTINUE_SEARCH;
    }
}

void LogInstallCrashTrap()
{
    // Resolve the dump writer while the process is healthy, and keep the file
    // next to the session log so one crash leaves both together.
    if (!g_miniDumpWriteDump)
    {
        HMODULE dbghelp = GetModuleHandleA("dbghelp.dll");
        if (!dbghelp)
            dbghelp = LoadLibraryA("dbghelp.dll");

        if (dbghelp)
            g_miniDumpWriteDump = reinterpret_cast<MiniDumpWriteDumpFn>(
                GetProcAddress(dbghelp, "MiniDumpWriteDump"));

        if (g_logPath[0])
        {
            strcpy_s(g_dumpDirectory, sizeof(g_dumpDirectory), g_logPath);
            char* slash = strrchr(g_dumpDirectory, '\\');
            if (slash) *(slash + 1) = '\0';
            else g_dumpDirectory[0] = '\0';
        }

        Log("[crash] minidump %s -> %s",
            g_miniDumpWriteDump ? "ready" : "unavailable",
            g_dumpDirectory[0] ? g_dumpDirectory : "(no log directory)");
    }

    if (!g_previousCrashFilter)
        g_previousCrashFilter = SetUnhandledExceptionFilter(&CrashFilter);

    static bool installed = false;
    if (!installed)
    {
        installed = true;
        AddVectoredExceptionHandler(1, &FirstChanceFilter);
    }
}
