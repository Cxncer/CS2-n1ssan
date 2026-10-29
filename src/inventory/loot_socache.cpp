#include "inventory/loot_socache.h"
#include "inventory/loot_schema.h"
#include "inventory/loot_patterns.h"
#include "diagnostics/log.h"
#include "memory/access.h"
#include "memory/scanner.h"

#include <windows.h>
#include <cstdint>
#include <cstring>

namespace
{
    using CreateTypeCacheFn = void* (__fastcall*)(void* soCache, int classId);
    using AddObjectFn = bool(__fastcall*)(void* typeCache, void* object);
    using ListenerFn = void(__fastcall*)(void* inventory, const void* owner, void* object, int event);

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
    constexpr int SO_EVENT_INCREMENTAL = 4;

    constexpr int ATTR_PAINT_KIT = 6;
    constexpr int ATTR_PAINT_SEED = 7;
    constexpr int ATTR_PAINT_WEAR = 8;
    constexpr int ATTR_KILL_EATER = 80;
    constexpr int ATTR_KILL_EATER_TYPE = 81;

    CreateTypeCacheFn g_createTypeCache = nullptr;
    uint32_t g_soCacheOffset = 0;

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
        if (!inv) return nullptr;
        if (g_soCacheOffset)
        {
            void* c = nullptr;
            __try { c = *reinterpret_cast<void* const*>(static_cast<const uint8_t*>(inv) + g_soCacheOffset); }
            __except (EXCEPTION_EXECUTE_HANDLER) {}
            if (c && reinterpret_cast<uintptr_t>(c) > 0x10000) return c;
        }
        // Try 0x68 first (Loot's hardcoded default), then walk 8-byte offsets up to 0x200
        for (uint32_t off = 0x68; off < 0x200; off += (off == 0x68 ? 0x20 : 8))
        {
            void* c = nullptr;
            __try { c = *reinterpret_cast<void* const*>(static_cast<const uint8_t*>(inv) + off); }
            __except (EXCEPTION_EXECUTE_HANDLER) {}
            if (c && reinterpret_cast<uintptr_t>(c) > 0x10000)
            {
                // sanity: type cache should be resolvable
                if (g_createTypeCache)
                {
                    void* tc = nullptr;
                    __try { tc = g_createTypeCache(c, CLASS_ECON_ITEM); }
                    __except (EXCEPTION_EXECUTE_HANDLER) {}
                    if (tc && reinterpret_cast<uintptr_t>(tc) > 0x10000)
                    {
                        g_soCacheOffset = off;
                        return c;
                    }
                }
            }
        }
        return nullptr;
    }

    void* ItemTypeCache(void* inv)
    {
        void* soCache = SharedObjectCache(inv);
        if (!soCache || !g_createTypeCache) return nullptr;
        __try { return g_createTypeCache(soCache, CLASS_ECON_ITEM); }
        __except (EXCEPTION_EXECUTE_HANDLER) { return nullptr; }
    }

    bool ForEachItem(void* tc, bool (*visit)(void* item, uint64_t id, void* user), void* user)
    {
        if (!tc) return false;
        int count = 0; void** elements = nullptr;
        __try
        {
            count = *reinterpret_cast<const int*>(static_cast<const uint8_t*>(tc) + 0x8);
            elements = *reinterpret_cast<void** const*>(static_cast<const uint8_t*>(tc) + 0x10);
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
        if (count <= 0 || count > 200000 || !elements) return false;
        for (int i = 0; i < count; ++i)
        {
            void* item = nullptr; uint64_t id = 0;
            __try { item = elements[i]; if (item) id = static_cast<EconItem*>(item)->id; }
            __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
            if (item && !visit(item, id, user)) return true;
        }
        return true;
    }

    bool HasItemVisitor(void* item, uint64_t id, void* user)
    {
        return id != *static_cast<uint64_t*>(user);
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
        return !ForEachItem(tc, HasItemVisitor, &id);
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
            if (!LootSchema::SetAttributeFloat(item, ATTR_PAINT_KIT, static_cast<float>(req.paintKit))) { Log("[socache] FAIL at paintKit def=%u pk=%d", req.definition, req.paintKit); return CreateResult::Failed; }
            if (!LootSchema::SetAttributeFloat(item, ATTR_PAINT_SEED, static_cast<float>(req.seed))) { Log("[socache] FAIL at seed def=%u", req.definition); return CreateResult::Failed; }
            if (!LootSchema::SetAttributeFloat(item, ATTR_PAINT_WEAR, req.wear)) { Log("[socache] FAIL at wear def=%u", req.definition); return CreateResult::Failed; }
        }
        if (req.statTrak >= 0)
        {
            if (!LootSchema::SetAttributeInt(item, ATTR_KILL_EATER, req.statTrak))     return CreateResult::Failed;
            if (!LootSchema::SetAttributeInt(item, ATTR_KILL_EATER_TYPE, 0))            return CreateResult::Failed;
        }

        __try
        {
            auto addFn = reinterpret_cast<AddObjectFn>((*reinterpret_cast<void***>(tc))[1]);
            if (!addFn) { Log("[socache] AddObject vfunc null"); return CreateResult::Failed; }
            if (!addFn(tc, item)) { Log("[socache] AddObject returned false def=%u", req.definition); return CreateResult::Failed; }
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { Log("[socache] AddObject threw"); return CreateResult::Failed; }

        __try
        {
            auto listener = reinterpret_cast<ListenerFn>((*reinterpret_cast<void***>(inv))[VFUNC_SO_CREATED]);
            listener(inv, &owner, item, SO_EVENT_INCREMENTAL);
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {}

        return CreateResult::Ok;
    }
}