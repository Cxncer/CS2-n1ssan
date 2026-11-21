// n1ssan-dll / src/inventory/charm.cpp
// Lootline's charm upkeep, ported. See charm.h for why no attribute is written
// here: CS2 owns "keychain slot 0 id" and builds the charm from it; this only
// makes sure the charm on screen is the one CS2 simulates, and that the rigid
// copies the builds hang are gone.

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
        uint64_t quietUntilMs = 0;
        int      repairs = 0;
        int      lastWanted = -1;
        int      lastHanging = -1;
        int      deferredAttempts = 0;   // passes spent unable to resolve the HUD
        uintptr_t lastHud = 0;           // last resolved viewmodel weapon
        bool     pendingHud = false;     // the HUD half still needs the viewmodel
        bool     loggedUndetectable = false;
        uintptr_t addonAskedHud = 0;     // viewmodel the addon rebuild was asked on
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

void Charm::Upkeep(uintptr_t weapon, uintptr_t hudWeapon, const Attachments::Set* set,
                   bool modelRebuilt)
{
    if (!weapon)
        return;

    const uint64_t now = GetTickCount64();
    GunState& state = g_guns[weapon];

    // A model build is a real event and must not wait out the check interval:
    // the copies it just hung are the static charm the player is looking at.
    if (now < state.nextCheckMs && !modelRebuilt)
        return;

    state.nextCheckMs = now + CHECK_MS;

    // A build also cancels a quiet period, which only ever applies to a gun that
    // was already settled.
    if (modelRebuilt)
        state.quietUntilMs = 0;

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

    // A rebuilt viewmodel is a new HUD weapon carrying its own keychain copies.
    const bool hudRebuilt = hudWeapon && state.lastHud && hudWeapon != state.lastHud;

    if (hudWeapon)
        state.lastHud = hudWeapon;

    // A build is what hangs the copies again, so it also reopens the repair
    // budget: a model can be rebuilt several times per gun.
    if (modelRebuilt)
    {
        state.repairs = 0;
        state.quietUntilMs = 0;
        state.pendingHud = false;
    }

    const int hanging = CountWorldKeychainEntities(weapon);
    const int hudHanging = hudWeapon ? CountWorldKeychainEntities(hudWeapon) : 0;

    // The charm that reacts to movement is the keychain entity CS2 creates on
    // the gun with AddKeychainEntity from "keychain slot 0 id". A keychain_module
    // hung by a model build - on the gun or on the viewmodel - and the viewmodel's
    // "keychain" addon are rigid copies: a single module on the gun is that
    // simulated entity and is kept; anything else is a duplicate.
    const bool selectionChanged = state.lastWanted != wanted;
    const bool refresh = selectionChanged || hudRebuilt || modelRebuilt;

    const bool wantsRepair =
        wanted == 0
            ? (hanging > 0 || hudHanging > 0 || refresh)
            : (hanging != 1 || hudHanging > 0 || refresh);

    if (!wantsRepair)
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

    int removed = 0;

    // Duplicates and a previous selection's charm come off first: the fresh
    // entity below is then created from the attribute this apply just wrote.
    const bool removeWorld = hanging > 0 && (wanted == 0 || hanging > 1 || refresh);

    if (removeWorld)
        removed = RemoveWorldKeychainEntities(weapon);

    // CS2's own creator, which is the only thing that makes a charm simulate.
    int added = 0;

    if (wanted > 0 && (hanging == 0 || removeWorld))
        added = AddKeychainEntity(weapon) ? 1 : 0;

    int hudRemoved = 0;
    bool addonCall = false;

    // What CS2 itself created for this gun. When it is there, everything the
    // viewmodel hangs is the static twin; when it is not, the viewmodel charm is
    // the only one and must be kept.
    const bool haveEntity = added > 0 || (hanging > 0 && !removeWorld);

    if (wanted == 0)
    {
        if (hudWeapon)
        {
            hudRemoved = RemoveHudKeychainEntities(hudWeapon);
            addonCall = RebuildHudKeychainAddon(weapon, hudWeapon, false);
        }
    }
    else if (!hudWeapon)
    {
        // The charm entity is already in place; only the HUD half waits for the
        // viewmodel CS2 is still building. This does not count as a repair, so
        // the budget is not burned on passes that could not act.
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
    else if (haveEntity)
    {
        // With CS2's simulated charm on the gun, everything the viewmodel hangs
        // is the static second charm: the modules and the "keychain" addon, and
        // the addon is removed without asking for a rebuild.
        hudRemoved = RemoveHudKeychainEntities(hudWeapon);
        addonCall = RebuildHudKeychainAddon(weapon, hudWeapon, false);
    }
    else if (hudHanging > 0 || hudRebuilt)
    {
        // No simulated entity this pass: the viewmodel charm is the only one, so
        // it is kept and CS2 is asked to rebuild it from the item attribute
        // instead of leaving a frozen copy on screen. One ask per viewmodel, so a
        // rebuild CS2 already refused is never restarted pass after pass.
        if (state.addonAskedHud != hudWeapon)
        {
            state.addonAskedHud = hudWeapon;
            addonCall = RebuildHudKeychainAddon(weapon, hudWeapon, true);
        }
    }

    state.pendingHud = false;
    state.deferredAttempts = 0;
    ++state.repairs;

    // "hanging" above is the state before this pass, so a gun that was fixed by
    // the call just made would still read zero. The entity is counted again
    // here: "after" is what is on the gun now, and it is the field that says
    // whether the simulated charm is really there.
    const int after = added > 0 ? CountWorldKeychainEntities(weapon) : -1;

    Log("[charm] gun=%p hud=%p wanted=%d hanging=%d removed=%d charmEntity=%d "
        "after=%d hudHanging=%d hudRemoved=%d addonCall=%d repair=%d",
        (void*)weapon, (void*)hudWeapon, wanted, hanging, removed, added, after,
        hudHanging, hudRemoved, addonCall ? 1 : 0, state.repairs);

    // Said once per gun and selection, so a count of zero is explained instead of
    // looking like the upkeep simply is not running. Only when the call did not
    // run or did not create anything: a fresh entity was never a failure.
    if (wanted > 0 && hanging == 0 && added == 0 && !state.loggedUndetectable)
    {
        state.loggedUndetectable = true;
        Log("[charm] gun=%p carries no keychain; CS2 did not create the simulated "
            "charm from the item's keychain attribute", (void*)weapon);
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
