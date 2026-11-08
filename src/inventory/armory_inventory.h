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
        // The player equipped this exact owned instance in CS2's Loadout
        // screen, so the in-game selection decides what is worn.
        EquippedInGame,
        // Only the exact native CS2 Loadout selection can resolve an item.
        EquippedInGame
    };

    // One projected instance, as the runtime currently knows it.
    struct ManagedItem
    {
        uint64_t        id = 0;
        std::string     instanceId;
        uint16_t        definition = 0;
        int             stickerKit = 0;
        int             keychain = 0;
        int             keychainSeed = 0;
        float           wear = 0.001f;
        Attachments::Set attachments;   // attachments already applied to this item
    };

    void StartWatcher();
    bool HasPending();
    void AdoptPending();
    bool HasItems();
    bool GetTargetForItemId(uint64_t itemId, TargetSkin& target);

    // Copies the committed managed set (guard: safe from the game thread).
    bool SnapshotManagedItems(std::vector<ManagedItem>& out);

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
        Attachments::Set* attachments = nullptr);

    // Resolve the exact owned instance worn in a non-weapon slot ("gloves",
    // "agent", "zeus") through CS2's native Loadout selection only.
    ArmoryMatch ResolveTargetForSlot(
        const char* slot,
        uint8_t teamNumber,
        TargetSkin& target,
        std::string& detail);
}
