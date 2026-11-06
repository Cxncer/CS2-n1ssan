#pragma once
#include <cstdint>
#include <vector>

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
        int      stickerKit = 0;
        int      keychain = 0;
        int      keychainSeed = 0;
    };

    bool WaitForInventory(int timeoutMs = 2000);
    CreateResult Create(const NewItem& item);
    bool HasItem(uint64_t id);
    bool Remove(uint64_t id);
    bool GetIdsByPrefix(uint64_t prefix, uint64_t mask, std::vector<uint64_t>& ids);
    uint32_t NextPosition();
}