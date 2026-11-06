// n1ssan-dll / src/inventory/armory_inventory.cpp
// Watches <bridge>/armory-inventory.json and creates the described items in the
// game's inventory on the game thread, outside an active match.

#include "inventory/armory_inventory.h"

#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "inventory/loot_socache.h"

#include <windows.h>

#include <atomic>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

namespace
{
    struct ArmoryItem
    {
        std::string instanceId;
        uint64_t    id = 0;
        uint16_t    definition = 0;
        int         quality = 4;
        int         rarity = 4;
        int         paintKit = 0;
        int         seed = 0;
        float       wear = 0.001f;
        int         statTrak = -1; // -1 none, 0 enabled with 0 kills
    };

    std::mutex g_mutex;
    std::vector<ArmoryItem> g_staged;
    std::atomic<bool> g_pending{ false };
    std::string g_path;

    std::string DirectoryOf(const std::string& path)
    {
        const size_t slash = path.find_last_of("\\/");
        return slash == std::string::npos ? std::string() : path.substr(0, slash + 1);
    }

    uint64_t StableIdFor(const std::string& instanceId)
    {
        uint64_t hash = 1469598103934665603ull;
        for (unsigned char c : instanceId)
        {
            hash ^= c;
            hash *= 1099511628211ull;
        }
        return 0x9000000000000000ull | (hash & 0x0FFFFFFFFFFFFFFFull);
    }

    bool ExtractString(const std::string& object, const char* key, std::string& out)
    {
        const std::string needle = std::string("\"") + key + "\"";
        const size_t k = object.find(needle);
        if (k == std::string::npos) return false;
        const size_t colon = object.find(':', k + needle.size());
        if (colon == std::string::npos) return false;
        const size_t quote = object.find('"', colon + 1);
        if (quote == std::string::npos) return false;

        std::string value;
        for (size_t i = quote + 1; i < object.size(); ++i)
        {
            const char c = object[i];
            if (c == '\\' && i + 1 < object.size()) { value.push_back(object[i + 1]); ++i; continue; }
            if (c == '"') break;
            value.push_back(c);
        }

        out = value;
        return true;
    }

    bool ExtractNumber(const std::string& object, const char* key, double& out)
    {
        const std::string needle = std::string("\"") + key + "\"";
        const size_t k = object.find(needle);
        if (k == std::string::npos) return false;
        const size_t colon = object.find(':', k + needle.size());
        if (colon == std::string::npos) return false;

        char* end = nullptr;
        const double value = std::strtod(object.c_str() + colon + 1, &end);
        if (end == object.c_str() + colon + 1) return false;
        out = value;
        return true;
    }

    bool ExtractBool(const std::string& object, const char* key, bool& out)
    {
        const std::string needle = std::string("\"") + key + "\"";
        const size_t k = object.find(needle);
        if (k == std::string::npos) return false;
        const size_t colon = object.find(':', k + needle.size());
        if (colon == std::string::npos) return false;

        size_t i = colon + 1;
        while (i < object.size() && (object[i] == ' ' || object[i] == '\t' || object[i] == '\r' || object[i] == '\n'))
            ++i;

        if (object.compare(i, 4, "true") == 0) { out = true; return true; }
        if (object.compare(i, 5, "false") == 0) { out = false; return true; }
        return false;
    }

    bool ParseItems(const std::string& text, std::vector<ArmoryItem>& out)
    {
        const size_t itemsKey = text.find("\"items\"");
        if (itemsKey == std::string::npos) return false;

        const size_t arrayStart = text.find('[', itemsKey);
        if (arrayStart == std::string::npos) return false;

        size_t i = arrayStart + 1;

        while (i < text.size())
        {
            while (i < text.size() && (text[i] == ' ' || text[i] == '\t' || text[i] == '\r' ||
                                       text[i] == '\n' || text[i] == ','))
            {
                ++i;
            }

            if (i >= text.size() || text[i] == ']') break;
            if (text[i] != '{') { ++i; continue; }

            const size_t start = i;
            int depth = 0;

            for (; i < text.size(); ++i)
            {
                if (text[i] == '{') ++depth;
                else if (text[i] == '}')
                {
                    if (--depth == 0) { ++i; break; }
                }
            }

            const std::string object = text.substr(start, i - start);

            ArmoryItem item;
            double number = 0;

            if (!ExtractString(object, "instanceId", item.instanceId) || item.instanceId.empty())
                continue;

            if (!ExtractNumber(object, "definitionIndex", number) || number <= 0 || number > 65535)
                continue;

            item.definition = static_cast<uint16_t>(number);

            if (ExtractNumber(object, "quality", number)) item.quality = static_cast<int>(number);
            if (ExtractNumber(object, "rarity", number)) item.rarity = static_cast<int>(number);
            if (ExtractNumber(object, "paintKit", number)) item.paintKit = static_cast<int>(number);
            if (ExtractNumber(object, "seed", number)) item.seed = static_cast<int>(number);
            if (ExtractNumber(object, "float", number)) item.wear = static_cast<float>(number);

            bool statTrak = false;
            if (ExtractBool(object, "statTrak", statTrak))
                item.statTrak = statTrak ? 0 : -1;

            item.id = StableIdFor(item.instanceId);
            out.push_back(std::move(item));
        }

        return !out.empty();
    }

    bool ReadFileText(const std::string& path, std::string& out)
    {
        std::ifstream file(path, std::ios::binary);
        if (!file) return false;

        std::stringstream buffer;
        buffer << file.rdbuf();
        out = buffer.str();
        return !out.empty();
    }
}

namespace ArmoryInventory
{
    void StartWatcher()
    {
        if (g_loadoutSource.empty())
        {
            Log("[armory-inventory] no bridge path; watcher not started");
            return;
        }

        static std::atomic<bool> started{ false };
        if (started.exchange(true))
            return;

        g_path = DirectoryOf(g_loadoutSource) + "armory-inventory.json";
        Log("[armory-inventory] watching for inventory changes: %s", g_path.c_str());

        std::thread([]()
        {
            FILETIME lastWrite{};
            ULONGLONG lastSize = 0;
            // Deliberately no baseline: the existing inventory file must be
            // applied once on every injection, not only after it changes.
            bool haveBaseline = false;

            for (;;)
            {
                Sleep(2000);

                WIN32_FILE_ATTRIBUTE_DATA info{};
                if (!GetFileAttributesExA(g_path.c_str(), GetFileExInfoStandard, &info))
                    continue;

                ULARGE_INTEGER size{};
                size.HighPart = info.nFileSizeHigh;
                size.LowPart = info.nFileSizeLow;

                if (size.QuadPart == 0)
                    continue;

                if (haveBaseline &&
                    CompareFileTime(&info.ftLastWriteTime, &lastWrite) == 0 &&
                    size.QuadPart == lastSize)
                {
                    continue;
                }

                lastWrite = info.ftLastWriteTime;
                lastSize = size.QuadPart;
                haveBaseline = true;

                std::string text;
                if (!ReadFileText(g_path, text))
                {
                    Log("[armory-inventory] reload skipped: file unreadable");
                    continue;
                }

                std::vector<ArmoryItem> items;
                if (!ParseItems(text, items))
                {
                    Log("[armory-inventory] reload skipped: no items");
                    continue;
                }

                const size_t count = items.size();
                {
                    std::lock_guard<std::mutex> lock(g_mutex);
                    g_staged = std::move(items);
                }

                g_pending.store(true, std::memory_order_release);
                Log("[armory-inventory] staged %zu items (applies outside an active match)", count);
            }
        }).detach();
    }

    bool HasPending()
    {
        return g_pending.load(std::memory_order_acquire);
    }

    void AdoptPending()
    {
        if (!g_pending.load(std::memory_order_acquire))
            return;

        std::lock_guard<std::mutex> lock(g_mutex);

        if (!g_pending.load(std::memory_order_acquire))
            return;

        if (g_staged.empty())
        {
            g_pending.store(false, std::memory_order_release);
            return;
        }

        Log("[armory-inventory] adopting %zu items", g_staged.size());

        int created = 0;
        int existed = 0;
        int failed = 0;
        int notReady = 0;

        for (const ArmoryItem& item : g_staged)
        {
            LootSOCache::NewItem request{};
            request.id = item.id;
            request.definition = item.definition;
            request.quality = item.quality;
            request.rarity = item.rarity;
            request.paintKit = item.paintKit;
            request.seed = item.seed;
            request.wear = item.wear;
            request.statTrak = item.statTrak;

            switch (LootSOCache::Create(request))
            {
            case LootSOCache::CreateResult::Ok:               ++created; break;
            case LootSOCache::CreateResult::AlreadyExists:    ++existed; break;
            case LootSOCache::CreateResult::InventoryNotReady: ++notReady; break;
            default:                                          ++failed; break;
            }
        }

        if (created || existed || failed || notReady)
        {
            Log("[armory-inventory] created=%d existed=%d failed=%d notReady=%d",
                created, existed, failed, notReady);
        }

        if (notReady == 0)
        {
            g_staged.clear();
            g_pending.store(false, std::memory_order_release);
        }
    }
}
