// n1ssan-dll / src/skin/agents.cpp
// Applies the Armory agent assignment to the local player model.

#include "skin/agents.h"

#include "config/offsets.h"
#include "diagnostics/log.h"
#include "hooks/frame_stage.h"
#include "inventory/armory_inventory.h"
#include "inventory/loadout.h"
#include "inventory/runtime_mode.h"
#include "memory/access.h"
#include "skin/apply.h"
#include "skin/glove_model_refresh.h"

#include <string>

namespace
{
    enum class AgentLogState
    {
        None,
        NoAssignment,
        NoModel,
        ApplyRefused,
        Applied
    };

    // The pawn model is only reset by the game on spawn, so a successful apply
    // is remembered per (pawn, team, spawn time, definition) instead of retried
    // every frame.
    std::uintptr_t g_lastPawn = 0;
    std::uint8_t g_lastTeam = 0xFF;
    float g_lastSpawnTime = -1.0f;
    std::uint16_t g_lastDefinition = 0;

    void LogAgent(
        AgentLogState state,
        std::uint8_t team,
        std::uint16_t definition,
        const std::string& detail)
    {
        static AgentLogState lastState = AgentLogState::None;
        static std::uint8_t lastTeam = 0xFF;
        static std::uint16_t lastDefinition = 0;

        if (state == lastState && team == lastTeam &&
            definition == lastDefinition)
            return;

        lastState = state;
        lastTeam = team;
        lastDefinition = definition;

        const char* teamLabel =
            (team == 2) ? "T" : (team == 3) ? "CT" : "unknown";

        switch (state)
        {
        case AgentLogState::NoAssignment:
            Log("[armory-agent] nothing applied team=%s (%s)",
                teamLabel, detail.c_str());
            break;
        case AgentLogState::NoModel:
            Log("[armory-agent] no model for agent def=%u team=%s (%s)",
                definition, teamLabel, detail.c_str());
            break;
        case AgentLogState::ApplyRefused:
            Log("[armory-agent] model apply refused def=%u team=%s model=%s",
                definition, teamLabel, detail.c_str());
            break;
        case AgentLogState::Applied:
            Log("[armory-agent] applied def=%u team=%s model=%s",
                definition, teamLabel, detail.c_str());
            break;
        default:
            break;
        }
    }
}

void Agents::Run(std::uintptr_t pawn)
{
    if (RuntimeModeState::Current() != RuntimeMode::Armory)
        return;

    if (!pawn)
        return;

    std::int32_t health = 0;
    std::uint8_t team = 0;
    float spawnTime = 0.0f;

    // Without a resolved spawn-time field the spawn time stays 0: identical on
    // every call, so the agent is dressed once instead of being re-applied.
    if (!SafeReadI32(pawn + g_off.PAWN_Health, health) || health <= 0 ||
        !SafeReadU8(pawn + g_off.PAWN_TeamNum, team) ||
        (g_off.PAWN_SpawnTime &&
            !SafeReadFloat(pawn + g_off.PAWN_SpawnTime, spawnTime)))
        return;

    // A team change re-creates the pawn's model. Swapping the agent in that
    // window is where the 21:34 session (v4.8) died: the CT agent was applied
    // two frames before the game closed. The marker is left unset, so the agent
    // is applied as soon as the window ends.
    if (TeamSwitchSettling())
        return;

    TargetSkin target{};
    std::string detail;
    const ArmoryInventory::ArmoryMatch match =
        ArmoryInventory::ResolveTargetForSlot("agent", team, target, detail);

    if (match == ArmoryInventory::ArmoryMatch::None)
    {
        // Clearing the applied marker lets a later assignment be picked up
        // without waiting for a respawn.
        g_lastPawn = 0;
        g_lastDefinition = 0;
        LogAgent(AgentLogState::NoAssignment, team, 0, detail);
        return;
    }

    const bool alreadyApplied =
        pawn == g_lastPawn &&
        team == g_lastTeam &&
        spawnTime == g_lastSpawnTime &&
        target.defIndex == g_lastDefinition;

    if (alreadyApplied)
        return;

    std::string model;

    if (!ResolveDefinitionModelName(target.defIndex, model) || model.empty())
    {
        g_lastPawn = 0;
        g_lastDefinition = 0;
        LogAgent(AgentLogState::NoModel, team, target.defIndex, detail);
        return;
    }

    TraceSwitch("agent model swap");

    if (!GloveModelRefresh::ApplyAgentModel(
            reinterpret_cast<void*>(pawn), model.c_str()))
    {
        g_lastPawn = 0;
        g_lastDefinition = 0;
        LogAgent(AgentLogState::ApplyRefused, team, target.defIndex, model);
        return;
    }

    g_lastPawn = pawn;
    g_lastTeam = team;
    g_lastSpawnTime = spawnTime;
    g_lastDefinition = target.defIndex;

    LogAgent(AgentLogState::Applied, team, target.defIndex, model);
}
