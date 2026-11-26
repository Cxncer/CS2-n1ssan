// n1ssan-dll / src/inventory/tools.cpp
//
// Lootline's tools: the Storage Unit and the Charm Detachment Pack.
//
// Ported from Lootline 1.5.5, where these are not catalogue entries but three
// answers CS2's own inventory asks for and never gets from Valve:
//
//   hooks.cpp hkPerformItemCasketTransaction -> Unboxer::OnCasketTransaction
//     operation 1 "put in", -1 "take out", 0 "look inside"; refused when the
//     unit has no name, when it is full, when a unit goes into a unit, or when
//     the item is not in that unit.
//   hooks.cpp hkCacheTypeField -> KeychainRemoveToolCharges / charges
//     Valve's count plus Lootline's unspent Charm Detachments. Without that
//     number CS2's charm popup refuses to detach anything.
//   hooks.cpp hkRemoveKeychain -> Unboxer::OnRemoveKeychain
//     takes the charm off the item locally and spends one detachment.
//
// Everything a transaction changes is announced to CS2 the way the Game
// Coordinator would announce it: casket_added / casket_removed /
// casket_contents / casket_too_full with the unit's id, keychain_remove with
// the item's id. The ids and names are Lootline's constants.
//
// What stays different, and why: Lootline's items have faux ids and live only in
// its own store, so a stored item is invisible to CS2's grid by construction.
// n1ssan's items are real objects in the local shared-object cache, and the
// grid lists that cache. A stored item therefore stays on the grid while it is
// in the unit; the unit's own "items count" and the membership map are what
// record it. Removing it from the cache to hide it would make "take out" the
// only way to ever get it back, which is a worse failure than the icon.

#include "inventory/tools.h"

#include "diagnostics/log.h"
#include "hooks/minhook_dynamic.h"
#include "inventory/armory_inventory.h"
#include "inventory/attachments.h"
#include "inventory/loot_socache.h"
#include "inventory/native_apply.h"
#include "inventory/runtime_mode.h"

#define NOMINMAX
#include <Windows.h>

#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <ctime>
#include <mutex>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace Tools
{
    namespace
    {
        constexpr uint16_t DEF_CASKET = 1201;
        constexpr uint16_t DEF_DETACH_PACK = 4950;
        // A charm is an item of its own in CS2 (Lootline's DEF_CHARM): taking one
        // off a weapon puts it back in the inventory, ready for another gun.
        constexpr uint16_t DEF_CHARM = 1355;

        // Lootline's CHARM_DETACHMENTS_PER_PACK, and CASKET_CAPACITY.
        constexpr int DETACHMENTS_PER_PACK = 3;
        constexpr int CASKET_CAPACITY = 1000;   // Lootline: unboxer.h

        // CMsgGCItemCustomizationNotification ids, as Lootline sends them.
        constexpr int NOTIFY_CASKET_TOO_FULL = 1011;   // "casket_too_full"
        constexpr int NOTIFY_CASKET_CONTENTS = 1012;   // "casket_contents"
        constexpr int NOTIFY_CASKET_ADDED = 1013;      // "casket_added"
        constexpr int NOTIFY_CASKET_REMOVED = 1014;    // "casket_removed"
        constexpr int NOTIFY_KEYCHAIN_REMOVE = 1092;   // "keychain_remove"

        constexpr uint64_t JOB_DELAY_MS = 250;
        constexpr uint64_t RETRY_INTERVAL_MS = 2000;
        constexpr int MAX_ATTEMPTS = 60;

        using CasketTransactionFn =
            void(__fastcall*)(void* api, int operation, const char* casketId, const char* itemId);
        using CacheFieldFn =
            uint64_t(__fastcall*)(void* api, const char* type, int index, const char* field);
        using RemoveKeychainFn =
            bool(__fastcall*)(void* api, const char* itemId, int slot);

        CasketTransactionFn g_casketOriginal = nullptr;
        CacheFieldFn g_fieldOriginal = nullptr;
        RemoveKeychainFn g_removeOriginal = nullptr;

        // Item actions, the same shapes Lootline hooks (hooks.cpp):
        // AcknowledgeNewItembyItemID(itemId) -> bool, DeleteItem(itemId) -> void,
        // ClearCustomName(itemId) -> void.
        using ItemIdFn = bool(__fastcall*)(void* api, const char* itemId);
        using ItemActionFn = void(__fastcall*)(void* api, const char* itemId);

        ItemIdFn     g_ackOriginal = nullptr;
        ItemActionFn g_deleteOriginal = nullptr;
        ItemActionFn g_clearNameOriginal = nullptr;

        std::atomic_bool g_installed{ false };
        std::atomic<uint64_t> g_casketCalls{ 0 };
        std::atomic<uint64_t> g_fieldCalls{ 0 };
        std::atomic<uint64_t> g_removeCalls{ 0 };
        std::atomic<uint64_t> g_lastAttemptMs{ 0 };
        int g_attempts = 0;
        char g_lastError[192]{};

        // Which item sits in which unit. Real item ids, which the projection
        // derives from the instance, so they survive an Apply and a restart.
        std::mutex g_mutex;
        std::unordered_map<uint64_t, uint64_t> g_stored;
        // Banked charges, like Lootline's g_charmDetachments: a used pack adds
        // three, each take-off spends one. Never derived from what is owned -
        // owning a pack is not the same as having loaded it.
        int g_detachmentCharges = 0;
        // Packs already used. The projection still lists them, so they are
        // dropped again after every Apply, like Lootline deleting the item.
        std::vector<uint64_t> g_spentPacks;
        bool g_stateLoaded = false;
        uint64_t g_syncedGeneration = 0;

        enum class JobKind { PutIn, TakeOut, LookInside, RemoveCharm, UsePack };

        struct Job
        {
            JobKind  kind = JobKind::LookInside;
            uint64_t casket = 0;
            uint64_t item = 0;
            uint64_t dueMs = 0;
        };

        std::vector<Job> g_jobs;
        std::mutex g_jobsMutex;

        uint32_t NowSeconds()
        {
            return static_cast<uint32_t>(std::time(nullptr));
        }

        std::string Join(const std::string& directory, const char* name)
        {
            if (directory.empty())
                return name;

            const char last = directory.back();
            return (last == '\\' || last == '/') ? directory + name : directory + "\\" + name;
        }

        std::string StatePath()
        {
            return Join(ArmoryInventory::BridgeDirectory(), "n1ssan-tools.json");
        }

        // Caller holds g_mutex.
        void SaveStateLocked()
        {
            std::string json = "{\n";
            json += "  \"source\": \"n1ssan-dll\",\n";
            json += "  \"detachmentCharges\": " + std::to_string(g_detachmentCharges) + ",\n";
            json += "  \"spentPacks\": [";

            for (size_t i = 0; i < g_spentPacks.size(); ++i)
                json += (i ? ", " : "") + std::to_string(g_spentPacks[i]);

            json += "],\n";
            json += "  \"stored\": [";

            bool first = true;
            for (const auto& entry : g_stored)
            {
                char line[128];
                std::snprintf(line, sizeof(line),
                    "%s\n    {\"item\": %llu, \"unit\": %llu}",
                    first ? "" : ",",
                    static_cast<unsigned long long>(entry.first),
                    static_cast<unsigned long long>(entry.second));
                json += line;
                first = false;
            }

            json += first ? "]\n}\n" : "\n  ]\n}\n";

            const std::string path = StatePath();
            const std::string temporary = path + ".tmp";
            FILE* file = nullptr;

            if (fopen_s(&file, temporary.c_str(), "wb") != 0 || !file)
            {
                Log("[tools] cannot write %s", temporary.c_str());
                return;
            }

            const bool written = fwrite(json.data(), 1, json.size(), file) == json.size();
            fclose(file);

            if (!written || !MoveFileExA(temporary.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING))
            {
                Log("[tools] cannot replace %s (error %lu)", path.c_str(), GetLastError());
                DeleteFileA(temporary.c_str());
            }
        }

        uint64_t ReadNumber(const std::string& text, size_t& at)
        {
            while (at < text.size() && (text[at] == ' ' || text[at] == '\t' ||
                   text[at] == '\r' || text[at] == '\n' || text[at] == ':' || text[at] == '"'))
                ++at;

            return _strtoui64(text.c_str() + at, nullptr, 10);
        }

        void LoadState()
        {
            if (g_stateLoaded)
                return;

            g_stateLoaded = true;

            const std::string path = StatePath();
            FILE* file = nullptr;
            if (fopen_s(&file, path.c_str(), "rb") != 0 || !file)
            {
                Log("[tools] no saved tool state (%s) - starting empty", path.c_str());
                return;
            }

            std::string text;
            char buffer[512]{};
            size_t read = 0;
            while ((read = fread(buffer, 1, sizeof(buffer), file)) > 0)
                text.append(buffer, read);
            fclose(file);

            std::lock_guard<std::mutex> lock(g_mutex);

            const size_t chargesKey = text.find("\"detachmentCharges\"");
            if (chargesKey != std::string::npos)
            {
                size_t at = text.find(':', chargesKey);
                if (at != std::string::npos)
                    g_detachmentCharges = static_cast<int>(ReadNumber(text, at));
            }

            const size_t packsKey = text.find("\"spentPacks\"");
            if (packsKey != std::string::npos)
            {
                const size_t open = text.find('[', packsKey);
                const size_t close = text.find(']', packsKey);

                if (open != std::string::npos && close != std::string::npos && close > open)
                {
                    size_t at = open + 1;

                    while (at < close)
                    {
                        const uint64_t id = ReadNumber(text, at);
                        if (!id)
                            break;

                        g_spentPacks.push_back(id);

                        const size_t next = text.find(',', at);
                        if (next == std::string::npos || next > close)
                            break;

                        at = next + 1;
                    }
                }
            }

            size_t at = 0;
            while ((at = text.find("{\"item\"", at)) != std::string::npos)
            {
                size_t itemAt = at;
                const uint64_t item = ReadNumber(text, itemAt);

                const size_t unitKey = text.find("\"unit\"", itemAt);
                if (unitKey == std::string::npos)
                    break;

                size_t unitAt = unitKey;
                const uint64_t unit = ReadNumber(text, unitAt);
                if (item && unit)
                    g_stored[item] = unit;

                at = unitAt;
            }

            Log("[tools] state loaded: %zu stored item(s), %d detachment charge(s), %zu used pack(s)",
                g_stored.size(), g_detachmentCharges, g_spentPacks.size());
        }

        // Caller holds g_mutex.
        int CountStoredLocked(uint64_t unit)
        {
            int count = 0;
            for (const auto& entry : g_stored)
            {
                if (entry.second == unit)
                    ++count;
            }

            return count;
        }

        bool QueueJob(JobKind kind, uint64_t casket, uint64_t item)
        {
            std::lock_guard<std::mutex> lock(g_jobsMutex);

            for (const Job& pending : g_jobs)
            {
                if (pending.kind == kind && pending.casket == casket && pending.item == item)
                    return true;   // already on it (a double click)
            }

            Job job;
            job.kind = kind;
            job.casket = casket;
            job.item = item;
            job.dueMs = NowMs() + JOB_DELAY_MS;
            g_jobs.push_back(job);
            return true;
        }

        // ---- the charm coming off ----

        // Defined with the storage unit below: the same remove-and-create an item
        // needs to be an object CS2 draws from the profile again.
        bool RecreateInUnit(const ArmoryInventory::ManagedItem& item, uint64_t unit);

        // Lootline's FinishCharmJobs: "taking a charm off gives the charm item
        // back, like CS2 does". The charm's own instance stays in the Armory
        // profile while it hangs on a weapon (an apply no longer spends it), so
        // the object CS2 removed at apply is made again here and the item is
        // usable for another weapon at once.
        bool ReturnCharmItem(int kit)
        {
            std::vector<ArmoryInventory::ManagedItem> items;
            if (!ArmoryInventory::SnapshotManagedItems(items))
                return false;

            for (const ArmoryInventory::ManagedItem& item : items)
            {
                if (item.definition != DEF_CHARM || item.keychain != kit)
                    continue;

                // Already in the grid: a second detach of the same charm, or an
                // Apply that made it again after the last one.
                if (LootSOCache::Find(item.id))
                    return true;

                if (RecreateInUnit(item, 0))
                {
                    Log("[tools] charm %d back in the inventory as %llu",
                        kit, static_cast<unsigned long long>(item.id));
                    return true;
                }

                Log("[tools] charm %d could not be made again as %llu",
                    kit, static_cast<unsigned long long>(item.id));
                return false;
            }

            // The charm was applied before v7.11, when an apply spent the item:
            // the profile no longer carries it, so there is nothing to give back.
            Log("[tools] charm %d returned only as a clear on the weapon - the Armory profile no longer owns the charm item (add it again to use it on another weapon)",
                kit);
            return false;
        }

        bool ApplyCharmRemoval(uint64_t itemId)
        {
            ArmoryInventory::ManagedItem managed;
            if (!ArmoryInventory::FindManaged(itemId, managed))
            {
                Log("[tools] charm remove: %llu is not an Armory item any more",
                    static_cast<unsigned long long>(itemId));
                return false;
            }

            Attachments::Set current;
            if (!LootSOCache::ReadAttachments(itemId, current))
                current = managed.attachments;

            if (!current.charm.present)
            {
                Log("[tools] charm remove: %llu carries no charm",
                    static_cast<unsigned long long>(itemId));
                return false;
            }

            const int kit = current.charm.kit;
            Attachments::Set next = current;
            next.charm = Attachments::Charm{};

            if (!LootSOCache::SyncAttachments(itemId, next))
            {
                Log("[tools] charm remove: the attributes of %llu could not be written",
                    static_cast<unsigned long long>(itemId));
                return false;
            }

            const bool announced = LootSOCache::NotifyUpdated(itemId);

            // The Bridge merges this back into the profile, so the charm stays
            // off across an Apply and a restart - the same record a sticker or
            // charm apply writes.
            Attachments::RecordApplied(itemId, next, nullptr, false, -1, false);

            // The charm item itself comes back, as Lootline's FinishCharmJobs
            // does, so it can be hung on another weapon straight away.
            const bool returned = ReturnCharmItem(kit);

            {
                std::lock_guard<std::mutex> lock(g_mutex);
                if (g_detachmentCharges > 0)
                    --g_detachmentCharges;
                SaveStateLocked();
            }

            const bool told = NativeApply::NotifyCustomization(
                NOTIFY_KEYCHAIN_REMOVE, "keychain_remove", itemId);

            Log("[tools] charm %d taken off %llu locally (charm item %s): inventory %s, popup %s, %d detachment(s) left",
                kit, static_cast<unsigned long long>(itemId),
                returned ? "back in the inventory" : "NOT given back",
                announced ? "told" : "NOT told", told ? "told" : "NOT told",
                DetachmentsRemaining());
            return true;
        }

        // ---- the storage unit ----

        // Stored items we have already made again, and the object they were
        // made as: a retained item keeps its unit's id across an Apply, so only
        // an item CS2 rebuilt has to be put back inside.
        std::unordered_map<uint64_t, void*> g_inUnit;

        // CS2 lists an item inside a Storage Unit when the item carries the
        // unit's id in "casket item id low/high"; an item that keeps its old
        // object stays on the inventory grid for ever and the unit looks empty
        // (Lootline's FinishCasketJobs removes and creates the item again for
        // exactly this).
        bool RecreateInUnit(const ArmoryInventory::ManagedItem& item, uint64_t unit)
        {
            LootSOCache::NewItem request{};
            request.id = item.id;
            request.definition = item.definition;
            request.quality = item.quality;
            request.rarity = item.rarity;
            request.paintKit = item.paintKit;
            request.seed = item.seed;
            request.wear = item.wear;
            request.statTrak = item.statTrak;
            request.stickerKit = item.stickerKit;
            request.musicKit = item.musicKit;
            request.spraysRemaining = item.spraysRemaining;
            request.sprayTint = item.sprayTint;
            request.keychain = item.keychain;
            request.keychainSeed = item.keychainSeed;
            request.keychainSticker = item.keychainSticker;
            request.tradableAfter = item.tradableAfter;
            request.attachments = item.attachments;
            request.customName = item.customName;
            request.casketId = unit;
            request.asNew = false;

            if (LootSOCache::HasItem(item.id) && !LootSOCache::Remove(item.id, false))
                return false;

            if (LootSOCache::Create(request) != LootSOCache::CreateResult::Ok)
                return false;

            g_inUnit[item.id] = LootSOCache::Find(item.id);
            return true;
        }

        // The state change happens under the lock; the notification does not:
        // CS2's UI can call straight back into these hooks (the charges field),
        // and that would need the same lock again.
        bool ApplyCasketJob(const Job& job)
        {
            bool notify = false;
            bool write = false;
            bool moved = false;
            int  notification = NOTIFY_CASKET_CONTENTS;
            const char* type = "casket_contents";
            int  count = 0;
            const char* what = "look inside";

            {
                std::lock_guard<std::mutex> lock(g_mutex);
                const uint64_t unit = job.casket;

                if (job.kind == JobKind::PutIn)
                {
                    if (g_stored.count(job.item) != 0)
                    {
                        Log("[tools] storage: %llu is already in a unit - nothing to do",
                            static_cast<unsigned long long>(job.item));
                        return false;
                    }

                    g_stored[job.item] = unit;
                    count = CountStoredLocked(unit);
                    SaveStateLocked();
                    write = true;

                    notification = NOTIFY_CASKET_ADDED;
                    type = "casket_added";
                    what = "put in";
                    notify = true;
                    moved = true;
                }
                else if (job.kind == JobKind::TakeOut)
                {
                    const auto entry = g_stored.find(job.item);
                    if (entry == g_stored.end() || entry->second != unit)
                    {
                        Log("[tools] storage: %llu is not in unit %llu - nothing to do",
                            static_cast<unsigned long long>(job.item),
                            static_cast<unsigned long long>(unit));
                        return false;
                    }

                    g_stored.erase(entry);
                    count = CountStoredLocked(unit);
                    SaveStateLocked();
                    write = true;

                    notification = NOTIFY_CASKET_REMOVED;
                    type = "casket_removed";
                    what = "taken out";
                    notify = true;
                    moved = true;
                }
                else
                {
                    count = CountStoredLocked(unit);
                    notify = true;
                }
            }

            // Outside the lock: the count write notifies CS2's inventory, whose
            // listeners can ask for the detachment charges straight back.
            if (moved)
            {
                ArmoryInventory::ManagedItem subject;

                if (ArmoryInventory::FindManaged(job.item, subject))
                {
                    const uint64_t unit = job.kind == JobKind::PutIn ? job.casket : 0;
                    const bool remade = RecreateInUnit(subject, unit);

                    Log("[tools] storage: %llu %s (unit %llu) - %s",
                        static_cast<unsigned long long>(job.item),
                        unit ? "made again inside the unit" : "back in the inventory",
                        static_cast<unsigned long long>(job.casket),
                        remade ? "ok" : "NOT made again");
                }
            }

            if (write)
                LootSOCache::SetCasketInfo(job.casket, count, NowSeconds());

            bool told = false;
            if (notify)
                told = NativeApply::NotifyCustomization(notification, type, job.casket);

            Log("[tools] storage: %llu %s unit %llu - it holds %d, popup %s",
                static_cast<unsigned long long>(job.item), what,
                static_cast<unsigned long long>(job.casket), count,
                told ? "told" : "NOT told");
            return true;
        }

        // ---- the requests ----

        bool UnitLabel(const ArmoryInventory::ManagedItem& unit, std::string& out);

        bool QueueCasket(int operation, const char* casketText, const char* itemText)
        {
            if (RuntimeModeState::Current() != RuntimeMode::Armory)
            {
                Log("[tools] casket: mode is %d, not Armory - forwarded to CS2",
                    static_cast<int>(RuntimeModeState::Current()));
                return false;
            }

            const uint64_t casket = casketText ? _strtoui64(casketText, nullptr, 10) : 0;
            if (!casket)
            {
                Log("[tools] casket: the request names no unit (%s) - forwarded to CS2",
                    casketText ? casketText : "null");
                return false;
            }

            ArmoryInventory::ManagedItem unit;
            if (!ArmoryInventory::FindManaged(casket, unit) || unit.definition != DEF_CASKET)
            {
                Log("[tools] casket: unit %llu is not an Armory Storage Unit (found=%d, definition=%u) - forwarded to CS2",
                    static_cast<unsigned long long>(casket),
                    unit.id ? 1 : 0, static_cast<unsigned>(unit.definition));
                return false;
            }

            const uint64_t item = itemText ? _strtoui64(itemText, nullptr, 10) : 0;

            JobKind kind = JobKind::LookInside;
            if (operation == 1)
                kind = JobKind::PutIn;
            else if (operation == -1)
                kind = JobKind::TakeOut;
            else if (operation != 0)
            {
                Log("[tools] storage: unit %llu asked operation %d - not a casket operation, answered locally",
                    static_cast<unsigned long long>(casket), operation);
                return true;
            }

            if (kind != JobKind::LookInside)
            {
                if (!item)
                    return true;

                ArmoryInventory::ManagedItem subject;
                if (!ArmoryInventory::FindManaged(item, subject))
                {
                    Log("[tools] storage: %llu is not an Armory item - a real item can't go in a n1ssan unit",
                        static_cast<unsigned long long>(item));
                    return true;
                }

                if (kind == JobKind::PutIn)
                {
                    if (subject.definition == DEF_CASKET)
                    {
                        Log("[tools] storage: a Storage Unit can't go inside another one");
                        return true;
                    }

                    // Lootline refuses a unit with no name. CS2 only offers
                    // "put in" once the unit has a modification date, which only
                    // a named unit gets, so this should be unreachable - kept as
                    // the backstop for a unit that lost its date.
                    std::string label;
                    if (!UnitLabel(unit, label))
                    {
                        Log("[tools] storage: unit %llu has no name - name it in the Armory (item details -> CUSTOM NAME) or in CS2",
                            static_cast<unsigned long long>(casket));
                        return true;
                    }

                    if (StoredCount(casket) >= CASKET_CAPACITY)
                    {
                        const bool told = NativeApply::NotifyCustomization(
                            NOTIFY_CASKET_TOO_FULL, "casket_too_full", casket);
                        Log("[tools] storage: unit %llu is full (%d) - popup %s",
                            static_cast<unsigned long long>(casket), CASKET_CAPACITY,
                            told ? "told" : "NOT told");
                        return true;
                    }

                    if (IsStored(item))
                    {
                        Log("[tools] storage: %llu is already in a unit",
                            static_cast<unsigned long long>(item));
                        return true;
                    }
                }
                else if (!IsStored(item))
                {
                    Log("[tools] storage: %llu is not in unit %llu",
                        static_cast<unsigned long long>(item),
                        static_cast<unsigned long long>(casket));
                    return true;
                }
            }

            Log("[tools] storage: %s on unit %llu (item %llu) - answered locally",
                kind == JobKind::PutIn ? "put in" : kind == JobKind::TakeOut ? "take out" : "look inside",
                static_cast<unsigned long long>(casket),
                static_cast<unsigned long long>(item));

            return QueueJob(kind, casket, item);
        }

        bool QueueCharmRemoval(const char* itemText)
        {
            if (RuntimeModeState::Current() != RuntimeMode::Armory)
                return false;

            const uint64_t item = itemText ? _strtoui64(itemText, nullptr, 10) : 0;
            if (!item)
                return false;

            ArmoryInventory::ManagedItem managed;
            if (!ArmoryInventory::FindManaged(item, managed))
                return false;   // a real item: Valve's

            if (!managed.attachments.charm.present)
            {
                // The projection may not carry the charm while the item does (a
                // charm applied in game and not yet persisted). Read it.
                Attachments::Set set;
                if (!LootSOCache::ReadAttachments(item, set) || !set.charm.present)
                    return false;
            }

            Log("[tools] charm: taking the charm off %llu - answered locally",
                static_cast<unsigned long long>(item));
            return QueueJob(JobKind::RemoveCharm, 0, item);
        }

        // ---- the detours ----

        void __fastcall HkCasketTransaction(
            void* api, int operation, const char* casketText, const char* itemText)
        {
            bool handled = false;
            const uint64_t call = g_casketCalls.fetch_add(1) + 1;
            const bool trace = call <= 16 || (call % 64) == 0;

            if (trace)
            {
                Log("[tools] casket entry #%llu op=%d unit=%s item=%s mode=%d",
                    static_cast<unsigned long long>(call), operation,
                    casketText ? casketText : "(null)", itemText ? itemText : "(null)",
                    static_cast<int>(RuntimeModeState::Current()));
            }

            __try
            {
                handled = QueueCasket(operation, casketText, itemText);
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                Log("[tools] casket hook faulted - forwarding to CS2");
                handled = false;
            }

            if (handled)
                return;

            if (g_casketOriginal)
                g_casketOriginal(api, operation, casketText, itemText);
        }

        uint64_t __fastcall HkCacheField(void* api, const char* type, int index, const char* field)
        {
            g_fieldCalls.fetch_add(1);

            // What the Storage Unit screen actually asks for, so a log from a
            // session in which nothing happened still says whether the UI ever
            // rendered casket data. Eight pairs at most.
            if (index == 0 && type && field && std::strstr(type, "Casket") != nullptr)
            {
                static const char* seen[8]{};
                static int seenCount = 0;
                static std::atomic<uint64_t> casketFieldCalls{ 0 };

                if (casketFieldCalls.fetch_add(1) < 8)
                {
                    Log("[tools] casket field: type=%s field=%s", type, field);
                    (void)seen;
                    (void)seenCount;
                }
            }

            const uint64_t value = g_fieldOriginal ? g_fieldOriginal(api, type, index, field) : 0;

            if (index == 0 && type && field &&
                std::strcmp(type, "KeychainRemoveToolCharges") == 0 &&
                std::strcmp(field, "charges") == 0)
            {
                const int ours = DetachmentsRemaining();
                const uint64_t total = ours > 0
                    ? (value & 0xFFFFFFFFull) + static_cast<uint64_t>(ours)
                    : value;

                static std::atomic<uint64_t> chargeReads{ 0 };
                const uint64_t read = chargeReads.fetch_add(1) + 1;

                if (read <= 16 || (read % 64) == 0)
                    Log("[tools] charges read #%llu: CS2=%llu, ours=%d, answered=%llu",
                        static_cast<unsigned long long>(read),
                        static_cast<unsigned long long>(value & 0xFFFFFFFFull), ours,
                        static_cast<unsigned long long>(total));

                return total;
            }

            return value;
        }

        bool __fastcall HkRemoveKeychain(void* api, const char* itemText, int slot)
        {
            bool handled = false;
            const uint64_t call = g_removeCalls.fetch_add(1) + 1;

            if (call <= 16 || (call % 64) == 0)
            {
                Log("[tools] charm entry #%llu item=%s slot=%d mode=%d",
                    static_cast<unsigned long long>(call), itemText ? itemText : "(null)",
                    slot, static_cast<int>(RuntimeModeState::Current()));
            }

            __try
            {
                handled = QueueCharmRemoval(itemText);
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                Log("[tools] charm hook faulted - forwarding to CS2");
                handled = false;
            }

            if (handled)
                return true;

            return g_removeOriginal ? g_removeOriginal(api, itemText, slot) : false;
        }

        uint64_t ParseIdText(const char* text)
        {
            if (!text || !*text)
                return 0;

            uint64_t value = 0;

            for (const char* p = text; *p >= '0' && *p <= '9'; ++p)
                value = value * 10 + static_cast<uint64_t>(*p - '0');

            return value;
        }

        // CS2's new item popup acknowledging an item (Lootline hooks.cpp
        // hkAcknowledgeNewItem). The game's own acknowledge asks Valve to move
        // the item; ours is acknowledged here and never sent.
        bool __fastcall HkAcknowledgeNewItem(void* api, const char* itemText)
        {
            const uint64_t id = ParseIdText(itemText);
            bool ours = false;
            bool wasNew = false;

            if (id)
            {
                __try
                {
                    ours = LootSOCache::HasItem(id) && LootSOCache::Acknowledge(id, wasNew);
                }
                __except (EXCEPTION_EXECUTE_HANDLER)
                {
                    ours = false;
                }
            }

            if (ours)
            {
                Log("[inventory-ops] new item %llu acknowledged locally (was new = %s)",
                    static_cast<unsigned long long>(id), wasNew ? "yes" : "no");
                return wasNew;
            }

            return g_ackOriginal ? g_ackOriginal(api, itemText) : false;
        }

        // CS2's Delete (Lootline hkDeleteItem): Valve does not know our items,
        // so removing one is local. `false` leaves the object alone - the
        // inventory UI may still point at it for a moment.
        void __fastcall HkDeleteItem(void* api, const char* itemText)
        {
            const uint64_t id = ParseIdText(itemText);
            bool removed = false;

            if (id)
            {
                __try
                {
                    removed = LootSOCache::HasItem(id) && LootSOCache::Remove(id, false);
                }
                __except (EXCEPTION_EXECUTE_HANDLER)
                {
                    removed = false;
                }
            }

            if (removed)
            {
                Log("[inventory-ops] delete: %llu removed locally (CS2's Delete)",
                    static_cast<unsigned long long>(id));
                return;
            }

            if (g_deleteOriginal)
                g_deleteOriginal(api, itemText);
        }

        // The name tag popup's Remove (Lootline hkClearCustomName): the name
        // comes off here, then the inventory is told so the item redraws.
        void __fastcall HkClearCustomName(void* api, const char* itemText)
        {
            const uint64_t id = ParseIdText(itemText);
            bool cleared = false;

            if (id)
            {
                __try
                {
                    cleared = LootSOCache::HasItem(id) && LootSOCache::ClearCustomName(id);
                }
                __except (EXCEPTION_EXECUTE_HANDLER)
                {
                    cleared = false;
                }
            }

            if (cleared)
            {
                Log("[inventory-ops] name tag: the name came off %llu locally",
                    static_cast<unsigned long long>(id));
                return;
            }

            if (g_clearNameOriginal)
                g_clearNameOriginal(api, itemText);
        }

        bool ApplyUsePack(uint64_t packId);

        // A queued action on the game thread. Nothing here may need unwinding
        // of its own: __try and local objects are not allowed in one function.
        void RunJobSafe(const Job& job)
        {
            __try
            {
                if (job.kind == JobKind::RemoveCharm)
                    ApplyCharmRemoval(job.item);
                else if (job.kind == JobKind::UsePack)
                    ApplyUsePack(job.item);
                else
                    ApplyCasketJob(job);
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                Log("[tools] a queued tool action faulted; the rest continue");
            }
        }

        // Using the pack: three detachments are banked and the pack is used up.
        // Lootline: unboxer.cpp FinishToolJobs - g_charmDetachments +=
        // CHARM_DETACHMENTS_PER_PACK, EraseLocked(job.tool), RemoveItem, then
        // NotifyItemCustomization(0, "keychain_tool_charges", tool id).
        bool ApplyUsePack(uint64_t packId)
        {
            {
                std::lock_guard<std::mutex> lock(g_mutex);

                g_detachmentCharges += DETACHMENTS_PER_PACK;

                if (std::find(g_spentPacks.begin(), g_spentPacks.end(), packId) == g_spentPacks.end())
                {
                    if (g_spentPacks.size() >= 64)
                        g_spentPacks.erase(g_spentPacks.begin());
                    g_spentPacks.push_back(packId);
                }

                SaveStateLocked();
            }

            const bool removed = LootSOCache::Remove(packId, false);
            const bool told = NativeApply::NotifyCustomization(
                0, "keychain_tool_charges", packId);

            Log("[tools] charm detachments: pack %llu used - %d now (item %s, popup %s)",
                static_cast<unsigned long long>(packId), DetachmentsRemaining(),
                removed ? "used up" : "NOT removed", told ? "told" : "NOT told");
            return true;
        }

        // ---- v7.11 ids ----

        // The projected id now carries the instance's creation time
        // (ArmoryInventory's StableIdFor), so every Armory item keeps its place
        // at the top of CS2's inventory and the newest one comes first. State
        // written before that change names the old hash ids, so the stored items
        // and their units are resolved once through the projection and rewritten
        // under the new ids - a Storage Unit the player just filled must not
        // look empty after an update.
        void MigrateStoredIds()
        {
            std::vector<std::pair<uint64_t, uint64_t>> entries;

            {
                std::lock_guard<std::mutex> lock(g_mutex);
                entries.assign(g_stored.begin(), g_stored.end());
            }

            if (entries.empty())
                return;

            const auto resolve = [](uint64_t id)
            {
                ArmoryInventory::ManagedItem managed;

                if (ArmoryInventory::FindManaged(id, managed))
                    return managed.id;

                if (ArmoryInventory::FindManagedByLegacyId(id, managed))
                    return managed.id;

                return id;
            };

            bool changed = false;
            std::unordered_map<uint64_t, uint64_t> migrated;

            for (const auto& entry : entries)
            {
                const uint64_t item = resolve(entry.first);
                const uint64_t unit = resolve(entry.second);

                if (item != entry.first || unit != entry.second)
                    changed = true;

                if (item && unit)
                    migrated[item] = unit;
            }

            if (!changed)
                return;

            {
                std::lock_guard<std::mutex> lock(g_mutex);
                g_stored.swap(migrated);
                SaveStateLocked();
            }

            Log("[tools] v7.11 ids: %zu stored item(s) and their unit(s) carried over to the creation-ordered ids",
                migrated.size());
        }

        // ---- after an Apply ----

        // A unit the profile no longer carries releases its items (Lootline's
        // ReleaseCasketContents), and an item the profile no longer carries
        // leaves its unit. Units still in the projection get our count written
        // back, because the projection carries the profile's (0), not the
        // runtime's.
        void SyncUnitCounts()
        {
            MigrateStoredIds();

            std::lock_guard<std::mutex> lock(g_mutex);
            bool changed = false;

            for (auto entry = g_stored.begin(); entry != g_stored.end();)
            {
                ArmoryInventory::ManagedItem item;
                ArmoryInventory::ManagedItem unit;

                if (!ArmoryInventory::FindManaged(entry->first, item) ||
                    !ArmoryInventory::FindManaged(entry->second, unit) ||
                    unit.definition != DEF_CASKET)
                {
                    Log("[tools] storage: %llu leaves unit %llu - it is gone from the profile",
                        static_cast<unsigned long long>(entry->first),
                        static_cast<unsigned long long>(entry->second));
                    entry = g_stored.erase(entry);
                    changed = true;
                    continue;
                }

                ++entry;
            }

            if (changed)
                SaveStateLocked();
        }

        // Lootline stamps a unit's "modification date" when it is named, and CS2
        // keeps asking for a name until that attribute is there (unboxer.cpp:3572
        // "naming it is what makes it usable"). The Armory owns the label, so a
        // unit that has one is stamped the first time this session sees it:
        // without the date the unit opens on "Personalize Your Storage Unit" and
        // never gets as far as a casket request.
        // One truth for a unit's label, so the date stamp and the transaction
        // can never disagree: the Armory's name, else a name CS2 gave the unit.
        bool UnitLabel(const ArmoryInventory::ManagedItem& unit, std::string& out)
        {
            out.clear();

            if (!unit.customName.empty())
            {
                out = unit.customName;
                return true;
            }

            std::string onItem;

            if (LootSOCache::ReadCustomName(unit.id, onItem) && !onItem.empty())
            {
                out = onItem;
                return true;
            }

            return false;
        }

        void WriteNamedUnitDates()
        {
            std::vector<ArmoryInventory::ManagedItem> items;
            if (!ArmoryInventory::SnapshotManagedItems(items))
                return;

            static std::unordered_map<uint64_t, uint32_t> s_stamped;

            for (const ArmoryInventory::ManagedItem& item : items)
            {
                if (item.definition != DEF_CASKET)
                    continue;

                std::string label;
                if (!UnitLabel(item, label))
                {
                    // Lootline's own rule (unboxer.cpp: "name the Storage Unit
                    // first"): a unit without a name has no modification date,
                    // and CS2 then asks for a name and never sends a casket
                    // request. Nothing can be answered until it is named.
                    static std::vector<uint64_t> unnamed;

                    if (std::find(unnamed.begin(), unnamed.end(), item.id) == unnamed.end())
                    {
                        if (unnamed.size() >= 32)
                            unnamed.erase(unnamed.begin());
                        unnamed.push_back(item.id);

                        Log("[tools] storage unit %llu has no name in the profile - CS2 asks to personalize it and sends no casket request (Lootline: \"name the Storage Unit first\")",
                            static_cast<unsigned long long>(item.id));
                    }

                    continue;
                }

                // The label the Armory owns has to be written here, on the
                // tick: written at creation it is wiped when CS2 adds the object
                // to its cache, which is why a unit logged a name and the tile
                // showed none.
                if (!item.customName.empty())
                {
                    std::string onItem;

                    if (!LootSOCache::ReadCustomName(item.id, onItem) || onItem != item.customName)
                    {
                        if (LootSOCache::SetCustomNameById(item.id, item.customName))
                            Log("[tools] storage unit %llu labelled \"%s\"",
                                static_cast<unsigned long long>(item.id), item.customName.c_str());
                    }
                }

                auto stamped = s_stamped.find(item.id);
                if (stamped == s_stamped.end())
                    stamped = s_stamped.emplace(item.id, NowSeconds()).first;

                const int count = StoredCount(item.id);

                if (LootSOCache::SetCasketInfo(item.id, count, stamped->second))
                {
                    Log("[tools] storage unit %llu \"%s\": %d item(s), modification date %u",
                        static_cast<unsigned long long>(item.id), label.c_str(),
                        count, stamped->second);
                }
                else
                {
                    Log("[tools] storage unit %llu \"%s\": the modification date could not be written",
                        static_cast<unsigned long long>(item.id), label.c_str());
                }
            }
        }

        // The projection still carries a pack the player has used, so it comes
        // back on every Apply. Lootline's save forgets the item; here the id is
        // remembered and the item is removed again.
        void DropSpentPacks()
        {
            std::vector<uint64_t> ids;
            {
                std::lock_guard<std::mutex> lock(g_mutex);
                ids = g_spentPacks;
            }

            for (const uint64_t id : ids)
            {
                if (!LootSOCache::HasItem(id))
                    continue;

                if (LootSOCache::Remove(id, false))
                    Log("[tools] used pack %llu removed again after the Apply",
                        static_cast<unsigned long long>(id));
            }
        }

        // The projection creates the profile's items from the Armory, which knows
        // nothing about what a unit holds: after an Apply (or a restart) every
        // stored item is back on the grid, so each is made again inside its unit.
        void RestoreStoredItems()
        {
            MigrateStoredIds();

            std::vector<std::pair<uint64_t, uint64_t>> stored;

            {
                std::lock_guard<std::mutex> lock(g_mutex);
                stored.assign(g_stored.begin(), g_stored.end());
            }

            int restored = 0;

            for (const auto& entry : stored)
            {
                ArmoryInventory::ManagedItem item;
                ArmoryInventory::ManagedItem unit;

                if (!ArmoryInventory::FindManaged(entry.first, item) ||
                    !ArmoryInventory::FindManaged(entry.second, unit) ||
                    unit.definition != DEF_CASKET)
                    continue;

                // Already the object we made inside the unit: nothing to do.
                auto known = g_inUnit.find(entry.first);
                if (known != g_inUnit.end() && known->second &&
                    known->second == LootSOCache::Find(entry.first))
                    continue;

                if (RecreateInUnit(item, entry.second))
                    ++restored;
                else
                    Log("[tools] storage: %llu could not be put back inside unit %llu",
                        static_cast<unsigned long long>(entry.first),
                        static_cast<unsigned long long>(entry.second));
            }

            if (restored)
                Log("[tools] storage: %d item(s) made again inside their unit", restored);
        }

        // The counts are written after the lock is gone: SetCasketInfo tells
        // CS2's inventory, and its listeners read the detachment charges.
        void WriteUnitCounts()
        {
            std::vector<std::pair<uint64_t, int>> counts;

            {
                std::lock_guard<std::mutex> lock(g_mutex);

                for (const auto& entry : g_stored)
                {
                    auto known = std::find_if(counts.begin(), counts.end(),
                        [&entry](const std::pair<uint64_t, int>& item)
                        {
                            return item.first == entry.second;
                        });

                    if (known == counts.end())
                        counts.push_back({ entry.second, CountStoredLocked(entry.second) });
                }
            }

            for (const auto& entry : counts)
                LootSOCache::SetCasketInfo(entry.first, entry.second, NowSeconds());
        }
    }

    bool Ready()
    {
        return g_installed.load();
    }

    const char* LastError()
    {
        return g_lastError;
    }

    int StoredCount(uint64_t unitId)
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        return CountStoredLocked(unitId);
    }

    bool IsStored(uint64_t itemId)
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        return g_stored.count(itemId) != 0;
    }

    int DetachmentsRemaining()
    {
        LoadState();

        std::lock_guard<std::mutex> lock(g_mutex);
        return g_detachmentCharges > 0 ? g_detachmentCharges : 0;
    }

    bool HandleUseTool(uint64_t toolId)
    {
        LoadState();

        if (!toolId || RuntimeModeState::Current() != RuntimeMode::Armory)
            return false;

        ArmoryInventory::ManagedItem tool;
        if (!ArmoryInventory::FindManaged(toolId, tool))
            return false;

        if (tool.definition != DEF_DETACH_PACK)
            return false;

        {
            std::lock_guard<std::mutex> lock(g_mutex);

            if (std::find(g_spentPacks.begin(), g_spentPacks.end(), toolId) != g_spentPacks.end())
            {
                Log("[tools] charm detachments: pack %llu was already used - the repeat is answered locally",
                    static_cast<unsigned long long>(toolId));
                return true;
            }
        }

        Log("[tools] charm detachments: pack %llu used - answered locally",
            static_cast<unsigned long long>(toolId));

        return QueueJob(JobKind::UsePack, 0, toolId);
    }

    bool Initialize()
    {
        if (g_installed.load())
            return true;

        g_attempts += 1;

        if (!MH_CreateHook_p || !MH_EnableHook_p)
        {
            std::snprintf(g_lastError, sizeof(g_lastError), "MinHook unavailable");
            Log("[tools] %s", g_lastError);
            return false;
        }

        struct Entry
        {
            const char* name;
            void*       detour;
            void**      original;
        };

        const Entry entries[] = {
            { "PerformItemCasketTransaction", reinterpret_cast<void*>(&HkCasketTransaction),
              reinterpret_cast<void**>(&g_casketOriginal) },
            { "GetCacheTypeElementFieldByIndex", reinterpret_cast<void*>(&HkCacheField),
              reinterpret_cast<void**>(&g_fieldOriginal) },
            { "RemoveKeychain", reinterpret_cast<void*>(&HkRemoveKeychain),
              reinterpret_cast<void**>(&g_removeOriginal) },
            { "AcknowledgeNewItembyItemID", reinterpret_cast<void*>(&HkAcknowledgeNewItem),
              reinterpret_cast<void**>(&g_ackOriginal) },
            { "DeleteItem", reinterpret_cast<void*>(&HkDeleteItem),
              reinterpret_cast<void**>(&g_deleteOriginal) },
            { "ClearCustomName", reinterpret_cast<void*>(&HkClearCustomName),
              reinterpret_cast<void**>(&g_clearNameOriginal) },
        };

        bool casket = false;
        bool charges = false;
        bool remove = false;
        bool actions = false;

        for (const Entry& entry : entries)
        {
            const uintptr_t function = NativeApply::ResolveInventoryFunction(entry.name);

            if (!function)
            {
                Log("[tools] InventoryAPI.%s not found in this build", entry.name);
                continue;
            }

            if (MH_CreateHook_p(reinterpret_cast<void*>(function), entry.detour, entry.original) != 0)
            {
                Log("[tools] MH_CreateHook(InventoryAPI.%s) failed", entry.name);
                continue;
            }

            if (MH_EnableHook_p(reinterpret_cast<void*>(function)) != 0)
            {
                Log("[tools] MH_EnableHook(InventoryAPI.%s) failed", entry.name);
                continue;
            }

            Log("[tools] InventoryAPI.%s hooked at 0x%p", entry.name, (void*)function);

            if (std::strcmp(entry.name, "PerformItemCasketTransaction") == 0)
                casket = true;
            else if (std::strcmp(entry.name, "GetCacheTypeElementFieldByIndex") == 0)
                charges = true;
            else if (std::strcmp(entry.name, "RemoveKeychain") == 0)
                remove = true;
            else
                actions = true;
        }

        if (!casket && !charges && !remove && !actions)
        {
            std::snprintf(g_lastError, sizeof(g_lastError), "no tool function could be hooked");
            Log("[tools] %s (attempt %d)", g_lastError, g_attempts);
            return false;
        }

        g_lastError[0] = '\0';
        g_installed.store(true);

        Log("[tools] ready: storage unit %s, charm detachment charges %s, charm take-off %s, item actions %s",
            casket ? "ok" : "NOT installed",
            charges ? "ok" : "NOT installed",
            remove ? "ok" : "NOT installed",
            actions ? "ok" : "NOT installed");
        return true;
    }

    void Tick()
    {
        LoadState();

        if (!g_installed.load())
        {
            if (g_attempts >= MAX_ATTEMPTS)
                return;

            const uint64_t now = NowMs();
            const uint64_t previous = g_lastAttemptMs.load();

            if (previous != 0 && now - previous < RETRY_INTERVAL_MS)
                return;

            g_lastAttemptMs.store(now);

            if (!Initialize())
                return;
        }

        // Units the projection has just re-created or retained: the count in
        // the cache is the projection's, so ours is written back.
        const uint64_t generation = ArmoryInventory::AdoptionGeneration();

        if (generation != g_syncedGeneration)
        {
            g_syncedGeneration = generation;
            SyncUnitCounts();
            RestoreStoredItems();
            WriteNamedUnitDates();
            WriteUnitCounts();
            DropSpentPacks();
        }

        // Names are *not* reconciled on a timer. v7.13 rewrote them every two
        // seconds; each write lands in CS2's live item view and fires
        // SO_UPDATED, and the two v7.13 sessions ended in networksystem
        // (network thread, null read at +0x388) while the Armory map was
        // loading right after such a pass. A name is now written only when the
        // projection is adopted (the retained branch of armory_inventory.cpp)
        // and when an item is created - never while the game is loading.
    }

    void MainThreadTick()
    {
        bool pending = false;
        {
            std::lock_guard<std::mutex> lock(g_jobsMutex);
            pending = !g_jobs.empty();
        }

        if (!pending)
            return;

        std::vector<Job> due;
        const uint64_t now = NowMs();

        {
            std::lock_guard<std::mutex> lock(g_jobsMutex);

            for (auto it = g_jobs.begin(); it != g_jobs.end();)
            {
                if (now >= it->dueMs)
                {
                    due.push_back(*it);
                    it = g_jobs.erase(it);
                }
                else
                {
                    ++it;
                }
            }
        }

        for (const Job& job : due)
            RunJobSafe(job);
    }
}
