#include "skin/glove_paintkit_schema.h"
#include "sdk/functions.h"

#include <Windows.h>
#include <cstdint>
#include <cstring>
#include <cstdio>
#include <string>
#include <unordered_map>

namespace
{
    struct PaintKitNode
    {
        int left;
        int right;
        int pad08;
        int pad0C;
        int key;
        int pad14;
        GlovePaintKitRecord* value;
    };

    struct PaintKitMap
    {
        int count;
        int capacityFlags;
        PaintKitNode* elements;
    };

    std::unordered_map<int, const char*> g_names;

    const char* PermanentCopy(const char* source)
    {
        if (!source || !*source)
            return nullptr;

        const std::string key(source);

        for (const auto& entry : g_names)
        {
            if (std::strcmp(entry.second, key.c_str()) == 0)
                return entry.second;
        }

        char* copy = static_cast<char*>(
            HeapAlloc(GetProcessHeap(), 0, key.size() + 1));

        if (!copy)
            return nullptr;

        std::memcpy(copy, key.c_str(), key.size() + 1);
        return copy;
    }

    struct InterfaceReg
    {
        using CreateFn = void* (*)();

        CreateFn create;
        const char* name;
        InterfaceReg* next;
    };

    void* GetLootInterface(
        const char* moduleName,
        const char* partialVersion)
    {
        HMODULE module = GetModuleHandleA(moduleName);
        if (!module)
            return nullptr;

        const auto symbol = reinterpret_cast<std::uintptr_t>(
            GetProcAddress(module, "CreateInterface"));

        if (!symbol)
            return nullptr;

        __try
        {
            const auto displacement =
                *reinterpret_cast<const std::int32_t*>(symbol + 3);

            const auto listAddress =
                symbol + displacement + 7;

            InterfaceReg* current =
                *reinterpret_cast<InterfaceReg**>(listAddress);

            for (; current; current = current->next)
            {
                if (current->name &&
                    std::strstr(current->name, partialVersion))
                {
                    return current->create
                        ? current->create()
                        : nullptr;
                }
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return nullptr;
        }

        return nullptr;
    }

    std::uint32_t ResolveMapOffset()
    {
        const auto fn = pGloveCreatePaintKit;

        if (!fn)
            return 0;

        const auto* code =
            reinterpret_cast<const std::uint8_t*>(fn);

        __try
        {
            for (int i = 0; i < 0xC0; ++i)
            {
                const auto* p = code + i;

                if (p[0] != 0x8B || p[1] != 0xD6 ||
                    p[2] != 0x48 || p[3] != 0x8B ||
                    p[4] != 0x5C || p[5] != 0x24 ||
                    p[7] != 0x48 || p[8] != 0x83 ||
                    p[9] != 0xC4 || p[11] != 0x5E ||
                    p[12] != 0xE9)
                    continue;

                const auto* lookup =
                    p + 17 +
                    *reinterpret_cast<const std::int32_t*>(p + 13);

                for (int j = 0; j < 0x40; ++j)
                {
                    if (lookup[j] == 0x44 &&
                        lookup[j + 1] == 0x3B &&
                        lookup[j + 2] == 0x83)
                    {
                        const auto offset =
                            *reinterpret_cast<const std::uint32_t*>(
                                lookup + j + 3);

                        return offset >= 0x100 && offset < 0x1000
                            ? offset
                            : 0;
                    }
                }

                return 0;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return 0;
        }

        return 0;
    }
}

namespace GlovePaintKitSchema
{
    bool Initialize()
    {
        g_names.clear();

        HMODULE client = GetModuleHandleA("client.dll");

        if (!client)
            return false;

        void* source2Client =
            GetLootInterface("client.dll", "Source2Client002");

        if (!source2Client)
        {
            printf("[paintkit-schema] Source2Client002 FAILED\n");
            return false;
        }

        void** vtable = *reinterpret_cast<void***>(source2Client);

        if (!vtable || !vtable[129])
            return false;

        using GetEconItemSystemFn =
            void* (__fastcall*)(void*);

        auto getItemSystem =
            reinterpret_cast<GetEconItemSystemFn>(vtable[129]);

        void* itemSystem = nullptr;

        __try
        {
            itemSystem = getItemSystem(source2Client);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }

        if (!itemSystem)
            return false;

        void* schema = nullptr;

        __try
        {
            schema = *reinterpret_cast<void**>(
                reinterpret_cast<std::uintptr_t>(itemSystem) + 0x08);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }

        if (!schema)
            return false;

        const std::uint32_t offset = ResolveMapOffset();

        if (!offset)
        {
            printf("[paintkit-schema] Map offset resolution FAILED\n");
            return false;
        }

        PaintKitMap* map = nullptr;

        __try
        {
            map = reinterpret_cast<PaintKitMap*>(
                reinterpret_cast<std::uintptr_t>(schema) + offset);

            if (map->count <= 0 ||
                map->count > 10000 ||
                !map->elements)
                return false;

            for (int i = 0; i < map->count; ++i)
            {
                GlovePaintKitRecord* kit = map->elements[i].value;

                if (!kit)
                    continue;

                const int id = kit->m_ID;
                const char* name = kit->m_Name;

                if (id < 0 || !name || !*name)
                    continue;

                const char* permanent = PermanentCopy(name);

                if (permanent)
                    g_names[id] = permanent;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            g_names.clear();
            return false;
        }

        printf(
            "[paintkit-schema] READY offset=0x%X kits=%zu\n",
            offset,
            g_names.size());

        return !g_names.empty();
    }

    const char* GetName(int paintKitId)
    {
        const auto it = g_names.find(paintKitId);

        return it != g_names.end()
            ? it->second
            : nullptr;
    }

    bool RepairGeneratedName(GlovePaintKitRecord* generated, int paintKitId)
    {
        if (!generated)
            return false;

        const char* expected = GetName(paintKitId);

        if (!expected)
            return false;

        __try
        {
            const char* current = generated->m_Name;

            if (current && std::strcmp(current, expected) == 0)
                return true;

            generated->m_Name = expected;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }
}