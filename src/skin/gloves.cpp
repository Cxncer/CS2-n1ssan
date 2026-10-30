// n1ssan-dll / src/skin/gloves.cpp

#include "skin/gloves.h"
#include "sdk/functions.h"
#include "sdk/item_view.h"
#include "sdk/handles.h"
#include "sdk/entities.h"
#include "config/offsets.h"
#include "diagnostics/log.h"
#include "inventory/loadout.h"
#include "memory/access.h"

#include <atomic>
#include <string>

namespace
{
    constexpr uint16_t DEFAULT_T_GLOVES = 5028;
    constexpr uint16_t DEFAULT_CT_GLOVES = 5029;

    constexpr int      GLOVE_APPLY_FRAMES = 1;
    constexpr int      GLOVE_CLEAR_FRAMES = 2;
    constexpr uint64_t GLOVE_OWN_FLAG_FRAMES = 3;

    std::atomic_bool g_gloveForceUpdate{ true };

    uintptr_t g_lastPawnAddr = 0;
    uint16_t  g_lastGloveDef = 0;
    int       g_lastGlovePK = -1;
    int       g_lastGloveSeed = -1;
    float     g_lastGloveWear = -1.0f;
    float     g_lastGloveSpawnTime = -1.0f;
    uint8_t   g_lastGloveTeam = 0xFF;
    bool      g_appliedCustomGloves = false;

    int       g_gloveUpdateFrames = 0;
    int       g_gloveClearFrames = 0;
    uint64_t  g_gloveFrame = 0;
    uint64_t  g_gloveLastWriteFrame = 0;

    float     g_followUpSpawnTime = -1.0f;
    uint64_t  g_spawnSeenAt = 0;
    size_t    g_followUpIdx = 3;

    constexpr uint64_t GLOVE_FOLLOWUP_MS[] = { 400, 1200, 3000 };

    uint16_t GetDefaultGloveDef(uint8_t team)
    {
        if (team == 2) return DEFAULT_T_GLOVES;
        if (team == 3) return DEFAULT_CT_GLOVES;
        return 0;
    }

    bool IsDefaultGloveDef(uint16_t d)
    {
        return d == DEFAULT_T_GLOVES || d == DEFAULT_CT_GLOVES;
    }

    // Loadout stores slot as "gloves" (plural) in n1ssan-data.json.
    // Accept both forms so we don't silently miss the target.
    bool IsGloveSlot(const std::string& s)
    {
        return s == "glove" || s == "gloves";
    }


    void FlagGlovesForRebuild(uintptr_t pawn)
    {
        uint8_t beforeReapply = 0;
        uint8_t beforeChanged = 0;

        SafeReadU8(pawn + g_off.PAWN_NeedReapplyGloves, beforeReapply);
        SafeReadU8(pawn + g_off.PAWN_EconGlovesChanged, beforeChanged);

        SafeWriteU8(pawn + g_off.PAWN_NeedReapplyGloves, 1);
        SafeWriteU8(pawn + g_off.PAWN_EconGlovesChanged, 1);

        uint8_t afterReapply = 0;
        uint8_t afterChanged = 0;

        SafeReadU8(pawn + g_off.PAWN_NeedReapplyGloves, afterReapply);
        SafeReadU8(pawn + g_off.PAWN_EconGlovesChanged, afterChanged);

        Log("[glove-flags] pawn=%p reapply=%u->%u changed=%u->%u",
            (void*)pawn,
            beforeReapply, afterReapply,
            beforeChanged, afterChanged);
    }


    void ClearGloves(uintptr_t pawn, uintptr_t item)
    {
        EconAttr_Remove(item);
        SafeWriteU16(item + g_off.EIV_ItemDefIndex, 0);
        SafeWriteU8(item + g_off.EIV_Initialized, 0);
        FlagGlovesForRebuild(pawn);
    }

    bool ReadPaintKitName(uintptr_t paintKit, char* out, size_t cap)
    {
        if (!paintKit || !out || cap < 2)
            return false;

        out[0] = '\0';

        uintptr_t namePtr = 0;
        if (!SafeReadQword(paintKit + 0x08, namePtr) || !namePtr)
            return false;

        __try
        {
            for (size_t i = 0; i < cap - 1; ++i)
            {
                char c = *reinterpret_cast<const char*>(namePtr + i);
                out[i] = c;

                if (c == '\0')
                    return i > 0;
            }

            out[cap - 1] = '\0';
            return false;
        }
        __except (1)
        {
            out[0] = '\0';
            return false;
        }
    }


    static void LogGloveAttributes(uintptr_t item, const char* stage)
    {
        AttributeVector_t* vec = GetAttributeVector(item);

        if (!vec || vec->size < 0 || vec->size > 64 ||
            vec->data < 0x10000)
        {
            Log("[glove-attrs] stage=%s item=%p invalid vector "
                "size=%d data=%p",
                stage, (void*)item,
                vec ? vec->size : -1,
                vec ? (void*)vec->data : nullptr);
            return;
        }

        Log("[glove-attrs] stage=%s item=%p size=%d data=%p",
            stage, (void*)item, vec->size, (void*)vec->data);

        for (int i = 0; i < vec->size; ++i)
        {
            uintptr_t entry = vec->data +
                static_cast<uintptr_t>(i) * sizeof(EconItemAttribute_t);

            uint16_t defIndex = 0;
            float value = 0.0f;
            float initialValue = 0.0f;

            if (!SafeReadU16(entry + 0x30, defIndex) ||
                !SafeReadFloat(entry + 0x34, value) ||
                !SafeReadFloat(entry + 0x38, initialValue))
            {
                Log("[glove-attrs] stage=%s index=%d read failed",
                    stage, i);
                continue;
            }

            if (defIndex == ATTR_PAINT ||
                defIndex == ATTR_SEED ||
                defIndex == ATTR_WEAR)
            {
                Log("[glove-attrs] stage=%s index=%d def=%u "
                    "value=%.6f initial=%.6f",
                    stage, i, defIndex, value, initialValue);
            }
        }
    }


    bool GloveApply(uintptr_t pawn, uintptr_t item, uint16_t def, int pk, int seed, float wear)
    {
        if (!pawn || !item || def == 0)
        {
            Log("[glove] apply: guard fail (pawn=%p item=%p def=%u)", (void*)pawn, (void*)item, def);
            return false;
        }
        if (!pGloveSetBodyGroup)
        {
            Log("[glove] apply: pGloveSetBodyGroup null");
            return false;
        }

        SafeWriteU16(item + g_off.EIV_ItemDefIndex, def);
        SafeWriteI32(item + g_off.EIV_EntityQuality, 3);

        EconAttr_Remove(item);

        if (pk > 0)
        {
            EconAttr_Create(item, pk, wear, seed, -1);
            AttributeVector_t* post = GetAttributeVector(item);
            Log("[glove-post] team item=%p def=%u pk=%d size=%d data=%p alloc=%d",
                (void*)item, def, pk,
                post ? post->size : -1,
                post ? (void*)post->data : nullptr,
                post ? post->allocationCount : -1);
            LogGloveAttributes(item, "after-create");

            if (pGloveCreatePaintKit)
            {
                __try
                {
                    void* result = pGloveCreatePaintKit((void*)item);

                    char name[128]{};
                    bool nameOk = result && ReadPaintKitName(
                        reinterpret_cast<uintptr_t>(result),
                        name, sizeof(name));

                    Log("[glove-paintkit] pk=%d result=%p "
                        "nameOk=%d name=\"%s\"",
                        pk, result, nameOk, name);
                }
                __except (1)
                {
                    Log("[glove] apply: GloveCreatePaintKit threw");
                    SafeWriteU8(item + g_off.EIV_Initialized, 1);
                    return false;
                }
            }
            else
            {
                Log("[glove-paintkit] function NULL for pk=%d", pk);
            }

        }

        SafeWriteU32(item + g_off.EIV_ItemIDHigh,
            IsDefaultGloveDef(def) ? 0u : 0xFFFFFFFFu);

        uint32_t ctrlHandle = (uint32_t)ReadHandle(pawn, g_off.PAWN_hController);
        if (HandleValid(ctrlHandle))
        {
            uintptr_t ctrl = GetEntityByHandle(ctrlHandle);
            if (ctrl)
            {
                uint64_t steamId = 0;
                if (SafeReadQword(ctrl + g_off.CTRL_SteamID, steamId))
                    SafeWriteU32(item + g_off.EIV_AccountID, (uint32_t)steamId);
            }
        }

        SafeWriteU8(item + g_off.EIV_Initialized, 1);
        SafeWriteU8(item + g_off.EIV_DisallowSOC, 0);
        SafeWriteU8(item + g_off.EIV_RestoreCustom, 1);

        bool bodyGroupOk = false;
        __try
        {
            pGloveSetBodyGroup((void*)pawn, "first_or_third_person", 1);
            bodyGroupOk = true;
        }
        __except (1)
        {
            Log("[glove] apply: GloveSetBodyGroup threw");
            bodyGroupOk = false;
        }
        if (!bodyGroupOk) return false;

        FlagGlovesForRebuild(pawn);
        return true;
    }
}


void RunGloves(uintptr_t pawn)
{
    ++g_gloveFrame;

    if (!pawn) return;

    int32_t hp = 0;
    if (!SafeReadI32(pawn + g_off.PAWN_Health, hp) || hp <= 0) return;

    uintptr_t item = pawn + g_off.PAWN_EconGloves;

    // ---- diagnostics: once, but not one-shot ----
    static bool g_dumped = false;
    if (!g_dumped) {
        g_dumped = true;
        uintptr_t vt = 0;
        SafeReadQword(item + 0x00, vt);
        uint16_t def = 0;
        SafeReadU16(item + g_off.EIV_ItemDefIndex, def);
        uint8_t init = 0;
        SafeReadU8(item + g_off.EIV_Initialized, init);
        int32_t quality = 0;
        SafeReadI32(item + g_off.EIV_EntityQuality, quality);
        uint32_t attrCount = 0;
        SafeReadU32(item + g_off.EIV_AttributeList + 0x00, attrCount);
        Log("[glove] first item=0x%p vtable=0x%p def=%u init=%d quality=%d attrCount=%u",
            (void*)item, (void*)vt, def, init, quality, attrCount);
    }

    uint8_t team = 0;
    SafeReadU8(pawn + g_off.PAWN_TeamNum, team);

    uint8_t team3BC = 0;
    SafeReadU8(pawn + 0x3BC, team3BC);

    static uint8_t lastLoggedTeam = 0xFF;
    static int lastLoggedEnabled = -1;

    if (team != lastLoggedTeam || (int)g_enabled != lastLoggedEnabled)
    {
        Log("[glove-diag] pawn=%p team@3E7=%u team@3BC=%u "
            "offset=0x%llX enabled=%d",
            (void*)pawn,
            team,
            team3BC,
            (unsigned long long)g_off.PAWN_TeamNum,
            (int)g_enabled);

        lastLoggedTeam = team;
        lastLoggedEnabled = (int)g_enabled;
    }

    float spawnTime = -1.0f;
    SafeReadFloat(pawn + g_off.PAWN_SpawnTime, spawnTime);

    uint64_t now = NowMs();

    // ---- desired state ----
    uint16_t desiredDef = 0;
    int pk = 0, seed = 0;
    float wear = 0.0001f;

    uint16_t customGloveDef = 0;
    for (auto& [k, t] : g_targets)
    {
        if (!IsGloveSlot(t.slot)) continue;

        const bool teamMatch =
            (t.team == "T" && team == 2) ||
            (t.team == "CT" && team == 3);

        if (!teamMatch) continue;

        customGloveDef = t.defIndex;
        pk = t.paintKit;
        seed = t.resolvedSeed;
        wear = t.wear;
        break;
    }

    const bool customSelection = g_enabled && customGloveDef != 0;

    if (customSelection)
    {
        desiredDef = customGloveDef;
    }
    else
    {
        if (!g_appliedCustomGloves) return;

        desiredDef = GetDefaultGloveDef(team);
        if (desiredDef == 0) return;
    }

    // ---- detect changes ----
    const bool pawnChanged =
        g_lastPawnAddr != 0 && pawn != g_lastPawnAddr;

    const bool configChanged =
        desiredDef != g_lastGloveDef ||
        pk != g_lastGlovePK ||
        seed != g_lastGloveSeed ||
        wear != g_lastGloveWear;

    const bool teamChanged =
        g_lastGloveTeam != 0xFF && team != g_lastGloveTeam;

    const bool spawnChanged =
        spawnTime != g_lastGloveSpawnTime;

    uint8_t needReapply = 0;
    SafeReadU8(pawn + g_off.PAWN_NeedReapplyGloves, needReapply);

    const bool flagRaisedByGame =
        needReapply &&
        (g_gloveFrame - g_gloveLastWriteFrame) > GLOVE_OWN_FLAG_FRAMES;

    uint32_t idHigh = 0;
    SafeReadU32(item + g_off.EIV_ItemIDHigh, idHigh);

    const bool idLost =
        !IsDefaultGloveDef(desiredDef) &&
        idHigh != 0xFFFFFFFFu;

    uint16_t curDef = 0;
    SafeReadU16(item + g_off.EIV_ItemDefIndex, curDef);

    uint8_t initialized = 0;
    SafeReadU8(item + g_off.EIV_Initialized, initialized);

    const bool engineReset =
        customSelection &&
        (curDef != desiredDef ||
            !initialized ||
            idLost ||
            flagRaisedByGame);

    // ---- spawn follow-ups ----
    bool followUp = false;

    if (spawnTime != g_followUpSpawnTime)
    {
        g_followUpSpawnTime = spawnTime;
        g_spawnSeenAt = now;
        g_followUpIdx = 0;
    }

    // TEMP DIAGNOSTIC: disable timed reapplication.
// We want to observe the engine after the initial glove write.
    followUp = false;

    const bool forced =
        g_gloveForceUpdate.exchange(false, std::memory_order_acq_rel);

    // ---- diagnostic: all trigger variables are now initialized ----
    Log("[glove-trigger] pawnChanged=%d configChanged=%d teamChanged=%d "
        "spawnChanged=%d engineReset=%d followUp=%d forced=%d "
        "frames=%d curDef=%u desiredDef=%u initialized=%u idHigh=0x%X",
        pawnChanged, configChanged, teamChanged, spawnChanged,
        engineReset, followUp, forced, g_gloveUpdateFrames,
        curDef, desiredDef, initialized, idHigh);

    if (teamChanged)
        g_gloveClearFrames = GLOVE_CLEAR_FRAMES;

    // ---- schedule update ----
    if (pawnChanged || configChanged || teamChanged || spawnChanged ||
        engineReset || followUp || forced)
    {
        g_gloveUpdateFrames = GLOVE_APPLY_FRAMES;
    }


    // ---- TEMP TEST: bypass team-switch clearing ----
    // Preserve the existing glove item during the team transition.
    // Do not call ClearGloves() or return early here.
    if (g_gloveClearFrames > 0)
    {
        --g_gloveClearFrames;
    }


    // ---- apply burst ----
    if (g_gloveUpdateFrames <= 0) return;

    if (!GloveApply(pawn, item, desiredDef, pk, seed, wear))
    {
        g_gloveUpdateFrames = 0;
        Log("[glove] apply FAILED (def=%u pk=%d)", desiredDef, pk);
        return;
    }

    static uint16_t lastLoggedDef = 0;
    static int lastLoggedPK = -1;

    if (desiredDef != lastLoggedDef ||
        pk != lastLoggedPK ||
        team != lastLoggedTeam)
    {
        Log("[glove] APPLIED def=%u pk=%d team=%u",
            desiredDef, pk, team);

        lastLoggedDef = desiredDef;
        lastLoggedPK = pk;
        lastLoggedTeam = team;
    }

    g_gloveLastWriteFrame = g_gloveFrame;
    --g_gloveUpdateFrames;

    g_lastPawnAddr = pawn;
    g_lastGloveDef = desiredDef;
    g_lastGlovePK = pk;
    g_lastGloveSeed = seed;
    g_lastGloveWear = wear;
    g_lastGloveSpawnTime = spawnTime;
    g_lastGloveTeam = team;
    g_appliedCustomGloves = customSelection;
}


void ForceGloveUpdate()
{
    g_gloveForceUpdate.store(true, std::memory_order_release);
}

void ResetGloves()
{
    g_gloveForceUpdate.store(true, std::memory_order_release);

    g_lastPawnAddr = 0;
    g_lastGloveDef = 0;
    g_lastGlovePK = -1;
    g_lastGloveSeed = -1;
    g_lastGloveWear = -1.0f;
    g_lastGloveSpawnTime = -1.0f;
    g_lastGloveTeam = 0xFF;
    g_appliedCustomGloves = false;

    g_gloveUpdateFrames = 0;
    g_gloveClearFrames = 0;
    g_gloveFrame = 0;
    g_gloveLastWriteFrame = 0;

    g_followUpSpawnTime = -1.0f;
    g_spawnSeenAt = 0;
    g_followUpIdx = 3;
}