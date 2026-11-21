// n1ssan-dll / src/inventory/charm.h
// Full port of Lootline's charm (keychain) upkeep.
//
// Lootline never builds the charm entity itself: CS2 reads "keychain slot 0 id"
// from the item and hangs the charm on the gun, and it re-hangs it whenever the
// gun spawns or comes out again. Lootline's job is therefore only to make sure
// exactly ONE charm is hanging, which it does by
//   - removing every world keychain entity the gun carries
//     (RemoveKeychainModule per entity, Lootline's RemoveWorldKeychains), and
// That is all. The HUD weapon's keychain addon is deliberately not touched:
// asking CS2 to rebuild it (keychainState = 0xFF) added a second charm beside
// the one it had already built from the item attribute.
//
// This port deliberately does the same and nothing more: it never rewrites the
// keychain attributes through CS2's schema setters. On this client those setters
// fault ("CallSetAttribute: threw") and skin regeneration then dies on the view,
// which crashed the earlier attempt - and crashed a match start when the
// one-charm pass tried them again. The attribute is created once, at view
// creation, by Attachments::Write; the one-charm pass only edits that existing
// entry's value in place (Attachments::SetCharmIdInPlace).

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
    //    the rigid keychain_module copies removed, on the gun and on the
    //    viewmodel alike - but the viewmodel's copies only once that addon is
    //    confirmed live, so a failed rebuild can never leave a gun charmless;
    //  - a gun that should carry none has every keychain entity and the addon
    //    removed.
    // The log line reports the addon state (0 unavailable, 1 live, 2 rebuild
    // requested, 3 removed) beside both entity counts, which is what settles
    // which of them is the animated charm.
    // modelRebuilt says the viewmodel was just rebuilt this pass, which is when
    // CS2 hangs the static addon again and the only reliable moment to tell the
    // upkeep that the static charm is back.
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
