#pragma once
#include <cstdint>

namespace LootSOCache
{
    enum class CreateResult { Ok, AlreadyExists, InventoryNotReady, Failed };

    struct NewItem {
        uint64_t id;
        uint16_t definition;
        int      quality;
        int      rarity;
        int      paintKit;
        int      seed;
        float    wear;
        int      statTrak;  // -1 = none
    };

    bool WaitForInventory(int timeoutMs = 2000);
    CreateResult Create(const NewItem& item);
    bool HasItem(uint64_t id);
    uint32_t NextPosition();
}