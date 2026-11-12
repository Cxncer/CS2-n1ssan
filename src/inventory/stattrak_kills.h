// n1ssan-dll / src/inventory/stattrak_kills.h
// StatTrak persistence: the game increments the weapon's own counter ("kill
// eater" on the item view, mirrored on the weapon's fallback), so the live value
// is handed back to the Armory instance that produced the skin. The Bridge merges
// it into customization.statTrak.kills, and the next apply starts from there.

#pragma once

#include <string>

namespace StatTrakKills
{
    // Record the live count for one Armory instance. Writes only when the value
    // is new for that instance, so the apply tick does not rewrite the file.
    void Record(const std::string& instanceId, int kills);

    // Path of the file the Bridge reads (same directory as the attachment
    // detection file).
    std::string Path();
}
