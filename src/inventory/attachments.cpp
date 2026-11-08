#include "inventory/attachments.h"

#include "diagnostics/log.h"
#include "inventory/armory_inventory.h"
#include "inventory/loot_schema.h"
#include "inventory/loot_socache.h"
#include "inventory/loot_patterns.h"
#include "memory/scanner.h"
#include "sdk/item_view.h"

#include <Windows.h>

#include <algorithm>
#include <bit>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

namespace Attachments
{
    namespace
    {
        // Attribute definition indices (items_game names). They match the ones
        // Lootline reads and writes on the 2026-09/10 client; every write also
        // resolves its definition by name, so a shifted index can only make a
        // read miss, never corrupt an item.
        constexpr uint16_t ATTR_STICKER_ID_BASE = 113;   // "sticker slot N id"
        constexpr uint16_t ATTR_STICKER_STRIDE = 4;      // id, wear, scale, rotation
        constexpr uint16_t ATTR_STICKER_OFFSET_BASE = 278; // "sticker slot N offset x/y"
        constexpr uint16_t ATTR_STICKER_SCHEMA_BASE = 290; // "sticker slot N schema"
        constexpr uint16_t ATTR_CHARM_ID = 299;          // "keychain slot 0 id"
        constexpr uint16_t ATTR_CHARM_X = 300;
        constexpr uint16_t ATTR_CHARM_Y = 301;
        constexpr uint16_t ATTR_CHARM_Z = 302;
        constexpr uint16_t ATTR_CHARM_SEED = 306;
        constexpr uint16_t ATTR_CHARM_HIGHLIGHT = 314;
        constexpr uint16_t ATTR_CHARM_STICKER = 321;

        constexpr int MAX_ATTRIBUTES = 512;
        constexpr uint64_t OBSERVE_INTERVAL_MS = 500;
        constexpr uint64_t SETTLE_MS = 400;
        constexpr int MAX_KIT = 1000000;

        bool  g_ready = false;
        bool  g_attempted = false;
        char  g_lastError[160]{};
        // Attribute definitions resolvable by name. Optional ones (a sticker's
        // schema, a charm's sealed sticker or highlight) are written only when
        // the client actually has them.
        std::unordered_map<std::string, bool> g_names;
        using ItemViewByIdFn = void* (__fastcall*)(std::uint64_t);
        using StickerIntFn = int(__fastcall*)(void*, int, int, int);
        using StickerFloatFn = float(__fastcall*)(void*, int, int, float);
        constexpr int VFUNC_ITEM_STICKER_FLOAT = 6;
        constexpr int VFUNC_ITEM_STICKER_INT = 7;
        ItemViewByIdFn g_itemViewById = nullptr;
        bool g_itemViewLookupAttempted = false;

        bool ResolveItemViewLookup()
        {
            if (g_itemViewById) return true;
            if (g_itemViewLookupAttempted) return false;
            g_itemViewLookupAttempted = true;
            const ModuleInfo client = GetClientModule();
            if (!client.valid()) return false;
            const uintptr_t address = ScanPattern(client, LootPatterns::ItemViewById);
            if (!address)
            {
                Log("[attach] Lootline ItemViewById signature not found");
                return false;
            }
            g_itemViewById = reinterpret_cast<ItemViewByIdFn>(address);
            Log("[attach] Lootline ItemViewById resolved @ %p", reinterpret_cast<void*>(address));
            return true;
        }

        bool NameOk(const char* name)
        {
            const auto found = g_names.find(name);
            return found != g_names.end() && found->second;
        }

        int IntFromBits(float value)
        {
            return std::bit_cast<int32_t>(value);
        }

        float BitsFromInt(int value)
        {
            return std::bit_cast<float>(value);
        }

        float Clamp01(float value)
        {
            if (!std::isfinite(value)) return 0.0f;
            if (value < 0.0f) return 0.0f;
            if (value > 1.0f) return 1.0f;
            return value;
        }

        void StickerName(char* out, size_t size, int slot, const char* field)
        {
            std::snprintf(out, size, "sticker slot %d %s", slot, field);
        }

        void CharmName(char* out, size_t size, const char* field)
        {
            std::snprintf(out, size, "keychain slot 0 %s", field);
        }

        bool Get(const uint16_t* defs, const float* values, int count, uint16_t def, float& out)
        {
            for (int i = 0; i < count; ++i)
            {
                if (defs[i] != def) continue;
                out = values[i];
                return true;
            }
            return false;
        }

        bool GetInt(const uint16_t* defs, const float* values, int count, uint16_t def, int& out)
        {
            float raw = 0.0f;
            if (!Get(defs, values, count, def, raw)) return false;
            const int value = IntFromBits(raw);
            out = (value < 0 || value > MAX_KIT) ? 0 : value;
            return true;
        }

        bool GetFloat(const uint16_t* defs, const float* values, int count, uint16_t def, float& out)
        {
            float raw = 0.0f;
            if (!Get(defs, values, count, def, raw)) return false;
            out = raw;
            return true;
        }

        void SetFloatAttr(EconItemAttribute_t& attribute, uint16_t def, float value)
        {
            attribute.defIndex = def;
            attribute.value = value;
            attribute.initialValue = value;
        }

        void SetIntAttr(EconItemAttribute_t& attribute, uint16_t def, int value)
        {
            SetFloatAttr(attribute, def, BitsFromInt(value));
        }

        bool SetIntByName(void* item, const char* name, int value)
        {
            return LootSchema::SetAttributeFloatByName(item, name, BitsFromInt(value));
        }

        bool SetFloatByName(void* item, const char* name, float value)
        {
            return LootSchema::SetAttributeFloatByName(item, name, value);
        }

        void DescribeSet(const Set& set, char* out, size_t size)
        {
            std::string text;
            int stickers = 0;
            for (const auto& sticker : set.stickers)
                if (sticker.present) ++stickers;

            char part[64];
            std::snprintf(part, sizeof(part), "stickers=%d", stickers);
            text = part;

            for (int slot = 0; slot < STICKER_SLOTS; ++slot)
            {
                const auto& sticker = set.stickers[slot];
                if (!sticker.present) continue;
                std::snprintf(part, sizeof(part), " [%d kit=%d wear=%.3f rot=%.1f off=%.3f,%.3f schema=%d]",
                    slot, sticker.kit, sticker.wear, sticker.rotation,
                    sticker.offsetX, sticker.offsetY, sticker.hasSchema ? sticker.schema : -1);
                text += part;
            }

            if (set.charm.present)
            {
                std::snprintf(part, sizeof(part), " charm=kit:%d seed=%d off=%.3f,%.3f,%.3f",
                    set.charm.kit, set.charm.seed, set.charm.x, set.charm.y, set.charm.z);
                text += part;
            }
            else
            {
                text += " charm=none";
            }

            std::snprintf(out, size, "%s", text.c_str());
        }

        // ---- persistence -------------------------------------------------

        struct Record
        {
            uint64_t    seq = 0;
            std::string instanceId;
            uint64_t    itemId = 0;
            Set         set;
            unsigned    stableMs = 0;
            std::string observedAt;
            std::string consumedToolInstanceId;
            bool        consumedCharm = false;
            int         sourceStickerSlot = -1;
        };

        struct Pending
        {
            Set      set;
            uint64_t firstMs = 0;
        };

        std::mutex g_stateMutex;
        std::unordered_map<uint64_t, Set> g_lastKnown;
        std::unordered_map<uint64_t, Pending> g_pending;
        std::vector<Record> g_records;
        uint64_t g_seq = 0;
        uint64_t g_lastAck = 0;
        uint64_t g_lastRun = 0;

        std::string IsoNow()
        {
            SYSTEMTIME time{};
            GetSystemTime(&time);

            char text[40]{};
            std::snprintf(text, sizeof(text), "%04u-%02u-%02uT%02u:%02u:%02u.%03uZ",
                time.wYear, time.wMonth, time.wDay,
                time.wHour, time.wMinute, time.wSecond, time.wMilliseconds);
            return text;
        }

        std::string JsonString(const std::string& value)
        {
            std::string escaped;
            escaped.reserve(value.size() + 2);
            escaped += '"';
            for (unsigned char ch : value)
            {
                switch (ch)
                {
                case '"': escaped += "\\\""; break;
                case '\\': escaped += "\\\\"; break;
                case '\\b': escaped += "\\b"; break;
                case '\\f': escaped += "\\f"; break;
                case '\\n': escaped += "\\n"; break;
                case '\\r': escaped += "\\r"; break;
                case '\\t': escaped += "\\t"; break;
                default:
                    if (ch < 0x20)
                    {
                        char code[7]{};
                        std::snprintf(code, sizeof(code), "\\u%04X", ch);
                        escaped += code;
                    }
                    else escaped += static_cast<char>(ch);
                    break;
                }
            }
            escaped += '"';
            return escaped;
        }

        void AppendStickerJson(
            std::string& json, int slot, const StickerSlot& sticker, const std::string& sourceId)
        {
            char part[320];
            std::snprintf(part, sizeof(part),
                "{\"slot\":%d,\"kitId\":%d,\"wear\":%.6f,\"scale\":%.6f,\"rotation\":%.6f,"
                "\"offsetX\":%.6f,\"offsetY\":%.6f,\"schema\":%s,\"sourceInstanceId\":",
                slot, sticker.kit, Clamp01(sticker.wear),
                sticker.scale > 0.0f ? sticker.scale : 1.0f,
                sticker.rotation, sticker.offsetX, sticker.offsetY,
                sticker.hasSchema ? std::to_string(sticker.schema).c_str() : "null");
            json += part;
            json += sourceId.empty() ? "null}" : JsonString(sourceId) + "}";
        }

        void AppendSetJson(std::string& json, const Record& record)
        {
            const Set& set = record.set;
            json += "{\"stickers\":[";
            bool first = true;
            for (int slot = 0; slot < STICKER_SLOTS; ++slot)
            {
                if (!set.stickers[slot].present) continue;
                if (!first) json += ",";
                first = false;
                const std::string source =
                    !record.consumedCharm && record.sourceStickerSlot == slot
                        ? record.consumedToolInstanceId : std::string{};
                AppendStickerJson(json, slot, set.stickers[slot], source);
            }
            json += "],\"charm\":";

            if (!set.charm.present)
            {
                json += "null}";
                return;
            }

            char part[320];
            std::snprintf(part, sizeof(part),
                "{\"kitId\":%d,\"seed\":%d,\"x\":%.6f,\"y\":%.6f,\"z\":%.6f,"
                "\"stickerKitId\":%s,\"highlightId\":%s,\"sourceInstanceId\":",
                set.charm.kit, set.charm.seed, set.charm.x, set.charm.y, set.charm.z,
                set.charm.hasSticker ? std::to_string(set.charm.sticker).c_str() : "null",
                set.charm.hasHighlight ? std::to_string(set.charm.highlight).c_str() : "null");
            json += part;
            json += record.consumedCharm && !record.consumedToolInstanceId.empty()
                ? JsonString(record.consumedToolInstanceId) + "}}"
                : "null}}";
        }

        std::string DetectionPath()
        {
            return ArmoryInventory::BridgeDirectory() + "\\armory-detected-attachments.json";
        }

        std::string AckPath()
        {
            return ArmoryInventory::BridgeDirectory() + "\\armory-attachments-ack.json";
        }

        bool WriteFileAtomic(const std::string& path, const std::string& content)
        {
            const std::string temporary = path + ".tmp";
            FILE* file = nullptr;
            if (fopen_s(&file, temporary.c_str(), "wb") != 0 || !file)
            {
                Log("[attach] cannot write %s", temporary.c_str());
                return false;
            }

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
                Log("[attach] cannot replace %s (error %lu)", path.c_str(), GetLastError());
                DeleteFileA(temporary.c_str());
                return false;
            }
            return true;
        }

        uint64_t ReadAckSeq()
        {
            const std::string path = AckPath();
            FILE* file = nullptr;
            if (fopen_s(&file, path.c_str(), "rb") != 0 || !file) return 0;

            std::string text;
            char buffer[256]{};
            size_t read = 0;
            while ((read = fread(buffer, 1, sizeof(buffer), file)) > 0)
                text.append(buffer, read);
            fclose(file);

            const size_t key = text.find("ackedSeq");
            if (key == std::string::npos) return 0;

            const size_t colon = text.find(':', key);
            if (colon == std::string::npos) return 0;

            const char* digits = text.c_str() + colon + 1;
            while (*digits == ' ' || *digits == '\t') ++digits;
            return _strtoui64(digits, nullptr, 10);
        }

        bool WriteDetectionFile(const std::string& profileId, int revision)
        {
            std::string json = "{\n";
            json += "  \"source\": \"n1ssan-dll\",\n";
            json += "  \"profileId\": " + JsonString(profileId) + ",\n";
            json += "  \"inventoryRevision\": " + std::to_string(revision) + ",\n";
            json += "  \"seq\": " + std::to_string(g_seq) + ",\n";
            json += "  \"records\": [\n";

            for (size_t i = 0; i < g_records.size(); ++i)
            {
                const Record& record = g_records[i];
                char head[192];
                std::snprintf(head, sizeof(head),
                    "    {\"seq\":%llu,\"projectedItemId\":\"%llu\","
                    "\"complete\":true,\"stableForMs\":%u,",
                    static_cast<unsigned long long>(record.seq),
                    static_cast<unsigned long long>(record.itemId), record.stableMs);
                json += head;
                json += "\"instanceId\":" + JsonString(record.instanceId);
                json += ",\"observedAt\":" + JsonString(record.observedAt);
                if (!record.consumedToolInstanceId.empty())
                {
                    json += ",\"consumedToolInstanceId\":" + JsonString(record.consumedToolInstanceId);
                    json += record.consumedCharm
                        ? ",\"consumedToolKind\":\"charm\""
                        : ",\"consumedToolKind\":\"sticker\"";
                }
                json += ",\"attachments\":";
                AppendSetJson(json, record);
                json += i + 1 == g_records.size() ? "}\n" : "},\n";
            }

            json += "  ]\n}\n";
            return WriteFileAtomic(DetectionPath(), json);
        }

        // Drops records the Bridge has merged. Returns true when the set changed.
        bool DropAcked()
        {
            const uint64_t acked = ReadAckSeq();
            if (acked <= g_lastAck) return false;
            g_lastAck = acked;

            const size_t before = g_records.size();
            g_records.erase(
                std::remove_if(g_records.begin(), g_records.end(),
                    [acked](const Record& record) { return record.seq <= acked; }),
                g_records.end());
            return g_records.size() != before;
        }
    }

    bool Set::Empty() const
    {
        if (charm.present) return false;
        for (const auto& sticker : stickers)
            if (sticker.present) return false;
        return true;
    }

    bool Set::operator==(const Set& other) const
    {
        for (int slot = 0; slot < STICKER_SLOTS; ++slot)
        {
            const StickerSlot& a = stickers[slot];
            const StickerSlot& b = other.stickers[slot];
            if (a.present != b.present) return false;
            if (!a.present) continue;
            if (a.kit != b.kit) return false;
            if (std::fabs(a.wear - b.wear) > 0.0005f) return false;
            if (std::fabs(a.scale - b.scale) > 0.0005f) return false;
            if (std::fabs(a.rotation - b.rotation) > 0.01f) return false;
            if (std::fabs(a.offsetX - b.offsetX) > 0.0005f) return false;
            if (std::fabs(a.offsetY - b.offsetY) > 0.0005f) return false;
            if (a.hasSchema != b.hasSchema) return false;
            if (a.hasSchema && a.schema != b.schema) return false;
        }

        if (charm.present != other.charm.present) return false;
        if (!charm.present) return true;

        const Charm& a = charm;
        const Charm& b = other.charm;
        if (a.kit != b.kit || a.seed != b.seed) return false;
        if (std::fabs(a.x - b.x) > 0.0005f) return false;
        if (std::fabs(a.y - b.y) > 0.0005f) return false;
        if (std::fabs(a.z - b.z) > 0.0005f) return false;
        if (a.hasSticker != b.hasSticker) return false;
        if (a.hasSticker && a.sticker != b.sticker) return false;
        if (a.hasHighlight != b.hasHighlight) return false;
        if (a.hasHighlight && a.highlight != b.highlight) return false;
        return true;
    }

    bool Initialize()
    {
        if (g_ready) return true;
        if (g_attempted) return false;
        g_attempted = true;

        // Required: without these nothing can be written or read back.
        static const char* kRequiredCharm[] = {
            "keychain slot 0 id",
            "keychain slot 0 offset x",
            "keychain slot 0 offset y",
            "keychain slot 0 offset z",
            "keychain slot 0 seed",
        };

        static const char* kRequiredSticker[] = {
            "id", "wear", "scale", "rotation", "offset x", "offset y"
        };

        static const char* kOptionalCharm[] = {
            "keychain slot 0 sticker",
            "keychain slot 0 highlight",
        };

        char name[48]{};
        const char* missing = nullptr;

        for (const char* field : kRequiredCharm)
        {
            g_names[field] = LootSchema::GetAttrDefByName(field) != nullptr;
            if (!g_names[field] && !missing) missing = field;
        }

        for (const char* field : kOptionalCharm)
            g_names[field] = LootSchema::GetAttrDefByName(field) != nullptr;

        for (int slot = 0; slot < STICKER_SLOTS; ++slot)
        {
            for (const char* field : kRequiredSticker)
            {
                StickerName(name, sizeof(name), slot, field);
                const bool found = LootSchema::GetAttrDefByName(name) != nullptr;
                g_names[name] = found;
                if (!found && !missing) missing = name;
            }

            StickerName(name, sizeof(name), slot, "schema");
            g_names[name] = LootSchema::GetAttrDefByName(name) != nullptr;
        }

        // Nothing resolved at all means the schema is not up yet, not that this
        // client lacks the attributes: allow a later retry.
        bool anyResolved = false;
        for (const auto& entry : g_names)
            anyResolved = anyResolved || entry.second;

        if (!anyResolved)
        {
            g_attempted = false;
            std::snprintf(g_lastError, sizeof(g_lastError), "schema not ready");
            return false;
        }

        if (missing)
        {
            std::snprintf(g_lastError, sizeof(g_lastError),
                "schema attribute not found: %s", missing);
            Log("[attach] %s; attachments disabled", g_lastError);
            return false;
        }

        g_ready = true;
        Log("[attach] sticker and charm attributes resolved (6 sticker slots, 1 charm)%s",
            NameOk("keychain slot 0 sticker") ? "" : " (optional charm attributes missing)");
        return true;
    }

    bool Ready()
    {
        return g_ready;
    }

    const char* LastError()
    {
        return g_lastError;
    }

    std::size_t AttributeCount(const Set& set)
    {
        std::size_t count = 0;

        for (const auto& sticker : set.stickers)
        {
            if (!sticker.present) continue;
            count += 6;                       // id, wear, scale, rotation, offset x, offset y
            if (sticker.hasSchema) ++count;
        }

        if (set.charm.present)
        {
            count += 5;                       // id, x, y, z, seed
            if (set.charm.hasSticker) ++count;
            if (set.charm.hasHighlight) ++count;
        }

        return count;
    }

    bool Read(void* econItem, Set& out)
    {
        out = Set{};
        if (!econItem) return false;

        AttributeVector_t* vector = GetAttributeVector(reinterpret_cast<uintptr_t>(econItem));
        if (!vector) return false;
        if (vector->size < 0 || vector->size > MAX_ATTRIBUTES) return false;
        if (vector->size > 0 && vector->data < 0x10000u) return false;

        uint16_t defs[MAX_ATTRIBUTES]{};
        float values[MAX_ATTRIBUTES]{};
        int count = 0;

        __try
        {
            const auto* attributes =
                reinterpret_cast<const EconItemAttribute_t*>(vector->data);
            for (int i = 0; i < vector->size; ++i)
            {
                defs[count] = attributes[i].defIndex;
                values[count] = attributes[i].value;
                ++count;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            out = Set{};
            return false;
        }

        for (int slot = 0; slot < STICKER_SLOTS; ++slot)
        {
            const uint16_t base =
                static_cast<uint16_t>(ATTR_STICKER_ID_BASE + slot * ATTR_STICKER_STRIDE);

            int kit = 0;
            if (!GetInt(defs, values, count, base, kit) || kit <= 0) continue;

            StickerSlot& sticker = out.stickers[slot];
            sticker.present = true;
            sticker.kit = kit;
            sticker.scale = 1.0f;

            GetFloat(defs, values, count, static_cast<uint16_t>(base + 1), sticker.wear);
            GetFloat(defs, values, count, static_cast<uint16_t>(base + 2), sticker.scale);
            GetFloat(defs, values, count, static_cast<uint16_t>(base + 3), sticker.rotation);
            if (sticker.scale <= 0.0f) sticker.scale = 1.0f;
            sticker.wear = Clamp01(sticker.wear);

            const uint16_t offsetX =
                static_cast<uint16_t>(ATTR_STICKER_OFFSET_BASE + slot * 2);
            GetFloat(defs, values, count, offsetX, sticker.offsetX);
            GetFloat(defs, values, count, static_cast<uint16_t>(offsetX + 1), sticker.offsetY);

            int schema = 0;
            if (GetInt(defs, values, count,
                    static_cast<uint16_t>(ATTR_STICKER_SCHEMA_BASE + slot), schema))
            {
                sticker.hasSchema = true;
                sticker.schema = schema;
            }
        }

        int charmKit = 0;
        if (GetInt(defs, values, count, ATTR_CHARM_ID, charmKit) && charmKit > 0)
        {
            Charm& charm = out.charm;
            charm.present = true;
            charm.kit = charmKit;
            GetInt(defs, values, count, ATTR_CHARM_SEED, charm.seed);
            GetFloat(defs, values, count, ATTR_CHARM_X, charm.x);
            GetFloat(defs, values, count, ATTR_CHARM_Y, charm.y);
            GetFloat(defs, values, count, ATTR_CHARM_Z, charm.z);

            int sticker = 0;
            if (GetInt(defs, values, count, ATTR_CHARM_STICKER, sticker) && sticker > 0)
            {
                charm.hasSticker = true;
                charm.sticker = sticker;
            }

            int highlight = 0;
            if (GetInt(defs, values, count, ATTR_CHARM_HIGHLIGHT, highlight) && highlight > 0)
            {
                charm.hasHighlight = true;
                charm.highlight = highlight;
            }
        }

        return true;
    }

    bool ReadStickerSlotsViaItemView(std::uint64_t itemId, Set& out)
    {
        out = Set{};
        if (!itemId || !ResolveItemViewLookup()) return false;
        __try
        {
            void* view = g_itemViewById(itemId);
            if (!view) return false;
            void** vtable = *reinterpret_cast<void***>(view);
            if (!vtable || !vtable[VFUNC_ITEM_STICKER_INT] || !vtable[VFUNC_ITEM_STICKER_FLOAT]) return false;
            const auto getInt = reinterpret_cast<StickerIntFn>(vtable[VFUNC_ITEM_STICKER_INT]);
            const auto getFloat = reinterpret_cast<StickerFloatFn>(vtable[VFUNC_ITEM_STICKER_FLOAT]);
            for (int slot = 0; slot < STICKER_SLOTS; ++slot)
            {
                StickerSlot& sticker = out.stickers[slot];
                sticker.kit = getInt(view, slot, 0, 0);
                if (sticker.kit <= 0 || sticker.kit > MAX_KIT) { sticker = StickerSlot{}; continue; }
                sticker.present = true;
                sticker.wear = Clamp01(getFloat(view, slot, 1, 0.0f));
                sticker.scale = getFloat(view, slot, 2, 1.0f);
                if (!std::isfinite(sticker.scale) || sticker.scale <= 0.0f) sticker.scale = 1.0f;
                sticker.rotation = getFloat(view, slot, 3, 0.0f);
                sticker.offsetX = getFloat(view, slot, 4, 0.0f);
                sticker.offsetY = getFloat(view, slot, 5, 0.0f);
                sticker.schema = getInt(view, slot, 6, slot);
                sticker.hasSchema = true;
            }
            Log("[attach] ItemViewById read %016llX via CS2 getters", static_cast<unsigned long long>(itemId));
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            out = Set{};
            Log("[attach] ItemViewById sticker read exception for %016llX", static_cast<unsigned long long>(itemId));
            return false;
        }
    }

    std::size_t Append(void* attributeArray, std::size_t index, const Set& set)
    {
        auto* attributes = static_cast<EconItemAttribute_t*>(attributeArray);
        if (!attributes) return index;

        for (int slot = 0; slot < STICKER_SLOTS; ++slot)
        {
            const StickerSlot& sticker = set.stickers[slot];
            if (!sticker.present) continue;

            const uint16_t base =
                static_cast<uint16_t>(ATTR_STICKER_ID_BASE + slot * ATTR_STICKER_STRIDE);
            const uint16_t offsetBase =
                static_cast<uint16_t>(ATTR_STICKER_OFFSET_BASE + slot * 2);

            SetIntAttr(attributes[index++], base, sticker.kit);
            SetFloatAttr(attributes[index++], static_cast<uint16_t>(base + 1), Clamp01(sticker.wear));
            SetFloatAttr(attributes[index++], static_cast<uint16_t>(base + 2),
                sticker.scale > 0.0f ? sticker.scale : 1.0f);
            SetFloatAttr(attributes[index++], static_cast<uint16_t>(base + 3), sticker.rotation);
            SetFloatAttr(attributes[index++], offsetBase, sticker.offsetX);
            SetFloatAttr(attributes[index++], static_cast<uint16_t>(offsetBase + 1), sticker.offsetY);

            if (sticker.hasSchema)
            {
                SetIntAttr(attributes[index++],
                    static_cast<uint16_t>(ATTR_STICKER_SCHEMA_BASE + slot), sticker.schema);
            }
        }

        if (set.charm.present)
        {
            const Charm& charm = set.charm;
            SetIntAttr(attributes[index++], ATTR_CHARM_ID, charm.kit);
            SetFloatAttr(attributes[index++], ATTR_CHARM_X, charm.x);
            SetFloatAttr(attributes[index++], ATTR_CHARM_Y, charm.y);
            SetFloatAttr(attributes[index++], ATTR_CHARM_Z, charm.z);
            SetIntAttr(attributes[index++], ATTR_CHARM_SEED, charm.seed);

            if (charm.hasSticker)
                SetIntAttr(attributes[index++], ATTR_CHARM_STICKER, charm.sticker);
            if (charm.hasHighlight)
                SetIntAttr(attributes[index++], ATTR_CHARM_HIGHLIGHT, charm.highlight);
        }

        return index;
    }

    // Sticker-only mutation, matching Lootline's SyncStickers contract:
    // never reads, clears, or rewrites keychain attributes.
    bool WriteStickerSlots(void* econItem, const Set& set, const Set* previous)
    {
        if (!econItem || !Initialize()) return false;

        bool ok = true;
        char name[48]{};

        for (int slot = 0; slot < STICKER_SLOTS; ++slot)
        {
            const StickerSlot& sticker = set.stickers[slot];
            const bool wasPresent = previous && previous->stickers[slot].present;
            if (!sticker.present && !wasPresent) continue;

            StickerName(name, sizeof(name), slot, "id");
            ok = SetIntByName(econItem, name, sticker.present ? sticker.kit : 0) && ok;
            if (!sticker.present) continue;

            StickerName(name, sizeof(name), slot, "wear");
            ok = SetFloatByName(econItem, name, Clamp01(sticker.wear)) && ok;
            StickerName(name, sizeof(name), slot, "scale");
            ok = SetFloatByName(econItem, name, sticker.scale > 0.0f ? sticker.scale : 1.0f) && ok;
            StickerName(name, sizeof(name), slot, "rotation");
            ok = SetFloatByName(econItem, name, sticker.rotation) && ok;
            StickerName(name, sizeof(name), slot, "offset x");
            ok = SetFloatByName(econItem, name, sticker.offsetX) && ok;
            StickerName(name, sizeof(name), slot, "offset y");
            ok = SetFloatByName(econItem, name, sticker.offsetY) && ok;

            if (sticker.hasSchema)
            {
                StickerName(name, sizeof(name), slot, "schema");
                if (NameOk(name))
                    ok = SetIntByName(econItem, name, sticker.schema) && ok;
            }
        }

        return ok;
    }

    bool Write(void* econItem, const Set& set, const Set* previous)
    {
        if (!econItem) return false;
        if (!Initialize()) return false;

        bool ok = true;
        char name[48]{};

        for (int slot = 0; slot < STICKER_SLOTS; ++slot)
        {
            const StickerSlot& sticker = set.stickers[slot];
            const bool wasPresent = previous && previous->stickers[slot].present;
            if (!sticker.present && !wasPresent) continue;

            StickerName(name, sizeof(name), slot, "id");
            ok = SetIntByName(econItem, name, sticker.present ? sticker.kit : 0) && ok;
            if (!sticker.present) continue;

            StickerName(name, sizeof(name), slot, "wear");
            ok = SetFloatByName(econItem, name, Clamp01(sticker.wear)) && ok;

            StickerName(name, sizeof(name), slot, "scale");
            ok = SetFloatByName(econItem, name, sticker.scale > 0.0f ? sticker.scale : 1.0f) && ok;

            StickerName(name, sizeof(name), slot, "rotation");
            ok = SetFloatByName(econItem, name, sticker.rotation) && ok;

            StickerName(name, sizeof(name), slot, "offset x");
            ok = SetFloatByName(econItem, name, sticker.offsetX) && ok;

            StickerName(name, sizeof(name), slot, "offset y");
            ok = SetFloatByName(econItem, name, sticker.offsetY) && ok;

            if (sticker.hasSchema)
            {
                StickerName(name, sizeof(name), slot, "schema");
                if (NameOk(name))
                    ok = SetIntByName(econItem, name, sticker.schema) && ok;
            }
        }

        const Charm& charm = set.charm;
        const bool wasCharm = previous && previous->charm.present;
        if (charm.present || wasCharm)
        {
            CharmName(name, sizeof(name), "id");
            ok = SetIntByName(econItem, name, charm.present ? charm.kit : 0) && ok;

            if (charm.present)
            {
                CharmName(name, sizeof(name), "offset x");
                ok = SetFloatByName(econItem, name, charm.x) && ok;
                CharmName(name, sizeof(name), "offset y");
                ok = SetFloatByName(econItem, name, charm.y) && ok;
                CharmName(name, sizeof(name), "offset z");
                ok = SetFloatByName(econItem, name, charm.z) && ok;
                CharmName(name, sizeof(name), "seed");
                ok = SetIntByName(econItem, name, charm.seed) && ok;

                if (charm.hasSticker)
                {
                    CharmName(name, sizeof(name), "sticker");
                    if (NameOk(name))
                        ok = SetIntByName(econItem, name, charm.sticker) && ok;
                }
                if (charm.hasHighlight)
                {
                    CharmName(name, sizeof(name), "highlight");
                    if (NameOk(name))
                        ok = SetIntByName(econItem, name, charm.highlight) && ok;
                }
            }
        }

        return ok;
    }

    void Describe(const Set& set, char* out, std::size_t size)
    {
        DescribeSet(set, out, size);
    }

    void RecordApplied(
        std::uint64_t itemId,
        const Set& applied,
        const char* sourceToolInstanceId,
        bool charm,
        int stickerSlot,
        bool sourceToolConsumed)
    {
        if (!itemId) return;

        std::string profileId;
        int revision = 0;
        if (!ArmoryInventory::SessionInfo(profileId, revision) || profileId.empty())
        {
            Log("[attach] immediate persistence skipped: Armory session is unavailable");
            return;
        }

        std::vector<ArmoryInventory::ManagedItem> items;
        if (!ArmoryInventory::SnapshotManagedItems(items))
            return;

        const auto target = std::find_if(items.begin(), items.end(),
            [itemId](const ArmoryInventory::ManagedItem& item) { return item.id == itemId; });
        if (target == items.end() || target->instanceId.empty())
        {
            Log("[attach] immediate persistence skipped: target %016llX is not in the active projection",
                static_cast<unsigned long long>(itemId));
            return;
        }

        // The caller passes the exact snapshot successfully written by
        // SyncAttachments. Do not depend on a second raw attribute read here:
        // some charm-only targets intentionally use the targeted-write path.
        const Set& current = applied;

        std::lock_guard<std::mutex> lock(g_stateMutex);
        DropAcked();
        if (g_seq < g_lastAck) g_seq = g_lastAck;

        Record record;
        record.seq = ++g_seq;
        record.instanceId = target->instanceId;
        record.itemId = itemId;
        record.set = current;
        record.stableMs = SETTLE_MS;
        record.observedAt = IsoNow();
        record.consumedCharm = charm;
        record.sourceStickerSlot = charm ? -1 : stickerSlot;
        if (sourceToolConsumed && sourceToolInstanceId && *sourceToolInstanceId)
            record.consumedToolInstanceId = sourceToolInstanceId;

        g_lastKnown[itemId] = current;
        g_pending.erase(itemId);
        g_records.push_back(record);

        const bool written = WriteDetectionFile(profileId, revision);
        char description[256]{};
        Describe(current, description, sizeof(description));
        Log("[attach] immediate native observation %s for %s (%016llX), source=%s consumed=%d file=%s",
            description, target->instanceId.c_str(),
            static_cast<unsigned long long>(itemId),
            record.consumedToolInstanceId.empty() ? "none" : record.consumedToolInstanceId.c_str(),
            record.consumedToolInstanceId.empty() ? 0 : 1,
            written ? "written" : "write failed");
    }

    void ObserveAndPersist()
    {
        const uint64_t now = NowMs();
        if (now - g_lastRun < OBSERVE_INTERVAL_MS) return;
        g_lastRun = now;

        if (!ArmoryInventory::HasItems()) return;

        std::vector<ArmoryInventory::ManagedItem> items;
        if (!ArmoryInventory::SnapshotManagedItems(items)) return;

        std::string profileId;
        int revision = 0;
        if (!ArmoryInventory::SessionInfo(profileId, revision) || profileId.empty()) return;

        std::lock_guard<std::mutex> lock(g_stateMutex);

        bool dirty = DropAcked();

        std::vector<uint64_t> live;
        live.reserve(items.size());

        for (const auto& managed : items)
        {
            live.push_back(managed.id);

            void* item = LootSOCache::Find(managed.id);
            if (!item) continue;

            Set current;
            if (!Read(item, current)) continue;

            auto known = g_lastKnown.find(managed.id);
            if (known == g_lastKnown.end())
            {
                // First sighting of this item in the session: whatever the game
                // reports now is the baseline, not something the player changed.
                g_lastKnown[managed.id] = current;
                if (current != managed.attachments)
                {
                    char text[256]{};
                    Describe(current, text, sizeof(text));
                    Log("[attach] item %016llX did not read back its saved attachments: %s",
                        static_cast<unsigned long long>(managed.id), text);
                }
                continue;
            }

            if (current == known->second)
            {
                g_pending.erase(managed.id);
                continue;
            }

            auto pending = g_pending.find(managed.id);
            if (pending == g_pending.end() || pending->second.set != current)
            {
                Pending entry;
                entry.set = current;
                entry.firstMs = now;
                g_pending[managed.id] = entry;
                continue;
            }

            if (now - pending->second.firstMs < SETTLE_MS) continue;

            Record record;
            record.seq = ++g_seq;
            record.instanceId = managed.instanceId;
            record.itemId = managed.id;
            record.set = current;
            record.stableMs = static_cast<unsigned>(now - pending->second.firstMs);
            record.observedAt = IsoNow();
            g_records.push_back(record);

            char text[256]{};
            Describe(current, text, sizeof(text));
            Log("[attach] %s changed by the game on %s (%016llX); queued for the Bridge",
                text, managed.instanceId.c_str(),
                static_cast<unsigned long long>(managed.id));

            g_lastKnown[managed.id] = current;
            g_pending.erase(managed.id);
            dirty = true;
        }

        // Forget items that are no longer projected, so switching profiles or
        // inventories cannot leak a stale snapshot into the next one.
        for (auto it = g_lastKnown.begin(); it != g_lastKnown.end();)
        {
            const bool alive =
                std::find(live.begin(), live.end(), it->first) != live.end();
            it = alive ? std::next(it) : g_lastKnown.erase(it);
        }
        for (auto it = g_pending.begin(); it != g_pending.end();)
        {
            const bool alive =
                std::find(live.begin(), live.end(), it->first) != live.end();
            it = alive ? std::next(it) : g_pending.erase(it);
        }

        if (dirty || !g_records.empty()) WriteDetectionFile(profileId, revision);
    }
}
