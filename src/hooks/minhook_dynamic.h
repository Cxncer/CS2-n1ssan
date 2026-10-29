#pragma once
#include <windows.h>

typedef int (WINAPI* MH_Initialize_t)();
typedef int (WINAPI* MH_CreateHook_t)(LPVOID pTarget, LPVOID pDetour, LPVOID* ppOriginal);
typedef int (WINAPI* MH_EnableHook_t)(LPVOID pTarget);
typedef int (WINAPI* MH_DisableHook_t)(LPVOID pTarget);

extern MH_Initialize_t  MH_Initialize_p;
extern MH_CreateHook_t  MH_CreateHook_p;
extern MH_EnableHook_t  MH_EnableHook_p;
extern MH_DisableHook_t MH_DisableHook_p;