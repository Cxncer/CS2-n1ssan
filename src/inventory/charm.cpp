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
    }

    // A rebuilt viewmodel is a new HUD weapon carrying a freshly built keychain
    // addon, and the addon is one of the two charms the player sees.
    const bool hudRebuilt = hudWeapon && state.lastHud && hudWeapon != state.lastHud;

    if (hudWeapon)
        state.lastHud = hudWeapon;

    // A build is what hangs the static addon again, so it also reopens the
    // repair budget: a model can be rebuilt several times per gun.
    if (modelRebuilt)
    {
        state.repairs = 0;
        state.quietUntilMs = 0;
        state.pendingHud = false;
    }

    const int hanging = CountWorldKeychainEntities(weapon);

    // One keychain module on the gun is the charm that swings: it is simulated,
    // and it is left alone. Anything beyond that is a rigid copy hung by a
    // model build from the same attribute. Removing the one module as well is
    // what made the charm vanish and come back as a static one.
    const int expected = wanted > 0 ? 1 : 0;
    const bool worldSurplus = hanging > expected;

    // The HUD keychain modules are only counted when no charm is wanted, where
    // every one of them has to go. A keychain module on the HUD weapon is the
    // simulated charm, not the static copy: the static copy is the keychain
    // addon, which is not an entity of this class and therefore cannot be
    // counted - it is removed around the addon handle instead.
    const int hudHanging = (wanted == 0 && hudWeapon)
        ? CountWorldKeychainEntities(hudWeapon)
        : -1;

    const bool selectionChanged = state.lastWanted != wanted;
    const bool hudWork = state.pendingHud || hudRebuilt || modelRebuilt;

    const bool repairWanted =
        worldSurplus ||
        (wanted == 0 && (hanging > 0 || hudHanging > 0)) ||
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
    bool added = false;

    if (worldSurplus)
    {
        // Every module comes off together, then one simulated charm is asked
        // for again: CS2 has no "remove just the copies" call, and leaving the
        // gun with none made the game re-hang a rigid one on the next build.
        removed = RemoveWorldKeychainEntities(weapon);

        if (wanted > 0)
            added = AddKeychainEntity(weapon);
    }
    else if (wanted == 0 && hanging > 0)
    {
        removed = RemoveWorldKeychainEntities(weapon);
    }

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

    // With no charm wanted, every module on the viewmodel goes too.
    const int hudRemoved =
        (wanted == 0 && hudHanging > 0) ? RemoveHudKeychainEntities(hudWeapon) : 0;

    // The static charm: the "keychain" addon CS2 hangs on the viewmodel. It is
    // removed together with its dictionary entry, and the 0xFF rebuild request
    // is deliberately not written - that is what asked CS2 for a second charm.
    // The keychain module beside it is untouched, so the charm that swings
    // stays on the gun.
    const bool addonCleared =
        hudWeapon ? RebuildHudKeychainAddon(weapon, hudWeapon, false) : false;

    state.pendingHud = false;
    state.deferredAttempts = 0;
    ++state.repairs;

    Log("[charm] gun=%p hud=%p wanted=%d hanging=%d removed=%d added=%d hudHanging=%d hudRemoved=%d addonCleared=%d repair=%d",
        (void*)weapon, (void*)hudWeapon, wanted, hanging, removed, added ? 1 : 0,
        hudHanging, hudRemoved, addonCleared ? 1 : 0, state.repairs);

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
