// n1ssan-dll / src/inventory/charm.cpp
// Lootline's charm path, copied: the apply pass only records what a gun should
// carry, and the entity work happens at FRAME_NET_UPDATE_END, after the game's
// own net-update call, for the gun in your hands.
//
// See charm.h for the shape and for the one deliberate difference (the keychain
// attribute is written in place, because this client's schema setters fault).

#include "inventory/charm.h"
#include "inventory/attachments.h"
#include "sdk/entities.h"
#include "sdk/item_view.h"
#include "sdk/scene_node.h"
#include "diagnostics/log.h"

#include <windows.h>
#include <unordered_map>

namespace
{
    struct Gun
    {
        int      desiredKit = 0;      // what the loadout wants
        bool     hasDesired = false;  // an apply pass has told us
        int      appliedKit = 0;      // what went on last (0 = none)
        bool     hasApplied = false;
        bool     pending = false;     // an operation is queued
        int      attempts = 0;        // passes spent unable to complete it
        int      repairs = 0;         // Lootline KEYCHAIN_MAX_REPAIRS counter
        uint64_t nextCheckMs = 0;
    };

    std::unordered_map<uintptr_t, Gun> g_guns;

    // Lootline: KEYCHAIN_CHECK_MS 1000, KEYCHAIN_MAX_REPAIRS 20.
    constexpr uint64_t CHECK_MS = 1000;
    constexpr int MAX_REPAIRS = 20;

    // A create CS2 refuses would otherwise be retried every frame the gun is in
    // your hands; Lootline drops its operation either way.
    constexpr int MAX_ATTEMPTS = 20;

    bool g_paused = false;
}

int Charm::DesiredKit(const Attachments::Set* set)
{
    return set && set->charm.present ? set->charm.kit : 0;
}

void Charm::Request(uintptr_t weapon, int kit, bool modelRebuilt)
{
    if (!weapon)
        return;

    Gun& gun = g_guns[weapon];

    // A new selection is a new desired state: it goes on as soon as the gun is
    // in your hands, and its repair budget starts over.
    if (!gun.hasDesired || gun.desiredKit != kit)
    {
        gun.desiredKit = kit;
        gun.hasDesired = true;
        gun.repairs = 0;
        gun.attempts = 0;
        gun.nextCheckMs = 0;
        gun.pending = true;
        return;
    }

    // A model build re-hangs a rigid copy of the charm; the next check sees it.
    // No operation is queued for it: the once-a-second count is what decides
    // whether anything is wrong.
    if (modelRebuilt)
        gun.nextCheckMs = 0;
}

void Charm::ProcessPending(uintptr_t activeWeapon, uintptr_t pawn)
{
    if (g_paused || !activeWeapon)
        return;

    Gun& gun = g_guns[activeWeapon];
    const uint64_t now = GetTickCount64();

    const uintptr_t item = GetWeaponItem(activeWeapon);

    // A weapon entity without a readable item view is being built or torn down.
    if (!item)
        return;

    // Lootline's upkeep, on the gun in your hands only, at most once a second.
    if (!gun.pending && gun.hasDesired && gun.repairs < MAX_REPAIRS &&
        now >= gun.nextCheckMs)
    {
        gun.nextCheckMs = now + CHECK_MS;

        int hanging = 0;
        const int count = CountWorldKeychainEntities(activeWeapon, &hanging);

        const bool wrong = gun.desiredKit > 0
            ? (count != 1 || (hanging != 0 && hanging != gun.desiredKit))
            : (count > 0);

        if (wrong)
        {
            ++gun.repairs;
            gun.pending = true;

            Log("[charm] gun=%p wanted=%d hanging=%d first=%d: repairing (%d/%d)",
                (void*)activeWeapon, gun.desiredKit, count, hanging,
                gun.repairs, MAX_REPAIRS);
        }
    }

    if (!gun.pending || !gun.hasDesired)
        return;

    const uintptr_t hudWeapon = FindHudWeapon(activeWeapon, pawn);
    int removed = 0;
    bool completed = true;

    if (gun.desiredKit == 0)
    {
        // Lootline: the item has no charm any more. The attribute is cleared
        // first - it is what CS2 rebuilds the charm from - then the operation
        // depends on what was there:
        //   - ours from before: AddKeyChainEntity takes it off (the attribute is
        //     already 0, so nothing is created);
        //   - no charm of ours, but the real item's hangs on the gun: every
        //     module comes off.
        const int cleared = Attachments::ClearCharmInPlace(
            reinterpret_cast<void*>(item));

        if (gun.hasApplied && gun.appliedKit > 0)
            AddKeychainEntity(activeWeapon);
        else
            removed = RemoveWorldKeychainEntities(activeWeapon);

        RebuildHudKeychainAddon(activeWeapon, hudWeapon, true);

        Log("[charm] gun=%p charm off: attribute cleared=%d, %d module(s) removed",
            (void*)activeWeapon, cleared, removed);
    }
    else
    {
        // Lootline: SetKeychainId, then EVERY charm comes off - ours from before
        // and the real one CS2 hung from your inventory item - then ours goes on
        // and the first-person model rebuilds its copy.
        Attachments::Set current;
        const bool readable = Attachments::Read(reinterpret_cast<void*>(item), current);
        const int carried = readable && current.charm.present ? current.charm.kit : 0;

        if (carried != gun.desiredKit)
        {
            const int written = Attachments::SetCharmIdInPlace(
                reinterpret_cast<void*>(item), gun.desiredKit);

            Log("[charm] gun=%p attribute %d -> %d written in place (%d entries)",
                (void*)activeWeapon, carried, gun.desiredKit, written);
        }

        removed = RemoveWorldKeychainEntities(activeWeapon);

        completed = AddKeychainEntity(activeWeapon);

        RebuildHudKeychainAddon(activeWeapon, hudWeapon, true);

        Log("[charm] gun=%p charm %d on: %d module(s) taken off first, "
            "entity created=%d, hud=%p",
            (void*)activeWeapon, gun.desiredKit, removed, completed ? 1 : 0,
            (void*)hudWeapon);
    }

    if (completed)
    {
        gun.appliedKit = gun.desiredKit;
        gun.hasApplied = true;
        gun.pending = false;
        gun.attempts = 0;
        gun.nextCheckMs = now + CHECK_MS;
        return;
    }

    if (++gun.attempts >= MAX_ATTEMPTS)
    {
        gun.pending = false;
        gun.nextCheckMs = now + CHECK_MS;

        Log("[charm] gun=%p wanted=%d: CS2 created no charm after %d attempts; "
            "left alone", (void*)activeWeapon, gun.desiredKit, gun.attempts);
    }
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

void Charm::SetPaused(bool paused)
{
    if (paused == g_paused)
        return;

    g_paused = paused;

    // Everything booked so far describes entities of the life that just ended,
    // so the first live pass after the respawn starts every gun over instead of
    // trusting state taken before the teardown.
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
