// n1ssan-dll / src/inventory/runtime_mode.cpp
// Watches <bridge>/runtime-mode.json. Loadout and Armory are mutually exclusive
// runtime sources; the DLL must never apply both at once.
//
// The Bridge writes a selectionId with every explicit "Apply to CS2". Only a
// new selectionId counts: whatever the file named before this DLL was injected
// describes an earlier session and must not be applied on load.

#include "inventory/runtime_mode.h"

#include "diagnostics/log.h"

#include <windows.h>

#include <atomic>
#include <fstream>
#include <sstream>
#include <string>
#include <thread>

namespace
{
    std::atomic<int> g_mode{ static_cast<int>(RuntimeMode::Unknown) };
    std::atomic<int> g_requestedMode{ static_cast<int>(RuntimeMode::Unknown) };
    std::string g_bridgeDirectory;

    // A mode alone is not enough: the user can Apply the same mode again, and a
    // session may start with an unchanged mode still on disk. selectionId is the
    // Bridge's per-apply token and identifies exactly one user action.
    struct Selection
    {
        RuntimeMode mode = RuntimeMode::Unknown;
        std::string id;
    };

    RuntimeMode ParseMode(const std::string& text)
    {
        const size_t key = text.find("\"mode\"");
        if (key == std::string::npos) return RuntimeMode::Unknown;

        const size_t colon = text.find(':', key);
        if (colon == std::string::npos) return RuntimeMode::Unknown;

        const size_t quote = text.find('"', colon + 1);
        if (quote == std::string::npos) return RuntimeMode::Unknown;

        const size_t end = text.find('"', quote + 1);
        if (end == std::string::npos) return RuntimeMode::Unknown;

        const std::string value = text.substr(quote + 1, end - quote - 1);

        if (value == "armory") return RuntimeMode::Armory;
        if (value == "loadout") return RuntimeMode::Loadout;
        return RuntimeMode::Unknown;
    }

    std::string ParseSelectionId(const std::string& text)
    {
        const size_t key = text.find("\"selectionId\"");
        if (key == std::string::npos) return std::string();

        const size_t colon = text.find(':', key);
        if (colon == std::string::npos) return std::string();

        // The Bridge writes "selectionId": null when nothing is selected. Only a
        // quoted value is an id; any other token (null, a number) is no selection.
        size_t i = colon + 1;
        while (i < text.size() &&
               (text[i] == ' ' || text[i] == '\t' || text[i] == '\r' || text[i] == '\n'))
        {
            ++i;
        }

        if (i >= text.size() || text[i] != '"') return std::string();

        const size_t quote = i;
        const size_t end = text.find('"', quote + 1);
        if (end == std::string::npos) return std::string();

        return text.substr(quote + 1, end - quote - 1);
    }

    Selection ReadSelectionFile(const std::string& bridgeDirectory)
    {
        Selection selection;

        if (bridgeDirectory.empty()) return selection;

        std::ifstream file(bridgeDirectory + "runtime-mode.json", std::ios::binary);
        if (!file) return selection;

        std::stringstream buffer;
        buffer << file.rdbuf();

        const std::string text = buffer.str();
        selection.mode = ParseMode(text);
        selection.id = ParseSelectionId(text);

        return selection;
    }

    const char* ModeName(RuntimeMode mode)
    {
        switch (mode)
        {
        case RuntimeMode::Loadout: return "loadout";
        case RuntimeMode::Armory: return "armory";
        default: return "unknown";
        }
    }
}

namespace RuntimeModeState
{
    RuntimeMode ReadFile(const std::string& bridgeDirectory)
    {
        return ReadSelectionFile(bridgeDirectory).mode;
    }

    void StartWatcher(const std::string& bridgeDirectory)
    {
        if (bridgeDirectory.empty())
        {
            Log("[runtime-mode] bridge directory unavailable; mode remains Unknown");
            return;
        }

        g_bridgeDirectory = bridgeDirectory;
        DeleteFileA((g_bridgeDirectory + "runtime-mode-active.json").c_str());

        // Never adopt what the file already says. It is the previous session's
        // choice (or a profile import that never reached Apply).
        const Selection baseline = ReadSelectionFile(bridgeDirectory);
        if (baseline.mode == RuntimeMode::Unknown || baseline.id.empty())
            Log("[runtime-mode] no selection pending; waiting for an Apply to CS2");
        else
            Log("[runtime-mode] ignoring saved %s selection (%s) from an earlier session; waiting for an Apply to CS2",
                ModeName(baseline.mode), baseline.id.c_str());

        static std::atomic<bool> started{ false };
        if (started.exchange(true))
            return;

        std::thread([bridgeDirectory, baselineId = baseline.id]()
        {
            std::string lastId = baselineId;

            for (;;)
            {
                Sleep(500);

                const Selection selection = ReadSelectionFile(bridgeDirectory);

                if (selection.id.empty())
                {
                    // The user (or the Bridge at start-up) cleared the workspace.
                    // Deactivate so nothing from the withdrawn mode keeps applying.
                    if (!lastId.empty())
                    {
                        lastId.clear();
                        g_requestedMode.store(static_cast<int>(RuntimeMode::Unknown),
                            std::memory_order_release);
                        Log("[runtime-mode] selection withdrawn; runtime is inactive");
                    }
                    continue;
                }

                if (selection.id == lastId)
                    continue;

                lastId = selection.id;

                if (selection.mode == RuntimeMode::Unknown)
                    continue;

                g_requestedMode.store(static_cast<int>(selection.mode),
                    std::memory_order_release);
                Log("[runtime-mode] switched to %s (selection %s)",
                    ModeName(selection.mode), selection.id.c_str());
            }
        }).detach();
    }

    RuntimeMode Requested()
    {
        return static_cast<RuntimeMode>(g_requestedMode.load(std::memory_order_acquire));
    }

    RuntimeMode Current()
    {
        return static_cast<RuntimeMode>(g_mode.load(std::memory_order_acquire));
    }

    void SetCurrent(RuntimeMode mode)
    {
        g_mode.store(static_cast<int>(mode), std::memory_order_release);

        if (g_bridgeDirectory.empty() || mode == RuntimeMode::Unknown)
            return;

        std::ofstream ack(g_bridgeDirectory + "runtime-mode-active.json",
            std::ios::binary | std::ios::trunc);
        if (ack)
        {
            ack << "{\"mode\":\"" << ModeName(mode) << "\"}";
            ack.flush();
        }
        if (!ack)
            Log("[runtime-mode] could not write active-mode acknowledgement");
    }
}
