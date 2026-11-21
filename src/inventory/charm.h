// n1ssan-dll / src/inventory/charm.h
// Full port of Lootline's charm (keychain) upkeep.
//
// CS2 builds the first-person charm itself: it reads "keychain slot 0 id" from
// the item and simulates it as the viewmodel's own "keychain" addon, which is
// the charm that swings with the gun. The rigid keychain_module entities are
// static copies of the same charm. Lootline's job is to leave exactly one
// charm, and it is the animated one:
//   - the viewmodel addon is kept, and only a missing one is asked for again;
//   - the rigid copies are removed, on the gun and on the viewmodel - but on
//     the viewmodel only once the addon is confirmed live, so a failed rebuild
//     can never leave the gun with no charm at all.
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
    // A missing addon is asked for once per viewmodel; when it still does not
    // appear after a few passes, one fallback hands the charm back to CS2 to
    // rebuild from the item attribute, and after that it is left alone.
    // The [charm] log reports the addon state (0 unavailable or given up, 1
    // live, 2 rebuild requested, 3 removed, 4 rebuilt by CS2) beside both
    // entity counts, which is what settles which entity is the animated charm.
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

    // Log the charm state of a gun: wanted kit, kit the item carries, how many
    // charm entities hang on it. Read-only (Lootline's ReportCharm).
    void Report(uintptr_t weapon, uintptr_t hudWeapon, const Attachments::Set* set);
}
