// n1ssan-dll / src/sdk/item_view.cpp
// Attribute manager + item view helpers.
// Carried forward from v9.0.2 without changes.

#include "sdk/item_view.h"
#include "sdk/functions.h"
#include "config/offsets.h"
#include "diagnostics/log.h"

#include <bit>
#include <cstring>

AttributeVector_t* GetAttributeVector(uintptr_t item)
{
    if (!item) return nullptr;
    return reinterpret_cast<AttributeVector_t*>(item + g_off.EIV_AttributeList + 0x08);
}

AttributeVector_t* GetNetworkedVector(uintptr_t item)
{
    if (!item) return nullptr;
    return reinterpret_cast<AttributeVector_t*>(item + g_off.EIV_NetworkedAttrs + 0x08);
}

static void SetFloatAttr(EconItemAttribute_t& a, uint16_t def, float v)
{
    a.defIndex = def;
    a.value = v;
    a.initialValue = v;
}

static void SetIntAttr(EconItemAttribute_t& a, uint16_t def, int32_t v)
{
    float raw = std::bit_cast<float>(v);
    a.defIndex = def;
    a.value = raw;
    a.initialValue = raw;
}

void EconAttr_Remove(uintptr_t item)
{
    if (!item) return;

    AttributeVector_t* v = GetAttributeVector(item);
    if (!v) return;

    if (v->size == 0 && v->data == 0) return;

    void* data = reinterpret_cast<void*>(v->data);
    v->size = 0;
    v->pad = 0;
    v->data = 0;
    v->allocationCount = 0;
    v->growSizeAndFlags = 0;

    if (data) MemFree(data);
}

void EconAttr_Create(uintptr_t item, int paintKit, float wear, int seed, int statTrak)
{
    if (!item) return;

    AttributeVector_t* v = GetAttributeVector(item);
    if (!v) return;

    Log("[attr-diag] item=%p size=%d data=%p alloc=%d",
        (void*)item, v->size, (void*)v->data, v->allocationCount);

    if (v->size != 0 || v->data != 0) {
        Log("[attr-diag] REFUSED: vector not empty");
        return;
    }

    const bool hasPK = paintKit > 0;
    const bool hasST = statTrak >= 0;
    const int  count = (hasPK ? 3 : 0) + (hasST ? 2 : 0);
    if (count == 0) return;

    constexpr size_t EXTRA = 8;
    const size_t capacity = count + EXTRA;

    auto* attrs = static_cast<EconItemAttribute_t*>(MemAlloc(capacity * sizeof(EconItemAttribute_t)));
    if (!attrs)
    {
        Log("[attr] MemAlloc failed");
        return;
    }
    memset(attrs, 0, capacity * sizeof(EconItemAttribute_t));

    size_t i = 0;
    if (hasPK)
    {
        SetFloatAttr(attrs[i++], ATTR_PAINT, (float)paintKit);
        SetFloatAttr(attrs[i++], ATTR_SEED, (float)(seed >= 0 ? seed : 0));
        SetFloatAttr(attrs[i++], ATTR_WEAR, wear >= 0.0f ? wear : 0.01f);
    }
    Log("[attr-entry] 0: def=%u value=%.3f initial=%.3f",
        attrs[0].defIndex, attrs[0].value, attrs[0].initialValue);
    Log("[attr-entry] 1: def=%u value=%.3f initial=%.3f",
        attrs[1].defIndex, attrs[1].value, attrs[1].initialValue);
    Log("[attr-entry] 2: def=%u value=%.6f initial=%.6f",
        attrs[2].defIndex, attrs[2].value, attrs[2].initialValue);

    if (hasST)
    {
        SetIntAttr(attrs[i++], ATTR_KILL_EATER, statTrak);
        SetIntAttr(attrs[i++], ATTR_KILL_EATER_SCORE_TYPE, 0);
    }

    v->size = (int32_t)count;
    v->pad = 0;
    v->data = reinterpret_cast<uintptr_t>(attrs);
    v->allocationCount = (int32_t)capacity;
    v->growSizeAndFlags = UTL_VECTOR_FIXED_FLAGS;
}

uintptr_t GetWeaponItem(uintptr_t weaponEnt)
{
    uintptr_t container = weaponEnt + g_off.EE_AttrManager;
    return container + g_off.AC_Item;
}

void SetCustomName(uintptr_t item, const std::string& name)
{
    char* p = reinterpret_cast<char*>(item + g_off.EIV_CustomName);
    if (!p) return;

    if (name.empty())
    {
        p[0] = '\0';
        return;
    }
    strncpy_s(p, 161, name.c_str(), _TRUNCATE);
}