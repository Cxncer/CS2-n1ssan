#pragma once

#include <cstdint>

namespace GloveAttributeManager
{
    bool Create(std::uintptr_t item, int paintKit, float wear, int seed);
    void Remove(std::uintptr_t item);
}
