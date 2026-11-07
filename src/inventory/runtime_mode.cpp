// n1ssan-dll / src/inventory/runtime_mode.cpp
// Watches <bridge>/runtime-mode.json. Loadout and Armory are mutually exclusive
// runtime sources; the DLL must never apply both at once.

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

    std::string DirectoryOf(const std::string& path)
    {
        const size_t slash = path.find_last_of("\\/");
        return slash == std::string::npos ? std::string() : path.substr(0, slash + 1);
    }

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
        if (bridgeDirectory.empty()) return RuntimeMode::Unknown;

        std::ifstream file(bridgeDirectory + "runtime-mode.json", std::ios::binary);
        if (!file) return RuntimeMode::Unknown;

        std::stringstream buffer;
        buffer << file.rdbuf();
        return ParseMode(buffer.str());
    }

    void StartWatcher(const std::string& bridgeDirectory)
    {
        if (bridgeDirectory.empty())
        {
            Log("[runtime-mode] bridge directory unavailable; mode remains Unknown");
            return;
        }

        const RuntimeMode initialMode = ReadFile(bridgeDirectory);
        g_requestedMode.store(static_cast<int>(initialMode), std::memory_order_release);
        if (initialMode == RuntimeMode::Unknown)
            Log("[runtime-mode] no valid selection yet; waiting for launcher");
        else
            Log("[runtime-mode] initial mode: %s", ModeName(initialMode));

        static std::atomic<bool> started{ false };
        if (started.exchange(true))
            return;

        std::thread([bridgeDirectory]()
        {
            RuntimeMode last = Requested();

            for (;;)
            {
                Sleep(1000);

                const RuntimeMode mode = ReadFile(bridgeDirectory);
                if (mode == RuntimeMode::Unknown || mode == last)
                    continue;

                g_requestedMode.store(static_cast<int>(mode), std::memory_order_release);
                last = mode;
                Log("[runtime-mode] switched to %s", ModeName(mode));
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
    }
}
