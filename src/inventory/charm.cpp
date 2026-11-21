// n1ssan-dll / src/inventory/charm.cpp
// Lootline's charm upkeep, ported. See charm.h for why no attribute is written
// here: CS2 owns "keychain slot 0 id" and builds the charm from it; this only
// removes a second charm entity the game left hanging beside that one.

#include "inventory/charm.h"
#include "inventory/attachments.h"
#include "sdk/entities.h"
#include "sdk/item_view.h"
#include "diagnostics/log.h"

#include <windows.h>
#include <unordered_map>

namespace
{
    struct GunState
    {
        uint64_t nextCheckMs = 0;
        uint64_t reportAtMs = 0;
        uint64_t quietUntilMs = 0;
        int      repairs = 0;
        int      lastWanted = -1;
        int      lastHanging = -1;
        int      addedFor = -1;          // kit a keychain entity was requested for
        int      deferredAttempts = 0;   // passes spent unable to resolve the HUD
        uintptr_t lastHud = 0;           // last resolved viewmodel weapon
        bool     pendingHud = false;     // a repair still needs the HUD weapon
        bool     loggedUndetectable = false;
    };

    std::unordered_map<uintptr_t, GunState> g_guns;

    // Lootline: KEYCHAIN_CHECK_MS 1000, KEYCHAIN_MAX_REPAIRS 20.
    constexpr uint64_t CHECK_MS = 1000;
    constexpr uint64_t DEFERRED_CHECK_MS = 250;
    constexpr int MAX_REPAIRS = 20;
    constexpr int MAX_DEFERRED_ATTEMPTS = 20;

    // A gun that wants no charm and carries none needs no entity walk at all.
    // The walk is thousands of reads, and it used to run for every weapon on
    // every apply pass (250 ms), several times per repair - the freeze on a
    // weapon switch. Such a gun is only re-checked occasionally, so a charm the
    // game hangs on it later is still caught.
    constexpr uint64_t QUIET_CHECK_MS = 10000;

    // A charmed gun that is already in the right state does not need a walk every
    // second either: the only things that change it are a new selection and a new
    // viewmodel, and both are noticed without the scan.
    constexpr uint64_t SETTLED_CHECK_MS = 3000;
}

int Charm::DesiredKit(const Attachments::Set* set)
{
    return set && set->charm.present ? set->charm.kit : 0;
}

void Charm::Upkeep(uintptr_t weapon, uintptr_t hudWeapon, const Attachments::Set* set)
{
    if (!weapon)
        return;

    const uint64_t now = GetTickCount64();
    GunState& state = g_guns[weapon];

    if (now < state.nextCheckMs)
        return;

    state.nextCheckMs = now + CHECK_MS;

    if (now < state.quietUntilMs)
        return;

    const int wanted = DesiredKit(set);

    // A new selection is a new attribute value, and CS2 may build a charm from
    // it. Everything that was booked for the previous selection starts over.
    if (state.lastWanted != wanted)
    {
        state.repairs = 0;
        state.pendingHud = false;
        state.deferredAttempts = 0;
        state.loggedUndetectable = false;
    }

    // A rebuilt viewmodel is a new HUD weapon carrying a freshly built keychain
    // addon; that is the moment the static second charm comes back, and it is
    // visible without scanning anything.
    const bool hudRebuilt = hudWeapon && state.lastHud && hudWeapon != state.lastHud;

    if (hudWeapon)
        state.lastHud = hudWeapon;

    const int hanging = CountWorldKeychainEntities(weapon);

    const bool duplicated = hanging > 1;
    const bool selectionChanged = state.lastWanted != wanted;
    const bool hudWork = state.pendingHud || hudRebuilt;

    // A missing count is not a repair reason any more: the count cannot see this
    // build's charms, so "hanging == 0" is true even on a gun that is wearing
    // one, and treating it as work burned the whole repair budget on guns that
    // were already correct.
    const bool repairWanted = wanted > 0
        ? (duplicated || selectionChanged || hudWork)
        : (hanging > 0 || selectionChanged);

    if (!repairWanted)
    {
        state.nextCheckMs = now + (wanted == 0 ? QUIET_CHECK_MS : SETTLED_CHECK_MS);
        state.lastWanted = wanted;
        state.lastHanging = hanging;
        return;
    }

    if (state.repairs >= MAX_REPAIRS)
    {
        if (state.lastHanging != hanging)
            Log("[charm] gun=%p wanted=%d hanging=%d repairs exhausted",
                (void*)weapon, wanted, hanging);

        state.nextCheckMs = now + SETTLED_CHECK_MS;
        state.lastWanted = wanted;
        state.lastHanging = hanging;
        return;
    }

    // Only scan for a removal when the count says there is something to remove.
    // The count itself cannot see this build's charm entities, so a gun that
    // should carry none is still cleaned whenever the count reports any.
    const int removed = (duplicated || (wanted == 0 && hanging > 0))
        ? RemoveWorldKeychainEntities(weapon)
        : 0;

    // The item attribute is the single source: CS2 reads "keychain slot 0 id"
    // from the view and hangs the first-person charm from it.
    //
    // The HUD keychain addon is deliberately left alone now. Its 0xFF "rebuild"
    // flag was the last thing that still created a charm - every charmed gun in
    // the v2.6 log showed one repair and hudCall=1 - and the game then showed
    // two: the charm CS2 had already built from the attribute, plus the one the
    // rebuild flag asked for. AddKeychainEntity is gone for the same reason, so
    // nothing in this file creates a charm; it only removes a second one.
    const int hudHanging = hudWeapon ? CountWorldKeychainEntities(hudWeapon) : 0;

    // The HUD weapon is unresolvable while CS2 is still building the viewmodel.
    // Nothing about the charm can be settled without it, and the attempt does not
    // count against the repair budget: burning the budget on passes that could
    // not act is what left a gun unrepaired for the rest of the match.
    if (wanted > 0 && !hudWeapon)
    {
        if (++state.deferredAttempts <= MAX_DEFERRED_ATTEMPTS)
        {
            state.pendingHud = true;
            state.nextCheckMs = now + DEFERRED_CHECK_MS;

            Log("[charm] gun=%p repair deferred: HUD weapon not resolved (attempt %d/%d)",
                (void*)weapon, state.deferredAttempts, MAX_DEFERRED_ATTEMPTS);
            return;
        }

        state.pendingHud = false;
    }

    state.pendingHud = false;
    state.deferredAttempts = 0;
    ++state.repairs;

    Log("[charm] gun=%p hud=%p wanted=%d hanging=%d removed=%d hudHanging=%d repair=%d",
        (void*)weapon, (void*)hudWeapon, wanted, hanging, removed, hudHanging, state.repairs);

    // Said once per gun and selection, so a count of zero is explained instead of
    // looking like the upkeep simply is not running.
    if (wanted > 0 && hanging == 0 && !state.loggedUndetectable)
    {
        state.loggedUndetectable = true;
        Log("[charm] gun=%p nothing to clean; CS2 hangs the charm from the item's "
            "keychain attribute", (void*)weapon);
    }

    state.quietUntilMs = (wanted == 0 && hanging == 0) ? now + QUIET_CHECK_MS : 0;
    state.nextCheckMs = now + (wanted == 0 ? QUIET_CHECK_MS : SETTLED_CHECK_MS);
    state.lastWanted = wanted;
    state.lastHanging = hanging;
}

void Charm::Forget(uintptr_t weapon)
{
    if (!weapon)
        return;

    g_guns.erase(weapon);
}

void Charm::ForgetAll()
{
    g_guns.clear();
}

void Charm::Report(uintptr_t weapon, uintptr_t hudWeapon, const Attachments::Set* set)
{
    if (!weapon)
        return;

    Attachments::Set current;

    const bool readable =
        Attachments::Read(reinterpret_cast<void*>(GetWeaponItem(weapon)), current);

    Log("[charm] gun=%p wanted=%d carried=%d readable=%d world=%d",
        (void*)weapon,
        DesiredKit(set),
        readable && current.charm.present ? current.charm.kit : 0,
        readable ? 1 : 0,
        CountWorldKeychainEntities(weapon));

    (void)hudWeapon;
}
