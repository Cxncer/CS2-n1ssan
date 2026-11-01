#include "skin/glove_attribute_manager.h"

#include "config/offsets.h"
#include "sdk/functions.h"
#include "sdk/item_view.h"

#include <algorithm>
#include <cstring>
#include <mutex>
#include <unordered_map>

namespace
{
    constexpr std::uint16_t ATTR_PAINT = 6;
    constexpr std::uint16_t ATTR_SEED = 7;
    constexpr std::uint16_t ATTR_WEAR = 8;
    constexpr std::size_t ATTRIBUTE_COUNT = 3;
    constexpr std::size_t EXTRA_CAPACITY = 8;

    std::unordered_map<std::uintptr_t, EconItemAttribute_t*> g_owned;
    std::mutex g_mutex;

    void SetFloat(EconItemAttribute_t& attribute, std::uint16_t definition, float value)
    {
        attribute.defIndex = definition;
        attribute.value = value;
        attribute.initialValue = value;
    }
}

namespace GloveAttributeManager
{
    bool Create(std::uintptr_t item, int paintKit, float wear, int seed)
    {
        if (!item || paintKit <= 0 || !pMemAlloc || !pMemFree ||
            !g_off.AttributeList_Attributes)
            return false;

        AttributeVector_t* vector = GetAttributeVector(item);
        if (!vector)
            return false;

        std::lock_guard<std::mutex> lock(g_mutex);
        if (vector->size != 0 || vector->data != 0 || g_owned.contains(item))
            return false;

        constexpr std::size_t capacity = ATTRIBUTE_COUNT + EXTRA_CAPACITY;
        const std::size_t bytes = capacity * sizeof(EconItemAttribute_t);
        auto* attributes = static_cast<EconItemAttribute_t*>(MemAlloc(bytes));
        if (!attributes)
            return false;

        std::memset(attributes, 0, bytes);
        SetFloat(attributes[0], ATTR_PAINT, static_cast<float>(paintKit));
        SetFloat(attributes[1], ATTR_SEED, static_cast<float>((std::max)(0, seed)));
        SetFloat(attributes[2], ATTR_WEAR, (std::clamp)(wear, 0.0001f, 1.0f));

        try
        {
            if (!g_owned.emplace(item, attributes).second)
            {
                MemFree(attributes);
                return false;
            }
        }
        catch (...)
        {
            MemFree(attributes);
            return false;
        }

        vector->size = static_cast<std::int32_t>(ATTRIBUTE_COUNT);
        vector->pad = 0;
        vector->data = reinterpret_cast<std::uintptr_t>(attributes);
        vector->allocationCount = static_cast<std::int32_t>(capacity);
        vector->growSizeAndFlags = UTL_VECTOR_FIXED_FLAGS;
        return true;
    }

    void Remove(std::uintptr_t item)
    {
        if (!item || !pMemFree)
            return;

        AttributeVector_t* vector = GetAttributeVector(item);
        if (!vector)
            return;

        std::lock_guard<std::mutex> lock(g_mutex);
        const auto it = g_owned.find(item);
        if (it == g_owned.end() ||
            vector->data != reinterpret_cast<std::uintptr_t>(it->second))
            return;

        EconItemAttribute_t* owned = it->second;
        vector->size = 0;
        vector->pad = 0;
        vector->data = 0;
        vector->allocationCount = 0;
        vector->growSizeAndFlags = 0;
        g_owned.erase(it);
        MemFree(owned);
    }
}
