#pragma once
#include <cstdint>
#include <string>
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
        // A graffiti's spray pattern lives in "sticker slot 0 id" too; a music
        // kit carries its anthem in "music id". An unsealed graffiti (1349)
        // additionally needs charges, or CS2 offers nothing to equip, and the
        // colour variant in "spray tint id" - CS2 builds the card's image from
        // kit + tint, so a tinted graffiti without it shows no preview.
        int      musicKit = 0;
        int      spraysRemaining = 0;
        int      sprayTint = 0;   // 1-19, 0 = the pattern's default colour
        int      keychain = 0;
        int      keychainSeed = 0;
        // A Sticker Slab's sealed sticker; 0 for every other charm.
        int      keychainSticker = 0;
        // Stickers and charm on a weapon. Empty for every other item.
        Attachments::Set attachments;
        // The Storage Unit an item is inside ("casket item id low/high"), 0 =
        // the inventory. CS2 lists a stored item inside that unit, not on the
        // grid, so a stored item is made again with it.
        uint64_t casketId = 0;
        // A Charm Detachment Pack shows how many detachments it gives in
        // "items count"; a Storage Unit shows its stored-item count there.
        int      itemsCount = 0;
        uint32_t modificationDate = 0;   // a named unit's label date, 0 = unset
        // CS2 attribute 75, "Tradable After" (unix seconds), 0 = no date. A
        // container drop carries the seven days Valve puts on a new item.
        uint32_t tradableAfter = 0;
        // A newly added item arrives "new": its position carries the new-item
        // bit until CS2 acknowledges it (Lootline game_inventory.cpp:1206).
        bool     asNew = false;
        // A Storage Unit's label (its Armory name). Empty = no label.
        std::string customName;
    };

    bool Initialize();
    bool WaitForInventory(int timeoutMs = 2000);
    CreateResult Create(const NewItem& item);
    bool HasItem(uint64_t id);
    // The item object (C_EconItemView) behind a managed id, or null.
    void* Find(uint64_t id);
    bool ReadAttachments(uint64_t id, Attachments::Set& out);
    // Rewrites the sticker slots and charm of an item that stays in the cache.
    bool SyncAttachments(uint64_t id, const Attachments::Set& attachments);
    bool NotifyUpdated(uint64_t id);
    // Rewrites a Storage Unit's "items count" (and "modification date" when a
    // value is given) and tells the inventory, so the card's count follows the
    // Armory's stored set without recreating the unit.
    bool SetCasketInfo(uint64_t id, int itemsCount, uint32_t modificationDate);
    // Detaches a managed item from the local inventory. `destruct` frees the
    // object too; a caller that just handed the object to a UI that may still
    // hold it passes false, leaving the object itself alone.
    bool Remove(uint64_t id, bool destruct = true);
    bool GetIdsByPrefix(uint64_t prefix, uint64_t mask, std::vector<uint64_t>& ids);
    uint32_t NextPosition();
    // CS2's new-item popup acknowledging an item: give it a real position and
    // tell the inventory, the way the Game Coordinator's answer does (Lootline
    // GameInv::Acknowledge). `wasNew` = it still carried the "new" bit.
    bool Acknowledge(uint64_t id, bool& wasNew);
    // The name tag popup's Remove: clears the item's name and tells the
    // inventory (Lootline's name job with an empty name).
    bool ClearCustomName(uint64_t id);
    // The label an item carries right now (CS2's rename writes it too, not just
    // the Armory). False when the item or the field could not be read, or when
    // what is there does not read as a name.
    bool ReadCustomName(uint64_t id, std::string& out);
    // Write a label onto an item that is already in the cache.
    bool SetCustomNameById(uint64_t id, const std::string& name);
}