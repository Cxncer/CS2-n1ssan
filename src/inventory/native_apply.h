#pragma once

// Stickers and charms on Armory items, applied through CS2's own inventory.
//
// CS2's inventory screen stays the thing that applies them: the player picks a
// sticker or charm and where it goes in the game's own popups. What the client
// cannot do on its own is finish the operation for an item the Steam Game
// Coordinator does not know about, so this module covers exactly that part and
// nothing else - it never opens an apply flow of its own.
//
// Ported from Lootline 1.5.2 (chadware2/features/unboxer + skinchanger), which
// does the same for its own items.
namespace NativeApply
{
    // Resolves InventoryAPI.UseTool and hooks it. Safe to call repeatedly; a
    // game build whose signature moved is reported instead of hooked.
    bool Initialize();
    bool Ready();
    const char* LastError();

    // Retries installation (the Panorama script API exists as soon as
    // client.dll is up, but a failed first attempt must not stay failed).
    // Called from the game-thread hook while nothing is applying.
    void Tick();
}
