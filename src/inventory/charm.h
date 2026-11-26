// n1ssan-dll / src/inventory/charm.h
// Lootline's charm (keychain) path, copied.
//
// CS2 builds the charm itself: it reads "keychain slot 0 id" from the item and
// creates the gun's keychain entity from it (C_CSWeaponBase::AddKeyChainEntity).
// That entity is the one that reacts to movement. Every model build also hangs
// rigid keychain_module copies, and the viewmodel carries its own "keychain"
// addon.
//
// Lootline's shape, which this mirrors:
//   - the skin pass only RECORDS what a gun should carry (QueueKeychainState);
//     it never creates or removes an entity from there;
//   - the entity work runs at FRAME_NET_UPDATE_END, after the game's own
//     net-update call, for the gun in your hands only (ProcessPendingKeychains,
//     IsActiveWeapon);
//   - a pending operation waits while that gun is holstered, and is dropped when
//     the weapon pointer no longer names the same gun;
//   - once a second, the gun in your hands is checked: anything other than
//     exactly the picked charm (or any charm at all when none was picked) is
//     repaired, at most 20 times per gun.
//
// The one thing that is not Lootline's: the keychain attribute is written in
// place (Attachments::SetCharmIdInPlace / ClearCharmInPlace) instead of through
// CS2's schema setters, which fault on this client.

#pragma once

#include <cstdint>

namespace Attachments { struct Set; }

namespace Charm
{
    // The charm a set asks for, 0 = none.
    int DesiredKit(const Attachments::Set* set);

    // The apply pass calls this for every gun it dressed: records the desired
    // charm and queues the entity work if it changed. No entity is touched here.
    // `modelRebuilt` only asks for an early re-check (a build re-hangs a copy).
    void Request(uintptr_t weapon, int kit, bool modelRebuilt);

    // Lootline's ProcessPendingKeychains, called from FRAME_NET_UPDATE_END after
    // the original call. Handles the gun in your hands only: a pending operation
    // on a holstered gun waits until you pull it out.
    void ProcessPending(uintptr_t activeWeapon, uintptr_t pawn);

    // Forget a gun's state (weapon cache invalidation / map change).
    void Forget(uintptr_t weapon);
    void ForgetAll();

    // Stop all charm work while the pawn is dead or out of a match: the weapons,
    // the viewmodel and their keychain entities are being torn down, and CS2's
    // creator / remover must not run on them.
    void SetPaused(bool paused);

    // Log the charm state of a gun (read-only).
    void Report(uintptr_t weapon, uintptr_t hudWeapon, const Attachments::Set* set);
}
