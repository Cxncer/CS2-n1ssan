// n1ssan-dll / src/memory/access.cpp
// Safe read/write primitives. Carried forward from v9.0.2 without changes.

#include "memory/access.h"

bool SafeReadU8(uintptr_t a, uint8_t& v)
{
    __try { v = *reinterpret_cast<uint8_t*>(a); return true; }
    __except (1) { return false; }
}

bool SafeReadU16(uintptr_t a, uint16_t& v)
{
    __try { v = *reinterpret_cast<uint16_t*>(a); return true; }
    __except (1) { return false; }
}

bool SafeReadU32(uintptr_t a, uint32_t& v)
{
    __try { v = *reinterpret_cast<uint32_t*>(a); return true; }
    __except (1) { return false; }
}

bool SafeReadI32(uintptr_t a, int32_t& v)
{
    __try { v = *reinterpret_cast<int32_t*>(a); return true; }
    __except (1) { return false; }
}

bool SafeReadFloat(uintptr_t a, float& v)
{
    __try { v = *reinterpret_cast<float*>(a); return true; }
    __except (1) { return false; }
}

bool SafeReadQword(uintptr_t a, uintptr_t& v)
{
    __try { v = *reinterpret_cast<uintptr_t*>(a); return true; }
    __except (1) { return false; }
}

bool SafeWriteU8(uintptr_t a, uint8_t v)
{
    __try { *reinterpret_cast<uint8_t*>(a) = v; return true; }
    __except (1) { return false; }
}

bool SafeWriteU16(uintptr_t a, uint16_t v)
{
    __try { *reinterpret_cast<uint16_t*>(a) = v; return true; }
    __except (1) { return false; }
}

bool SafeWriteU32(uintptr_t a, uint32_t v)
{
    __try { *reinterpret_cast<uint32_t*>(a) = v; return true; }
    __except (1) { return false; }
}

bool SafeWriteI32(uintptr_t a, int32_t v)
{
    __try { *reinterpret_cast<int32_t*>(a) = v; return true; }
    __except (1) { return false; }
}

bool SafeWriteFloat(uintptr_t a, float v)
{
    __try { *reinterpret_cast<float*>(a) = v; return true; }
    __except (1) { return false; }
}