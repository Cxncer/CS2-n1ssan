#pragma once

#include <cstdint>

namespace GlovesSchema
{
    bool Initialize(const char* moduleName);

    bool TryGet(
        const char* className,
        const char* fieldName,
        std::uint32_t& offset
    );

    std::uint32_t Get(
        const char* className,
        const char* fieldName
    );

    bool IsReady();
}