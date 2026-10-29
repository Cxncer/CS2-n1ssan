// n1ssan-dll / src/sdk/functions.h
// Resolved engine function pointers + wrappers.
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>
#include <cstddef>

// ---- Typedefs ----
using BuildModernSkinFn = void(__fastcall*)(void* item, void* model, int64_t a3, int texSize, char a5, char a6, void* a7);
using SetMeshGroupMaskFn = void(__fastcall*)(void* sceneNode, uint64_t mask);
using RegenerateSkinsFn = void(__fastcall*)();
using ReleaseCompositeMaterialsFn = void(__fastcall*)(void* owner, bool stampGeneration);
using GloveCreatePaintKitFn = void* (__fastcall*)(void* item);
using GloveSetBodyGroupFn = void(__fastcall*)(void* pawn, const char* group, unsigned int value);
using AgentSetModelFn = void(__fastcall*)(void* entity, const char* modelName);
using KnifeUpdateSubclassFn = void(__fastcall*)(void* weapon);
using MemAllocFn = void* (__fastcall*)(size_t size);
using MemFreeFn = void(__fastcall*)(void* ptr);
using InvalidateDescriptionFn = void(__fastcall*)(void* itemView);
extern InvalidateDescriptionFn pInvalidateDescription;

// ---- Resolved globals ----
extern BuildModernSkinFn           pBuildModernSkin;
extern SetMeshGroupMaskFn          pSetMeshGroupMask;
extern RegenerateSkinsFn           pRegenerateSkins;
extern ReleaseCompositeMaterialsFn pReleaseCompositeMaterials;
extern GloveCreatePaintKitFn       pGloveCreatePaintKit;
extern GloveSetBodyGroupFn         pGloveSetBodyGroup;
extern AgentSetModelFn             pAgentSetModel;
extern KnifeUpdateSubclassFn       pKnifeUpdateSubclass;
extern MemAllocFn                  pMemAlloc;
extern MemFreeFn                   pMemFree;
// Model chain offsets (scene node → skeleton → modelState → hModel)
extern uintptr_t g_off_CSkeleton_modelState;
extern uintptr_t g_off_CModelState_hModel;

// ---- Wrappers (safe null + __try) ----
void* __fastcall MemAlloc(size_t size);
void  __fastcall MemFree(void* p);

// ---- Resolver ----
// Scans all patterns in client.dll, sets the p* globals, sets g_entityListGlobal.
// Returns false if essential functions are missing.
bool ResolveFunctions();