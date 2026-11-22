// n1ssan-dll / src/hooks/local_spray.h
//
// Graffiti only the player sees, the way Lootline does it (features/unboxer/
// local_spray.cpp, v1.5.5): CS2's own graffiti decal is drawn in the world from
// the equipped Armory graffiti when the spray wheel fires.
//
// A spray decal is server-authoritative: the server only paints a graffiti it
// knows, and our items exist only in the client's SOCache. Lootline's answer is
// the same one used here - the game's spray action is intercepted before it
// reaches the server, and the game's own CPlayerSprayDecalRenderHelper draws the
// decal locally. That is why the 40 s cooldown used to start while nothing
// appeared: the client ran its spray timer, the server painted nothing.

#pragma once

namespace LocalSpray
{
    // Pattern scan + the spray-action hook. Called once from the init worker,
    // after the inventory projection is available. False = a signature broke;
    // the game's own spray then keeps running untouched.
    bool Initialize();

    // main thread, every frame (panorama's CUIEngine::RunFrame): keeps the
    // decals on the walls and takes them down when they fade or the map goes.
    void MainThreadTick();
}
