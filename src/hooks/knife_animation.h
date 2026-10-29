#pragma once

#include <cstdint>

namespace KnifeAnimation
{
    struct Snapshot
    {
        std::uintptr_t weapon = 0;
        std::uint32_t handle = 0xFFFFFFFF;
        int definition = -1;
        std::uint32_t subclass = 0;
        int state = -1;
        float stateTime = 0;
        float cancelTime = 0;
        int pending = -1;
        int shouldLoop = -1;
        int serviceBlocked = -1;
        std::uintptr_t controller = 0;
        std::uintptr_t graph = 0;
        int cachedState = -1;
        float cachedTime = 0;
        int reset = -1;
        std::uintptr_t action = 0;
        std::uintptr_t extra = 0;
        int phase = -1;
        int complete = -1;
        int graphBlocked = -1;
        int readFault = 0;
    };

    struct ViewmodelIdentity
    {
        void* entity = nullptr;
        std::uint32_t handle = 0xFFFFFFFF;

        bool operator==(const ViewmodelIdentity&) const = default;
    };

    struct InspectContext
    {
        Snapshot before;
        bool correct = false;
    };

    struct ReflectionContext
    {
        Snapshot before;
        ViewmodelIdentity viewmodel;
        bool correct = false;
    };

    void Initialize();
    void Shutdown();
    void FrameStage(int stage);

    // Full-signature declarations matching the .cpp
    InspectContext    BeforeInspect(std::uintptr_t weapon);
    void              AfterInspect(std::uintptr_t weapon, const InspectContext& context, char result);
    ReflectionContext BeforeReflection(std::uintptr_t controller, std::uintptr_t weapon);
    void              AfterReflection(std::uintptr_t controller, std::uintptr_t weapon, const ReflectionContext& context);
}