// n1ssan-dll / src/sdk/item_view.h
// C_EconItemView + CAttributeList access.
// Attribute layouts are Loot-faithful — see econ_item_attribute_manager.cpp.

#pragma once
#include <cstdint>
#include <string>

// A single entry in CAttributeList::m_Attributes (CUtlVector<CEconItemAttribute>).
// Layout matches Loot's EconItemAttribute_t exactly.
struct EconItemAttribute_t
{
    char     pad_0000[0x30];
    uint16_t defIndex;         // +0x30
    char     pad_0032[2];
    float    value;            // +0x34
    float    initialValue;     // +0x38
    int32_t  refundableCurrency;
    bool     setBonus;
    char     pad_0041[7];
};

// CUtlVector layout used by CAttributeList::m_Attributes.
struct AttributeVector_t
{
    int32_t   size;
    int32_t   pad;
    uintptr_t data;
    int32_t   allocationCount;
    int32_t   growSizeAndFlags;
};

static constexpr int32_t UTL_VECTOR_FIXED_FLAGS = static_cast<int32_t>(0x40000000u);

static constexpr uint16_t ATTR_PAINT = 6;
static constexpr uint16_t ATTR_SEED = 7;
static constexpr uint16_t ATTR_WEAR = 8;
static constexpr uint16_t ATTR_KILL_EATER = 80;
static constexpr uint16_t ATTR_KILL_EATER_SCORE_TYPE = 81;

// Get a pointer to item->m_AttributeList.m_Attributes (as AttributeVector_t*).
AttributeVector_t* GetAttributeVector(uintptr_t item);

// Get a pointer to item->m_NetworkedDynamicAttributes.m_Attributes.
AttributeVector_t* GetNetworkedVector(uintptr_t item);

// Clear the item's m_AttributeList (frees the underlying data with MemFree).
void EconAttr_Remove(uintptr_t item);

// Populate a fresh m_AttributeList with paint/seed/wear/stattrak attributes.
// Refuses if the list is already populated (call EconAttr_Remove first).
void EconAttr_Create(uintptr_t item, int paintKit, float wear, int seed, int statTrak);

// Get the weapon's C_EconItemView* (weapon + EE_AttrManager + AC_Item).
uintptr_t GetWeaponItem(uintptr_t weaponEnt);

// Write a custom name into item->m_szCustomName. Empty string = clear.
void SetCustomName(uintptr_t item, const std::string& name);