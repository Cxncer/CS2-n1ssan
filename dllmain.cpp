// n1ssan-dll / dllmain.cpp
// Runtime entry point. Loadout and Armory share the inventory runtime but
// initialize only the data source selected by DOMINATE.

#include <windows.h>
#include <cstdio>
#include <cstring>
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
#include "inventory/armory_inventory.h"
#include "inventory/loadout_api.h"
#include "inventory/native_apply.h"
#include "inventory/runtime_mode.h"
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

// ---- Deferred runtime-mode activation ----
static DWORD WINAPI RuntimeModeActivationThread(LPVOID)
{
    RuntimeMode lastAttempted = RuntimeMode::Unknown;

    for (;;)
    {
        const RuntimeMode requested = RuntimeModeState::Requested();

        // Withdrawn selection: stop feeding the game-thread hooks from any
        // source until the user applies a profile again.
        if (requested == RuntimeMode::Unknown)
        {
            if (RuntimeModeState::Current() != RuntimeMode::Unknown)
            {
                RuntimeModeState::SetCurrent(RuntimeMode::Unknown);
                Log("[runtime-mode] selection withdrawn; runtime is inactive");
            }

            lastAttempted = RuntimeMode::Unknown;
            Sleep(250);
            continue;
        }

        if (requested == lastAttempted)
        {
            Sleep(250);
            continue;
        }

        Log("[runtime-mode] preparing requested mode: %s",
            requested == RuntimeMode::Loadout ? "loadout" : "armory");

        if (requested == RuntimeMode::Loadout)
        {
            LoadLoadout();
            if (g_targets.empty())
            {
                Log("[runtime-mode] Loadout activation rejected: no valid targets were loaded");
                lastAttempted = requested;
                continue;
            }

            if (!RunSchemaProbe())
            {
                Log("[runtime-mode] Loadout activation rejected: compatibility preflight failed");
                lastAttempted = requested;
                continue;
            }

            KnifeAnimation::Initialize();
            StartLoadoutWatcher();
        }

        RuntimeModeState::SetCurrent(requested);
        lastAttempted = requested;
        Log("[runtime-mode] active mode: %s",
            requested == RuntimeMode::Loadout ? "loadout" : "armory");
    }

    return 0;
}

// ---- Signature health (Stormwatch) ----

// Counts the engine signatures the runtime actually resolved. A missing
// signature is reported by name so an outdated build is visible in the status
// record instead of only failing later, mid-apply.
static char g_signatureHealth[40] = "signatures=0/0";

static void LogSignatureHealth()
{
    struct Signature
    {
        const char* name;
        const void*  address;
    };

    const Signature signatures[] = {
        { "BuildModernSkin",           reinterpret_cast<const void*>(pBuildModernSkin) },
        { "SetMeshGroupMask",          reinterpret_cast<const void*>(pSetMeshGroupMask) },
        { "RegenerateSkins",           reinterpret_cast<const void*>(pRegenerateSkins) },
        { "ReleaseCompositeMaterials", reinterpret_cast<const void*>(pReleaseCompositeMaterials) },
        { "GloveCreatePaintKit",       reinterpret_cast<const void*>(pGloveCreatePaintKit) },
        { "GloveSetBodyGroup",         reinterpret_cast<const void*>(pGloveSetBodyGroup) },
        { "AgentSetModel",             reinterpret_cast<const void*>(pAgentSetModel) },
        { "KnifeUpdateSubclass",       reinterpret_cast<const void*>(pKnifeUpdateSubclass) },
        { "MemAlloc",                  reinterpret_cast<const void*>(pMemAlloc) },
        { "MemFree",                   reinterpret_cast<const void*>(pMemFree) },
        { "InvalidateDescription",     reinterpret_cast<const void*>(pInvalidateDescription) },
    };

    const int total = static_cast<int>(sizeof(signatures) / sizeof(signatures[0]));
    int resolved = 0;

    for (const Signature& signature : signatures)
    {
        if (signature.address)
        {
            ++resolved;
            continue;
        }

        Log("[health] signature missing: %s", signature.name);
    }

    sprintf_s(g_signatureHealth, sizeof(g_signatureHealth),
        "signatures=%d/%d", resolved, total);

    Log("[health] %s", g_signatureHealth);
}

// ---- Initialization worker ----

static DWORD WINAPI InjectThread(LPVOID)
{
    // Keep filesystem and console initialization out of DllMain/loader lock.
    LogInit(g_dllPath);
    Log("[build] Operation Armory x Obsidian Build 3.0 | %s %s", __DATE__, __TIME__);
    LogStatus("INITIALIZING", "worker_started", "E_NONE");

    if (!LoadMinHook())
    {
        Log("[fatal] MinHook load failed");
        LogStatus("FAILED", "minhook_load_failed", "E_MINHOOK_LOAD");
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
        LogStatus("FAILED", "client_module_unavailable", "E_CLIENT_MODULE");
        return 0;
    }

    ResolveOffsets();

    // Resolve the Bridge independently of n1ssan-data.json. Armory mode must
    // remain usable even when Loadout has no saved profile or data file.
    std::string bridgeDirectory;
    if (!ResolveBridgeDirectory(bridgeDirectory))
    {
        Log("[fatal] Bridge directory unavailable");
        LogStatus("FAILED", "bridge_directory_unavailable", "E_BRIDGE_DIRECTORY");
        return 0;
    }

    g_bridgeDirectory = bridgeDirectory;
    RuntimeModeState::StartWatcher(bridgeDirectory);

    // Injection readiness is mode-neutral. DOMINATE selects the runtime only
    // after this DLL has installed its hooks and reported READY.
    const bool loadoutMode = false;
    Log("[runtime-mode] initialized in neutral mode; waiting for DOMINATE selection");

    RunEngineSchemaDiagnostic();

    // Glove schema is an optional capability. Keep fallback offsets populated
    // by ResolveOffsets() when live schema resolution is incomplete.
    const bool gloveOffsetsReady = ResolveGloveSchemaOffsets();
    Log("[schema-gloves] %s",
        gloveOffsetsReady ? "READY" : "PARTIAL/UNAVAILABLE - using fallback offsets");

    if (!ResolveFunctions())
    {
        Log("[fatal] function resolution failed");
        LogSignatureHealth();
        LogStatus("FAILED", "function_resolution_failed", "E_FUNCTION_RESOLUTION");
        return 0;
    }

    LogSignatureHealth();

    const bool glovePaintKitReady = GlovePaintKitSchema::Initialize();
    const bool gloveSchemaReady = GlovesSchema::Initialize("client.dll");
    Log("[glove-paintkit-schema] %s",
        glovePaintKitReady ? "READY" : "UNAVAILABLE");
    Log("[glove-schema] %s",
        gloveSchemaReady ? "READY" : "UNAVAILABLE");

    const bool optionalFeaturesDegraded =
        !gloveOffsetsReady || !glovePaintKitReady || !gloveSchemaReady;

    // Mode-specific data is intentionally deferred until DOMINATE publishes
    // the user's choice. Shared schema/runtime initialization remains neutral.

    // PlanA owns the shared CEconItemSystem / SOCache initialization. It only
    // injects Loadout items when Loadout is the selected runtime source.
    if (!PlanA::Start(loadoutMode))
    {
        Log("[fatal] shared inventory runtime initialization failed");
        LogStatus("FAILED", "inventory_runtime_initialization_failed", "E_INVENTORY_RUNTIME");
        return 0;
    }

    // CS2's own inventory applies the Armory's stickers and charms; this is the
    // hook that lets it finish for items Valve doesn't know.
    NativeApply::Initialize();

    // Both data sources can be watched while inactive. FrameStageNotify only
    // adopts the source that has been explicitly activated below.
    ArmoryInventory::StartWatcher();

    // What the player wears in CS2's own Loadout decides which owned instance
    // is applied. Resolving the natives here reports a broken build at start-up
    // instead of silently falling back to the equipment document.
    if (!LoadoutApi::Initialize())
    {
        Log("[loadout-api] unavailable, equipment document only: %s",
            LoadoutApi::LastError());
    }

    if (!InstallFSNHook())
    {
        Log("[fatal] FSN hook not installed");
        LogStatus("FAILED", "fsn_hook_installation_failed", "E_FSN_HOOK");
        return 0;
    }

    HANDLE modeThread = CreateThread(nullptr, 0, RuntimeModeActivationThread, nullptr, 0, nullptr);
    if (!modeThread)
    {
        Log("[fatal] runtime-mode activation worker could not be created");
        LogStatus("FAILED", "runtime_mode_worker_unavailable", "E_MODE_WORKER");
        return 0;
    }
    CloseHandle(modeThread);

    LogStatus("CHECKS_PASSED", "required_initialization_checks_passed", "E_NONE");
    Log("[diagnostic] runtime=unknown targets=%zu; awaiting DOMINATE selection",
        g_targets.size());

    const char* runtimeState = optionalFeaturesDegraded ? "DEGRADED" : "READY";
    const char* runtimeCode = optionalFeaturesDegraded
        ? "W_OPTIONAL_FEATURE_UNAVAILABLE"
        : "E_NONE";

    // The heartbeat reason carries the signature health so consumers report an
    // outdated build alongside the state instead of a bare "ready".
    char runtimeReason[160]{};
    sprintf_s(runtimeReason, sizeof(runtimeReason), "%s %s",
        optionalFeaturesDegraded ? "optional_glove_schema_unavailable" : "runtime_worker_heartbeat",
        g_signatureHealth);

    while (true)
    {
        LogStatus(runtimeState, runtimeReason, runtimeCode);
        Sleep(10000);
    }

    return 0;
}

// Held for the lifetime of the process. A second n1ssan-dll copy would install
// a second FrameStageNotify hook and a second SOCache writer in the same game,
// which duplicates inventory items and crashes the client when a match starts.
static HANDLE g_instanceMutex = nullptr;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);

        char mutexName[MAX_PATH]{};
        sprintf_s(mutexName, "Local\\n1ssan-dll-%lu", GetCurrentProcessId());
        g_instanceMutex = CreateMutexA(nullptr, TRUE, mutexName);
        if (g_instanceMutex && GetLastError() == ERROR_ALREADY_EXISTS)
        {
            OutputDebugStringA("[n1ssan] another n1ssan-dll copy is already loaded; this one stays inert\n");
            return TRUE;
        }

        char dllPath[MAX_PATH]{};
        GetModuleFileNameA(hModule, dllPath, MAX_PATH);
        g_dllPath = dllPath;

        HANDLE t = CreateThread(nullptr, 0, InjectThread, nullptr, 0, nullptr);
        if (t) CloseHandle(t);
        else OutputDebugStringA("[n1ssan] initialization worker creation failed\n");
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        if (g_hMinHook) FreeLibrary(g_hMinHook);
    }
    return TRUE;
}
