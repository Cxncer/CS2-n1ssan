// n1ssan-dll / src/inventory/armory_inventory.cpp
// Watches <bridge>/armory-inventory.json and creates the described items in the
// game's inventory on the game thread, outside an active match.

#include "inventory/armory_inventory.h"

#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "inventory/loadout_api.h"
#include "inventory/loot_socache.h"

#include <windows.h>

#include <algorithm>

#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>
#include <unordered_map>
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
                int statTrak = -1; // -1 none, otherwise the saved kill count (0 = none yet)
        std::string customName; // nametag, empty when none
        int         stickerKit = 0;
        int         keychain = 0;
        int         keychainSeed = 0;
        // Sticker and charm state carried by the projection. Deliberately not
        // part of StableIdFor: an attachment change must not recreate the item,
        // because the in-game Loadout keeps referring to its id.
        Attachments::Set attachments;
    };

    // One entry from the Bridge's canonical equipment document. Assignments
    // name an owned instance per team slot; they are the only authoritative
    // statement about which duplicate of a weapon the player equipped.
    struct EquipmentAssignment
    {
        std::string team;
        std::string slot;
        std::string target;
        std::string instanceId;
    };

    // Per-definition summary of the projected inventory, used by the
    // equivalence fallback: a definition may only be applied without an
    // assignment when every owned instance for it renders identically.
    struct DefinitionGroup
    {
        uint64_t id = 0;
        size_t   count = 0;
        bool     equivalent = true;
    };

    std::mutex g_mutex;
    std::vector<ArmoryItem> g_staged;
    std::vector<ArmoryItem> g_inventoryItems;
    std::atomic<bool> g_pending{ false };
    std::string g_path;
    std::string g_profileId;
    int         g_inventoryRevision = 0;

    // All guarded by g_mutex.
    std::vector<EquipmentAssignment> g_assignments;
    std::unordered_map<uint32_t, uint64_t> g_equippedBySlot; // (team << 16) | def
    std::unordered_map<uint32_t, uint64_t> g_equippedKnife;  // team
    std::unordered_map<uint32_t, uint64_t> g_equippedBySlotName; // (team << 16) | slot code
    std::unordered_map<uint16_t, DefinitionGroup> g_definitionGroups;
    std::string g_equipmentPath;



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

        // "customName": null must not read the next key's name. The old code took
        // the first quote after the colon, which for null is the opening quote of
        // the following field - every unnamed skin got that field's name ("kind")
        // as its custom name and the game drew a nametag with it.
        size_t cursor = colon + 1;
        while (cursor < object.size() &&
               (object[cursor] == ' ' || object[cursor] == '\t' ||
                object[cursor] == '\r' || object[cursor] == '\n'))
            ++cursor;

        if (object.compare(cursor, 4, "null") == 0) return false;

        const size_t quote = object.find('"', cursor);
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

    // Flat attachment keys: the projection emits one fixed key per value so the
    // document stays readable with this scanner (no nested arrays).
    void ParseAttachments(const std::string& object, ArmoryItem& item)
    {
        double number = 0;

        for (int slot = 0; slot < Attachments::STICKER_SLOTS; ++slot)
        {
            char key[40]{};

            snprintf(key, sizeof(key), "sticker%dKit", slot);
            if (!ExtractNumber(object, key, number) || number <= 0.0 || number > 1000000.0)
                continue;

            Attachments::StickerSlot& sticker = item.attachments.stickers[slot];
            sticker.present = true;
            sticker.kit = static_cast<int>(number);
            sticker.scale = 1.0f;

            snprintf(key, sizeof(key), "sticker%dWear", slot);
            if (ExtractNumber(object, key, number))
                sticker.wear = static_cast<float>(number);

            snprintf(key, sizeof(key), "sticker%dScale", slot);
            if (ExtractNumber(object, key, number) && number > 0.0)
                sticker.scale = static_cast<float>(number);

            snprintf(key, sizeof(key), "sticker%dRotation", slot);
            if (ExtractNumber(object, key, number))
                sticker.rotation = static_cast<float>(number);

            snprintf(key, sizeof(key), "sticker%dOffsetX", slot);
            if (ExtractNumber(object, key, number))
                sticker.offsetX = static_cast<float>(number);

            snprintf(key, sizeof(key), "sticker%dOffsetY", slot);
            if (ExtractNumber(object, key, number))
                sticker.offsetY = static_cast<float>(number);

            snprintf(key, sizeof(key), "sticker%dSchema", slot);
            if (ExtractNumber(object, key, number))
            {
                sticker.hasSchema = true;
                sticker.schema = static_cast<int>(number);
            }
        }

        if (!ExtractNumber(object, "charmKit", number) || number <= 0.0 || number > 1000000.0)
            return;

        Attachments::Charm& charm = item.attachments.charm;
        charm.present = true;
        charm.kit = static_cast<int>(number);

        if (ExtractNumber(object, "charmSeed", number))
            charm.seed = static_cast<int>(number);
        if (ExtractNumber(object, "charmX", number))
            charm.x = static_cast<float>(number);
        if (ExtractNumber(object, "charmY", number))
            charm.y = static_cast<float>(number);
        if (ExtractNumber(object, "charmZ", number))
            charm.z = static_cast<float>(number);

        if (ExtractNumber(object, "charmSticker", number) && number > 0.0)
        {
            charm.hasSticker = true;
            charm.sticker = static_cast<int>(number);
        }

        if (ExtractNumber(object, "charmHighlight", number) && number > 0.0)
        {
            charm.hasHighlight = true;
            charm.highlight = static_cast<int>(number);
        }
    }

    bool ParseItems(const std::string& text, std::vector<ArmoryItem>& out,
                    std::string& profileId, int& inventoryRevision)
    {
        profileId.clear();
        inventoryRevision = 0;

        ExtractString(text.substr(0, text.find("\"items\"")), "profileId", profileId);

        double revision = 0;
        if (ExtractNumber(text, "inventoryRevision", revision))
            inventoryRevision = static_cast<int>(revision);

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

            ParseAttachments(object, item);

            bool statTrak = false;
            if (ExtractBool(object, "statTrak", statTrak))
                item.statTrak = statTrak ? 0 : -1;

            // Saved kills travel with the instance so the in-game counter
            // continues from where it stopped when the same skin is reloaded.
            double kills = 0;
            if (item.statTrak >= 0 && ExtractNumber(object, "statTrakKills", kills) && kills > 0)
                item.statTrak = static_cast<int>(kills);

            std::string customName;
            if (ExtractString(object, "customName", customName))
                item.customName = customName;

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

    // Reads the equipment document's assignment array. Only the fields the
    // native runtime needs are extracted; slot/target stay for diagnostics.
    bool ParseAssignments(const std::string& text, std::vector<EquipmentAssignment>& out)
    {
        const size_t key = text.find("\"assignments\"");
        if (key == std::string::npos) return false;

        const size_t arrayStart = text.find('[', key);
        if (arrayStart == std::string::npos) return false;

        size_t i = arrayStart + 1;

        while (i < text.size())
        {
            while (i < text.size() && (text[i] == ' ' || text[i] == '\t' ||
                                       text[i] == '\r' || text[i] == '\n' ||
                                       text[i] == ','))
            {
                ++i;
            }

            if (i >= text.size() || text[i] == ']') break;
            if (text[i] != '{') return false;

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

            EquipmentAssignment assignment;
            ExtractString(object, "team", assignment.team);
            ExtractString(object, "slot", assignment.slot);
            ExtractString(object, "target", assignment.target);

            if (ExtractString(object, "itemInstanceId", assignment.instanceId) &&
                !assignment.instanceId.empty())
            {
                out.push_back(std::move(assignment));
            }
        }

        return i < text.size() && text[i] == ']';
    }

    int TeamNumberFor(const std::string& team)
    {
        if (team == "T") return 2;
        if (team == "CT") return 3;
        return 0;
    }

    // CS2's own team names, as the LoadoutAPI natives take them.
    const char* TeamApiName(int team)
    {
        if (team == 2) return "t";
        if (team == 3) return "ct";
        return nullptr;
    }

    // The loadout answers per frame; report a slot that holds something other
    // than a projected instance only when that answer changes.
    void NoteForeignEquipped(int team, const char* what, uint64_t itemId)
    {
        static int lastTeam = 0;
        static std::string lastWhat;
        static uint64_t lastItemId = 0;

        if (team == lastTeam && lastWhat == what && itemId == lastItemId)
            return;

        lastTeam = team;
        lastWhat = what;
        lastItemId = itemId;

        Log("[armory-loadout] team=%s %s holds item %llu, which is not a projected instance",
            TeamApiName(team) ? TeamApiName(team) : "?", what,
            static_cast<unsigned long long>(itemId));
    }

    // A live weapon's loadout identity for diagnostics: "def=61".
    void DefinitionLabel(uint16_t definition, char (&label)[32])
    {
        snprintf(label, sizeof(label), "def=%u", definition);
    }

    bool IsKnifeAssignment(const EquipmentAssignment& assignment)
    {
        return assignment.slot == "knife" || assignment.slot == "melee" ||
            assignment.target == "knife" || assignment.target == "melee";
    }

    uint32_t SlotKey(int team, uint16_t definition)
    {
        return (static_cast<uint32_t>(team) << 16) | definition;
    }

    // Gloves, agents and the zeus have no definition-keyed assignment: their
    // slot name is the identity the Bridge assigns an instance to.
    uint16_t SlotNameCode(const std::string& slot)
    {
        if (slot == "gloves" || slot == "glove") return 1;
        if (slot == "agent") return 2;
        if (slot == "zeus") return 3;
        if (slot == "knife" || slot == "melee") return 4;
        return 0;
    }

    // Two owned instances are interchangeable only when applying either one
    // produces the same result in game.
    // Two owned instances are interchangeable only when applying either one
    // produces the same result in game. Stickers and a charm are part of what a
    // weapon looks like, so instances that differ only there are not equivalent.
    bool SameRenderable(const ArmoryItem& a, const ArmoryItem& b)
    {
        return a.definition == b.definition &&
            a.quality == b.quality &&
            a.paintKit == b.paintKit &&
            a.seed == b.seed &&
            std::fabs(a.wear - b.wear) <= 0.0001f &&
            a.statTrak == b.statTrak &&
            a.stickerKit == b.stickerKit &&
            a.keychain == b.keychain &&
            a.keychainSeed == b.keychainSeed &&
            a.attachments == b.attachments;
    }

    const ArmoryItem* FindByIdLocked(uint64_t id)
    {
        for (const auto& item : g_inventoryItems)
        {
            if (item.id == id) return &item;
        }
        return nullptr;
    }

    const ArmoryItem* FindByInstanceIdLocked(const std::string& instanceId)
    {
        for (const auto& item : g_inventoryItems)
        {
            if (item.instanceId == instanceId) return &item;
        }
        return nullptr;
    }

    void FillTarget(const ArmoryItem& item, TargetSkin& target,
                    Attachments::Set* attachments = nullptr)
    {
        target = TargetSkin{};
        target.paintKit = item.paintKit;
        target.resolvedSeed = item.seed;
        target.wear = item.wear;
        target.statTrak = item.statTrak >= 0;
        target.statTrakKills = item.statTrak > 0 ? item.statTrak : 0;
        target.defIndex = item.definition;
        target.instanceId = item.instanceId;
        target.customName = item.customName;

        if (attachments)
            *attachments = item.attachments;
    }

    // Rebuilds both derived indexes from the committed inventory. Caller holds
    // g_mutex. Cheap enough to run on every inventory commit / equipment reload.
    void RebuildIndexesLocked()
    {
        g_equippedBySlot.clear();
        g_equippedKnife.clear();
        g_equippedBySlotName.clear();
        g_definitionGroups.clear();

        for (const auto& item : g_inventoryItems)
        {
            DefinitionGroup& group = g_definitionGroups[item.definition];
            if (group.count == 0)
            {
                group.id = item.id;
            }
            else if (group.equivalent)
            {
                const ArmoryItem* first = FindByIdLocked(group.id);
                if (!first || !SameRenderable(*first, item))
                    group.equivalent = false;
            }
            ++group.count;
        }

        int resolved = 0;
        int unresolved = 0;
        int duplicateSlots = 0;
        int slotAssignments = 0;

        for (const auto& assignment : g_assignments)
        {
            const int team = TeamNumberFor(assignment.team);
            if (!team) continue;

            const ArmoryItem* item = FindByInstanceIdLocked(assignment.instanceId);
            if (!item)
            {
                ++unresolved;
                continue;
            }

            ++resolved;

            if (IsKnifeAssignment(assignment))
            {
                if (!g_equippedKnife.emplace(static_cast<uint32_t>(team), item->id).second)
                    ++duplicateSlots;
            }
            else if (const uint16_t slotCode = SlotNameCode(assignment.slot))
            {
                if (!g_equippedBySlotName.emplace(SlotKey(team, slotCode), item->id).second)
                    ++duplicateSlots;
                ++slotAssignments;
            }
            else
            {
                if (!g_equippedBySlot.emplace(SlotKey(team, item->definition), item->id).second)
                    ++duplicateSlots;
            }
        }

        Log("[armory-equipment] index: assignments=%zu resolved=%d unresolved=%d conflicts=%d definitions=%zu slots=%d",
            g_assignments.size(), resolved, unresolved, duplicateSlots,
            g_definitionGroups.size(), slotAssignments);
    }

    void StartEquipmentWatcher()
    {
        static std::atomic<bool> started{ false };
        if (started.exchange(true))
            return;

        g_equipmentPath = g_bridgeDirectory + "armory-equipment.json";
        Log("[armory-equipment] watching for loadout assignments: %s",
            g_equipmentPath.c_str());

        std::thread([]()
        {
            FILETIME lastWrite{};
            ULONGLONG lastSize = 0;
            bool haveBaseline = false;

            for (;;)
            {
                Sleep(2000);

                WIN32_FILE_ATTRIBUTE_DATA info{};
                if (!GetFileAttributesExA(g_equipmentPath.c_str(), GetFileExInfoStandard, &info))
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
                if (!ReadFileText(g_equipmentPath, text))
                {
                    Log("[armory-equipment] reload skipped: file unreadable");
                    continue;
                }

                std::vector<EquipmentAssignment> assignments;
                if (!ParseAssignments(text, assignments))
                {
                    Log("[armory-equipment] reload skipped: malformed equipment document");
                    continue;
                }

                {
                    std::lock_guard<std::mutex> lock(g_mutex);
                    g_assignments = std::move(assignments);
                    RebuildIndexesLocked();
                }

                Log("[armory-equipment] reloaded equipment document");
            }
        }).detach();
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
                std::string profileId;
                int inventoryRevision = 0;
                if (!ParseItems(text, items, profileId, inventoryRevision))
                {
                    Log("[armory-inventory] reload skipped: malformed inventory document");
                    continue;
                }

                const size_t count = items.size();
                {
                    std::lock_guard<std::mutex> lock(g_mutex);
                    g_profileId = profileId;
                    g_inventoryRevision = inventoryRevision;
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

                // Stickers and the charm can change without the item id moving,
                // so a retained item still has to match the projection.
                Attachments::Set current;
                if (LootSOCache::ReadAttachments(item.id, current) &&
                    current == item.attachments)
                    continue;

                if (LootSOCache::SyncAttachments(item.id, item.attachments))
                {
                    char text[256]{};
                    Attachments::Describe(item.attachments, text, sizeof(text));
                    Log("[armory-inventory] attachments synced on %016llX: %s",
                        static_cast<unsigned long long>(item.id), text);
                }
                else
                {
                    Log("[armory-inventory] attachments could not be synced on %016llX",
                        static_cast<unsigned long long>(item.id));
                }
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
            request.attachments = item.attachments;

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

        // Equipment assignments resolve against the committed inventory, so
        // both derived indexes are rebuilt together with it.
        RebuildIndexesLocked();

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

    bool SnapshotManagedItems(std::vector<ManagedItem>& out)
    {
        std::lock_guard<std::mutex> lock(g_mutex);

        out.clear();
        out.reserve(g_inventoryItems.size());

        for (const auto& item : g_inventoryItems)
        {
            ManagedItem managed;
            managed.id = item.id;
            managed.instanceId = item.instanceId;
            managed.definition = item.definition;
            managed.stickerKit = item.stickerKit;
            managed.keychain = item.keychain;
            managed.keychainSeed = item.keychainSeed;
            managed.wear = item.wear;
            managed.attachments = item.attachments;
            out.push_back(std::move(managed));
        }

        return true;
    }

    bool SessionInfo(std::string& profileId, int& inventoryRevision)
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        profileId = g_profileId;
        inventoryRevision = g_inventoryRevision;
        return !g_profileId.empty();
    }

    std::string BridgeDirectory()
    {
        return g_bridgeDirectory;
    }

    // Exact projected-item lookup by SOCache ID. Kept for diagnostics and any
    // future path that holds a projected instance ID directly.
    bool GetTargetForItemId(uint64_t itemId, TargetSkin& target)
    {
        if (!itemId) return false;
        std::lock_guard<std::mutex> lock(g_mutex);
        for (const auto& item : g_inventoryItems)
        {
            if (item.id != itemId) continue;
            target = TargetSkin{};
            target.paintKit = item.paintKit;
            target.resolvedSeed = item.seed;
            target.wear = item.wear;
            target.statTrak = item.statTrak >= 0;
            target.statTrakKills = item.statTrak > 0 ? item.statTrak : 0;
            target.defIndex = item.definition;
            target.instanceId = item.instanceId;
            target.customName = item.customName;
            return true;
        }
        return false;
    }

    // Only the exact item selected in CS2's native Loadout is eligible.
    // No Loadout Builder assignment or definition-only fallback may choose an
    // otherwise unselected Armory item.
    ArmoryMatch ResolveTargetForWeapon(
        uint16_t definition,
        uint8_t teamNumber,
        bool knife,
        TargetSkin& target,
        std::string& detail,
        Attachments::Set* attachments)
    {
        target = TargetSkin{};
        detail.clear();
        if (attachments) *attachments = Attachments::Set{};

        if (!definition)
        {
            detail = "no definition";
            return ArmoryMatch::None;
        }

        const int team = (teamNumber == 2) ? 2 : (teamNumber == 3) ? 3 : 0;
        if (!team)
        {
            detail = "team unknown";
            return ArmoryMatch::None;
        }

        std::lock_guard<std::mutex> lock(g_mutex);
        if (g_inventoryItems.empty())
        {
            detail = "no projected inventory";
            return ArmoryMatch::None;
        }

        const char* apiTeam = TeamApiName(team);
        const uint64_t equippedId = knife
            ? LoadoutApi::EquippedItemId(apiTeam, "melee")
            : LoadoutApi::EquippedItemIdForDefinition(apiTeam, definition);

        if (!equippedId)
        {
            detail = "no native CS2 item selected in this slot";
            return ArmoryMatch::None;
        }

        const ArmoryItem* item = FindByIdLocked(equippedId);
        if (!item)
        {
            char label[32]{};
            DefinitionLabel(definition, label);
            NoteForeignEquipped(team, knife ? "melee" : label, equippedId);
            detail = "native selection is not an item in the active Armory profile";
            return ArmoryMatch::None;
        }

        if (!knife && item->definition != definition)
        {
            detail = "native item definition does not match the live weapon";
            return ArmoryMatch::None;
        }

        FillTarget(*item, target, attachments);
        char why[128]{};
        snprintf(why, sizeof(why), "native item instance %016llX",
            static_cast<unsigned long long>(item->id));
        detail = why;
        return ArmoryMatch::EquippedInGame;
    }

    // Non-weapon slots also resolve only through CS2's native selection.
    // Zeus uses its own definition to ask CS2 for the actual slot name.
    ArmoryMatch ResolveTargetForSlot(
        const char* slot,
        uint8_t teamNumber,
        TargetSkin& target,
        std::string& detail)
    {
        target = TargetSkin{};
        detail.clear();

        const int team = (teamNumber == 2) ? 2 : (teamNumber == 3) ? 3 : 0;
        if (!team)
        {
            detail = "team unknown";
            return ArmoryMatch::None;
        }

        const char* apiTeam = TeamApiName(team);
        const char* nativeSlot = LoadoutApi::NativeSlotName(slot);
        std::string resolvedSlot;
        if (!nativeSlot && slot && std::strcmp(slot, "zeus") == 0)
        {
            if (LoadoutApi::SlotForDefinition(apiTeam, 31, resolvedSlot))
                nativeSlot = resolvedSlot.c_str();
        }

        if (!nativeSlot)
        {
            detail = "unknown native slot";
            return ArmoryMatch::None;
        }

        std::lock_guard<std::mutex> lock(g_mutex);
        if (g_inventoryItems.empty())
        {
            detail = "no projected inventory";
            return ArmoryMatch::None;
        }

        const uint64_t equippedId =
            LoadoutApi::EquippedItemId(apiTeam, nativeSlot);
        if (!equippedId)
        {
            detail = "no native CS2 item selected in this slot";
            return ArmoryMatch::None;
        }

        const ArmoryItem* item = FindByIdLocked(equippedId);
        if (!item)
        {
            NoteForeignEquipped(team, nativeSlot, equippedId);
            detail = "native selection is not an item in the active Armory profile";
            return ArmoryMatch::None;
        }

        if (slot && std::strcmp(slot, "zeus") == 0 && item->definition != 31)
        {
            detail = "native equipment slot does not contain the Zeus";
            return ArmoryMatch::None;
        }

        FillTarget(*item, target);
        char why[160]{};
        snprintf(why, sizeof(why), "native item %s instance %016llX",
            nativeSlot, static_cast<unsigned long long>(item->id));
        detail = why;
        return ArmoryMatch::EquippedInGame;
    }
}
