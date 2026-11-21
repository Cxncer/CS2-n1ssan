// n1ssan-dll / src/inventory/charm.h
// Full port of Lootline's charm (keychain) upkeep.
//
// CS2 builds the charm itself: it reads "keychain slot 0 id" from the item and
// creates the gun's keychain entity from it (C_CSWeaponBase::AddKeyChainEntity).
// That entity is the one that reacts to movement. Every model build also hangs
// rigid keychain_module copies - on the world gun and on the viewmodel - and the
// viewmodel carries its own "keychain" addon; they look identical but do not
// simulate. Lootline's job is to leave exactly one charm, the simulated one:
//   - one keychain entity on the gun is kept; duplicates, a previous
//     selection's charm and the viewmodel copies are removed;
//   - when CS2 created no entity, the viewmodel charm is kept and CS2 is asked
//     to rebuild it from the item attribute, so the gun is never left bare.
//
// This port deliberately never rewrites the keychain attributes through CS2's
// schema setters. On this client those setters fault ("CallSetAttribute: threw")
// and skin regeneration then dies on the view, which crashed the earlier
// attempt - and crashed a match start when the one-charm pass tried them again.
// The attribute is created once, at view creation, by Attachments::Write; the
// one-charm pass only edits that existing entry in place
// (Attachments::SetCharmIdInPlace).

#pragma once

#include <cstdint>

namespace Attachments { struct Set; }

namespace Charm
{
    // The charm a set asks for, 0 = none.
    int DesiredKit(const Attachments::Set* set);

    // Lootline's per-gun upkeep, at most once a second:
    //  - a gun that should carry a charm keeps the viewmodel's keychain addon
    //    (the charm CS2 simulates, the one that swings with the gun) and has
    //    every rigid keychain_module removed - on the viewmodel only once that
    //    addon is confirmed live;
    //  - a gun that should carry none has every keychain entity and the addon
    //    removed.
    // The [charm] log reports the entity counts and what was removed, so a
    // frozen charm can be told from a missing one: charmEntity=1 with
    // hudHanging=0 is the settled single animated charm. charmEntity=1 is CS2's
    // AddKeychainEntity call, which is the only thing that makes it simulate.
    // modelRebuilt says the viewmodel was just rebuilt this pass, which is when
    // CS2 hangs the rigid copies again and the only reliable moment to tell the
    // upkeep that a build happened.
    // Repairs are capped per gun (Lootline: 20) so a charm CS2 refuses to build
    // cannot loop forever.
    void Upkeep(uintptr_t weapon, uintptr_t hudWeapon, const Attachments::Set* set,
                bool modelRebuilt);

    // Forget a gun's upkeep state (weapon cache invalidation / map change).
    void Forget(uintptr_t weapon);
    void ForgetAll();

    // Stop all charm work while the pawn is dead. Death destroys the weapons, the
    // viewmodel and the keychain entities, and calling CS2's creator or remover on
    // entities that are being destroyed crashed the client. Resuming forgets every
    // gun's state, so the respawn pass repairs from scratch.
    void SetPaused(bool paused);

    // Log the charm state of a gun: wanted kit, kit the item carries, how many
    // charm entities hang on it. Read-only (Lootline's ReportCharm).
    void Report(uintptr_t weapon, uintptr_t hudWeapon, const Attachments::Set* set);
}
