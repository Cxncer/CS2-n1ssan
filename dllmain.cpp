// n1ssan-dll / dllmain.cpp
// Operation Overdrive Underway.
// split into src/ modules
//
// This file is now a 60-line skeleton. Everything functional lives in
// src/. The old monolith is preserved in Backup\\dllmain.cpp.*.bak.

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
#include "skin/glove_paintkit_schema.h"
#include "skin/glove_schema.h"

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

// ---- Initialization worker ----

static DWORD WINAPI InjectThread(LPVOID)
{
    LogStatus("INITIALIZING", "worker_started");

    if (!LoadMinHook())
    {
        Log("[fatal] MinHook load failed");
        LogStatus("FAILED", "minhook_load_failed");
        return 0;
    }

    for (int i = 0; i < 300; ++i)
    {
        if (GetModuleHandleA("client.dll")) break;
        Sleep(100);
    }
    if (!GetModuleHandleA("client.dll"))
    {
        Log("[fatal] client.dll not found");
        LogStatus("FAILED", "client_module_unavailable");
        return 0;
    }

    ResolveOffsets();
    RunEngineSchemaDiagnostic();

    if (!ResolveGloveSchemaOffsets())
    {
        Log("[fatal] glove schema resolution incomplete");
        LogStatus("FAILED", "glove_schema_resolution_failed");
        return 0;
    }

    if (!ResolveFunctions())
    {
        Log("[fatal] function resolution failed");
        LogStatus("FAILED", "function_resolution_failed");
        return 0;
    }

    Log("[glove-paintkit-schema] %s",
        GlovePaintKitSchema::Initialize() ? "READY" : "UNAVAILABLE");
    Log("[glove-schema] %s",
        GlovesSchema::Initialize("client.dll") ? "READY" : "UNAVAILABLE");

    LoadLoadout();
    if (g_targets.empty())
    {
        Log("[fatal] loadout empty");
        LogStatus("FAILED", "loadout_empty");
        return 0;
    }

    if (!RunSchemaProbe())
    {
        Log("[fatal] loadout compatibility preflight failed");
        LogStatus("FAILED", "loadout_compatibility_failed");
        return 0;
    }

    PlanA::Start();
    KnifeAnimation::Initialize();

    if (!InstallFSNHook())
    {
        Log("[fatal] FSN hook not installed");
        LogStatus("FAILED", "fsn_hook_installation_failed");
        return 0;
    }

    LogStatus("CHECKS_PASSED", "required_initialization_checks_passed");
    Log("[diagnostic] targets=%zu", g_targets.size());

    // READY means the required startup sequence completed and this worker
    // remains alive. The periodic record is a worker heartbeat, not proof
    // that every game-side feature is independently healthy.
    while (true)
    {
        LogStatus("READY", "runtime_worker_heartbeat");
        Sleep(10000);
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);

        char dllPath[MAX_PATH]{};
        GetModuleFileNameA(hModule, dllPath, MAX_PATH);
        g_dllPath = dllPath;

        LogInit(g_dllPath);
        Log("[build] Operation Armory x Obsidian Build 3.0 | %s %s", __DATE__, __TIME__);

        HANDLE t = CreateThread(nullptr, 0, InjectThread, nullptr, 0, nullptr);
        if (t) CloseHandle(t);
        else LogStatus("FAILED", "initialization_worker_creation_failed");
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        if (g_hMinHook) FreeLibrary(g_hMinHook);
        FreeConsole();
    }
    return TRUE;
}
