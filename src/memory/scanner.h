// n1ssan-dll / src/memory/scanner.h
// Module introspection + IDA-style pattern scanner.
// Carried forward from v9.0.2 without changes.

#pragma once
#include <cstdint>
#include <cstddef>

// Module base + size, plus a few convenience helpers.
struct ModuleInfo
{
    uintptr_t base = 0;
    size_t    size = 0;

    bool      valid()  const { return base && size; }
    uintptr_t va(uintptr_t rva) const { return base + rva; }
    bool      inside(uintptr_t p) const { return p >= base && p < base + size; }
};

// Resolve a loaded module by name (e.g. "client.dll").
ModuleInfo GetModule(const char* name);

// Shorthand for GetModule("client.dll").
ModuleInfo GetClientModule();

// Scan `pattern` (IDA format: "48 89 5C 24 ? ...") in the given module.
// Returns the address of the first match, or 0 if not found.
uintptr_t ScanPattern(const ModuleInfo& mod, const char* pattern);

// Resolve the call target of a `call rel32` instruction at `cs`.
// `cs` points to the E8/E9 byte. Returns cs + 5 + rel32.
uintptr_t ResolveCallTarget(uintptr_t cs);