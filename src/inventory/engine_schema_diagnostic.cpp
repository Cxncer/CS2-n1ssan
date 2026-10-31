
#include "inventory/engine_schema_diagnostic.h"

#include <windows.h>
#include <cstdint>
#include <cstring>

#include "diagnostics/log.h"
#include "config/offsets.h"

namespace
{
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

    using CreateInterfaceFn = void* (__cdecl*)(const char*, int*);

    SchemaTypeScope* FindTypeScope(
        void* schemaSystem,
        const char* moduleName)
    {
        if (!schemaSystem)
            return nullptr;

        void** vtable = *reinterpret_cast<void***>(schemaSystem);

        if (!vtable || !vtable[13])
            return nullptr;

        using Fn = SchemaTypeScope * (__fastcall*)(
            void*, const char*, void*);

        return reinterpret_cast<Fn>(vtable[13])(
            schemaSystem, moduleName, nullptr);
    }

    bool FindFieldOffset(
        SchemaTypeScope* scope,
        const char* wantedClass,
        const char* wantedField,
        std::uint32_t& offset)
    {
        if (!scope || !scope->classes || scope->classCount == 0)
            return false;

        for (std::uint16_t i = 0; i < scope->classCount; ++i)
        {
            auto* declaration = scope->classes[i].declaration;

            if (!declaration ||
                !declaration->name ||
                std::strcmp(declaration->name, wantedClass) != 0)
                continue;

            auto* info = declaration->classInfo;

            if (!info || !info->fields || info->fieldCount <= 0)
                return false;

            for (std::int16_t j = 0; j < info->fieldCount; ++j)
            {
                const auto& field = info->fields[j];

                if (field.name &&
                    std::strcmp(field.name, wantedField) == 0)
                {
                    offset = field.singleInheritanceOffset;
                    return true;
                }
            }

            return false;
        }

        return false;
    }
}

void RunEngineSchemaDiagnostic()
{
    HMODULE module = GetModuleHandleA("schemasystem.dll");

    if (!module)
    {
        Log("[schema-live] schemasystem.dll not loaded; skipped");
        return;
    }

    auto createInterface =
        reinterpret_cast<CreateInterfaceFn>(
            GetProcAddress(module, "CreateInterface"));

    if (!createInterface)
    {
        Log("[schema-live] CreateInterface export missing");
        return;
    }

    int returnCode = 0;

    void* schemaSystem =
        createInterface("SchemaSystem_00", &returnCode);

    if (!schemaSystem)
    {
        Log("[schema-live] SchemaSystem_00 unavailable (code=%d)",
            returnCode);
        return;
    }

    auto* scope =
        FindTypeScope(schemaSystem, "client.dll");

    if (!scope)
    {
        Log("[schema-live] client.dll type scope unavailable");
        return;
    }

    std::uint32_t runtimeOffset = 0;

    if (!FindFieldOffset(
        scope,
        "C_CSPlayerPawn",
        "m_EconGloves",
        runtimeOffset))
    {
        Log("[schema-live] m_EconGloves not found");
        return;
    }

    Log(
        "[schema-live] m_EconGloves runtime=0x%X "
        "hardcoded=0x%llX %s",
        runtimeOffset,
        static_cast<unsigned long long>(FB_PAWN_EconGloves),
        runtimeOffset == FB_PAWN_EconGloves
        ? "MATCH" : "MISMATCH");

    std::uint32_t reapplyOffset = 0;

    if (FindFieldOffset(
        scope,
        "C_CSPlayerPawn",
        "m_bNeedToReApplyGloves",
        reapplyOffset))
    {
        Log(
            "[schema-live] m_bNeedToReApplyGloves "
            "runtime=0x%X hardcoded=0x%llX %s",
            reapplyOffset,
            static_cast<unsigned long long>(
                FB_PAWN_NeedReapplyGloves),
            reapplyOffset == FB_PAWN_NeedReapplyGloves
            ? "MATCH" : "MISMATCH");
    }
    else
    {
        Log("[schema-live] m_bNeedToReApplyGloves not found");
    }

    std::uint32_t subclassOffset = 0;

    if (FindFieldOffset(
        scope,
        "C_BaseEntity",
        "m_nSubclassID",
        subclassOffset))
    {
        Log(
            "[schema-live] m_nSubclassID runtime=0x%X "
            "hardcoded=0x%llX %s",
            subclassOffset,
            static_cast<unsigned long long>(FB_BE_nSubclassID),
            subclassOffset == FB_BE_nSubclassID
            ? "MATCH" : "MISMATCH");
    }
    else
    {
        Log("[schema-live] m_nSubclassID NOT FOUND");
    }

    // Diagnostic only. Never assign runtime offsets to g_off.
}
