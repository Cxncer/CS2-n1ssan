// n1ssan-dll / src/inventory/charm.cpp
// Lootline's charm upkeep, ported. See charm.h for why no attribute is written
// here: CS2 owns "keychain slot 0 id" and re-creates the charm from it; this
// only removes the extra charm entities and rebuilds the first-person addon.

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
        int      repairs = 0;
        int      lastWanted = -1;
        int      lastHanging = -1;
    };

    std::unordered_map<uintptr_t, GunState> g_guns;

    // Lootline: KEYCHAIN_CHECK_MS 1000, KEYCHAIN_MAX_REPAIRS 20.
    constexpr uint64_t CHECK_MS = 1000;
    constexpr uint64_t DEFERRED_CHECK_MS = 250;
    constexpr int MAX_REPAIRS = 20;
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

    const int wanted = DesiredKit(set);
    const int hanging = CountWorldKeychainEntities(weapon);

    // Lootline's repair: anything other than exactly one picked charm means every
    // charm comes off (ours from before and the real one CS2 hung on from the
    // inventory item), CS2 builds a fresh keychain entity from the attribute -
    // that entity is the one that simulates - and the first-person addon is
    // rebuilt from the same attribute.
    const bool duplicated = hanging > 1;
    const bool missing = wanted > 0 && hanging == 0;
    const bool selectionChanged = state.lastWanted != wanted;

    bool deferred = false;

    if ((duplicated || missing || selectionChanged) && state.repairs < MAX_REPAIRS)
    {
        const int removed = RemoveWorldKeychainEntities(weapon);
        const bool added = AddKeychainEntity(weapon);

        // With a simulated keychain entity on the gun, everything the first-person
        // weapon hangs on itself is the static second charm: take those off too,
        // plus the HUD addon, and do not ask CS2 to rebuild them. Without an
        // entity the addon is the only charm, so it is rebuilt.
        const int hudHanging = hudWeapon ? CountWorldKeychainEntities(hudWeapon) : 0;
        const int hudRemoved = added ? RemoveHudKeychainEntities(hudWeapon) : 0;
        const bool rebuilt = RebuildHudKeychainAddon(weapon, hudWeapon, !added);
        ++state.repairs;

        Log("[charm] gun=%p hud=%p wanted=%d hanging=%d removed=%d keychainEntity=%d hudHanging=%d hudRemoved=%d hudCall=%d repair=%d",
            (void*)weapon, (void*)hudWeapon, wanted, hanging, removed, added ? 1 : 0,
            hudHanging, hudRemoved, rebuilt ? 1 : 0, state.repairs);

        // A charm that should be there but whose HUD weapon could not be resolved
        // (FindHudWeapon returns 0 while CS2 is still building the viewmodel) is
        // exactly the double charm the player sees on AWP/M4A4: the world keychain
        // entity plus the static charm the keychain addon still owns. That pass did
        // not fix anything, so keep it pending and retry instead of recording the
        // gun as repaired.
        deferred = wanted > 0 && !hudWeapon;

        if (deferred)
        {
            // Retry sooner than the normal cadence: the HUD weapon only has to
            // survive a viewmodel rebuild, and the repair budget is finite.
            state.nextCheckMs = now + DEFERRED_CHECK_MS;

            Log("[charm] gun=%p repair deferred: HUD weapon not resolved (attempt %d/%d)",
                (void*)weapon, state.repairs, MAX_REPAIRS);
        }
    }
    else if (state.repairs >= MAX_REPAIRS && state.lastHanging != hanging)
    {
        Log("[charm] gun=%p wanted=%d hanging=%d repairs exhausted",
            (void*)weapon, wanted, hanging);
    }

    if (deferred)
        return;

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
