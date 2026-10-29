#pragma once
#include <cstdint>

namespace AutoOffsets
{
    extern uintptr_t g_entityList;
    extern uintptr_t g_localPlayerController;
    extern uintptr_t g_localPlayerPawn;

    bool Resolve();
}