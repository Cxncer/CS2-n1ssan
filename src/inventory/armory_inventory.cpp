// n1ssan-dll / src/inventory/armory_inventory.cpp
// Watches <bridge>/armory-inventory.json and creates the described items in the
// game's inventory on the game thread, outside an active match.

#include "inventory/armory_inventory.h"

#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "inventory/loot_socache.h"

#include <windows.h>

#include <algorithm>

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
        int         stickerKit = 0;
        int         keychain = 0;
        int         keychainSeed = 0;
    };

    std::mutex g_mutex;
    std::vector<ArmoryItem> g_staged;
    std::vector<ArmoryItem> g_inventoryItems;
    std::atomic<bool> g_pending{ false };
    std::string g_path;



    void HashBytes(uint64_t& hash, const void* data, size_t size)
    {
        const auto* bytes = static_cast<const unsigned char*>(data);
        for (size_t i = 0; i < size; ++i)
        {
            hash ^= bytes[i];
            hash *= 1099511628211ull;
        }
    }

    uint64_t StableIdFor(const ArmoryItem& item)
    {
        // The projected SOCache ID must survive watcher re-reads of an
        // unchanged profile. Regenerating IDs on every file timestamp change
        // invalidates CS2's native equipment references and breaks exact
        // equipped-item matching in the live weapon EconItemView.
        uint64_t hash = 1469598103934665603ull;
        HashBytes(hash, item.instanceId.data(), item.instanceId.size());

        const uint16_t definition = item.definition;
        const int quality = item.quality;
        const int rarity = item.rarity;
        const int paintKit = item.paintKit;
        const int seed = item.seed;
        uint32_t wearBits = 0;
        std::memcpy(&wearBits, &item.wear, sizeof(wearBits));

        HashBytes(hash, &definition, sizeof(definition));
        HashBytes(hash, &quality, sizeof(quality));
        HashBytes(hash, &rarity, sizeof(rarity));
        HashBytes(hash, &paintKit, sizeof(paintKit));
        HashBytes(hash, &seed, sizeof(seed));
        HashBytes(hash, &wearBits, sizeof(wearBits));
        HashBytes(hash, &item.statTrak, sizeof(item.statTrak));
        HashBytes(hash, &item.stickerKit, sizeof(item.stickerKit));
        HashBytes(hash, &item.keychain, sizeof(item.keychain));
        HashBytes(hash, &item.keychainSeed, sizeof(item.keychainSeed));

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
        size_t objectCount = 0;

        while (i < text.size())
        {
            while (i < text.size() && (text[i] == ' ' || text[i] == '\t' || text[i] == '\r' ||
                                       text[i] == '\n' || text[i] == ','))
            {
                ++i;
            }

            if (i >= text.size() || text[i] == ']') break;
            if (text[i] != '{') return false;

            ++objectCount;
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
            if (ExtractNumber(object, "stickerKit", number)) item.stickerKit = static_cast<int>(number);
            if (ExtractNumber(object, "keychain", number)) item.keychain = static_cast<int>(number);
            if (ExtractNumber(object, "keychainSeed", number)) item.keychainSeed = static_cast<int>(number);

            bool statTrak = false;
            if (ExtractBool(object, "statTrak", statTrak))
                item.statTrak = statTrak ? 0 : -1;

            item.id = StableIdFor(item);
            out.push_back(std::move(item));
        }

        return i < text.size() && text[i] == ']' && objectCount == out.size();
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
        if (g_bridgeDirectory.empty())
        {
            Log("[armory-inventory] no bridge directory; watcher not started");
            return;
        }

        static std::atomic<bool> started{ false };
        if (started.exchange(true))
            return;

        g_path = g_bridgeDirectory + "armory-inventory.json";
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
                    Log("[armory-inventory] reload skipped: malformed inventory document");
                    continue;
                }

                const size_t count = items.size();
                {
                    std::lock_guard<std::mutex> lock(g_mutex);
                    // Keep the active lookup table aligned with the inventory
                    // currently committed to SOCache. Publish staged entries
                    // only after the replacement transaction succeeds.
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

        Log("[armory-inventory] preparing replacement set: %zu items", g_staged.size());

        // Snapshot the old managed set. New projection IDs are generation-scoped,
        // so the complete new set can be created before any old item is removed.
        std::vector<uint64_t> previousIds;
        if (!LootSOCache::GetIdsByPrefix(
                0x9000000000000000ull, 0xF000000000000000ull, previousIds))
        {
            Log("[armory-inventory] replacement deferred: SOCache enumeration failed");
            return;
        }

        std::vector<uint64_t> createdIds;
        createdIds.reserve(g_staged.size());
        bool failed = false;
        bool notReady = false;

        std::vector<uint64_t> desiredIds;
        desiredIds.reserve(g_staged.size());

        for (const ArmoryItem& item : g_staged)
        {
            desiredIds.push_back(item.id);

            // An unchanged profile re-read resolves to the same stable ID.
            // Keep that SOCache object in place so CS2's native Loadout
            // reference remains valid instead of replacing it every poll.
            if (LootSOCache::HasItem(item.id))
            {
                Log("[armory-inventory] retained item id=%016llX def=%u",
                    static_cast<unsigned long long>(item.id), item.definition);
                continue;
            }

            LootSOCache::NewItem request{};
            request.id = item.id;
            request.definition = item.definition;
            request.quality = item.quality;
            request.rarity = item.rarity;
            request.paintKit = item.paintKit;
            request.seed = item.seed;
            request.wear = item.wear;
            request.statTrak = item.statTrak;
            request.stickerKit = item.stickerKit;
            request.keychain = item.keychain;
            request.keychainSeed = item.keychainSeed;

            switch (LootSOCache::Create(request))
            {
            case LootSOCache::CreateResult::Ok:
                createdIds.push_back(item.id);
                break;
            case LootSOCache::CreateResult::InventoryNotReady:
                notReady = true;
                failed = true;
                break;
            case LootSOCache::CreateResult::AlreadyExists:
                Log("[armory-inventory] unexpected managed ID collision: %llu",
                    static_cast<unsigned long long>(item.id));
                failed = true;
                break;
            default:
                failed = true;
                break;
            }

            if (failed)
                break;
        }

        if (failed)
        {
            int rolledBack = 0;
            int rollbackFailed = 0;
            for (uint64_t id : createdIds)
            {
                if (LootSOCache::Remove(id)) ++rolledBack;
                else ++rollbackFailed;
            }

            Log("[armory-inventory] replacement aborted; staged=%zu created=%zu rollback=%d rollbackFailed=%d",
                g_staged.size(), createdIds.size(), rolledBack, rollbackFailed);

            if (!notReady)
            {
                g_staged.clear();
                g_pending.store(false, std::memory_order_release);
            }
            return;
        }

        int removed = 0;
        int removeFailed = 0;
        for (uint64_t id : previousIds)
        {
            if (std::find(desiredIds.begin(), desiredIds.end(), id) != desiredIds.end())
                continue;
            if (LootSOCache::Remove(id)) ++removed;
            else ++removeFailed;
        }

        // Publish only after all desired objects exist and obsolete managed
        // objects have been reconciled. This prevents a staged profile from
        // being used to resolve live entities before its SOCache commit.
        g_inventoryItems = g_staged;

        Log("[armory-inventory] replacement committed: desired=%zu created=%zu retained=%zu removed=%d removeFailed=%d",
            desiredIds.size(), createdIds.size(), desiredIds.size() - createdIds.size(),
            removed, removeFailed);

        g_staged.clear();
        g_pending.store(false, std::memory_order_release);
    }

    bool HasItems()
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        return !g_inventoryItems.empty();
    }

    // Lootline-style live application resolves cosmetics from the live weapon
    // definition rather than assuming the weapon EconItemView ID equals our
    // projected SOCache ID. Armory may contain duplicate definitions; only
    // return a target when the definition maps to exactly one owned item.
    bool GetUniqueTargetForDefinition(uint16_t definition, TargetSkin& target)
    {
        if (!definition) return false;
        std::lock_guard<std::mutex> lock(g_mutex);

        const ArmoryItem* match = nullptr;
        for (const auto& item : g_inventoryItems)
        {
            if (item.definition != definition) continue;
            if (match)
                return false; // ambiguous: never choose an arbitrary duplicate
            match = &item;
        }

        if (!match) return false;

        target = TargetSkin{};
        target.paintKit = match->paintKit;
        target.resolvedSeed = match->seed;
        target.wear = match->wear;
        target.statTrak = match->statTrak >= 0;
        target.defIndex = match->definition;
        return true;
    }
}
