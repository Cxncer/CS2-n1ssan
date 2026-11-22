// n1ssan-dll / src/skin/stattrak_counter.cpp
//
// StatTrak progress for Armory items.
//
// CS2 raises a StatTrak counter only on items the game server knows about: the
// number is the item's "kill eater" attribute, and the server increments it when
// its owner gets a kill. An Armory item lives only on this client, so nothing
// ever incremented it and the counter sat at zero however many kills were made.
// This module is the missing source: it watches the local player's own match
// kill count and adds every new kill to the weapon in their hands.
//
// Reading the count from the game rather than counting kills ourselves keeps it
// honest - a kill the server did not credit never becomes StatTrak progress.

#include "skin/stattrak_counter.h"
#include "config/auto_offsets.h"
#include "memory/scanner.h"

#include "config/offsets.h"
#include "diagnostics/log.h"
#include "inventory/armory_inventory.h"
#include "inventory/engine_schema_diagnostic.h"
#include "inventory/stattrak_kills.h"
#include "memory/access.h"
#include "sdk/entities.h"
#include "sdk/handles.h"
#include "sdk/item_view.h"
#include "skin/apply.h"

#include <cstdint>
#include <cstring>
#include <string>

namespace
{
    // Fallbacks for this build, used when the schema resolver cannot name the
    // field. The values come from the client schema of the current CS2 build.
    constexpr uintptr_t CTRL_ACTION_TRACKING_FALLBACK = 0x828;
    constexpr uintptr_t MATCH_STATS_FALLBACK           = 0xA8;
    constexpr uintptr_t MATCH_KILLS_FALLBACK           = 0x30;   // CSMatchStats_t::m_iKills

    uintptr_t g_lastPawn = 0;
    int g_lastKills = -1;
    uint64_t g_lastComplainMs = 0;
    uint64_t g_lastBaselineMs = 0;

    // The local player's controller. This is the same global the match detection
    // reads, so it is known to resolve on this build; the pawn's own controller
    // handle is only the fallback, because that handle is empty at exactly the
    // moment a match starts.
    uintptr_t LocalController()
    {
        static uintptr_t address = 0;

        if (!address)
        {
            const ModuleInfo client = GetClientModule();
            constexpr uintptr_t RVA_LOCAL_CONTROLLER = 0x253EEF8;

            address = AutoOffsets::g_localPlayerController
                ? AutoOffsets::g_localPlayerController
                : client.base + RVA_LOCAL_CONTROLLER;
        }

        uintptr_t controller = 0;

        if (!address || !SafeReadQword(address, controller) || controller < 0x10000)
            return 0;

        return controller;
    }

    struct KillSource
    {
        uintptr_t actionTracking = 0;
        uintptr_t matchStats = 0;
        uintptr_t kills = 0;
        bool resolved = false;
    };

    KillSource& Source()
    {
        static KillSource source;

        if (source.resolved)
            return source;

        source.resolved = true;

        // The classes and fields the game's schema actually declares. m_iKills
        // lives on CSPerRoundStats_t, which CSMatchStats_t derives from:
        // Lootline's name is tried first, the derived one second.
        uintptr_t offset = 0;
        const char* trackingFrom = "fallback";

        if (ResolveEngineSchemaField("CCSPlayerController",
                "m_pActionTrackingServices", offset) && offset)
        {
            source.actionTracking = offset;
            trackingFrom = "schema";
        }
        else
        {
            source.actionTracking = CTRL_ACTION_TRACKING_FALLBACK;
        }

        offset = 0;
        const char* statsFrom = "fallback";

        if (ResolveEngineSchemaField("CCSPlayerController_ActionTrackingServices",
                "m_matchStats", offset) && offset)
        {
            source.matchStats = offset;
            statsFrom = "schema";
        }
        else
        {
            source.matchStats = MATCH_STATS_FALLBACK;
        }

        offset = 0;
        const char* killsFrom = "fallback";

        if (ResolveEngineSchemaField("CSPerRoundStats_t", "m_iKills", offset) && offset)
        {
            source.kills = offset;
            killsFrom = "CSPerRoundStats_t";
        }
        else
        {
            offset = 0;

            if (ResolveEngineSchemaField("CSMatchStats_t", "m_iKills", offset) && offset)
            {
                source.kills = offset;
                killsFrom = "CSMatchStats_t";
            }
            else
            {
                source.kills = MATCH_KILLS_FALLBACK;
            }
        }

        Log("[stattrak] kill source: actionTracking=0x%llX (%s) matchStats=0x%llX (%s) kills=0x%llX (%s)",
            static_cast<unsigned long long>(source.actionTracking), trackingFrom,
            static_cast<unsigned long long>(source.matchStats), statsFrom,
            static_cast<unsigned long long>(source.kills), killsFrom);

        return source;
    }

    int FloatToInt(float value)
    {
        int32_t out = 0;
        std::memcpy(&out, &value, sizeof(out));
        return out;
    }

    float IntToFloat(int value)
    {
        float out = 0.0f;
        std::memcpy(&out, &value, sizeof(out));
        return out;
    }

    // Total kills the local player has been credited with this match, or -1 when
    // the controller cannot be read yet. `why` names the step that failed, so a
    // session that never counts can be diagnosed from its log.
    int ReadMatchKills(uintptr_t controller, const char*& why)
    {
        why = "no controller";

        if (!controller)
            return -1;

        const KillSource& source = Source();

        uintptr_t services = 0;
        why = "no action tracking";

        if (!SafeReadQword(controller + source.actionTracking, services) ||
            services < 0x10000)
        {
            // Report the raw slot so a wrong offset is visible in the log.
            SafeReadQword(controller + source.actionTracking, services);
            Log("[stattrak] controller=%p +0x%llX -> %p",
                (void*)controller,
                static_cast<unsigned long long>(source.actionTracking),
                (void*)services);
            return -1;
        }

        int32_t kills = 0;
        why = "no match stats";

        if (!SafeReadI32(services + source.matchStats + source.kills, kills))
            return -1;

        why = "implausible count";

        if (kills < 0 || kills > 500)
            return -1;

        return kills;
    }

    AttributeVector_t* AttributeVector(uintptr_t view, EconItemAttribute_t*& attributes)
    {
        attributes = nullptr;

        AttributeVector_t* vector = GetAttributeVector(view);

        if (!vector || vector->size <= 0 || vector->size > 512 || !vector->data)
            return nullptr;

        attributes = reinterpret_cast<EconItemAttribute_t*>(vector->data);
        return vector;
    }

    // The "kill eater" attribute of a StatTrak item as an integer, or -1 when the
    // item has none - which is how a non-StatTrak weapon is recognised.
    int ReadKillEater(uintptr_t view)
    {
        EconItemAttribute_t* attributes = nullptr;
        AttributeVector_t* vector = AttributeVector(view, attributes);

        if (!vector)
            return -1;

        for (int i = 0; i < vector->size; ++i)
            if (attributes[i].defIndex == ATTR_KILL_EATER)
                return FloatToInt(attributes[i].value);

        return -1;
    }

    // Writes the counter back into the attribute the game draws the number from.
    // Only the first "kill eater" is kept: a second one on the same item draws a
    // second StatTrak badge, which is the doubled badge the player saw.
    bool WriteKillEater(uintptr_t view, int kills)
    {
        EconItemAttribute_t* attributes = nullptr;
        AttributeVector_t* vector = AttributeVector(view, attributes);

        if (!vector)
            return false;

        bool written = false;

        for (int i = 0; i < vector->size; ++i)
        {
            if (attributes[i].defIndex != ATTR_KILL_EATER)
                continue;

            if (!written)
            {
                attributes[i].value = IntToFloat(kills);
                written = true;
                continue;
            }

            attributes[i].defIndex = 0;         // drop the duplicate
            attributes[i].value = 0.0f;
            attributes[i].initialValue = 0.0f;
        }

        return written;
    }

    uintptr_t ActiveWeapon(uintptr_t pawn)
    {
        uintptr_t services = 0;
        if (!SafeReadQword(pawn + g_off.PAWN_WeaponServices, services) ||
            services < 0x10000)
            return 0;

        uint32_t handle = 0;
        if (!SafeReadU32(services + g_off.WS_ActiveWeapon, handle) ||
            !HandleValid(handle))
            return 0;

        return GetEntityByHandle(handle);
    }

    // The Armory instance behind the live weapon, so the count can be saved.
    std::string InstanceForWeapon(uintptr_t view, uint8_t team)
    {
        uint16_t definition = 0;
        if (!SafeReadU16(view + g_off.EIV_ItemDefIndex, definition) || !definition)
            return {};

        TargetSkin target{};
        std::string detail;
        const ArmoryInventory::ArmoryMatch match =
            ArmoryInventory::ResolveTargetForWeapon(
                definition, team, IsKnifeDefinition(definition), target, detail);

        if (match == ArmoryInventory::ArmoryMatch::None || !target.statTrak)
            return {};

        return target.instanceId;
    }
}

namespace StatTrakCounter
{
    void Reset()
    {
        g_lastPawn = 0;
        g_lastKills = -1;
    }

    void Tick(std::uintptr_t pawn)
    {
        if (!pawn)
        {
            Reset();
            return;
        }

        // A new pawn (respawn, pawn rebuild) restarts the reading, not the match:
        // the controller keeps the total, so only the cached value is dropped.
        if (pawn != g_lastPawn)
        {
            g_lastPawn = pawn;
            g_lastKills = -1;
        }

        // The global first: it is valid from the first frame of a match, while
        // the pawn's controller handle can still be empty then.
        uintptr_t controller = LocalController();

        if (!controller)
        {
            uint32_t controllerHandle = 0;

            if (SafeReadU32(pawn + g_off.PAWN_hController, controllerHandle) &&
                HandleValid(controllerHandle))
                controller = GetEntityByHandle(controllerHandle);
        }

        const char* why = "";
        const int kills = ReadMatchKills(controller, why);

        const uint64_t now = NowMs();

        if (kills < 0)
        {
            // Rate-limited: a session where the game never exposes the count has
            // to say so, without filling the log every tick.
            if (now - g_lastComplainMs >= 20000)
            {
                g_lastComplainMs = now;
                Log("[stattrak] kill count unavailable (%s) ctrl=%p",
                    why, (void*)controller);
            }
            return;
        }

        // First reading, or a new match whose count went backwards: adopt the
        // number instead of crediting every kill of the previous match at once.
        if (g_lastKills < 0 || kills < g_lastKills)
        {
            const bool first = g_lastKills < 0;
            g_lastKills = kills;

            if (first && now - g_lastBaselineMs >= 5000)
            {
                g_lastBaselineMs = now;
                Log("[stattrak] watching match kills=%d ctrl=%p", kills, (void*)controller);
            }

            return;
        }

        const int gained = kills - g_lastKills;

        if (gained <= 0)
            return;

        // A jump this large is not a kill credit; re-baseline instead of
        // inflating the counter with a misread field.
        if (gained > 10)
        {
            g_lastKills = kills;
            return;
        }

        g_lastKills = kills;

        const uintptr_t weapon = ActiveWeapon(pawn);
        if (!weapon)
            return;

        const uintptr_t view = GetWeaponItem(weapon);
        if (!view)
            return;

        const int current = ReadKillEater(view);

        if (current < 0)
        {
            // No "kill eater" on the live view: either the game rebuilt the
            // item, or the Armory instance the player equipped is not the view
            // in hand. The kill is still the player's, so it is credited to the
            // saved Armory instance instead of being dropped, and the next apply
            // pass writes the higher count back into the item it paints.
            uint16_t def = 0;
            SafeReadU16(view + g_off.EIV_ItemDefIndex, def);

            uint8_t team = 0;
            SafeReadU8(pawn + g_off.PAWN_TeamNum, team);

            TargetSkin target{};
            std::string detail;

            if (def && ArmoryInventory::ResolveTargetForWeapon(
                    def, team, IsKnifeDefinition(def), target, detail) !=
                    ArmoryInventory::ArmoryMatch::None &&
                target.statTrak && !target.instanceId.empty())
            {
                const int saved = target.statTrakKills + gained;

                if (StatTrakKills::Record(target.instanceId, saved))
                {
                    Log("[stattrak] +%d kill(s) credited to saved instance %s (%d -> %d); "
                        "the live view has no kill eater",
                        gained, target.instanceId.c_str(), target.statTrakKills, saved);
                    return;
                }
            }

            if (now - g_lastComplainMs >= 20000)
            {
                g_lastComplainMs = now;
                Log("[stattrak] +%d kill(s) not credited: weapon %p has no kill eater "
                    "and no StatTrak Armory instance (%s)",
                    gained, (void*)weapon, detail.empty() ? "not armory" : detail.c_str());
            }
            return;
        }

        const int updated = current + gained;

        if (!WriteKillEater(view, updated))
            return;

        SafeWriteI32(weapon + g_off.EE_FallbackStatTrak, updated);

        uint8_t team = 0;
        SafeReadU8(pawn + g_off.PAWN_TeamNum, team);

        const std::string instance = InstanceForWeapon(view, team);

        if (!instance.empty())
            StatTrakKills::Record(instance, updated);

        Log("[stattrak] +%d kill(s) -> %d (weapon=%p instance=%s)",
            gained, updated, (void*)weapon,
            instance.empty() ? "<none>" : instance.c_str());
    }
}
