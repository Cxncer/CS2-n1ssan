#pragma once

#include <cstddef>
#include <cstdint>

// Layout used by the tested n1ssan-gloves paint-kit name repair.
struct GlovePaintKitRecord
{
    int id;
    std::uint32_t pad04;
    const char* name;
    const char* descriptionString;
    const char* descriptionTag;
    std::byte pad20[0x24];
    int rarity;
    std::byte pad48[0x66];
    bool usesOldModel;
};

namespace GlovePaintKitSchema
{
    bool Initialize();
    const char* GetName(int paintKitId);
    bool RepairGeneratedName(GlovePaintKitRecord* generated, int paintKitId);
}
