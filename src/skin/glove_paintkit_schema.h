#pragma once

#include <cstddef>
#include <cstdint>
#include <string>

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
    std::uintptr_t GetSchemaAddress();
    std::uint32_t GetPaintKitMapOffset();
    bool ReadGameFile(const char* path, std::string& output);
    bool CheckGameFileExists(const char* path, bool& exists);
    bool RepairGeneratedName(GlovePaintKitRecord* generated, int paintKitId);
}
