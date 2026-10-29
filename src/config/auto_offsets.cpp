// n1ssan-dll / src/config/auto_offsets.cpp
// Pattern-scans client.dll for dwEntityList / dwLocalPlayerController / dwLocalPlayerPawn.
// Survives client.dll recompiles (Valve patches) because patterns anchor to instruction shape.

#include "config/auto_offsets.h"
#include "diagnostics/log.h"
#include "memory/scanner.h"

#include <windows.h>
#include <cstdint>
#include <cstring>

namespace AutoOffsets
{
    uintptr_t g_entityList = 0;
    uintptr_t g_localPlayerController = 0;
    uintptr_t g_localPlayerPawn = 0;
}

namespace
{
    uintptr_t find_rip32(uintptr_t instrAddr, uint32_t dispOffset)
    {
        int32_t disp = 0;
        memcpy(&disp, reinterpret_cast<const void*>(instrAddr + dispOffset), sizeof(disp));
        return instrAddr + dispOffset + 4 + static_cast<intptr_t>(disp);
    }

    uintptr_t resolve_global(const ModuleInfo& mod, const char* name,
        const char* pattern, uint32_t dispOffset)
    {
        const uintptr_t hit = ScanPattern(mod, pattern);
        if (!hit)
        {
            Log("[auto-off] %-28s pattern not found", name);
            return 0;
        }

        const uintptr_t target = find_rip32(hit, dispOffset);
        if (target < mod.base || target >= mod.base + mod.size)
        {
            Log("[auto-off] %-28s hit 0x%p -> 0x%p (OUTSIDE MODULE)",
                name, (void*)hit, (void*)target);
            return 0;
        }

        uintptr_t val = 0;
        __try { val = *reinterpret_cast<uintptr_t*>(target); }
        __except (1) { val = 0; }

        Log("[auto-off] %-28s hit 0x%p -> rva 0x%llX (val=%p)",
            name, (void*)hit,
            (unsigned long long)(target - mod.base),
            (void*)val);
        return target;
    }
}

bool AutoOffsets::Resolve()
{
    g_entityList = 0;
    g_localPlayerController = 0;
    g_localPlayerPawn = 0;

    ModuleInfo mod = GetClientModule();
    if (!mod.valid())
    {
        Log("[auto-off] client.dll not loaded");
        return false;
    }

    int matched = 0;

    {
        const uintptr_t g = resolve_global(mod, "dwEntityList",
            "48 8B 1D ? ? ? ? 48 89 1D ? ? ? ?", 3);
        if (g) { g_entityList = g; ++matched; }
    }

    {
        const uintptr_t g = resolve_global(mod, "dwLocalPlayerController",
            "48 8B 05 ? ? ? ? 41 89 BE", 3);
        if (g) { g_localPlayerController = g; ++matched; }
    }

    {
        const uintptr_t g = resolve_global(mod, "dwLocalPlayerPawn",
            "48 8B 0D ? ? ? ? 4C 8B C0 48 8B", 3);
        if (g) { g_localPlayerPawn = g; ++matched; }
    }

    Log("[auto-off] summary: matched=%d/3", matched);
    return matched == 3;
}