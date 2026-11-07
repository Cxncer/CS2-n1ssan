#pragma once

namespace LootPatterns
{
    // Copied verbatim from Loot's source/patterns.h (client.dll, verified unique)
    inline constexpr const char* UseTool = "48 85 D2 0F 84 ? ? ? ? 53 41 57 48 83 EC 28 49 8B D8 4C 8B F9 48 85 DB 0F 84";
    inline constexpr const char* InventoryManager = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 91 ? ? ? ? B8";
    inline constexpr const char* CreateEconItem = "48 83 EC 28 B9 48 00 00 00 E8 ? ? ? ? 48 85";
    inline constexpr const char* CreateBaseTypeCache = "40 ? 48 83 EC ? 4C 8B 49 ? 44 8B D2";
    inline constexpr const char* ItemViewById = "40 53 48 83 EC 20 48 8B D9 48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B D3 E8 ? ? ? ? 48 85 C0 75 ? 48 B8 00 00 00 00 00 00 00 F0";

    // Copied verbatim from Lootline 1.5.2 (source/patterns.h).
    // CEconTool_Sticker's "apply" (vfunc 9): where CS2's sticker placement popup
    // keeps what the player chose - mov eax, [rip] at +5 (the slot the placement is
    // relative to) and movss xmm, [rip] at +0x1C / +0x35 / +0x4C / +0x62
    // (offset x, offset y, rotation, wear).
    inline constexpr const char* StickerPlacement = "40 84 F6 75 ? 8B 05 ? ? ? ? 48 8B 4C 24 ? 83 49 10 04 89 41 28 48 8B 44 24 ? F3 0F 10 05 ? ? ? ? 81 48 10 80 00 00 00 F3 0F 11 40 3C 48 8B 44 24 ? F3 0F 10 0D ? ? ? ? 81 48 10 00 01 00 00 F3 0F 11 48 40 0F 57 C9 F3 0F 10 05 ? ? ? ? 48 8B 44 24 ? 83 48 10 20 F3 0F 11 40 34 F3 0F 10 05 ? ? ? ? 0F 2F C1";
    // CEconTool_Keychain's "apply" (vfunc 9): the charm popup's placement, movss xmm,
    // [rip] at +0, +0x27 and +0x40 (offset x / y / z).
    inline constexpr const char* KeychainPlacement = "F3 0F 10 05 ? ? ? ? 48 8B 0D ? ? ? ? 48 81 C1 A0 00 00 00 81 48 10 80 00 00 00 F3 0F 11 40 3C 48 8B 44 24 ? F3 0F 10 0D ? ? ? ? 81 48 10 00 01 00 00 F3 0F 11 48 40 48 8B 44 24 ? F3 0F 10 05 ? ? ? ? 81 48 10 00 02 00 00 F3 0F 11 40 44";
    // panorama.dll CUIEngine::RunFrame: the game's main thread, once a frame. Its
    // event dispatch silently drops events sent from any other thread, so the
    // customization notification only counts from here.
    inline constexpr const char* UiEngineRunFrame = "48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 54 41 56 41 57 48 81 EC ? ? ? ? 45 33 F6 48 8B F1 44 89 B1 ? ? ? ? 0F 31";
    // The Game Coordinator reply handler that builds CS2's "item customization"
    // event. Every field of the event is read from the instructions after it - see
    // native_apply.cpp (ResolveNotifier).
    inline constexpr const char* CrateUnlockNotify = "4C 8B 35 ? ? ? ? 44 8B 60 38 4D 85 F6";
}