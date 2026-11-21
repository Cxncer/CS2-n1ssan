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

    // The switch, re-read from the Bridge's file at most every couple of
    // seconds so flipping it in the Armory counts without a restart.
    bool IsEnabled();

    // Accepts the match the way the popup's button does, rate limited so a
    // button left on screen cannot call the native over and over. Returns
    // true only when the native call was made and the cooldown allowed it.
    bool AcceptNow();

    // The green-button watch runs on the render thread, where the accept
    // native must not be called: this only raises a flag. Tick() is called
    // from FrameStageNotify, on the game's own thread, and does the call.
    void RequestAccept();
    void Tick();
}
