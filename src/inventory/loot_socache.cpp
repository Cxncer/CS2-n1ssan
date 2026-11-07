#include "inventory/loot_socache.h"
#include "inventory/loot_schema.h"
#include "inventory/loot_patterns.h"
#include "diagnostics/log.h"
#include "memory/access.h"
#include "memory/scanner.h"

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
    constexpr int VFUNC_SO_DESTROYED = 2;
    constexpr int VFUNC_TYPECACHE_REMOVE = 3;
    constexpr int VFUNC_ITEM_DESTRUCT = 1;
    constexpr int SO_EVENT_INCREMENTAL = 4;

    constexpr int ATTR_PAINT_KIT = 6;
    constexpr int ATTR_PAINT_SEED = 7;
    constexpr int ATTR_PAINT_WEAR = 8;
    constexpr int ATTR_KILL_EATER = 80;
    constexpr int ATTR_KILL_EATER_TYPE = 81;

    CreateTypeCacheFn g_createTypeCache = nullptr;
    uint32_t g_soCacheOffset = 0;

    bool ShouldLogSocacheDiagnostic()
    {
        // Keep watcher-driven diagnostics useful without flooding the log.
        static DWORD lastLog = 0;
        const DWORD now = GetTickCount();
        if (now - lastLog < 2000)
            return false;
        lastLog = now;
        return true;
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
}

namespace LootSOCache
{
    bool WaitForInventory(int timeoutMs)
    {
        ModuleInfo client = GetClientModule();
        if (!client.valid()) return false;

        g_createTypeCache = reinterpret_cast<CreateTypeCacheFn>(
            ScanPattern(client, LootPatterns::CreateBaseTypeCache));
        if (!g_createTypeCache) { Log("[socache] CreateBaseTypeCache not found"); return false; }

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

    bool HasItem(uint64_t id)
    {
        void* tc = ItemTypeCache(LocalInventory());
        if (!tc) return false;

        void* item = nullptr;
        if (!FindItemInCache(tc, id, item))
            return false;
        return item != nullptr;
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

    bool Remove(uint64_t id)
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
        it->inventory = NextPosition();
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
        }

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

        return CreateResult::Ok;
    }
}