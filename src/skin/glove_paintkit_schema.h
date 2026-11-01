#pragma once

#include <cstddef>
#include <cstdint>

// Layout used by the tested n1ssan-gloves paint-kit name repair.
struct GlovePaintKitRecord
{
    int m_ID;
    std::uint32_t m_Pad04;
    const char* m_Name;
    const char* m_DescriptionString;
    const char* m_DescriptionTag;
    std::byte m_Pad20[0x24];
    int m_Rarity;
    std::byte m_Pad48[0x66];
    bool m_UsesOldModel;
};

namespace GlovePaintKitSchema
{
    bool Initialize();
    const char* GetName(int paintKitId);
    bool RepairGeneratedName(GlovePaintKitRecord* generated, int paintKitId);
}
