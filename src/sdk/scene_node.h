// n1ssan-dll / src/sdk/scene_node.h
// CGameSceneNode traversal, skeleton instance, model pointer, mesh group.
// Plus BuildModernSkin wrapper and HUD weapon discovery.

#pragma once
#include <cstdint>

// ---- Scene node traversal ----

// Call CGameSceneNode::GetSkeletonInstance() (vfunc 13) on the scene node.
// Returns 0 if the call fails.
uintptr_t GetSkeletonInstance(uintptr_t sceneNode);

// Resolve the CModel* from an entity's scene node:
// sceneNode->GetSkeletonInstance()->m_modelState.m_hModel->Get()
// Returns 0 if any step fails.
uintptr_t GetModelPtr(uintptr_t entity);

// Set the entity's mesh group mask via CGameSceneNode::SetMeshGroupMask.
void SetMeshGroup(uintptr_t entity, uint64_t mask);

// ---- BuildModernSkin wrapper ----

// Call BuildModernSkin(item, model, 0, 2048, 0, 0, nullptr).
// Returns false on exception or if any argument is null.
bool BuildModernSkin(uintptr_t item, uintptr_t model);

// ---- HUD weapon ----

// Find the local pawn's HUD weapon whose owner resolves back to `weapon`.
// Returns 0 if not found.
uintptr_t FindHudWeapon(uintptr_t weapon, uintptr_t pawn);