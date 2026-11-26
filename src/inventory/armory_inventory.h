#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "inventory/attachments.h"

struct TargetSkin;

// Armory inventory injection: recreates the active Armory profile's items in
// CS2's local inventory. Separate from Loadout; the files are produced by the
// Bridge and adopted on the game thread outside an active match.
namespace ArmoryInventory
{
    // Why a live weapon resolved (or failed to resolve) to an Armory instance.
    enum class ArmoryMatch
    {
        // Nothing safe to apply.
        None,
        // Only the exact native CS2 Loadout selection can resolve an item.
        EquippedInGame
    };

    // One projected instance, as the runtime currently knows it.
    struct ManagedItem
    {
        uint64_t        id = 0;
        // The id this instance had under the pre-v7.11 hash scheme. Lets state
        // written before the change (a Storage Unit's contents, the delivered
        // record) find the same item again.
        uint64_t        legacyId = 0;
        std::string     instanceId;
        uint16_t        definition = 0;
        // Everything an item needs to be made again (a stored item is created
        // anew inside its unit), taken from the projection.
        int             quality = 4;
        int             rarity = 4;
        int             paintKit = 0;
        int             seed = 0;
        int             statTrak = -1;   // -1 = none
        int             musicKit = 0;
        int             spraysRemaining = 0;
        int             stickerKit = 0;
        int             sprayTint = 0;   // a graffiti's colour variant (0 = default)
        int             keychain = 0;
        int             keychainSeed = 0;
        int             keychainSticker = 0;   // a Slab's sealed sticker
        float           wear = 0.001f;
        Attachments::Set attachments;   // attachments already applied to this item
        std::string     customName;     // a Storage Unit's label, empty otherwise
        // CS2 attribute 75 "Tradable After" (unix seconds); 0 = no date.
        uint32_t        tradableAfter = 0;
        // An agent's model path from the Armory; empty keeps its own model.
        std::string     modelPath;
    };

    void StartWatcher();
    bool HasPending();
    void AdoptPending();
    bool HasItems();
    bool GetTargetForItemId(uint64_t itemId, TargetSkin& target);

    // Copies the committed managed set (guard: safe from the game thread).
    bool SnapshotManagedItems(std::vector<ManagedItem>& out);

    // The committed managed item behind a live item id, without copying the
    // whole set. False when the id is not part of the projection.
    bool FindManaged(uint64_t itemId, ManagedItem& out);

    // The committed managed item that carried `legacyId` before the v7.11 id
    // change. Used only to carry persisted state across it.
    bool FindManagedByLegacyId(uint64_t legacyId, ManagedItem& out);

    // How many committed items carry a definition: a Storage Unit's contents
    // and a detachment pack's charges are counted from these.
    int CountManagedByDefinition(uint16_t definition);

    // Increments every time a new projection is published, so a module holding
    // runtime state per item (the tools' storage units) can re-apply it after
    // an Apply has rewritten the items.
    uint64_t AdoptionGeneration();

    // Profile and inventory revision the committed projection was built from.
    bool SessionInfo(std::string& profileId, int& inventoryRevision);

    // Directory that holds the Bridge documents, with a trailing separator.
    std::string BridgeDirectory();

    // Resolve the Armory instance that belongs to a live weapon.
    //   definition: live C_EconItemView definition index.
    //   teamNumber: 2 = T, 3 = CT, anything else = unknown.
    //   knife:      resolve through the equipment slot, because the live
    //               knife's definition may still be the default knife.
    //   detail:     short human-readable reason, for one-line diagnostics.
    //   attachments: when not null, receives the matched instance's sticker /
    //               charm state (empty when nothing matched).
    ArmoryMatch ResolveTargetForWeapon(
        uint16_t definition,
        uint8_t teamNumber,
        bool knife,
        TargetSkin& target,
        std::string& detail,
        Attachments::Set* attachments = nullptr,
        // The client-inventory id of the native item the player wears in this
        // slot, when the match came from CS2's own Loadout selection.
        uint64_t* liveItemId = nullptr);

    // Resolve the exact owned instance worn in a non-weapon slot ("gloves",
    // "agent", "zeus") through CS2's native Loadout selection only.
    ArmoryMatch ResolveTargetForSlot(
        const char* slot,
        uint8_t teamNumber,
        TargetSkin& target,
        std::string& detail);
}
