#include "inventory/engine_schema_diagnostic.h"

#include <windows.h>
#include <cstdint>
#include <cstring>

#include "diagnostics/log.h"
#include "config/offsets.h"

namespace
{
    struct InterfaceReg
    {
        void* (__cdecl* createFn)();
        const char* name;
        InterfaceReg* next;
    };

    struct SchemaClassFieldData
    {
        const char* name;
        void* schemaType;
        std::uint32_t singleInheritanceOffset;
        std::int32_t metadataSize;
        void* metadata;
    };

    struct SchemaClassInfoData
    {
        void* vtable;
        const char* name;
        const char* moduleName;
        std::byte pad18[8];
        std::int32_t size;
        std::int16_t fieldCount;
        std::int16_t pad26;
        std::int16_t staticSize;
        std::int16_t metadataCount;
        std::uint8_t alignment;
        std::uint8_t baseClassCount;
        std::int16_t pad2e;
        SchemaClassFieldData* fields;
    };

    struct SchemaClassDeclaration
    {
        void* vtable;
        const char* name;
        std::byte unknown10[0x10];
        SchemaClassInfoData* classInfo;
    };

    struct SchemaClassEntry
    {
        std::byte unknown00[0x10];
        SchemaClassDeclaration* declaration;
    };

    struct SchemaTypeScope
    {
        std::byte unknown000[0x470];
        std::uint16_t classCount;
        std::byte unknown472[0x06];
        SchemaClassEntry* classes;
    };

    using FindTypeScopeFn =
        SchemaTypeScope * (__fastcall*)(
            void* schemaSystem,
            const char* moduleName,
            void* unknown);

    uintptr_t g_cachedSubclassOffset = 0;

    // Lootline's interface-list resolution.
    void* GetRegisteredInterface(
        const char* moduleName,
        const char* partialName)
    {
        HMODULE module = GetModuleHandleA(moduleName);

        if (!module || !partialName)
            return nullptr;

        auto createInterface =
            reinterpret_cast<std::uint8_t*>(
                GetProcAddress(module, "CreateInterface"));

        if (!createInterface)
            return nullptr;

        InterfaceReg* current = nullptr;

        __try
        {
            const uintptr_t symbol =
                reinterpret_cast<uintptr_t>(createInterface);

            const std::int32_t relative =
                *reinterpret_cast<std::int32_t*>(
                    createInterface + 3);

            const uintptr_t listAddress =
                symbol + relative + 7;

            current =
                *reinterpret_cast<InterfaceReg**>(listAddress);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return nullptr;
        }

        while (current)
        {
            __try
            {
                if (current->name &&
                    std::strstr(current->name, partialName))
                {
                    if (!current->createFn)
                        return nullptr;

                    return current->createFn();
                }

                current = current->next;
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                return nullptr;
            }
        }

        return nullptr;
    }

    SchemaTypeScope* FindTypeScope(
        void* schemaSystem,
        const char* moduleName)
    {
        if (!schemaSystem)
            return nullptr;

        __try
        {
            void** vtable =
                *reinterpret_cast<void***>(schemaSystem);

            if (!vtable || !vtable[13])
                return nullptr;

            auto fn =
                reinterpret_cast<FindTypeScopeFn>(vtable[13]);

            return fn(schemaSystem, moduleName, nullptr);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return nullptr;
        }
    }

    bool FindFieldOffset(
        SchemaTypeScope* scope,
        const char* wantedClass,
        const char* wantedField,
        std::uint32_t& offset)
    {
        if (!scope || !wantedClass || !wantedField)
            return false;

        __try
        {
            if (!scope->classes || scope->classCount == 0)
                return false;

            for (std::uint16_t i = 0; i < scope->classCount; ++i)
            {
                auto* declaration =
                    scope->classes[i].declaration;

                if (!declaration ||
                    !declaration->name ||
                    std::strcmp(
                        declaration->name,
                        wantedClass) != 0)
                {
                    continue;
                }

                auto* info = declaration->classInfo;

                if (!info || !info->fields || info->fieldCount <= 0)
                    return false;

                for (std::int16_t j = 0; j < info->fieldCount; ++j)
                {
                    const auto& field = info->fields[j];

                    if (field.name &&
                        std::strcmp(
                            field.name,
                            wantedField) == 0)
                    {
                        offset = field.singleInheritanceOffset;
                        return offset != 0 && offset < 0x10000;
                    }
                }

                return false;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }

        return false;
    }

    void* GetSchemaSystem()
    {
        return GetRegisteredInterface(
            "schemasystem.dll",
            "SchemaSystem_00");
    }
}

bool ResolveEngineSchemaField(
    const char* className,
    const char* fieldName,
    uintptr_t& offset)
{
    void* schemaSystem = GetSchemaSystem();
    if (!schemaSystem)
        return false;

    SchemaTypeScope* scope =
        FindTypeScope(schemaSystem, "client.dll");

    if (!scope)
        return false;

    std::uint32_t resolved = 0;

    if (!FindFieldOffset(
        scope,
        className,
        fieldName,
        resolved))
    {
        return false;
    }

    offset = resolved;
    return true;
}

// ============================================================
// Runtime subclass offset resolver
// ============================================================

bool ResolveSubclassOffset(uintptr_t& offset)
{
    if (g_cachedSubclassOffset)
    {
        offset = g_cachedSubclassOffset;
        return true;
    }

    void* schemaSystem = GetSchemaSystem();

    if (!schemaSystem)
        return false;

    SchemaTypeScope* scope =
        FindTypeScope(schemaSystem, "client.dll");

    if (!scope)
        return false;

    std::uint32_t runtimeOffset = 0;

    if (!FindFieldOffset(
        scope,
        "C_BaseEntity",
        "m_nSubclassID",
        runtimeOffset))
    {
        return false;
    }

    g_cachedSubclassOffset = runtimeOffset;
    offset = runtimeOffset;

    Log(
        "[schema-live] m_nSubclassID runtime=0x%llX "
        "hardcoded=0x%llX %s",
        static_cast<unsigned long long>(runtimeOffset),
        static_cast<unsigned long long>(FB_BE_nSubclassID),
        runtimeOffset == FB_BE_nSubclassID
        ? "MATCH"
        : "MISMATCH");

    return true;
}

bool ResolveGloveSchemaOffsets()
{
    struct Field
    {
        const char* className;
        const char* fieldName;
        uintptr_t* destination;
    };

    const Field fields[] =
    {
        { "C_CSPlayerPawn", "m_EconGloves",
            &g_off.PAWN_EconGloves },

        { "C_CSPlayerPawn", "m_bNeedToReApplyGloves",
            &g_off.PAWN_NeedReapplyGloves },

        { "C_EconItemView", "m_iItemDefinitionIndex",
            &g_off.EIV_ItemDefIndex },

        { "C_EconItemView", "m_iEntityQuality",
            &g_off.EIV_EntityQuality },

        { "C_EconItemView", "m_iItemIDHigh",
            &g_off.EIV_ItemIDHigh },

        { "C_EconItemView", "m_bInitialized",
            &g_off.EIV_Initialized },

        { "C_EconItemView", "m_bDisallowSOC",
            &g_off.EIV_DisallowSOC },

        { "C_EconItemView",
            "m_bRestoreCustomMaterialAfterPrecache",
            &g_off.EIV_RestoreCustom },

        { "C_EconItemView", "m_AttributeList",
            &g_off.EIV_AttributeList },

        { "C_EconItemView", "m_NetworkedDynamicAttributes",
            &g_off.EIV_NetworkedAttrs },

        { "CAttributeList", "m_Attributes",
            &g_off.AttributeList_Attributes },
    };

    bool allResolved = true;

    for (const auto& field : fields)
    {
        uintptr_t offset = 0;

        if (!ResolveEngineSchemaField(
            field.className,
            field.fieldName,
            offset))
        {
            Log("[schema-gloves] FAILED %s->%s",
                field.className,
                field.fieldName);

            allResolved = false;
            continue;
        }

        *field.destination = offset;

        Log("[schema-gloves] %s->%s = 0x%llX",
            field.className,
            field.fieldName,
            static_cast<unsigned long long>(offset));
    }

    return allResolved;
}

// ============================================================
// Startup diagnostic
// ============================================================

void RunEngineSchemaDiagnostic()
{
    uintptr_t subclassOffset = 0;

    if (!ResolveSubclassOffset(subclassOffset))
    {
        Log("[schema-live] subclass offset not available yet");
        return;
    }

    Log(
        "[schema-live] subclass resolver ready: 0x%llX",
        static_cast<unsigned long long>(subclassOffset));
}