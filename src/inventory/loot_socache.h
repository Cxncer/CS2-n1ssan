#pragma once
#include <cstdint>
#include <vector>

#include "inventory/attachments.h"

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
        // Stickers and charm on a weapon. Empty for every other item.
        Attachments::Set attachments;
    };

    bool Initialize();
    bool WaitForInventory(int timeoutMs = 2000);
    CreateResult Create(const NewItem& item);
    bool HasItem(uint64_t id);
    // The item object (C_EconItemView) behind a managed id, or null.
    void* Find(uint64_t id);
    bool ReadAttachments(uint64_t id, Attachments::Set& out);
    bool SyncAttachments(uint64_t id, const Attachments::Set& attachments);
    // Announces a managed item as updated to the inventory's shared-object
    // listeners, the way a Game Coordinator item update does.
    bool NotifyUpdated(uint64_t id);
    // Detaches a managed item from the local inventory. `destruct` frees the
    // object too; a caller that just handed the object to a UI that may still
    // hold it passes false, leaving the object itself alone.
    bool Remove(uint64_t id, bool destruct = true);
    bool GetIdsByPrefix(uint64_t prefix, uint64_t mask, std::vector<uint64_t>& ids);
    uint32_t NextPosition();
}