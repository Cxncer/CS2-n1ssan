// n1ssan-dll / src/sdk/entities.cpp
// Verbatim port of n1ssan-matchdetect v1.1 traversal + pawn resolution.
// NO Loot code. NO GetLocalPawnFast/GetLocalPawnViaController wrappers.

#include "sdk/entities.h"
#include "sdk/handles.h"
#include "config/offsets.h"
#include "memory/access.h"
#include "memory/scanner.h"
#include "diagnostics/log.h"

uintptr_t g_entityListGlobal = 0;

bool HandleValid(uint32_t h)
{
    return h != 0 && h != 0xFFFFFFFF && (h & ENT_HANDLE_MASK) != ENT_HANDLE_MASK;
}

uint32_t HandleIndex(uint32_t h)
{
    return h & ENT_HANDLE_MASK;
}

uintptr_t ReadHandle(uintptr_t base, uintptr_t off)
{
    uint32_t h = 0;
    if (!SafeReadU32(base + off, h)) return 0;
    return h;
}

// Verbatim from matchdetect: ResolveEntity(entitySystem, handle, client)
uintptr_t GetEntityByHandle(uint32_t handle)
{
    if (!g_entityListGlobal || !handle || handle == 0xFFFFFFFF) return 0;

    uint32_t idx = handle & 0x7FFF;
    if (idx == 0 || idx == 0x7FFF) return 0;

    uint32_t chunkIdx = idx >> 9;
    uint32_t idxInChunk = idx & 0x1FF;

    uintptr_t chunk = 0;
    if (!SafeReadQword(g_entityListGlobal + (size_t)chunkIdx * 8 + 0x10, chunk) || !chunk)
        return 0;

    uintptr_t ent = 0;
    if (!SafeReadQword(chunk + (size_t)idxInChunk * 0x70, ent) || !ent)
        return 0;

    ModuleInfo client = GetClientModule();
    uintptr_t vt = 0;
    if (!SafeReadQword(ent, vt) || !client.inside(vt))
        return 0;

    return ent;
}

// Verbatim from matchdetect: dwLocalPlayerPawn @ 0x25676D8, then dwLocalPlayerController @ 0x253EEF8 → m_hPlayerPawn @ 0x92C → ResolveEntity
uintptr_t GetLocalPawn()
{
    ModuleInfo client = GetClientModule();
    if (!client.valid()) return 0;

    // ---- Controller → handle → resolve FIRST (reflects in-match pawn changes) ----
    uintptr_t ctrl = 0;
    if (SafeReadQword(RVA_LOCALPLAYERCONTROLLER, ctrl) && ctrl >= 0x10000)
    {
        uint32_t h = 0;
        if (SafeReadU32(ctrl + FB_CTRL_hPawn, h) && h != 0 && h != 0xFFFFFFFF)
        {
            uintptr_t resolved = GetEntityByHandle(h);
            if (resolved > 0x10000) return resolved;
        }
    }

    // ---- Fallback: direct dwLocalPlayerPawn read ----
    uintptr_t pawn = 0;
    if (SafeReadQword(RVA_LOCALPLAYERPAWN, pawn) && pawn > 0x10000)
        return pawn;

    return 0;
}