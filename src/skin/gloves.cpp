#include "skin/gloves.h"

#include "config/offsets.h"
#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "inventory/armory_inventory.h"
#include "inventory/runtime_mode.h"
#include "memory/access.h"
#include "sdk/entities.h"
#include "sdk/functions.h"
#include "sdk/handles.h"
#include "sdk/item_view.h"
#include "skin/glove_attribute_manager.h"
#include "skin/glove_model_refresh.h"
#include "skin/glove_paintkit_schema.h"
#include "hooks/lineup.h"

#include <algorithm>
#include <cstdio>
#include <cstring>
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
    constexpr std::uint64_t VERIFY_INTERVAL_MS = 1000;

    // Repairs of a glove model whose paint request never leaves step 0. A few
    // tries after a change, not a loop: the request only has to be freed once.
    constexpr std::size_t GLOVE_MATERIAL_REPAIRS = 4;
    constexpr std::uint64_t GLOVE_MATERIAL_REPAIR_MS = 400;

    // The stuck request is not a one-off after a change: on CT the in-match glove
    // paint request can be re-created mid-round (round restart, HUD rebuild) and
    // then sits at step 0 until something kicks it. RepairGloveMaterials returns
    // immediately when nothing is waiting, so it can run as a slow upkeep - this
    // is the "CT gloves render default for a round, then come back" report.
    constexpr std::uint64_t GLOVE_MATERIAL_UPKEEP_MS = 1500;

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
    std::uint64_t g_lastVerifyMs = 0;
    std::size_t g_materialRepairsLeft = 0;
    std::uint64_t g_lastMaterialRepairMs = 0;

    // Spawn-time guard. On this build the field can hold a nonsense value (the
    // log showed 1.4e34) or a number that climbs every frame. Treating either as
    // "respawning" re-armed APPLY_FRAMES on every frame, so every weapon model
    // was rebuilt continuously - the stutter, the flickering stickers and the
    // second charm hanging on the gun all come from that loop.
    bool g_spawnTimeTrusted = true;

    // Moves seen on the current pawn. A pawn keeps one spawn time for its whole
    // life, so more than two moves means the field is not a spawn time.
    std::uintptr_t g_spawnMovePawn = 0;
    int g_spawnMovesForPawn = 0;

    // Last gloves actually written, for GloveIdentityChangedThisTick().
    std::uint16_t g_appliedDefinition = 0;
    std::uint8_t g_appliedTeam = 0xFF;
    bool g_identityChanged = false;

    // 0 = dead, 1 = alive, 0xFF = not known yet. Death -> alive is the respawn
    // signal this build can trust; the spawn-time field cannot provide it.
    std::uint8_t g_lastHealth = 0xFF;

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

    // True when the glove view no longer carries the paint kit it was given. CS2
    // can drop those attributes while the definition, the item id and its own
    // reapply flag all still look right (round restart, respawn, the stage-6 model
    // refresh), so none of the reset checks notice and the gloves render default.
    // Three loads, so a slow heartbeat is enough to catch it.
    bool PaintKitMissing(std::uintptr_t item, int paintKit)
    {
        AttributeVector_t* vector = GetAttributeVector(item);

        if (!vector || vector->size <= 0 || vector->size > 512 || !vector->data)
            return true;

        auto* attributes = reinterpret_cast<EconItemAttribute_t*>(vector->data);

        for (int i = 0; i < vector->size; ++i)
        {
            if (attributes[i].defIndex != ATTR_PAINT)
                continue;

            return static_cast<int>(attributes[i].value) != paintKit;
        }

        return true;
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

        // A kit whose name isn't in the game's paint kit map keeps whatever name
        // the generated record carried, and the material for it never resolves
        // (the glove model then waits forever - black beads). Logged once a kit.
        static int lastReportedKit = -1;

        if (result)
        {
            const char* expected = GlovePaintKitSchema::GetName(paintKit);
            const bool repaired = GlovePaintKitSchema::RepairGeneratedName(
                static_cast<GlovePaintKitRecord*>(result), paintKit);

            if (paintKit != lastReportedKit)
            {
                lastReportedKit = paintKit;

                const char* generated =
                    static_cast<GlovePaintKitRecord*>(result)->m_Name;

                Log("[gloves] paint kit %d: schema name %s (%s), generated \"%s\"",
                    paintKit, expected ? expected : "MISSING",
                    repaired ? "applied" : "not applied",
                    generated ? generated : "");
            }
        }
        else if (paintKit != lastReportedKit)
        {
            lastReportedKit = paintKit;
            Log("[gloves] paint kit %d: no record generated", paintKit);
        }

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

    // RunGloves executes every frame, so Armory resolution is reported once per
    // change instead of per tick.
    void LogArmoryGloves(
        ArmoryInventory::ArmoryMatch match,
        std::uint8_t team,
        std::uint16_t definition,
        const std::string& detail)
    {
        static int lastMatch = -1;
        static std::uint8_t lastTeam = 0xFF;
        static std::uint16_t lastDefinition = 0;

        const int current = static_cast<int>(match);
        if (current == lastMatch && team == lastTeam &&
            definition == lastDefinition)
            return;

        lastMatch = current;
        lastTeam = team;
        lastDefinition = definition;

        const char* teamLabel =
            (team == 2) ? "T" : (team == 3) ? "CT" : "unknown";

        if (match == ArmoryInventory::ArmoryMatch::None)
        {
            Log("[armory-gloves] nothing applied team=%s (%s)",
                teamLabel, detail.c_str());
            return;
        }

        Log("[armory-gloves] applied def=%u team=%s (%s)",
            definition, teamLabel, detail.c_str());
    }
}

void RunGloves(std::uintptr_t pawn)
{
    ++g_frame;
    g_appliedThisTick = false;
    g_identityChanged = false;

    if (!pawn)
        return;

    std::int32_t health = 0;
    if (!SafeReadI32(pawn + g_off.PAWN_Health, health))
        return;

    if (health <= 0)
    {
        g_lastHealth = 0;
        return;
    }

    // A respawn puts CS2's own (default) gloves back on the skeleton while the
    // glove item view still looks applied, so nothing else here notices and the
    // custom gloves stay gone for the round - the "CT gloves disappear from
    // round 3" report. Health leaving zero is the one respawn signal that held
    // up in the log, so it re-arms the apply.
    const bool respawned = g_lastHealth == 0;
    g_lastHealth = 1;

    const std::uintptr_t item = pawn + g_off.PAWN_EconGloves;
    std::uint8_t team = 0;
    float spawnTime = 0.0f;
    // An unresolved spawn-time field leaves the value at 0, so the gloves are
    // treated as not respawned rather than being rebuilt on every call.
    if (!SafeReadU8(pawn + g_off.PAWN_TeamNum, team) ||
        (g_off.PAWN_SpawnTime &&
            !SafeReadFloat(pawn + g_off.PAWN_SpawnTime, spawnTime)))
        return;

    // Only a plausible, stable spawn time may count as a respawn. A garbage or
    // constantly moving value is replaced by the last good one so it can never
    // drive the apply loop.
    const bool spawnTimeSane = spawnTime > 0.0f && spawnTime < 10000000.0f;

    if (!spawnTimeSane)
    {
        spawnTime = g_lastSpawnTime;
    }
    else if (spawnTime != g_lastSpawnTime)
    {
        // Counted per pawn instead of in a two-second burst: the field on this
        // build moves every ~80 seconds, so the old burst guard never tripped and
        // every move re-armed the apply - and, through that, wiped the weapon
        // model cache for the whole loadout.
        if (g_spawnMovePawn != pawn)
        {
            g_spawnMovePawn = pawn;
            g_spawnMovesForPawn = 0;
        }

        if (++g_spawnMovesForPawn > 2)
        {
            if (g_spawnTimeTrusted)
                Log("[glove-runtime] spawn time keeps moving (%.2f) - ignoring it for this session",
                    spawnTime);

            g_spawnTimeTrusted = false;
        }

        if (!g_spawnTimeTrusted)
            spawnTime = g_lastSpawnTime;
    }

    // In Armory mode the pawn's native glove view can never name an owned
    // instance: this function is the only writer of that view. The equipment
    // assignment for the team's gloves slot is the source of truth instead.
    const bool armoryMode =
        RuntimeModeState::Current() == RuntimeMode::Armory;

    std::uint16_t definition = 0;
    int paintKit = 0;
    int seed = 0;
    float wear = 0.0001f;

    if (armoryMode)
    {
        TargetSkin target{};
        std::string detail;
        const ArmoryInventory::ArmoryMatch match =
            ArmoryInventory::ResolveTargetForSlot("gloves", team, target, detail);

        if (match != ArmoryInventory::ArmoryMatch::None)
        {
            definition = target.defIndex;
            paintKit = target.paintKit;
            seed = (std::clamp)(target.resolvedSeed, 0, 1000);
            wear = (std::clamp)(target.wear, 0.0001f, 1.0f);
        }

        LogArmoryGloves(match, team, target.defIndex, detail);
    }
    else
    {
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
    }

    const bool customSelection = (armoryMode || g_enabled) && definition != 0;
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

    if (respawned && customSelection)
        Log("[glove-runtime] respawn detected; re-applying gloves def=%u", definition);

    if (configChanged || teamChanged || pawnChanged || spawnChanged ||
        itemWasReset || followUp || respawned)
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

    // Heartbeat: while the custom gloves are selected, look once a second at the
    // view's paint kit. A missing kit means CS2 rebuilt the view behind us, which
    // is the "gloves went default mid-round" case, and it needs another apply.
    if (customSelection && paintKit > 0 && g_updateFrames <= 0 &&
        now - g_lastVerifyMs >= VERIFY_INTERVAL_MS)
    {
        g_lastVerifyMs = now;

        if (PaintKitMissing(item, paintKit))
        {
            Log("[glove-runtime] paint kit gone; re-applying def=%u paint=%d",
                definition, paintKit);
            g_updateFrames = APPLY_FRAMES;
        }
    }


    // Slow upkeep: while custom gloves are on and nothing is being written,
    // look at the glove model itself. The item view can be perfect while the
    // model draws plain - CS2 rebuilds that model on its own (agent swap, round
    // restart, respawn) and the rebuilt model does not always ask for its paint
    // again, which is the gloves that don't render again until something else
    // happens to re-apply them.
    if (customSelection && paintKit > 0 && g_updateFrames <= 0 &&
        now - g_lastMaterialRepairMs >= GLOVE_MATERIAL_UPKEEP_MS)
    {
        g_lastMaterialRepairMs = now;

        char upkeepDetail[112]{};
        const int modelState = Lineup::EnsureGloveModel(pawn, upkeepDetail,
            sizeof(upkeepDetail));

        // One line per change of answer, not per upkeep: this runs every 1.5 s.
        static int lastModelState = -2;
        static char lastModelDetail[112]{};

        if (modelState != lastModelState ||
            std::strcmp(upkeepDetail, lastModelDetail) != 0)
        {
            lastModelState = modelState;
            std::snprintf(lastModelDetail, sizeof(lastModelDetail), "%s",
                upkeepDetail);

            Log("[glove-model] %s (state %d) team=%s",
                upkeepDetail[0] ? upkeepDetail : "painted", modelState,
                team == 2 ? "T" : "CT");
        }
    }

    // The glove model's paint request can sit at step 0 forever: the material
    // manager never polls a shared request, and on CT the in-match glove request
    // is exactly that. The item view then looks perfect while the gloves render
    // unpainted (or default), and rewriting it only makes another stuck request.
    // Free it and kick the manager - the repair the lineup screens already run
    // for the local gloves - a few times after a change, then leave it alone.
    if (customSelection && paintKit > 0 && g_materialRepairsLeft > 0 &&
        now - g_lastMaterialRepairMs >= GLOVE_MATERIAL_REPAIR_MS)
    {
        g_lastMaterialRepairMs = now;
        --g_materialRepairsLeft;

        char detail[96]{};

        if (Lineup::RepairGloveMaterials(pawn, detail, sizeof(detail)))
            Log("[glove-runtime] glove paint request freed and rebuilt (%s)",
                detail);
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
    g_identityChanged =
        g_appliedDefinition != definition ||
        (g_appliedTeam != 0xFF && g_appliedTeam != team);
    g_appliedDefinition = definition;
    g_appliedTeam = team;
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

    // Any re-apply can leave the model with a fresh, stuck paint request.
    if (configChanged || teamChanged || pawnChanged || respawned ||
        itemWasReset || followUp)
    {
        g_materialRepairsLeft = GLOVE_MATERIAL_REPAIRS;
        g_lastMaterialRepairMs = 0;
    }
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
    g_lastVerifyMs = 0;
    g_materialRepairsLeft = 0;
    g_lastMaterialRepairMs = 0;
    g_spawnTimeTrusted = true;
    g_spawnMovePawn = 0;
    g_spawnMovesForPawn = 0;
    g_appliedDefinition = 0;
    g_appliedTeam = 0xFF;
    g_identityChanged = false;
    g_lastHealth = 0xFF;
}

bool GloveAppliedThisTick()
{
    return g_appliedThisTick;
}

bool GloveIdentityChangedThisTick()
{
    return g_identityChanged;
}

// A lineup character's glove item: the same identity the in-match path writes,
// without the pawn half (body group, rebuild flag) - there is no pawn on those
// screens, and the character is built from this item.
bool DressGloveItemView(std::uintptr_t item, std::uint16_t definition,
                        int paintKit, int seed, float wear,
                        std::uint32_t accountId)
{
    if (!item || !definition)
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

        ConstructPaintKit(item);
    }

    // The gloves don't even change model without an owner: the changer's own
    // write carries the local account id.
    if (accountId)
        SafeWriteU32(item + g_off.EIV_AccountID, accountId);

    return SafeWriteU32(item + g_off.EIV_ItemIDHigh, 0xFFFFFFFFu) &&
           SafeWriteU8(item + g_off.EIV_Initialized, 1) &&
           SafeWriteU8(item + g_off.EIV_DisallowSOC, 0) &&
           SafeWriteU8(item + g_off.EIV_RestoreCustom, 1);
}
