#include "skin/gloves.h"

#include "config/offsets.h"
#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "memory/access.h"
#include "sdk/entities.h"
#include "sdk/functions.h"
#include "sdk/handles.h"
#include "sdk/item_view.h"
#include "skin/glove_attribute_manager.h"
#include "skin/glove_model_refresh.h"
#include "skin/glove_paintkit_schema.h"

#include <algorithm>
#include <iterator>
#include <string>

namespace
{
    constexpr std::uint16_t DEFAULT_T_GLOVES = 5028;
    constexpr std::uint16_t DEFAULT_CT_GLOVES = 5029;
    constexpr int APPLY_FRAMES = 4;
    constexpr int CLEAR_FRAMES = 2;
    constexpr std::uint64_t OWN_FLAG_FRAMES = 3;
    constexpr std::uint64_t FOLLOW_UP_DELAYS_MS[] = { 400, 1200, 3000 };

    bool g_appliedCustomGloves = false;
    bool g_appliedThisTick = false;

    std::uintptr_t g_lastPawn = 0;
    std::uint16_t g_lastDefinition = 0;
    int g_lastPaintKit = -1;
    int g_lastSeed = -1;
    float g_lastWear = -1.0f;
    float g_lastSpawnTime = -1.0f;
    std::uint8_t g_lastTeam = 0xFF;

    int g_updateFrames = 0;
    int g_clearFrames = 0;
    std::uint64_t g_frame = 0;
    std::uint64_t g_lastWriteFrame = 0;
    float g_followUpSpawnTime = -1.0f;
    std::uint64_t g_spawnSeenAt = 0;
    std::size_t g_followUpIndex = 0;

    std::uint16_t DefaultDefinition(std::uint8_t team)
    {
        if (team == 2) return DEFAULT_T_GLOVES;
        if (team == 3) return DEFAULT_CT_GLOVES;
        return 0;
    }

    bool IsDefaultDefinition(std::uint16_t definition)
    {
        return definition == DEFAULT_T_GLOVES || definition == DEFAULT_CT_GLOVES;
    }

    bool IsGloveSlot(const std::string& slot)
    {
        return slot == "glove" || slot == "gloves";
    }

    bool FlagForRebuild(std::uintptr_t pawn)
    {
        return SafeWriteU8(pawn + g_off.PAWN_NeedReapplyGloves, 1);
    }

    bool ClearGloveItem(std::uintptr_t pawn, std::uintptr_t item)
    {
        GloveAttributeManager::Remove(item);
        const bool definitionCleared =
            SafeWriteU16(item + g_off.EIV_ItemDefIndex, 0);
        const bool initializedCleared =
            SafeWriteU8(item + g_off.EIV_Initialized, 0);
        const bool rebuildRequested = FlagForRebuild(pawn);
        return definitionCleared && initializedCleared && rebuildRequested;
    }

    bool CallCreatePaintKit(std::uintptr_t item, int paintKit)
    {
        if (!pGloveCreatePaintKit || !item || paintKit <= 0)
            return false;

        void* result = nullptr;
        __try
        {
            result = pGloveCreatePaintKit(reinterpret_cast<void*>(item));
        }
        __except (1)
        {
            return false;
        }

        if (result)
            GlovePaintKitSchema::RepairGeneratedName(
                static_cast<GlovePaintKitRecord*>(result), paintKit);
        return result != nullptr;
    }

    bool ApplyGloveItem(
        std::uintptr_t pawn,
        std::uintptr_t item,
        std::uint16_t definition,
        int paintKit,
        int seed,
        float wear)
    {
        if (!pawn || !item || !definition || !pGloveSetBodyGroup)
            return false;
        if (paintKit > 0 && !pGloveCreatePaintKit)
            return false;

        if (!SafeWriteU16(item + g_off.EIV_ItemDefIndex, definition) ||
            !SafeWriteI32(item + g_off.EIV_EntityQuality, 3))
            return false;

        GloveAttributeManager::Remove(item);
        if (paintKit > 0)
        {
            if (!GloveAttributeManager::Create(item, paintKit, wear, seed))
                return false;
            if (!CallCreatePaintKit(item, paintKit))
                return false;
        }

        if (!SafeWriteU32(item + g_off.EIV_ItemIDHigh,
                IsDefaultDefinition(definition) ? 0u : 0xFFFFFFFFu))
            return false;

        std::uint32_t controllerHandle = 0;
        if (SafeReadU32(pawn + g_off.PAWN_hController, controllerHandle) &&
            HandleValid(controllerHandle))
        {
            const std::uintptr_t controller = GetEntityByHandle(controllerHandle);
            std::uint64_t steamId = 0;
            if (controller && SafeReadQword(controller + g_off.CTRL_SteamID, steamId))
                SafeWriteU32(item + g_off.EIV_AccountID,
                    static_cast<std::uint32_t>(steamId & 0xFFFFFFFFull));
        }

        if (!SafeWriteU8(item + g_off.EIV_Initialized, 1) ||
            !SafeWriteU8(item + g_off.EIV_DisallowSOC, 0) ||
            !SafeWriteU8(item + g_off.EIV_RestoreCustom, 1))
            return false;

        bool bodyGroupApplied = false;
        __try
        {
            pGloveSetBodyGroup(reinterpret_cast<void*>(pawn),
                "first_or_third_person", 1);
            bodyGroupApplied = true;
        }
        __except (1)
        {
            bodyGroupApplied = false;
        }

        if (!bodyGroupApplied)
            return false;

        return FlagForRebuild(pawn);
    }

    void ConstructPaintKit(std::uintptr_t item)
    {
        if (!pGloveCreatePaintKit || !item)
            return;
        __try
        {
            pGloveCreatePaintKit(reinterpret_cast<void*>(item));
        }
        __except (1)
        {
        }
    }
}

void RunGloves(std::uintptr_t pawn)
{
    ++g_frame;
    g_appliedThisTick = false;

    if (!pawn)
        return;

    std::int32_t health = 0;
    if (!SafeReadI32(pawn + g_off.PAWN_Health, health) || health <= 0)
        return;

    const std::uintptr_t item = pawn + g_off.PAWN_EconGloves;
    std::uint8_t team = 0;
    float spawnTime = 0.0f;
    if (!SafeReadU8(pawn + g_off.PAWN_TeamNum, team) ||
        !SafeReadFloat(pawn + g_off.PAWN_SpawnTime, spawnTime))
        return;

    // Adapt the standalone runtime's per-team config to N1ssan's JSON loadout.
    std::uint16_t definition = 0;
    int paintKit = 0;
    int seed = 0;
    float wear = 0.0001f;
    for (const auto& [key, target] : g_targets)
    {
        (void)key;
        if (!IsGloveSlot(target.slot))
            continue;
        if (!((target.team == "T" && team == 2) ||
              (target.team == "CT" && team == 3)))
            continue;

        definition = target.defIndex;
        paintKit = target.paintKit;
        seed = (std::clamp)(target.resolvedSeed, 0, 1000);
        wear = (std::clamp)(target.wear, 0.0001f, 1.0f);
        break;
    }

    const bool customSelection = g_enabled && definition != 0;
    if (!customSelection)
    {
        if (!g_appliedCustomGloves)
            return;
        definition = DefaultDefinition(team);
        if (!definition)
            return;
        paintKit = 0;
        seed = 0;
        wear = 0.0001f;
    }

    std::uint16_t currentDefinition = 0;
    SafeReadU16(item + g_off.EIV_ItemDefIndex, currentDefinition);
    if (customSelection && paintKit > 0 && currentDefinition == definition)
        ConstructPaintKit(item);

    const std::uint64_t now = NowMs();
    const bool configChanged = definition != g_lastDefinition ||
        paintKit != g_lastPaintKit || seed != g_lastSeed || wear != g_lastWear;
    const bool teamChanged = g_lastTeam != 0xFF && team != g_lastTeam;
    const bool pawnChanged = pawn != g_lastPawn;
    const bool spawnChanged = spawnTime != g_lastSpawnTime;

    std::uint8_t needReapply = 0;
    std::uint8_t initialized = 0;
    std::uint32_t itemIdHigh = 0;
    SafeReadU8(pawn + g_off.PAWN_NeedReapplyGloves, needReapply);
    SafeReadU8(item + g_off.EIV_Initialized, initialized);
    SafeReadU32(item + g_off.EIV_ItemIDHigh, itemIdHigh);

    const bool flagRaisedByGame = needReapply &&
        g_frame - g_lastWriteFrame > OWN_FLAG_FRAMES;
    const std::uint32_t expectedIdHigh =
        IsDefaultDefinition(definition) ? 0u : 0xFFFFFFFFu;
    const bool itemWasReset = customSelection &&
        (currentDefinition != definition || !initialized ||
         itemIdHigh != expectedIdHigh || flagRaisedByGame);

    if (spawnTime != g_followUpSpawnTime)
    {
        g_followUpSpawnTime = spawnTime;
        g_spawnSeenAt = now;
        g_followUpIndex = 0;
    }

    bool followUp = false;
    if (customSelection && g_followUpIndex < std::size(FOLLOW_UP_DELAYS_MS) &&
        now - g_spawnSeenAt >= FOLLOW_UP_DELAYS_MS[g_followUpIndex])
    {
        followUp = true;
        ++g_followUpIndex;
    }

    if (teamChanged)
    {
        g_clearFrames = CLEAR_FRAMES;
        g_lastTeam = team;
        GloveModelRefresh::Request();
    }

    if (configChanged || teamChanged || pawnChanged || spawnChanged ||
        itemWasReset || followUp)
        g_updateFrames = APPLY_FRAMES;

    if (g_clearFrames > 0)
    {
        if (!ClearGloveItem(pawn, item))
        {
            Log("[glove-runtime] clear failed");
            g_clearFrames = 0;
            return;
        }
        g_lastWriteFrame = g_frame;
        --g_clearFrames;
        g_lastDefinition = 0;
        g_lastPaintKit = -1;
        g_lastSeed = -1;
        g_lastWear = -1.0f;
        g_lastTeam = team;
        return;
    }

    if (g_updateFrames <= 0)
        return;

    if (!ApplyGloveItem(pawn, item, definition, paintKit, seed, wear))
    {
        Log("[glove-runtime] apply failed def=%u paint=%d", definition, paintKit);
        g_updateFrames = 0;
        return;
    }

    g_appliedThisTick = true;
    g_lastWriteFrame = g_frame;
    --g_updateFrames;
    g_lastPawn = pawn;
    g_lastDefinition = definition;
    g_lastPaintKit = paintKit;
    g_lastSeed = seed;
    g_lastWear = wear;
    g_lastSpawnTime = spawnTime;
    g_lastTeam = team;
    g_appliedCustomGloves = customSelection;
}

void ResetGloves()
{
    g_appliedCustomGloves = false;
    g_appliedThisTick = false;
    g_lastPawn = 0;
    g_lastDefinition = 0;
    g_lastPaintKit = -1;
    g_lastSeed = -1;
    g_lastWear = -1.0f;
    g_lastSpawnTime = -1.0f;
    g_lastTeam = 0xFF;
    g_updateFrames = 0;
    g_clearFrames = 0;
    g_frame = 0;
    g_lastWriteFrame = 0;
    g_followUpSpawnTime = -1.0f;
    g_spawnSeenAt = 0;
    g_followUpIndex = 0;
}

bool GloveAppliedThisTick()
{
    return g_appliedThisTick;
}
