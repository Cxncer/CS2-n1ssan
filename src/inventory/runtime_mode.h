#pragma once

#include <string>

// The user selects one runtime source at a time:
//   Loadout -> n1ssan-data.json is applied; Armory inventory is ignored.
//   Armory  -> armory-inventory.json is created; Loadout application is disabled.
enum class RuntimeMode
{
    Unknown,
    Loadout,
    Armory
};

namespace RuntimeModeState
{
    // Reads <bridge>/runtime-mode.json and keeps watching it.
    void StartWatcher(const std::string& bridgeDirectory);
    // Requested is the mode written by DOMINATE; Current is the mode fully
    // prepared and safe for the game-thread inventory hooks to use.
    RuntimeMode Requested();
    RuntimeMode Current();
    void SetCurrent(RuntimeMode mode);

    // One-shot read used before PlanA decides whether to create loadout items.
    RuntimeMode ReadFile(const std::string& bridgeDirectory);
}
