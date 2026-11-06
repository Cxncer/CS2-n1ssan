// n1ssan-dll / src/inventory/loadout.cpp
// JSON parser + weapon def-index table.
// Legacy parser retained for the current runtime integration.
//
// The JSON format expected by this parser:
//   { "version": N, "skins": [ { "weapon": "...", "name": "...",
//                                "paintKit": N, "float": F, "seed": N,
//                                "team": "T"|"CT", "slot": "weapon"|... }, ... ] }
// Alternate: a bare array [ { ... }, { ... } ]
//
// Rejects unknown weapons (logs "skip unknown weapon").

#include "inventory/loadout.h"
#include "inventory/armory_contract.h"
#include "diagnostics/log.h"

#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <atomic>
#include <mutex>
#include <thread>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <windows.h>
#include <cstring>

std::unordered_map<uint32_t, TargetSkin> g_targets;
bool        g_enabled = true;
std::string g_loadoutSource;
std::string g_bridgeDirectory;

// ---- Weapon def-index table ----

struct WeaponEntry
{
    const char* name;
    uint16_t    defIndex;
    const char* slot;
};

static const WeaponEntry kWeapons[] =
{
    // Pistols
    {"glock-18", 4, "weapon"}, {"glock", 4, "weapon"},
    {"usp-s", 61, "weapon"}, {"p2000", 32, "weapon"}, {"p250", 36, "weapon"},
    {"five-seven", 3, "weapon"}, {"tec-9", 30, "weapon"}, {"cz75-auto", 63, "weapon"},
    {"desert eagle", 1, "weapon"}, {"deagle", 1, "weapon"},
    {"dual berettas", 2, "weapon"}, {"r8 revolver", 64, "weapon"},
    // SMGs
    {"mac-10", 17, "weapon"}, {"mp9", 34, "weapon"}, {"mp7", 33, "weapon"},
    {"mp5-sd", 23, "weapon"}, {"ump-45", 24, "weapon"}, {"p90", 19, "weapon"},
    {"pp-bizon", 26, "weapon"},
    // Rifles
    {"galil ar", 13, "weapon"}, {"galil", 13, "weapon"},
    {"famas", 10, "weapon"}, {"ak-47", 7, "weapon"}, {"ak47", 7, "weapon"},
    {"m4a4", 16, "weapon"}, {"m4a1-s", 60, "weapon"},
    {"ssg 08", 40, "weapon"}, {"ssg08", 40, "weapon"},
    {"sg 553", 39, "weapon"}, {"aug", 8, "weapon"},
    {"awp", 9, "weapon"}, {"g3sg1", 11, "weapon"}, {"scar-20", 38, "weapon"},
    // Shotguns
    {"nova", 35, "weapon"}, {"xm1014", 25, "weapon"}, {"mag-7", 27, "weapon"},
    {"sawed-off", 29, "weapon"},
    // MG
    {"negev", 28, "weapon"}, {"m249", 14, "weapon"},
    // Knives
    {"bayonet", 500, "knife"}, {"classic knife", 503, "knife"},
    {"flip knife", 505, "knife"}, {"gut knife", 506, "knife"},
    {"karambit", 507, "knife"}, {"m9 bayonet", 508, "knife"},
    {"huntsman knife", 509, "knife"}, {"falchion knife", 512, "knife"},
    {"bowie knife", 514, "knife"}, {"butterfly knife", 515, "knife"},
    {"shadow daggers", 516, "knife"}, {"paracord knife", 517, "knife"},
    {"survival knife", 518, "knife"}, {"ursus knife", 519, "knife"},
    {"navaja knife", 520, "knife"}, {"nomad knife", 521, "knife"},
    {"stiletto knife", 522, "knife"}, {"talon knife", 523, "knife"},
    {"skeleton knife", 525, "knife"}, {"kukri knife", 526, "knife"},
    // Gloves
    {"sport gloves", 5030, "glove"},
    {"driver gloves", 5031, "glove"},
    {"hand wraps", 5032, "glove"},
    {"moto gloves", 5033, "glove"},
    {"specialist gloves", 5034, "glove"},
    {"hydra gloves", 5035, "glove"},
    {"broken fang gloves", 4725, "glove"},
    {"bloodhound gloves", 5027, "glove"},
};

static std::string ToLower(std::string s)
{
    for (auto& c : s) c = (char)tolower((unsigned char)c);
    return s;
}

static std::string Trim(std::string s)
{
    size_t a = s.find_first_not_of(" \t\r\n");
    if (a == std::string::npos) return "";
    size_t b = s.find_last_not_of(" \t\r\n");
    return s.substr(a, b - a + 1);
}

static const WeaponEntry* FindWeapon(const std::string& n)
{
    auto key = ToLower(Trim(n));
    for (const auto& e : kWeapons)
        if (key == e.name) return &e;
    return nullptr;
}

// ---- Minimal JSON scanner ----
// Handles just enough of the format to parse our known schema.
// Does not handle: comments, escape sequences in keys, unicode escapes.

class JScanner
{
public:
    const std::string& s;
    size_t i = 0;

    JScanner(const std::string& src) : s(src) {}

    void Ws()
    {
        while (i < s.size() && (s[i] == ' ' || s[i] == '\t' || s[i] == '\r' || s[i] == '\n'))
            ++i;
    }

    bool Match(char c)
    {
        Ws();
        if (i < s.size() && s[i] == c) { ++i; return true; }
        return false;
    }

    char Peek()
    {
        Ws();
        return i < s.size() ? s[i] : '\0';
    }

    std::string Str()
    {
        Ws();
        std::string o;
        if (i >= s.size() || s[i] != '"') return o;
        ++i;

        while (i < s.size())
        {
            const char c = s[i++];
            if (c == '"')
                break;

            if (c != '\\')
            {
                o.push_back(c);
                continue;
            }

            if (i >= s.size())
                break;

            const char escaped = s[i++];
            switch (escaped)
            {
            case '"':  o.push_back('"');  break;
            case '\\': o.push_back('\\'); break;
            case '/':  o.push_back('/');  break;
            case 'b':  o.push_back('\b'); break;
            case 'f':  o.push_back('\f'); break;
            case 'n':  o.push_back('\n'); break;
            case 'r':  o.push_back('\r'); break;
            case 't':  o.push_back('\t'); break;
            case 'u':
                // Consume Unicode escape digits so ignored metadata remains
                // correctly tokenized. Runtime weapon fields are ASCII.
                if (i + 4 <= s.size())
                    i += 4;
                o.push_back('?');
                break;
            default:
                o.push_back(escaped);
                break;
            }
        }

        return o;
    }

    double Num()
    {
        Ws();
        std::string n;
        while (i < s.size() && (isdigit((unsigned char)s[i]) || s[i] == '-' || s[i] == '.' || s[i] == '+'))
            n.push_back(s[i++]);
        return n.empty() ? 0.0 : atof(n.c_str());
    }

    void SkipValue()
    {
        Ws();
        if (i >= s.size()) return;

        char c = s[i];
        if (c == '"') { Str(); return; }
        if (c == '{' || c == '[')
        {
            int depth = 0;
            char open = c;
            char close = (c == '{' ? '}' : ']');
            while (i < s.size())
            {
                if (s[i] == open) ++depth;
                else if (s[i] == close) { if (--depth == 0) { ++i; return; } }
                ++i;
            }
            return;
        }
        while (i < s.size() && (isalnum((unsigned char)s[i]) || s[i] == '-' || s[i] == '+' || s[i] == '.'))
            ++i;
    }
};

struct LoadoutItem
{
    std::string weapon, skinName, team = "T", slot = "weapon";
    int   paintKit = 0;
    float floatVal = 0.001f;
    int   seed = 0;
    bool  hasPaintKit = false;
};

static void ParseItem(JScanner& j, LoadoutItem& out)
{
    while (j.i < j.s.size())
    {
        j.Ws();
        if (j.Match('}')) break;

        std::string k = j.Str();
        if (k.empty()) { ++j.i; continue; }
        if (!j.Match(':')) continue;
        j.Ws();

        if (k == "weapon")   out.weapon = j.Str();
        else if (k == "name")     out.skinName = j.Str();
        else if (k == "team")     out.team = j.Str();
        else if (k == "slot")     out.slot = j.Str();
        else if (k == "paintKit") { out.paintKit = (int)j.Num(); out.hasPaintKit = true; }
        else if (k == "float")    out.floatVal = (float)j.Num();
        else if (k == "seed")     out.seed = (int)j.Num();
        else                       j.SkipValue();

        j.Match(',');
    }
}

static bool LoadJSON(const char* path, std::vector<LoadoutItem>& out, bool& enabled)
{
    enabled = true;

    std::ifstream f(path, std::ios::binary);
    if (!f) return false;

    std::stringstream ss;
    ss << f.rdbuf();
    std::string data = ss.str();
    if (data.empty()) return false;

    JScanner j(data);
    j.Ws();
    if (j.i >= j.s.size()) return false;

    // Bare array format
    if (j.s[j.i] == '[')
    {
        j.Match('[');
        while (j.i < j.s.size())
        {
            j.Ws();
            if (j.Match(']')) break;
            if (!j.Match('{')) break;
            LoadoutItem item;
            ParseItem(j, item);
            if (!item.weapon.empty()) out.push_back(item);
            j.Match(',');
        }
        return true;
    }

    // Object format with "skins": [...] and optional "enabled"
    if (!j.Match('{')) return false;

    while (j.i < j.s.size())
    {
        j.Ws();
        if (j.Match('}')) break;

        std::string k = j.Str();
        if (!j.Match(':')) break;

        if (k == "enabled")
        {
            j.Ws();
            if (j.s.compare(j.i, 4, "true") == 0) { enabled = true;  j.i += 4; }
            else if (j.s.compare(j.i, 5, "false") == 0) { enabled = false; j.i += 5; }
        }
        else if (k == "skins")
        {
            if (!j.Match('[')) return false;
            while (j.i < j.s.size())
            {
                j.Ws();
                if (j.Match(']')) break;
                if (!j.Match('{')) break;
                LoadoutItem item;
                ParseItem(j, item);
                if (!item.weapon.empty()) out.push_back(item);
                j.Match(',');
            }
        }
        else
        {
            j.SkipValue();
        }
        j.Match(',');
    }
    return true;
}

static bool IsRegularFile(const std::string& path)
{
    WIN32_FILE_ATTRIBUTE_DATA info{};
    return GetFileAttributesExA(path.c_str(), GetFileExInfoStandard, &info) &&
        !(info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY);
}

static bool IsBridgeRoot(const std::string& path)
{
    return IsRegularFile(path + "package.json") &&
        IsRegularFile(path + "bridge\\server.ts");
}

bool ResolveBridgeDirectory(std::string& bridgeDirectory)
{
    char configuredBridgeDir[MAX_PATH]{};
    const DWORD bridgeLength = GetEnvironmentVariableA(
        "N1SSAN_BRIDGE_DIR", configuredBridgeDir, MAX_PATH);

    if (bridgeLength > 0 && bridgeLength < MAX_PATH)
    {
        char absoluteBridgeDir[MAX_PATH]{};
        const DWORD absoluteLength = GetFullPathNameA(
            configuredBridgeDir, MAX_PATH, absoluteBridgeDir, nullptr);

        if (absoluteLength == 0 || absoluteLength >= MAX_PATH)
        {
            Log("[bridge] FATAL: N1SSAN_BRIDGE_DIR could not be resolved (error=%lu)",
                GetLastError());
            return false;
        }

        bridgeDirectory = absoluteBridgeDir;
        if (!bridgeDirectory.empty() &&
            bridgeDirectory.back() != '\\\\' &&
            bridgeDirectory.back() != '/')
            bridgeDirectory.push_back('\\\\');

        if (!IsBridgeRoot(bridgeDirectory))
        {
            Log("[bridge] FATAL: configured Bridge directory is invalid: %s",
                bridgeDirectory.c_str());
            return false;
        }

        return true;
    }

    if (bridgeLength >= MAX_PATH)
    {
        Log("[bridge] FATAL: N1SSAN_BRIDGE_DIR exceeds MAX_PATH");
        return false;
    }

    // A configured data file may be the only path supplied by an older
    // launcher. In Armory mode we still derive its containing Bridge root
    // without opening or validating the Loadout JSON itself.
    char configuredDataFile[MAX_PATH]{};
    const DWORD dataLength = GetEnvironmentVariableA(
        "N1SSAN_DATA_FILE", configuredDataFile, MAX_PATH);
    if (dataLength > 0 && dataLength < MAX_PATH)
    {
        char absoluteDataFile[MAX_PATH]{};
        const DWORD absoluteLength = GetFullPathNameA(
            configuredDataFile, MAX_PATH, absoluteDataFile, nullptr);

        if (absoluteLength > 0 && absoluteLength < MAX_PATH)
        {
            const std::string candidate = DirectoryOf(absoluteDataFile);
            if (IsBridgeRoot(candidate))
            {
                bridgeDirectory = candidate;
                Log("[bridge] resolved from configured data-file directory: %s",
                    bridgeDirectory.c_str());
                return true;
            }
        }
    }

    if (dataLength >= MAX_PATH)
    {
        Log("[bridge] FATAL: N1SSAN_DATA_FILE exceeds MAX_PATH");
        return false;
    }

    HMODULE dllModule = nullptr;
    if (!GetModuleHandleExA(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
        GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCSTR>(&ResolveBridgeDirectory),
        &dllModule))
    {
        Log("[bridge] FATAL: could not resolve DLL module (error=%lu)", GetLastError());
        return false;
    }

    char dllPath[MAX_PATH]{};
    const DWORD pathLength = GetModuleFileNameA(dllModule, dllPath, MAX_PATH);
    if (pathLength == 0 || pathLength >= MAX_PATH)
    {
        Log("[bridge] FATAL: could not read DLL path (error=%lu)", GetLastError());
        return false;
    }

    char* slash = strrchr(dllPath, '\\\\');
    char* forwardSlash = strrchr(dllPath, '/');
    if (!slash || (forwardSlash && forwardSlash > slash))
        slash = forwardSlash;

    if (!slash)
    {
        Log("[bridge] FATAL: DLL path has no directory: %s", dllPath);
        return false;
    }

    *(slash + 1) = 0;
    std::string searchDirectory = dllPath;

    while (!searchDirectory.empty())
    {
        std::string candidate = searchDirectory + "n1ssan-web-bridge\\\\";
        if (IsBridgeRoot(candidate))
        {
            bridgeDirectory = candidate;
            Log("[bridge] discovered Bridge directory: %s", bridgeDirectory.c_str());
            return true;
        }

        while (!searchDirectory.empty() &&
            (searchDirectory.back() == '\\\\' || searchDirectory.back() == '/'))
            searchDirectory.pop_back();

        const std::size_t parentSeparator = searchDirectory.find_last_of("\\\\/");
        if (parentSeparator == std::string::npos)
            break;

        searchDirectory.resize(parentSeparator + 1);
    }

    Log("[bridge] FATAL: could not locate n1ssan-web-bridge from DLL directory");
    return false;
}

static bool ResolveLoadoutPath(std::string& loadoutPath)
{
    char configuredDataFile[MAX_PATH]{};
    const DWORD configuredLength = GetEnvironmentVariableA(
        "N1SSAN_DATA_FILE", configuredDataFile, MAX_PATH);

    if (configuredLength > 0 && configuredLength < MAX_PATH)
    {
        char absolutePath[MAX_PATH]{};
        const DWORD absoluteLength = GetFullPathNameA(
            configuredDataFile, MAX_PATH, absolutePath, nullptr);

        if (absoluteLength == 0 || absoluteLength >= MAX_PATH)
        {
            Log("[loadout] FATAL: N1SSAN_DATA_FILE could not be resolved (error=%lu)",
                GetLastError());
            return false;
        }

        loadoutPath = absolutePath;
        g_bridgeDirectory = DirectoryOf(loadoutPath);
        Log("[loadout] configured data path: %s", loadoutPath.c_str());
        return IsRegularFile(loadoutPath);
    }

    if (configuredLength >= MAX_PATH)
    {
        Log("[loadout] FATAL: N1SSAN_DATA_FILE exceeds MAX_PATH");
        return false;
    }

    if (!ResolveBridgeDirectory(g_bridgeDirectory))
        return false;

    loadoutPath = g_bridgeDirectory + "n1ssan-data.json";
    Log("[loadout] Bridge data path: %s", loadoutPath.c_str());
    return IsRegularFile(loadoutPath);
}

static int BuildTargets(
    const std::vector<LoadoutItem>& items,
    std::unordered_map<uint32_t, TargetSkin>& out,
    bool verbose)
{
    int count = 0;

    for (const auto& it : items)
    {
        const WeaponEntry* w = FindWeapon(it.weapon);
        if (!w)
        {
            if (verbose)
                Log("[loadout] skip unknown weapon: %s", it.weapon.c_str());
            continue;
        }

        TargetSkin t;
        t.paintKit = it.paintKit;
        t.resolvedSeed = it.seed;
        t.wear = it.floatVal;
        t.legacyModel = false;
        t.statTrak = false;
        t.skinName = it.skinName;
        t.weaponName = it.weapon;
        t.team = it.team;
        t.slot = it.slot;
        t.defIndex = w->defIndex;

        out[TargetKey(w->defIndex, it.team)] = t;
        ++count;

        if (verbose)
        {
            Log("[loadout] %s/%s: %s (%s) pk=%d def=%u",
                t.team.c_str(), t.slot.c_str(),
                t.weaponName.c_str(), t.skinName.c_str(),
                t.paintKit, t.defIndex);
        }
    }

    return count;
}

// Staged runtime configuration, filled by the watcher thread and adopted on the
// game thread. Only the watcher touches g_stagedTargets under g_stageMutex;
// g_targets itself is only ever replaced from FrameStageNotify.
namespace
{
    std::mutex g_stageMutex;
    std::unordered_map<uint32_t, TargetSkin> g_stagedTargets;
    bool g_stagedEnabled = true;
    bool g_stageReady = false;
    std::atomic<bool> g_stagePending{ false };
}

void LoadLoadout()
{
    std::string loadoutPath;
    if (!ResolveLoadoutPath(loadoutPath))
    {
        Log("[loadout] FATAL: Bridge loadout file unavailable (error=%lu)", GetLastError());
        return;
    }

    WIN32_FILE_ATTRIBUTE_DATA fileInfo{};
    if (!GetFileAttributesExA(loadoutPath.c_str(), GetFileExInfoStandard, &fileInfo))
    {
        Log("[loadout] FATAL: JSON file unavailable: %s (error=%lu)",
            loadoutPath.c_str(), GetLastError());
        return;
    }

    ULARGE_INTEGER fileSize{};
    fileSize.HighPart = fileInfo.nFileSizeHigh;
    fileSize.LowPart = fileInfo.nFileSizeLow;
    if (fileSize.QuadPart == 0)
    {
        Log("[loadout] FATAL: JSON file is empty: %s", loadoutPath.c_str());
        return;
    }
    Log("[loadout] JSON file found (%llu bytes)", fileSize.QuadPart);

    std::vector<LoadoutItem> items;
    bool enabled = true;

    if (!LoadJSON(loadoutPath.c_str(), items, enabled) || items.empty())
    {
        Log("[loadout] FATAL: could not read or parse loadout JSON (or it contains no entries)");
        return;
    }

    g_loadoutSource = loadoutPath;
    if (g_bridgeDirectory.empty())
        g_bridgeDirectory = DirectoryOf(loadoutPath);
    g_enabled = enabled;
    g_targets.clear();

    const int count = BuildTargets(items, g_targets, true);

    Log("[loadout] %d items from %s", count, g_loadoutSource.c_str());
}

uint32_t TargetKey(uint16_t def, const std::string& team)
{
    uint32_t teamBit = 2;
    if (team == "T")  teamBit = 0;
    else if (team == "CT") teamBit = 1;
    return ((uint32_t)def << 8) | teamBit;
}

void StartLoadoutWatcher()
{
    if (g_loadoutSource.empty())
        return;

    static std::atomic<bool> started{ false };
    bool expected = false;
    if (!started.compare_exchange_strong(expected, true))
        return;

    std::thread([]()
    {
        const std::string source = g_loadoutSource;
        Log("[loadout] watching for runtime changes: %s", source.c_str());

        FILETIME lastWrite{};
        ULONGLONG lastSize = 0;
        bool haveBaseline = false;

        WIN32_FILE_ATTRIBUTE_DATA baseline{};
        if (GetFileAttributesExA(source.c_str(), GetFileExInfoStandard, &baseline))
        {
            lastWrite = baseline.ftLastWriteTime;
            ULARGE_INTEGER size{};
            size.HighPart = baseline.nFileSizeHigh;
            size.LowPart = baseline.nFileSizeLow;
            lastSize = size.QuadPart;
            haveBaseline = true;
        }

        for (;;)
        {
            Sleep(2000);

            WIN32_FILE_ATTRIBUTE_DATA info{};
            if (!GetFileAttributesExA(source.c_str(), GetFileExInfoStandard, &info))
                continue;

            ULARGE_INTEGER size{};
            size.HighPart = info.nFileSizeHigh;
            size.LowPart = info.nFileSizeLow;

            if (size.QuadPart == 0)
                continue;

            if (haveBaseline &&
                CompareFileTime(&info.ftLastWriteTime, &lastWrite) == 0 &&
                size.QuadPart == lastSize)
            {
                continue;
            }

            lastWrite = info.ftLastWriteTime;
            lastSize = size.QuadPart;
            haveBaseline = true;

            std::vector<LoadoutItem> items;
            bool enabled = true;

            if (!LoadJSON(source.c_str(), items, enabled) || items.empty())
            {
                Log("[loadout] reload skipped: file unreadable or empty");
                continue;
            }

            std::unordered_map<uint32_t, TargetSkin> staged;
            const int count = BuildTargets(items, staged, false);

            if (count == 0)
            {
                Log("[loadout] reload skipped: no known weapons in the file");
                continue;
            }

            {
                std::lock_guard<std::mutex> lock(g_stageMutex);
                g_stagedTargets = std::move(staged);
                g_stagedEnabled = enabled;
                g_stageReady = true;
            }

            g_stagePending.store(true, std::memory_order_release);
            Log("[loadout] reload staged: %d targets (applies outside an active match)", count);
        }
    }).detach();
}

bool HasStagedLoadout()
{
    return g_stagePending.load(std::memory_order_acquire);
}

bool AdoptStagedLoadout()
{
    if (!g_stagePending.load(std::memory_order_acquire))
        return false;

    std::lock_guard<std::mutex> lock(g_stageMutex);

    if (!g_stageReady)
    {
        g_stagePending.store(false, std::memory_order_release);
        return false;
    }

    g_targets = std::move(g_stagedTargets);
    g_enabled = g_stagedEnabled;
    g_stageReady = false;
    g_stagePending.store(false, std::memory_order_release);

    Log("[loadout] runtime loadout adopted (%zu targets)", g_targets.size());
    return true;
}