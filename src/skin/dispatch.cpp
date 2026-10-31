// n1ssan-dll / src/skin/dispatch.cpp
// Per-weapon dispatch. Carried forward from v9.0.2 with [pw] diagnostics.

#include "skin/dispatch.h"
#include "skin/apply.h"
#include "sdk/item_view.h"
#include "config/offsets.h"
#include "inventory/loadout.h"
#include "memory/access.h"
#include "diagnostics/log.h"

#include <string>

bool ProcessWeapon(uintptr_t weaponEnt, uintptr_t pawn)
{
    const uintptr_t view = GetWeaponItem(weaponEnt);

    static bool g_dumpedView = false;
    if (!g_dumpedView) {
        g_dumpedView = true;
        Log("[pw] weapon=0x%p view=0x%p", (void*)weaponEnt, (void*)view);
        for (uintptr_t off = 0; off < 0x40; off += 4) {
            uint32_t v = 0;
            if (SafeReadU32(view + off, v))
                Log("[pw]   view+0x%02X = 0x%08X", (uint32_t)off, v);
        }
    }

    static bool g_dumpedWeapon = false;
    if (!g_dumpedWeapon) {
        g_dumpedWeapon = true;
        Log("[pw] weapon+0x1290..0x12F0:");
        for (uintptr_t off = 0x1290; off < 0x12F0; off += 8) {
            uintptr_t v = 0;
            if (SafeReadQword(weaponEnt + off, v))
                Log("[pw]   +0x%03X = 0x%016llX", (uint32_t)off, (unsigned long long)v);
        }
    }

    uint16_t def = 0;
    if (!SafeReadU16(view + g_off.EIV_ItemDefIndex, def) || def == 0)
        return false;

    Log("[pw] weapon 0x%p def=%u", (void*)weaponEnt, def);

    static bool g_probedTeam = false;
    if (!g_probedTeam) {
        g_probedTeam = true;
        Log("[team] pawn=0x%p, scanning +0x380..0x400:", (void*)pawn);
        for (uintptr_t off = 0x380; off < 0x400; off += 4) {
            uint8_t u8 = 0;
            if (SafeReadU8(pawn + off, u8) && u8 >= 1 && u8 <= 4)
                Log("[team]   pawn+0x%03X (u8)  = %u", (uint32_t)off, u8);
        }
    }

    uint8_t team = 0;
    SafeReadU8(pawn + g_off.PAWN_TeamNum, team);
    const char* teamStr = (team == 2) ? "T" : (team == 3) ? "CT" : "";

    // Knife: look up knife target by slot, not def
    if (IsKnifeDefinition(def)) {
        TargetSkin kt;
        bool kfound = false;
        for (auto& [k, tgt] : g_targets) {
            if (tgt.slot == "knife" &&
                ((tgt.team == "T" && team == 2) || (tgt.team == "CT" && team == 3))) {
                kt = tgt;
                kfound = true;
                break;
            }
        }
        if (kfound)
        {
            Log("[pw] knife: applying %s (pk=%d target def=%u)",
                kt.skinName.c_str(), kt.paintKit, kt.defIndex);

            const bool knifeChanged =
                KnifeApply(weaponEnt, view, kt.defIndex);

            const bool skinChanged =
                ApplyWeaponSkin(weaponEnt, pawn, kt);

            return knifeChanged || skinChanged;
        }

        Log("[pw] knife: no target for team '%s'", teamStr);
        return false;
    }

    // Weapon: strict team lookup, then any-team
    TargetSkin t;
    bool found = false;

    auto it = g_targets.find(TargetKey(def, teamStr));
    if (it != g_targets.end()) { t = it->second; found = true; Log("[pw] matched team '%s'", teamStr); }
    else {
        auto itAny = g_targets.find(TargetKey(def, ""));
        if (itAny != g_targets.end()) { t = itAny->second; found = true; Log("[pw] matched any-team"); }
    }

    if (!found)
    {
        Log("[pw] NO TARGET def=%u team=%s", def, teamStr);
        return false;
    }

    Log("[pw] applying %s (pk=%d def=%u)",
        t.skinName.c_str(), t.paintKit, t.defIndex);

    return ApplyWeaponSkin(weaponEnt, pawn, t);
}