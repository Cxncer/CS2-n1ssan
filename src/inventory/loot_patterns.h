#pragma once

namespace LootPatterns
{
    // Copied verbatim from Loot's source/patterns.h (client.dll, verified unique)
    inline constexpr const char* UseTool = "48 85 D2 0F 84 ? ? ? ? 53 41 57 48 83 EC 28 49 8B D8 4C 8B F9 48 85 DB 0F 84";
    inline constexpr const char* InventoryManager = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 91 ? ? ? ? B8";
    inline constexpr const char* CreateEconItem = "48 83 EC 28 B9 48 00 00 00 E8 ? ? ? ? 48 85";
    inline constexpr const char* CreateBaseTypeCache = "40 ? 48 83 EC ? 4C 8B 49 ? 44 8B D2";
}