#pragma once

#include <cstdint>

// Per-slot Armory resolution state and session counters, published as a small
// JSON document next to the DLL status record (status\armory-<pid>.json).
//
// The Armory UI reads it to answer "why is this skin not showing" for a single
// slot; before this, the only answer was to grep a session log for
// [armory-apply] lines and count them by hand.
namespace ArmoryStatus
{
    enum class State
    {
        Unknown,
        // CS2's own slot holds the projected instance; nothing was overridden.
        Native,
        // CS2's slot shows a vanilla item, so the skin came from the Armory's
        // saved selection for that slot.
        SavedSlot,
        // CS2's slot holds nothing for this weapon.
        NoSelection,
        // CS2's slot holds an item that is not part of this Armory profile.
        ForeignItem,
        // The native item is ours but belongs to another weapon definition.
        DefinitionMismatch,
        // No projected inventory, or no saved selection for the slot.
        NoProjection,
        // The weapon entity belongs to another player; Armory left it alone.
        NotOwned,
        // The team or the native slot name could not be resolved.
        UnknownSlot,
    };

    const char* StateName(State state);

    // Records the latest outcome for one native slot ("rifle0", "melee",
    // "clothing_hands", ...). Cheap enough to call from the apply pass.
    void NoteSlot(const char* team, const char* slot, uint16_t definition,
                  State state, const char* detail);

    // One native-loadout restore pass finished. `timedOut` means it gave up.
    void NoteRestore(int restored, int skipped, int failed, bool timedOut);

    // A projected item did not read back the stickers or charm it was given.
    void NoteAttachReadbackFailure();

    // A weapon entity was skipped because it is not owned by the local player.
    void NoteSkippedEntity();

    // Health of the schema name sweep for this CS2 build. `coreTrusted` is false
    // when the schema answered for most fields but not the econ ones the paint
    // writes land on, which is when the runtime refuses to write at all.
    // Names of the schema fields the resolver could not find, comma separated.
    // "none" when every field resolved.
    void NoteUnresolvedOffsetNames(const char* names);

    void NoteOffsets(int checked, int applied, int unresolved,
                     bool coreTrusted, bool spawnTime);

    // True once after a slot that was showing an Armory item stopped holding it,
    // so the apply pass can run again immediately instead of waiting its turn.
    bool ConsumeDriftRequest();

    // Writes the JSON document at most once a second, and only when something
    // changed. Never writes when no slot was ever recorded (Loadout mode).
    void Tick();
}
