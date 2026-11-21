#pragma once

#include <windows.h>
#include <dxgi.h>

// n1ssan-dll / src/overlay/accept_watch.h
//
// The second half of auto accept. The Game Coordinator hook in auto_accept.cpp
// never fired on this client (the signature matched a look-alike), but the call
// the popup's button ends in does work, so this watches for the button itself:
// the wide bright-green ACCEPT bar CS2 puts up while the queue reads
// "Confirming match...", read straight off the finished frame.
namespace AcceptWatch
{
    // Called from the Present hook with the swap chain the game just presented.
    // Copies a small band of the back buffer at most twice a second while the
    // auto-accept switch is on, and asks AutoAccept to take the match once the
    // green button is there for two checks in a row. Never draws, never hooks.
    void Observe(IDXGISwapChain* swap);
}
