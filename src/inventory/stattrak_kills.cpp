// n1ssan-dll / src/inventory/stattrak_kills.cpp

#include "inventory/stattrak_kills.h"
#include "inventory/armory_inventory.h"
#include "diagnostics/log.h"

#include <windows.h>
#include <cstdio>
#include <mutex>
#include <unordered_map>

namespace
{
    std::mutex g_mutex;
    std::unordered_map<std::string, int> g_kills;
    bool g_written = false;

    std::string JsonString(const std::string& value)
    {
        std::string escaped;
        escaped.reserve(value.size() + 2);
        escaped += '"';

        for (char ch : value)
        {
            if (ch == '"' || ch == '\\')
            {
                escaped += '\\';
                escaped += ch;
            }
            else if (static_cast<unsigned char>(ch) < 0x20)
            {
                char part[8]{};
                std::snprintf(part, sizeof(part), "\\u%04X", ch & 0xFF);
                escaped += part;
            }
            else
            {
                escaped += ch;
            }
        }

        escaped += '"';
        return escaped;
    }

    bool WriteFileAtomic(const std::string& path, const std::string& content)
    {
        const std::string temporary = path + ".tmp";
        FILE* file = nullptr;

        if (fopen_s(&file, temporary.c_str(), "wb") != 0 || !file)
            return false;

        const bool written =
            fwrite(content.data(), 1, content.size(), file) == content.size();
        fclose(file);

        if (!written)
        {
            DeleteFileA(temporary.c_str());
            return false;
        }

        if (!MoveFileExA(temporary.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING))
        {
            DeleteFileA(temporary.c_str());
            return false;
        }

        return true;
    }
}

std::string StatTrakKills::Path()
{
    return ArmoryInventory::BridgeDirectory() + "\\armory-stattrak-kills.json";
}

void StatTrakKills::Record(const std::string& instanceId, int kills)
{
    if (instanceId.empty() || kills <= 0)
        return;

    std::lock_guard<std::mutex> lock(g_mutex);

    const auto it = g_kills.find(instanceId);

    if (it != g_kills.end() && it->second >= kills)
        return;

    g_kills[instanceId] = kills;

    std::string json = "{\n  \"source\": \"n1ssan-dll\",\n  \"kills\": {\n";

    size_t index = 0;

    for (const auto& entry : g_kills)
    {
        json += "    ";
        json += JsonString(entry.first);
        json += ": " + std::to_string(entry.second);
        json += ++index == g_kills.size() ? "\n" : ",\n";
    }

    json += "  }\n}\n";

    if (WriteFileAtomic(Path(), json))
    {
        if (!g_written)
        {
            g_written = true;
            Log("[stattrak] writing live kills to %s", Path().c_str());
        }
    }
    else
    {
        Log("[stattrak] cannot write %s", Path().c_str());
    }
}
