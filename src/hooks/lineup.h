#pragma once

#include <cstddef>
#include <cstdint>

// The lineup screens: the team select, team intro, wingman intro and end of
// match show every player as a C_CSGO_TeamPreviewCharacterPosition character
// built from that position's own agent / gloves / weapon items. There are no
// weapon entities to paint on those screens, so the only way to show an Armory
// skin there is to dress your position's weapon item before the game builds the
// character from it (the way Lootline's Lineup module does).
namespace Lineup
{
    // Scans for the position builder and hooks it. Safe to call once at start-up;
    // logs and does nothing when the signature or MinHook is unavailable.
    void Initialize();

    // FRAME_NET_UPDATE_END: the gloves of a lineup character don't rebuild by
    // themselves, so the rebuild flag is raised and the game's glove routine is
    // run for it a few times right after it was built.
    void FrameTick();

    // The paint request of a pawn's own glove model that is still waiting for an
    // identical one to be built. The material manager only polls a request whose
    // share flag is clear, and a shared request whose "identical" one is never
    // drawn waits forever - on CT that is the in-match glove request, so the
    // gloves stay unpainted however often the item view is rewritten.
    //
    // Frees those requests and kicks the owner so they are built. True when a
    // request was actually freed; `detail` receives the counts for the log.
    bool RepairGloveMaterials(std::uintptr_t pawn, char* detail,
                              std::size_t size);
}
