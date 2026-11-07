// n1ssan-dll / src/inventory/loadout_api.cpp
// Resolves the LoadoutAPI natives client.dll registers by name and answers
// "which item is the player wearing in this slot".
//
// The registration table is found the way Lootline does it: the native's name
// lives in .rdata as its own zero-terminated string, and its registration site
// is `lea rdx, [rip + function]` immediately followed by
// `lea rcx, [rip + name]`. Every `lea rcx, [rip + x]` in .text is indexed once
// (sorted by what it loads), so each lookup is a binary search.

#include "inventory/loadout_api.h"

#include "diagnostics/log.h"

#include <windows.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace
{
    using GetItemIdFn = const char* (__fastcall*)(void* api, const char* team, const char* slot);
    using SlotWithDefinitionFn = const char* (__fastcall*)(void* api, const char* team, int definition);

    // The loadout changes only from the Loadout screen, so a short cache keeps
    // weapon dispatch from calling into panorama once per weapon per frame.
    constexpr DWORD CACHE_MS = 500;

    struct ClientIndex
    {
        const std::uint8_t* text = nullptr;
        std::size_t textSize = 0;
        const std::uint8_t* rdata = nullptr;
        std::size_t rdataSize = 0;
        std::vector<std::pair<std::uint32_t, std::uint32_t>> loads; // (.rdata offset, .text offset)
        bool built = false;
    };

    struct CachedId
    {
        std::uint64_t id = 0;
        DWORD at = 0;
    };

    std::mutex g_mutex;
    ClientIndex g_index;
    GetItemIdFn g_getItemId = nullptr;
    SlotWithDefinitionFn g_slotWithDefinition = nullptr;
    bool g_resolved = false;
    char g_error[160]{};
    std::unordered_map<std::string, CachedId> g_slotCache;
    std::unordered_map<std::uint32_t, CachedId> g_definitionCache;

    // g_mutex held. Null when client.dll isn't loaded (yet): retried next call.
    const ClientIndex* ClientIndexLocked()
    {
        ClientIndex& index = g_index;

        if (index.built)
            return &index;

        const auto* base = reinterpret_cast<const std::uint8_t*>(GetModuleHandleA("client.dll"));
        if (!base)
            return nullptr;

        const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(base);
        const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS64*>(base + dos->e_lfanew);
        const IMAGE_SECTION_HEADER* section = IMAGE_FIRST_SECTION(nt);

        for (WORD i = 0; i < nt->FileHeader.NumberOfSections; ++i, ++section)
        {
            const char* sectionName = reinterpret_cast<const char*>(section->Name);

            // The first of each section, like every other module scan here.
            if (!index.text && std::strncmp(sectionName, ".text", 5) == 0)
            {
                index.text = base + section->VirtualAddress;
                index.textSize = section->Misc.VirtualSize;
            }
            else if (!index.rdata && std::strncmp(sectionName, ".rdata", 6) == 0)
            {
                index.rdata = base + section->VirtualAddress;
                index.rdataSize = section->Misc.VirtualSize;
            }
        }

        if (!index.text || !index.rdata || index.textSize < 16 || index.rdataSize < 16)
        {
            index = ClientIndex{};
            return nullptr;
        }

        index.loads.reserve(1u << 18);

        for (std::size_t i = 0; i + 7 <= index.textSize; ++i)
        {
            const std::uint8_t* lea = index.text + i;

            if (lea[0] != 0x48 || lea[1] != 0x8D || lea[2] != 0x0D)
                continue;

            std::int32_t displacement = 0;
            std::memcpy(&displacement, lea + 3, sizeof(displacement));
            const std::uint8_t* target = lea + 7 + displacement;

            if (target >= index.rdata && target < index.rdata + index.rdataSize)
                index.loads.emplace_back(
                    static_cast<std::uint32_t>(target - index.rdata),
                    static_cast<std::uint32_t>(i));
        }

        std::sort(index.loads.begin(), index.loads.end());
        index.built = true;
        return &index;
    }

    // g_mutex held. The first `.rdata` occurrence of `name` as its own string.
    const std::uint8_t* FindStringLocked(const ClientIndex& index, const char* name)
    {
        const std::size_t length = std::strlen(name);

        if (!length || index.rdataSize < length + 2)
            return nullptr;

        const std::uint8_t* rdata = index.rdata;
        const std::uint8_t* last = rdata + index.rdataSize - length - 1;
        const auto first = static_cast<std::uint8_t>(name[0]);

        for (const std::uint8_t* p = rdata + 1; p <= last;)
        {
            const auto* hit = static_cast<const std::uint8_t*>(
                std::memchr(p, first, static_cast<std::size_t>(last - p) + 1));

            if (!hit)
                break;

            if (hit[-1] == 0 && hit[length] == 0 && std::memcmp(hit, name, length) == 0)
                return hit;

            p = hit + 1;
        }

        return nullptr;
    }

    // g_mutex held. The function `name` is registered with.
    void* ApiFunctionLocked(const char* name)
    {
        const ClientIndex* index = ClientIndexLocked();
        if (!index)
            return nullptr;

        const std::uint8_t* found = FindStringLocked(*index, name);
        if (!found)
            return nullptr;

        const auto key = static_cast<std::uint32_t>(found - index->rdata);
        const auto range = std::equal_range(
            index->loads.begin(), index->loads.end(), std::make_pair(key, 0u),
            [](const std::pair<std::uint32_t, std::uint32_t>& a,
               const std::pair<std::uint32_t, std::uint32_t>& b)
            {
                return a.first < b.first;
            });

        for (auto it = range.first; it != range.second; ++it)
        {
            if (it->second < 7)
                continue;

            const std::uint8_t* previous = index->text + it->second - 7;

            if (previous[0] != 0x48 || previous[1] != 0x8D || previous[2] != 0x15)
                continue;

            std::int32_t displacement = 0;
            std::memcpy(&displacement, previous + 3, sizeof(displacement));
            const std::uint8_t* function = previous + 7 + displacement;

            if (function >= index->text && function < index->text + index->textSize)
                return const_cast<std::uint8_t*>(function);
        }

        return nullptr;
    }

    int TeamCode(const char* team)
    {
        if (!team) return 0;
        if (std::strcmp(team, "t") == 0) return 2;
        if (std::strcmp(team, "ct") == 0) return 3;
        return 0;
    }

    std::uint64_t CallItemId(const char* team, const char* slot)
    {
        if (!g_getItemId || !team || !slot)
            return 0;

        __try
        {
            const char* text = g_getItemId(nullptr, team, slot);
            if (!text || !*text)
                return 0;
            return std::strtoull(text, nullptr, 10);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return 0;
        }
    }

    bool CallSlotWithDefinition(const char* team, std::uint16_t definition, std::string& slot)
    {
        slot.clear();

        if (!g_slotWithDefinition || !team || !definition)
            return false;

        __try
        {
            const char* text = g_slotWithDefinition(nullptr, team, static_cast<int>(definition));
            if (!text || !*text)
                return false;
            slot.assign(text);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }
}

namespace LoadoutApi
{
    bool Initialize()
    {
        std::lock_guard<std::mutex> lock(g_mutex);

        if (g_resolved)
            return g_getItemId != nullptr;

        if (!GetModuleHandleA("client.dll"))
        {
            snprintf(g_error, sizeof(g_error), "client.dll not loaded");
            return false;
        }

        if (!ClientIndexLocked())
        {
            snprintf(g_error, sizeof(g_error), "client.dll sections unavailable");
            return false;
        }

        g_getItemId = reinterpret_cast<GetItemIdFn>(ApiFunctionLocked("GetItemID"));
        g_slotWithDefinition = reinterpret_cast<SlotWithDefinitionFn>(
            ApiFunctionLocked("GetSlotEquippedWithDefIndex"));

        if (!g_getItemId || !g_slotWithDefinition)
        {
            snprintf(g_error, sizeof(g_error), "LoadoutAPI natives not found (GetItemID=%p slot=%p)",
                reinterpret_cast<void*>(g_getItemId),
                reinterpret_cast<void*>(g_slotWithDefinition));
            g_resolved = true;
            Log("[loadout-api] %s", g_error);
            return false;
        }

        g_resolved = true;
        snprintf(g_error, sizeof(g_error), "ok");
        Log("[loadout-api] resolved GetItemID=%p GetSlotEquippedWithDefIndex=%p",
            reinterpret_cast<void*>(g_getItemId),
            reinterpret_cast<void*>(g_slotWithDefinition));
        return true;
    }

    bool Ready()
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        return g_getItemId != nullptr && g_slotWithDefinition != nullptr;
    }

    const char* LastError()
    {
        return g_error;
    }

    const char* NativeSlotName(const char* armorySlot)
    {
        if (!armorySlot) return nullptr;
        if (std::strcmp(armorySlot, "gloves") == 0 || std::strcmp(armorySlot, "glove") == 0)
            return "clothing_hands";
        if (std::strcmp(armorySlot, "agent") == 0)
            return "customplayer";
        if (std::strcmp(armorySlot, "knife") == 0 || std::strcmp(armorySlot, "melee") == 0)
            return "melee";
        return nullptr;
    }

    std::uint64_t EquippedItemId(const char* team, const char* slot)
    {
        if (!team || !slot)
            return 0;

        if (!Initialize())
            return 0;

        const std::string key = std::string(team) + "|" + slot;
        const DWORD now = GetTickCount();

        {
            std::lock_guard<std::mutex> lock(g_mutex);
            const auto found = g_slotCache.find(key);
            if (found != g_slotCache.end() && now - found->second.at < CACHE_MS)
                return found->second.id;
        }

        const std::uint64_t id = CallItemId(team, slot);

        {
            std::lock_guard<std::mutex> lock(g_mutex);
            g_slotCache[key] = CachedId{ id, now };
        }

        return id;
    }

    std::uint64_t EquippedItemIdForDefinition(const char* team, std::uint16_t definition)
    {
        if (!team || !definition)
            return 0;

        if (!Initialize())
            return 0;

        const int code = TeamCode(team);
        const std::uint32_t key = (static_cast<std::uint32_t>(code) << 16) | definition;
        const DWORD now = GetTickCount();

        {
            std::lock_guard<std::mutex> lock(g_mutex);
            const auto found = g_definitionCache.find(key);
            if (found != g_definitionCache.end() && now - found->second.at < CACHE_MS)
                return found->second.id;
        }

        std::string slot;
        const std::uint64_t id = CallSlotWithDefinition(team, definition, slot) && !slot.empty()
            ? EquippedItemId(team, slot.c_str())
            : 0;

        {
            std::lock_guard<std::mutex> lock(g_mutex);
            g_definitionCache[key] = CachedId{ id, now };
        }

        return id;
    }
}
