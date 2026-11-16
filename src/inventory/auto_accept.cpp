// n1ssan-dll / src/inventory/auto_accept.cpp
//
// CS2's accept is one call: client.dll's SetPlayerReady(nullptr, "accept"), the
// same function the popup's button ends up in. The Game Coordinator tells the
// client a match was found through MatchFoundHandler, so accepting from that
// hook needs no screen reading and no simulated clicks.
//
// Two details cost time if they are missed (reversed on the 2026-11 client):
//   * the ready type must be "accept"; "deferred" takes a broken path that
//     silently does nothing, and
//   * the match data must already be stored, which it is inside MatchFoundHandler
//     (the popup event fires earlier and needs a delay).

#include "inventory/auto_accept.h"
#include "inventory/armory_inventory.h"
#include "hooks/minhook_dynamic.h"
#include "diagnostics/log.h"
#include "memory/scanner.h"

#include <windows.h>
#include <atomic>
#include <cstdint>
#include <fstream>
#include <sstream>
#include <string>

namespace
{
    // client.dll, unique on the client these patterns were taken from. When CS2
    // ships an update that moves them, the hook simply is not installed and the
    // log says so; nothing else in the runtime is affected.
    constexpr const char* MATCH_FOUND_PATTERN =
        "48 83 EC 28 48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 48 89 7C 24 20 FF 50 78";
    constexpr const char* SET_PLAYER_READY_PATTERN =
        "40 53 48 83 EC 20 48 8B DA 48 8D 15 ? ? ? ? 48 8B CB FF 15 ? ? ? ? 85 C0 75 14 BA 02 00";

    constexpr const char* FEATURES_FILE = "n1ssan-features.json";
    constexpr ULONGLONG ACCEPT_COOLDOWN_MS = 10000;

    typedef bool(__fastcall* SetPlayerReadyFn)(void*, const char*);
    typedef void(__fastcall* MatchFoundFn)();

    SetPlayerReadyFn g_setPlayerReady = nullptr;
    MatchFoundFn g_originalMatchFound = nullptr;
    std::atomic<bool> g_enabled{ false };
    std::atomic<ULONGLONG> g_lastAcceptMs{ 0 };

    std::string FeaturesPath()
    {
        std::string directory = ArmoryInventory::BridgeDirectory();
        if (directory.empty())
            return std::string();

        if (directory.back() != '\\' && directory.back() != '/')
            directory += '\\';

        return directory + FEATURES_FILE;
    }

    // The toggle, straight out of the Bridge's file. Only `"autoAcceptMatch":
    // true` counts; a missing file, a broken file or an older Bridge all mean off.
    bool ReadEnabled()
    {
        const std::string path = FeaturesPath();
        if (path.empty())
            return false;

        std::ifstream file(path, std::ios::binary);
        if (!file)
            return false;

        std::stringstream buffer;
        buffer << file.rdbuf();
        const std::string text = buffer.str();

        const size_t key = text.find("\"autoAcceptMatch\"");
        if (key == std::string::npos)
            return false;

        const size_t colon = text.find(':', key);
        if (colon == std::string::npos)
            return false;

        const size_t value = text.find_first_not_of(" \t\r\n", colon + 1);
        if (value == std::string::npos)
            return false;

        return text.compare(value, 4, "true") == 0;
    }

    // Kept in its own function: a caller that needs __try cannot also hold
    // objects with destructors.
    bool AcceptMatch()
    {
        if (!g_setPlayerReady)
            return false;

        __try
        {
            g_setPlayerReady(nullptr, "accept");
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    void __fastcall HkMatchFound()
    {
        // The game handles the notification first: the match data the ready call
        // relies on is stored inside it.
        if (g_originalMatchFound)
            g_originalMatchFound();

        // The toggle is read right here, so flipping it in the Armory counts for
        // the next queue without restarting the game. A match is found rarely
        // enough that this costs nothing.
        const bool enabled = ReadEnabled();
        g_enabled.store(enabled, std::memory_order_relaxed);

        if (!enabled)
            return;

        const ULONGLONG now = GetTickCount64();
        if (now - g_lastAcceptMs.load(std::memory_order_relaxed) < ACCEPT_COOLDOWN_MS)
            return;

        g_lastAcceptMs.store(now, std::memory_order_relaxed);

        if (AcceptMatch())
            Log("[auto-accept] match found - accepted for you");
        else
            Log("[auto-accept] match found - accepting failed");
    }
}

void AutoAccept::RefreshFlag()
{
    const bool enabled = ReadEnabled();

    if (enabled != g_enabled.exchange(enabled, std::memory_order_relaxed))
        Log("[auto-accept] %s", enabled ? "enabled" : "disabled");
}

void AutoAccept::Initialize()
{
    RefreshFlag();

    ModuleInfo client = GetClientModule();
    if (!client.valid())
    {
        Log("[auto-accept] client module not ready - hook not installed");
        return;
    }

    const uintptr_t readyAddress = ScanPattern(client, SET_PLAYER_READY_PATTERN);
    const uintptr_t matchAddress = ScanPattern(client, MATCH_FOUND_PATTERN);

    if (!readyAddress || !matchAddress)
    {
        Log("[auto-accept] setPlayerReady=%s matchFound=%s - signatures not found, auto accept stays off",
            readyAddress ? "found" : "missing",
            matchAddress ? "found" : "missing");
        return;
    }

    if (!MH_CreateHook_p || !MH_EnableHook_p)
    {
        Log("[auto-accept] MinHook unavailable - hook not installed");
        return;
    }

    g_setPlayerReady = reinterpret_cast<SetPlayerReadyFn>(readyAddress);

    const int created = MH_CreateHook_p(
        reinterpret_cast<void*>(matchAddress),
        reinterpret_cast<void*>(&HkMatchFound),
        reinterpret_cast<void**>(&g_originalMatchFound));

    if (created != 0 || !g_originalMatchFound)
    {
        g_originalMatchFound = nullptr;
        g_setPlayerReady = nullptr;
        Log("[auto-accept] match-found hook failed (%d) @ 0x%p", created, (void*)matchAddress);
        return;
    }

    if (MH_EnableHook_p(reinterpret_cast<void*>(matchAddress)) != 0)
    {
        Log("[auto-accept] match-found hook could not be enabled @ 0x%p", (void*)matchAddress);
        return;
    }

    Log("[auto-accept] hooked @ 0x%p (setPlayerReady @ 0x%p); auto accept is %s",
        (void*)matchAddress, (void*)readyAddress,
        g_enabled.load(std::memory_order_relaxed) ? "ON" : "off");
}
