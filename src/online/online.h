// n1ssan-dll / src/online/online.h
//
// Phase 7 - n1ssan Online (Lootline Online parity).
//
// First slice (v7.15): Steam P2P presence and loadout exchange. Players in the
// same match who run n1ssan send each other one packet describing the skins they
// have equipped; nothing is painted on another player's gun yet - that is the
// next slice, built on the peer table this module keeps.
//
// Transport is CS2's own steam_api64 / steamnetworkingsockets
// (ISteamNetworkingMessages, flat API), relayed by Valve with ICE turned off, so
// no IP address is ever shared with a peer. The reference is Lootline 2.0
// `source/chadware2/features/online/online.cpp` (the resolver and the session
// handling follow it); the wire format is ours (magic "N1SN"), so a Lootline
// client never answers us and we never answer it. Talking to real Lootline
// clients would mean reimplementing their format, which the Parity Map keeps as
// a separate decision.

#pragma once

#include <cstdint>
#include <string>
#include <vector>

struct TargetSkin;

namespace Online
{
    // One player in the match, as the last scan saw them.
    struct PeerView
    {
        std::string steamId;      // decimal, for the log / a future menu row
        bool answered = false;    // sent us a packet: runs n1ssan Online
        int skins = 0;            // gun skins in their packet
        bool knife = false;       // ... and a knife, gloves, an agent
        bool gloves = false;
        bool agent = false;
        int secondsAgo = -1;      // since their last packet (-1: never)
    };

    // FrameStageNotify stage 7 (game thread). Safe to call outside a match: it
    // closes sessions and keeps the relay setting back while idle.
    void Tick(uintptr_t localPawn, bool inMatch);

    // Unload (any thread): sessions closed, Steam's P2P settings back.
    void Shutdown();

    bool        Enabled();
    std::string Status();
    std::vector<PeerView> Peers();

    // A peer's gun skin for a definition, by their account id. False when that
    // peer has no entry for it.
    bool RemoteSkin(uint32_t accountId, uint16_t definition, TargetSkin& out);
}
