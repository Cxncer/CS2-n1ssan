#pragma once
#include <cstdint>

// Global: resolved once by PlanA::Start via pattern scan of CEconItemSystem in client.dll.
// Defined in loot_schema.cpp at file scope (outside any namespace).
extern uintptr_t g_esResolved;

namespace LootSchema
{
    bool Init();
    const char* LastError();

    void* CreateEconItemObject();

    bool SetAttributeInt(void* econItem, int attrIndex, int32_t value);
    bool SetAttributeFloat(void* econItem, int attrIndex, float value);

    bool IsAttributeUint(int attrIndex);
    uint32_t InventoryOffsetFromUseTool();
    void* GetManager();

    void* GetAttrDefByName(const char* name);  // new
}