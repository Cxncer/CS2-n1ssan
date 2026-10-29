// n1ssan-dll / src/memory/scanner.cpp
// Pattern scanning. __try lives in a helper that takes only raw pointers
// so SEH doesn't fight with C++ object unwinding (fixes C2712).

#include "memory/scanner.h"
#include "memory/access.h"

#include <windows.h>
#include <Psapi.h>
#include <vector>
#include <cstdlib>

#pragma comment(lib, "psapi.lib")

ModuleInfo GetModule(const char* name)
{
    ModuleInfo m;
    HMODULE h = GetModuleHandleA(name);
    if (!h) return m;

    MODULEINFO mi{};
    if (!GetModuleInformation(GetCurrentProcess(), h, &mi, sizeof(mi)))
        return m;

    m.base = reinterpret_cast<uintptr_t>(mi.lpBaseOfDll);
    m.size = mi.SizeOfImage;
    return m;
}

ModuleInfo GetClientModule()
{
    return GetModule("client.dll");
}

namespace
{
    constexpr size_t MAX_PATTERN = 256;

    struct ParsedPattern
    {
        uint8_t bytes[MAX_PATTERN];
        bool    wild[MAX_PATTERN];
        size_t  len = 0;
    };

    bool ParsePattern(const char* pattern, ParsedPattern& out)
    {
        out.len = 0;
        const char* p = pattern;

        while (*p)
        {
            while (*p == ' ') ++p;
            if (!*p) break;

            if (out.len >= MAX_PATTERN) return false;

            if (*p == '?')
            {
                out.bytes[out.len] = 0;
                out.wild[out.len] = true;
                ++out.len;
                ++p;
                continue;
            }

            char hex[3] = { p[0], p[1], 0 };
            out.bytes[out.len] = (uint8_t)strtoul(hex, nullptr, 16);
            out.wild[out.len] = false;
            ++out.len;
            p += 2;
        }
        return out.len > 0;
    }

    // No C++ objects in scope — SEH is safe here.
    uintptr_t ScanRaw(const uint8_t* base, size_t size, const ParsedPattern& pp)
    {
        __try
        {
            for (size_t i = 0; i + pp.len <= size; ++i)
            {
                bool ok = true;
                for (size_t j = 0; j < pp.len; ++j)
                {
                    if (!pp.wild[j] && base[i + j] != pp.bytes[j]) { ok = false; break; }
                }
                if (ok) return (uintptr_t)(base + i);
            }
        }
        __except (1)
        {
            return 0;
        }
        return 0;
    }
}

uintptr_t ScanPattern(const ModuleInfo& mod, const char* pattern)
{
    if (!mod.valid()) return 0;

    ParsedPattern pp{};
    if (!ParsePattern(pattern, pp)) return 0;

    const auto* base = reinterpret_cast<const uint8_t*>(mod.base);
    return ScanRaw(base, mod.size, pp);
}

uintptr_t ResolveCallTarget(uintptr_t cs)
{
    if (!cs) return 0;

    uint32_t raw = 0;
    if (!SafeReadU32(cs + 1, raw)) return 0;

    return cs + 5 + (int32_t)raw;
}