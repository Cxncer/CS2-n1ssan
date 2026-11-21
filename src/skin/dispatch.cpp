// n1ssan-dll / src/skin/dispatch.cpp
// Per-weapon dispatch. Carried forward from v9.0.2 with [pw] diagnostics.

#include "skin/dispatch.h"
#include "skin/apply.h"
#include "sdk/item_view.h"
#include "config/offsets.h"
#include "inventory/engine_schema_diagnostic.h"
#include "inventory/loadout.h"
#include "inventory/armory_inventory.h"
#include "inventory/runtime_mode.h"
#include "memory/access.h"
#include "sdk/entities.h"
#include "sdk/handles.h"
#include "skin/glove_schema.h"
#include "diagnostics/log.h"
#include "diagnostics/armory_status.h"

#include <string>
#include <unordered_map>

namespace
{    // Lootline's IsOwnWeapon equivalent. Armory must not repaint an enemy's
    // dropped weapon merely because it appears in the local weapon handle list.
    // If schema/account ownership data is unavailable, preserve the existing
    // fail-open behavior rather than suppressing the player's own cosmetics.
    //
    // The authoritative field is C_EconItemView::m_iAccountID: it is the account
    // CS2 itself stamps on the item view, so a weapon the server created for this
    // player carries this player's id while a weapon picked up from someone else
    // keeps theirs. m_OriginalOwnerXuidLow is only a fallback, because the game
    // leaves it unset on freshly created weapons and it disagreed with the local
    // account id on the player's own pistol and knife (2026-11-20 log: a whole
    // T-side round was skipped as "non-owned", def=4, def=49, def=59).
    // The local account id the server stamps on this player's items. The
    // controller global is tried first: it is pattern-resolved at start-up, while
    // the pawn's controller handle and the m_steamID offset both come from struct
    // layout. In the 20 Nov session this returned 0, every weapon in the level
    // counted as ours, and nothing was logged about it - the "my skins are on
    // other players' guns" report.
    uint32_t LocalAccountId(uintptr_t pawn)
    {
        uintptr_t controller = 0;

        if (RVA_LOCALPLAYERCONTROLLER)
            SafeReadQword(RVA_LOCALPLAYERCONTROLLER, controller);

        if (controller < 0x10000)
        {
            uint32_t controllerHandle = 0;
            if (pawn && g_off.PAWN_hController &&
                SafeReadU32(pawn + g_off.PAWN_hController, controllerHandle) &&
                HandleValid(controllerHandle))
                controller = GetEntityByHandle(controllerHandle);
        }

        if (controller < 0x10000 || !g_off.CTRL_SteamID)
            return 0;

        uint64_t steamId = 0;
        if (!SafeReadQword(controller + g_off.CTRL_SteamID, steamId))
            return 0;

        return static_cast<uint32_t>(steamId & 0xFFFFFFFFull);
    }

    // Whose gun this is. Two independent signals, because either one alone has
    // been wrong on this client:
    //   * C_EconItemView::m_iAccountID - the account CS2 stamped on the item;
    //   * C_BaseEntity::m_hOwnerEntity - the entity holding the weapon right now.
    // A weapon the local pawn holds is ours even when its item view was copied
    // from a pickup, so the owner handle decides while it resolves and a known
    // account id decides otherwise. When neither can be read the answer stays
    // "ours" (never suppress the player's own cosmetics) but it is logged, so a
    // session that repaints foreign guns says exactly why.
    bool IsOwnArmoryWeapon(uintptr_t weaponEnt, uintptr_t pawn)
    {
        const uintptr_t view = GetWeaponItem(weaponEnt);
        const uint32_t localAccountId = LocalAccountId(pawn);

        uint32_t viewAccountId = 0;
        const bool viewAccountKnown =
            view && g_off.EIV_AccountID &&
            SafeReadU32(view + g_off.EIV_AccountID, viewAccountId) &&
            viewAccountId != 0;

        // Resolved by name at first use: the FB_* constant pointed at a different
        // member on an earlier build, and a stale owner handle makes every gun
        // look foreign.
        static uintptr_t ownerOffset = 0;
        static bool ownerOffsetTried = false;
        if (!ownerOffsetTried)
        {
            ownerOffsetTried = true;
            if (!ResolveEngineSchemaField("C_BaseEntity", "m_hOwnerEntity", ownerOffset))
                ownerOffset = 0;
        }

        uintptr_t ownerEntity = 0;
        bool ownerKnown = false;
        if (ownerOffset)
        {
            uint32_t ownerHandle = 0;
            if (SafeReadU32(weaponEnt + ownerOffset, ownerHandle) &&
                HandleValid(ownerHandle))
            {
                ownerEntity = GetEntityByHandle(ownerHandle);
                ownerKnown = ownerEntity >= 0x10000;
            }
        }

        bool own = true;
        const char* decidedBy = "no ownership data - assumed ours";

        if (ownerKnown)
        {
            own = ownerEntity == pawn;
            decidedBy = own ? "held by the local pawn" : "held by another pawn";
        }
        else if (viewAccountKnown && localAccountId)
        {
            own = viewAccountId == localAccountId;
            decidedBy = own ? "account matches" : "account differs";
        }
        else if (!localAccountId)
        {
            decidedBy = "local account id unavailable - assumed ours";
        }
        else
        {
            decidedBy = "item account id unavailable - assumed ours";
        }

        // One line per weapon view, so the next log names the field that decided.
        {
            static std::unordered_map<uintptr_t, uintptr_t> g_loggedOwnView;
            if (g_loggedOwnView[weaponEnt] != view)
            {
                g_loggedOwnView[weaponEnt] = view;
                Log("[own] weapon=%p view=%p account=%u local=%u owner=%p -> %s (%s)",
                    (void*)weaponEnt, (void*)view, viewAccountId, localAccountId,
                    (void*)ownerEntity, own ? "own" : "not ours", decidedBy);
            }
        }

        return own;
    }
}

bool ProcessWeapon(uintptr_t weaponEnt, uintptr_t pawn)
{
    const uintptr_t view = GetWeaponItem(weaponEnt);

    static bool g_dumpedView = false;
    if (!g_dumpedView) {
        g_dumpedView = true;
        DebugLog("[pw] weapon=0x%p view=0x%p", (void*)weaponEnt, (void*)view);
        for (uintptr_t off = 0; off < 0x40; off += 4) {
            uint32_t v = 0;
            if (SafeReadU32(view + off, v))
                DebugLog("[pw]   view+0x%02X = 0x%08X", (uint32_t)off, v);
        }
    }

    static bool g_dumpedWeapon = false;
    if (!g_dumpedWeapon) {
        g_dumpedWeapon = true;
        DebugLog("[pw] weapon+0x1290..0x12F0:");
        for (uintptr_t off = 0x1290; off < 0x12F0; off += 8) {
            uintptr_t v = 0;
            if (SafeReadQword(weaponEnt + off, v))
                DebugLog("[pw]   +0x%03X = 0x%016llX", (uint32_t)off, (unsigned long long)v);
        }
    }

    uint16_t def = 0;
    if (!SafeReadU16(view + g_off.EIV_ItemDefIndex, def) || def == 0)
        return false;

    DebugLog("[pw] weapon 0x%p def=%u", (void*)weaponEnt, def);

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

    if (RuntimeModeState::Current() == RuntimeMode::Armory)
    {
        if (!IsOwnArmoryWeapon(weaponEnt, pawn))
        {
            Log("[armory-apply] skipped non-owned weapon entity=%p def=%u",
                (void*)weaponEnt, def);
            ArmoryStatus::NoteSkippedEntity();
            return false;
        }

        // The live weapon view is server-built, so its EconItemView ID never
        // identifies a projected instance. Resolve through the equipment
        // assignment for this team; a definition only matches on its own when
        // every owned instance for it renders identically.
        const bool knife = IsKnifeDefinition(def);
        const char* teamLabel = teamStr[0] ? teamStr : "unknown";

        TargetSkin equipped{};
        Attachments::Set attachments;
        std::string matchDetail;
        const ArmoryInventory::ArmoryMatch match =
            ArmoryInventory::ResolveTargetForWeapon(
                def, team, knife, equipped, matchDetail, &attachments);

        if (match == ArmoryInventory::ArmoryMatch::None)
        {
            // This runs for every owned weapon on every apply tick (250 ms).
            // Logging unconditionally meant a file write and flush per weapon per
            // tick, which is stutter of its own.
            static std::unordered_map<uintptr_t, std::string> g_lastArmoryMiss;

            if (g_lastArmoryMiss[weaponEnt] != matchDetail)
            {
                g_lastArmoryMiss[weaponEnt] = matchDetail;

                Log("[armory-apply] no Armory target for live weapon def=%u team=%s (%s)",
                    def, teamLabel, matchDetail.c_str());
            }

            return false;
        }

        const char* source = "native-loadout";

        // Same per-tick path: report the resolved target only when it changes.
        {
            static std::unordered_map<uintptr_t, std::string> g_lastArmoryLog;

            const std::string signature =
                std::to_string(static_cast<unsigned>(equipped.defIndex)) + "|" +
                std::to_string(equipped.paintKit) + "|" + matchDetail;

            if (g_lastArmoryLog[weaponEnt] != signature)
            {
                g_lastArmoryLog[weaponEnt] = signature;

                Log("[armory-apply] %s live weapon def=%u team=%s paintKit=%d (%s)",
                    source, def, teamLabel, equipped.paintKit, matchDetail.c_str());
            }
        }

        if (knife)
        {
            const bool knifeChanged =
                KnifeApply(weaponEnt, view, equipped.defIndex);
            const bool skinChanged =
                ApplyWeaponSkin(weaponEnt, pawn, equipped,
                    attachments.Empty() ? nullptr : &attachments);
            return knifeChanged || skinChanged;
        }

        if (equipped.defIndex != def)
        {
            Log("[armory-apply] equipped item definition mismatch entity=%u item=%u",
                def, equipped.defIndex);
            return false;
        }

        return ApplyWeaponSkin(weaponEnt, pawn, equipped,
            attachments.Empty() ? nullptr : &attachments);
    }

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
            DebugLog("[pw] knife: applying %s (pk=%d target def=%u)",
                kt.skinName.c_str(), kt.paintKit, kt.defIndex);

            const bool knifeChanged =
                KnifeApply(weaponEnt, view, kt.defIndex);

            const bool skinChanged =
                ApplyWeaponSkin(weaponEnt, pawn, kt);

            return knifeChanged || skinChanged;
        }

        DebugLog("[pw] knife: no target for team '%s'", teamStr);
        return false;
    }

    // Weapon: strict team lookup, then any-team
    TargetSkin t;
    bool found = false;

    auto it = g_targets.find(TargetKey(def, teamStr));
    if (it != g_targets.end()) { t = it->second; found = true; DebugLog("[pw] matched team '%s'", teamStr); }
    else {
        auto itAny = g_targets.find(TargetKey(def, ""));
        if (itAny != g_targets.end()) { t = itAny->second; found = true; DebugLog("[pw] matched any-team"); }
    }

    if (!found)
    {
        DebugLog("[pw] NO TARGET def=%u team=%s", def, teamStr);
        return false;
    }

    DebugLog("[pw] applying %s (pk=%d def=%u)",
        t.skinName.c_str(), t.paintKit, t.defIndex);

    return ApplyWeaponSkin(weaponEnt, pawn, t);
}