// n1ssan-dll / src/online/online.cpp
//
// Phase 7 - n1ssan Online: Steam P2P presence, loadout exchange and painting.
//
// Ported from Lootline 2.0 `source/chadware2/features/online/online.cpp`
// (ISteamNetworkingMessages through steam_api64, CS2's in-process
// steamnetworkingsockets copy preferred, relay-only ICE, hello / answer,
// session diagnostics, and its apply order: guns and knives off the level's
// weapon entities first, then the gloves and the agent on the pawns). A peer's
// gun, knife, gloves and agent are drawn on your screen only. The wire format is
// ours ("N1SN"), not Lootline's, so the two clients ignore each other.

#include "online/online.h"

#include "config/offsets.h"
#include "diagnostics/log.h"
#include "inventory/armory_inventory.h"
#include "inventory/loadout.h"
#include "inventory/runtime_mode.h"
#include "memory/access.h"
#include "sdk/entities.h"
#include "sdk/item_view.h"
#include "skin/apply.h"
#include "skin/glove_model_refresh.h"
#include "skin/gloves.h"

#include <windows.h>

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <mutex>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace
{
    // ---- Steam's flat API (steam_api64.dll, already loaded by CS2) ----
    // SteamNetworkingIdentity (steamnetworkingtypes.h, pack 1): type, size,
    // then a 128-byte union whose first member is the SteamID64.
#pragma pack(push, 1)
    struct Identity
    {
        int type = 0;
        int size = 0;
        std::uint64_t steamId = 0;
        char rest[120]{};
    };
#pragma pack(pop)
    static_assert(sizeof(Identity) == 136);

    constexpr int IDENTITY_STEAMID = 16;    // k_ESteamNetworkingIdentityType_SteamID

    // SteamNetworkingMessage_t (pack 8): data +0, size +8, peer identity +16,
    // release function +184.
    constexpr std::size_t MSG_DATA = 0;
    constexpr std::size_t MSG_SIZE = 8;
    constexpr std::size_t MSG_PEER = 16;
    constexpr std::size_t MSG_RELEASE = 184;

    constexpr int SEND_RELIABLE = 8;        // k_nSteamNetworkingSend_Reliable
    constexpr int SEND_RESTART = 32;        // ..._AutoRestartBrokenSession
    constexpr int RESULT_OK = 1;            // k_EResultOK
    constexpr int CONFIG_ICE_ENABLE = 104;  // k_ESteamNetworkingConfig_P2P_Transport_ICE_Enable
    constexpr int ICE_DISABLE = 0;          // no ICE work: no IP address is shared
    constexpr int ICE_DEFAULT = -1;
    // Our own channel: a Lootline client on its 7417 channel never sees us.
    constexpr int CHANNEL = 7418;

    // SteamNetConnectionInfo_t (pack 8): state +176, end reason +180,
    // end debug text +184 (128 chars).
    constexpr std::size_t INFO_SIZE = 1024;
    constexpr std::size_t INFO_END_REASON = 180;
    constexpr std::size_t INFO_END_DEBUG = 184;
    constexpr int STATE_UNREAD = -100;

    using GetInterfaceFn = void* (__cdecl*)();
    using SendFn = int(__cdecl*)(void* self, const Identity* to, const void* data,
                                 std::uint32_t size, int flags, int channel);
    using ReceiveFn = int(__cdecl*)(void* self, int channel, void** out, int max);
    using CloseFn = bool(__cdecl*)(void* self, const Identity* who);
    using AcceptFn = bool(__cdecl*)(void* self, const Identity* who);
    using InfoFn = int(__cdecl*)(void* self, const Identity* who, void* info,
                                 void* quickStatus);
    using SteamIdFn = std::uint64_t(__cdecl*)(void* user);
    using SetIntFn = bool(__cdecl*)(void* utils, int config, std::int32_t value);
    using ReleaseFn = void(__cdecl*)(void* message);

    struct Steam
    {
        bool tried = false;
        bool ok = false;
        std::uint64_t lastTryMs = 0;
        void* messages = nullptr;       // CS2's own copy when it has one
        void* utils = nullptr;
        void* otherMessages = nullptr;  // the Steam client's copy, read too
        void* otherUtils = nullptr;
        bool inProcess = false;
        SendFn send = nullptr;
        ReceiveFn receive = nullptr;
        CloseFn close = nullptr;
        AcceptFn accept = nullptr;
        InfoFn info = nullptr;
        SetIntFn setInt = nullptr;
        std::uint64_t me = 0;
    } g_steam;

    // ---- the packet ----
#pragma pack(push, 1)
    struct Header
    {
        char magic[4];              // "N1SN"
        std::uint8_t version;
        std::uint8_t type;
        std::uint8_t count;
        std::uint8_t flags;
    };

    struct Entry
    {
        std::uint16_t definition;
        std::uint16_t paintKit;     // 0: none
        std::uint32_t seed;
        float wear;
        std::int32_t statTrak;      // -1: none
        std::uint8_t kind;          // KIND_GUN for now
        std::uint8_t flags;         // ENTRY_SOUVENIR
        // The sticker kits in slots 0-3, 0 = empty slot. Souvenir gold stickers
        // arrive the same way: the bridge projects them into the instance's
        // attachment slots, so one field covers both.
        std::uint16_t stickers[4];
    };
#pragma pack(pop)
    static_assert(sizeof(Header) == 8 && sizeof(Entry) == 26);

    // v2 (v7.17): the knife, the gloves and the agent too. v3 (v7.18): the
    // stickers of each entry. A packet of another version fails the version
    // check, so two different builds never paint each other.
    constexpr std::uint8_t VERSION = 3;
    constexpr std::uint8_t KIND_GUN = 0;
    constexpr std::uint8_t KIND_KNIFE = 1;
    constexpr std::uint8_t KIND_GLOVES = 2;
    constexpr std::uint8_t KIND_AGENT = 3;
    constexpr std::uint8_t PACKET_LOADOUT = 1;
    constexpr std::uint8_t FLAG_ANSWER_ME = 1;
    constexpr std::uint8_t ENTRY_SOUVENIR = 1;
    constexpr int MAX_ENTRIES = 64;

    // CS2's glove definitions (#Type_Hands): the broken fang pair and the sports
    // / specialist pairs. Anything else claiming to be gloves is dropped.
    bool IsGloveDefinition(std::uint16_t definition)
    {
        return definition == 4725 || (definition >= 5027 && definition <= 5035);
    }

    struct Loadout
    {
        std::unordered_map<std::uint16_t, Entry> guns;
        Entry knife{};      // definition 0: none (gloves, agent too)
        Entry gloves{};
        Entry agent{};

        bool Empty() const
        {
            return guns.empty() && !knife.definition && !gloves.definition &&
                   !agent.definition;
        }
    };

    struct Peer
    {
        bool here = false;
        bool answered = false;          // sent us a packet: runs n1ssan Online
        ULONGLONG heardAt = 0;
        ULONGLONG sentAt = 0;
        std::uint64_t sentHash = 0;
        Loadout loadout;
        int helloResult = 0;
        ULONGLONG firstHelloAt = 0;
        int state = STATE_UNREAD;
        int endReason = 0;
    };

    std::unordered_map<std::uint64_t, Peer> g_peers;
    bool g_active = false;
    bool g_relaySet = false;
    bool g_onlineEnabled = true;
    bool g_settingsRead = false;
    ULONGLONG g_nextScan = 0;
    ULONGLONG g_nextApply = 0;
    ULONGLONG g_nextStatus = 0;
    std::vector<std::uint8_t> g_packet;
    std::uint64_t g_packetHash = 0;
    Loadout g_mine;

    std::mutex g_viewMutex;
    std::string g_status = "Off";
    std::vector<Online::PeerView> g_view;

    void SetStatus(const std::string& status)
    {
        const std::lock_guard<std::mutex> lock(g_viewMutex);
        g_status = status;
    }

    std::uint64_t Hash(const void* data, std::size_t size)
    {
        std::uint64_t hash = 1469598103934665603ull;
        for (std::size_t i = 0; i < size; ++i)
            hash = (hash ^ static_cast<const std::uint8_t*>(data)[i]) * 1099511628211ull;
        return hash;
    }

    // ---- settings ----
    //
    // <bridge>/n1ssan-online.json, the same directory the Armory projection is
    // read from: {"enabled": true}. A missing file means on - the packet is
    // presence only and no IP address is shared - and the file is what turns it
    // off for someone who does not want it.
    std::string SettingsPath()
    {
        const std::string directory = ArmoryInventory::BridgeDirectory();
        return directory.empty() ? std::string() : directory + "n1ssan-online.json";
    }

    bool ReadSettings(bool& enabled)
    {
        const std::string path = SettingsPath();
        if (path.empty())
            return false;

        HANDLE file = CreateFileA(path.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr,
                                  OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (file == INVALID_HANDLE_VALUE)
            return false;

        char text[2048]{};
        DWORD read = 0;
        const bool ok = ReadFile(file, text, sizeof(text) - 1, &read, nullptr) != 0;
        CloseHandle(file);

        if (!ok || read == 0)
            return false;

        const std::string body(text, text + read);
        const size_t key = body.find("\"enabled\"");
        if (key == std::string::npos)
            return false;

        const size_t colon = body.find(':', key);
        if (colon == std::string::npos)
            return false;

        size_t value = colon + 1;
        while (value < body.size() && (body[value] == ' ' || body[value] == '\t' ||
                                       body[value] == '\r' || body[value] == '\n'))
            ++value;

        if (body.compare(value, 5, "false") == 0)
        {
            enabled = false;
            return true;
        }

        if (body.compare(value, 4, "true") == 0)
        {
            enabled = true;
            return true;
        }

        return false;
    }

    void ReadSettingsOnce()
    {
        if (g_settingsRead)
            return;

        const std::string path = SettingsPath();
        if (path.empty())
            return;   // the bridge directory is not resolved yet

        g_settingsRead = true;
        bool enabled = true;

        if (ReadSettings(enabled))
            Log("[online] %s: enabled=%s", path.c_str(), enabled ? "true" : "false");
        else
            Log("[online] %s not found: on by default (packet presence only, "
                "no IP address is shared)", path.c_str());

        g_onlineEnabled = enabled;
    }

    // ---- Steam ----
    bool CallBool(SetIntFn fn, void* self, int config, std::int32_t value)
    {
        __try
        {
            return fn(self, config, value);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    void* CallGetter(GetInterfaceFn getter)
    {
        if (!getter)
            return nullptr;

        __try
        {
            return getter();
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return nullptr;
        }
    }

    bool ResolveSteam()
    {
        const ULONGLONG now = GetTickCount64();

        if (g_steam.ok)
            return true;

        // A module that is not there yet (CS2 loads steam_api64 on its own
        // schedule) is retried, not remembered as a failure for ever.
        if (g_steam.tried && now - g_steam.lastTryMs < 30000)
            return false;

        g_steam.tried = true;
        g_steam.lastTryMs = now;

        HMODULE module = GetModuleHandleA("steam_api64.dll");
        if (!module)
        {
            if (!g_steam.ok)
                Log("[online] steam_api64.dll isn't loaded - off until it is");
            return false;
        }

        const auto get = [module](const char* name)
        {
            return reinterpret_cast<void*>(GetProcAddress(module, name));
        };

        const auto messages = reinterpret_cast<GetInterfaceFn>(
            get("SteamAPI_SteamNetworkingMessages_SteamAPI_v002"));
        const auto user = reinterpret_cast<GetInterfaceFn>(get("SteamAPI_SteamUser_v023"));
        const auto utils = reinterpret_cast<GetInterfaceFn>(
            get("SteamAPI_SteamNetworkingUtils_SteamAPI_v004"));
        const auto steamId = reinterpret_cast<SteamIdFn>(
            get("SteamAPI_ISteamUser_GetSteamID"));
        g_steam.send = reinterpret_cast<SendFn>(
            get("SteamAPI_ISteamNetworkingMessages_SendMessageToUser"));
        g_steam.receive = reinterpret_cast<ReceiveFn>(
            get("SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel"));
        g_steam.close = reinterpret_cast<CloseFn>(
            get("SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser"));
        g_steam.accept = reinterpret_cast<AcceptFn>(
            get("SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser"));
        g_steam.info = reinterpret_cast<InfoFn>(
            get("SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo"));
        g_steam.setInt = reinterpret_cast<SetIntFn>(
            get("SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32"));

        if (!messages || !user || !steamId || !g_steam.send || !g_steam.receive ||
            !g_steam.close)
        {
            Log("[online] Steam's networking functions are missing - off");
            return false;
        }

        __try
        {
            g_steam.messages = messages();
            void* steamUser = user();
            g_steam.me = steamUser ? steamId(steamUser) : 0;
            g_steam.utils = utils ? utils() : nullptr;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            g_steam.messages = nullptr;
        }

        // CS2's own copy of Steam's networking (steamnetworkingsockets.dll,
        // what networksystem.dll runs): other players' P2P connections for CS2
        // reach that one, not the Steam client's. Lootline's friend test found
        // exactly that - through the client's copy both hellos "sent" and both
        // sessions "connected" and nothing was ever read. Both are read.
        if (HMODULE game = GetModuleHandleA("steamnetworkingsockets.dll"))
        {
            void* gameMessages = CallGetter(reinterpret_cast<GetInterfaceFn>(
                GetProcAddress(game, "SteamNetworkingMessages_LibV2")));
            void* gameUtils = CallGetter(reinterpret_cast<GetInterfaceFn>(
                GetProcAddress(game, "SteamNetworkingUtils_LibV4")));

            if (gameMessages && gameMessages != g_steam.messages)
            {
                g_steam.otherMessages = g_steam.messages;
                g_steam.messages = gameMessages;
                g_steam.otherUtils = g_steam.utils != gameUtils ? g_steam.utils : nullptr;
                g_steam.utils = gameUtils ? gameUtils : g_steam.utils;
                g_steam.inProcess = true;
            }
        }

        g_steam.ok = g_steam.messages && g_steam.me != 0;

        Log("[online] Steam P2P %s through %s (relay settings %s, session accept %s, "
            "session info %s, your SteamID %llu)",
            g_steam.ok ? "ready" : "not available - off",
            g_steam.inProcess ? "CS2's own networking (the Steam client's read too)"
                              : "the Steam client",
            g_steam.utils && g_steam.setInt ? "found" : "missing",
            g_steam.accept ? "found" : "missing",
            g_steam.info ? "found" : "missing",
            static_cast<unsigned long long>(g_steam.me));

        return g_steam.ok;
    }

    // relay only while online: no peer ever learns your IP address (and you
    // never learn theirs)
    void SetRelayOnly(bool on)
    {
        if (!g_steam.utils || !g_steam.setInt || g_relaySet == on)
            return;

        if (g_steam.otherUtils)
            CallBool(g_steam.setInt, g_steam.otherUtils, CONFIG_ICE_ENABLE,
                     on ? ICE_DISABLE : ICE_DEFAULT);

        if (CallBool(g_steam.setInt, g_steam.utils, CONFIG_ICE_ENABLE,
                     on ? ICE_DISABLE : ICE_DEFAULT))
        {
            g_relaySet = on;
            Log("[online] relay only: %s",
                on ? "no IP address is shared with other players"
                   : "Steam's P2P settings back to their defaults");
        }
    }

    int SendTo(std::uint64_t steamId, const std::vector<std::uint8_t>& packet)
    {
        Identity to{};
        to.type = IDENTITY_STEAMID;
        to.size = 8;
        to.steamId = steamId;

        __try
        {
            return g_steam.send(g_steam.messages, &to, packet.data(),
                                static_cast<std::uint32_t>(packet.size()),
                                SEND_RELIABLE | SEND_RESTART, CHANNEL);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return 0;
        }
    }

    void AcceptFrom(std::uint64_t steamId)
    {
        if (!g_steam.accept)
            return;

        Identity who{};
        who.type = IDENTITY_STEAMID;
        who.size = 8;
        who.steamId = steamId;

        __try
        {
            g_steam.accept(g_steam.messages, &who);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }

    const char* StateText(int state)
    {
        switch (state)
        {
        case 0: return "no session";
        case 1: return "connecting";
        case 2: return "finding a route";
        case 3: return "connected";
        case 4: return "closed by them";
        case 5: return "problem on your side";
        case -1:
        case -2:
        case -3: return "closing";
        default: return "unknown";
        }
    }

    int SessionState(std::uint64_t steamId, int& endReason)
    {
        endReason = 0;

        if (!g_steam.info)
            return STATE_UNREAD;

        Identity who{};
        who.type = IDENTITY_STEAMID;
        who.size = 8;
        who.steamId = steamId;
        alignas(8) std::uint8_t info[INFO_SIZE]{};
        int state = STATE_UNREAD;

        __try
        {
            state = g_steam.info(g_steam.messages, &who, info, nullptr);
            endReason = *reinterpret_cast<const int*>(info + INFO_END_REASON);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return STATE_UNREAD;
        }

        return state;
    }

    void CloseWith(std::uint64_t steamId)
    {
        Identity who{};
        who.type = IDENTITY_STEAMID;
        who.size = 8;
        who.steamId = steamId;

        __try
        {
            g_steam.close(g_steam.messages, &who);

            if (g_steam.otherMessages)
                g_steam.close(g_steam.otherMessages, &who);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }

    // ---- our loadout ----
    Entry MakeEntry(std::uint8_t kind, std::uint16_t definition, int paintKit, int seed,
                    float wear, int statTrak, bool souvenir,
                    const Attachments::Set* attachments = nullptr)
    {
        Entry entry{};
        entry.kind = kind;
        entry.definition = definition;
        entry.paintKit = static_cast<std::uint16_t>((std::clamp)(paintKit, 0, 65535));
        entry.seed = static_cast<std::uint32_t>((std::max)(seed, 0));
        entry.wear = (std::clamp)(wear, 0.0f, 1.0f);
        entry.statTrak = statTrak >= 0 ? (std::max)(statTrak, 0) : -1;
        entry.flags = souvenir ? ENTRY_SOUVENIR : 0;

        if (attachments)
        {
            for (int slot = 0; slot < 4; ++slot)
            {
                const auto& sticker = attachments->stickers[slot];

                if (!sticker.present || sticker.kit <= 0)
                    continue;

                entry.stickers[slot] =
                    static_cast<std::uint16_t>((std::min)(sticker.kit, 65535));
            }
        }

        return entry;
    }

    void AddEntry(std::vector<Entry>& entries, Entry& into, const Entry& entry)
    {
        into = entry;

        if (entries.size() < MAX_ENTRIES)
            entries.push_back(entry);
    }

    // Everything the player has that another n1ssan can wear: every gun skin
    // (not only the equipped ones - a peer matches the gun in their hands by its
    // definition), the knife with its paint, the gloves and the agent. The last
    // three are resolved the way the Armory's own apply pass resolves them, so
    // the packet names exactly what the player sees.
    void BuildPacket(std::uint8_t team)
    {
        g_mine = Loadout{};
        std::vector<Entry> entries;

        const RuntimeMode mode = RuntimeModeState::Current();

        if (mode == RuntimeMode::Armory)
        {
            std::vector<ArmoryInventory::ManagedItem> items;

            if (ArmoryInventory::SnapshotManagedItems(items))
            {
                for (const auto& item : items)
                {
                    if (entries.size() >= MAX_ENTRIES - 3)
                        break;

                    if (item.definition == 0)
                        continue;

                    // The first knife the projection carries: the Armory keeps
                    // one per side and the packet has room for one.
                    if (IsKnifeDefinition(item.definition))
                    {
                        if (!g_mine.knife.definition)
                            AddEntry(entries, g_mine.knife,
                                MakeEntry(KIND_KNIFE, item.definition, item.paintKit,
                                    item.seed, item.wear, -1, false, &item.attachments));
                        continue;
                    }

                    // Gloves and the agent come from the equipment assignment
                    // below; tools, music kits and graffiti are not worn.
                    if (item.definition >= 500 || IsGloveDefinition(item.definition) ||
                        item.quality == 3 || item.paintKit <= 0)
                        continue;

                    if (g_mine.guns.count(item.definition))
                        continue;

                    Entry entry;
                    AddEntry(entries, entry,
                        MakeEntry(KIND_GUN, item.definition, item.paintKit, item.seed,
                            item.wear, item.statTrak, item.quality == 12,
                            &item.attachments));
                    g_mine.guns[item.definition] = entry;
                }
            }

            if (team == 2 || team == 3)
            {
                TargetSkin target{};
                std::string detail;

                if (ArmoryInventory::ResolveTargetForSlot("gloves", team, target, detail) !=
                        ArmoryInventory::ArmoryMatch::None &&
                    target.defIndex && IsGloveDefinition(target.defIndex))
                    AddEntry(entries, g_mine.gloves,
                        MakeEntry(KIND_GLOVES, target.defIndex, target.paintKit,
                            target.resolvedSeed, target.wear, -1, false));

                target = TargetSkin{};

                if (ArmoryInventory::ResolveTargetForSlot("agent", team, target, detail) !=
                        ArmoryInventory::ArmoryMatch::None &&
                    target.defIndex)
                    AddEntry(entries, g_mine.agent,
                        MakeEntry(KIND_AGENT, target.defIndex, 0, 0, 0.0f, -1, false));
            }
        }
        else if (mode == RuntimeMode::Loadout)
        {
            for (const auto& [key, target] : g_targets)
            {
                (void)key;

                if (entries.size() >= MAX_ENTRIES - 3)
                    break;

                if (target.defIndex == 0)
                    continue;

                if (IsKnifeDefinition(target.defIndex) || target.slot == "knife")
                {
                    if (!g_mine.knife.definition)
                        AddEntry(entries, g_mine.knife,
                            MakeEntry(KIND_KNIFE, target.defIndex, target.paintKit,
                                target.resolvedSeed, target.wear, -1, false));
                    continue;
                }

                if (IsGloveDefinition(target.defIndex))
                {
                    if (!g_mine.gloves.definition)
                        AddEntry(entries, g_mine.gloves,
                            MakeEntry(KIND_GLOVES, target.defIndex, target.paintKit,
                                target.resolvedSeed, target.wear, -1, false));
                    continue;
                }

                // Loadout mode has no agent path of its own; a slot that names
                // one is still sent, so a peer sees it.
                if (target.slot == "agent" ||
                    (target.paintKit <= 0 && target.defIndex >= 4000))
                {
                    if (!g_mine.agent.definition)
                        AddEntry(entries, g_mine.agent,
                            MakeEntry(KIND_AGENT, target.defIndex, 0, 0, 0.0f, -1, false));
                    continue;
                }

                if (target.paintKit <= 0 || target.defIndex >= 500)
                    continue;

                if (g_mine.guns.count(target.defIndex))
                    continue;

                Entry entry;
                AddEntry(entries, entry,
                    MakeEntry(KIND_GUN, target.defIndex, target.paintKit,
                        target.resolvedSeed, target.wear,
                        target.statTrak ? target.statTrakKills : -1, target.souvenir));
                g_mine.guns[target.defIndex] = entry;
            }
        }

        int kits = 0;

        for (const auto& entry : entries)
        {
            for (int slot = 0; slot < 4; ++slot)
                if (entry.stickers[slot]) ++kits;
        }

        Log("[online] sending %u item(s): knife %u, gloves %u, agent %u, %d sticker kit(s)",
            static_cast<unsigned>(entries.size()), g_mine.knife.definition,
            g_mine.gloves.definition, g_mine.agent.definition, kits);

        std::sort(entries.begin(), entries.end(), [](const Entry& a, const Entry& b)
        {
            return a.kind != b.kind ? a.kind < b.kind : a.definition < b.definition;
        });

        Header header{ { 'N', '1', 'S', 'N' }, VERSION, PACKET_LOADOUT,
                       static_cast<std::uint8_t>(entries.size()), 0 };

        g_packet.resize(sizeof(Header) + entries.size() * sizeof(Entry));
        std::memcpy(g_packet.data(), &header, sizeof(header));

        if (!entries.empty())
            std::memcpy(g_packet.data() + sizeof(Header), entries.data(),
                        entries.size() * sizeof(Entry));

        g_packetHash = Hash(g_packet.data() + sizeof(Header),
                            g_packet.size() - sizeof(Header));
    }

    std::vector<std::uint8_t> WithFlags(std::uint8_t flags)
    {
        std::vector<std::uint8_t> packet = g_packet;
        reinterpret_cast<Header*>(packet.data())->flags = flags;
        return packet;
    }

    void Answer(std::uint64_t steamId, Peer& peer, std::uint8_t flags, ULONGLONG now)
    {
        const int result = SendTo(steamId, WithFlags(flags));
        peer.sentAt = now;

        if (result == RESULT_OK)
            peer.sentHash = g_packetHash;

        if (!(flags & FLAG_ANSWER_ME))
            return;

        if (result != peer.helloResult)
        {
            Log("[online] hello to SteamID %llu: %s (Steam's result %d)",
                static_cast<unsigned long long>(steamId),
                result == RESULT_OK ? "sent" : "NOT sent", result);
            peer.helloResult = result;
        }

        if (!peer.firstHelloAt)
            peer.firstHelloAt = now;
    }

    void CheckSession(std::uint64_t steamId, Peer& peer, ULONGLONG now)
    {
        if (peer.answered || !peer.firstHelloAt || now - peer.firstHelloAt < 5000)
            return;

        int endReason = 0;
        const int state = SessionState(steamId, endReason);

        if (state == peer.state && endReason == peer.endReason)
            return;

        peer.state = state;
        peer.endReason = endReason;

        Log("[online] no answer from SteamID %llu yet - Steam's session with them: "
            "%s (state %d, end reason %d)",
            static_cast<unsigned long long>(steamId), StateText(state), state, endReason);
    }

    // ---- the players in the match ----
    struct PlayerScan
    {
        std::vector<std::uint64_t> steamIds;
    };

    bool VisitController(uintptr_t entity, uint32_t index, const char* designer,
                         void* raw)
    {
        (void)index;

        PlayerScan* scan = static_cast<PlayerScan*>(raw);

        if (!designer || std::strcmp(designer, "cs_player_controller") != 0)
            return true;

        if (!g_off.CTRL_SteamID)
            return true;

        std::uint64_t steamId = 0;

        if (!SafeReadQword(entity + g_off.CTRL_SteamID, steamId))
            return true;

        // A bot (0), us, or something that is not an individual account.
        if (steamId == 0 || steamId == g_steam.me || (steamId >> 52) != 0x011)
            return true;

        scan->steamIds.push_back(steamId);
        return true;
    }

    void ScanPlayers()
    {
        for (auto& [id, peer] : g_peers)
        {
            (void)id;
            peer.here = false;
        }

        PlayerScan scan;
        ForEachEntity(1, 0x3FFF, VisitController, &scan);

        for (std::uint64_t steamId : scan.steamIds)
        {
            Peer& peer = g_peers[steamId];
            peer.here = true;

            if (!peer.answered)
                AcceptFrom(steamId);   // their hello may already wait for us
        }
    }

    // ---- receiving ----
    int ReceiveSome(void* from, void** messages, int max)
    {
        __try
        {
            return g_steam.receive(from, CHANNEL, messages, max);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return 0;
        }
    }

    bool ReadMessage(void* message, std::uint64_t& from, const std::uint8_t*& data,
                     int& size)
    {
        __try
        {
            const auto* raw = static_cast<const std::uint8_t*>(message);
            const auto* peer = reinterpret_cast<const Identity*>(raw + MSG_PEER);
            from = peer->type == IDENTITY_STEAMID ? peer->steamId : 0;
            data = *reinterpret_cast<const std::uint8_t* const*>(raw + MSG_DATA);
            size = *reinterpret_cast<const int*>(raw + MSG_SIZE);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool CopySafe(void* to, const void* from, std::size_t size)
    {
        __try
        {
            std::memcpy(to, from, size);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    void ReleaseMessage(void* message)
    {
        __try
        {
            auto release = *reinterpret_cast<ReleaseFn*>(
                static_cast<std::uint8_t*>(message) + MSG_RELEASE);

            if (release)
                release(message);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }

    std::uint64_t g_accepted = 0;

    // A packet in: a peer's loadout. Never trusted - every entry is checked and
    // anything that is not a plausible weapon skin is dropped.
    void Take(std::uint64_t steamId, const std::uint8_t* data, int size,
              ULONGLONG now)
    {
        if (!data || size < static_cast<int>(sizeof(Header)))
            return;

        Header header;
        std::memcpy(&header, data, sizeof(header));

        if (std::memcmp(header.magic, "N1SN", 4) != 0 || header.version != VERSION ||
            header.type != PACKET_LOADOUT || header.count > MAX_ENTRIES ||
            size != static_cast<int>(sizeof(Header) + header.count * sizeof(Entry)))
            return;

        Peer& peer = g_peers[steamId];
        const bool firstTime = !peer.answered;
        peer.answered = true;
        peer.here = true;
        peer.heardAt = now;
        peer.loadout = Loadout{};

        for (int i = 0; i < header.count; ++i)
        {
            Entry entry;
            std::memcpy(&entry, data + sizeof(Header) +
                        static_cast<std::size_t>(i) * sizeof(Entry), sizeof(entry));

            if (entry.definition == 0 || entry.paintKit > 20000 ||
                !std::isfinite(entry.wear) || entry.wear < 0.0f || entry.wear > 1.0f ||
                entry.seed > 100000 || entry.statTrak < -1 ||
                entry.statTrak > 9999999)
                continue;

            // A sticker kit asks CS2 for one of its own sticker materials, so a
            // wild id is dropped instead of faulting the build.
            for (int slot = 0; slot < 4; ++slot)
            {
                if (entry.stickers[slot] > 1000000)
                    entry.stickers[slot] = 0;
            }

            // Only what the entry says it is: a paint on a gun, a knife on a
            // knife, a glove on gloves, an agent on an agent. A peer is never
            // trusted to name something it cannot wear.
            switch (entry.kind)
            {
            case KIND_GUN:
                if (entry.definition >= 500 || entry.paintKit == 0)
                    break;
                peer.loadout.guns[entry.definition] = entry;
                break;
            case KIND_KNIFE:
                if (!IsKnifeDefinition(entry.definition) || entry.definition < 500)
                    break;
                peer.loadout.knife = entry;
                break;
            case KIND_GLOVES:
                if (!IsGloveDefinition(entry.definition))
                    break;
                peer.loadout.gloves = entry;
                break;
            case KIND_AGENT:
                if (entry.paintKit != 0 || entry.definition < 4000)
                    break;
                peer.loadout.agent = entry;
                break;
            default:
                break;
            }
        }

        if (firstTime)
        {
            Log("[online] SteamID %llu runs n1ssan Online - %d gun skin(s), knife %u, "
                "gloves %u, agent %u (0 = none)",
                static_cast<unsigned long long>(steamId),
                static_cast<int>(peer.loadout.guns.size()),
                static_cast<unsigned>(peer.loadout.knife.definition),
                static_cast<unsigned>(peer.loadout.gloves.definition),
                static_cast<unsigned>(peer.loadout.agent.definition));
        }

        // A hello from someone we have not answered lately: ours back at once.
        if ((header.flags & FLAG_ANSWER_ME) && (firstTime || now - peer.sentAt > 2000) &&
            !g_packet.empty())
            Answer(steamId, peer, 0, now);

        ++g_accepted;
    }

    void ReceiveFrom(void* source, ULONGLONG now)
    {
        void* messages[32];

        for (int round = 0; round < 4; ++round)
        {
            const int count = ReceiveSome(source, messages, 32);

            for (int i = 0; i < count; ++i)
            {
                std::uint64_t from = 0;
                const std::uint8_t* data = nullptr;
                int size = 0;

                if (ReadMessage(messages[i], from, data, size) && from &&
                    from != g_steam.me && size > 0 && size <= 4096)
                {
                    // Copied first: the message is released right after.
                    std::vector<std::uint8_t> copy(static_cast<std::size_t>(size));

                    if (CopySafe(copy.data(), data, static_cast<std::size_t>(size)))
                        Take(from, copy.data(), size, now);
                }

                ReleaseMessage(messages[i]);
            }

            if (count < 32)
                break;
        }
    }

    void Receive(ULONGLONG now)
    {
        ReceiveFrom(g_steam.messages, now);

        if (g_steam.otherMessages)
            ReceiveFrom(g_steam.otherMessages, now);
    }

    // Ours out: a hello to every player here (once, then every 30 s), ours to
    // peers who answered when it changes or every 15 s.
    void SendDue(ULONGLONG now)
    {
        if (g_packet.empty())
            return;

        for (auto& [steamId, peer] : g_peers)
        {
            if (!peer.here)
                continue;

            if (!peer.answered)
            {
                if (peer.sentAt == 0 || now - peer.sentAt >= 30000)
                    Answer(steamId, peer, FLAG_ANSWER_ME, now);
            }
            else if (peer.sentHash != g_packetHash || now - peer.sentAt >= 15000)
            {
                Answer(steamId, peer, 0, now);
            }
        }
    }

    // ---- the other players' guns and knives ----
    //
    // Lootline's `Online::ApplyAll` (online.cpp:1018) walks the level's weapon
    // entities and paints the ones whose owner is a peer: their gun, or their
    // knife - model first, paint on the next pass, exactly as KnifeOn does it
    // there. The owner here is the account CS2 stamped on the item view, which
    // survives a gun leaving its owner's hands. A few per pass only: every one of
    // these builds a skin material.
    constexpr ULONGLONG APPLY_INTERVAL_MS = 250;
    constexpr ULONGLONG APPLY_DEAD_INTERVAL_MS = 1000;   // spectating
    constexpr int APPLY_BUDGET = 2;        // gun / knife material builds per pass
    constexpr int APPLY_PAWN_BUDGET = 2;   // glove / agent rebuilds per pass

    struct PeerApply
    {
        uintptr_t localPawn = 0;
        int budget = APPLY_BUDGET;
        int painted = 0;
    };

    // Knives we made into a peer's knife -> the definition they really had.
    std::unordered_map<uintptr_t, std::uint16_t> g_knifeOriginal;

    const Loadout* PeerLoadout(std::uint32_t account)
    {
        if (!account)
            return nullptr;

        for (const auto& [steamId, peer] : g_peers)
        {
            if (!peer.answered)
                continue;

            if (static_cast<std::uint32_t>(steamId & 0xFFFFFFFFull) != account)
                continue;

            return &peer.loadout;
        }

        return nullptr;
    }

    TargetSkin SkinOf(const Entry& entry, std::uint16_t definition)
    {
        TargetSkin target{};
        target.paintKit = entry.paintKit;
        target.resolvedSeed = static_cast<int>(entry.seed);
        target.wear = entry.wear;
        target.statTrak = entry.statTrak >= 0;
        target.statTrakKills = static_cast<int>((std::max)(entry.statTrak, 0));
        target.souvenir = (entry.flags & ENTRY_SOUVENIR) != 0;
        target.defIndex = definition;
        return target;
    }

    // The stickers an entry carries, in the shape the apply pass wants them.
    Attachments::Set AttachmentsOf(const Entry& entry)
    {
        Attachments::Set set{};

        const int slots = (std::min)(4, static_cast<int>(Attachments::STICKER_SLOTS));

        for (int slot = 0; slot < slots; ++slot)
        {
            if (!entry.stickers[slot])
                continue;

            auto& sticker = set.stickers[slot];
            sticker.present = true;
            sticker.kit = entry.stickers[slot];
            sticker.scale = 1.0f;
        }

        return set;
    }

    // Functions of their own: __try cannot live in a caller that owns objects
    // with destructors (C2712), and the visitors below hold TargetSkins.
    bool ApplyPeerWeapon(uintptr_t weapon, uintptr_t pawn, const TargetSkin& target,
                         const Attachments::Set& attachments)
    {
        __try
        {
            return ApplyWeaponSkin(weapon, pawn, target,
                attachments.Empty() ? nullptr : &attachments);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool ApplyPeerKnife(uintptr_t weapon, uintptr_t view, uintptr_t pawn,
                        std::uint16_t definition, const TargetSkin& target,
                        const Attachments::Set& attachments)
    {
        __try
        {
            const bool model = KnifeApply(weapon, view, definition);
            const bool paint = ApplyWeaponSkin(weapon, pawn, target,
                attachments.Empty() ? nullptr : &attachments);
            return model || paint;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool RestorePeerKnife(uintptr_t weapon, uintptr_t view, std::uint16_t definition)
    {
        __try
        {
            KnifeApply(weapon, view, definition);
            ApplyDefault(weapon);   // our paint off it: theirs is the model
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    // One line per thing painted on an entity, and a cap on the whole session.
    void ReportPainted(uintptr_t entity, std::uint16_t definition, std::uint8_t kind,
                       std::uint32_t account)
    {
        static std::unordered_map<uintptr_t, std::uint32_t> last;
        static int reports = 0;

        const std::uint32_t key =
            (static_cast<std::uint32_t>(kind) << 16) | definition;

        if (last[entity] == key || reports >= 60)
            return;

        last[entity] = key;
        ++reports;

        const char* what = kind == KIND_KNIFE ? "knife"
                         : kind == KIND_GLOVES ? "gloves"
                         : kind == KIND_AGENT ? "agent" : "gun";

        Log("[online] peer %u %s def=%u painted (entity=%p)", account, what,
            static_cast<unsigned>(definition), reinterpret_cast<void*>(entity));
    }

    bool VisitPeerWeapon(uintptr_t entity, uint32_t index, const char* designer, void* raw)
    {
        (void)index;

        PeerApply* apply = static_cast<PeerApply*>(raw);

        if (apply->budget <= 0)
            return false;

        if (!designer || std::strncmp(designer, "weapon_", 7) != 0)
            return true;

        const uintptr_t view = GetWeaponItem(entity);

        if (!view)
            return true;

        std::uint16_t definition = 0;
        std::uint32_t account = 0;

        if (!SafeReadU16(view + g_off.EIV_ItemDefIndex, definition) || definition == 0)
            return true;

        if (!g_off.EIV_AccountID ||
            !SafeReadU32(view + g_off.EIV_AccountID, account))
            return true;

        const std::uint32_t mine =
            static_cast<std::uint32_t>(g_steam.me & 0xFFFFFFFFull);

        if (!account || account == mine)
            return true;   // ours: the Armory's own pass owns it

        const Loadout* loadout = PeerLoadout(account);

        if (IsKnifeDefinition(definition))
        {
            const auto original = g_knifeOriginal.find(entity);
            const Entry* knife =
                loadout && loadout->knife.definition ? &loadout->knife : nullptr;

            if (!knife)
            {
                // Ours on it before (they took it off / left / Online is off):
                // their own knife back, our paint off it.
                if (original == g_knifeOriginal.end())
                    return true;

                if (apply->budget-- <= 0)
                    return false;

                RestorePeerKnife(entity, view, original->second);

                Log("[online] peer %u knife back to def=%u (entity=%p)", account,
                    static_cast<unsigned>(original->second),
                    reinterpret_cast<void*>(entity));

                g_knifeOriginal.erase(original);
                return apply->budget > 0;
            }

            if (original == g_knifeOriginal.end())
                g_knifeOriginal[entity] = definition;

            const TargetSkin target = SkinOf(*knife, knife->definition);

            // The model first (their knife), the paint on the next pass - the
            // order Lootline's KnifeOn uses.
            if (definition != knife->definition)
            {
                if (apply->budget-- <= 0)
                    return false;

                if (ApplyPeerKnife(entity, view, apply->localPawn, knife->definition,
                        target, AttachmentsOf(*knife)))
                {
                    ++apply->painted;
                    ReportPainted(entity, knife->definition, KIND_KNIFE, account);
                }

                return apply->budget > 0;
            }

            // The model is already theirs: the paint alone, and only when it
            // needs it - an unchanged knife costs no budget, so a peer holding
            // one never starves their guns of the pass.
            if (!ApplyPeerWeapon(entity, apply->localPawn, target, AttachmentsOf(*knife)))
                return true;

            ++apply->painted;
            --apply->budget;
            ReportPainted(entity, knife->definition, KIND_KNIFE, account);
            return apply->budget > 0;
        }

        // Gloves and agents live on the pawn, not on a weapon entity.
        if (!loadout || definition >= 500)
            return true;

        const auto entry = loadout->guns.find(definition);

        if (entry == loadout->guns.end())
            return true;

        const TargetSkin target = SkinOf(entry->second, definition);

        if (!ApplyPeerWeapon(entity, apply->localPawn, target,
                AttachmentsOf(entry->second)))
            return true;

        ++apply->painted;
        --apply->budget;
        ReportPainted(entity, definition, KIND_GUN, account);
        return apply->budget > 0;
    }

    // ---- their gloves and agent, on their bodies ----
    //
    // Lootline's `ApplyPawns` (online.cpp:1251): the controllers' pawns, not the
    // weapon entities. The gloves go into the pawn's own glove item view through
    // the Armory glove path; the agent through the model swap the Armory agent
    // path uses. A rebuilt model or glove view per pass at most, and a cap of
    // three tries per spawn, are Lootline's own guards.
    struct PawnLook
    {
        bool seen = false;
        float spawnTime = -1.0f;
        std::uint64_t glovesHash = 0;   // the gloves we put on (0: none)
        int gloveRepeats = 0;           // put on again next passes too (a rebuild can miss one)
        std::uint16_t agent = 0;        // the agent we put on (0: none)
        std::string ownModel;           // their own model under ours
        int agentTries = 0;             // this spawn
        std::uint16_t failedAgent = 0;  // came out as the ERROR model: left alone
    };

    std::unordered_map<uintptr_t, PawnLook> g_pawns;

    bool IsErrorModel(const std::string& model)
    {
        return model == "models/dev/error.vmdl" ||
               model.find("/error.vmdl") != std::string::npos;
    }

    // An agent model path names its side (agents/models/ctm_* / tm_*): a T agent
    // is never put on a CT and the other way round.
    bool AgentFitsTeam(const std::string& model, std::uint8_t team)
    {
        if (team != 2 && team != 3)
            return true;

        const bool counterTerrorist = model.find("/ctm_") != std::string::npos;
        const bool terrorist =
            !counterTerrorist && model.find("/tm_") != std::string::npos;

        return team == 3 ? counterTerrorist : terrorist;
    }

    bool ApplyPawnModel(uintptr_t pawn, const char* model)
    {
        return model && *model &&
               GloveModelRefresh::ApplyAgentModel(reinterpret_cast<void*>(pawn), model);
    }

    void GlovesOn(uintptr_t pawn, PawnLook& look, const Loadout* loadout,
                  std::uint32_t account, int& budget)
    {
        if (!g_off.PAWN_EconGloves)
            return;

        const uintptr_t item = pawn + g_off.PAWN_EconGloves;
        const Entry* gloves =
            loadout && loadout->gloves.definition ? &loadout->gloves : nullptr;

        if (!gloves)
        {
            // Their own gloves come back with their next spawn, and we never
            // knew which ones they were: nothing to put back.
            look.glovesHash = 0;
            look.gloveRepeats = 0;
            return;
        }

        const std::uint64_t hash = Hash(gloves, sizeof(*gloves));
        std::uint16_t current = 0;
        SafeReadU16(item + g_off.EIV_ItemDefIndex, current);

        const bool gone = current != gloves->definition;   // the game put theirs back

        if (hash == look.glovesHash && !gone && look.gloveRepeats <= 0)
            return;

        if (budget-- <= 0)
            return;

        if (!DressGloveItemView(item, gloves->definition, gloves->paintKit,
                static_cast<int>(gloves->seed), gloves->wear, account))
            return;

        // Writing the glove item view does not release the glove mesh CS2 already
        // built from their own gloves, so both models were drawn in the same
        // place (the overlap you saw). This is the pawn's own "reapply" byte -
        // the one our glove routine sets after the very same write - so CS2
        // rebuilds that pawn's glove mesh from the item view it now holds.
        //
        // It has to be this byte and never GloveModelRefresh::Request(): that
        // one is not a glove refresh at all, it queues the alternate-agent model
        // discovery swap on YOUR OWN pawn (econ map walk, precache, SetModel on
        // the skeleton, restore a frame later). Calling it from here meant every
        // peer's gloves arriving - every round start, and every spectated peer
        // after a death - rebuilt the local player's model mid-frame, which is
        // the death / round-start crash it came back as on both teams.
        if (g_off.PAWN_NeedReapplyGloves)
            SafeWriteU8(pawn + g_off.PAWN_NeedReapplyGloves, 1);

        look.gloveRepeats =
            (hash != look.glovesHash || gone) ? 2 : look.gloveRepeats - 1;
        look.glovesHash = hash;

        ReportPainted(pawn, gloves->definition, KIND_GLOVES, account);
    }

    void AgentOn(uintptr_t pawn, PawnLook& look, const Loadout* loadout,
                 std::uint8_t team, std::uint32_t account, int& budget)
    {
        std::string current;

        if (!GloveModelRefresh::PawnModelName(reinterpret_cast<void*>(pawn), current))
            current.clear();

        const Entry* agent =
            loadout && loadout->agent.definition ? &loadout->agent : nullptr;
        std::string model;

        if (agent)
        {
            const bool usable =
                ResolveDefinitionModelName(agent->definition, model) &&
                model.compare(0, 14, "agents/models/") == 0 &&
                agent->definition != look.failedAgent &&
                AgentFitsTeam(model, team);

            if (!usable)
                agent = nullptr;
        }

        if (!agent)
        {
            // Ours on them before: their own model back.
            if (look.agent && !look.ownModel.empty() && current != look.ownModel &&
                budget-- > 0)
                ApplyPawnModel(pawn, look.ownModel.c_str());

            look.agent = 0;
            return;
        }

        if (current == model)
        {
            look.agent = agent->definition;
            return;
        }

        if (look.agentTries >= 3 || budget-- <= 0)
            return;

        if (!current.empty() && !IsErrorModel(current))
            look.ownModel = current;

        ++look.agentTries;

        if (ApplyPawnModel(pawn, model.c_str()))
        {
            look.agent = agent->definition;
            ReportPainted(pawn, agent->definition, KIND_AGENT, account);
            return;
        }

        // Not loadable: their model back, this agent left alone.
        if (!look.ownModel.empty())
            ApplyPawnModel(pawn, look.ownModel.c_str());

        look.failedAgent = agent->definition;

        Log("[online] agent %u (%s) didn't load on another player - left as it is",
            static_cast<unsigned>(look.failedAgent), model.c_str());
    }

    struct PawnScan
    {
        std::vector<std::pair<std::uint64_t, uintptr_t>> pawns;
    };

    bool VisitControllerPawn(uintptr_t entity, uint32_t index, const char* designer,
                             void* raw)
    {
        (void)index;

        PawnScan* scan = static_cast<PawnScan*>(raw);

        if (!designer || std::strcmp(designer, "cs_player_controller") != 0)
            return true;

        if (!g_off.CTRL_SteamID || !g_off.CTRL_hPawn)
            return true;

        std::uint64_t steamId = 0;
        std::uint32_t handle = 0;

        if (!SafeReadQword(entity + g_off.CTRL_SteamID, steamId) || steamId == 0 ||
            steamId == g_steam.me)
            return true;

        if (!SafeReadU32(entity + g_off.CTRL_hPawn, handle) || !HandleValid(handle))
            return true;

        const uintptr_t pawn = GetEntityByHandle(handle);

        if (!pawn)
            return true;

        scan->pawns.emplace_back(steamId, pawn);
        return true;
    }

    void ApplyPeerPawns(uintptr_t localPawn)
    {
        for (auto& [key, look] : g_pawns)
        {
            (void)key;
            look.seen = false;
        }

        PawnScan scan;
        ForEachEntity(1, 0x3FFF, VisitControllerPawn, &scan);

        int budget = APPLY_PAWN_BUDGET;

        for (const auto& [steamId, pawn] : scan.pawns)
        {
            if (pawn == localPawn)
                continue;

            const auto peerIt = g_peers.find(steamId);

            if (peerIt == g_peers.end())
                continue;

            const std::uintptr_t key = pawn;
            const bool ours = g_pawns.find(key) != g_pawns.end();

            if (!peerIt->second.answered && !ours)
                continue;   // nothing of ours on them, nothing to undo

            PawnLook& look = g_pawns[key];
            look.seen = true;

            int32_t health = 0;
            std::uint8_t team = 0;

            if (!SafeReadI32(pawn + g_off.PAWN_Health, health) || health <= 0 ||
                !SafeReadU8(pawn + g_off.PAWN_TeamNum, team))
                continue;   // dead: their body stays as it is

            float spawnTime = 0.0f;

            if (g_off.PAWN_SpawnTime)
                SafeReadFloat(pawn + g_off.PAWN_SpawnTime, spawnTime);

            if (spawnTime != look.spawnTime)
            {
                look.spawnTime = spawnTime;
                look.agentTries = 0;
                look.gloveRepeats = look.glovesHash ? 2 : 0;
            }

            const Loadout* loadout =
                peerIt->second.answered ? &peerIt->second.loadout : nullptr;
            const std::uint32_t account =
                static_cast<std::uint32_t>(steamId & 0xFFFFFFFFull);

            GlovesOn(pawn, look, loadout, account, budget);
            AgentOn(pawn, look, loadout, team, account, budget);
        }

        for (auto it = g_pawns.begin(); it != g_pawns.end();)
            it = it->second.seen ? std::next(it) : g_pawns.erase(it);
    }

    void ApplyPeerSkins(uintptr_t localPawn)
    {
        if (!localPawn)
            return;

        // While dead the death camera still draws the world's weapons, and when
        // you spectate someone their gun, their knife and their body are exactly
        // what you look at - so the pass keeps running, only slower (Lootline's
        // `spectating`). The Armory's own pass does the same at 1 s.
        PeerApply apply;
        apply.localPawn = localPawn;

        ForEachEntity(1, 0x3FFF, VisitPeerWeapon, &apply);
        ApplyPeerPawns(localPawn);

        if (apply.painted > 0)
        {
            static ULONGLONG lastLogMs = 0;
            const ULONGLONG now = GetTickCount64();

            if (now - lastLogMs >= 5000)
            {
                lastLogMs = now;
                Log("[online] %d peer item(s) painted this pass", apply.painted);
            }
        }
    }

    void PublishView(ULONGLONG now)
    {
        std::vector<Online::PeerView> view;

        for (const auto& [steamId, peer] : g_peers)
        {
            if (!peer.here && !peer.answered)
                continue;

            Online::PeerView row;
            row.steamId = std::to_string(steamId);
            row.answered = peer.answered;
            row.skins = static_cast<int>(peer.loadout.guns.size());
            row.knife = peer.loadout.knife.definition != 0;
            row.gloves = peer.loadout.gloves.definition != 0;
            row.agent = peer.loadout.agent.definition != 0;
            row.secondsAgo = peer.heardAt
                ? static_cast<int>((now - peer.heardAt) / 1000)
                : -1;
            view.push_back(std::move(row));
        }

        std::sort(view.begin(), view.end(),
            [](const Online::PeerView& a, const Online::PeerView& b)
            {
                return a.answered > b.answered;
            });

        const std::lock_guard<std::mutex> lock(g_viewMutex);
        g_view = std::move(view);
    }

    void Stop()
    {
        for (const auto& [steamId, peer] : g_peers)
        {
            if (peer.answered)
                CloseWith(steamId);
        }

        g_peers.clear();
        g_knifeOriginal.clear();
        g_pawns.clear();
        SetRelayOnly(false);
        g_active = false;
        Log("[online] off - other players' guns, knives, gloves and agents are "
            "back to how the game draws them");
    }
}

bool Online::Enabled()
{
    ReadSettingsOnce();
    return g_onlineEnabled;
}

void Online::Tick(uintptr_t localPawn, bool inMatch)
{
    ReadSettingsOnce();

    const ULONGLONG now = GetTickCount64();

    if (!g_onlineEnabled)
    {
        if (g_active)
            Stop();

        SetStatus("Off");
        return;
    }

    const bool steam = ResolveSteam();

    if (!g_active && steam)
    {
        g_active = true;
        SetRelayOnly(true);
        Log("[online] on (Phase 7: other n1ssan players' guns, knives, gloves "
            "and agents are painted on your screen only)");
    }

    if (!steam)
    {
        SetStatus("Steam P2P isn't available");
        return;
    }

    if (!inMatch)
    {
        for (auto& [steamId, peer] : g_peers)
        {
            (void)steamId;
            peer.here = false;
        }

        Receive(now);
        SetStatus("On - waiting for a match");
        return;
    }

    std::uint8_t team = 0;

    if (localPawn)
        SafeReadU8(localPawn + g_off.PAWN_TeamNum, team);

    if (now >= g_nextScan)
    {
        g_nextScan = now + 1000;
        BuildPacket(team);
        ScanPlayers();

        for (auto& [steamId, peer] : g_peers)
        {
            if (peer.here)
                CheckSession(steamId, peer, now);
        }
    }

    Receive(now);
    SendDue(now);

    if (now >= g_nextApply)
    {
        int32_t health = 0;
        const bool dead =
            localPawn && SafeReadI32(localPawn + g_off.PAWN_Health, health) && health <= 0;

        g_nextApply = now + (dead ? APPLY_DEAD_INTERVAL_MS : APPLY_INTERVAL_MS);
        ApplyPeerSkins(localPawn);
    }

    if (now >= g_nextStatus)
    {
        g_nextStatus = now + 500;
        PublishView(now);

        int here = 0;
        int answered = 0;

        for (const auto& [steamId, peer] : g_peers)
        {
            (void)steamId;
            here += peer.here ? 1 : 0;
            answered += peer.answered ? 1 : 0;
        }

        char text[160];
        std::snprintf(text, sizeof(text),
            "On - %d player(s) here, %d on n1ssan", here, answered);
        SetStatus(text);
    }
}

void Online::Shutdown()
{
    if (g_steam.ok)
    {
        for (const auto& [steamId, peer] : g_peers)
        {
            if (peer.answered)
                CloseWith(steamId);
        }
    }

    SetRelayOnly(false);
    g_peers.clear();
    g_knifeOriginal.clear();
    g_pawns.clear();
    g_active = false;
}

std::string Online::Status()
{
    const std::lock_guard<std::mutex> lock(g_viewMutex);
    return g_status;
}

std::vector<Online::PeerView> Online::Peers()
{
    const std::lock_guard<std::mutex> lock(g_viewMutex);
    return g_view;
}

bool Online::RemoteSkin(uint32_t accountId, uint16_t definition, TargetSkin& out)
{
    if (!accountId || !definition)
        return false;

    for (const auto& [steamId, peer] : g_peers)
    {
        if (!peer.answered)
            continue;

        if (static_cast<uint32_t>(steamId & 0xFFFFFFFFull) != accountId)
            continue;

        const auto entry = peer.loadout.guns.find(definition);
        if (entry == peer.loadout.guns.end())
            return false;

        out = TargetSkin{};
        out.paintKit = entry->second.paintKit;
        out.resolvedSeed = static_cast<int>(entry->second.seed);
        out.wear = entry->second.wear;
        out.statTrak = entry->second.statTrak >= 0;
        out.statTrakKills = static_cast<int>((std::max)(entry->second.statTrak, 0));
        out.souvenir = (entry->second.flags & ENTRY_SOUVENIR) != 0;
        out.defIndex = definition;
        return true;
    }

    return false;
}
