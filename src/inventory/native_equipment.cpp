// n1ssan-dll / src/inventory/native_equipment.cpp
// Persists the exact native CS2 Loadout selection per Armory inventory profile.
// CS2 remains the authority: this module only observes selections and restores
// them through LoadoutAPI. It never assigns by definition or catalogue ID.

#include "inventory/native_equipment.h"
#include "diagnostics/armory_status.h"

#include "diagnostics/log.h"
#include "inventory/armory_inventory.h"
#include "inventory/loadout_api.h"

#include <windows.h>

#include <algorithm>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <initializer_list>
#include <sstream>
#include <string>
#include <unordered_map>
#include <utility>
#include <unordered_set>
#include <vector>

namespace
{
    // A slot CS2 refuses this many times is left to the game so the rest of
    // the restore can finish (see Restore below).
    // Three attempts is enough for the game to finish rebuilding the inventory
    // between them; the eighth only ever repeated a refusal it had already
    // earned. Each attempt is a panorama native on the game thread.
    constexpr int MAX_EQUIP_ATTEMPTS = 3;

    // A refused slot costs a native call and a flushed log line. A thirty-slot
    // loadout used to fire every one of them inside one tick - that is the
    // half-second freeze and the "30 failed retries" wall in the log.
    constexpr int EQUIP_CALLS_PER_TICK = 4;

    struct Assignment
    {
        std::string team;
        std::string slot;
        std::string instanceId;
    };

    using ProfileMap = std::unordered_map<std::string, std::vector<Assignment>>;

    ProfileMap g_profiles;
    std::string g_filePath;
    std::string g_activeProfileId;
    std::vector<Assignment> g_restoreAssignments;
    std::vector<bool> g_restoreCompleted;
    std::vector<int> g_restoreAttempts;
    std::vector<Assignment> g_blockedBaseline;
    bool g_loaded = false;
    bool g_restorePending = false;
    bool g_captureBlockedUntilChange = false;
    ULONGLONG g_lastTick = 0;
    ULONGLONG g_lastRestoreAttempt = 0;
    ULONGLONG g_restoreStarted = 0;
    ULONGLONG g_captureAfter = 0;
    int g_lastInventoryRevision = -1;
    bool g_profileHadItems = false;
    std::unordered_map<std::string, std::uint64_t> g_lastManagedIds;

    bool ExtractString(const std::string& object, const char* key, std::string& out)
    {
        const std::string needle = std::string("\"") + key + "\"";
        const size_t keyAt = object.find(needle);
        if (keyAt == std::string::npos) return false;
        const size_t colon = object.find(':', keyAt + needle.size());
        if (colon == std::string::npos) return false;
        const size_t quote = object.find('"', colon + 1);
        if (quote == std::string::npos) return false;

        std::string value;
        bool escaped = false;
        for (size_t i = quote + 1; i < object.size(); ++i)
        {
            const char c = object[i];
            if (escaped)
            {
                value.push_back(c);
                escaped = false;
                continue;
            }
            if (c == '\\')
            {
                escaped = true;
                continue;
            }
            if (c == '"')
            {
                out = std::move(value);
                return true;
            }
            value.push_back(c);
        }
        return false;
    }

    bool ReadObjectArray(
        const std::string& text,
        const char* key,
        std::vector<std::string>& objects)
    {
        objects.clear();
        const std::string needle = std::string("\"") + key + "\"";
        const size_t keyAt = text.find(needle);
        if (keyAt == std::string::npos) return false;
        const size_t arrayAt = text.find('[', keyAt + needle.size());
        if (arrayAt == std::string::npos) return false;

        size_t i = arrayAt + 1;
        while (i < text.size())
        {
            while (i < text.size() &&
                (text[i] == ' ' || text[i] == '\t' || text[i] == '\r' ||
                 text[i] == '\n' || text[i] == ','))
                ++i;

            if (i >= text.size()) return false;
            if (text[i] == ']') return true;
            if (text[i] != '{') return false;

            const size_t start = i;
            int depth = 0;
            bool inString = false;
            bool escaped = false;

            for (; i < text.size(); ++i)
            {
                const char c = text[i];
                if (inString)
                {
                    if (escaped) escaped = false;
                    else if (c == '\\') escaped = true;
                    else if (c == '"') inString = false;
                    continue;
                }
                if (c == '"') { inString = true; continue; }
                if (c == '{') ++depth;
                else if (c == '}' && --depth == 0)
                {
                    ++i;
                    break;
                }
            }

            if (depth != 0) return false;
            objects.push_back(text.substr(start, i - start));
        }
        return false;
    }

    bool ParseProfiles(const std::string& text, ProfileMap& profiles)
    {
        std::vector<std::string> profileObjects;
        if (!ReadObjectArray(text, "profiles", profileObjects))
            return false;

        ProfileMap parsed;
        for (const std::string& profileObject : profileObjects)
        {
            std::string profileId;
            if (!ExtractString(profileObject, "profileId", profileId) || profileId.empty())
                continue;

            std::vector<std::string> assignmentObjects;
            if (!ReadObjectArray(profileObject, "assignments", assignmentObjects))
                continue;

            std::vector<Assignment> assignments;
            for (const std::string& assignmentObject : assignmentObjects)
            {
                Assignment assignment;
                if (!ExtractString(assignmentObject, "team", assignment.team) ||
                    !ExtractString(assignmentObject, "slot", assignment.slot) ||
                    !ExtractString(assignmentObject, "instanceId", assignment.instanceId))
                    continue;

                if ((assignment.team == "T" || assignment.team == "CT") &&
                    !assignment.slot.empty() && !assignment.instanceId.empty())
                    assignments.push_back(std::move(assignment));
            }

            parsed[profileId] = std::move(assignments);
        }

        profiles = std::move(parsed);
        return true;
    }

    std::string EscapeJson(const std::string& value)
    {
        std::string escaped;
        escaped.reserve(value.size() + 8);
        for (char c : value)
        {
            if (c == '"' || c == '\\') escaped.push_back('\\');
            if (c == '\n') { escaped += "\\n"; continue; }
            if (c == '\r') { escaped += "\\r"; continue; }
            if (c == '\t') { escaped += "\\t"; continue; }
            escaped.push_back(c);
        }
        return escaped;
    }

    bool SameAssignments(std::vector<Assignment> a, std::vector<Assignment> b)
    {
        const auto less = [](const Assignment& left, const Assignment& right)
        {
            if (left.team != right.team) return left.team < right.team;
            if (left.slot != right.slot) return left.slot < right.slot;
            return left.instanceId < right.instanceId;
        };
        std::sort(a.begin(), a.end(), less);
        std::sort(b.begin(), b.end(), less);
        if (a.size() != b.size()) return false;
        for (size_t i = 0; i < a.size(); ++i)
        {
            if (a[i].team != b[i].team ||
                a[i].slot != b[i].slot ||
                a[i].instanceId != b[i].instanceId)
                return false;
        }
        return true;
    }

    void EnsureLoaded()
    {
        if (g_loaded) return;

        const std::string directory = ArmoryInventory::BridgeDirectory();
        if (directory.empty()) return;

        g_filePath = directory + "armory-native-equipment.json";
        g_loaded = true;

        std::ifstream file(g_filePath, std::ios::binary);
        if (!file)
        {
            Log("[native-equipment] no saved profile map yet");
            return;
        }

        std::stringstream buffer;
        buffer << file.rdbuf();
        if (!ParseProfiles(buffer.str(), g_profiles))
        {
            g_profiles.clear();
            Log("[native-equipment] saved profile map is malformed; starting empty");
            return;
        }

        Log("[native-equipment] loaded %zu profile maps", g_profiles.size());
    }

    bool PersistProfiles()
    {
        if (g_filePath.empty()) return false;

        std::vector<std::string> profileIds;
        profileIds.reserve(g_profiles.size());
        for (const auto& entry : g_profiles)
            profileIds.push_back(entry.first);
        std::sort(profileIds.begin(), profileIds.end());

        std::ostringstream json;
        json << "{\n  \"version\": 1,\n  \"profiles\": [";
        for (size_t p = 0; p < profileIds.size(); ++p)
        {
            const std::string& profileId = profileIds[p];
            const auto& assignments = g_profiles.at(profileId);
            json << (p ? ",\n" : "\n") << "    {\n"
                 << "      \"profileId\": \"" << EscapeJson(profileId) << "\",\n"
                 << "      \"assignments\": [";

            for (size_t i = 0; i < assignments.size(); ++i)
            {
                const Assignment& assignment = assignments[i];
                json << (i ? ",\n" : "\n") << "        {"
                     << "\"team\": \"" << EscapeJson(assignment.team) << "\", "
                     << "\"slot\": \"" << EscapeJson(assignment.slot) << "\", "
                     << "\"instanceId\": \"" << EscapeJson(assignment.instanceId) << "\"}";
            }
            if (!assignments.empty()) json << "\n      ";
            json << "]\n    }";
        }
        if (!profileIds.empty()) json << "\n  ";
        json << "]\n}\n";

        const std::string temporaryPath = g_filePath + ".tmp";
        {
            std::ofstream file(temporaryPath, std::ios::binary | std::ios::trunc);
            if (!file)
            {
                DeleteFileA(temporaryPath.c_str());
                return false;
            }
            const std::string contents = json.str();
            file.write(contents.data(), static_cast<std::streamsize>(contents.size()));
            file.flush();
            if (!file.good())
            {
                file.close();
                DeleteFileA(temporaryPath.c_str());
                return false;
            }
        }

        if (!MoveFileExA(
                temporaryPath.c_str(), g_filePath.c_str(),
                MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
        {
            DeleteFileA(temporaryPath.c_str());
            return false;
        }
        return true;
    }

    std::vector<Assignment> Capture(
        const std::vector<ArmoryInventory::ManagedItem>& items)
    {
        std::vector<Assignment> captured;
        if (!LoadoutApi::Initialize()) return captured;

        std::unordered_set<std::uint16_t> definitions;
        for (const auto& item : items)
        {
            // Sticker, keychain, graffiti and music kit definitions are
            // inventory consumables, not loadout slots. Graffiti are projected
            // unsealed (1349; 1348 is the sealed form), and they and music kits
            // (1314) are equipped from the game's own inventory, so asking the
            // Loadout for a slot would only log a miss.
            if (item.definition == 1209 || item.definition == 1355 ||
                item.definition == 1349 || item.definition == 1348 ||
                item.definition == 1314)
                continue;
            if (item.definition != 0)
                definitions.insert(item.definition);
        }

        for (const char* team : { "t", "ct" })
        {
            const char* teamLabel = std::strcmp(team, "t") == 0 ? "T" : "CT";
            for (std::uint16_t definition : definitions)
            {
                std::string slot;
                if (!LoadoutApi::SlotForDefinition(team, definition, slot))
                    continue;

                const std::uint64_t equippedId =
                    LoadoutApi::EquippedItemId(team, slot.c_str());
                if (!equippedId) continue;

                const auto found = std::find_if(
                    items.begin(), items.end(),
                    [equippedId, definition](const ArmoryInventory::ManagedItem& item)
                    {
                        return item.id == equippedId && item.definition == definition;
                    });
                if (found == items.end()) continue;

                Assignment assignment;
                assignment.team = teamLabel;
                assignment.slot = slot;
                assignment.instanceId = found->instanceId;
                captured.push_back(std::move(assignment));
            }
        }

        std::sort(captured.begin(), captured.end(),
            [](const Assignment& a, const Assignment& b)
            {
                if (a.team != b.team) return a.team < b.team;
                if (a.slot != b.slot) return a.slot < b.slot;
                return a.instanceId < b.instanceId;
            });
        return captured;
    }

    std::unordered_map<std::string, std::uint64_t> ManagedIdsFor(
        const std::vector<ArmoryInventory::ManagedItem>& items)
    {
        std::unordered_map<std::string, std::uint64_t> ids;
        for (const auto& item : items)
            ids[item.instanceId] = item.id;
        return ids;
    }

    bool SavedInstancesChanged(
        const std::string& profileId,
        const std::vector<ArmoryInventory::ManagedItem>& items,
        const std::unordered_map<std::string, std::uint64_t>& previousIds)
    {
        const auto saved = g_profiles.find(profileId);
        if (saved == g_profiles.end() || saved->second.empty())
            return false;

        for (const Assignment& assignment : saved->second)
        {
            const auto current = std::find_if(
                items.begin(), items.end(),
                [&assignment](const ArmoryInventory::ManagedItem& item)
                {
                    return item.instanceId == assignment.instanceId;
                });
            if (current == items.end())
                return true;

            const auto previous = previousIds.find(assignment.instanceId);
            if (previous == previousIds.end() || previous->second != current->id)
                return true;
        }
        return false;
    }

    void BeginProfile(const std::string& profileId, ULONGLONG now)
    {
        g_activeProfileId = profileId;
        g_restoreAssignments.clear();
        g_restoreCompleted.clear();
        g_restoreAttempts.clear();
        g_restorePending = false;
        g_captureBlockedUntilChange = false;
        g_blockedBaseline.clear();

        const auto saved = g_profiles.find(profileId);
        if (saved != g_profiles.end() && !saved->second.empty())
        {
            g_restoreAssignments = saved->second;
            g_restoreCompleted.assign(g_restoreAssignments.size(), false);
            g_restoreAttempts.assign(g_restoreAssignments.size(), 0);
            g_restorePending = true;
            g_restoreStarted = now;
            g_lastRestoreAttempt = 0;
            Log("[native-equipment] restoring %zu assignments for profile %s",
                g_restoreAssignments.size(), profileId.c_str());
        }
        else
        {
            g_captureAfter = now + 1500;
            Log("[native-equipment] no saved native equipment for profile %s",
                profileId.c_str());
        }
    }

    bool Restore(
        const std::vector<ArmoryInventory::ManagedItem>& items,
        ULONGLONG now)
    {
        if (!g_restorePending) return true;
        if (now - g_lastRestoreAttempt < 500) return false;
        g_lastRestoreAttempt = now;

        bool allCompleted = true;
        int equipped = 0;
        int skipped = 0;
        int failed = 0;
        int equipCalls = 0;

        for (size_t i = 0; i < g_restoreAssignments.size(); ++i)
        {
            if (g_restoreCompleted[i]) continue;

            const Assignment& assignment = g_restoreAssignments[i];
            const auto item = std::find_if(
                items.begin(), items.end(),
                [&assignment](const ArmoryInventory::ManagedItem& candidate)
                {
                    return candidate.instanceId == assignment.instanceId;
                });

            if (item == items.end())
            {
                g_restoreCompleted[i] = true;
                ++skipped;
                Log("[native-equipment] profile %s no longer owns instance %s",
                    g_activeProfileId.c_str(), assignment.instanceId.c_str());
                continue;
            }

            const char* team = assignment.team == "T" ? "t" : "ct";

            // The native call reports "nothing changed" as a failure, so a slot
            // that already holds this exact instance counts as restored. Without
            // this, that one slot held the whole restore open until it timed out
            // and no later restore ran either.
            if (LoadoutApi::EquippedItemId(team, assignment.slot.c_str()) == item->id)
            {
                g_restoreCompleted[i] = true;
                ++skipped;
                Log("[native-equipment] %s/%s already holds instance=%s",
                    assignment.team.c_str(), assignment.slot.c_str(),
                    assignment.instanceId.c_str());
                continue;
            }

            if (equipCalls >= EQUIP_CALLS_PER_TICK)
            {
                // Left for the next tick, 500 ms away: the restore stays open
                // but no single frame pays for the whole loadout.
                allCompleted = false;
                continue;
            }

            ++equipCalls;

            if (LoadoutApi::EquipItemInSlot(team, item->id, assignment.slot.c_str()))
            {
                g_restoreCompleted[i] = true;
                ++equipped;
                Log("[native-equipment] restored %s/%s instance=%s",
                    assignment.team.c_str(), assignment.slot.c_str(),
                    assignment.instanceId.c_str());
            }
            else
            {
                allCompleted = false;
                ++failed;

                const int attempts = ++g_restoreAttempts[i];

                // First refusal and the give-up below are the two moments that
                // matter; the retries in between were a flushed line each.
                if (attempts == 1)
                {
                    Log("[native-equipment] could not equip %s/%s instance=%s id=%016llX (first of %d)",
                        assignment.team.c_str(), assignment.slot.c_str(),
                        assignment.instanceId.c_str(),
                        static_cast<unsigned long long>(item->id),
                        MAX_EQUIP_ATTEMPTS);
                }

                // One slot that CS2 keeps refusing must not hold the whole
                // restore open until the deadline: every other slot gets its
                // chance, and this one is left to the game. That is what made a
                // used weapon come back with its default item after a match.
                if (attempts >= MAX_EQUIP_ATTEMPTS)
                {
                    g_restoreCompleted[i] = true;
                    Log("[native-equipment] giving up on %s/%s after %d attempts; "
                        "CS2 keeps this slot as it is",
                        assignment.team.c_str(), assignment.slot.c_str(), attempts);
                }
            }
        }

        for (bool completed : g_restoreCompleted)
            if (!completed) allCompleted = false;

        if (allCompleted)
        {
            g_restorePending = false;
            g_captureAfter = now + 1000;
            Log("[native-equipment] restore complete: equipped=%d skipped=%d",
                equipped, skipped);
            ArmoryStatus::NoteRestore(equipped, skipped, failed, false);
            return true;
        }

        if (now - g_restoreStarted >= 15000)
        {
            g_restorePending = false;
            g_captureBlockedUntilChange = true;
            g_blockedBaseline = Capture(items);
            Log("[native-equipment] restore timed out: equipped=%d failed=%d; preserving saved map until a native selection changes",
                equipped, failed);
            ArmoryStatus::NoteRestore(equipped, skipped, failed, true);
            return true;
        }

        return false;
    }
}

namespace
{
    // Capture only sees slots CS2 currently shows as ours. A slot that briefly
    // fell back to the vanilla item is indistinguishable from the player
    // unequipping it, and dropping it turns that skin off for good, so the saved
    // entry is kept unless its instance is no longer owned. Slots CS2 does show
    // as ours are updated in place.
    std::vector<Assignment> MergeCaptured(
        const std::string& profileId,
        const std::vector<Assignment>& captured,
        const std::vector<ArmoryInventory::ManagedItem>& items)
    {
        std::vector<Assignment> merged;

        const auto saved = g_profiles.find(profileId);
        if (saved != g_profiles.end())
        {
            for (const Assignment& assignment : saved->second)
            {
                const bool owned = std::any_of(
                    items.begin(), items.end(),
                    [&assignment](const ArmoryInventory::ManagedItem& item)
                    {
                        return item.instanceId == assignment.instanceId;
                    });

                if (owned) merged.push_back(assignment);
            }
        }

        for (const Assignment& assignment : captured)
        {
            const auto existing = std::find_if(
                merged.begin(), merged.end(),
                [&assignment](const Assignment& candidate)
                {
                    return candidate.team == assignment.team &&
                        candidate.slot == assignment.slot;
                });

            if (existing != merged.end()) *existing = assignment;
            else merged.push_back(assignment);
        }

        std::sort(merged.begin(), merged.end(),
            [](const Assignment& a, const Assignment& b)
            {
                if (a.team != b.team) return a.team < b.team;
                if (a.slot != b.slot) return a.slot < b.slot;
                return a.instanceId < b.instanceId;
            });

        return merged;
    }
}

namespace NativeEquipment
{
    bool SavedInstanceForSlot(
        const char* apiTeam,
        const char* nativeSlot,
        std::string& instanceId)
    {
        instanceId.clear();
        if (!apiTeam || !nativeSlot)
            return false;

        const bool wantT = apiTeam[0] == 't' || apiTeam[0] == 'T';
        const char* teamLabel = wantT ? "T" : "CT";

        const auto profile = g_profiles.find(g_activeProfileId);
        if (profile == g_profiles.end())
            return false;

        for (const Assignment& assignment : profile->second)
        {
            if (assignment.slot == nativeSlot && assignment.team == teamLabel)
            {
                instanceId = assignment.instanceId;
                return true;
            }
        }

        return false;
    }

    void Tick()
    {
        const ULONGLONG now = GetTickCount64();
        if (g_lastTick && now - g_lastTick < 1000)
            return;
        g_lastTick = now;

        if (ArmoryInventory::HasPending())
            return;

        std::string profileId;
        int inventoryRevision = 0;
        if (!ArmoryInventory::SessionInfo(profileId, inventoryRevision) ||
            profileId.empty())
            return;

        EnsureLoaded();
        if (!g_loaded)
            return;

        std::vector<ArmoryInventory::ManagedItem> items;
        if (!ArmoryInventory::SnapshotManagedItems(items))
            return;

        const bool hasItems = !items.empty();
        const auto currentManagedIds = ManagedIdsFor(items);
        const bool profileChanged =
            profileId != g_activeProfileId || (hasItems && !g_profileHadItems);
        const bool assignedInstanceChanged =
            !profileChanged &&
            inventoryRevision != g_lastInventoryRevision &&
            SavedInstancesChanged(profileId, items, g_lastManagedIds);

        if (profileChanged || assignedInstanceChanged)
        {
            BeginProfile(profileId, now);
            if (!hasItems)
            {
                g_restorePending = false;
                g_restoreAssignments.clear();
                g_captureAfter = now + 1500;
            }
            g_lastInventoryRevision = inventoryRevision;
            g_lastManagedIds = currentManagedIds;
            g_profileHadItems = hasItems;
            return;
        }

        g_lastInventoryRevision = inventoryRevision;
        g_lastManagedIds = currentManagedIds;
        g_profileHadItems = hasItems;

        if (!hasItems)
            return;

        if (g_restorePending)
        {
            Restore(items, now);
            return;
        }

        if (now < g_captureAfter)
            return;

        const std::vector<Assignment> snapshot =
            MergeCaptured(profileId, Capture(items), items);
        if (g_captureBlockedUntilChange)
        {
            if (SameAssignments(snapshot, g_blockedBaseline))
                return;
            g_captureBlockedUntilChange = false;
            Log("[native-equipment] native selection changed after restore timeout; capture resumed");
        }

        const auto current = g_profiles.find(profileId);
        if (current != g_profiles.end() && SameAssignments(snapshot, current->second))
            return;

        const bool hadPrevious = current != g_profiles.end();
        std::vector<Assignment> previous;
        if (hadPrevious) previous = current->second;
        g_profiles[profileId] = snapshot;

        if (PersistProfiles())
        {
            Log("[native-equipment] saved %zu native assignments for profile %s (revision=%d)",
                snapshot.size(), profileId.c_str(), inventoryRevision);
        }
        else
        {
            if (hadPrevious) g_profiles[profileId] = std::move(previous);
            else g_profiles.erase(profileId);
            Log("[native-equipment] failed to persist native equipment for profile %s; will retry",
                profileId.c_str());
        }
    }
}
