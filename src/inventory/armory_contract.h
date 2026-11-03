#pragma once

// Canonical Armory Inventory Contract v1.0.
// Data-only application model. This header does not access CS2 or mutate runtime state.

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <variant>
#include <vector>

namespace Armory
{
    inline constexpr std::uint32_t SCHEMA_VERSION = 1;
    inline constexpr std::size_t MAX_STICKER_SLOTS = 6;
    inline constexpr std::uint64_t MAX_SAFE_INTEGER = 9007199254740991ULL;
    using SafeId = std::uint64_t;

    enum class Team : std::uint8_t
    {
        T,
        CT
    };

    enum class ItemType : std::uint8_t
    {
        Weapon,
        Knife,
        Gloves,
        Agent,
        Zeus,
        Sticker,
        Charm,
        Case,
        Container,
        MusicKit,
        Patch,
        Graffiti,
        Other
    };

    using MetadataValue = std::variant<std::nullptr_t, bool, std::int64_t, double, std::string>;
    using Metadata = std::unordered_map<std::string, MetadataValue>;

    struct Finish
    {
        SafeId paintKitId = 0;
        float wear = 0.0f;
        SafeId seed = 0;
    };

    struct StatTrak
    {
        bool enabled = false;
        std::optional<SafeId> kills;
    };

    struct Sticker
    {
        std::uint8_t slot = 0;
        SafeId kitId = 0;
        float wear = 0.0f;
        float rotation = 0.0f;
        float offsetX = 0.0f;
        float offsetY = 0.0f;
        std::int32_t schema = -1;
    };

    struct Charm
    {
        std::uint32_t kitId = 0;
        std::uint32_t seed = 0;
        float x = 0.0f;
        float y = 0.0f;
        float z = 0.0f;
        std::optional<SafeId> stickerKitId;
        std::optional<SafeId> highlightId;
    };

    struct Item
    {
        std::string instanceId;
        SafeId definitionId = 0;
        ItemType type = ItemType::Other;
        std::string name;
        std::optional<Finish> finish;
        StatTrak statTrak;
        std::optional<std::string> customName;
        std::vector<Sticker> stickers;
        std::optional<Charm> charm;
        Metadata metadata;
    };

    struct EquipmentAssignment
    {
        Team team = Team::T;
        std::string slot;
        std::string instanceId;
    };

    struct InventoryProfile
    {
        std::string profileId;
        std::string name;
        std::vector<Item> items;
        std::vector<EquipmentAssignment> equipment;
    };

    struct Document
    {
        std::uint32_t schemaVersion = SCHEMA_VERSION;
        std::string catalogueVersion;
        std::vector<InventoryProfile> profiles;
    };

    struct ValidationResult
    {
        bool valid = false;
        std::vector<std::string> errors;
    };

    inline bool IsValidItemType(ItemType type)
    {
        switch (type)
        {
        case ItemType::Weapon:
        case ItemType::Knife:
        case ItemType::Gloves:
        case ItemType::Agent:
        case ItemType::Zeus:
        case ItemType::Sticker:
        case ItemType::Charm:
        case ItemType::Case:
        case ItemType::Container:
        case ItemType::MusicKit:
        case ItemType::Patch:
        case ItemType::Graffiti:
        case ItemType::Other:
            return true;
        default:
            return false;
        }
    }

    inline bool IsSafeId(SafeId value)
    {
        return value <= MAX_SAFE_INTEGER;
    }

    inline bool IsWearValid(float value)
    {
        return std::isfinite(value) && value >= 0.0f && value <= 1.0f;
    }

    inline ItemType ExpectedTypeForEquipmentSlot(const std::string& slot)
    {
        if (slot == "melee") return ItemType::Knife;
        if (slot == "clothing_hands") return ItemType::Gloves;
        if (slot == "agent") return ItemType::Agent;
        if (slot == "zeus") return ItemType::Zeus;
        return ItemType::Weapon;
    }

    // Structural validation only. Catalogue existence and paint-kit compatibility
    // require a separately verified catalogue resolver.
    inline ValidationResult ValidateDocument(const Document& document)
    {
        ValidationResult result;
        auto error = [&result](const std::string& message) {
            result.errors.push_back(message);
        };

        if (document.schemaVersion != SCHEMA_VERSION)
            error("schemaVersion: unsupported version");
        if (document.catalogueVersion.empty())
            error("catalogueVersion: expected a non-empty string");

        std::unordered_set<std::string> profileIds;
        std::unordered_set<std::string> documentInstanceIds;
        for (std::size_t profileIndex = 0; profileIndex < document.profiles.size(); ++profileIndex)
        {
            const auto& profile = document.profiles[profileIndex];
            const auto profilePath = "profiles[" + std::to_string(profileIndex) + "]";

            if (profile.profileId.empty())
                error(profilePath + ".profileId: expected a non-empty string");
            else if (!profileIds.insert(profile.profileId).second)
                error(profilePath + ".profileId: duplicate profile ID");

            if (profile.name.empty())
                error(profilePath + ".name: expected a non-empty string");

            std::unordered_map<std::string, const Item*> itemsById;
            for (std::size_t itemIndex = 0; itemIndex < profile.items.size(); ++itemIndex)
            {
                const auto& item = profile.items[itemIndex];
                const auto itemPath = profilePath + ".items[" + std::to_string(itemIndex) + "]";

                if (item.instanceId.empty())
                    error(itemPath + ".instanceId: expected a non-empty string");
                else
                {
                    if (!documentInstanceIds.insert(item.instanceId).second)
                        error(itemPath + ".instanceId: duplicate instance ID within document");
                    itemsById.emplace(item.instanceId, &item);
                }

                if (!IsValidItemType(item.type))
                    error(itemPath + ".type: unsupported item type");
                if (!IsSafeId(item.definitionId))
                    error(itemPath + ".definitionId: exceeds the JSON safe-integer range");
                if (item.name.empty())
                    error(itemPath + ".name: expected a non-empty string");

                if (item.finish)
                {
                    if (!IsSafeId(item.finish->paintKitId) || !IsSafeId(item.finish->seed))
                        error(itemPath + ".finish: ID exceeds the JSON safe-integer range");
                    if (!IsWearValid(item.finish->wear))
                        error(itemPath + ".finish.wear: expected a finite number from 0 to 1");
                }

                if (!item.statTrak.enabled && item.statTrak.kills.has_value())
                    error(itemPath + ".statTrak.kills: must be absent when StatTrak is disabled");
                if (item.statTrak.kills && !IsSafeId(*item.statTrak.kills))
                    error(itemPath + ".statTrak.kills: exceeds the JSON safe-integer range");

                if (item.stickers.size() > MAX_STICKER_SLOTS)
                    error(itemPath + ".stickers: maximum of six sticker slots");

                std::unordered_set<std::uint8_t> stickerSlots;
                for (std::size_t stickerIndex = 0; stickerIndex < item.stickers.size(); ++stickerIndex)
                {
                    const auto& sticker = item.stickers[stickerIndex];
                    const auto stickerPath = itemPath + ".stickers[" + std::to_string(stickerIndex) + "]";

                    if (sticker.slot >= MAX_STICKER_SLOTS)
                        error(stickerPath + ".slot: expected an integer from 0 to 5");
                    else if (!stickerSlots.insert(sticker.slot).second)
                        error(stickerPath + ".slot: duplicate sticker slot");

                    if (!IsSafeId(sticker.kitId))
                        error(stickerPath + ".kitId: exceeds the JSON safe-integer range");
                    if (!IsWearValid(sticker.wear))
                        error(stickerPath + ".wear: expected a finite number from 0 to 1");
                    if (!std::isfinite(sticker.rotation) || !std::isfinite(sticker.offsetX) || !std::isfinite(sticker.offsetY))
                        error(stickerPath + ": placement values must be finite");
                    if (sticker.schema < -1)
                        error(stickerPath + ".schema: expected an integer greater than or equal to -1");
                }

                if (item.charm)
                {
                    if (!IsSafeId(item.charm->kitId) || !IsSafeId(item.charm->seed) ||
                        (item.charm->stickerKitId && !IsSafeId(*item.charm->stickerKitId)) ||
                        (item.charm->highlightId && !IsSafeId(*item.charm->highlightId)))
                        error(itemPath + ".charm: ID exceeds the JSON safe-integer range");
                    if (!std::isfinite(item.charm->x) || !std::isfinite(item.charm->y) || !std::isfinite(item.charm->z))
                        error(itemPath + ".charm: placement values must be finite");
                }

                for (const auto& [key, metadataValue] : item.metadata)
                {
                    const auto number = std::get_if<double>(&metadataValue);
                    if (number && !std::isfinite(*number))
                        error(itemPath + ".metadata." + key + ": numeric value must be finite");
                }
            }

            std::unordered_set<std::string> occupiedSlots;
            for (std::size_t assignmentIndex = 0; assignmentIndex < profile.equipment.size(); ++assignmentIndex)
            {
                const auto& assignment = profile.equipment[assignmentIndex];
                const auto assignmentPath = profilePath + ".equipment[" + std::to_string(assignmentIndex) + "]";

                if (assignment.slot.empty())
                {
                    error(assignmentPath + ".slot: expected a non-empty string");
                    continue;
                }

                const auto teamName = assignment.team == Team::T ? "T" : "CT";
                const auto slotKey = std::string(teamName) + ":" + assignment.slot;
                if (!occupiedSlots.insert(slotKey).second)
                    error(assignmentPath + ".slot: duplicate equipment assignment");

                const auto found = itemsById.find(assignment.instanceId);
                if (found == itemsById.end())
                {
                    error(assignmentPath + ".instanceId: references an item that does not exist");
                    continue;
                }

                if (found->second->type != ExpectedTypeForEquipmentSlot(assignment.slot))
                    error(assignmentPath + ".slot: incompatible item type for equipment slot");
            }
        }

        result.valid = result.errors.empty();
        return result;
    }
}
