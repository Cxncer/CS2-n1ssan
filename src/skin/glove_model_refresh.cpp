#include "skin/glove_model_refresh.h"

#include "sdk/functions.h"
#include "sdk/entities.h"
#include "sdk/scene_node.h"
#include "config/offsets.h"
#include "inventory/loot_schema.h"
#include "memory/access.h"
#include "memory/scanner.h"
#include "diagnostics/log.h"
#include "skin/apply.h"

#include <Windows.h>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <string>
#include <utility>

namespace
{
    // ------------------------------------------------------------
    // Engine function types
    // ------------------------------------------------------------

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

    constexpr uintptr_t ITEM_DEFINITION_MAP_OFFSET = 0xF8;

    constexpr const char* AGENT_PRECACHE_PATTERN =
        "40 53 55 57 48 81 EC ? ? ? ? 48 8B 01 49 8B E8 48 8B FA";

    // ------------------------------------------------------------
    // State
    // ------------------------------------------------------------

    std::atomic_bool g_request{ false };

    void* g_swapPawn = nullptr;
    std::string g_restoreModel;

    AgentPrecacheFn g_agentPrecache = nullptr;
    void* g_resourceSystem = nullptr;

    void* g_fileSystem = nullptr;

    BufferStringInsertFn g_bufferInsert = nullptr;
    BufferStringPurgeFn g_bufferPurge = nullptr;

    bool g_resourceScanAttempted = false;

    // ------------------------------------------------------------
    // Safe memory helpers
    // ------------------------------------------------------------

    template<typename T>
    bool ReadMemory(uintptr_t address, T& value)
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

    bool ReadString(
        uintptr_t address,
        std::string& output,
        size_t maxLength = 512)
    {
        output.clear();

        if (!address)
            return false;

        for (size_t i = 0; i < maxLength; ++i)
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

    // ------------------------------------------------------------
    // Interface discovery
    // ------------------------------------------------------------

    struct InterfaceReg
    {
        void* (*create)();
        const char* name;
        InterfaceReg* next;
    };

    void* FindInterface(
        const char* moduleName,
        const char* partialName)
    {
        HMODULE module = GetModuleHandleA(moduleName);

        if (!module)
            return nullptr;

        const uintptr_t createInterface =
            reinterpret_cast<uintptr_t>(
                GetProcAddress(module, "CreateInterface"));

        if (!createInterface)
            return nullptr;

        int32_t displacement = 0;

        if (!ReadMemory(createInterface + 3, displacement))
            return nullptr;

        const uintptr_t listAddress =
            createInterface + 7 + displacement;

        InterfaceReg* current = nullptr;

        if (!ReadMemory(listAddress, current))
            return nullptr;

        int walked = 0;

        while (current && walked++ < 1024)
        {
            const char* name = nullptr;
            void* (*create)() = nullptr;
            InterfaceReg* next = nullptr;

            if (!ReadMemory(
                reinterpret_cast<uintptr_t>(current) +
                offsetof(InterfaceReg, name),
                name))
                break;

            if (!ReadMemory(
                reinterpret_cast<uintptr_t>(current) +
                offsetof(InterfaceReg, create),
                create))
                break;

            if (!ReadMemory(
                reinterpret_cast<uintptr_t>(current) +
                offsetof(InterfaceReg, next),
                next))
                break;

            if (name && create)
            {
                char buffer[128]{};

                size_t i = 0;

                for (; i < sizeof(buffer) - 1; ++i)
                {
                    if (!ReadMemory(
                        reinterpret_cast<uintptr_t>(name) + i,
                        buffer[i]))
                        break;

                    if (buffer[i] == '\0')
                        break;
                }

                buffer[sizeof(buffer) - 1] = '\0';

                if (std::strstr(buffer, partialName))
                {
                    __try
                    {
                        return create();
                    }
                    __except (EXCEPTION_EXECUTE_HANDLER)
                    {
                        return nullptr;
                    }
                }
            }

            current = next;
        }

        return nullptr;
    }

    // ------------------------------------------------------------
    // Resource and filesystem initialization
    // ------------------------------------------------------------

    void InitializeResourceFunctions()
    {
        if (!g_resourceSystem)
        {
            g_resourceSystem =
                FindInterface(
                    "resourcesystem.dll",
                    "ResourceSystem013");
        }

        if (!g_fileSystem)
        {
            g_fileSystem =
                FindInterface(
                    "filesystem_stdio.dll",
                    "VFileSystem017");
        }

        if (!g_resourceScanAttempted)
        {
            ModuleInfo resourceModule =
                GetModule("resourcesystem.dll");

            if (resourceModule.valid())
            {
                g_resourceScanAttempted = true;

                g_agentPrecache =
                    reinterpret_cast<AgentPrecacheFn>(
                        ScanPattern(
                            resourceModule,
                            AGENT_PRECACHE_PATTERN));
            }
        }

        if (!g_bufferInsert || !g_bufferPurge)
        {
            HMODULE tier0 = GetModuleHandleA("tier0.dll");

            if (tier0)
            {
                if (!g_bufferInsert)
                {
                    g_bufferInsert =
                        reinterpret_cast<BufferStringInsertFn>(
                            GetProcAddress(
                                tier0,
                                "?Insert@CBufferString@@QEAAPEBDHPEBDH_N@Z"));
                }

                if (!g_bufferPurge)
                {
                    g_bufferPurge =
                        reinterpret_cast<BufferStringPurgeFn>(
                            GetProcAddress(
                                tier0,
                                "?Purge@CBufferString@@QEAAXH@Z"));
                }
            }
        }
    }

    bool FileExists(const char* path)
    {
        if (!g_fileSystem || !path || !*path)
            return false;

        uintptr_t vtable = 0;
        uintptr_t function = 0;

        if (!ReadMemory(
            reinterpret_cast<uintptr_t>(g_fileSystem),
            vtable) ||
            !vtable ||
            !ReadMemory(vtable + 21 * sizeof(uintptr_t), function) ||
            !function)
            return false;

        using ExistsFn =
            bool(__fastcall*)(void*, const char*, const char*);

        __try
        {
            return reinterpret_cast<ExistsFn>(function)(
                g_fileSystem,
                path,
                "GAME");
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
        {
            return;
        }

        CBufferString names{};

        __try
        {
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
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[glove-model-refresh] precache exception");
        }
    }

    // ------------------------------------------------------------
    // Current player model
    // ------------------------------------------------------------

    bool ReadCurrentModel(
        uintptr_t pawn,
        std::string& output)
    {
        output.clear();

        if (!pawn)
            return false;

        const uintptr_t model =
            GetModelPtr(pawn);

        if (model < 0x10000)
            return false;

        const char* modelName = nullptr;

        if (!ReadMemory(
            model + sizeof(uintptr_t),
            modelName) ||
            !modelName)
            return false;

        return ReadString(
            reinterpret_cast<uintptr_t>(modelName),
            output);
    }

    // ------------------------------------------------------------
    // Agent model discovery
    // ------------------------------------------------------------

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
            const size_t length = std::strlen(family);

            if (agentName.compare(0, length, family) == 0)
                return family;
        }

        return {};
    }

    bool GetEconItemMap(EconMap& map)
    {
        map = {};

        if (!g_esResolved)
        {
            Log("[glove-model-refresh] econ item system unavailable");
            return false;
        }

        uintptr_t schema = 0;

        if (!SafeReadQword(g_esResolved + sizeof(uintptr_t), schema) ||
            schema < 0x10000)
        {
            Log("[glove-model-refresh] schema pointer unavailable");
            return false;
        }

        if (!ReadMemory(
            schema + ITEM_DEFINITION_MAP_OFFSET,
            map))
        {
            Log("[glove-model-refresh] item definition map read failed");
            return false;
        }

        if (!map.elements ||
            map.count <= 0 ||
            map.count > 10000)
        {
            Log("[glove-model-refresh] invalid item map count=%d",
                map.count);
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
            return {};

        int customPlayerCount = 0;
        int matchingTeamCount = 0;
        int existingModelCount = 0;

        for (int i = 0; i < map.count; ++i)
        {
            void* definition = nullptr;

            const uintptr_t nodeAddress =
                reinterpret_cast<uintptr_t>(&map.elements[i]);

            if (!ReadMemory(
                nodeAddress + offsetof(EconMapNode, value),
                definition) ||
                !definition)
            {
                continue;
            }

            const char* typeNamePtr = nullptr;
            const char* itemNamePtr = nullptr;
            const char* schemaModelPtr = nullptr;

            if (!ReadMemory(
                reinterpret_cast<uintptr_t>(definition) + 0x80,
                typeNamePtr) ||
                !ReadMemory(
                    reinterpret_cast<uintptr_t>(definition) + 0x260,
                    itemNamePtr) ||
                !ReadMemory(
                    reinterpret_cast<uintptr_t>(definition) + 0x148,
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
                    reinterpret_cast<uintptr_t>(typeNamePtr),
                    typeName) ||
                !ReadString(
                    reinterpret_cast<uintptr_t>(itemNamePtr),
                    itemName))
            {
                continue;
            }

            if (typeName != "#Type_CustomPlayer")
                continue;

            ++customPlayerCount;

            const bool terrorist =
                itemName.rfind("customplayer_tm_", 0) == 0;

            const bool counterTerrorist =
                itemName.rfind("customplayer_ctm_", 0) == 0;

            if ((team == 2 && !terrorist) ||
                (team == 3 && !counterTerrorist))
            {
                continue;
            }

            ++matchingTeamCount;

            if (schemaModelPtr)
            {
                ReadString(
                    reinterpret_cast<uintptr_t>(schemaModelPtr),
                    schemaModel);
            }

            const std::string agentName =
                itemName.substr(
                    std::strlen("customplayer_"));

            const std::string family =
                AgentFamily(agentName);

            if (!family.empty())
            {
                const std::string candidate =
                    "agents/models/" +
                    family +
                    "/" +
                    agentName +
                    ".vmdl";

                const std::string compiled =
                    candidate + "_c";

                if (FileExists(compiled.c_str()))
                {
                    ++existingModelCount;

                    if (candidate != currentModel)
                    {
                        Log("[glove-model-refresh] candidate selected: %s",
                            candidate.c_str());

                        return candidate;
                    }
                }
            }

            // Fallback to the canonical model stored in the schema.
            if (schemaModel.rfind("agents/models/", 0) == 0)
            {
                const std::string compiled =
                    schemaModel + "_c";

                if (FileExists(compiled.c_str()))
                {
                    ++existingModelCount;

                    if (schemaModel != currentModel)
                    {
                        Log("[glove-model-refresh] schema fallback selected: %s",
                            schemaModel.c_str());

                        return schemaModel;
                    }
                }
            }
        }

        Log("[glove-model-refresh] discovery: team=%d map=%d "
            "customPlayers=%d matchingTeam=%d existing=%d current=%s",
            team,
            map.count,
            customPlayerCount,
            matchingTeamCount,
            existingModelCount,
            currentModel.c_str());

        return {};
    }

    // ------------------------------------------------------------
    // Model setter
    // ------------------------------------------------------------

    bool SetAgentModel(
        uintptr_t pawn,
        const char* modelName)
    {
        if (!pawn ||
            !modelName ||
            !*modelName ||
            !pAgentSetModel)
        {
            return false;
        }

        // Precache is best-effort. The isolated implementation also
        // invokes SetModel even if precache cannot be performed.
        PrecacheModel(modelName);

        __try
        {
            pAgentSetModel(
                reinterpret_cast<void*>(pawn),
                modelName);

            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Log("[glove-model-refresh] SetModel exception");
            return false;
        }
    }

    void ClearSwapState()
    {
        g_swapPawn = nullptr;
        g_restoreModel.clear();
    }

    // ------------------------------------------------------------
    // Render-end state machine
    // ------------------------------------------------------------

    void ProcessRenderEnd()
    {
        const uintptr_t pawn = GetLocalPawn();

        // Do not destroy a pending restore merely because the local
        // pawn is temporarily unavailable during a transition.
        if (pawn < 0x10000)
            return;

        // If the local pawn changed, the previous entity is no longer
        // the active player entity. Never apply its saved path to the
        // replacement pawn.
        if (g_swapPawn && g_swapPawn != reinterpret_cast<void*>(pawn))
        {
            Log("[glove-model-refresh] pawn changed; clearing old restore state");
            ClearSwapState();
        }

        // Restore is always processed before another request.
        // Keep retrying if SetModel fails instead of losing the path.
        if (g_swapPawn && !g_restoreModel.empty())
        {
            if (SetAgentModel(pawn, g_restoreModel.c_str()))
            {
                Log("[glove-model-refresh] original model restored: %s",
                    g_restoreModel.c_str());

                InvalidateWeaponModelCache();

                ClearSwapState();
            }
            else
            {
                Log("[glove-model-refresh] restore failed; will retry");
            }

            return;
        }

        if (!g_request.exchange(false, std::memory_order_acq_rel))
            return;

        int32_t health = 0;
        uint8_t team = 0;

        if (!SafeReadI32(
            pawn + g_off.PAWN_Health,
            health) ||
            !SafeReadU8(
                pawn + g_off.PAWN_TeamNum,
                team) ||
            health <= 0 ||
            (team != 2 && team != 3))
        {
            Log("[glove-model-refresh] request deferred: invalid pawn/team");

            g_request.store(true, std::memory_order_release);
            return;
        }

        if (!pAgentSetModel)
        {
            Log("[glove-model-refresh] pAgentSetModel unavailable");

            g_request.store(true, std::memory_order_release);
            return;
        }

        std::string currentModel;

        if (!ReadCurrentModel(pawn, currentModel) ||
            currentModel.empty())
        {
            Log("[glove-model-refresh] current model lookup failed");

            g_request.store(true, std::memory_order_release);
            return;
        }

        InitializeResourceFunctions();

        if (!g_fileSystem)
        {
            Log("[glove-model-refresh] filesystem interface unavailable");

            g_request.store(true, std::memory_order_release);
            return;
        }

        const std::string alternateModel =
            FindAlternateAgentModel(team, currentModel);

        if (alternateModel.empty())
        {
            Log("[glove-model-refresh] no verified alternate for team=%u",
                team);
            return;
        }

        Log("[glove-model-refresh] swap: %s -> %s",
            currentModel.c_str(),
            alternateModel.c_str());

        if (!SetAgentModel(pawn, alternateModel.c_str()))
        {
            Log("[glove-model-refresh] alternate model swap failed");

            g_request.store(true, std::memory_order_release);
            return;
        }
        InvalidateWeaponModelCache();

        // Save the exact model path only after the alternate setter
        // succeeds. The next render-end restores this exact path.
        g_swapPawn = reinterpret_cast<void*>(pawn);
        g_restoreModel = currentModel;

        Log("[glove-model-refresh] alternate model applied; restore queued");
    }
}

// ================================================================
// Public API
// ================================================================

namespace GloveModelRefresh
{
    void Request()
    {
        g_request.store(true, std::memory_order_release);
    }

    void OnRenderEnd()
    {
        ProcessRenderEnd();
    }
}