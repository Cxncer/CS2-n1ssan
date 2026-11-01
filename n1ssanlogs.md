[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 20:49:17
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFB1F19924B -> rva 0x271EB28 (val=0000053193448800)
[auto-off] dwLocalPlayerController      hit 0x00007FFB1F0B55D0 -> rva 0x25413F8 (val=0000053228670200)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFB1E8D15D5 -> rva 0x2738160 (val=0000053193810A00)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFB20E9EB28
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFB20CC13F8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFB20EB8160
[schema-live] m_nSubclassID runtime=0x380 hardcoded=0x38C MISMATCH
[schema-live] subclass resolver ready: 0x380
[schema-gloves] C_CSPlayerPawn->m_EconGloves = 0x1770
[schema-gloves] C_CSPlayerPawn->m_bNeedToReApplyGloves = 0x176D
[schema-gloves] C_EconItemView->m_iItemDefinitionIndex = 0x1BA
[schema-gloves] C_EconItemView->m_iEntityQuality = 0x1BC
[schema-gloves] C_EconItemView->m_iItemIDHigh = 0x1D0
[schema-gloves] C_EconItemView->m_bInitialized = 0x1E8
[schema-gloves] C_EconItemView->m_bDisallowSOC = 0x1E9
[schema-gloves] C_EconItemView->m_bRestoreCustomMaterialAfterPrecache = 0x1B8
[schema-gloves] C_EconItemView->m_AttributeList = 0x208
[schema-gloves] C_EconItemView->m_NetworkedDynamicAttributes = 0x280
[schema-gloves] CAttributeList->m_Attributes = 0x8
[resolve] InvalidateDescription          @ 0x00007FFB1F920A20
[resolve] BuildModernSkin                @ 0x00007FFB1F5C53D0
[resolve] SetMeshGroupMask               @ 0x00007FFB1F245910
[resolve] RegenerateSkins                @ 0x00007FFB1EFAB330
[resolve] ReleaseCompositeMaterials      @ 0x00007FFB1FC6BB70
[resolve] GloveCreatePaintKit            @ 0x00007FFB1F910AA0
[resolve] AgentSetModel                  @ 0x00007FFB1F0E5B10
[resolve] KnifeUpdateSubclass            @ 0x00007FFB1E988FC0
[resolve] GloveSetBodyGroup              @ 0x00007FFB1F0E4A30
[resolve] MemAlloc                       @ 0x00007FFB33E0DD30
[resolve] MemFree                        @ 0x00007FFB33E0DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFB20E9EB28 -> 0x0000053193448800
[paintkit-schema] READY offset=0x2A0 kits=1481
[glove-paintkit-schema] READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FFB9BB40000)
[schema] CreateInterface: FOUND (00007FFB9BB77560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FFB9BBB6710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 0000053193934000
[schema] classCount: 542
[schema] classes: 0000053107602000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[glove-schema] READY
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFB1F90E2A5 -> ptrAddr 0x00007FFB20D783E0 -> es 0x0000053107B03DB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x0000053107B03DB0
[schema-probe] CEconItemSchema* = 0x0000053193909600
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x00000531FF750000 node0[+08]=0x00000531F8E89000 node0[+18]=0x0000053100000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x0000053193BCC1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x00000531FF770000 node0[+08]=0x0000000100000001 node0[+18]=0x00000531F8E89000
[schema-probe]   map @ schema+0x138 count=737 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x00000531C4FC2000 node0[+08]=0x00000531FE4A4C20 node0[+18]=0x00000531FE4A4D60
[schema-probe]   map @ schema+0x160 count=512 elements=0x0000053193848000 node0[+08]=0x00000531B0314E40 node0[+18]=0x00000531B0314740
[schema-probe]   map @ schema+0x170 count=12 elements=0x00000531F0ECDA00 node0[+08]=0x0000000100000001 node0[+18]=0x00000531FF7C8600
[schema-probe]   map @ schema+0x180 count=3 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x00000531F05B5000 node0[+08]=0xFFFFFF0000000002 node0[+18]=0x00007FFB20493B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x00000531F03F4000 node0[+08]=0x3F80000100000128 node0[+18]=0x00000531FBFE3941
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x00000531FF860400 node0[+08]=0x0000000100000001 node0[+18]=0x00000531FBF16CD1
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x00000531FF9E0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFB20493C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x00000531FE499890 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x00000531FF83CF20
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x00000531FA880000 node0[+08]=0x65735F0100000002 node0[+18]=0x00000531FB2691E0
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x00000531F03D0000 node0[+08]=0x0909220100000013 node0[+18]=0x00000531FB853DC0
[schema-probe]   map @ schema+0x300 count=102 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x00000531F8B5A000 node0[+08]=0xAAAAAA000000003E node0[+18]=0x00000531FEC333B0
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x00000531FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x00000531FB4A5700 node0[+08]=0x00000531FE42AD00 node0[+18]=0x00000531FE42ADC0
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000053100000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x00000531F0ECAE00 node0[+08]=0x00000531FE42A800 node0[+18]=0x00000531FE42A7A0
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000053100000013 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x400 count=19 elements=0x00000531B02FFA00 node0[+08]=0x00000531FE42A760 node0[+18]=0x00000531FE42A780
[schema-probe] sane map candidates: 29
[verify] items count=2059 elems=0x00000531FF750000
[verify]   items[0] key=3298073929 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=1226080256 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=546455844 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=613566759 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=134254593 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x00000531FA880000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x00000531FA880000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x00000531FF0E3920 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x00000531FF0E4020 name="sporty_poison_frog_blue_white"
=== [schema-probe] done ===
[loadout] T/weapon: Glock-18 (Fade) pk=38 def=4
[loadout] T/weapon: AK-47 (Inheritance) pk=1171 def=7
[loadout] T/weapon: AWP (Printstream) pk=1206 def=9
[loadout] T/weapon: Desert Eagle (Fennec Fox) pk=764 def=1
[loadout] T/weapon: P250 (Epicenter) pk=130 def=36
[loadout] T/weapon: Tec-9 (Nuclear Threat) pk=179 def=30
[loadout] T/weapon: MAC-10 (Neon Rider) pk=433 def=17
[loadout] T/weapon: Galil AR (Sugar Rush) pk=661 def=13
[loadout] T/knife: Flip Knife (Marble Fade) pk=413 def=505
[loadout] T/gloves: Specialist Gloves (Fade) pk=10063 def=5031
[loadout] CT/weapon: USP-S (Jawbreaker) pk=1173 def=61
[loadout] CT/weapon: Desert Eagle (Eastern Enigma) pk=1458 def=1
[loadout] CT/weapon: M4A4 (Temukau) pk=1228 def=16
[loadout] CT/weapon: Five-SeveN (Fairy Tale) pk=979 def=3
[loadout] CT/weapon: P250 (Digital Architect) pk=1081 def=36
[loadout] CT/weapon: MP9 (Wild Lily) pk=734 def=34
[loadout] CT/weapon: M4A1-S (Vaporwave) pk=106 def=60
[loadout] CT/weapon: AWP (Redline) pk=259 def=9
[loadout] CT/knife: Skeleton Knife (Doppler) pk=417 def=525
[loadout] CT/gloves: Hand Wraps (Cobalt Skulls) pk=10053 def=5033
[loadout] 20 items from E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan\n1ssan-data.json
[plan-a] CEconItemSystem* = 0x0000053107B03DB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFB1F8B27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFB1F868540, setFloat=00007FFB1F868750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x00000531FE4A4EA0
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x00000531FE4A4F40
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x00000531FE4A4FE0
[plan-a] inject: created=20 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FFB1EF99DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FFB20CE35A0 vtable=0x00007FFB203E7200 fn=0x00007FFB1F2EEE60 slot=36
[fsn] hooked (vtable overwrite)
[ready] v9.0.3 split; targets=20
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFB20CC13F8 -> 0x0000053228670200
[snap] dwLocalPlayerPawn       @ 0x00007FFB20EB8160 -> 0x0000053193810A00
[snap] pawn: vtable=0x00007FFB240D3740 inClient=0 health=1329
[snap] ctrl: vtable=0x00007FFB20390648 inClient=1 m_hPlayerPawn@0x92C = 0x0060000B (idx=11)
[snap] entitySystem @ 0x00007FFB20E9EB28 = 0x0000053193448800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0060000B -> 0x000005320FE10800
[snap] ----------------------------------------
[model-refresh] functions: SetModel=00007FFB1F0E5B10 Precache=00007FFBA4BF6B20 Resource=00007FFBA4C69230 FileSystem=00007FFC3AF343D0 Insert=00007FFB33D31B10 Purge=00007FFB33D33D60
[knife-anim] stage=6 reached
[glove-observe] pawn=000005320FE10800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000005320FE10800
[match] FOUND pawn=0x000005320FE10800 hp=100
[apply] tick pawn=0x000005320FE10800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005320FE10800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4314 lastStage=1 stage5Count=265
[snap] stage histogram:
[snap]   stage  0: 964 frames
[snap]   stage  1: 266 frames
[snap]   stage  2: 265 frames
[snap]   stage  3: 265 frames
[snap]   stage  5: 265 frames
[snap]   stage  6: 265 frames
[snap]   stage  7: 265 frames
[snap]   stage  8: 265 frames
[snap]   stage 10: 265 frames
[snap]   stage 11: 285 frames
[snap]   stage 12: 944 frames
[snap] dwLocalPlayerController @ 0x00007FFB20CC13F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FFB20EB8160 -> 0x0000053193810A00
[snap] pawn: vtable=0x00007FFB240D3740 inClient=0 health=1329
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFB20E9EB28 = 0x0000053193448800 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=0000053193810A00 reapply=0 changed=48 def=0 init=0 idHigh=0xDF022603
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000053193810A00
[apply] tick pawn=0x0000053193810A00
[apply] ws null
[glove-observe] pawn=0000053232030000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000053232030000
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=7514 lastStage=0 stage5Count=450
[snap] stage histogram:
[snap]   stage  0: 1571 frames
[snap]   stage  1: 544 frames
[snap]   stage  2: 544 frames
[snap]   stage  3: 540 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 450 frames
[snap]   stage  6: 450 frames
[snap]   stage  7: 450 frames
[snap]   stage  8: 450 frames
[snap]   stage 10: 450 frames
[snap]   stage 11: 484 frames
[snap]   stage 12: 1580 frames
[snap] dwLocalPlayerController @ 0x00007FFB20CC13F8 -> 0x000005322F026A00
[snap] dwLocalPlayerPawn       @ 0x00007FFB20EB8160 -> 0x0000053193810A00
[snap] pawn: vtable=0x00007FFB240D3740 inClient=0 health=1329
[snap] ctrl: vtable=0x00007FFB20390648 inClient=1 m_hPlayerPawn@0x92C = 0x017501A1 (idx=417)
[snap] entitySystem @ 0x00007FFB20E9EB28 = 0x0000053193448800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017501A1 -> 0x0000053232030000
[snap] ----------------------------------------
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000053232030000 reapply=1 changed=0 def=5033 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000053232030000 reapply=0 changed=0 def=5033 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon=0x000005326981A000 view=0x000005326981B2E0
[pw]   view+0x00 = 0x204945A0
[pw]   view+0x04 = 0x00007FFB
[pw]   view+0x08 = 0x00000000
[pw]   view+0x0C = 0x00000000
[pw]   view+0x10 = 0xFFFFFFFE
[pw]   view+0x14 = 0x00000000
[pw]   view+0x18 = 0x00000000
[pw]   view+0x1C = 0x00000000
[pw]   view+0x20 = 0x00000000
[pw]   view+0x24 = 0x00000000
[pw]   view+0x28 = 0x00000000
[pw]   view+0x2C = 0x00000000
[pw]   view+0x30 = 0x00000000
[pw]   view+0x34 = 0x00000000
[pw]   view+0x38 = 0x00000000
[pw]   view+0x3C = 0x00000000
[pw] weapon+0x1290..0x12F0:
[pw]   +0x1290 = 0x00007FFB20494740
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x00A780EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFB204945A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000005326981A000 def=61
[team] pawn=0x0000053232030000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000005326981A000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005326981B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=0000053262B15D80 alloc=11
[apply] world view 0x000005326981B2E0 painted (pk=1173)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000000000000000
[hud-find] NO MATCH walked=0 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000005326981A000 hud=0000000000000000 def=61 pk=1173
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x000005325C57B480
[hud-find] child[1]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 2 nodes
[apply-cache] rebuilding weapon=000005326981A000 hud=00000532353A4000 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053268B1A880
[hud-find] child[1]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 2 nodes
[apply-cache] rebuilding weapon=000005326981A000 hud=00000532353A4000 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000005326981E000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005326981F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000053262B10D00 alloc=11
[apply] world view 0x000005326981F2E0 painted (pk=417)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053268B1A880
[hud-find] child[1]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000005326981E000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x000005326903C880
[hud-find] child[0]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 1 nodes
[apply-cache] rebuilding weapon=000005326981E000 hud=0000053233494C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053263170C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-cache] rebuilding weapon=000005326981E000 hud=0000053233494C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053263170C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053263170C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053263170C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053263170C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053263170C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x0000053263170C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-cache] rebuilding weapon=000005326981E000 hud=0000053233494C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=12265 lastStage=0 stage5Count=756
[snap] stage histogram:
[snap]   stage  0: 2572 frames
[snap]   stage  1: 849 frames
[snap]   stage  2: 849 frames
[snap]   stage  3: 845 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 756 frames
[snap]   stage  6: 756 frames
[snap]   stage  7: 756 frames
[snap]   stage  8: 756 frames
[snap]   stage 10: 755 frames
[snap]   stage 11: 803 frames
[snap]   stage 12: 2567 frames
[snap] dwLocalPlayerController @ 0x00007FFB20CC13F8 -> 0x000005322F026A00
[snap] dwLocalPlayerPawn       @ 0x00007FFB20EB8160 -> 0x0000053193810A00
[snap] pawn: vtable=0x00007FFB240D3740 inClient=0 health=1329
[snap] ctrl: vtable=0x00007FFB20390648 inClient=1 m_hPlayerPawn@0x92C = 0x017501A1 (idx=417)
[snap] entitySystem @ 0x00007FFB20E9EB28 = 0x0000053193448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017501A1 -> 0x0000053232030000
[snap] ----------------------------------------
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-cache] rebuilding weapon=000005326981A000 hud=00000532353A4000 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981E000
[pw] weapon 0x000005326981E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005326981E000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000053233494C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=17177 lastStage=8 stage5Count=1075
[snap] stage histogram:
[snap]   stage  0: 3593 frames
[snap]   stage  1: 1168 frames
[snap]   stage  2: 1168 frames
[snap]   stage  3: 1163 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1075 frames
[snap]   stage  6: 1075 frames
[snap]   stage  7: 1075 frames
[snap]   stage  8: 1075 frames
[snap]   stage 10: 1074 frames
[snap]   stage 11: 1124 frames
[snap]   stage 12: 3586 frames
[snap] dwLocalPlayerController @ 0x00007FFB20CC13F8 -> 0x000005322F026A00
[snap] dwLocalPlayerPawn       @ 0x00007FFB20EB8160 -> 0x0000053193810A00
[snap] pawn: vtable=0x00007FFB240D3740 inClient=0 health=1329
[snap] ctrl: vtable=0x00007FFB20390648 inClient=1 m_hPlayerPawn@0x92C = 0x017501A1 (idx=417)
[snap] entitySystem @ 0x00007FFB20E9EB28 = 0x0000053193448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017501A1 -> 0x0000053232030000
[snap] ----------------------------------------
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005326981A000
[pw] weapon 0x000005326981A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005326981A000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x0000053235227480
[hud-find] firstChild=0x00000532334B5C80
[hud-find] child[1]=0x000005326903C880 owner=0x0000053233494C00 handle=0x17200EB resolved=0x000005326981E000
[hud-find] child[2]=0x0000053235228C80 owner=0x00000532353A4000 handle=0xA780EC resolved=0x000005326981A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000532353A4000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[model-refresh] map acquired schema=0000053193909600 count=2059 capacityFlags=0x1000 elements=00000531FF750000
[model-refresh] candidate team=2 item=customplayer_tm_anarchist family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_anarchist_varianta family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_anarchist_variantb family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_anarchist_variantc family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_anarchist_variantd family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist_variantd.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist_variantd model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate family=tm_pirate model=agents/models/tm_pirate/tm_pirate.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate_varianta family=tm_pirate model=agents/models/tm_pirate/tm_pirate_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate_variantb family=tm_pirate model=agents/models/tm_pirate/tm_pirate_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate_variantc family=tm_pirate model=agents/models/tm_pirate/tm_pirate_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate_variantd family=tm_pirate model=agents/models/tm_pirate/tm_pirate_variantd.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate_variantd model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional family=tm_professional model=agents/models/tm_professional/tm_professional.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional_var1 family=tm_professional model=agents/models/tm_professional/tm_professional_var1.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional_var1 model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional_var2 family=tm_professional model=agents/models/tm_professional/tm_professional_var2.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional_var2 model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional_var3 family=tm_professional model=agents/models/tm_professional/tm_professional_var3.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional_var3 model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional_var4 family=tm_professional model=agents/models/tm_professional/tm_professional_var4.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional_var4 model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist family=tm_separatist model=agents/models/tm_separatist/tm_separatist.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist_varianta family=tm_separatist model=agents/models/tm_separatist/tm_separatist_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist_variantb family=tm_separatist model=agents/models/tm_separatist/tm_separatist_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist_variantc family=tm_separatist model=agents/models/tm_separatist/tm_separatist_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist_variantd family=tm_separatist model=agents/models/tm_separatist/tm_separatist_variantd.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist_variantd model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_variante family=tm_balkan model=agents/models/tm_balkan/tm_balkan_variante.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_variante model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_varianta family=tm_balkan model=agents/models/tm_balkan/tm_balkan_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_variantb family=tm_balkan model=agents/models/tm_balkan/tm_balkan_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_variantc family=tm_balkan model=agents/models/tm_balkan/tm_balkan_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_variantd family=tm_balkan model=agents/models/tm_balkan/tm_balkan_variantd.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_variantd model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_jumpsuit_varianta family=tm_jumpsuit model=agents/models/tm_jumpsuit/tm_jumpsuit_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_jumpsuit_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_jumpsuit_variantb family=tm_jumpsuit model=agents/models/tm_jumpsuit/tm_jumpsuit_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_jumpsuit_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_jumpsuit_variantc family=tm_jumpsuit model=agents/models/tm_jumpsuit/tm_jumpsuit_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_jumpsuit_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_phoenix_heavy family=tm_phoenix_heavy model=agents/models/tm_phoenix_heavy/tm_phoenix_heavy.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_phoenix_heavy model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_leet_varianta family=tm_leet model=agents/models/tm_leet/tm_leet_varianta.vmdl compiled=1 current=0
[model-refresh] selected candidate: agents/models/tm_leet/tm_leet_varianta.vmdl
[model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-observe] pawn=0000053232030000 reapply=1 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000005325D94C000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005325D94D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000005325C596B80 alloc=11
[apply] world view 0x000005325D94D2E0 painted (pk=38)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0xD7E74214
[hud-find] arms=0x0000000000000000
[hud-find] FAIL: handle did not resolve
[apply-cache] rebuilding weapon=000005325D94C000 hud=0000000000000000 def=4 pk=38
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000053232030000 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053262B59880
[hud-find] child[1]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 2 nodes
[apply-cache] rebuilding weapon=000005325D94C000 hud=000005325CCAC400 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053262B59880
[hud-find] child[1]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053262B59880
[hud-find] child[1]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053262B59880
[hud-find] child[1]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053262B59880
[hud-find] child[1]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053262B59880
[hud-find] child[1]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053262B59880
[hud-find] child[1]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=505)
[knife] SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply] enter (weapon=0x000005325D94E000 def=505 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005325D94F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000005325C596100 alloc=11
[apply] world view 0x000005325D94F2E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053262B59880
[hud-find] child[1]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000005325D94E000 hud=0000000000000000 def=505 pk=413
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-cache] rebuilding weapon=000005325D94E000 hud=000005323351D000 def=505 pk=413
[knife] HUD SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000
[hud-find] child[2]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=22141 lastStage=0 stage5Count=1380
[snap] stage histogram:
[snap]   stage  0: 4702 frames
[snap]   stage  1: 1473 frames
[snap]   stage  2: 1473 frames
[snap]   stage  3: 1469 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1380 frames
[snap]   stage  6: 1380 frames
[snap]   stage  7: 1380 frames
[snap]   stage  8: 1380 frames
[snap]   stage 10: 1379 frames
[snap]   stage 11: 1436 frames
[snap]   stage 12: 4688 frames
[snap] dwLocalPlayerController @ 0x00007FFB20CC13F8 -> 0x000005322F026A00
[snap] dwLocalPlayerPawn       @ 0x00007FFB20EB8160 -> 0x0000053193810A00
[snap] pawn: vtable=0x00007FFB240D3740 inClient=0 health=1329
[snap] ctrl: vtable=0x00007FFB20390648 inClient=1 m_hPlayerPawn@0x92C = 0x017501A1 (idx=417)
[snap] entitySystem @ 0x00007FFB20E9EB28 = 0x0000053193448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017501A1 -> 0x0000053232030000
[snap] ----------------------------------------
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94C000
[pw] weapon 0x000005325D94C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005325D94C000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000
[hud-find] child[2]=0x000005325CD01480 owner=0x000005325CCAC400 handle=0x1C700F0 resolved=0x000005325D94C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005325CCAC400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=27290 lastStage=7 stage5Count=1699
[snap] stage histogram:
[snap]   stage  0: 5842 frames
[snap]   stage  1: 1792 frames
[snap]   stage  2: 1792 frames
[snap]   stage  3: 1787 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1699 frames
[snap]   stage  6: 1699 frames
[snap]   stage  7: 1699 frames
[snap]   stage  8: 1698 frames
[snap]   stage 10: 1698 frames
[snap]   stage 11: 1756 frames
[snap]   stage 12: 5827 frames
[snap] dwLocalPlayerController @ 0x00007FFB20CC13F8 -> 0x000005322F026A00
[snap] dwLocalPlayerPawn       @ 0x00007FFB20EB8160 -> 0x0000053193810A00
[snap] pawn: vtable=0x00007FFB240D3740 inClient=0 health=1329
[snap] ctrl: vtable=0x00007FFB20390648 inClient=1 m_hPlayerPawn@0x92C = 0x017501A1 (idx=417)
[snap] entitySystem @ 0x00007FFB20E9EB28 = 0x0000053193448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017501A1 -> 0x0000053232030000
[snap] ----------------------------------------
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000053232030000
[apply] active 0x000005325D94E000
[pw] weapon 0x000005325D94E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005325D94E000 pawn=0x0000053232030000
[hud-find] armsHandle=0x82874264
[hud-find] arms=0x000005322F03C000
[hud-find] armsNode=0x000005323346D080
[hud-find] firstChild=0x0000053269030880
[hud-find] child[0]=0x0000053269030880 owner=0x000005323351D000 handle=0x14C80EF resolved=0x000005325D94E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005323351D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
