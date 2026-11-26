#pragma once

#include <cstdint>

// Lootline's tools, ported: the Storage Unit (casket, definition 1201) and the
// Charm Detachment Pack (4950, three detachments).
//
// Lootline 1.5.5 (chadware2/hooks/hooks.cpp + features/unboxer/unboxer.cpp)
// makes them work by answering three of CS2's own inventory calls itself,
// because the Steam Game Coordinator has never heard of its items:
//
//   * InventoryAPI.PerformItemCasketTransaction(operation, casket, item) -
//     "put in" (1), "take out" (-1), "look inside" (0). Lootline moves the
//     item in its own store and tells the popup what happened.
//   * InventoryAPI.GetCacheTypeElementFieldByIndex(type, index, field) - CS2
//     asks for "KeychainRemoveToolCharges"."charges" to decide whether the
//     charm popup may detach at all. Lootline adds its unspent detachments.
//   * InventoryAPI.RemoveKeychain(itemId, slot) - the charm comes off a
//     Lootline gun locally, and one detachment is spent.
//
// This module is the same three answers for n1ssan's items. It keeps its own
// membership map (which item sits in which unit) and detachment counter, in
// "n1ssan-tools.json" next to the Bridge documents, like Lootline's save.
namespace Tools
{
    // Resolves and hooks the three InventoryAPI functions. Safe to call
    // repeatedly; a game build whose registration moved is reported instead.
    bool Initialize();
    bool Ready();
    const char* LastError();

    // Retry installation and re-sync unit counts. Game thread, four times a
    // second (frame_stage, Armory mode). It never answers a popup: panorama
    // drops events sent from this thread.
    void Tick();

    // Applies queued transactions and answers the popups. Panorama's main
    // thread only (CUIEngine::RunFrame); Lootline sends casket_added,
    // casket_removed and keychain_remove from that same frame callback.
    void MainThreadTick();

    // Unspent Charm Detachments: what the charm popup reads as
    // KeychainRemoveToolCharges.charges. Three per pack in the projection,
    // minus the ones already spent.
    int DetachmentsRemaining();

    // Lootline's Charm Detachment Pack is not a passive charge source: the
    // player USES the pack (InventoryAPI.UseTool) and it gives three
    // detachments, then the pack is gone (unboxer.cpp:7231-7262). Returns true
    // when the request was handled locally and must not reach Valve.
    bool HandleUseTool(uint64_t toolId);

    // True when this item sits in one of our Storage Units.
    bool IsStored(uint64_t itemId);

    // How many of our items a unit holds.
    int StoredCount(uint64_t unitId);
}
