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

#include <windows.h>

#include <cstring>
#include <string>
#include <unordered_map>

namespace
{
    // A dead pawn's weapon entity is being torn down by CS2, and its model
    // setters run on it with nothing of ours left to keep them safe.
    // ApplyWeaponSkin refuses to touch a dead pawn's weapon for that reason (its
    // in-place paint branch runs instead); the knife swap is dispatched before
    // it and had no such guard, so it kept calling SetModel and UpdateSubclass
    // on a dying knife on every pass through the death camera. The respawn sweep
    // writes the knife again.
    //
    // Skipping the write cannot leave the knife on the wrong model: KnifeApply
    // decides from the live state (the view's own definition index and the
    // entity's subclass id) and keeps nothing between calls, so the first pass
    // with a live pawn compares the knife CS2 rebuilt against the Armory's and
    // writes it when they differ. Nothing here records "already applied".
    bool PawnIsDead(uintptr_t pawn)
    {
        int32_t health = 0;

        return pawn != 0 &&
            SafeReadI32(pawn + g_off.PAWN_Health, health) &&
            health <= 0;
    }

    // Lootline's IsOwnWeapon equivalent. Armory must not repaint an enemy's
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

        // The item's account outranks whoever is holding it.
        //
        // A gun picked up off the floor is held by the local pawn, but its item
        // view still carries the account CS2 stamped on it when that player's
        // item was created. The 21 Nov log has exactly that: account=1855171047
        // and account=1396430402 logged as "own (held by the local pawn)", and
        // those guns came back painted with the local skin the moment they were
        // picked up. Holding a gun is not owning its item, so a real account
        // that is not the local one decides before the owner handle does. The
        // small values CS2 leaves on server-made items (0 and 1) are not
        // accounts, so they keep the old behaviour instead of suppressing the
        // player's own cosmetics.
        const bool itemFromAnotherAccount =
            viewAccountKnown && localAccountId &&
            viewAccountId != localAccountId && viewAccountId >= 0x1000;

        if (itemFromAnotherAccount)
        {
            own = false;
            decidedBy = "item belongs to another account";
        }
        else if (ownerKnown)
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
            // The pass runs every 250 ms over the same weapons, so one line per
            // tick per foreign gun filled the log (232 skips in one session).
            // The line names the skip once per weapon view; the repeat count
            // stays in [session-digest] because the entity is only counted the
            // first time this view is seen skipped.
            static std::unordered_map<uintptr_t, uintptr_t> g_lastSkipLogView;
            static std::unordered_map<uintptr_t, uintptr_t> g_countedSkipView;

            const bool firstForView = g_countedSkipView[weaponEnt] != view;

            if (firstForView)
                g_countedSkipView[weaponEnt] = view;

            if (g_lastSkipLogView[weaponEnt] != view)
            {
                g_lastSkipLogView[weaponEnt] = view;
                Log("[armory-apply] skipped non-owned weapon entity=%p view=%p def=%u "
                    "(logged once per view; repeats only count in [session-digest])",
                    (void*)weaponEnt, (void*)view, def);
            }

            if (firstForView)
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
                PawnIsDead(pawn) ? false : KnifeApply(weaponEnt, view, equipped.defIndex);
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
                PawnIsDead(pawn) ? false : KnifeApply(weaponEnt, view, kt.defIndex);

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
// ── your guns out of your hands (Lootline's ProcessWorldGuns) ──
//
// When a gun leaves your hands CS2 sends it again with its real item, so a
// dropped Armory gun turned plain (its real item is the stock one). Lootline
// keeps your skin on it: every 0.5 s it walks the networked entities for
// `weapon_*`, skips the ones you are holding and the ones whose first owner is
// someone else, and runs the same per-gun pass. Its session log is the proof of
// what that looks like - "skin: your gun 4 out of your hands (it left your
// hands) got your skin back".
//
// The ownership test here is the strict one on purpose: a gun lying on the
// floor belongs to whoever dropped it, and this walk sees every gun in the
// level. Lootline paints only when the owner is provably you; so does this -
// the item view's account has to be the local account, which CS2 stamps on the
// items it creates for you and keeps on the gun after it leaves your hands.
namespace
{
    constexpr uint64_t WORLD_SCAN_MS = 500;   // Lootline's WORLD_SCAN_MS
    constexpr int MAX_WORLD_PAINTED = 8;      // per pass: this runs on the game thread
    constexpr int MAX_WORLD_REPORTS = 40;     // a session, like Lootline's cap

    struct DroppedScan
    {
        uintptr_t pawn = 0;
        uint32_t localAccount = 0;
        uint32_t held[64]{};
        int heldCount = 0;
        int painted = 0;
        int reports = 0;
    };

    bool VisitDroppedWeapon(uintptr_t entity, uint32_t index, const char* designer,
                            void* raw)
    {
        (void)index;

        DroppedScan* scan = static_cast<DroppedScan*>(raw);

        if (!designer || std::strncmp(designer, "weapon_", 7) != 0)
            return true;

        uintptr_t identity = 0;
        uint32_t handle = 0;

        if (!SafeReadQword(entity + 0x10, identity) || identity < 0x10000 ||
            !SafeReadU32(identity + 0x10, handle))
            return true;

        // In your hands: the apply pass owns it, and writing it here as well
        // would apply every held gun twice a second.
        for (int i = 0; i < scan->heldCount; ++i)
        {
            if ((scan->held[i] & 0x7FFF) == (handle & 0x7FFF))
                return true;
        }

        const uintptr_t view = GetWeaponItem(entity);

        if (!view)
            return true;

        uint16_t def = 0;

        if (!SafeReadU16(view + g_off.EIV_ItemDefIndex, def) || def == 0)
            return true;

        if (IsKnifeDefinition(def))
            return true;   // knives: in your hands only

        uint32_t viewAccount = 0;
        const bool accountKnown = g_off.EIV_AccountID &&
            SafeReadU32(view + g_off.EIV_AccountID, viewAccount) && viewAccount >= 0x1000;

        if (!scan->localAccount || !accountKnown || viewAccount != scan->localAccount)
            return true;   // not provably yours

        if (!ProcessWeapon(entity, scan->pawn))
            return true;

        if (scan->reports < MAX_WORLD_REPORTS)
        {
            ++scan->reports;
            Log("[apply-world] your gun %u out of your hands got your skin back (entity=%p)",
                static_cast<unsigned>(def), (void*)entity);
        }

        ++scan->painted;
        return scan->painted < MAX_WORLD_PAINTED;
    }
}

void ProcessDroppedWeapons(uintptr_t pawn)
{
    static uint64_t nextMs = 0;

    if (!pawn)
        return;

    const uint64_t now = GetTickCount64();

    if (now < nextMs)
        return;

    nextMs = now + WORLD_SCAN_MS;

    // A dead pawn: its guns are being destroyed and the next round hands out new
    // ones. Lootline's Run() stops after a death too.
    int32_t health = 0;

    if (!SafeReadI32(pawn + g_off.PAWN_Health, health) || health <= 0)
        return;

    uintptr_t services = 0;

    if (!SafeReadQword(pawn + g_off.PAWN_WeaponServices, services) || services < 0x10000)
        return;

    DroppedScan scan{};
    scan.pawn = pawn;
    scan.localAccount = LocalAccountId(pawn);

    const uintptr_t listOffset = g_off.WS_MyWeapons ? g_off.WS_MyWeapons : FB_WS_MyWeapons;
    int32_t count = 0;
    uintptr_t data = 0;

    SafeReadI32(services + listOffset, count);
    SafeReadQword(services + listOffset + 0x08, data);

    if (count > 0 && count <= 64 && data >= 0x10000)
    {
        for (int i = 0; i < count; ++i)
        {
            uint32_t handle = 0;

            if (SafeReadU32(data + static_cast<uintptr_t>(i) * 4, handle) &&
                HandleValid(handle))
                scan.held[scan.heldCount++] = handle;
        }
    }

    ForEachEntity(1, 0x3FFF, VisitDroppedWeapon, &scan);

    if (scan.painted > 0)
        Log("[apply-world] %d dropped weapon(s) written this scan", scan.painted);
}
