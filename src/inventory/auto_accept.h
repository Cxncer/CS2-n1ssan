#pragma once

// Auto accept match: when the Game Coordinator tells the client a match was
// found, accept it for the player instead of waiting for the popup's click.
// The toggle is the Armory's Extra Features switch: the Bridge writes
// `n1ssan-features.json` and this reads it, so no rebuild is needed to change it.
namespace AutoAccept
{
    // Scans for the match-found handler and hooks it. Safe to call once at
    // start-up; logs and does nothing when the signature or MinHook is missing.
    void Initialize();

    // Logs the saved toggle once at start-up. The hook re-reads the file itself
    // on every match found, so a toggle in the Armory needs no rebuild.
    void RefreshFlag();
}
