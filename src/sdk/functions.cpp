// n1ssan-dll / src/sdk/functions.cpp
// Pattern resolution for all engine functions.
// Carried forward from v9.0.2 without changes.

#include <cstdlib>
#include "sdk/functions.h"
#include "sdk/entities.h"
#include "config/offsets.h"
#include "diagnostics/log.h"
#include "memory/access.h"
#include "memory/scanner.h"
#include <Windows.h>

InvalidateDescriptionFn pInvalidateDescription = nullptr;

namespace Pat
{
    static constexpr const char* PostDataUpdate =
        "48 8B C4 4C 89 40 18 89 50 10 55 57 48 8D A8 68 FE FF FF 48 81 EC 88 02";
    static constexpr const char* InvalidateDescription =
        "48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8D B9 00 02";
    static constexpr const char* BuildModernSkin =
        "48 85 C9 0F 84 ? ? ? ? 48 8B C4 48 89 50 10";
    static constexpr const char* SetMeshGroupMask =
        "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8D 99 ? ? ? ? 48 8B 71";
    static constexpr const char* RegenerateSkins =
        "48 83 EC ? E8 ? ? ? ? 48 85 C0 0F 84 ? ? ? ? 48 8B 10";
    static constexpr const char* ReleaseCompositeMaterials =
        "48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 56 41 57 48 83 EC 20 44 0F B6 F2 48 8B F9 E8 ? ? ? ? 45 33 FF 48 8B F0";
    static constexpr const char* GloveCreatePaintKit =
        "48 89 5C 24 ? 56 48 83 EC ? 48 8B 01 FF 50";
    static constexpr const char* GloveSetBodyGroup =
        "E8 ? ? ? ? EB 0C 48 8B CF";
    static constexpr const char* AgentSetModel =
        "40 53 48 83 EC ? 48 8B D9 4C 8B C2 48 8B 0D ? ? ? ? 48 8D 54 24";
    static constexpr const char* KnifeUpdateSubclass =
        "4C 8B DC 53 48 81 EC ? ? ? ? 48 8B 41";
    static constexpr const char* MemAlloc =
        "48 89 5C 24 08 57 48 83 EC 20 48 8B DA 48 8B F9 48 85 D2 74";
    static constexpr const char* MemFree =
        "48 85 C9 74 ? 48 89 5C 24 ? 57";
}

BuildModernSkinFn           pBuildModernSkin = nullptr;
SetMeshGroupMaskFn          pSetMeshGroupMask = nullptr;
RegenerateSkinsFn           pRegenerateSkins = nullptr;
ReleaseCompositeMaterialsFn pReleaseCompositeMaterials = nullptr;
GloveCreatePaintKitFn       pGloveCreatePaintKit = nullptr;
GloveSetBodyGroupFn         pGloveSetBodyGroup = nullptr;
AgentSetModelFn             pAgentSetModel = nullptr;
KnifeUpdateSubclassFn       pKnifeUpdateSubclass = nullptr;
MemAllocFn                  pMemAlloc = nullptr;
MemFreeFn                   pMemFree = nullptr;

uintptr_t g_off_CSkeleton_modelState = 0;
uintptr_t g_off_CModelState_hModel = 0;


void* __fastcall MemAlloc(size_t size)
{
    return pMemAlloc ? pMemAlloc(size) : nullptr;
}

void __fastcall MemFree(void* p)
{
    if (p && pMemFree)
        pMemFree(p);
}

bool ResolveFunctions()
{
    ModuleInfo client = GetClientModule();
    if (!client.valid())
    {
        Log("[resolve] client.dll missing");
        return false;
    }

    auto logPat = [](const char* name, uintptr_t addr)
        {
            if (addr) Log("[resolve] %-30s @ 0x%p", name, (void*)addr);
            else      Log("[resolve] %-30s NOT FOUND", name);
        };

    pInvalidateDescription = (InvalidateDescriptionFn)ScanPattern(client, Pat::InvalidateDescription);
    logPat("InvalidateDescription", (uintptr_t)pInvalidateDescription);

    pBuildModernSkin = (BuildModernSkinFn)ScanPattern(client, Pat::BuildModernSkin);
    logPat("BuildModernSkin", (uintptr_t)pBuildModernSkin);

    pSetMeshGroupMask = (SetMeshGroupMaskFn)ScanPattern(client, Pat::SetMeshGroupMask);
    logPat("SetMeshGroupMask", (uintptr_t)pSetMeshGroupMask);

    pRegenerateSkins = (RegenerateSkinsFn)ScanPattern(client, Pat::RegenerateSkins);
    logPat("RegenerateSkins", (uintptr_t)pRegenerateSkins);

    pReleaseCompositeMaterials = (ReleaseCompositeMaterialsFn)ScanPattern(client, Pat::ReleaseCompositeMaterials);
    logPat("ReleaseCompositeMaterials", (uintptr_t)pReleaseCompositeMaterials);

    pGloveCreatePaintKit = (GloveCreatePaintKitFn)ScanPattern(client, Pat::GloveCreatePaintKit);
    logPat("GloveCreatePaintKit", (uintptr_t)pGloveCreatePaintKit);

    pAgentSetModel = (AgentSetModelFn)ScanPattern(client, Pat::AgentSetModel);
    logPat("AgentSetModel", (uintptr_t)pAgentSetModel);

    pKnifeUpdateSubclass = (KnifeUpdateSubclassFn)ScanPattern(client, Pat::KnifeUpdateSubclass);
    logPat("KnifeUpdateSubclass", (uintptr_t)pKnifeUpdateSubclass);

    {
        uintptr_t p = ScanPattern(client, Pat::GloveSetBodyGroup);
        uintptr_t fn = ResolveCallTarget(p);
        pGloveSetBodyGroup = (GloveSetBodyGroupFn)fn;
        logPat("GloveSetBodyGroup", fn);
    }

    HMODULE tier0 = GetModuleHandleA("tier0.dll");

    pMemAlloc = tier0
        ? reinterpret_cast<MemAllocFn>(
            GetProcAddress(tier0, "MemAlloc_AllocFunc"))
        : nullptr;

    pMemFree = tier0
        ? reinterpret_cast<MemFreeFn>(
            GetProcAddress(tier0, "MemAlloc_FreeFunc"))
        : nullptr;

    logPat("MemAlloc", reinterpret_cast<uintptr_t>(pMemAlloc));
    logPat("MemFree", reinterpret_cast<uintptr_t>(pMemFree));

    g_off_CSkeleton_modelState = 0x140;
    g_off_CModelState_hModel = 0xA0;
    Log("[resolve] CSkeletonInstance->m_modelState = 0x%X (hardcoded)", g_off_CSkeleton_modelState);
    Log("[resolve] CModelState->m_hModel = 0x%X (hardcoded)", g_off_CModelState_hModel);

    uintptr_t elAddr = RVA_ENTITY_LIST;
    uintptr_t el = 0;
    SafeReadQword(elAddr, el);
    g_entityListGlobal = el;
    Log("[resolve] entityList @ 0x%p -> 0x%p", (void*)elAddr, (void*)el);

    if (!pBuildModernSkin || !pSetMeshGroupMask || !pMemAlloc || !pMemFree)
    {
        Log("[resolve] FATAL: essential function missing");
        return false;
    }

    return true;
}