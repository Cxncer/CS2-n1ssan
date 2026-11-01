
#include "glove_schema.h"

#include <Windows.h>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <string>
#include <unordered_map>

namespace
{
    struct SchemaClassFieldData
    {
        const char* name;
        void* schemaType;
        std::uint32_t offset;
        std::int32_t metadataSize;
        void* metadata;
    };

    struct SchemaClassInfoData
    {
        void* vtable;
        const char* name;
        const char* moduleName;
        char padding[8];
        int size;
        std::int16_t fieldCount;
        std::int16_t padding2;
        std::int16_t staticSize;
        std::int16_t metadataSize;
        std::uint8_t alignment;
        std::uint8_t baseClassCount;
        std::int16_t padding3;
        SchemaClassFieldData* fields;
    };

    struct SchemaClassDeclaration
    {
        void* vtable;
        const char* name;
        std::byte unknown[0x10];
        SchemaClassInfoData* classInfo;
    };

    struct SchemaClassEntry
    {
        std::byte unknown[0x10];
        SchemaClassDeclaration* declaration;
    };

    class SchemaTypeScope
    {
    public:
        std::byte unknown[0x470];
        std::uint16_t classCount;
        std::byte padding[6];
        SchemaClassEntry* classes;
    };

    class SchemaSystem
    {
    public:
        SchemaTypeScope* FindTypeScopeForModule(const char* moduleName)
        {
            using FindTypeScopeFn =
                SchemaTypeScope * (__fastcall*)(
                    void*,
                    const char*,
                    void*
                    );

            auto** vtable = *reinterpret_cast<void***>(this);

            if (!vtable || !vtable[13])
                return nullptr;

            auto function =
                reinterpret_cast<FindTypeScopeFn>(vtable[13]);

            return function(this, moduleName, nullptr);
        }
    };

    using CreateInterfaceFn = void* (*)(const char*, int*);

    std::unordered_map<std::string, std::uint32_t> g_fields;
    bool g_ready = false;

    std::uint32_t HashName(const char* text)
    {
        std::uint32_t hash = 0x811C9DC5u;

        if (!text)
            return 0;

        while (*text)
        {
            hash ^= static_cast<std::uint8_t>(*text++);
            hash *= 0x01000193u;
        }

        return hash;
    }

    SchemaSystem* GetSchemaSystem()
    {
        const HMODULE module = GetModuleHandleA("schemasystem.dll");

        printf("[schema] schemasystem.dll: %s (%p)\n",
            module ? "FOUND" : "NOT FOUND", module);

        if (!module)
            return nullptr;

        const auto factory = reinterpret_cast<CreateInterfaceFn>(
            GetProcAddress(module, "CreateInterface"));

        printf("[schema] CreateInterface: %s (%p)\n",
            factory ? "FOUND" : "NOT FOUND", factory);

        if (!factory)
            return nullptr;

        // Test exact interface names through the exported factory.
        constexpr const char* candidates[] = {
            "SchemaSystem_00",
            "SchemaSystem_001",
            "SchemaSystem_002",
            "SchemaSystem_003",
            "SchemaSystem_004",
            "SchemaSystem_005",
            "SchemaSystem_006",
            "SchemaSystem_007",
            "SchemaSystem_008",
            "SchemaSystem_009",
            "SchemaSystem_010"
        };

        for (const char* name : candidates)
        {
            int returnCode = -1;

            void* result = factory(name, &returnCode);

            printf("[schema] Probe %-20s result=%p returnCode=%d\n",
                name, result, returnCode);

            if (result)
            {
                printf("[schema] Interface acquired using: %s\n", name);
                return static_cast<SchemaSystem*>(result);
            }
        }

        printf("[schema] No candidate interface version was returned.\n");
        return nullptr;
    }
}

namespace GlovesSchema
{
    bool Initialize(const char* moduleName)
    {
        g_ready = false;
        g_fields.clear();

        printf("[schema] Initialize requested for: %s\n",
            moduleName ? moduleName : "(null)");

        if (!moduleName)
        {
            printf("[schema] FAILED: module name is null\n");
            return false;
        }

        SchemaSystem* schemaSystem = GetSchemaSystem();

        if (!schemaSystem)
        {
            printf("[schema] FAILED: SchemaSystem interface unavailable\n");
            return false;
        }

        SchemaTypeScope* scope =
            schemaSystem->FindTypeScopeForModule(moduleName);

        printf("[schema] TypeScope for %s: %p\n",
            moduleName, scope);

        if (!scope)
        {
            printf("[schema] FAILED: type scope is null\n");
            return false;
        }

        printf("[schema] classCount: %u\n",
            static_cast<unsigned>(scope->classCount));

        printf("[schema] classes: %p\n",
            scope->classes);

        if (!scope->classes || scope->classCount == 0)
        {
            printf("[schema] FAILED: scope has no class entries\n");
            return false;
        }

        int validClasses = 0;
        int validFields = 0;

        for (std::uint16_t i = 0; i < scope->classCount; ++i)
        {
            SchemaClassDeclaration* declaration =
                scope->classes[i].declaration;

            if (!declaration ||
                !declaration->name ||
                !declaration->classInfo)
            {
                continue;
            }

            ++validClasses;

            SchemaClassInfoData* info =
                declaration->classInfo;

            if (!info->fields || info->fieldCount <= 0)
                continue;

            for (int j = 0; j < info->fieldCount; ++j)
            {
                const SchemaClassFieldData& field =
                    info->fields[j];

                if (!field.name)
                    continue;

                const std::string qualifiedName =
                    std::string(declaration->name) +
                    "->" +
                    field.name;

                g_fields[qualifiedName] = field.offset;
                ++validFields;
            }
        }

        printf("[schema] Valid classes: %d\n", validClasses);
        printf("[schema] Valid fields: %d\n", validFields);

        g_ready = !g_fields.empty();

        printf("[schema] Initialization: %s\n",
            g_ready ? "READY" : "FAILED");

        return g_ready;
    }

    bool TryGet(
        const char* className,
        const char* fieldName,
        std::uint32_t& offset)
    {
        offset = 0;

        if (!g_ready || !className || !fieldName)
            return false;

        const std::string qualifiedName =
            std::string(className) + "->" + fieldName;

        const auto it = g_fields.find(qualifiedName);

        if (it == g_fields.end())
            return false;

        offset = it->second;
        return true;
    }

    std::uint32_t Get(
        const char* className,
        const char* fieldName)
    {
        std::uint32_t offset = 0;
        TryGet(className, fieldName, offset);
        return offset;
    }

    bool IsReady()
    {
        return g_ready;
    }
}
