#pragma once
#include <cstdint>

namespace PlanA
{
    // Deterministic fake ID for a loadout weapon defIndex. Uses 0x8000000000000000 prefix
    // to avoid collisions with real Steam IDs (which are < 2^56).
    uint64_t FakeIdForDef(uint16_t defIndex);

    // One-shot: resolve LootSchema + LootSOCache, inject all g_targets entries into SOCache.
    // Safe to call from InjectThread after LoadLoadout(). No-op if already started successfully.
    void Start();

    // Called from FrameStageNotify stage 6 before ProcessWeapon. Idempotent — re-injects any
    // items that were wiped by a server join.
    void EnsureAllItems();
}