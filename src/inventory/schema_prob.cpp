#include "inventory/schema_probe.h"

#include "diagnostics/log.h"
#include "memory/access.h"
#include "skin/glove_paintkit_schema.h"

#include <Windows.h>
#include <algorithm>
#include <charconv>
#include <cctype>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <map>
#include <sstream>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace
{
    constexpr std::int32_t MAX_SCHEMA_ENTRIES = 10000;
    constexpr std::size_t MAX_ITEMS_GAME_BYTES = 64ULL * 1024ULL * 1024ULL;
    constexpr std::uintptr_t MAX_USER_POINTER = 0x00007FFFFFFFFFFFULL;

    struct ItemMapNode
    {
        std::int32_t left;
        std::int32_t right;
        std::uintptr_t value;
        std::int32_t flag;
        std::int32_t key;
    };

    struct PaintKitMapNode
    {
        std::int32_t left;
        std::int32_t right;
        std::int32_t pad08;
        std::int32_t pad0C;
        std::int32_t key;
        std::int32_t pad14;
        std::uintptr_t value;
    };

    static_assert(sizeof(ItemMapNode) == 0x18);
    static_assert(sizeof(PaintKitMapNode) == 0x20);

    struct ItemDefinitionRecord
    {
        std::int32_t mapKey = 0;
        std::uint16_t definitionIndex = 0;
        std::string baseName;
        std::string typeName;
        std::string modelName;
        std::string simpleWeaponName;
        std::string weaponName;
        std::string itemName;
        std::string kind;
    };

    struct PaintKitRecord
    {
        std::int32_t mapKey = 0;
        std::int32_t id = 0;
        std::int32_t rarity = 0;
        std::string name;
    };

    struct GameDefinition
    {
        std::string name;
        std::string itemName;
        std::string material;
        std::string locName;
        std::string image;
        std::string base;
        std::string rarity;
    };

    struct ItemsGameData
    {
        std::map<std::int32_t, GameDefinition> paintKits;
        std::map<std::int32_t, GameDefinition> stickerKits;
        std::map<std::int32_t, GameDefinition> keychains;
    };

    bool IsUserPointer(std::uintptr_t address)
    {
        return address > 0x10000 && address <= MAX_USER_POINTER;
    }

    bool ReadRemoteString(std::uintptr_t address, std::string& output, std::size_t capacity = 512)
    {
        output.clear();

        if (address == 0)
            return true;

        if (!IsUserPointer(address))
            return false;

        output.reserve(64);

        for (std::size_t i = 0; i < capacity; ++i)
        {
            std::uint8_t character = 0;

            if (!SafeReadU8(address + i, character))
                return false;

            if (character == 0)
                return true;

            output.push_back(static_cast<char>(character));
        }

        output.clear();
        return false;
    }

    bool ReadObjectString(std::uintptr_t object, std::uintptr_t offset, std::string& output)
    {
        std::uintptr_t stringAddress = 0;

        if (!SafeReadQword(object + offset, stringAddress))
            return false;

        return ReadRemoteString(stringAddress, output);
    }

    bool ReadItemsGamePath(std::string& path)
    {
        HMODULE client = GetModuleHandleA("client.dll");

        if (!client)
            return false;

        char modulePath[MAX_PATH]{};

        if (!GetModuleFileNameA(client, modulePath, MAX_PATH))
            return false;

        // client.dll lives at <game>/csgo/bin/win64/client.dll.
        for (int i = 0; i < 3; ++i)
        {
            char* separator = std::strrchr(modulePath, '\\');

            if (!separator)
                return false;

            *separator = '\0';
        }

        path = modulePath;
        path += "\\scripts\\items\\items_game.txt";
        return true;
    }

    class KeyValuesTokenizer
    {
    public:
        explicit KeyValuesTokenizer(std::string_view input) : m_input(input) {}

        bool Next(std::string& token)
        {
            token.clear();
            SkipWhitespaceAndComments();

            if (m_position >= m_input.size())
                return false;

            const char current = m_input[m_position];

            if (current == '{' || current == '}')
            {
                token.assign(1, current);
                ++m_position;
                return true;
            }

            if (current == '"')
            {
                ++m_position;

                while (m_position < m_input.size())
                {
                    const char value = m_input[m_position++];

                    if (value == '"')
                        return true;

                    if (value == '\\' && m_position < m_input.size())
                    {
                        const char escaped = m_input[m_position++];

                        switch (escaped)
                        {
                        case 'n': token.push_back('\n'); break;
                        case 'r': token.push_back('\r'); break;
                        case 't': token.push_back('\t'); break;
                        default: token.push_back(escaped); break;
                        }

                        continue;
                    }

                    token.push_back(value);
                }

                return false;
            }

            const std::size_t start = m_position;

            while (m_position < m_input.size())
            {
                const char value = m_input[m_position];

                if (std::isspace(static_cast<unsigned char>(value)) || value == '{' || value == '}')
                    break;

                ++m_position;
            }

            if (start == m_position)
                return false;

            token.assign(m_input.substr(start, m_position - start));
            return true;
        }

    private:
        void SkipWhitespaceAndComments()
        {
            if (m_position == 0 && m_input.size() >= 3 &&
                static_cast<unsigned char>(m_input[0]) == 0xEF &&
                static_cast<unsigned char>(m_input[1]) == 0xBB &&
                static_cast<unsigned char>(m_input[2]) == 0xBF)
            {
                m_position = 3;
            }

            while (m_position < m_input.size())
            {
                while (m_position < m_input.size() &&
                    std::isspace(static_cast<unsigned char>(m_input[m_position])))
                {
                    ++m_position;
                }

                if (m_position + 1 >= m_input.size() || m_input[m_position] != '/')
                    return;

                if (m_input[m_position + 1] == '/')
                {
                    m_position += 2;

                    while (m_position < m_input.size() && m_input[m_position] != '\n')
                        ++m_position;

                    continue;
                }

                if (m_input[m_position + 1] == '*')
                {
                    m_position += 2;

                    while (m_position + 1 < m_input.size() &&
                        !(m_input[m_position] == '*' && m_input[m_position + 1] == '/'))
                    {
                        ++m_position;
                    }

                    if (m_position + 1 < m_input.size())
                        m_position += 2;

                    continue;
                }

                return;
            }
        }

        std::string_view m_input;
        std::size_t m_position = 0;
    };

    bool ParseInteger(const std::string& value, std::int32_t& result)
    {
        const auto parsed = std::from_chars(value.data(), value.data() + value.size(), result);
        return parsed.ec == std::errc{} && parsed.ptr == value.data() + value.size();
    }

    void ParseEntryBody(KeyValuesTokenizer& tokenizer, GameDefinition& entry)
    {
        std::string token;
        int depth = 1;

        while (depth > 0 && tokenizer.Next(token))
        {
            if (token == "{")
            {
                ++depth;
                continue;
            }

            if (token == "}")
            {
                --depth;
                continue;
            }

            if (depth != 1)
                continue;

            const std::string key = token;

            if (!tokenizer.Next(token))
                break;

            if (token == "{")
            {
                ++depth;
                continue;
            }

            if (key == "name") entry.name = token;
            else if (key == "item_name") entry.itemName = token;
            else if (key == "sticker_material") entry.material = token;
            else if (key == "loc_name") entry.locName = token;
            else if (key == "image_inventory") entry.image = token;
            else if (key == "base") entry.base = token;
            else if (key == "item_rarity") entry.rarity = token;
        }
    }

    void SkipBlock(KeyValuesTokenizer& tokenizer)
    {
        std::string token;
        int depth = 1;

        while (depth > 0 && tokenizer.Next(token))
        {
            if (token == "{") ++depth;
            else if (token == "}") --depth;
        }
    }

    template <typename Callback>
    void ParseSection(KeyValuesTokenizer& tokenizer, Callback callback)
    {
        std::string token;

        while (tokenizer.Next(token))
        {
            if (token == "}")
                break;

            std::int32_t id = 0;
            const bool validId = ParseInteger(token, id);

            if (!tokenizer.Next(token))
                break;

            if (token != "{")
                continue;

            if (!validId)
            {
                SkipBlock(tokenizer);
                continue;
            }

            GameDefinition entry;
            ParseEntryBody(tokenizer, entry);
            callback(id, std::move(entry));
        }
    }

    bool ParseItemsGame(const std::string& contents, ItemsGameData& output)
    {
        KeyValuesTokenizer tokenizer(contents);
        std::string token;

        if (!tokenizer.Next(token) || token != "items_game")
            return false;

        if (!tokenizer.Next(token) || token != "{")
            return false;

        int depth = 1;

        while (depth > 0 && tokenizer.Next(token))
        {
            if (token == "{")
            {
                ++depth;
                continue;
            }

            if (token == "}")
            {
                --depth;
                continue;
            }

            if (depth != 1)
                continue;

            const std::string section = token;

            if (!tokenizer.Next(token))
                break;

            if (token != "{")
                continue;

            if (section == "paint_kits")
            {
                ParseSection(tokenizer, [&](std::int32_t id, GameDefinition entry)
                {
                    output.paintKits.insert_or_assign(id, std::move(entry));
                });
            }
            else if (section == "sticker_kits")
            {
                ParseSection(tokenizer, [&](std::int32_t id, GameDefinition entry)
                {
                    output.stickerKits.insert_or_assign(id, std::move(entry));
                });
            }
            else if (section == "keychain_definitions")
            {
                ParseSection(tokenizer, [&](std::int32_t id, GameDefinition entry)
                {
                    output.keychains.insert_or_assign(id, std::move(entry));
                });
            }
            else
            {
                SkipBlock(tokenizer);
            }
        }

        return !output.paintKits.empty() || !output.stickerKits.empty() || !output.keychains.empty();
    }

    bool LoadItemsGame(ItemsGameData& output)
    {
        std::string path;

        if (!ReadItemsGamePath(path))
            return false;

        std::ifstream file(path, std::ios::binary);

        if (!file)
        {
            Log("[schema-snapshot] unable to open %s", path.c_str());
            return false;
        }

        file.seekg(0, std::ios::end);
        const std::streamoff size = file.tellg();

        if (size <= 0 || static_cast<std::uint64_t>(size) > MAX_ITEMS_GAME_BYTES)
        {
            Log("[schema-snapshot] items_game.txt size is invalid: %lld",
                static_cast<long long>(size));
            return false;
        }

        file.seekg(0, std::ios::beg);
        std::string contents{
            std::istreambuf_iterator<char>(file),
            std::istreambuf_iterator<char>()};

        return ParseItemsGame(contents, output);
    }

    bool ReadItemDefinitions(
        std::uintptr_t schema,
        std::vector<ItemDefinitionRecord>& output)
    {
        // CEconItemSchema::m_SortedItemDefinitions at +0xF8, matching Lootline's
        // CEconItemSchema layout. The map header is { count, capacityFlags, elements }.
        constexpr std::uintptr_t ITEM_MAP_OFFSET = 0xF8;
        std::int32_t count = 0;
        std::uintptr_t elements = 0;

        if (!SafeReadI32(schema + ITEM_MAP_OFFSET, count) ||
            !SafeReadQword(schema + ITEM_MAP_OFFSET + 0x08, elements) ||
            count <= 0 || count > MAX_SCHEMA_ENTRIES || !IsUserPointer(elements))
        {
            Log("[schema-snapshot] item definition map header invalid (count=%d, elements=%p)",
                count, reinterpret_cast<void*>(elements));
            return false;
        }

        output.clear();
        output.reserve(static_cast<std::size_t>(count));

        for (std::int32_t i = 0; i < count; ++i)
        {
            const std::uintptr_t node = elements + static_cast<std::uintptr_t>(i) * sizeof(ItemMapNode);
            std::uintptr_t definition = 0;
            std::int32_t mapKey = 0;
            std::uint16_t definitionIndex = 0;

            if (!SafeReadQword(node + 0x08, definition) ||
                !SafeReadI32(node + 0x14, mapKey) ||
                !IsUserPointer(definition) ||
                !SafeReadU16(definition + 0x10, definitionIndex) ||
                definitionIndex == 0)
            {
                continue;
            }

            ItemDefinitionRecord record;
            record.mapKey = mapKey;
            record.definitionIndex = definitionIndex;

            if (!ReadObjectString(definition, 0x70, record.baseName) ||
                !ReadObjectString(definition, 0x80, record.typeName) ||
                !ReadObjectString(definition, 0x148, record.modelName) ||
                !ReadObjectString(definition, 0x230, record.simpleWeaponName) ||
                !ReadObjectString(definition, 0x248, record.weaponName) ||
                !ReadObjectString(definition, 0x260, record.itemName))
            {
                continue;
            }

            if (record.typeName == "#CSGO_Type_Knife") record.kind = "knife";
            else if (record.typeName == "#Type_Hands") record.kind = "glove";
            else if (record.typeName == "#Type_CustomPlayer") record.kind = "agent";
            else if (record.definitionIndex <= 70 && !record.itemName.empty()) record.kind = "weapon";
            else if (!record.itemName.empty()) record.kind = "item";
            else record.kind = "unknown";

            output.emplace_back(std::move(record));
        }

        std::sort(output.begin(), output.end(), [](const auto& left, const auto& right)
        {
            return left.definitionIndex < right.definitionIndex;
        });

        return !output.empty();
    }

    bool ReadLivePaintKits(
        std::uintptr_t schema,
        std::uint32_t mapOffset,
        const ItemsGameData& gameData,
        std::vector<PaintKitRecord>& output)
    {
        if (mapOffset == 0)
            return false;

        const std::uintptr_t mapAddress = schema + mapOffset;
        std::int32_t count = 0;
        std::uintptr_t elements = 0;

        if (!SafeReadI32(mapAddress, count) ||
            !SafeReadQword(mapAddress + 0x08, elements) ||
            count <= 0 || count > MAX_SCHEMA_ENTRIES || !IsUserPointer(elements))
        {
            Log("[schema-snapshot] paint-kit map header invalid (offset=0x%X count=%d elements=%p)",
                mapOffset, count, reinterpret_cast<void*>(elements));
            return false;
        }

        output.clear();
        output.reserve(static_cast<std::size_t>(count));

        for (std::int32_t i = 0; i < count; ++i)
        {
            const std::uintptr_t node = elements + static_cast<std::uintptr_t>(i) * sizeof(PaintKitMapNode);
            std::uintptr_t paintKit = 0;
            std::int32_t mapKey = 0;
            std::int32_t id = 0;
            std::int32_t rarity = 0;
            std::string name;

            if (!SafeReadI32(node + 0x10, mapKey) ||
                !SafeReadQword(node + 0x18, paintKit) ||
                !IsUserPointer(paintKit) ||
                !SafeReadI32(paintKit, id) ||
                !SafeReadI32(paintKit + 0x44, rarity))
            {
                continue;
            }

            if (!ReadObjectString(paintKit, 0x08, name))
                name.clear();

            if (name.empty())
            {
                const auto found = gameData.paintKits.find(id);
                if (found != gameData.paintKits.end())
                    name = found->second.name;
            }

            output.push_back({ mapKey, id, rarity, std::move(name) });
        }

        std::sort(output.begin(), output.end(), [](const auto& left, const auto& right)
        {
            return left.id < right.id;
        });

        return !output.empty();
    }

    std::string JsonEscape(const std::string& value)
    {
        std::string escaped;
        escaped.reserve(value.size() + 8);

        for (unsigned char character : value)
        {
            switch (character)
            {
            case '"': escaped += "\\\""; break;
            case '\\': escaped += "\\\\"; break;
            case '\b': escaped += "\\b"; break;
            case '\f': escaped += "\\f"; break;
            case '\n': escaped += "\\n"; break;
            case '\r': escaped += "\\r"; break;
            case '\t': escaped += "\\t"; break;
            default:
                if (character < 0x20)
                {
                    char buffer[7]{};
                    std::snprintf(buffer, sizeof(buffer), "\\u%04X", character);
                    escaped += buffer;
                }
                else
                {
                    escaped.push_back(static_cast<char>(character));
                }
                break;
            }
        }

        return escaped;
    }

    void WriteGameDefinitionArray(
        std::ostringstream& json,
        const std::map<std::int32_t, GameDefinition>& entries)
    {
        json << "[";

        bool first = true;

        for (const auto& [id, entry] : entries)
        {
            if (!first) json << ",";
            first = false;

            json << "{\"id\":" << id
                << ",\"name\":\"" << JsonEscape(entry.name)
                << "\",\"itemName\":\"" << JsonEscape(entry.itemName)
                << "\",\"material\":\"" << JsonEscape(entry.material)
                << "\",\"locName\":\"" << JsonEscape(entry.locName)
                << "\",\"image\":\"" << JsonEscape(entry.image)
                << "\",\"base\":\"" << JsonEscape(entry.base)
                << "\",\"rarity\":\"" << JsonEscape(entry.rarity)
                << "\"}";
        }

        json << "]";
    }

    bool WriteSnapshotFile(const std::string& contents, std::string& outputPath)
    {
        HMODULE self = nullptr;

        if (!GetModuleHandleExA(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCSTR>(&WriteSnapshotFile),
            &self))
        {
            return false;
        }

        char modulePath[MAX_PATH]{};

        if (!GetModuleFileNameA(self, modulePath, MAX_PATH))
            return false;

        char* separator = std::strrchr(modulePath, '\\');

        if (!separator)
            return false;

        *(separator + 1) = '\0';
        outputPath = modulePath;
        outputPath += "n1ssan-cs2-schema.json";

        std::string temporaryPath = outputPath + ".tmp";
        HANDLE file = CreateFileA(
            temporaryPath.c_str(),
            GENERIC_WRITE,
            0,
            nullptr,
            CREATE_ALWAYS,
            FILE_ATTRIBUTE_NORMAL,
            nullptr);

        if (file == INVALID_HANDLE_VALUE)
            return false;

        if (contents.size() > MAXDWORD)
        {
            CloseHandle(file);
            DeleteFileA(temporaryPath.c_str());
            return false;
        }

        DWORD written = 0;
        const BOOL writeOk = WriteFile(
            file,
            contents.data(),
            static_cast<DWORD>(contents.size()),
            &written,
            nullptr);
        const BOOL flushOk = FlushFileBuffers(file);
        CloseHandle(file);

        if (!writeOk || !flushOk || static_cast<std::size_t>(written) != contents.size())
        {
            DeleteFileA(temporaryPath.c_str());
            return false;
        }

        if (!MoveFileExA(
            temporaryPath.c_str(),
            outputPath.c_str(),
            MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
        {
            DeleteFileA(temporaryPath.c_str());
            return false;
        }

        return true;
    }

    std::string CurrentUtcTimestamp()
    {
        SYSTEMTIME time{};
        GetSystemTime(&time);

        char buffer[32]{};
        std::snprintf(
            buffer,
            sizeof(buffer),
            "%04u-%02u-%02uT%02u:%02u:%02uZ",
            time.wYear, time.wMonth, time.wDay,
            time.wHour, time.wMinute, time.wSecond);

        return buffer;
    }

    std::string BuildSnapshotJson(
        const std::vector<ItemDefinitionRecord>& items,
        const std::vector<PaintKitRecord>& paintKits,
        const ItemsGameData& gameData,
        bool itemsGameLoaded,
        bool paintKitMapAvailable,
        std::uint32_t paintKitMapOffset)
    {
        std::ostringstream json;

        json << "{\n"
            << "\"schemaVersion\":1,\n"
            << "\"source\":\"CS2 live CEconItemSchema + scripts/items/items_game.txt\",\n"
            << "\"createdAtUtc\":\"" << CurrentUtcTimestamp() << "\",\n"
            << "\"itemsGameLoaded\":" << (itemsGameLoaded ? "true" : "false") << ",\n"
            << "\"itemsGameFile\":\"scripts/items/items_game.txt\",\n"
            << "\"paintKitMapAvailable\":" << (paintKitMapAvailable ? "true" : "false") << ",\n"
            << "\"paintKitMapOffset\":" << paintKitMapOffset << ",\n";

        json << "\"itemDefinitions\":[";
        for (std::size_t i = 0; i < items.size(); ++i)
        {
            const auto& item = items[i];
            if (i) json << ",";

            json << "{\"definitionIndex\":" << item.definitionIndex
                << ",\"mapKey\":" << item.mapKey
                << ",\"kind\":\"" << JsonEscape(item.kind)
                << "\",\"baseName\":\"" << JsonEscape(item.baseName)
                << "\",\"typeName\":\"" << JsonEscape(item.typeName)
                << "\",\"itemName\":\"" << JsonEscape(item.itemName)
                << "\",\"weaponName\":\"" << JsonEscape(item.weaponName)
                << "\",\"simpleWeaponName\":\"" << JsonEscape(item.simpleWeaponName)
                << "\",\"modelName\":\"" << JsonEscape(item.modelName)
                << "\"}";
        }
        json << "],\n";

        json << "\"livePaintKits\":[";
        for (std::size_t i = 0; i < paintKits.size(); ++i)
        {
            const auto& kit = paintKits[i];
            if (i) json << ",";

            json << "{\"id\":" << kit.id
                << ",\"mapKey\":" << kit.mapKey
                << ",\"rarity\":" << kit.rarity
                << ",\"name\":\"" << JsonEscape(kit.name)
                << "\"}";
        }
        json << "],\n";

        json << "\"paintKitDefinitions\":";
        WriteGameDefinitionArray(json, gameData.paintKits);
        json << ",\n\"stickerKits\":";
        WriteGameDefinitionArray(json, gameData.stickerKits);
        json << ",\n\"keychainDefinitions\":";
        WriteGameDefinitionArray(json, gameData.keychains);
        json << "\n}\n";

        return json.str();
    }
}

void RunSchemaProbe()
{
    Log("=== [schema-snapshot] start ===");

    const std::uintptr_t schema = GlovePaintKitSchema::GetSchemaAddress();

    if (!IsUserPointer(schema))
    {
        Log("[schema-snapshot] live CEconItemSchema pointer unavailable; snapshot not written");
        return;
    }

    std::vector<ItemDefinitionRecord> items;

    if (!ReadItemDefinitions(schema, items))
    {
        Log("[schema-snapshot] live item definitions could not be read; snapshot not written");
        return;
    }

    ItemsGameData gameData;
    const bool itemsGameLoaded = LoadItemsGame(gameData);

    const std::uint32_t paintMapOffset = GlovePaintKitSchema::GetPaintKitMapOffset();
    std::vector<PaintKitRecord> paintKits;
    const bool paintKitMapAvailable =
        ReadLivePaintKits(schema, paintMapOffset, gameData, paintKits);

    const std::string json = BuildSnapshotJson(
        items,
        paintKits,
        gameData,
        itemsGameLoaded,
        paintKitMapAvailable,
        paintMapOffset);

    std::string outputPath;

    if (!WriteSnapshotFile(json, outputPath))
    {
        Log("[schema-snapshot] failed to write snapshot file");
        return;
    }

    Log("[schema-snapshot] itemDefinitions=%zu livePaintKits=%zu paintKitDefinitions=%zu stickerKits=%zu keychains=%zu",
        items.size(),
        paintKits.size(),
        gameData.paintKits.size(),
        gameData.stickerKits.size(),
        gameData.keychains.size());

    Log("[schema-snapshot] items_game=%s paintMap=%s offset=0x%X",
        itemsGameLoaded ? "loaded" : "unavailable",
        paintKitMapAvailable ? "available" : "unavailable",
        paintMapOffset);

    Log("[schema-snapshot] snapshot written: %s", outputPath.c_str());
    Log("=== [schema-snapshot] done ===");
}
