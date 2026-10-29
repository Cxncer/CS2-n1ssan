// n1ssan-dll / src/inventory/loadout.h
// Target skin table + JSON loadout parser.
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>
#include <string>
#include <unordered_map>

// One target to apply. Built from a JSON item at load time.
struct TargetSkin
{
    int         paintKit = 0;
    int         resolvedSeed = 0;
    float       wear = 0.5f;
    bool        legacyModel = false;
    bool        statTrak = false;
    std::string skinName;
    std::string weaponName;
    std::string team;
    std::string slot;
    uint16_t    defIndex = 0;
};

// (defIndex << 8) | teamBit — teamBit: 0=T, 1=CT, 2=any.
uint32_t TargetKey(uint16_t def, const std::string& team);

// Populated by LoadLoadout(). Read by dispatch/apply code.
extern std::unordered_map<uint32_t, TargetSkin> g_targets;

// Global enable flag. Parsed from JSON's top-level "enabled" boolean.
extern bool g_enabled;

// Resolved once during InjectThread — the JSON path that actually loaded.
extern std::string g_loadoutSource;

// Try the standard candidate paths, parse the first one that works,
// and populate g_targets. Logs every item imported.
void LoadLoadout();