#include "skin/glove_model_refresh.h"
#include "skin/glove_schema.h"

#include <Windows.h>
#include <Psapi.h>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <atomic>

namespace
{
    using AgentSetModelFn =
        void(__fastcall*)(void*, const char*);

    using AgentPrecacheFn =
        void* (__fastcall*)(void*, void*, const char*);

    using BufferStringInsertFn =
        const char* (__fastcall*)(void*, int, const char*, int, bool);

    using BufferStringPurgeFn =
        void(__fastcall*)(void*, int);

    struct CBufferString
    {
        int length = 0;
        int allocatedSize = static_cast<int>(0xC0000008u);

        union
        {
            char* string;
            char inlineString[8];
        };

        CBufferString()
        {
            string = nullptr;
        }
    };

    struct Vector3
    {
        float x;
        float y;
        float z;
    };

    struct InterfaceReg
    {
        void* (*create)();
        const char* name;
        InterfaceReg* next;
    };

    struct EconMapNode
    {
        int left;
        int right;
        void* value;
        int flag;
        int key;
    };

    struct EconMap
    {
        int count;
        int capacityFlags;
        EconMapNode* elements;
    };

    constexpr int FRAME_RENDER_END = 6;
    constexpr std::uint32_t ITEM_DEFINITION_MAP_OFFSET = 0xF8;

    constexpr const char* AGENT_SET_MODEL_PATTERN =
        "40 53 48 83 EC ? 48 8B D9 4C 8B C2 48 8B 0D ? ? ? ? 48 8D 54 24";

    constexpr const char* AGENT_PRECACHE_PATTERN =
        "40 53 55 57 48 81 EC ? ? ? ? 48 8B 01 49 8B E8 48 8B FA";

    std::atomic_int g_request{ 0 };

    int g_swapStep = 0;
    void* g_swapPawn = nullptr;
    std::string g_restoreModel;

    AgentSetModelFn g_setAgentModel = nullptr;
    AgentPrecacheFn g_agentPrecache = nullptr;

    void* g_resourceSystem = nullptr;
    void* g_fileSystem = nullptr;
    void* g_engineClient = nullptr;

    BufferStringInsertFn g_bufferInsert = nullptr;
    BufferStringPurgeFn g_bufferPurge = nullptr;

    bool g_initialized = false;

    template<typename T>
    bool ReadMemory(std::uintptr_t address, T& value)
    {
        if (!address)
            return false;

        __try
        {
            value = *reinterpret_cast<T*>(address);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            value = {};
            return false;
        }
    }

    template<typename T>
    bool WriteMemory(std::uintptr_t address, const T& value)
    {
        if (!address)
            return false;

        __try
        {
            *reinterpret_cast<T*>(address) = value;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool ReadString(
        std::uintptr_t address,
        std::string& output,
        std::size_t maxLength = 512)
    {
        output.clear();

        if (!address)
            return false;

        for (std::size_t i = 0; i < maxLength; ++i)
        {
            char ch = '\0';

            if (!ReadMemory(address + i, ch))
                return false;

            if (ch == '\0')
                return !output.empty();

            output.push_back(ch);
        }

        output.clear();
        return false;
    }

    bool ReadField(
        void* object,
        const char* className,
        const char* fieldName,
        void* output,
        std::size_t size)
    {
        std::uint32_t offset = 0;

        if (!object ||
            !output ||
            !GlovesSchema::TryGet(className, fieldName, offset))
            return false;

        const auto address =
            reinterpret_cast<std::uintptr_t>(object) + offset;

        __try
        {
            std::memcpy(
                output,
                reinterpret_cast<const void*>(address),
                size);

            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool WriteField(
        void* object,
        const char* className,
        const char* fieldName,
        const void* value,
        std::size_t size)
    {
        std::uint32_t offset = 0;

        if (!object ||
            !value ||
            !GlovesSchema::TryGet(className, fieldName, offset))
            return false;

        const auto address =
            reinterpret_cast<std::uintptr_t>(object) + offset;

        __try
        {
            std::memcpy(
                reinterpret_cast<void*>(address),
                value,
                size);

            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    void* FindInterface(
        const char* moduleName,
        const char* partialName)
    {
        HMODULE module = GetModuleHandleA(moduleName);

        if (!module)
            return nullptr;

        const auto createInterface =
            reinterpret_cast<std::uintptr_t>(
                GetProcAddress(module, "CreateInterface"));

        if (!createInterface)
            return nullptr;

        std::int32_t displacement = 0;

        if (!ReadMemory(createInterface + 3, displacement))
            return nullptr;

        const std::uintptr_t listAddress =
            createInterface + 7 + displacement;

        InterfaceReg* current = nullptr;

        if (!ReadMemory(listAddress, current))
            return nullptr;

        while (current)
        {
            if (current->name &&
                std::strstr(current->name, partialName))
            {
                if (!current->create)
                    return nullptr;

                return current->create();
            }

            current = current->next;
        }

        return nullptr;
    }

    std::uintptr_t ScanModule(
        const char* moduleName,
        const char* pattern)
    {
        HMODULE module = GetModuleHandleA(moduleName);

        if (!module || !pattern)
            return 0;

        MODULEINFO info{};

        if (!GetModuleInformation(
            GetCurrentProcess(),
            module,
            &info,
            sizeof(info)))
            return 0;

        std::uint8_t bytes[128]{};
        bool wildcards[128]{};
        std::size_t length = 0;

        const char* p = pattern;

        while (*p)
        {
            while (*p == ' ')
                ++p;

            if (!*p)
                break;

            if (length >= 128)
                return 0;

            if (*p == '?')
            {
                bytes[length] = 0;
                wildcards[length] = true;
                ++length;
                ++p;

                if (*p == '?')
                    ++p;
            }
            else
            {
                char hex[3] = { p[0], p[1], 0 };

                bytes[length] = static_cast<std::uint8_t>(
                    std::strtoul(hex, nullptr, 16));

                wildcards[length] = false;
                ++length;
                p += 2;
            }
        }

        if (!length || length > info.SizeOfImage)
            return 0;

        const auto* base =
            reinterpret_cast<const std::uint8_t*>(info.lpBaseOfDll);

        for (std::size_t i = 0;
            i <= info.SizeOfImage - length;
            ++i)
        {
            bool match = true;

            for (std::size_t j = 0; j < length; ++j)
            {
                if (!wildcards[j] &&
                    base[i + j] != bytes[j])
                {
                    match = false;
                    break;
                }
            }

            if (match)
                return reinterpret_cast<std::uintptr_t>(base + i);
        }

        return 0;
    }

    void InitializeFunctions()
    {
        if (g_initialized)
            return;

        g_initialized = true;

        g_setAgentModel =
            reinterpret_cast<AgentSetModelFn>(
                ScanModule("client.dll", AGENT_SET_MODEL_PATTERN));

        g_agentPrecache =
            reinterpret_cast<AgentPrecacheFn>(
                ScanModule("resourcesystem.dll", AGENT_PRECACHE_PATTERN));

        g_resourceSystem =
            FindInterface(
                "resourcesystem.dll",
                "ResourceSystem013");

        g_fileSystem =
            FindInterface(
                "filesystem_stdio.dll",
                "VFileSystem017");

        g_engineClient =
            FindInterface(
                "engine2.dll",
                "Source2EngineToClient00");

        HMODULE tier0 = GetModuleHandleA("tier0.dll");

        if (tier0)
        {
            g_bufferInsert =
                reinterpret_cast<BufferStringInsertFn>(
                    GetProcAddress(
                        tier0,
                        "?Insert@CBufferString@@QEAAPEBDHPEBDH_N@Z"));

            g_bufferPurge =
                reinterpret_cast<BufferStringPurgeFn>(
                    GetProcAddress(
                        tier0,
                        "?Purge@CBufferString@@QEAAXH@Z"));
        }

        std::printf(
            "[model-refresh] functions: SetModel=%p Precache=%p Resource=%p "
            "FileSystem=%p Insert=%p Purge=%p\n",
            reinterpret_cast<void*>(g_setAgentModel),
            reinterpret_cast<void*>(g_agentPrecache),
            g_resourceSystem,
            g_fileSystem,
            reinterpret_cast<void*>(g_bufferInsert),
            reinterpret_cast<void*>(g_bufferPurge));
    }

    bool IsPlayingDemo()
    {
        if (!g_engineClient)
            return false;

        void** vtable = *reinterpret_cast<void***>(g_engineClient);

        if (!vtable || !vtable[42])
            return false;

        using IsPlayingDemoFn = bool(__fastcall*)(void*);

        __try
        {
            return reinterpret_cast<IsPlayingDemoFn>(
                vtable[42])(g_engineClient);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool FileExists(const char* path)
    {
        if (!g_fileSystem || !path)
            return false;

        void** vtable = *reinterpret_cast<void***>(g_fileSystem);

        if (!vtable || !vtable[21])
            return false;

        using ExistsFn =
            bool(__fastcall*)(void*, const char*, const char*);

        __try
        {
            return reinterpret_cast<ExistsFn>(
                vtable[21])(g_fileSystem, path, "GAME");
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    void PrecacheModel(const char* modelName)
    {
        if (!modelName ||
            !*modelName ||
            !g_resourceSystem ||
            !g_agentPrecache ||
            !g_bufferInsert)
            return;

        CBufferString names;

        g_bufferInsert(
            &names,
            0,
            modelName,
            -1,
            false);

        g_agentPrecache(
            g_resourceSystem,
            &names,
            "");

        if (g_bufferPurge)
            g_bufferPurge(&names, 0);
    }

    bool ReadCurrentModel(
        void* pawn,
        std::string& output)
    {
        output.clear();

        std::uintptr_t sceneNode = 0;

        if (!ReadField(
            pawn,
            "C_BaseEntity",
            "m_pGameSceneNode",
            &sceneNode,
            sizeof(sceneNode)) ||
            !sceneNode)
            return false;

        std::uintptr_t vtable = 0;
        std::uintptr_t getSkeletonAddress = 0;

        if (!ReadMemory(sceneNode, vtable) ||
            !vtable ||
            !ReadMemory(
                vtable + 13 * sizeof(std::uintptr_t),
                getSkeletonAddress) ||
            !getSkeletonAddress)
            return false;

        using GetSkeletonFn = void* (__fastcall*)(void*);

        void* skeleton = nullptr;

        __try
        {
            skeleton =
                reinterpret_cast<GetSkeletonFn>(
                    getSkeletonAddress)(
                        reinterpret_cast<void*>(sceneNode));
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }

        if (!skeleton)
            return false;

        std::uint32_t modelStateOffset = 0;
        std::uint32_t modelHandleOffset = 0;

        if (!GlovesSchema::TryGet(
            "CSkeletonInstance",
            "m_modelState",
            modelStateOffset) ||
            !GlovesSchema::TryGet(
                "CModelState",
                "m_hModel",
                modelHandleOffset))
            return false;

        const std::uintptr_t modelState =
            reinterpret_cast<std::uintptr_t>(skeleton) +
            modelStateOffset;

        std::uintptr_t binding = 0;
        std::uintptr_t model = 0;

        if (!ReadMemory(
            modelState + modelHandleOffset,
            binding) ||
            !binding ||
            !ReadMemory(binding, model) ||
            !model)
            return false;

        const char* modelName = nullptr;

        if (!ReadMemory(
            model + sizeof(std::uintptr_t),
            modelName) ||
            !modelName)
            return false;

        return ReadString(
            reinterpret_cast<std::uintptr_t>(modelName),
            output);
    }

    std::string AgentFamily(const std::string& agentName)
    {
        static const char* families[] =
        {
            "tm_jungle_raider",
            "tm_phoenix_heavy",
            "tm_professional",
            "tm_separatist",
            "tm_anarchist",
            "tm_jumpsuit",
            "tm_phoenix",
            "tm_balkan",
            "tm_pirate",
            "tm_leet",

            "ctm_gendarmerie",
            "ctm_heavy",
            "ctm_diver",
            "ctm_gign",
            "ctm_gsg9",
            "ctm_swat",
            "ctm_sas",
            "ctm_st6",
            "ctm_fbi",
            "ctm_idf"
        };

        for (const char* family : families)
        {
            const std::size_t length = std::strlen(family);

            if (agentName.compare(0, length, family) == 0)
                return family;
        }

        return {};
    }

    bool GetEconItemMap(EconMap& map)
    {
        map = {};

        void* source2Client =
            FindInterface("client.dll", "Source2Client002");

        if (!source2Client)
        {
            std::printf("[model-refresh] map: Source2Client002 unavailable\n");
            return false;
        }

        void** vtable = *reinterpret_cast<void***>(source2Client);

        if (!vtable || !vtable[129])
        {
            std::printf("[model-refresh] map: vtable slot 129 unavailable\n");
            return false;
        }

        using GetEconItemSystemFn =
            void* (__fastcall*)(void*);

        void* itemSystem = nullptr;

        __try
        {
            itemSystem =
                reinterpret_cast<GetEconItemSystemFn>(
                    vtable[129])(source2Client);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            std::printf("[model-refresh] map: GetEconItemSystem exception\n");
            return false;
        }

        if (!itemSystem)
        {
            std::printf("[model-refresh] map: item system is null\n");
            return false;
        }

        std::uintptr_t schema = 0;

        if (!ReadMemory(
            reinterpret_cast<std::uintptr_t>(itemSystem) +
            sizeof(std::uintptr_t),
            schema) ||
            !schema)
        {
            std::printf("[model-refresh] map: schema pointer unavailable\n");
            return false;
        }

        if (!ReadMemory(
            schema + ITEM_DEFINITION_MAP_OFFSET,
            map))
        {
            std::printf("[model-refresh] map: map read failed\n");
            return false;
        }

        std::printf(
            "[model-refresh] map acquired schema=%p count=%d "
            "capacityFlags=0x%X elements=%p\n",
            reinterpret_cast<void*>(schema),
            map.count,
            static_cast<unsigned>(map.capacityFlags),
            static_cast<void*>(map.elements));

        if (!map.elements || map.count <= 0 || map.count > 10000)
        {
            std::printf(
                "[model-refresh] map invalid count=%d elements=%p\n",
                map.count,
                static_cast<void*>(map.elements));
            return false;
        }

        return true;
    }

    std::string FindAlternateAgentModel(
        int team,
        const std::string& currentModel)
    {
        EconMap map{};

        if (!GetEconItemMap(map))
        {
            std::printf(
                "[model-refresh] discovery aborted: map unavailable\n");
            return {};
        }

        int customPlayerCount = 0;
        int terroristCount = 0;
        int counterTerroristCount = 0;
        int familyCount = 0;
        int existingModelCount = 0;

        for (int i = 0; i < map.count; ++i)
        {
            void* definition = nullptr;

            if (!ReadMemory(
                reinterpret_cast<std::uintptr_t>(&map.elements[i]) +
                offsetof(EconMapNode, value),
                definition) ||
                !definition)
            {
                continue;
            }

            const char* typeNamePtr = nullptr;
            const char* itemNamePtr = nullptr;
            const char* schemaModelPtr = nullptr;

            if (!ReadMemory(
                reinterpret_cast<std::uintptr_t>(definition) + 0x80,
                typeNamePtr) ||
                !ReadMemory(
                    reinterpret_cast<std::uintptr_t>(definition) + 0x260,
                    itemNamePtr) ||
                !ReadMemory(
                    reinterpret_cast<std::uintptr_t>(definition) + 0x148,
                    schemaModelPtr))
            {
                continue;
            }

            std::string typeName;
            std::string itemName;
            std::string schemaModel;

            if (!typeNamePtr ||
                !itemNamePtr ||
                !ReadString(
                    reinterpret_cast<std::uintptr_t>(typeNamePtr),
                    typeName) ||
                !ReadString(
                    reinterpret_cast<std::uintptr_t>(itemNamePtr),
                    itemName))
            {
                continue;
            }

            if (typeName != "#Type_CustomPlayer")
                continue;

            ++customPlayerCount;

            // Correct prefix matching: actual lengths are 16 and 17.
            const bool terrorist =
                itemName.rfind("customplayer_tm_", 0) == 0;

            const bool counterTerrorist =
                itemName.rfind("customplayer_ctm_", 0) == 0;

            if (terrorist)
                ++terroristCount;

            if (counterTerrorist)
                ++counterTerroristCount;

            if ((team == 2 && !terrorist) ||
                (team == 3 && !counterTerrorist))
            {
                continue;
            }

            if (schemaModelPtr)
            {
                ReadString(
                    reinterpret_cast<std::uintptr_t>(schemaModelPtr),
                    schemaModel);
            }

            const std::string agentName =
                itemName.substr(std::strlen("customplayer_"));

            const std::string family =
                AgentFamily(agentName);

            if (!family.empty())
            {
                ++familyCount;

                const std::string candidate =
                    "agents/models/" +
                    family +
                    "/" +
                    agentName +
                    ".vmdl";

                const std::string compiled =
                    candidate + "_c";

                const bool exists =
                    FileExists(compiled.c_str());

                std::printf(
                    "[model-refresh] candidate team=%d item=%s "
                    "family=%s model=%s compiled=%d current=%d\n",
                    team,
                    itemName.c_str(),
                    family.c_str(),
                    candidate.c_str(),
                    exists,
                    candidate == currentModel);

                if (exists)
                    ++existingModelCount;

                if (candidate != currentModel && exists)
                {
                    std::printf(
                        "[model-refresh] selected candidate: %s\n",
                        candidate.c_str());

                    return candidate;
                }
            }
            else
            {
                std::printf(
                    "[model-refresh] no family: item=%s schemaModel=%s\n",
                    itemName.c_str(),
                    schemaModel.c_str());
            }

            // Keep the existing canonical schema-model fallback.
            if (schemaModel.rfind("agents/models/", 0) == 0)
            {
                const std::string compiled =
                    schemaModel + "_c";

                const bool exists =
                    FileExists(compiled.c_str());

                std::printf(
                    "[model-refresh] schema fallback team=%d "
                    "item=%s model=%s compiled=%d current=%d\n",
                    team,
                    itemName.c_str(),
                    schemaModel.c_str(),
                    exists,
                    schemaModel == currentModel);

                if (exists)
                    ++existingModelCount;

                if (schemaModel != currentModel && exists)
                {
                    std::printf(
                        "[model-refresh] selected schema fallback: %s\n",
                        schemaModel.c_str());

                    return schemaModel;
                }
            }
        }

        std::printf(
            "[model-refresh] discovery summary team=%d "
            "mapCount=%d customPlayers=%d T=%d CT=%d "
            "families=%d existingModels=%d current=%s\n",
            team,
            map.count,
            customPlayerCount,
            terroristCount,
            counterTerroristCount,
            familyCount,
            existingModelCount,
            currentModel.c_str());

        return {};
    }

    bool InvokeSetModel(
        void* pawn,
        const char* modelName)
    {
        if (!g_setAgentModel ||
            !pawn ||
            !modelName ||
            !*modelName)
            return false;

        __try
        {
            g_setAgentModel(pawn, modelName);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool SetAgentModel(
        void* pawn,
        const char* modelName)
    {
        if (!pawn || !modelName || !*modelName)
            return false;

        if (!g_setAgentModel)
            return false;

        void* collision = nullptr;

        ReadField(
            pawn,
            "C_BaseEntity",
            "m_pCollision",
            &collision,
            sizeof(collision));

        Vector3 mins{};
        Vector3 maxs{};

        const bool preserveBounds =
            collision &&
            ReadField(
                collision,
                "CCollisionProperty",
                "m_vecMins",
                &mins,
                sizeof(mins)) &&
            ReadField(
                collision,
                "CCollisionProperty",
                "m_vecMaxs",
                &maxs,
                sizeof(maxs));

        PrecacheModel(modelName);

        if (!InvokeSetModel(pawn, modelName))
            return false;

        if (preserveBounds)
        {
            collision = nullptr;

            ReadField(
                pawn,
                "C_BaseEntity",
                "m_pCollision",
                &collision,
                sizeof(collision));

            if (collision)
            {
                WriteField(
                    collision,
                    "CCollisionProperty",
                    "m_vecMins",
                    &mins,
                    sizeof(mins));

                WriteField(
                    collision,
                    "CCollisionProperty",
                    "m_vecMaxs",
                    &maxs,
                    sizeof(maxs));
            }
        }

        return true;
    }

    void ResetSwap()
    {
        g_swapStep = 0;
        g_restoreModel.clear();
        g_swapPawn = nullptr;
    }
}

namespace GlovesModelRefresh
{
    void Request()
    {
        g_request.store(1, std::memory_order_release);
    }

    void OnRenderEnd(void* pawn)
    {
        InitializeFunctions();

        std::int32_t health = 0;
        std::uint8_t team = 0;

        if (!pawn ||
            !ReadField(pawn, "C_BaseEntity", "m_iHealth", health) ||
            !ReadField(pawn, "C_BaseEntity", "m_iTeamNum", team) ||
            health <= 0 || (team != 2 && team != 3))
        {
            ResetSwap();
            g_request.store(0, std::memory_order_release);
            return;
        }

        // Lootline explicitly avoids model swaps during demos.
        if (IsPlayingDemo())
        {
            ResetSwap();
            g_request.store(0, std::memory_order_release);
            return;
        }

        if (g_swapPawn && g_swapPawn != pawn)
        {
            ResetSwap();
        }

        g_swapPawn = pawn;

        // Second render-end: restore the exact model we saved.
        if (g_swapStep == 1)
        {
            g_swapStep = 0;

            if (!SetAgentModel(
                pawn,
                g_restoreModel.c_str()))
            {
                std::printf(
                    "[model-refresh] WARNING: model restoration failed\n");
            }
            else
            {
                std::printf(
                    "[model-refresh] original model restored: %s\n",
                    g_restoreModel.c_str());
            }

            g_restoreModel.clear();
            return;
        }

        if (g_request.exchange(
            0,
            std::memory_order_acq_rel) == 0)
            return;

        std::string currentModel;

        if (!ReadCurrentModel(
            pawn,
            currentModel) ||
            currentModel.empty())
        {
            std::printf(
                "[model-refresh] current model lookup failed\n");
            return;
        }

        const std::string alternateModel =
            FindAlternateAgentModel(
                team,
                currentModel);

        if (alternateModel.empty())
        {
            std::printf(
                "[model-refresh] no verified alternate model for team %d\n",
                team);
            return;
        }

        std::printf(
            "[model-refresh] swap: %s -> %s\n",
            currentModel.c_str(),
            alternateModel.c_str());

        if (!SetAgentModel(
            pawn,
            alternateModel.c_str()))
        {
            std::printf(
                "[model-refresh] alternate model swap failed\n");
            return;
        }

        g_restoreModel = currentModel;
        g_swapStep = 1;
    }
}
