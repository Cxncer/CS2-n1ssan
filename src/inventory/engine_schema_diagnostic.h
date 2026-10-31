#pragma once

#include <cstdint>

// Resolve C_BaseEntity->m_nSubclassID from the live engine schema.
// Returns false until schemasystem.dll and its type scope are available.
bool ResolveSubclassOffset(uintptr_t& offset);

// Optional startup diagnostic.
void RunEngineSchemaDiagnostic();