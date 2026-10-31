#pragma once

#include <cstdint>

bool ResolveEngineSchemaField(
    const char* className,
    const char* fieldName,
    uintptr_t& offset);

bool ResolveSubclassOffset(uintptr_t& offset);

bool ResolveGloveSchemaOffsets();

void RunEngineSchemaDiagnostic();