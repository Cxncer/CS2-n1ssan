// n1ssan-dll / dllmain.cpp
// v10.0.0 — beta 1.9 - Skins Cleanup
// split into src/ modules
//
// This file is now a 60-line skeleton. Everything functional lives in
// src/. The old monolith is preserved in Backup\dllmain.cpp.v9.0.2-*.bak.
//
// InjectThread sequence:
//   1. LoadLoadout()        (src/inventory/loadout.cpp)
//   2. LoadMinHook()        (this file)
//   3. Wait for client.dll
//   4. ResolveOffsets()     (src/config/offsets.cpp)
//   5. ResolveFunctions()   (src/sdk/functions.cpp)
//   6. InstallFSNHook()     (src/hooks/frame_stage.cpp)

#include <windows.h>
#include <string>

#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "config/offsets.h"
#include "sdk/functions.h"
#include "hooks/frame_stage.h"
#include "hooks/knife_animation.h"
#include "inventory/schema_probe.h"
#include "inventory/plan_a.h"
#include "hooks/minhook_dynamic.h"
#include "config/auto_offsets.h"
#include "inventory/engine_schema_diagnostic.h"

// ---- MinHook ----
typedef int (WINAPI* MH_Initialize_t)();
typedef int (WINAPI* MH_CreateHook_t)(LPVOID, LPVOID, LPVOID*);
typedef int (WINAPI* MH_EnableHook_t)(LPVOID);

MH_Initialize_t MH_Initialize_p = nullptr;
MH_CreateHook_t MH_CreateHook_p = nullptr;
MH_EnableHook_t MH_EnableHook_p = nullptr;
MH_DisableHook_t MH_DisableHook_p = nullptr;

static HMODULE g_hMinHook = nullptr;
static std::string g_dllPath;

static bool LoadMinHook()
{
    const char* names[] = { "MinHook.x64.dll", "minhook.dll", "MinHook.dll" };

    char dir[MAX_PATH]{};
    strcpy_s(dir, g_dllPath.c_str());
    char* slash = strrchr(dir, '\\');
    if (slash) *(slash + 1) = 0;

    for (const char* n : names)
    {
        g_hMinHook = LoadLibraryA(n);
        if (g_hMinHook) break;

        char full[MAX_PATH]{};
        sprintf_s(full, "%s%s", dir, n);
        g_hMinHook = LoadLibraryA(full);
        if (g_hMinHook) break;
    }

    if (!g_hMinHook) return false;

    MH_Initialize_p = (MH_Initialize_t)GetProcAddress(g_hMinHook, "MH_Initialize");
    MH_CreateHook_p = (MH_CreateHook_t)GetProcAddress(g_hMinHook, "MH_CreateHook");
    MH_EnableHook_p = (MH_EnableHook_t)GetProcAddress(g_hMinHook, "MH_EnableHook");

    return MH_Initialize_p
        && MH_CreateHook_p
        && MH_EnableHook_p
        && MH_Initialize_p() == 0;
}

// ---- Inject thread ----

static DWORD WINAPI InjectThread(LPVOID)
{
    // 1. MinHook FIRST — everything else needs it
    if (!LoadMinHook())
    {
        Log("[fatal] MinHook load failed");
        return 0;
    }

    // 2. Wait for client.dll
    for (int i = 0; i < 300; ++i)
    {
        if (GetModuleHandleA("client.dll")) break;
        Sleep(100);
    }
    if (!GetModuleHandleA("client.dll"))
    {
        Log("[fatal] client.dll not found");
        return 0;
    }

    // 3. Resolve offsets + functions + schema
    ResolveOffsets();

    RunEngineSchemaDiagnostic();

    if (!ResolveFunctions())
    {
        Log("[fatal] function resolution failed");
        return 0;
    }

    RunSchemaProbe();

    // 4. Loadout
    LoadLoadout();
    if (g_targets.empty())
    {
        Log("[fatal] loadout empty");
        return 0;
    }

    // 5. Plan A (SOCache) — optional, disable by commenting this line later
    PlanA::Start();

    // 6. Knife animation hooks (MinHook is now live)
    KnifeAnimation::Initialize();

    // 7. FSN hook (last, so all dependencies are ready)
    if (!InstallFSNHook())
    {
        Log("[fatal] FSN hook not installed");
    }

    Log("[ready] v9.0.3 split; targets=%zu", g_targets.size());

    while (true) Sleep(10000);
    return 0;
}

// ---- DllMain ----

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);

        char dllPath[MAX_PATH]{};
        GetModuleFileNameA(hModule, dllPath, MAX_PATH);
        g_dllPath = dllPath;

        LogInit(g_dllPath);
        Log("[build] v9.0.3 BUILD-TEST %s %s", __DATE__, __TIME__);

        HANDLE t = CreateThread(nullptr, 0, InjectThread, nullptr, 0, nullptr);
        if (t) CloseHandle(t);
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        if (g_hMinHook) FreeLibrary(g_hMinHook);
        FreeConsole();
    }
    return TRUE;
}