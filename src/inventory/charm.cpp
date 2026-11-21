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
        bool     pendingHud = false;     // a repair still needs the HUD weapon
        bool     loggedUndetectable = false;

        // The viewmodel "keychain" addon, which is the charm CS2 simulates. One
        // hand-back per wanted kit, plus at most one request per viewmodel, so
        // its 0xFF rebuild state is never rewritten pass after pass.
        uintptr_t addonHud = 0;          // viewmodel the fields below belong to
        int       addonKit = 0;          // kit the addon was last rebuilt for
        bool      addonAsked = false;    // this viewmodel was asked for the addon
        bool      addonGaveUp = false;   // nothing more can be done; leave it be
        bool      addonPending = false;  // last pass saw it asked for, not there
        int       addonMisses = 0;       // passes waited for that addon
    };

    std::unordered_map<uintptr_t, GunState> g_guns;

    // Lootline: KEYCHAIN_CHECK_MS 1000, KEYCHAIN_MAX_REPAIRS 20.
    constexpr uint64_t CHECK_MS = 1000;
    constexpr uint64_t DEFERRED_CHECK_MS = 250;
    constexpr int MAX_REPAIRS = 20;
    constexpr int MAX_DEFERRED_ATTEMPTS = 20;

    // Settled checks spent waiting for a requested addon rebuild to show up
    // before the fallback repair runs (a few seconds).
    constexpr int ADDON_PENDING_PASSES = 3;

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

    // The animated charm is the viewmodel's own "keychain" addon; this is what
    // the addon= field of the [charm] log reports.
    enum AddonState
    {
        ADDON_UNKNOWN = 0,   // no viewmodel, no signature, or given up
        ADDON_LIVE    = 1,   // it is there: the rigid copies may go
        ADDON_PENDING = 2,   // a rebuild was asked for, not there yet
        ADDON_ABSENT  = 3,   // no charm wanted: it was removed
    };

    AddonState ResolveAddon(GunState& state, uintptr_t weapon, uintptr_t hudWeapon,
                            int wanted)
    {
        if (!hudWeapon)
            return ADDON_UNKNOWN;

        if (wanted == 0)
            return RebuildHudKeychainAddon(weapon, hudWeapon, false) ? ADDON_ABSENT
                                                                    : ADDON_UNKNOWN;

        // A different viewmodel has a different addon dictionary and may carry
        // a fresh addon, so the latches restart with it - including a gun that
        // gave up on the previous one. The kit below stays per gun: the new
        // addon is built from the item view, which already holds the Armory
        // charm.
        if (state.addonHud != hudWeapon)
        {
            state.addonHud = hudWeapon;
            state.addonAsked = false;
            state.addonGaveUp = false;
            state.addonMisses = 0;
        }

        if (state.addonGaveUp)
            return ADDON_UNKNOWN;

        // The addon is built from the item view's "keychain slot 0 id", and it
        // outlives the apply that changes that id: a weapon bought with a real
        // charm kept the addon CS2 built from it while the fake skin rendered.
        // Hand it back once per kit so CS2 rebuilds it from the Armory charm.
        if (state.addonKit != wanted)
        {
            state.addonKit = wanted;
            state.addonAsked = true;
            state.addonMisses = 1;

            if (!RebuildHudKeychainAddon(weapon, hudWeapon, true))
            {
                state.addonGaveUp = true;
                Log("[charm] gun=%p hud=%p addon=0 - could not hand the addon back "
                    "for kit=%d", (void*)weapon, (void*)hudWeapon, wanted);
                return ADDON_UNKNOWN;
            }

            Log("[charm] gun=%p hud=%p handed the addon back for kit=%d",
                (void*)weapon, (void*)hudWeapon, wanted);
            return ADDON_PENDING;
        }

        if (EnsureHudKeychainAddon(weapon, hudWeapon, false) == 1)
        {
            state.addonMisses = 0;
            return ADDON_LIVE;
        }

        // Missing on a viewmodel that has not asked yet: one request.
        if (!state.addonAsked)
        {
            state.addonAsked = true;
            state.addonMisses = 1;
            return EnsureHudKeychainAddon(weapon, hudWeapon, true) == 2 ? ADDON_PENDING
                                                                       : ADDON_UNKNOWN;
        }

        if (++state.addonMisses <= ADDON_PENDING_PASSES)
            return ADDON_PENDING;

        state.addonGaveUp = true;
        return ADDON_UNKNOWN;
    }
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
    // the addon it just re-hung is the static charm the player is looking at.
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

        state.addonKit = 0;          // a new selection is a new kit
        state.addonAsked = false;
        state.addonGaveUp = false;
        state.addonPending = false;
        state.addonMisses = 0;
    }

    // A rebuilt viewmodel is a new HUD weapon carrying its own keychain addon.
    const bool hudRebuilt = hudWeapon && state.lastHud && hudWeapon != state.lastHud;

    if (hudWeapon)
        state.lastHud = hudWeapon;

    // A build is what hangs the rigid copies again, so it also reopens the
    // repair budget: a model can be rebuilt several times per gun.
    if (modelRebuilt)
    {
        state.repairs = 0;
        state.quietUntilMs = 0;
        state.pendingHud = false;

        // A build hangs the rigid copies again and may drop the addon with the
        // old viewmodel, so this is a fresh chance rather than a permanent
        // give-up.
        state.addonAsked = false;
        state.addonGaveUp = false;
        state.addonMisses = 0;
    }

    const int hanging = CountWorldKeychainEntities(weapon);
    const int hudHanging = hudWeapon ? CountWorldKeychainEntities(hudWeapon) : 0;

    // Every keychain_module is a rigid copy: CS2's simulated charm is the
    // viewmodel addon, so a module on the gun or on the viewmodel is surplus.
    const bool worldSurplus = hanging > 0;

    const bool selectionChanged = state.lastWanted != wanted;
    const bool hudWork = state.pendingHud || hudRebuilt || modelRebuilt;

    // Once the addon is given up on, no pass can do anything about the HUD
    // copies, so the walk is not repeated for them.
    const bool hudActionable = wanted == 0 || !state.addonGaveUp;

    const bool repairWanted =
        worldSurplus ||
        (hudHanging > 0 && hudActionable) ||
        state.addonPending ||
        selectionChanged ||
        hudWork;

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

    int removed = 0;

    if (worldSurplus)
        removed = RemoveWorldKeychainEntities(weapon);

    // The HUD weapon is unresolvable while CS2 is still building the viewmodel.
    // Nothing about the addon can be settled without it, and the attempt does
    // not count against the repair budget: burning the budget on passes that
    // could not act is what left a gun unrepaired for the rest of the match.
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

    // The addon is resolved FIRST: nothing rigid comes off the viewmodel until
    // the animated charm is confirmed live, or has just been handed back to CS2
    // to rebuild. Removing the copies on the assumption that the addon will
    // follow is what could leave a gun with no charm at all.
    const AddonState addonState = ResolveAddon(state, weapon, hudWeapon, wanted);

    state.addonPending = addonState == ADDON_PENDING;

    int hudRemoved = 0;

    if (hudHanging > 0)
    {
        if (addonState == ADDON_LIVE || addonState == ADDON_ABSENT)
        {
            hudRemoved = RemoveHudKeychainEntities(hudWeapon);
        }
        else
        {
            Log("[charm] gun=%p hud=%p addon=%d - keeping %d HUD keychain module%s "
                "until the animated addon is confirmed",
                (void*)weapon, (void*)hudWeapon, (int)addonState, hudHanging,
                hudHanging == 1 ? "" : "s");
        }
    }

    const int hudLeft = hudHanging > hudRemoved ? hudHanging - hudRemoved : 0;

    state.pendingHud = false;
    state.deferredAttempts = 0;
    ++state.repairs;

    // addon: 0 unavailable or given up, 1 live (animated charm kept), 2 rebuild
    // requested (copies kept until it lands), 3 removed (none wanted). hudLeft
    // is what is still on the viewmodel after this pass, so the settled
    // one-charm state reads addon=1 with hudLeft=0.
    Log("[charm] gun=%p hud=%p wanted=%d addon=%d hanging=%d removed=%d "
        "hudHanging=%d hudRemoved=%d hudLeft=%d repair=%d",
        (void*)weapon, (void*)hudWeapon, wanted, (int)addonState, hanging, removed,
        hudHanging, hudRemoved, hudLeft, state.repairs);

    // Said once per gun and selection, so a count of zero is explained instead of
    // looking like the upkeep simply is not running.
    if (wanted > 0 && hanging == 0 && !state.loggedUndetectable)
    {
        state.loggedUndetectable = true;
        Log("[charm] gun=%p carries no world keychain; the charm on it is the HUD "
            "one built from the item's keychain attribute", (void*)weapon);
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
