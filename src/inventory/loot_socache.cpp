#include "inventory/loot_socache.h"
#include "inventory/loot_schema.h"
#include "inventory/loot_patterns.h"
#include "config/offsets.h"
#include "diagnostics/log.h"
#include "memory/access.h"
#include "memory/scanner.h"

// sdk/item_view.h carries the global ATTR_* attribute ids, which collide with
// the ids this file keeps locally, so only the one helper is named here.
void SetCustomName(uintptr_t item, const std::string& name);

#include <windows.h>
#include <cstdint>
#include <cstring>
#include <vector>
#include <utility>

namespace
{
    using CreateTypeCacheFn = void* (__fastcall*)(void* soCache, int classId);
    using AddObjectFn = bool(__fastcall*)(void* typeCache, void* object);
    using RemoveObjectFn = void* (__fastcall*)(void* typeCache, void* object);
    using ListenerFn = void(__fastcall*)(void* inventory, const void* owner, void* object, int event);
    using DestructItemFn = void(__fastcall*)(void* item, bool freeMemory);

    struct EconItem
    {
        void* vtable;        // 0x00
        void* vtable2;       // 0x08
        uint64_t      id;            // 0x10
        uint64_t      originalId;    // 0x18
        void* customData;    // 0x20
        uint32_t      accountId;     // 0x28
        uint32_t      inventory;     // 0x2C
        uint16_t      definition;    // 0x30
        uint16_t      origin : 5;    // 0x32
        uint16_t      quality : 4;
        uint16_t      level : 2;
        uint16_t      rarity : 4;
        uint16_t      dirty : 1;
    };

    struct SOID { uint64_t id; uint32_t type; uint32_t pad; };

    constexpr int CLASS_ECON_ITEM = 1;
    constexpr int VFUNC_SO_CREATED = 0;
    constexpr int VFUNC_SO_UPDATED = 1;
    constexpr int VFUNC_SO_DESTROYED = 2;
    // An item's position carries this bit until CS2 acknowledges it ("NEW").
    constexpr uint32_t NEW_ITEM_FLAG = 0x40000000u;
    constexpr int VFUNC_TYPECACHE_REMOVE = 3;
    constexpr int VFUNC_ITEM_DESTRUCT = 1;
    constexpr int SO_EVENT_INCREMENTAL = 4;

    constexpr int ATTR_PAINT_KIT = 6;
    constexpr int ATTR_PAINT_SEED = 7;
    constexpr int ATTR_PAINT_WEAR = 8;
    constexpr int ATTR_KILL_EATER = 80;
    constexpr int ATTR_KILL_EATER_TYPE = 81;
    // 75 "Tradable After": an item CS2 will not trade before this unix time.
    constexpr int ATTR_TRADABLE_AFTER = 75;
    // An unsealed graffiti's charges ("sprays remaining") and colour variant
    // ("spray tint id", 1-19), both stored as integers.
    constexpr int ATTR_SPRAYS_REMAINING = 232;
    constexpr int ATTR_SPRAY_TINT = 233;
    // A Storage Unit (casket, definition 1201) and a Charm Detachment Pack both
    // show "items count"; a named unit also carries its label date.
    constexpr int ATTR_ITEMS_COUNT = 270;
    constexpr int ATTR_MODIFICATION_DATE = 271;
    constexpr uint16_t DEF_CASKET = 1201;
    // The container an item sits in ("casket item id low/high"): its unit's id,
    // low and high 32 bits.
    constexpr int ATTR_CASKET_ID_LOW = 272;
    constexpr int ATTR_CASKET_ID_HIGH = 273;
    // How an item arrived, in the low bits of a NEW position (Lootline
    // PICKUP_PURCHASED). CS2 reads the position as "bit 30 + pickup method", so
    // a plain slot number there is not a valid pickup.
    constexpr uint32_t PICKUP_PURCHASED = 4;

    CreateTypeCacheFn g_createTypeCache = nullptr;
    uint32_t g_soCacheOffset = 0;

    bool ShouldLogSocacheDiagnostic()
    {
        // Keep watcher-driven diagnostics useful without flooding the log.
        static volatile LONG lastLog = 0;
        const DWORD now = GetTickCount();
        const LONG previous = InterlockedCompareExchange(&lastLog, 0, 0);
        if (now - static_cast<DWORD>(previous) < 2000)
            return false;
        return InterlockedCompareExchange(&lastLog, static_cast<LONG>(now), previous) == previous;
    }

    bool ReadOwner(const void* inv, SOID& o)
    {
        __try { o = *reinterpret_cast<const SOID*>(static_cast<const uint8_t*>(inv) + 0x10); return o.id != 0; }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    void* LocalInventory()
    {
        void* mgr = LootSchema::GetManager();
        if (!mgr) return nullptr;
        void* inv = nullptr;
        __try {
            inv = *reinterpret_cast<void* const*>(
                static_cast<const uint8_t*>(mgr) + LootSchema::InventoryOffsetFromUseTool());
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return nullptr; }
        return inv;
    }

    void* SharedObjectCache(void* inv)
    {
        if (!inv)
        {
            if (ShouldLogSocacheDiagnostic())
                Log("[socache-diag] inventory pointer is null");
            return nullptr;
        }
        if (g_soCacheOffset)
        {
            void* c = nullptr;
            bool readFailed = false;
            __try { c = *reinterpret_cast<void* const*>(static_cast<const uint8_t*>(inv) + g_soCacheOffset); }
            __except (EXCEPTION_EXECUTE_HANDLER) { readFailed = true; }
            if (c && reinterpret_cast<uintptr_t>(c) > 0x10000) return c;
            if (ShouldLogSocacheDiagnostic())
                Log("[socache-diag] cached SOCache offset failed inv=%p offset=0x%X value=%p readException=%d",
                    inv, g_soCacheOffset, c, readFailed ? 1 : 0);
        }
        // Try 0x68 first (Loot's hardcoded default), then walk 8-byte offsets up to 0x200
        bool sawPlausibleCandidate = false;
        bool sawTypeCacheException = false;
        for (uint32_t off = 0x68; off < 0x200; off += (off == 0x68 ? 0x20 : 8))
        {
            void* c = nullptr;
            __try { c = *reinterpret_cast<void* const*>(static_cast<const uint8_t*>(inv) + off); }
            __except (EXCEPTION_EXECUTE_HANDLER) {}
            if (c && reinterpret_cast<uintptr_t>(c) > 0x10000)
            {
                sawPlausibleCandidate = true;
                // sanity: type cache should be resolvable
                if (g_createTypeCache)
                {
                    void* tc = nullptr;
                    bool typeCacheException = false;
                    __try { tc = g_createTypeCache(c, CLASS_ECON_ITEM); }
                    __except (EXCEPTION_EXECUTE_HANDLER) { typeCacheException = true; }
                    sawTypeCacheException = sawTypeCacheException || typeCacheException;
                    if (tc && reinterpret_cast<uintptr_t>(tc) > 0x10000)
                    {
                        g_soCacheOffset = off;
                        if (ShouldLogSocacheDiagnostic())
                            Log("[socache-diag] SOCache resolved inv=%p offset=0x%X cache=%p typeCache=%p",
                                inv, off, c, tc);
                        return c;
                    }
                }
            }
        }
        if (ShouldLogSocacheDiagnostic())
            Log("[socache-diag] SOCache scan failed inv=%p cachedOffset=0x%X createTypeCache=%p plausibleCandidates=%d typeCacheException=%d",
                inv, g_soCacheOffset, reinterpret_cast<void*>(g_createTypeCache),
                sawPlausibleCandidate ? 1 : 0, sawTypeCacheException ? 1 : 0);
        return nullptr;
    }

    void* ItemTypeCache(void* inv)
    {
        void* soCache = SharedObjectCache(inv);
        if (!soCache || !g_createTypeCache)
        {
            if (ShouldLogSocacheDiagnostic())
                Log("[socache-diag] type-cache lookup skipped inv=%p soCache=%p createTypeCache=%p",
                    inv, soCache, reinterpret_cast<void*>(g_createTypeCache));
            return nullptr;
        }
        void* typeCache = nullptr;
        bool threw = false;
        __try { typeCache = g_createTypeCache(soCache, CLASS_ECON_ITEM); }
        __except (EXCEPTION_EXECUTE_HANDLER) { threw = true; }
        if ((!typeCache || reinterpret_cast<uintptr_t>(typeCache) <= 0x10000 || threw) &&
            ShouldLogSocacheDiagnostic())
            Log("[socache-diag] type-cache lookup failed inv=%p soCache=%p typeCache=%p exception=%d",
                inv, soCache, typeCache, threw ? 1 : 0);
        return threw ? nullptr : typeCache;
    }

    bool ForEachItem(void* tc, bool (*visit)(void* item, uint64_t id, void* user), void* user)
    {
        if (!tc)
        {
            if (ShouldLogSocacheDiagnostic())
                Log("[socache-diag] enumeration failed: type-cache pointer is null");
            return false;
        }
        int count = 0; void** elements = nullptr;
        __try
        {
            count = *reinterpret_cast<const int*>(static_cast<const uint8_t*>(tc) + 0x8);
            elements = *reinterpret_cast<void** const*>(static_cast<const uint8_t*>(tc) + 0x10);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            if (ShouldLogSocacheDiagnostic())
                Log("[socache-diag] enumeration failed: type-cache header read exception tc=%p", tc);
            return false;
        }
        if (count < 0 || count > 200000)
        {
            if (ShouldLogSocacheDiagnostic())
                Log("[socache-diag] enumeration failed: invalid count tc=%p count=%d elements=%p",
                    tc, count, elements);
            return false;
        }
        if (count == 0) return true;
        if (!elements)
        {
            if (ShouldLogSocacheDiagnostic())
                Log("[socache-diag] enumeration failed: null elements array tc=%p count=%d", tc, count);
            return false;
        }
        for (int i = 0; i < count; ++i)
        {
            void* item = nullptr; uint64_t id = 0;
            __try { item = elements[i]; if (item) id = static_cast<EconItem*>(item)->id; }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                if (ShouldLogSocacheDiagnostic())
                    Log("[socache-diag] enumeration failed: item read exception tc=%p elements=%p count=%d index=%d",
                        tc, elements, count, i);
                return false;
            }
            if (item && !visit(item, id, user)) return false;
        }
        return true;
    }

    float FloatFromBits(uint32_t bits)
    {
        float value = 0.0f;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }

    void DestroyUncachedItem(void* item)
    {
        if (!item)
            return;

        __try
        {
            void** itemVtable = *reinterpret_cast<void***>(item);
            auto destruct = reinterpret_cast<DestructItemFn>(
                itemVtable[VFUNC_ITEM_DESTRUCT]);
            if (destruct)
                destruct(item, true);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[socache] failed to destruct an item that was not added");
        }
    }

    struct FindItemContext
    {
        uint64_t target = 0;
        void* item = nullptr;
    };

    bool FindItemVisitor(void* item, uint64_t id, void* user)
    {
        auto* context = static_cast<FindItemContext*>(user);
        if (id != context->target)
            return true;

        context->item = item;
        return false;
    }

    struct CollectIdsContext
    {
        uint64_t prefix = 0;
        uint64_t mask = 0;
        std::vector<uint64_t> ids;
    };

    bool CollectIdsVisitor(void*, uint64_t id, void* user)
    {
        auto* context = static_cast<CollectIdsContext*>(user);
        if ((id & context->mask) == context->prefix)
            context->ids.push_back(id);
        return true;
    }

    bool FindItemInCache(void* typeCache, uint64_t id, void*& item)
    {
        FindItemContext context{};
        context.target = id;
        const bool completed = ForEachItem(typeCache, FindItemVisitor, &context);
        item = context.item;
        // A match intentionally stops iteration; otherwise a successful full
        // traversal is required before absence can be trusted.
        return item != nullptr || completed;
    }

    // What CS2 itself answers for an item's name, and the object it answers it
    // from. Lootline writes a name into the view the inventory hands out by id
    // (game_inventory.cpp SetViewName -> g_itemViewById), not into the object it
    // created, and reads it back through C_EconItemView::GetCustomName (vfunc
    // 26). Doing the same here is what makes a label the card actually shows.
    using ItemViewByIdFn = void* (__fastcall*)(uint64_t id);
    using CustomNameFn = const char* (__fastcall*)(void* view, int stage);
    constexpr int VFUNC_ITEM_CUSTOM_NAME = 26;

    ItemViewByIdFn g_itemViewById = nullptr;
    bool g_itemViewLookupTried = false;

    void* ViewLookup(uint64_t id)
    {
        if (!g_itemViewById && !g_itemViewLookupTried)
        {
            g_itemViewLookupTried = true;

            const ModuleInfo client = GetClientModule();

            if (client.valid())
            {
                const uintptr_t address = ScanPattern(client, LootPatterns::ItemViewById);

                if (address)
                {
                    g_itemViewById = reinterpret_cast<ItemViewByIdFn>(address);
                    Log("[socache] Lootline ItemViewById @ %p",
                        reinterpret_cast<void*>(address));
                }
                else
                {
                    Log("[socache] Lootline ItemViewById signature not found - names fall back to the cache object");
                }
            }
        }

        if (!g_itemViewById || !id)
            return nullptr;

        void* view = nullptr;

        __try { view = g_itemViewById(id); }
        __except (EXCEPTION_EXECUTE_HANDLER) { view = nullptr; }

        return (view && reinterpret_cast<uintptr_t>(view) > 0x10000) ? view : nullptr;
    }

    // SEH only, no unwinding objects (C2712).
    bool ReadViewNameAt(uintptr_t view, char (&buffer)[161])
    {
        buffer[0] = 0;

        if (!view)
            return false;

        __try
        {
            void** vtable = *reinterpret_cast<void***>(view);
            if (!vtable)
                return false;

            auto getName = reinterpret_cast<CustomNameFn>(vtable[VFUNC_ITEM_CUSTOM_NAME]);
            const char* name = getName ? getName(reinterpret_cast<void*>(view), -1) : nullptr;

            if (!name)
                return false;

            for (int i = 0; i < 160; ++i)
            {
                buffer[i] = name[i];

                if (!name[i])
                    break;
            }

            buffer[160] = 0;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            buffer[0] = 0;
            return false;
        }
    }

    // The object whose name field CS2 reads for `id`: the view the inventory
    // hands out, else the cache object itself.
    uintptr_t NameTarget(uint64_t id, void*& cached)
    {
        cached = LootSOCache::Find(id);

        if (void* view = ViewLookup(id))
            return reinterpret_cast<uintptr_t>(view);

        return reinterpret_cast<uintptr_t>(cached);
    }
}

namespace LootSOCache
{
    bool Initialize()
    {
        if (g_createTypeCache)
            return true;

        ModuleInfo client = GetClientModule();
        if (!client.valid())
        {
            Log("[socache] client module unavailable during initialization");
            return false;
        }

        g_createTypeCache = reinterpret_cast<CreateTypeCacheFn>(
            ScanPattern(client, LootPatterns::CreateBaseTypeCache));
        if (!g_createTypeCache)
        {
            Log("[socache] CreateBaseTypeCache not found");
            return false;
        }

        Log("[socache] CreateBaseTypeCache initialized @ %p",
            reinterpret_cast<void*>(g_createTypeCache));
        return true;
    }

    bool WaitForInventory(int timeoutMs)
    {
        if (!Initialize())
            return false;

        const DWORD start = GetTickCount();
        while (GetTickCount() - start < (DWORD)timeoutMs)
        {
            void* inv = LocalInventory();
            if (inv && ItemTypeCache(inv)) return true;
            Sleep(100);
        }
        Log("[socache] inventory chain not ready after %d ms", timeoutMs);
        return false;
    }

    // What a sticker or charm item really carries, read through the same code the
    // Armory uses for weapon attachments. A blank card in CS2's inventory has
    // always matched "kit 0" here.
    void LogAttachmentIdentity(void* item, uint16_t definition, int stickerKit,
                               int keychain)
    {
        Attachments::Set set;
        const bool readable = Attachments::Read(item, set);

        Log("[socache] item def=%u requested kit=%d charm=%d readable=%d saw kit=%d charm=%d",
            definition, stickerKit, keychain, readable ? 1 : 0,
            set.stickers[0].kit, set.charm.kit);
    }

    bool HasItem(uint64_t id)
    {
        void* tc = ItemTypeCache(LocalInventory());
        if (!tc) return false;

        void* item = nullptr;
        if (!FindItemInCache(tc, id, item))
            return false;
        return item != nullptr;
    }

    void* Find(uint64_t id)
    {
        if (!id) return nullptr;

        void* tc = ItemTypeCache(LocalInventory());
        if (!tc) return nullptr;

        void* item = nullptr;
        if (!FindItemInCache(tc, id, item))
            return nullptr;
        return item;
    }

    bool ReadAttachments(uint64_t id, Attachments::Set& out)
    {
        out = Attachments::Set{};

        void* item = Find(id);
        if (!item) return false;

        return Attachments::Read(item, out);
    }

    bool SyncAttachments(uint64_t id, const Attachments::Set& attachments)
    {
        void* item = Find(id);
        if (!item) return false;

        Attachments::Set current;
        const bool known = Attachments::Read(item, current);

        if (known && current == attachments)
            return true;

        // The Armory set is authoritative for this item: a slot it does not fill
        // is cleared, so a fake skin never keeps the real item's stickers or
        // charm. `clearMissing` also covers the inconclusive-read case, where
        // `current` alone would leave the real attachments behind.
        return Attachments::Write(item, attachments, known ? &current : nullptr, true, true);
    }

    bool SetCasketInfo(uint64_t id, int itemsCount, uint32_t modificationDate)
    {
        void* item = Find(id);
        if (!item) return false;

        // Zero is a real answer here (an emptied unit), so it is written rather
        // than skipped: a stale count is the one thing the card must not show.
        bool ok = LootSchema::SetAttributeInt(item, ATTR_ITEMS_COUNT,
            itemsCount > 0 ? itemsCount : 0);

        if (modificationDate > 0 &&
            !LootSchema::SetAttributeInt(item, ATTR_MODIFICATION_DATE,
                static_cast<int>(modificationDate)))
            ok = false;

        if (ok)
            NotifyUpdated(id);

        return ok;
    }

    bool NotifyUpdated(uint64_t id)
    {
        if (!id)
            return false;

        void* inv = LocalInventory();
        void* tc = ItemTypeCache(inv);
        SOID owner{};
        if (!inv || !tc || !ReadOwner(inv, owner))
            return false;

        void* item = nullptr;
        if (!FindItemInCache(tc, id, item) || !item)
            return false;

        // What a Game Coordinator item update does to the local inventory: the
        // shared-object listeners hear about it before anything else runs, which
        // is how the inventory screen and the in-match weapons learn the item
        // changed.
        __try
        {
            void** inventoryVtable = *reinterpret_cast<void***>(inv);
            auto notifyUpdated = reinterpret_cast<ListenerFn>(
                inventoryVtable[VFUNC_SO_UPDATED]);
            if (!notifyUpdated)
                return false;

            notifyUpdated(inv, &owner, item, SO_EVENT_INCREMENTAL);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[socache] SO_UPDATED threw for id=%llu",
                static_cast<unsigned long long>(id));
            return false;
        }
    }

    bool GetIdsByPrefix(uint64_t prefix, uint64_t mask, std::vector<uint64_t>& ids)
    {
        ids.clear();
        void* tc = ItemTypeCache(LocalInventory());
        if (!tc) return false;

        CollectIdsContext context{};
        context.prefix = prefix;
        context.mask = mask;
        if (!ForEachItem(tc, CollectIdsVisitor, &context))
            return false;

        ids = std::move(context.ids);
        return true;
    }

    bool Remove(uint64_t id, bool destruct)
    {
        if (!id)
            return false;

        void* inv = LocalInventory();
        void* tc = ItemTypeCache(inv);
        SOID owner{};
        if (!inv || !tc || !ReadOwner(inv, owner))
            return false;

        void* item = nullptr;
        if (!FindItemInCache(tc, id, item))
            return false;
        if (!item)
            return true; // Already absent is a successful reconciliation result.

        __try
        {
            void** inventoryVtable = *reinterpret_cast<void***>(inv);
            auto notifyDestroyed = reinterpret_cast<ListenerFn>(
                inventoryVtable[VFUNC_SO_DESTROYED]);
            if (!notifyDestroyed)
                return false;

            // Match the engine's normal shared-object lifecycle: notify first,
            // remove from the type cache second, destruct the object last.
            notifyDestroyed(inv, &owner, item, SO_EVENT_INCREMENTAL);

            void** typeCacheVtable = *reinterpret_cast<void***>(tc);
            auto removeObject = reinterpret_cast<RemoveObjectFn>(
                typeCacheVtable[VFUNC_TYPECACHE_REMOVE]);
            if (!removeObject)
                return false;

            removeObject(tc, item);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[socache] RemoveObject threw for id=%llu",
                static_cast<unsigned long long>(id));
            return false;
        }

        // Do not destruct memory while the cache still references it.
        void* stillPresent = nullptr;
        if (!FindItemInCache(tc, id, stillPresent) || stillPresent)
        {
            Log("[socache] RemoveObject did not safely detach id=%llu",
                static_cast<unsigned long long>(id));
            return false;
        }

        if (!destruct)
            return true;

        __try
        {
            void** itemVtable = *reinterpret_cast<void***>(item);
            auto destruct = reinterpret_cast<DestructItemFn>(
                itemVtable[VFUNC_ITEM_DESTRUCT]);
            if (!destruct)
                return false;
            destruct(item, true);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[socache] item destructor threw for id=%llu",
                static_cast<unsigned long long>(id));
            return false;
        }

        return true;
    }

    bool Acknowledge(uint64_t id, bool& wasNew)
    {
        wasNew = false;

        void* item = Find(id);
        if (!item)
            return false;

        EconItem* found = static_cast<EconItem*>(item);

        __try
        {
            const uint32_t position = found->inventory;

            // Already acknowledged: nothing to tell CS2 (Lootline returns true
            // with wasNew = false here, so the popup closes without a redraw).
            if (position != 0 && (position & NEW_ITEM_FLAG) == 0)
                return true;

            found->inventory = NextPosition();
            wasNew = true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[socache] acknowledge threw for id=%llu",
                static_cast<unsigned long long>(id));
            return false;
        }

        if (wasNew)
            NotifyUpdated(id);

        return true;
    }

    // Kept apart from the __try below: a function holding a std::string may not
    // also carry SEH (C2712), and this one has to build the empty name.
    static void WriteEmptyName(uintptr_t item)
    {
        SetCustomName(item, std::string());
    }

    // SEH and an unwinding object can't share a function (C2712), so the field is
    // copied out first.
    static bool CopyNameFieldAt(uintptr_t item, uintptr_t offset, char (&buffer)[161])
    {
        __try
        {
            const char* raw = reinterpret_cast<const char*>(item + offset);

            for (int i = 0; i < 161; ++i)
                buffer[i] = raw[i];

            buffer[160] = 0;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            buffer[0] = 0;
            return false;
        }
    }

    bool ReadCustomName(uint64_t id, std::string& out)
    {
        out.clear();

        void* item = Find(id);
        if (!item)
            return false;

        // What CS2 answers for the name is what the card draws, so it is asked
        // first: a field only this runtime can see is not a label the player has.
        {
            char shown[161]{};

            if (ReadViewNameAt(reinterpret_cast<uintptr_t>(ViewLookup(id)), shown) && shown[0])
            {
                std::string text;
                bool clean = true;

                for (size_t i = 0; i < 160 && shown[i]; ++i)
                {
                    const unsigned char c = static_cast<unsigned char>(shown[i]);

                    if (c < 0x20 || c > 0x7E || text.size() >= 64)
                    {
                        clean = false;
                        break;
                    }

                    text.push_back(static_cast<char>(c));
                }

                if (clean && !text.empty())
                {
                    out = text;
                    return true;
                }
            }
        }

        if (!g_off.EIV_CustomName && !g_off.EIV_CustomNameOverride)
            return false;

        // The override is what CS2 reads first; the plain field is the fallback
        // and what an older build of this runtime wrote.
        const uintptr_t fields[2] = { g_off.EIV_CustomNameOverride, g_off.EIV_CustomName };
        char buffer[161]{};
        bool copied = false;

        for (uintptr_t offset : fields)
        {
            if (!offset)
                continue;

            if (!CopyNameFieldAt(reinterpret_cast<uintptr_t>(item), offset, buffer))
                continue;

            copied = true;

            if (buffer[0])
                break;
        }

        if (!copied)
            return false;

        const char* raw = buffer;

        // Only something that reads as a name counts. The field is a fixed
        // 161-byte buffer inside the item; on a build whose schema moved it (or
        // right after CS2 rebuilt the object) it holds whatever was there, and
        // treating that as a label is how a unit got the modification date
        // CS2 needs before it offers "put in" - after which the transaction
        // was refused and CS2 waited for an answer that never came.
        std::string text;

        for (size_t i = 0; i < 160; ++i)
        {
            const unsigned char c = static_cast<unsigned char>(raw[i]);

            if (c == 0)
                break;

            if (c < 0x20 || c > 0x7E || text.size() >= 64)
            {
                out.clear();
                return false;
            }

            text.push_back(static_cast<char>(c));
        }

        // Leading/trailing blanks are not part of a label.
        const size_t first = text.find_first_not_of(' ');
        const size_t last = text.find_last_not_of(' ');
        if (first == std::string::npos)
            return false;

        out = text.substr(first, last - first + 1);

        if (out.empty())
            return false;

        return true;
    }

    // A label can only be written once CS2 has the item in its cache: a write at
    // creation is reset when the object is added, which is why a unit could show
    // a name in the log and an empty tile in the game.
    // SEH may not share a function with an object that needs unwinding (C2712),
    // so the write itself takes a plain pointer.
    static bool WriteNameAt(uintptr_t item, const char* name)
    {
        __try
        {
            size_t length = 0;
            if (name)
            {
                while (name[length] && length < 160)
                    ++length;
            }

            // Both fields: CS2's GetCustomName reads the override first, the
            // plain field is the fallback (and what CS2's own nametag writes).
            const uintptr_t fields[2] = { g_off.EIV_CustomNameOverride, g_off.EIV_CustomName };

            for (uintptr_t offset : fields)
            {
                if (!offset)
                    continue;

                char* field = reinterpret_cast<char*>(item + offset);
                if (!field)
                    continue;

                if (length)
                    std::memcpy(field, name, length);

                field[length] = 0;
            }

            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool SetCustomNameById(uint64_t id, const std::string& name)
    {
        void* cached = nullptr;
        const uintptr_t target = NameTarget(id, cached);

        if (!target)
            return false;

        // The view by id is Lootline's target and the one the card reads. The
        // cache object is only a fallback: it is written when the view write
        // failed, never on top of a successful one. v7.10 also wrote it whenever
        // the two pointers differed, which put 161 raw bytes at the view's name
        // offsets inside an object whose real layout is not proven - a write that
        // does not fault at the time and shows up later as a corrupted string in
        // whatever the game owns there (a fault inside networksystem while the
        // item is re-serialized).
        bool written = WriteNameAt(target, name.c_str());

        if (!written && cached && reinterpret_cast<uintptr_t>(cached) != target)
            written = WriteNameAt(reinterpret_cast<uintptr_t>(cached), name.c_str());

        if (!written)
            return false;

        char shown[161]{};
        const bool readable = ReadViewNameAt(target, shown);

        static uint64_t writes = 0;
        const uint64_t count = ++writes;

        if (count <= 12 || (count % 32) == 0)
        {
            Log("[socache] name \"%s\" written to %llu at %p (cache object %p): CS2 reads \"%s\"%s",
                name.c_str(), static_cast<unsigned long long>(id),
                reinterpret_cast<void*>(target), cached,
                readable ? shown : "", readable ? "" : " (no read-back)");
        }

        NotifyUpdated(id);
        return true;
    }

    bool ClearCustomName(uint64_t id)
    {
        void* item = Find(id);
        if (!item)
            return false;

        bool written = false;

        __try
        {
            WriteEmptyName(reinterpret_cast<uintptr_t>(item));
            written = true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            written = false;
        }

        if (!written)
        {
            Log("[socache] clearing the name threw for id=%llu",
                static_cast<unsigned long long>(id));
            return false;
        }

        return NotifyUpdated(id);
    }

    uint32_t NextPosition()
    {
        // Walk existing items, find highest slot number (low 30 bits), return +1.
        // Simplest correct: use a monotonically increasing counter seeded above 1000.
        static uint32_t s_next = 1000;
        return s_next++;
    }

    CreateResult Create(const NewItem& req)
    {
        if (!req.id || !req.definition) return CreateResult::Failed;
        void* inv = LocalInventory();
        if (!inv) return CreateResult::InventoryNotReady;
        void* tc = ItemTypeCache(inv);
        SOID owner{};
        if (!tc || !ReadOwner(inv, owner)) return CreateResult::InventoryNotReady;
        if (HasItem(req.id)) return CreateResult::AlreadyExists;

        void* item = LootSchema::CreateEconItemObject();
        if (!item) return CreateResult::Failed;

        EconItem* it = static_cast<EconItem*>(item);
        it->id = req.id;
        it->originalId = req.id;
        it->accountId = static_cast<uint32_t>(owner.id & 0xFFFFFFFFull);
        // Lootline's rule: an item added now arrives NEW (its position carries
        // the bit CS2 reads), a re-created one does not.
        it->inventory = req.asNew ? (NEW_ITEM_FLAG | PICKUP_PURCHASED) : NextPosition();
        it->definition = req.definition;
        it->origin = 0;
        it->quality = static_cast<uint16_t>(req.quality & 0xF);
        it->level = 1;
        it->rarity = static_cast<uint16_t>(req.rarity & 0xF);
        if (req.paintKit > 0)
        {
            if (!LootSchema::SetAttributeFloat(item, ATTR_PAINT_KIT, static_cast<float>(req.paintKit))) { Log("[socache] FAIL at paintKit def=%u pk=%d", req.definition, req.paintKit); DestroyUncachedItem(item); return CreateResult::Failed; }
            if (!LootSchema::SetAttributeFloat(item, ATTR_PAINT_SEED, static_cast<float>(req.seed))) { Log("[socache] FAIL at seed def=%u", req.definition); DestroyUncachedItem(item); return CreateResult::Failed; }
            if (!LootSchema::SetAttributeFloat(item, ATTR_PAINT_WEAR, req.wear)) { Log("[socache] FAIL at wear def=%u", req.definition); DestroyUncachedItem(item); return CreateResult::Failed; }
        }
        if (req.statTrak >= 0)
        {
            if (!LootSchema::SetAttributeInt(item, ATTR_KILL_EATER, req.statTrak)) { DestroyUncachedItem(item); return CreateResult::Failed; }
            if (!LootSchema::SetAttributeInt(item, ATTR_KILL_EATER_TYPE, 0)) { DestroyUncachedItem(item); return CreateResult::Failed; }
        }

        // The identity a sticker item needs before CS2 will name or draw it.
        // Written on every path, including items the cache already holds, because
        // an item created by an older build keeps whatever it was given back then.
        if (req.stickerKit > 0)
        {
            const float stickerId = FloatFromBits(static_cast<uint32_t>(req.stickerKit));
            if (!LootSchema::SetAttributeFloatByName(item, "sticker slot 0 id", stickerId))
            {
                Log("[socache] FAIL at sticker slot 0 id=%d", req.stickerKit);
                DestroyUncachedItem(item);
                return CreateResult::Failed;
            }
        }

        // A music kit is identified by "music id" (166); without it the item
        // exists in the inventory but names no anthem.
        if (req.musicKit > 0)
        {
            const float musicId = FloatFromBits(static_cast<uint32_t>(req.musicKit));
            // Not fatal: a schema that does not name this attribute must not
            // abort the whole inventory projection. The kit is then listed
            // without its anthem, and the next reload retries it.
            if (!LootSchema::SetAttributeFloatByName(item, "music id", musicId))
                Log("[socache] music id=%d not written (attribute not in this schema)",
                    req.musicKit);
        }

        // An unsealed graffiti without charges is an item CS2 will not let the
        // player equip: the spray wheel only offers a "spray0" graffiti that
        // still has uses left. "sprays remaining" (232) is an integer stored as
        // the raw 32 bits, like "kill eater", so it goes through the int setter.
        if (req.spraysRemaining > 0)
        {
            if (!LootSchema::SetAttributeInt(item, ATTR_SPRAYS_REMAINING,
                    req.spraysRemaining))
                Log("[socache] sprays remaining=%d not written (attribute not in this schema)",
                    req.spraysRemaining);
        }

        // The tint is what CS2 picks the card's image with: a tinted pattern's
        // art is the kit material suffixed with the tint index ("..._9").
        // Without it the item lists with no preview, so a tint that cannot be
        // written is worth a line of its own.
        if (req.sprayTint > 0)
        {
            if (!LootSchema::SetAttributeInt(item, ATTR_SPRAY_TINT, req.sprayTint))
                Log("[socache] spray tint=%d not written (attribute not in this schema)",
                    req.sprayTint);
        }

        if (req.definition == 1349)
        {
            Log("[socache] graffiti kit=%d tint=%d charges=%d def=%u",
                req.stickerKit, req.sprayTint, req.spraysRemaining, req.definition);
        }

        // "Tradable After" (75): the date a dropped item is tradable. Not
        // fatal - an item without it is simply tradable at once.
        if (req.tradableAfter > 0)
        {
            if (!LootSchema::SetAttributeInt(item, ATTR_TRADABLE_AFTER,
                    static_cast<int32_t>(req.tradableAfter)))
                Log("[socache] tradable after=%u not written (attribute not in this schema)",
                    req.tradableAfter);
        }

        if (req.definition == 1314)
        {
            Log("[socache] music kit id=%d def=%u", req.musicKit, req.definition);
        }

        // A Storage Unit draws its item count from this attribute; CS2 does not
        // recount the children itself.
        if (req.itemsCount > 0)
        {
            if (!LootSchema::SetAttributeInt(item, ATTR_ITEMS_COUNT, req.itemsCount))
                Log("[socache] items count=%d not written (attribute not in this schema)",
                    req.itemsCount);
        }

        if (req.modificationDate > 0)
        {
            if (!LootSchema::SetAttributeInt(item, ATTR_MODIFICATION_DATE,
                    static_cast<int>(req.modificationDate)))
                Log("[socache] modification date not written (attribute not in this schema)");
        }

        // The unit an item is inside. CS2 lists such an item inside that unit
        // instead of the inventory grid; without it a stored item stayed on the
        // grid for ever and the unit looked empty.
        if (req.casketId)
        {
            if (!LootSchema::SetAttributeInt(item, ATTR_CASKET_ID_LOW,
                    static_cast<int32_t>(req.casketId & 0xFFFFFFFFull)) ||
                !LootSchema::SetAttributeInt(item, ATTR_CASKET_ID_HIGH,
                    static_cast<int32_t>(req.casketId >> 32)))
            {
                Log("[socache] casket id=%llu not written (attribute not in this schema)",
                    static_cast<unsigned long long>(req.casketId));
            }
        }

        if (req.definition == DEF_CASKET)
        {
            // A Storage Unit's label is its custom name: CS2 draws the unit's
            // name from it and nothing else. The Armory owns the label, so it is
            // written as the item is created; an unlabelled unit is also the state
            // CS2's own rename flow never leaves.
            Log("[socache] storage unit items=%d def=%u name=\"%s\"",
                req.itemsCount, req.definition, req.customName.c_str());
        }

        // A name belongs on every item that carries one, not only on a unit.
        if (!req.customName.empty())
        {
            if (g_off.EIV_CustomName || g_off.EIV_CustomNameOverride)
            {
                SetCustomName(reinterpret_cast<uintptr_t>(item), req.customName);
            }
            else
            {
                Log("[socache] custom name \"%s\" not written for %llu (no C_EconItemView name field resolved)",
                    req.customName.c_str(), static_cast<unsigned long long>(req.id));
            }
        }

        // Same for the charm: the pair of attributes is what makes the keychain
        // resolve on the card.
        if (req.keychain > 0)
        {
            const float keychainId = FloatFromBits(static_cast<uint32_t>(req.keychain));
            const float keychainSeed = FloatFromBits(static_cast<uint32_t>(req.keychainSeed));

            if (!LootSchema::SetAttributeFloatByName(item, "keychain slot 0 id", keychainId) ||
                !LootSchema::SetAttributeFloatByName(item, "keychain slot 0 seed", keychainSeed))
            {
                Log("[socache] FAIL at keychain id=%d seed=%d",
                    req.keychain, req.keychainSeed);
                DestroyUncachedItem(item);
                return CreateResult::Failed;
            }

            // A Sticker Slab is a case around one sticker: CS2 draws the slab
            // from the sticker sealed inside it, so without this attribute the
            // card is blank and the charm never shows on a weapon.
            if (req.keychainSticker > 0)
            {
                const float sealed =
                    FloatFromBits(static_cast<uint32_t>(req.keychainSticker));

                if (!LootSchema::SetAttributeFloatByName(
                        item, "keychain slot 0 sticker", sealed))
                {
                    Log("[socache] slab sealed sticker not written id=%d (keychain=%d)",
                        req.keychainSticker, req.keychain);
                }
            }
        }

        // Stickers and the charm the player applied in CS2, restored from the
        // profile so the item comes back exactly as it was left. Failing to
        // write them keeps the weapon rather than dropping it from the
        // inventory; the retained-item sync corrects it on the next reload.
        if (!req.attachments.Empty() && !Attachments::Write(item, req.attachments, nullptr))
        {
            char text[160]{};
            Attachments::Describe(req.attachments, text, sizeof(text));
            Log("[socache] attachments not written for def=%u: %s",
                req.definition, text);
        }

        if (req.definition == 1209 || req.definition == 1355 ||
            req.definition == 1349 || req.definition == 1348 ||
            req.definition == 1314)
            LogAttachmentIdentity(item, req.definition, req.stickerKit,
                                  req.keychain);

        __try
        {
            auto addFn = reinterpret_cast<AddObjectFn>((*reinterpret_cast<void***>(tc))[1]);
            if (!addFn) { Log("[socache] AddObject vfunc null"); DestroyUncachedItem(item); return CreateResult::Failed; }
            if (!addFn(tc, item)) {
                Log("[socache] AddObject returned false def=%u", req.definition);
                if (!HasItem(req.id)) DestroyUncachedItem(item);
                return CreateResult::Failed;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            Log("[socache] AddObject threw");
            if (!HasItem(req.id)) DestroyUncachedItem(item);
            return CreateResult::Failed;
        }

        __try
        {
            auto listener = reinterpret_cast<ListenerFn>((*reinterpret_cast<void***>(inv))[VFUNC_SO_CREATED]);
            listener(inv, &owner, item, SO_EVENT_INCREMENTAL);
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {}

        // CS2 fills part of the view while the object enters the cache, which is
        // how a name written before AddObject disappeared. Everything CS2 reads
        // for this item is written again now that it is in the cache.
        if (req.casketId)
        {
            const bool low = LootSchema::SetAttributeInt(item, ATTR_CASKET_ID_LOW,
                static_cast<int32_t>(req.casketId & 0xFFFFFFFFull));
            const bool high = LootSchema::SetAttributeInt(item, ATTR_CASKET_ID_HIGH,
                static_cast<int32_t>(req.casketId >> 32));

            Log("[socache] casket id=%llu in the cache: low %s, high %s",
                static_cast<unsigned long long>(req.casketId),
                low ? "written" : "NOT written", high ? "written" : "NOT written");
        }

        if (!req.customName.empty() &&
            (g_off.EIV_CustomName || g_off.EIV_CustomNameOverride))
        {
            SetCustomName(reinterpret_cast<uintptr_t>(item), req.customName);
        }

        return CreateResult::Ok;
    }
}