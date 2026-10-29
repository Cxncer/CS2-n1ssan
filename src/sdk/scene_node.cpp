// n1ssan-dll / src/sdk/scene_node.cpp
// Scene node traversal + HUD weapon discovery.
// Carried forward from v9.0.2 without changes.

#include "sdk/scene_node.h"
#include "sdk/entities.h"
#include "sdk/functions.h"
#include "sdk/handles.h"
#include "config/offsets.h"
#include "memory/access.h"
#include "diagnostics/log.h"

// Set by ResolveFunctions() — the two schema-resolved offsets for the
// model chain. Both currently hardcoded in functions.cpp, exposed here
// via extern.
extern uintptr_t g_off_CSkeleton_modelState;
extern uintptr_t g_off_CModelState_hModel;

uintptr_t GetSkeletonInstance(uintptr_t sceneNode)
{
    if (!sceneNode) return 0;

    uintptr_t vt = 0;
    if (!SafeReadQword(sceneNode, vt) || !vt) return 0;

    uintptr_t fn = 0;
    if (!SafeReadQword(vt + 13 * 8, fn) || !fn) return 0;

    using Fn = uintptr_t(__fastcall*)(uintptr_t);
    __try { return reinterpret_cast<Fn>(fn)(sceneNode); }
    __except (1) { return 0; }
}

uintptr_t GetModelPtr(uintptr_t entity)
{
    uintptr_t sceneNode = 0;
    if (!SafeReadQword(entity + g_off.BE_GameSceneNode, sceneNode) || sceneNode < 0x10000)
        return 0;

    uintptr_t skeleton = GetSkeletonInstance(sceneNode);
    if (!skeleton) return 0;

    uintptr_t modelPtr = 0;
    if (!SafeReadQword(skeleton + g_off_CSkeleton_modelState + g_off_CModelState_hModel, modelPtr)) return 0;
    if (modelPtr < 0x10000) return 0;

    // C_StrongHandle<C_Model> may need one more deref to get the actual CModel*
    uintptr_t innerPtr = 0;
    if (SafeReadQword(modelPtr, innerPtr) && innerPtr > 0x10000 && innerPtr < 0x00007FFFFFFFFFFFULL)
    {
        static bool g_logged = false;
        if (!g_logged) { g_logged = true; Log("[model] outer=0x%p inner=0x%p", (void*)modelPtr, (void*)innerPtr); }
        return innerPtr;
    }
    return modelPtr;
}

void SetMeshGroup(uintptr_t entity, uint64_t mask)
{
    if (!entity || !pSetMeshGroupMask) return;

    uintptr_t sceneNode = 0;
    if (!SafeReadQword(entity + g_off.BE_GameSceneNode, sceneNode) || sceneNode < 0x10000)
        return;

    __try { pSetMeshGroupMask((void*)sceneNode, mask); }
    __except (1) {}
}

bool BuildModernSkin(uintptr_t item, uintptr_t model)
{
    if (!item || !model || !pBuildModernSkin) return false;

    __try
    {
        pBuildModernSkin((void*)item, (void*)model, 0, 2048, 0, 0, nullptr);
        return true;
    }
    __except (1)
    {
        return false;
    }
}


uintptr_t FindHudWeapon(uintptr_t weapon, uintptr_t pawn)
{
    Log("[hud-find] START weapon=0x%p pawn=0x%p",
        (void*)weapon, (void*)pawn);

    if (!weapon || !pawn) {
        Log("[hud-find] FAIL: null weapon or pawn");
        return 0;
    }

    uint32_t armsHandle = 0;
    if (!SafeReadU32(pawn + g_off.PAWN_hHudModelArms, armsHandle)) {
        Log("[hud-find] FAIL: cannot read arms handle at +0x%llX",
            (unsigned long long)g_off.PAWN_hHudModelArms);
        return 0;
    }

    Log("[hud-find] armsHandle=0x%X", armsHandle);

    if (!HandleValid(armsHandle)) {
        Log("[hud-find] FAIL: invalid arms handle");
        return 0;
    }

    uintptr_t arms = GetEntityByHandle(armsHandle);
    Log("[hud-find] arms=0x%p", (void*)arms);

    if (!arms) {
        Log("[hud-find] FAIL: handle did not resolve");
        return 0;
    }

    uintptr_t armsNode = 0;
    if (!SafeReadQword(arms + g_off.BE_GameSceneNode, armsNode)
        || armsNode < 0x10000) {
        Log("[hud-find] FAIL: invalid arms scene node");
        return 0;
    }

    Log("[hud-find] armsNode=0x%p", (void*)armsNode);

    uintptr_t child = 0;
    if (!SafeReadQword(armsNode + g_off.GSN_Child, child)) {
        Log("[hud-find] FAIL: cannot read first child");
        return 0;
    }

    Log("[hud-find] firstChild=0x%p", (void*)child);

    int walked = 0;

    while (child && child > 0x10000 && walked < 64)
    {
        uintptr_t childOwner = 0;

        if (SafeReadQword(child + g_off.GSN_Owner, childOwner)
            && childOwner > 0x10000)
        {
            uint32_t childOwnerHandle =
                (uint32_t)ReadHandle(childOwner, g_off.BE_hOwnerEntity);

            if (HandleValid(childOwnerHandle))
            {
                uintptr_t resolved = GetEntityByHandle(childOwnerHandle);

                Log("[hud-find] child[%d]=0x%p owner=0x%p "
                    "handle=0x%X resolved=0x%p%s",
                    walked, (void*)child, (void*)childOwner,
                    childOwnerHandle, (void*)resolved,
                    resolved == weapon ? " **MATCH**" : "");

                if (resolved == weapon) {
                    Log("[hud-find] SUCCESS hudWeapon=0x%p after %d nodes",
                        (void*)childOwner, walked + 1);
                    return childOwner;
                }
            }
        }

        uintptr_t next = 0;
        if (!SafeReadQword(child + g_off.GSN_NextSibling, next)) {
            Log("[hud-find] STOP: cannot read next sibling at node %d",
                walked);
            break;
        }

        child = next;
        ++walked;
    }

    Log("[hud-find] NO MATCH walked=%d finalChild=0x%p",
        walked, (void*)child);

    return 0;
}
