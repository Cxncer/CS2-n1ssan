#pragma once

#include <cstdint>

struct ParameterNode
{
    uint8_t pad_00[0x18];
    union
    {
        std::uintptr_t symbol;
        bool boolean;
    } value;
};

struct ParameterGraph
{
    uint8_t pad_00[0x10];
    ParameterNode** nodes;
};

struct ParameterReference
{
    uint8_t pad_00[0x8];
    ParameterGraph* graph;
    std::int16_t index;
    uint8_t pad_12[0x6];

    ParameterNode* Node() const
    {
        return graph && graph->nodes && index >= 0 ? graph->nodes[index] : nullptr;
    }
};

// WeaponGraphController accessors (offsets resolved by schema in actual use).
// Declared here so knife_animation.cpp can `->Action()->Node()` etc.
class WeaponGraphController;