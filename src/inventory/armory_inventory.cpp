// n1ssan-dll / src/inventory/armory_inventory.cpp
// Watches <bridge>/armory-inventory.json and creates the described items in the
// game's inventory on the game thread, outside an active match.

#include "inventory/armory_inventory.h"

#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "inventory/loadout_api.h"
#include "inventory/native_equipment.h"
#include "diagnostics/armory_status.h"
#include "inventory/loot_socache.h"
#include "config/offsets.h"
#include "sdk/item_view.h"

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
#include <unordered_set>
#include <vector>

namespace
{
    struct ArmoryItem
    {
        std::string instanceId;
        // When the Armory added this instance, in milliseconds. The projected id
        // carries it (StableIdFor), because CS2 lists the inventory by item id:
        // this is what keeps every Armory item above Valve's own and the newest
        // of them first, the way Lootline's ID_BASE ids do.
        uint64_t    createdAtMs = 0;
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
        // A music kit's anthem ("music id"); 0 for every other item.
        int         musicKit = 0;
        // An unsealed graffiti's charges ("sprays remaining") and colour
        // variant ("spray tint id", 1-19; 0 = the pattern's default colour).
        int         spraysRemaining = 0;
        int         sprayTint = 0;
        int         keychain = 0;
        int         keychainSeed = 0;
        int         keychainSticker = 0;   // a Slab's sealed sticker
        // Lootline's tools: a Charm Detachment Pack carries how many
        // detachments it gives (CS2's "items count") and a named Storage Unit
        // carries its label date, so CS2 offers "put in" straight away instead
        // of asking for a name first. Neither is part of StableIdFor: they must
        // not recreate the item.
        int         itemsCount = 0;
        uint32_t    modificationDate = 0;
        // A container drop's "Tradable After" date (attribute 75); 0 = none.
        uint32_t    tradableAfter = 0;
        // An agent's model path from the Armory; empty keeps its own model.
        std::string modelPath;
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
    std::atomic<uint64_t> g_adoptionGeneration{ 0 };
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

    // The id the projection had before v7.11: a hash of the instance and its
    // shape, with no notion of order. Kept only to recognise the items CS2 was
    // already given under it, so the delivered record and the Storage Units can
    // be carried across the change instead of being lost.
    uint64_t LegacyIdFor(const ArmoryItem& item)
    {
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
        HashBytes(hash, &item.keychainSticker, sizeof(item.keychainSticker));

        return 0x9000000000000000ull | (hash & 0x0FFFFFFFFFFFFFFFull);
    }

    // CS2's inventory is a list ordered by item id, newest first - which is why
    // every Valve item's id grows over time, and why Lootline projects its items
    // with `ID_BASE 0x7000000000000000` and a timestamp in the high bits
    // ("every id from ID_BASE up is Lootline's (Valve's are far below)",
    // unboxer.cpp:56, :1251). Without that, an Armory item landed wherever its
    // hash said: the group was at the top, but a newly added item could appear
    // anywhere inside it.
    //
    // The id is still stable for an unchanged profile - the instance's creation
    // time and its shape never change - so CS2's equipment references and the
    // Support/Storage bookkeeping stay valid. Bits 12..53 are the creation
    // millisecond, the low 12 bits keep two items added in the same millisecond
    // apart, and bits 60/63 keep every Armory id above Valve's range.
    uint64_t StableIdFor(const ArmoryItem& item)
    {
        const uint64_t hash = LegacyIdFor(item) & 0xFFFull;

        if (item.createdAtMs == 0)
            return 0x9000000000000000ull | hash;   // no date: the hash alone, as before

        const uint64_t created = item.createdAtMs & 0x000FFFFFFFFFFFFull;
        return 0x9000000000000000ull | (created << 12) | hash;
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

            if (ExtractNumber(object, "createdAtMs", number) && number > 0.0)
                item.createdAtMs = static_cast<uint64_t>(number);

            if (ExtractNumber(object, "quality", number)) item.quality = static_cast<int>(number);
            if (ExtractNumber(object, "rarity", number)) item.rarity = static_cast<int>(number);
            if (ExtractNumber(object, "paintKit", number)) item.paintKit = static_cast<int>(number);
            if (ExtractNumber(object, "seed", number)) item.seed = static_cast<int>(number);
            if (ExtractNumber(object, "float", number)) item.wear = static_cast<float>(number);
            if (ExtractNumber(object, "stickerKit", number)) item.stickerKit = static_cast<int>(number);
            if (ExtractNumber(object, "musicKit", number)) item.musicKit = static_cast<int>(number);
            if (ExtractNumber(object, "spraysRemaining", number)) item.spraysRemaining = static_cast<int>(number);
            if (ExtractNumber(object, "sprayTint", number)) item.sprayTint = static_cast<int>(number);
            if (ExtractNumber(object, "keychain", number)) item.keychain = static_cast<int>(number);
            if (ExtractNumber(object, "keychainSeed", number)) item.keychainSeed = static_cast<int>(number);
            if (ExtractNumber(object, "keychainSticker", number)) item.keychainSticker = static_cast<int>(number);
            if (ExtractNumber(object, "itemsCount", number)) item.itemsCount = static_cast<int>(number);
            if (ExtractNumber(object, "modificationDate", number) && number > 0.0)
                item.modificationDate = static_cast<uint32_t>(number);
            if (ExtractNumber(object, "tradableAfter", number) && number > 0.0)
                item.tradableAfter = static_cast<uint32_t>(number);

            ExtractString(object, "modelPath", item.modelPath);

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

            // The projection owns the item's shape: graffiti arrive already
            // unsealed (1349) with their pattern, tint and charges, music kits
            // with their anthem. Nothing is rewritten here, so this reader stays
            // a plain reader.
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
        // Per slot, not one global "last". Two slots answering differently every
        // frame flipped a single filter back and forth, so both lines were written
        // on every frame - and Log() flushes the file on each call, which stalls
        // the frame that runs this. A slot now speaks only when its own answer
        // changes.
        struct Slot
        {
            int         team = 0;
            std::string what;
            uint64_t    itemId = 0;
        };

        static std::vector<Slot> seen;

        const std::string key = what ? std::string(what) : std::string();

        bool known = false;

        for (Slot& slot : seen)
        {
            if (slot.team != team || slot.what != key)
                continue;

            if (slot.itemId == itemId)
                return;

            slot.itemId = itemId;
            known = true;
            break;
        }

        if (!known)
            seen.push_back(Slot{team, key, itemId});

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
            a.keychainSticker == b.keychainSticker &&
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
        // The Bridge projects a Souvenir as quality 12 (armory-inventory.ts).
        // Carry it into the live target: the apply passes write the view's
        // quality from this, and without the flag every Souvenir gun was
        // painted as quality 0 in game.
        target.souvenir = item.quality == 12;
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
            std::string lastAppliedText;

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

                // The Bridge re-projects this document after every Armory read
                // or merge, and a rewrite gets a new timestamp even when the
                // bytes are identical. Re-staging identical content made the
                // adapter below remove and re-create every sticker and charm,
                // which is the flickering attachments and the inventory
                // stutter. Content decides, not the timestamp.
                if (text == lastAppliedText)
                    continue;

                std::vector<ArmoryItem> items;
                std::string profileId;
                int inventoryRevision = 0;
                if (!ParseItems(text, items, profileId, inventoryRevision))
                {
                    Log("[armory-inventory] reload skipped: malformed inventory document");
                    continue;
                }

                lastAppliedText = text;

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

    // True when a sticker or charm tool already carries the kit its projection
    // names. CS2 draws the tool's card from that attribute, so re-creating such
    // an item changes nothing - and re-creating every one of them was ~60 item
    // creations on the game thread each time the Bridge re-projected the
    // inventory (the quarter-second freeze every few minutes). Read-only.
    static bool ToolCarriesProjection(const ArmoryItem& item)
    {
        Attachments::Set current;
        if (!LootSOCache::ReadAttachments(item.id, current))
            return false;

        if (item.definition == 1209)
        {
            return item.stickerKit > 0 && current.stickers[0].present &&
                current.stickers[0].kit == item.stickerKit;
        }

        if (item.definition == 1355)
        {
            if (item.keychain <= 0 || !current.charm.present ||
                current.charm.kit != item.keychain)
                return false;

            return item.keychainSticker <= 0 ||
                (current.charm.hasSticker &&
                 current.charm.sticker == item.keychainSticker);
        }

        return false;
    }

    // ---- items CS2 has already been given ----

    // An item is "new" only the first time it reaches CS2. The projection is
    // rebuilt on every Apply and on every start, so the answer has to outlive
    // the process: without this file each rebuild marked the whole profile NEW
    // again and the inventory came back covered in badges.
    struct DeliveredIds
    {
        bool loaded = false;
        bool dirty = false;
        std::unordered_set<uint64_t> ids;
    };

    DeliveredIds g_delivered;

    std::string DeliveredPath()
    {
        if (g_bridgeDirectory.empty())
            return "armory-new-items.json";

        const char last = g_bridgeDirectory.back();

        return (last == '\\' || last == '/')
            ? g_bridgeDirectory + "armory-new-items.json"
            : g_bridgeDirectory + "\\armory-new-items.json";
    }

    void LoadDelivered()
    {
        if (g_delivered.loaded)
            return;

        g_delivered.loaded = true;

        std::ifstream file(DeliveredPath(), std::ios::binary);
        if (!file)
        {
            Log("[armory-inventory] no delivered-item record yet - this profile's items arrive without NEW badges");
            return;
        }

        std::string text;
        char buffer[512];

        while (file.read(buffer, sizeof(buffer)) || file.gcount() > 0)
            text.append(buffer, static_cast<size_t>(file.gcount()));

        for (size_t i = 0; i < text.size();)
        {
            if (text[i] >= '0' && text[i] <= '9')
            {
                uint64_t value = 0;

                while (i < text.size() && text[i] >= '0' && text[i] <= '9')
                    value = value * 10 + static_cast<uint64_t>(text[i++] - '0');

                if (value)
                    g_delivered.ids.insert(value);
            }
            else
            {
                ++i;
            }
        }

        Log("[armory-inventory] %zu item(s) have already reached CS2", g_delivered.ids.size());
    }

    void SaveDelivered()
    {
        if (!g_delivered.dirty)
            return;

        g_delivered.dirty = false;

        const std::string path = DeliveredPath();
        const std::string temporary = path + ".tmp";

        {
            std::ofstream file(temporary, std::ios::binary | std::ios::trunc);

            if (!file)
            {
                Log("[armory-inventory] cannot write %s", temporary.c_str());
                return;
            }

            file << "{\n  \"source\": \"n1ssan-dll\",\n  \"ids\": [";

            bool first = true;

            for (uint64_t id : g_delivered.ids)
            {
                file << (first ? "\n    " : ",\n    ") << id;
                first = false;
            }

            file << (first ? "]\n}\n" : "\n  ]\n}\n");
        }

        if (!MoveFileExA(temporary.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING))
        {
            Log("[armory-inventory] cannot replace %s (error %lu)", path.c_str(), GetLastError());
            DeleteFileA(temporary.c_str());
        }
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

        // Lootline marks an item NEW only when it is a normal addition; a whole
        // import at once arrives without the popup for every single item
        // ("not NEW (too many at once)", unboxer.cpp AddItem). The same rule
        // here, per item and against the delivered record: an item CS2 has been
        // given before is never new again, however often the projection is
        // rebuilt (a first start records everything without badges).
        LoadDelivered();

        // v7.11 gave the ids an order (StableIdFor). An item CS2 was already
        // given under the old hash id is the same item, so the delivered record
        // is carried over: without this the whole profile comes back covered in
        // NEW badges once, which is exactly what the record exists to prevent.
        for (const ArmoryItem& item : g_staged)
        {
            const uint64_t legacy = LegacyIdFor(item);

            if (legacy != item.id && g_delivered.ids.count(legacy) != 0 &&
                g_delivered.ids.count(item.id) == 0)
            {
                g_delivered.ids.insert(item.id);
                g_delivered.dirty = true;
            }
        }

        int missing = 0;
        int unknown = 0;

        for (const ArmoryItem& item : g_staged)
        {
            if (!LootSOCache::HasItem(item.id))
                ++missing;

            if (g_delivered.ids.count(item.id) == 0)
                ++unknown;
        }

        constexpr int MAX_NEW_AT_ONCE = 16;
        const bool allowNew = unknown > 0 && unknown <= MAX_NEW_AT_ONCE;

        Log("[armory-inventory] %d item(s) missing from the cache, %d never delivered before, arrives as new: %s",
            missing, unknown,
            allowNew ? "yes" : (unknown > MAX_NEW_AT_ONCE ? "no (too many at once)" : "no"));

        // Each item is created from its own projection. Nothing is linked: a
        // Storage Unit holds nothing on this side, because CS2 keeps what the
        // player puts inside it, so no item has to wait for another one.
        for (const ArmoryItem& item : g_staged)
        {
            desiredIds.push_back(item.id);

            // A weapon has to keep its SOCache object, because CS2's native
            // Loadout points at it, so it is retained and only its attributes are
            // synced. A sticker, charm, graffiti or music kit is only ever
            // referenced by the gun it is attached to (or the slot it is equipped
            // in), and CS2 draws its card and resolves its kit once, when the item
            // arrives: patching the kit onto an item the cache already held leaves
            // the card blank (the inventory then showed every sticker and charm
            // empty, and a graffiti from an earlier build stayed sealed). So those
            // are replaced instead, which hands CS2 a fresh item carrying its kit
            // from the start - the same result as removing one in the Armory and
            // adding it again.
            // A sticker or charm tool that already carries its projected kit is
            // left in the cache: removing and re-creating it only costs the game
            // thread, and the card it draws is the same either way. A graffiti or
            // music kit is still replaced, because its tint, charges and anthem
            // live in attributes this check does not read.
            const bool toolIdentityKept =
                (item.definition == 1209 || item.definition == 1355) &&
                LootSOCache::HasItem(item.id) && ToolCarriesProjection(item);

            if (LootSOCache::HasItem(item.id) && !toolIdentityKept &&
                (item.definition == 1209 || item.definition == 1355 ||
                 item.definition == 1349 || item.definition == 1314))
            {
                if (LootSOCache::Remove(item.id))
                {
                    Log("[armory-inventory] recreated sticker/charm id=%016llX def=%u",
                        static_cast<unsigned long long>(item.id), item.definition);
                }
                else
                {
                    Log("[armory-inventory] could not recreate sticker/charm id=%016llX def=%u",
                        static_cast<unsigned long long>(item.id), item.definition);
                }
            }

            if (LootSOCache::HasItem(item.id))
            {
                Log("[armory-inventory] retained item id=%016llX def=%u",
                    static_cast<unsigned long long>(item.id), item.definition);

                // The tool already carries the kit its projection names: there is
                // nothing to write, and the attachment sync below must not run on
                // it (the tool's kit lives in the very slot that sync clears).
                if (toolIdentityKept)
                    continue;

                // A Storage Unit keeps its id, so its count is rewritten in place
                // instead of the unit being recreated (which would drop the
                // container reference every stored item holds).
                // The name goes on before the item is told it changed: the
                // notify inside the write is what rebuilds the card, and writing
                // the name after telling CS2 about an item that still carried the
                // old label left the card drawing the name it was created with,
                // so an Armory rename never showed in game.
                //
                // Every retained item, not only a Storage Unit: a retained item
                // is never re-created, so the name written when it first arrived
                // stayed the only one CS2 ever had, and a skin or knife renamed
                // in the Armory kept the name (or the empty one) it was added
                // with. The write goes through LootSOCache, which resolves the
                // view CS2 reads a name from and notifies the inventory after.
                //
                // An empty Armory label must not wipe a name the player gave the
                // item in CS2 itself (Lootline's own hint: "give it a name on the
                // right, or name it in CS2"). Only a label the Armory has is
                // written.
                if (!item.customName.empty())
                {
                    std::string onItem;

                    if (!LootSOCache::ReadCustomName(item.id, onItem) || onItem != item.customName)
                    {
                        if (LootSOCache::SetCustomNameById(item.id, item.customName))
                        {
                            Log("[armory-inventory] name \"%s\" written on retained id=%016llX",
                                item.customName.c_str(),
                                static_cast<unsigned long long>(item.id));
                        }
                        else
                        {
                            Log("[armory-inventory] name \"%s\" could not be written on retained id=%016llX",
                                item.customName.c_str(),
                                static_cast<unsigned long long>(item.id));
                        }
                    }
                }

                if (item.definition == 1201)
                {
                    LootSOCache::SetCasketInfo(item.id, item.itemsCount,
                        item.modificationDate);

                    Log("[socache] storage unit retained id=%016llX items=%d name=\"%s\"",
                        static_cast<unsigned long long>(item.id), item.itemsCount,
                        item.customName.c_str());
                }

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
            request.asNew = allowNew && g_delivered.ids.count(item.id) == 0;
            request.id = item.id;
            request.definition = item.definition;
            request.quality = item.quality;
            request.rarity = item.rarity;
            request.paintKit = item.paintKit;
            request.seed = item.seed;
            request.wear = item.wear;
            request.statTrak = item.statTrak;
            request.stickerKit = item.stickerKit;
            request.musicKit = item.musicKit;
            request.spraysRemaining = item.spraysRemaining;
            request.sprayTint = item.sprayTint;
            request.keychain = item.keychain;
            request.keychainSeed = item.keychainSeed;
            request.keychainSticker = item.keychainSticker;
            request.itemsCount = item.itemsCount;
            request.modificationDate = item.modificationDate;
            request.tradableAfter = item.tradableAfter;
            request.attachments = item.attachments;
            request.customName = item.customName;

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
        g_adoptionGeneration.fetch_add(1);

        // Equipment assignments resolve against the committed inventory, so
        // both derived indexes are rebuilt together with it.
        RebuildIndexesLocked();

        Log("[armory-inventory] replacement committed: desired=%zu created=%zu retained=%zu removed=%d removeFailed=%d",
            desiredIds.size(), createdIds.size(), desiredIds.size() - createdIds.size(),
            removed, removeFailed);

        // Everything the committed projection carries has now reached CS2: the
        // next Apply or start must not call it new again.
        for (uint64_t id : desiredIds)
        {
            if (g_delivered.ids.insert(id).second)
                g_delivered.dirty = true;
        }

        SaveDelivered();

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
            managed.legacyId = LegacyIdFor(item);
            managed.instanceId = item.instanceId;
            managed.definition = item.definition;
            managed.quality = item.quality;
            managed.rarity = item.rarity;
            managed.paintKit = item.paintKit;
            managed.seed = item.seed;
            managed.statTrak = item.statTrak;
            managed.musicKit = item.musicKit;
            managed.spraysRemaining = item.spraysRemaining;
            managed.stickerKit = item.stickerKit;
            managed.sprayTint = item.sprayTint;
            managed.keychain = item.keychain;
            managed.keychainSeed = item.keychainSeed;
            managed.keychainSticker = item.keychainSticker;
            managed.wear = item.wear;
            managed.attachments = item.attachments;
            managed.customName = item.customName;
            managed.tradableAfter = item.tradableAfter;
            managed.modelPath = item.modelPath;
            out.push_back(std::move(managed));
        }

        return true;
    }

    bool FindManaged(uint64_t itemId, ManagedItem& out)
    {
        if (!itemId) return false;

        std::lock_guard<std::mutex> lock(g_mutex);

        for (const auto& item : g_inventoryItems)
        {
            if (item.id != itemId) continue;

            out = ManagedItem{};
            out.id = item.id;
            out.legacyId = LegacyIdFor(item);
            out.instanceId = item.instanceId;
            out.definition = item.definition;
            out.quality = item.quality;
            out.rarity = item.rarity;
            out.paintKit = item.paintKit;
            out.seed = item.seed;
            out.statTrak = item.statTrak;
            out.musicKit = item.musicKit;
            out.spraysRemaining = item.spraysRemaining;
            out.stickerKit = item.stickerKit;
            out.sprayTint = item.sprayTint;
            out.keychain = item.keychain;
            out.keychainSeed = item.keychainSeed;
            out.keychainSticker = item.keychainSticker;
            out.wear = item.wear;
            out.attachments = item.attachments;
            out.customName = item.customName;
            out.tradableAfter = item.tradableAfter;
            out.modelPath = item.modelPath;
            return true;
        }

        return false;
    }

    // The projected item that carried `legacyId` before v7.11's id change.
    // Callers that persisted an id (a Storage Unit's membership, an acknowledgement
    // record) use this to find the same item again instead of losing it.
    bool FindManagedByLegacyId(uint64_t legacyId, ManagedItem& out)
    {
        if (!legacyId) return false;

        std::lock_guard<std::mutex> lock(g_mutex);

        for (const auto& item : g_inventoryItems)
        {
            if (LegacyIdFor(item) != legacyId) continue;

            out = ManagedItem{};
            out.id = item.id;
            out.legacyId = legacyId;
            out.instanceId = item.instanceId;
            out.definition = item.definition;
            out.quality = item.quality;
            out.rarity = item.rarity;
            out.paintKit = item.paintKit;
            out.seed = item.seed;
            out.statTrak = item.statTrak;
            out.musicKit = item.musicKit;
            out.spraysRemaining = item.spraysRemaining;
            out.stickerKit = item.stickerKit;
            out.sprayTint = item.sprayTint;
            out.keychain = item.keychain;
            out.keychainSeed = item.keychainSeed;
            out.keychainSticker = item.keychainSticker;
            out.wear = item.wear;
            out.attachments = item.attachments;
            out.customName = item.customName;
            out.tradableAfter = item.tradableAfter;
            out.modelPath = item.modelPath;
            return true;
        }

        return false;
    }

    int CountManagedByDefinition(uint16_t definition)
    {
        std::lock_guard<std::mutex> lock(g_mutex);

        int count = 0;
        for (const auto& item : g_inventoryItems)
        {
            if (item.definition == definition) ++count;
        }

        return count;
    }

    uint64_t AdoptionGeneration()
    {
        return g_adoptionGeneration.load();
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
            target.souvenir = item.quality == 12;
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
        Attachments::Set* attachments,
        uint64_t* liveItemId)
    {
        target = TargetSkin{};
        detail.clear();
        if (attachments) *attachments = Attachments::Set{};
        if (liveItemId) *liveItemId = 0;

        if (!definition)
        {
            detail = "no definition";
            return ArmoryMatch::None;
        }

        const int team = (teamNumber == 2) ? 2 : (teamNumber == 3) ? 3 : 0;
        if (!team)
        {
            detail = "team unknown";
            ArmoryStatus::NoteSlot("", "", 0,
                ArmoryStatus::State::UnknownSlot, detail.c_str());
            return ArmoryMatch::None;
        }

        std::lock_guard<std::mutex> lock(g_mutex);
        if (g_inventoryItems.empty())
        {
            detail = "no projected inventory";
            return ArmoryMatch::None;
        }

        const char* apiTeam = TeamApiName(team);
        std::string nativeSlot;
        if (knife) nativeSlot = "melee";
        else LoadoutApi::SlotForDefinition(apiTeam, definition, nativeSlot);

        const uint64_t equippedId = knife
            ? LoadoutApi::EquippedItemId(apiTeam, "melee")
            : LoadoutApi::EquippedItemIdForDefinition(apiTeam, definition);

        const ArmoryItem* item =
            equippedId ? FindByIdLocked(equippedId) : nullptr;
        const char* origin = "native item";
        bool fromSaved = false;

        // CS2 re-sends the real loadout during a match (round change, respawn,
        // inventory update), which puts the vanilla item back in the slot. The
        // Armory's saved selection is still what the player asked for, so the
        // weapon keeps its skin instead of reverting until the next restore.
        //
        // The same fallback is used when the native slot names a projected item
        // of another definition: the saved selection for this team slot is still
        // what the player asked for, and it is only used when its definition
        // matches the weapon actually in hand.
        const bool nativeMismatch =
            item && !knife && item->definition != definition;

        if ((!item || nativeMismatch) && !nativeSlot.empty())
        {
            std::string saved;
            if (NativeEquipment::SavedInstanceForSlot(
                    apiTeam, nativeSlot.c_str(), saved))
            {
                const ArmoryItem* savedItem = FindByInstanceIdLocked(saved);

                // The saved slot may now hold another weapon of the same slot
                // (a different pistol, say); painting it on this entity would be
                // wrong, so only a matching definition is used.
                if (savedItem && (knife || savedItem->definition == definition))
                {
                    item = savedItem;
                    origin = "saved armory selection";
                    fromSaved = true;
                }
            }
        }

        if (!item)
        {
            ArmoryStatus::State state = ArmoryStatus::State::NoSelection;

            if (equippedId)
            {
                char label[32]{};
                DefinitionLabel(definition, label);
                NoteForeignEquipped(team, knife ? "melee" : label, equippedId);
                detail = "native selection is not an item in the active Armory profile";
                state = ArmoryStatus::State::ForeignItem;
            }
            else
            {
                detail = "no native CS2 item selected in this slot";
            }

            ArmoryStatus::NoteSlot(apiTeam, nativeSlot.c_str(), definition,
                state, detail.c_str());
            return ArmoryMatch::None;
        }

        if (!knife && item->definition != definition)
        {
            detail = "native item definition does not match the live weapon";
            ArmoryStatus::NoteSlot(apiTeam, nativeSlot.c_str(), definition,
                ArmoryStatus::State::DefinitionMismatch, detail.c_str());
            return ArmoryMatch::None;
        }

        if (liveItemId) *liveItemId = equippedId;

        FillTarget(*item, target, attachments);
        char why[160]{};
        snprintf(why, sizeof(why), "%s %s instance %016llX",
            origin, nativeSlot.c_str(),
            static_cast<unsigned long long>(item->id));
        detail = why;
        ArmoryStatus::NoteSlot(apiTeam, nativeSlot.c_str(), definition,
            fromSaved ? ArmoryStatus::State::SavedSlot
                      : ArmoryStatus::State::Native,
            detail.c_str());
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
            ArmoryStatus::NoteSlot("", "", 0,
                ArmoryStatus::State::UnknownSlot, detail.c_str());
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
            ArmoryStatus::NoteSlot(apiTeam, "", 0,
                ArmoryStatus::State::UnknownSlot, detail.c_str());
            return ArmoryMatch::None;
        }

        const std::string slotName = nativeSlot;

        std::lock_guard<std::mutex> lock(g_mutex);
        if (g_inventoryItems.empty())
        {
            detail = "no projected inventory";
            ArmoryStatus::NoteSlot(apiTeam, slotName.c_str(), 0,
                ArmoryStatus::State::NoProjection, detail.c_str());
            return ArmoryMatch::None;
        }

        const uint64_t equippedId =
            LoadoutApi::EquippedItemId(apiTeam, slotName.c_str());

        const ArmoryItem* item =
            equippedId ? FindByIdLocked(equippedId) : nullptr;

        // Same fallback as weapons: gloves, the agent and the Zeus keep the
        // Armory selection while CS2 shows the vanilla one.
        bool fromSaved = false;
        if (!item)
        {
            std::string saved;
            if (NativeEquipment::SavedInstanceForSlot(apiTeam, slotName.c_str(), saved))
            {
                item = FindByInstanceIdLocked(saved);
                if (item) fromSaved = true;
            }
        }

        if (!item)
        {
            if (equippedId) NoteForeignEquipped(team, slotName.c_str(), equippedId);
            detail = equippedId
                ? "native selection is not an item in the active Armory profile"
                : "no native CS2 item selected in this slot";
            ArmoryStatus::NoteSlot(apiTeam, slotName.c_str(), 0,
                equippedId ? ArmoryStatus::State::ForeignItem
                           : ArmoryStatus::State::NoSelection,
                detail.c_str());
            return ArmoryMatch::None;
        }

        if (slot && std::strcmp(slot, "zeus") == 0 && item->definition != 31)
        {
            detail = "native equipment slot does not contain the Zeus";
            ArmoryStatus::NoteSlot(apiTeam, slotName.c_str(), item->definition,
                ArmoryStatus::State::DefinitionMismatch, detail.c_str());
            return ArmoryMatch::None;
        }

        FillTarget(*item, target);
        // An agent the Armory gave a model path of its own: the apply reads it
        // from here and leaves the agent alone when the model does not load.
        target.modelPath = item->modelPath;
        char why[160]{};
        snprintf(why, sizeof(why), "%s %s instance %016llX",
            fromSaved ? "saved armory selection" : "native item",
            slotName.c_str(), static_cast<unsigned long long>(item->id));
        detail = why;
        ArmoryStatus::NoteSlot(apiTeam, slotName.c_str(), item->definition,
            fromSaved ? ArmoryStatus::State::SavedSlot
                      : ArmoryStatus::State::Native,
            detail.c_str());
        return ArmoryMatch::EquippedInGame;
    }
}
