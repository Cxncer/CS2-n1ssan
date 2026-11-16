// n1ssan-dll / src/skin/stattrak_counter.h
// StatTrak progress for Armory items.
#pragma once
#include <cstdint>

namespace StatTrakCounter
{
    // Adds the kills the local player gained since the last tick to the StatTrak
    // counter of the weapon they are holding, and saves the result to the Armory
    // instance. CS2 only raises the counter on items the server owns, so an
    // Armory item needs its own source: the player's match kill count.
    void Tick(std::uintptr_t pawn);

    // Forget the last seen kill count (match ended, pawn changed).
    void Reset();
}
