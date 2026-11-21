// n1ssan-dll / src/diagnostics/armory_status.cpp
// Publishes the Armory apply state as one small JSON file per session. The
// document is a snapshot, not a log: each slot keeps its latest state, and the
// counters count state changes so a read every second stays meaningful.

#include "diagnostics/armory_status.h"

#include "diagnostics/log.h"

#include <windows.h>
#include <cstdio>
#include <cstring>
#include <string>

namespace
{
    constexpr int kMaxSlots = 48;
    constexpr int kDetailCapacity = 140;
    constexpr uint64_t kWriteIntervalMs = 1000;

    struct SlotEntry
    {
        char team[4]{};
        char slot[24]{};
        uint16_t definition = 0;
        ArmoryStatus::State state = ArmoryStatus::State::Unknown;
        unsigned changes = 0;
        char detail[kDetailCapacity]{};
    };

    SlotEntry g_slots[kMaxSlots];
    int g_slotCount = 0;

    unsigned g_restores = 0;
    unsigned g_restoreTimeouts = 0;
    unsigned g_attachReadbackFailures = 0;
    unsigned g_skippedEntities = 0;
    unsigned g_drift = 0;
    bool g_driftRequested = false;
    uint64_t g_lastDigestMs = 0;

    struct OffsetReport
    {
        int checked = 0;
        int applied = 0;
        int unresolved = 0;
        bool coreTrusted = true;
        bool spawnTime = false;
    };

    OffsetReport g_offsets;

    bool g_dirty = false;
    bool g_anySlot = false;
    uint64_t g_lastWriteMs = 0;

    void CopyText(char* out, size_t capacity, const char* input)
    {
        if (!out || capacity == 0) return;
        out[0] = '\0';
        if (!input) return;

        size_t written = 0;
        while (*input && written + 1 < capacity)
        {
            const char c = *input++;
            // Quotes and backslashes would break the JSON document.
            out[written++] = (c == '"' || c == '\\') ? '\'' : c;
        }
        out[written] = '\0';
    }

    void NormalizeTeam(const char* input, char* out, size_t capacity)
    {
        if (!out || capacity < 3) return;

        if (!input || !*input)
        {
            CopyText(out, capacity, "?");
            return;
        }

        const char first = input[0];
        const char second = input[1];

        if ((first == 'c' || first == 'C') && (second == 't' || second == 'T'))
            CopyText(out, capacity, "CT");
        else if (first == 't' || first == 'T')
            CopyText(out, capacity, "T");
        else
            CopyText(out, capacity, "?");
    }

    SlotEntry* FindOrAddSlot(const char* team, const char* slot)
    {
        for (int i = 0; i < g_slotCount; ++i)
        {
            if (std::strcmp(g_slots[i].team, team) == 0 &&
                std::strcmp(g_slots[i].slot, slot) == 0)
                return &g_slots[i];
        }

        if (g_slotCount >= kMaxSlots)
            return nullptr;

        SlotEntry* entry = &g_slots[g_slotCount++];
        CopyText(entry->team, sizeof(entry->team), team);
        CopyText(entry->slot, sizeof(entry->slot), slot);
        return entry;
    }

    bool WriteDocument(const std::string& body)
    {
        const char* directory = StatusDirectoryPath();
        if (!directory || !*directory)
            return false;

        char target[MAX_PATH]{};
        if (sprintf_s(target, "%s\\armory-%lu.json", directory,
                static_cast<unsigned long>(GetCurrentProcessId())) <= 0)
            return false;

        char temporary[MAX_PATH]{};
        if (sprintf_s(temporary, "%s.tmp", target) <= 0)
            return false;

        HANDLE file = CreateFileA(temporary, GENERIC_WRITE, 0, nullptr,
            CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (file == INVALID_HANDLE_VALUE)
            return false;

        DWORD written = 0;
        const bool ok =
            WriteFile(file, body.data(), static_cast<DWORD>(body.size()),
                &written, nullptr) != 0 && written == body.size();
        CloseHandle(file);

        if (!ok)
        {
            DeleteFileA(temporary);
            return false;
        }

        if (!MoveFileExA(temporary, target,
                MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
        {
            DeleteFileA(temporary);
            return false;
        }

        return true;
    }
}

namespace ArmoryStatus
{
    const char* StateName(State state)
    {
        switch (state)
        {
        case State::Native:             return "native";
        case State::SavedSlot:          return "saved-slot";
        case State::NoSelection:        return "no-selection";
        case State::ForeignItem:        return "foreign-item";
        case State::DefinitionMismatch: return "definition-mismatch";
        case State::NoProjection:       return "no-projection";
        case State::NotOwned:           return "not-owned";
        case State::UnknownSlot:        return "unknown-slot";
        default:                        return "unknown";
        }
    }

    void NoteSlot(const char* team, const char* slot, uint16_t definition,
                  State state, const char* detail)
    {
        char normalizedTeam[4]{};
        NormalizeTeam(team, normalizedTeam, sizeof(normalizedTeam));

        char normalizedSlot[24]{};
        CopyText(normalizedSlot, sizeof(normalizedSlot),
            (slot && *slot) ? slot : "?");

        SlotEntry* entry = FindOrAddSlot(normalizedTeam, normalizedSlot);
        if (!entry)
            return;

        const bool wasPainted = entry->state == State::Native ||
            entry->state == State::SavedSlot;
        const bool nowPainted = state == State::Native || state == State::SavedSlot;

        // CS2 re-sending its own loadout is what strips a skin mid-match. Count
        // the transition once the slot is known, so the reconcile pass can react
        // and the UI can show whether the skin came back.
        if (wasPainted && !nowPainted && entry->changes > 0)
        {
            ++g_drift;
            g_driftRequested = true;
        }

        const bool changed = entry->state != state ||
            entry->definition != definition;

        entry->definition = definition;
        entry->state = state;
        CopyText(entry->detail, sizeof(entry->detail), detail);
        if (changed) ++entry->changes;

        g_anySlot = true;
        g_dirty = true;
    }

    void NoteRestore(int restored, int skipped, int failed, bool timedOut)
    {
        (void)restored;
        (void)skipped;
        (void)failed;

        ++g_restores;
        if (timedOut) ++g_restoreTimeouts;
        g_dirty = true;
    }

    void NoteAttachReadbackFailure()
    {
        ++g_attachReadbackFailures;
        g_dirty = true;
    }

    void NoteSkippedEntity()
    {
        ++g_skippedEntities;
        g_dirty = true;
    }

    void NoteOffsets(int checked, int applied, int unresolved,
                     bool coreTrusted, bool spawnTime)
    {
        g_offsets.checked = checked;
        g_offsets.applied = applied;
        g_offsets.unresolved = unresolved;
        g_offsets.coreTrusted = coreTrusted;
        g_offsets.spawnTime = spawnTime;
        g_dirty = true;
    }

    bool ConsumeDriftRequest()
    {
        if (!g_driftRequested)
            return false;

        g_driftRequested = false;
        return true;
    }

    void Tick()
    {
        if (!g_anySlot || !g_dirty)
            return;

        const uint64_t now = NowMs();
        if (g_lastWriteMs != 0 && now - g_lastWriteMs < kWriteIntervalMs)
            return;

        SYSTEMTIME utc{};
        GetSystemTime(&utc);

        char generatedAt[32]{};
        sprintf_s(generatedAt,
            "%04u-%02u-%02uT%02u:%02u:%02uZ",
            utc.wYear, utc.wMonth, utc.wDay,
            utc.wHour, utc.wMinute, utc.wSecond);

        std::string body;
        body.reserve(4096);
        body += "{\"protocol\":1,\"generatedAt\":\"";
        body += generatedAt;
        body += "\",\"processId\":";
        char number[32]{};
        sprintf_s(number, "%lu", static_cast<unsigned long>(GetCurrentProcessId()));
        body += number;
        body += ",\"buildId\":\"";
        body += BuildId();
        body += "\",\"slots\":[";

        for (int i = 0; i < g_slotCount; ++i)
        {
            const SlotEntry& entry = g_slots[i];
            if (i) body += ',';

            char slotJson[512]{};
            sprintf_s(slotJson, sizeof(slotJson),
                "{\"team\":\"%s\",\"slot\":\"%s\",\"definition\":%u,"
                "\"state\":\"%s\",\"changes\":%u,\"detail\":\"%s\"}",
                entry.team, entry.slot,
                static_cast<unsigned>(entry.definition),
                StateName(entry.state), entry.changes, entry.detail);
            body += slotJson;
        }

        body += "],\"counters\":{";

        char counters[256]{};
        sprintf_s(counters, sizeof(counters),
            "\"restores\":%u,\"restoreTimeouts\":%u,"
            "\"attachReadbackFailures\":%u,\"skippedEntities\":%u,"
            "\"drift\":%u",
            g_restores, g_restoreTimeouts,
            g_attachReadbackFailures, g_skippedEntities, g_drift);
        body += counters;

        char offsets[192]{};
        sprintf_s(offsets, sizeof(offsets),
            ",\"offsets\":{\"checked\":%d,\"applied\":%d,"
            "\"unresolved\":%d,\"coreTrusted\":%s,\"spawnTime\":%s}",
            g_offsets.checked, g_offsets.applied, g_offsets.unresolved,
            g_offsets.coreTrusted ? "true" : "false",
            g_offsets.spawnTime ? "true" : "false");
        body += offsets;
        body += "}";

        // One greppable line a minute replaces counting thousands of
        // [armory-apply] lines by hand when a session goes wrong.
        if (g_lastDigestMs == 0 || now - g_lastDigestMs >= 60000)
        {
            g_lastDigestMs = now;

            int painted = 0;
            for (int i = 0; i < g_slotCount; ++i)
            {
                if (g_slots[i].state == State::Native ||
                    g_slots[i].state == State::SavedSlot)
                    ++painted;
            }

            Log("[session-digest] slots=%d painted=%d drift=%u restores=%u "
                "timeouts=%u readback=%u skipped=%u offsetsUnresolved=%d build=%s",
                g_slotCount, painted, g_drift, g_restores, g_restoreTimeouts,
                g_attachReadbackFailures, g_skippedEntities,
                g_offsets.unresolved, BuildId());
        }

        if (WriteDocument(body))
        {
            g_dirty = false;
            g_lastWriteMs = now;
        }
    }
}
