// n1ssan-dll / src/inventory/native_apply.cpp
//
// CS2's own inventory applies the Armory's stickers and charms.
//
// Ported from Lootline 1.5.2 (source/chadware2/features/unboxer/* and
// source/chadware2/features/skinchanger/*), which does the same for its own
// items and is the only known way to make the game's "use this sticker on that
// gun" popups finish for items the Steam Game Coordinator does not know:
//
//   * InventoryAPI.UseTool(toolId, itemId) is the Panorama script call CS2's
//     inventory popups make when the player uses one item on another. Hooked
//     here, so a request that involves Armory items is answered locally instead
//     of being sent to Valve - an unanswered request is the spinning circle.
//   * what the player chose in the popup (sticker slot, offset x/y, rotation,
//     wear; charm offset x/y/z) lives in client.dll globals that
//     CEconTool_Sticker / CEconTool_Keychain write; it is read at that moment.
//   * the work itself happens on the game's main thread, in panorama's
//     CUIEngine::RunFrame - the only thread panorama accepts events from. The
//     attributes are written there, the item is announced as updated the way a
//     Game Coordinator update announces it, the used-up sticker / charm item is
//     removed, and Panorama is told the customization finished.
//
// The apply is still CS2's: the player picks the sticker, the slot and the
// position in the game's own UI. Nothing here starts an apply of its own.

#include "inventory/native_apply.h"
#include "inventory/hde64.h"

#include "diagnostics/log.h"
#include "hooks/minhook_dynamic.h"
#include "inventory/armory_inventory.h"
#include "inventory/attachments.h"
#include "inventory/loot_patterns.h"
#include "inventory/loot_socache.h"
#include "inventory/runtime_mode.h"
#include "memory/scanner.h"

#define NOMINMAX
#include <Windows.h>

#include <algorithm>
#include <atomic>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <vector>

namespace NativeApply
{
    namespace
    {
        constexpr uint16_t DEF_STICKER = 1209;    // "Sticker" items the Armory projects
        constexpr uint16_t DEF_KEYCHAIN = 1355;   // "Charm" items the Armory projects

        // CMsgGCItemCustomizationNotification types plus the names CS2's
        // Panorama handler knows them by.
        constexpr int NOTIFICATION_STICKER_APPLY = 1086;    // "sticker_apply"
        constexpr int NOTIFICATION_KEYCHAIN_APPLY = 1091;   // "keychain_apply"

        constexpr uint64_t RETRY_INTERVAL_MS = 2000;
        constexpr int MAX_ATTEMPTS = 60;
        // The popup closes its own "applying" step first; the item follows a
        // moment later, like the Game Coordinator's answer does.
        constexpr uint64_t APPLY_DELAY_MS = 250;

        using ScriptFn = void(__fastcall*)(void* api, const char* toolId, const char* itemId);
        using AllocFn = void* (__fastcall*)(size_t size);
        using SetStringFn = void(__fastcall*)(void* field, const char* text);
        using DispatchFn = bool(__fastcall*)(void* engine, void** eventPointer);
        using RunFrameFn = void(__fastcall*)(void* engine);

        ScriptFn g_originalUseTool = nullptr;
        std::atomic_bool g_installed{ false };
        std::atomic<uint64_t> g_hookCalls{ 0 };
        std::atomic_bool g_inHook{ false };
        std::atomic_bool g_inJobs{ false };
        std::atomic<uint64_t> g_lastAttemptMs{ 0 };
        int g_attempts = 0;
        char g_lastError[160]{};

        // ---- module helpers ----

        struct Section
        {
            uint8_t* start = nullptr;
            size_t   size = 0;
            bool     executable = false;
        };

        constexpr int MAX_SECTIONS = 64;

        struct SectionList
        {
            Section entries[MAX_SECTIONS]{};
            int     count = 0;
        };

        // Plain storage only: a function with __try may not unwind objects.
        bool EnumerateSections(const ModuleInfo& mod, SectionList& out)
        {
            out = SectionList{};

            __try
            {
                const auto* base = reinterpret_cast<const uint8_t*>(mod.base);
                const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(base);
                if (dos->e_magic != IMAGE_DOS_SIGNATURE)
                    return false;

                const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS64*>(base + dos->e_lfanew);
                if (nt->Signature != IMAGE_NT_SIGNATURE)
                    return false;

                const auto* section = IMAGE_FIRST_SECTION(nt);
                for (unsigned i = 0; i < nt->FileHeader.NumberOfSections && out.count < MAX_SECTIONS;
                    ++i, ++section)
                {
                    const size_t size = section->Misc.VirtualSize
                        ? section->Misc.VirtualSize : section->SizeOfRawData;
                    if (size < 16)
                        continue;

                    out.entries[out.count].start = const_cast<uint8_t*>(base + section->VirtualAddress);
                    out.entries[out.count].size = size;
                    out.entries[out.count].executable =
                        (section->Characteristics & IMAGE_SCN_MEM_EXECUTE) != 0;
                    ++out.count;
                }
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                return false;
            }

            return out.count > 0;
        }

        // A zero-terminated name in the module's initialized data.
        uintptr_t FindModuleString(const ModuleInfo& module, const char* name)
        {
            SectionList sections;
            if (!EnumerateSections(module, sections))
                return 0;

            const size_t length = std::strlen(name) + 1;

            for (int index = 0; index < sections.count; ++index)
            {
                const Section& section = sections.entries[index];
                if (section.executable || section.size < length)
                    continue;

                __try
                {
                    for (size_t i = 0; i + length <= section.size; ++i)
                    {
                        if (section.start[i] != static_cast<uint8_t>(name[0]))
                            continue;
                        if (std::memcmp(section.start + i, name, length) == 0)
                            return reinterpret_cast<uintptr_t>(section.start + i);
                    }
                }
                __except (EXCEPTION_EXECUTE_HANDLER)
                {
                    continue;
                }
            }

            return 0;
        }

        // A Panorama script API function by its registered name. The client
        // registers each one as "lea rdx, [function] ; lea rcx, [name]".
        uintptr_t ResolveScriptFunction(const ModuleInfo& client, const char* name)
        {
            const uintptr_t text = FindModuleString(client, name);
            if (!text)
                return 0;

            SectionList sections;
            if (!EnumerateSections(client, sections))
                return 0;

            for (int index = 0; index < sections.count; ++index)
            {
                const Section& section = sections.entries[index];
                if (!section.executable || section.size < 16)
                    continue;

                __try
                {
                    for (size_t i = 0; i + 7 <= section.size; ++i)
                    {
                        const uint8_t* p = section.start + i;
                        if (p[0] != 0x48 || p[1] != 0x8D || p[2] != 0x0D)   // lea rcx, [rip + name]
                            continue;

                        int32_t displacement = 0;
                        std::memcpy(&displacement, p + 3, sizeof(displacement));
                        if (reinterpret_cast<uintptr_t>(p + 7 + displacement) != text)
                            continue;

                        if (i < 7)
                            continue;

                        const uint8_t* previous = p - 7;                     // lea rdx, [rip + function]
                        if (previous[0] != 0x48 || previous[1] != 0x8D || previous[2] != 0x15)
                            continue;

                        std::memcpy(&displacement, previous + 3, sizeof(displacement));
                        const uintptr_t function =
                            reinterpret_cast<uintptr_t>(previous + 7 + displacement);

                        if (client.inside(function))
                            return function;
                    }
                }
                __except (EXCEPTION_EXECUTE_HANDLER)
                {
                    continue;
                }
            }

            return 0;
        }

        // ---- the popup's placement ----

        const int32_t* g_stickerSlot = nullptr;
        const float*   g_stickerOffsetX = nullptr;
        const float*   g_stickerOffsetY = nullptr;
        const float*   g_stickerRotation = nullptr;
        const float*   g_stickerWear = nullptr;
        const float*   g_keychainOffsetX = nullptr;
        const float*   g_keychainOffsetY = nullptr;
        const float*   g_keychainOffsetZ = nullptr;

        bool Bytes(const uint8_t* at, const uint8_t* expected, size_t count)
        {
            return std::memcmp(at, expected, count) == 0;
        }

        template <typename T>
        T* RipTarget(const uint8_t* instruction, size_t displacementAt,
            size_t instructionLength, const ModuleInfo& client)
        {
            int32_t displacement = 0;
            std::memcpy(&displacement, instruction + displacementAt, sizeof(displacement));
            const uintptr_t target =
                reinterpret_cast<uintptr_t>(instruction + instructionLength + displacement);
            if (!target || !client.inside(target))
                return nullptr;
            return reinterpret_cast<T*>(target);
        }

        void ResolvePlacement(const ModuleInfo& client)
        {
            static constexpr uint8_t slotOpcode[] = { 0x8B, 0x05 };
            static constexpr uint8_t floatOpcode[] = { 0xF3, 0x0F, 0x10, 0x05 };

            const uintptr_t stickerRaw = ScanPattern(client, LootPatterns::StickerPlacement);
            Log("[use-tool] placement probe: sticker signature=%s", stickerRaw ? "FOUND" : "MISSING");
            if (stickerRaw)
            {
                const auto* p = reinterpret_cast<const uint8_t*>(stickerRaw);

                __try
                {
                    if (Bytes(p + 0x05, slotOpcode, sizeof(slotOpcode)))
                        g_stickerSlot = RipTarget<int32_t>(p + 0x05, 2, 6, client);
                    if (Bytes(p + 0x1C, floatOpcode, sizeof(floatOpcode)))
                        g_stickerOffsetX = RipTarget<float>(p + 0x1C, 4, 8, client);
                    static constexpr uint8_t floatOpcodeY[] = { 0xF3, 0x0F, 0x10, 0x0D };
                    if (Bytes(p + 0x35, floatOpcodeY, sizeof(floatOpcodeY)))
                        g_stickerOffsetY = RipTarget<float>(p + 0x35, 4, 8, client);
                    if (Bytes(p + 0x4C, floatOpcode, sizeof(floatOpcode)))
                        g_stickerRotation = RipTarget<float>(p + 0x4C, 4, 8, client);
                    if (Bytes(p + 0x62, floatOpcode, sizeof(floatOpcode)))
                        g_stickerWear = RipTarget<float>(p + 0x62, 4, 8, client);
                }
                __except (EXCEPTION_EXECUTE_HANDLER)
                {
                }
            }

            const uintptr_t keychainRaw = ScanPattern(client, LootPatterns::KeychainPlacement);
            Log("[use-tool] placement probe: keychain signature=%s", keychainRaw ? "FOUND" : "MISSING");
            if (keychainRaw)
            {
                const auto* p = reinterpret_cast<const uint8_t*>(keychainRaw);

                __try
                {
                    if (Bytes(p, floatOpcode, sizeof(floatOpcode)))
                        g_keychainOffsetX = RipTarget<float>(p, 4, 8, client);
                    static constexpr uint8_t floatOpcodeY[] = { 0xF3, 0x0F, 0x10, 0x0D };
                    if (Bytes(p + 0x27, floatOpcodeY, sizeof(floatOpcodeY)))
                        g_keychainOffsetY = RipTarget<float>(p + 0x27, 4, 8, client);
                    if (Bytes(p + 0x40, floatOpcode, sizeof(floatOpcode)))
                        g_keychainOffsetZ = RipTarget<float>(p + 0x40, 4, 8, client);
                }
                __except (EXCEPTION_EXECUTE_HANDLER)
                {
                }
            }
        }

        struct PlacementValues
        {
            float offsetX = 0.0f;
            float offsetY = 0.0f;
            float offsetZ = 0.0f;
            float rotation = 0.0f;
            float wear = 0.0f;
        };

        // Where CS2's sticker popup placed it: the position its placement is
        // relative to, plus the free-placement values.
        bool ReadStickerPlacement(int& slot, PlacementValues& out)
        {
            slot = -1;
            out = PlacementValues{};

            if (!g_stickerSlot || !g_stickerOffsetX || !g_stickerOffsetY ||
                !g_stickerRotation || !g_stickerWear)
                return false;

            __try
            {
                slot = *g_stickerSlot;
                out.offsetX = *g_stickerOffsetX;
                out.offsetY = *g_stickerOffsetY;
                out.rotation = *g_stickerRotation;
                out.wear = *g_stickerWear;
                return true;
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                slot = -1;
                out = PlacementValues{};
                return false;
            }
        }

        bool ReadKeychainPlacement(PlacementValues& out)
        {
            out = PlacementValues{};

            if (!g_keychainOffsetX || !g_keychainOffsetY || !g_keychainOffsetZ)
                return false;

            __try
            {
                out.offsetX = *g_keychainOffsetX;
                out.offsetY = *g_keychainOffsetY;
                out.offsetZ = *g_keychainOffsetZ;
                return true;
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                out = PlacementValues{};
                return false;
            }
        }

        // ---- the customization notification ----

        // Just enough of an x86-64 decoder to walk the Game Coordinator's reply
        // handler: the forms that appear there (mov / movzx / lea / call / test /
        // jcc / stack and register moves). An instruction it does not know ends
        // the walk, so a shifted handler leaves the notification off instead of
        // resolving a wrong pointer.
        struct Decoded
        {
            unsigned length = 0;
            uint8_t  opcode = 0;
            uint8_t  opcode2 = 0;
            bool     rexW = false;
            bool     rexB = false;
            bool     hasModrm = false;
            uint8_t  mod = 0;
            uint8_t  reg = 0;
            uint8_t  rm = 0;
            bool     ripRelative = false;
            bool     hasDisp32 = false;
            int32_t  disp32 = 0;
            uint32_t imm32 = 0;
        };

        bool Decode(const uint8_t* code, size_t available, Decoded& out)
        {
            out = Decoded{};

            // HDE64 is the same instruction-length decoder used by Lootline's
            // working notification resolver. It understands the full x64
            // instruction set encountered in current CS2 reply handlers.
            // HDE may inspect up to 15 bytes, so never call it near the scan
            // window boundary without a complete instruction buffer.
            if (!code || available < 15)
                return false;

            hde64s instruction{};
            const unsigned length = hde64_disasm(code, &instruction);
            if (length == 0 || (instruction.flags & F_ERROR))
                return false;

            out.length = length;
            out.opcode = instruction.opcode;
            out.opcode2 = instruction.opcode2;
            out.rexW = instruction.rex_w != 0;
            out.rexB = instruction.rex_b != 0;
            out.hasModrm = (instruction.flags & F_MODRM) != 0;
            out.mod = instruction.modrm_mod;
            out.reg = instruction.modrm_reg;
            out.rm = instruction.modrm_rm;
            out.hasDisp32 = (instruction.flags & F_DISP32) != 0;
            out.disp32 = static_cast<int32_t>(instruction.disp.disp32);
            out.ripRelative = out.hasModrm && instruction.modrm_mod == 0 &&
                instruction.modrm_rm == 5 && (instruction.flags & F_SIB) == 0;
            if (instruction.flags & F_IMM32)
                out.imm32 = instruction.imm.imm32;

            return true;
        }

        struct Notifier
        {
            void**          engine = nullptr;
            AllocFn         allocate = nullptr;
            const uint16_t* eventId = nullptr;
            void*           eventVtable = nullptr;
            SetStringFn     setString = nullptr;
            uint32_t        dispatchOffset = 0;
        };

        Notifier g_notifier;

        bool ResolveNotifier(const ModuleInfo& client)
        {
            const uintptr_t raw = ScanPattern(client, LootPatterns::CrateUnlockNotify);
            if (!raw)
            {
                Log("[use-tool] notification: CrateUnlockNotify signature not found");
                return false;
            }

            const auto* p = reinterpret_cast<const uint8_t*>(raw);

            // the engine global is the very first instruction (mov r14, [rip])
            Notifier found;
            found.engine = RipTarget<void*>(p, 3, 7, client);

            int phase = 0;
            const uint8_t* at = p;

            for (int count = 0; count < 64 && at < p + 0x100 && !found.setString; ++count)
            {
                Decoded decoded;
                const size_t offset = static_cast<size_t>(at - p);
                if (!Decode(at, 0x100 - offset, decoded))
                {
                    char bytes[64]{};
                    const size_t dumpCount = (std::min)(static_cast<size_t>(16), 0x100 - offset);
                    size_t used = 0;
                    for (size_t i = 0; i < dumpCount && used + 4 < sizeof(bytes); ++i)
                    {
                        const int written = std::snprintf(
                            bytes + used, sizeof(bytes) - used, "%02X%s",
                            at[i], i + 1 == dumpCount ? "" : " ");
                        if (written <= 0) break;
                        used += static_cast<size_t>(written);
                    }
                    Log("[use-tool] notification: decode failed at instruction %d offset=0x%zX phase=%d bytes=[%s]",
                        count, offset, phase, bytes);
                    return false;
                }

                const uint8_t* next = at + decoded.length;

                switch (phase)
                {
                case 0:   // mov ecx, 30h - the event's size
                    if (decoded.opcode == 0xB9 && decoded.imm32 == 0x30)
                        phase = 1;
                    break;

                case 1:   // mov r64, [rax + disp32] - the engine's dispatch slot
                    if (decoded.opcode == 0x8B && decoded.rexW && !decoded.rexB &&
                        decoded.mod == 2 && decoded.rm == 0 && decoded.hasDisp32)
                    {
                        found.dispatchOffset = static_cast<uint32_t>(decoded.disp32);
                        phase = 2;
                    }
                    break;

                case 2:   // call - the game's allocator
                    if (decoded.opcode == 0xE8)
                    {
                        found.allocate = reinterpret_cast<AllocFn>(
                            const_cast<uint8_t*>(next) + static_cast<int32_t>(decoded.imm32));
                        phase = 3;
                    }
                    break;

                case 3:   // movzx r32, word [rip + id] - the event's id
                    if (decoded.opcode2 == 0xB7 && decoded.ripRelative)
                    {
                        found.eventId = reinterpret_cast<const uint16_t*>(
                            const_cast<uint8_t*>(next) + decoded.disp32);
                        phase = 4;
                    }
                    break;

                case 4:   // lea r64, [rip + vtable]
                    if (decoded.opcode == 0x8D && decoded.rexW && decoded.ripRelative)
                    {
                        found.eventVtable = const_cast<uint8_t*>(next) + decoded.disp32;
                        phase = 5;
                    }
                    break;

                default:  // call - the engine's string setter
                    if (decoded.opcode == 0xE8)
                        found.setString = reinterpret_cast<SetStringFn>(
                            const_cast<uint8_t*>(next) + static_cast<int32_t>(decoded.imm32));
                    break;
                }

                at = next;
            }

            const auto inside = [&](const void* address)
            {
                return address && client.inside(reinterpret_cast<uintptr_t>(address));
            };

            if (!found.setString || !inside(found.engine) ||
                !inside(reinterpret_cast<const void*>(found.allocate)) ||
                !inside(found.eventId) || !inside(found.eventVtable) ||
                !inside(reinterpret_cast<const void*>(found.setString)))
            {
                Log("[use-tool] notification: the reply handler doesn't match (phase %d)", phase);
                return false;
            }

            if (found.dispatchOffset == 0 || found.dispatchOffset >= 0x1000 ||
                (found.dispatchOffset % 8) != 0)
            {
                Log("[use-tool] notification: the dispatch slot makes no sense (0x%X)",
                    found.dispatchOffset);
                return false;
            }

            g_notifier = found;

            Log("[use-tool] notification: engine=0x%p dispatch=vfunc %u eventId=%u",
                (void*)g_notifier.engine, g_notifier.dispatchOffset / 8,
                static_cast<unsigned>(*g_notifier.eventId));
            return true;
        }

        // Tells Panorama a customization finished, the way the Game Coordinator
        // reply handler tells it: a 0x30-byte event from the game's allocator
        // handed to the UI engine's dispatch. Main thread only.
        bool DispatchCustomization(int type, const char* typeName, uint64_t itemId)
        {
            if (!g_notifier.engine || !g_notifier.allocate || !g_notifier.eventId ||
                !g_notifier.eventVtable || !g_notifier.setString)
                return false;

            char idText[32]{};
            std::snprintf(idText, sizeof(idText), "%llu",
                static_cast<unsigned long long>(itemId));

            __try
            {
                void* engine = *g_notifier.engine;
                if (!engine)
                    return false;

                const auto dispatch = reinterpret_cast<DispatchFn>(
                    (*reinterpret_cast<void***>(engine))[g_notifier.dispatchOffset / 8]);
                if (!dispatch)
                    return false;

                auto* event = static_cast<uint8_t*>(g_notifier.allocate(0x30));
                if (!event)
                    return false;

                std::memset(event, 0, 0x30);
                *reinterpret_cast<void**>(event) = g_notifier.eventVtable;
                *reinterpret_cast<uint16_t*>(event + 0x08) = *g_notifier.eventId;
                *reinterpret_cast<uint64_t*>(event + 0x0C) = 0xFFFFFFFF00000000ull;
                *reinterpret_cast<int32_t*>(event + 0x28) = type;
                g_notifier.setString(event + 0x20, typeName);
                g_notifier.setString(event + 0x18, idText);

                void* eventPointer = event;
                return dispatch(engine, &eventPointer);
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                return false;
            }
        }

        // ---- the game's main thread ----

        RunFrameFn g_originalRunFrame = nullptr;
        std::atomic_bool g_runFrameHooked{ false };
        std::atomic<uint64_t> g_lastRunFrameAttemptMs{ 0 };

        void ProcessJobs();

        // panorama's frame, on the game's main thread - the only thread panorama
        // accepts events from. Before the original, so the popup sees the result
        // in this very frame.
        void __fastcall HkRunFrame(void* engine)
        {
            if (!g_inJobs.load())
                ProcessJobs();

            if (g_originalRunFrame)
                g_originalRunFrame(engine);
        }

        bool TryInstallRunFrame(const ModuleInfo& client)
        {
            if (g_runFrameHooked.load())
                return true;

            if (!g_notifier.engine)
                return false;

            // A full pattern scan of panorama.dll: not once per frame.
            const uint64_t now = NowMs();
            const uint64_t previous = g_lastRunFrameAttemptMs.load();

            if (previous != 0 && now - previous < RETRY_INTERVAL_MS)
                return false;

            g_lastRunFrameAttemptMs.store(now);

            const ModuleInfo panorama = GetModule("panorama.dll");
            if (!panorama.valid())
                return false;

            const uintptr_t runFrame = ScanPattern(panorama, LootPatterns::UiEngineRunFrame);
            if (!runFrame)
                return false;

            void* engine = nullptr;
            __try
            {
                engine = *g_notifier.engine;
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                return false;
            }

            if (!engine)
                return false;

            auto** vtable = *reinterpret_cast<void***>(engine);
            if (!vtable)
                return false;

            int slot = -1;

            for (int i = 0; i < 64; ++i)
            {
                if (reinterpret_cast<uintptr_t>(vtable[i]) == runFrame)
                {
                    slot = i;
                    break;
                }
            }

            if (slot < 0)
                return false;

            DWORD oldProtect = 0;
            if (!VirtualProtect(&vtable[slot], sizeof(void*), PAGE_READWRITE, &oldProtect))
                return false;

            g_originalRunFrame = reinterpret_cast<RunFrameFn>(vtable[slot]);
            vtable[slot] = reinterpret_cast<void*>(&HkRunFrame);
            VirtualProtect(&vtable[slot], sizeof(void*), oldProtect, &oldProtect);

            g_runFrameHooked.store(true);
            Log("[use-tool] main thread: panorama CUIEngine::RunFrame vfunc %d (0x%p)", slot,
                (void*)runFrame);
            (void)client;
            return true;
        }

        // ---- applying ----

        int FirstFreeStickerSlot(const Attachments::Set& set)
        {
            for (int slot = 0; slot < Attachments::STICKER_SLOTS; ++slot)
            {
                if (!set.stickers[slot].present || set.stickers[slot].kit <= 0)
                    return slot;
            }

            return -1;
        }

        const ArmoryInventory::ManagedItem* FindManaged(
            const std::vector<ArmoryInventory::ManagedItem>& items, uint64_t id)
        {
            for (const ArmoryInventory::ManagedItem& item : items)
            {
                if (item.id == id)
                    return &item;
            }

            return nullptr;
        }

        // A sticker or charm that was just used up: a second UseTool naming it
        // (a double click, the popup repeating) must not fall through to Valve
        // once the item is gone from the local inventory.
        struct ConsumedTool
        {
            uint64_t id = 0;
            uint64_t at = 0;
        };

        constexpr int MAX_CONSUMED = 8;
        constexpr uint64_t CONSUMED_WINDOW_MS = 30000;
        ConsumedTool g_consumed[MAX_CONSUMED]{};

        void RememberConsumed(uint64_t id)
        {
            const uint64_t now = NowMs();

            for (ConsumedTool& entry : g_consumed)
            {
                if (entry.id == 0 || now - entry.at > CONSUMED_WINDOW_MS)
                {
                    entry.id = id;
                    entry.at = now;
                    return;
                }
            }

            g_consumed[0].id = id;
            g_consumed[0].at = now;
        }

        bool RecentlyConsumed(uint64_t id)
        {
            const uint64_t now = NowMs();

            for (const ConsumedTool& entry : g_consumed)
            {
                if (entry.id == id && now - entry.at <= CONSUMED_WINDOW_MS)
                    return true;
            }

            return false;
        }

        // One apply, captured when the popup made it and carried out a moment
        // later on the main thread.
        struct Job
        {
            bool     charm = false;
            uint64_t toolId = 0;
            uint64_t targetId = 0;
            int      kit = 0;
            int      seed = 0;
            int      position = -1;   // the popup's slot: where the sticker is drawn from
            char     toolInstanceId[128]{};
            bool     placed = false;
            float    wear = 0.0f;
            float    rotation = 0.0f;
            float    x = 0.0f;
            float    y = 0.0f;
            float    z = 0.0f;
            uint64_t dueMs = 0;
        };

        std::mutex g_jobsMutex;
        std::vector<Job> g_jobs;

        bool ApplySticker(const Job& job)
        {
            // The target's own state is the base: an inconclusive read must never
            // replace what the weapon already carries.
            Attachments::Set current;
            const bool completeSnapshot = LootSOCache::ReadAttachments(job.targetId, current);
            if (!completeSnapshot)
            {
                // Lootline reads occupied sticker slots through CS2's own item-view getters.
                // Unknown charm data is left untouched by the targeted attachment write.
                if (!Attachments::ReadStickerSlotsViaItemView(job.targetId, current))
                {
                    Log("[use-tool] sticker %d: %016llX could not be read by SOCache or CS2 ItemView - not applying",
                        job.kit, static_cast<unsigned long long>(job.targetId));
                    return false;
                }
                Log("[use-tool] sticker target read through CS2 ItemView fallback; preserving unobserved attributes");
            }

            Attachments::Set next = current;
            const int slot = FirstFreeStickerSlot(next);

            if (slot < 0)
            {
                Log("[use-tool] sticker %d: %016llX has no free sticker slot (all %d taken)",
                    job.kit, static_cast<unsigned long long>(job.targetId),
                    Attachments::STICKER_SLOTS);
                return false;
            }

            Attachments::StickerSlot& sticker = next.stickers[slot];
            sticker.present = true;
            sticker.kit = job.kit;
            sticker.scale = 1.0f;
            sticker.wear = job.wear > 0.0f ? (std::min)(job.wear, 1.0f) : 0.0f;
            sticker.rotation = job.placed ? job.rotation : 0.0f;
            sticker.offsetX = job.placed ? job.x : 0.0f;
            sticker.offsetY = job.placed ? job.y : 0.0f;
            // The gun position the sticker is drawn at: where the popup placed it,
            // which is not necessarily the slot it is kept in.
            sticker.hasSchema = true;
            sticker.schema = job.position >= 0 ? job.position : slot;

            const bool written = LootSOCache::SyncAttachments(job.targetId, next);
            bool announced = false;

            if (written)
            {
                announced = LootSOCache::NotifyUpdated(job.targetId);
                // Verify the local inventory actually detached the consumed tool.
                const bool toolRemoved = LootSOCache::Remove(job.toolId, false);
                Log("[use-tool] consumed sticker item %016llX removal=%s",
                    static_cast<unsigned long long>(job.toolId), toolRemoved ? "SUCCESS" : "FAILED");
                if (toolRemoved) RememberConsumed(job.toolId);
                Attachments::RecordApplied(
                    job.targetId, next, job.toolInstanceId, false, slot, toolRemoved);
            }

            const bool notified = written &&
                DispatchCustomization(NOTIFICATION_STICKER_APPLY, "sticker_apply", job.targetId);

            Log("[use-tool] sticker %d applied to %016llX in slot %d (position %d): "
                "attributes %s, inventory %s, popup %s, sticker item %s",
                sticker.kit, static_cast<unsigned long long>(job.targetId), slot, sticker.schema,
                written ? "written" : "NOT written",
                announced ? "told" : "NOT told",
                notified ? "told" : "NOT told",
                written ? "used up" : "kept");
            return written;
        }

        bool ApplyCharm(const Job& job)
        {
            Attachments::Set current;
            if (!LootSOCache::ReadAttachments(job.targetId, current))
            {
                // Preserve existing stickers when the full SOCache snapshot is unavailable.
                // CS2's ItemView getters provide the same sticker-slot fallback used by ApplySticker.
                if (!Attachments::ReadStickerSlotsViaItemView(job.targetId, current))
                {
                    Log("[use-tool] charm target stickers could not be read through SOCache or CS2 ItemView; refusing incomplete apply");
                    return false;
                }
                Log("[use-tool] charm target sticker slots read through CS2 ItemView fallback; preserving stickers");
            }

            Attachments::Set next = current;
            Attachments::Charm& charm = next.charm;
            charm.present = true;
            charm.kit = job.kit;
            charm.seed = job.seed;
            charm.x = job.placed ? job.x : 0.0f;
            charm.y = job.placed ? job.y : 0.0f;
            charm.z = job.placed ? job.z : 0.0f;

            // Lootline writes these fields on every charm apply; zero clears any old
            // Sticker Slab sticker or highlight clip when a charm is replaced.
            charm.hasSticker = true;
            charm.sticker = 0;
            charm.hasHighlight = true;
            charm.highlight = 0;

            const bool written = LootSOCache::SyncAttachments(job.targetId, next);
            bool announced = false;

            if (written)
            {
                announced = LootSOCache::NotifyUpdated(job.targetId);
                // Verify the local inventory actually detached the consumed tool.
                const bool toolRemoved = LootSOCache::Remove(job.toolId, false);
                Log("[use-tool] consumed charm item %016llX removal=%s",
                    static_cast<unsigned long long>(job.toolId), toolRemoved ? "SUCCESS" : "FAILED");
                if (toolRemoved) RememberConsumed(job.toolId);
                Attachments::RecordApplied(
                    job.targetId, next, job.toolInstanceId, true, -1, toolRemoved);
            }

            const bool notified = written &&
                DispatchCustomization(NOTIFICATION_KEYCHAIN_APPLY, "keychain_apply", job.targetId);

            Log("[use-tool] charm %d (seed %d) hung on %016llX at x %.3f y %.3f z %.3f (%s): "
                "attributes %s, inventory %s, popup %s, charm item %s",
                charm.kit, charm.seed, static_cast<unsigned long long>(job.targetId),
                charm.x, charm.y, charm.z,
                job.placed ? "the popup's spot" : "no placement - the usual spot",
                written ? "written" : "NOT written",
                announced ? "told" : "NOT told",
                notified ? "told" : "NOT told",
                written ? "used up" : "kept");
            return written;
        }

        // Kept free of local objects so it may sit inside __try.
        void RunJob(const Job& job)
        {
            __try
            {
                if (job.charm)
                    ApplyCharm(job);
                else
                    ApplySticker(job);
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                Log("[use-tool] exception while applying - the item was left as it was");
            }
        }

        void ProcessJobs()
        {
            if (g_inJobs.exchange(true))
                return;

            std::vector<Job> due;
            const uint64_t now = NowMs();

            {
                std::lock_guard<std::mutex> lock(g_jobsMutex);

                for (auto it = g_jobs.begin(); it != g_jobs.end();)
                {
                    if (now >= it->dueMs)
                    {
                        due.push_back(*it);
                        it = g_jobs.erase(it);
                    }
                    else
                    {
                        ++it;
                    }
                }
            }

            for (const Job& job : due)
                RunJob(job);

            g_inJobs.store(false);
        }

        // True = handled locally, never sent to Valve. False = not ours, the
        // game's own path runs unchanged.
        bool QueueUseTool(const char* toolIdText, const char* itemIdText)
        {
            if (RuntimeModeState::Current() != RuntimeMode::Armory)
                return false;

            if (!toolIdText || !itemIdText || !*toolIdText || !*itemIdText)
                return false;

            const uint64_t toolId = _strtoui64(toolIdText, nullptr, 10);
            const uint64_t targetId = _strtoui64(itemIdText, nullptr, 10);

            if (!toolId || !targetId || toolId == targetId)
                return false;

            if (RecentlyConsumed(toolId))
            {
                Log("[use-tool] %llu was just used up - the repeat is answered locally",
                    static_cast<unsigned long long>(toolId));
                return true;
            }

            std::vector<ArmoryInventory::ManagedItem> items;
            if (!ArmoryInventory::SnapshotManagedItems(items))
                return false;

            const ArmoryInventory::ManagedItem* tool = FindManaged(items, toolId);
            const ArmoryInventory::ManagedItem* target = FindManaged(items, targetId);

            // Exact item identity on both sides: a sticker or charm the player
            // owns for real is Valve's, and a target that isn't an Armory item
            // is not ours to change.
            if (!tool || !target)
                return false;

            if (tool->definition != DEF_STICKER && tool->definition != DEF_KEYCHAIN)
                return false;

            const bool charm = tool->definition == DEF_KEYCHAIN;

            // The Armory projection stores a sticker/charm tool's kit identity
            // in its native tool fields (stickerKit / keychain / keychainSeed).
            // Attachments::Read is for attachments already applied to a weapon;
            // reading the tool as an attachment-bearing weapon always misses.
            Job job;
            job.charm = charm;
            job.toolId = toolId;
            job.targetId = targetId;
            strncpy_s(job.toolInstanceId, sizeof(job.toolInstanceId),
                tool->instanceId.c_str(), _TRUNCATE);
            job.dueMs = NowMs() + APPLY_DELAY_MS;

            if (charm)
            {
                if (tool->keychain <= 0)
                {
                    Log("[use-tool] charm tool %016llX has no projected keychain kit (keychain=%d) - forwarding",
                        static_cast<unsigned long long>(toolId), tool->keychain);
                    return false;
                }

                job.kit = tool->keychain;
                job.seed = tool->keychainSeed;

                PlacementValues placement;
                job.placed = ReadKeychainPlacement(placement);
                job.x = placement.offsetX;
                job.y = placement.offsetY;
                job.z = placement.offsetZ;

                Log("[use-tool] charm %d on %016llX: %s - applying",
                    job.kit, static_cast<unsigned long long>(targetId),
                    job.placed
                        ? "at the popup's spot"
                        : "the popup's spot could not be read - the usual spot");
            }
            else
            {
                if (tool->stickerKit <= 0)
                {
                    Log("[use-tool] sticker tool %016llX has no projected sticker kit (stickerKit=%d) - forwarding",
                        static_cast<unsigned long long>(toolId), tool->stickerKit);
                    return false;
                }

                job.kit = tool->stickerKit;
                job.wear = tool->wear;

                int popupSlot = -1;
                PlacementValues placement;
                job.placed = ReadStickerPlacement(popupSlot, placement);
                job.wear = placement.wear;
                job.rotation = placement.rotation;
                job.x = placement.offsetX;
                job.y = placement.offsetY;

                if (job.placed && popupSlot >= 0 && popupSlot < Attachments::STICKER_SLOTS)
                    job.position = popupSlot;

                Log("[use-tool] sticker %d on %016llX: %s - applying",
                    job.kit, static_cast<unsigned long long>(targetId),
                    job.placed
                        ? "at the popup's spot"
                        : "the popup's placement could not be read - first free slot, default position");
            }

            {
                std::lock_guard<std::mutex> lock(g_jobsMutex);

                for (const Job& pending : g_jobs)
                {
                    if (pending.toolId == job.toolId && pending.targetId == job.targetId)
                        return true;   // already applying (a double click)
                }

                g_jobs.push_back(job);
            }

            return true;
        }

        void __fastcall HkUseTool(void* api, const char* toolId, const char* itemId)
        {
            // Log at the actual detour boundary, before any Armory/mode/identity
            // filters. Previously every diagnostic was downstream of those
            // filters, so zero [use-tool] lines could not distinguish a dead
            // hook from a live hook forwarding an ordinary CS2 request.
            const uint64_t call = g_hookCalls.fetch_add(1) + 1;
            const bool trace = call <= 32 || (call % 128) == 0;
            if (trace)
            {
                Log("[use-tool] hook-entry #%llu mode=%d api=%p toolArg=%p targetArg=%p original=%p",
                    static_cast<unsigned long long>(call),
                    static_cast<int>(RuntimeModeState::Current()),
                    api, toolId, itemId, reinterpret_cast<void*>(g_originalUseTool));
            }

            if (g_inHook.exchange(true))
            {
                if (trace)
                    Log("[use-tool] hook-entry #%llu reentrant - forwarding to original",
                        static_cast<unsigned long long>(call));
                if (g_originalUseTool)
                    g_originalUseTool(api, toolId, itemId);
                return;
            }

            bool handled = false;

            __try
            {
                handled = QueueUseTool(toolId, itemId);
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                Log("[use-tool] hook-entry #%llu exception while reading request - forwarding",
                    static_cast<unsigned long long>(call));
                handled = false;
            }

            g_inHook.store(false);

            if (trace)
                Log("[use-tool] hook-entry #%llu decision=%s",
                    static_cast<unsigned long long>(call),
                    handled ? "handled locally" : "forwarded to CS2");

            if (handled)
                return;

            if (g_originalUseTool)
                g_originalUseTool(api, toolId, itemId);
        }
    }

    bool Ready()
    {
        return g_installed.load();
    }

    const char* LastError()
    {
        return g_lastError;
    }

    bool Initialize()
    {
        if (g_installed.load())
            return true;

        g_attempts += 1;
        Log("[use-tool] initialize attempt=%d installed=%d mode=%d",
            g_attempts, g_installed.load() ? 1 : 0,
            static_cast<int>(RuntimeModeState::Current()));

        if (!MH_CreateHook_p || !MH_EnableHook_p)
        {
            std::snprintf(g_lastError, sizeof(g_lastError), "MinHook unavailable");
            Log("[use-tool] %s", g_lastError);
            return false;
        }

        const ModuleInfo client = GetClientModule();
        if (!client.valid())
        {
            std::snprintf(g_lastError, sizeof(g_lastError), "client.dll unavailable");
            Log("[use-tool] %s", g_lastError);
            return false;
        }

        // Every apply needs what the popup placed; resolve it first so the log
        // says up front whether CS2's own placement survived a game update.
        ResolvePlacement(client);

        // The same function Lootline hooks: the client's UseTool, found by its
        // signature (the one LootSchema already resolves the inventory offset
        // from). The script registration is the fallback if it ever moves.
        const char* source = "signature";
        uintptr_t function = ScanPattern(client, LootPatterns::UseTool);

        if (!function)
        {
            function = ResolveScriptFunction(client, "UseTool");
            source = "InventoryAPI registration";
        }

        if (!function)
        {
            std::snprintf(g_lastError, sizeof(g_lastError), "UseTool not found (signature and API name)");
            Log("[use-tool] %s", g_lastError);
            return false;
        }

        if (MH_CreateHook_p(reinterpret_cast<void*>(function),
            reinterpret_cast<void*>(&HkUseTool),
            reinterpret_cast<void**>(&g_originalUseTool)) != 0)
        {
            std::snprintf(g_lastError, sizeof(g_lastError), "MH_CreateHook(UseTool) failed");
            Log("[use-tool] %s", g_lastError);
            return false;
        }

        if (MH_EnableHook_p(reinterpret_cast<void*>(function)) != 0)
        {
            std::snprintf(g_lastError, sizeof(g_lastError), "MH_EnableHook(UseTool) failed");
            Log("[use-tool] %s", g_lastError);
            return false;
        }

        const bool notifier = ResolveNotifier(client);

        g_installed.store(true);
        g_lastError[0] = '\0';

        Log("[use-tool] hook: ok at 0x%p via %s (CS2's inventory applies Armory stickers and charms)",
            (void*)function, source);
        Log("[use-tool] placement pointers: sticker slot=%p x=%p y=%p rotation=%p wear=%p; charm x=%p y=%p z=%p",
            static_cast<const void*>(g_stickerSlot), static_cast<const void*>(g_stickerOffsetX),
            static_cast<const void*>(g_stickerOffsetY), static_cast<const void*>(g_stickerRotation),
            static_cast<const void*>(g_stickerWear), static_cast<const void*>(g_keychainOffsetX),
            static_cast<const void*>(g_keychainOffsetY), static_cast<const void*>(g_keychainOffsetZ));
        Log("[use-tool] placement: sticker %s, charm %s",
            (g_stickerSlot && g_stickerOffsetX && g_stickerOffsetY && g_stickerRotation && g_stickerWear)
                ? "ok" : "NOT found - first free slot, default position",
            (g_keychainOffsetX && g_keychainOffsetY && g_keychainOffsetZ)
                ? "ok" : "NOT found - the usual spot");
        Log("[use-tool] popup notification: %s", notifier
            ? "ok (the applying spinner finishes)"
            : "NOT found - the item changes, the popup is not told");

        return true;
    }

    void Tick()
    {
        if (!g_installed.load())
        {
            if (g_attempts >= MAX_ATTEMPTS)
                return;

            const uint64_t now = NowMs();
            const uint64_t previous = g_lastAttemptMs.load();

            if (previous != 0 && now - previous < RETRY_INTERVAL_MS)
                return;

            g_lastAttemptMs.store(now);
            Initialize();
        }

        if (!g_installed.load())
            return;

        const ModuleInfo client = GetClientModule();
        if (client.valid())
            TryInstallRunFrame(client);

        // Without panorama's frame hook the item still changes, but the popup's
        // event would be sent from a thread panorama drops it on. FrameStageNotify
        // is only this stand-in.
        if (!g_runFrameHooked.load())
            ProcessJobs();
    }
}
