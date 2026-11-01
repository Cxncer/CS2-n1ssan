[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 21:07:26
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFB1FC8924B -> rva 0x271EB28 (val=0000023617468800)
[auto-off] dwLocalPlayerController      hit 0x00007FFB1FBA55D0 -> rva 0x25413F8 (val=00000236A9405600)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFB1F3C15D5 -> rva 0x2738160 (val=00000236179D0600)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFB2198EB28
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFB217B13F8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFB219A8160
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
[resolve] InvalidateDescription          @ 0x00007FFB20410A20
[resolve] BuildModernSkin                @ 0x00007FFB200B53D0
[resolve] SetMeshGroupMask               @ 0x00007FFB1FD35910
[resolve] RegenerateSkins                @ 0x00007FFB1FA9B330
[resolve] ReleaseCompositeMaterials      @ 0x00007FFB2075BB70
[resolve] GloveCreatePaintKit            @ 0x00007FFB20400AA0
[resolve] AgentSetModel                  @ 0x00007FFB1FBD5B10
[resolve] KnifeUpdateSubclass            @ 0x00007FFB1F478FC0
[resolve] GloveSetBodyGroup              @ 0x00007FFB1FBD4A30
[resolve] MemAlloc                       @ 0x00007FFB3B60DD30
[resolve] MemFree                        @ 0x00007FFB3B60DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFB2198EB28 -> 0x0000023617468800
[paintkit-schema] READY offset=0x2A0 kits=1481
[glove-paintkit-schema] READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FFB3C470000)
[schema] CreateInterface: FOUND (00007FFB3C4A7560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FFB3C4E6710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 000002361772F800
[schema] classCount: 542
[schema] classes: 0000023589600000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[glove-schema] READY
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFB203FE2A5 -> ptrAddr 0x00007FFB218683E0 -> es 0x0000023589B33DB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x0000023589B33DB0
[schema-probe] CEconItemSchema* = 0x000002361770C200
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x00000236815E0000 node0[+08]=0x0000023670AF0800 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x0000023617BDC1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x0000023681600000 node0[+08]=0x0000000100000001 node0[+18]=0x0000023670AF0800
[schema-probe]   map @ schema+0x138 count=737 elements=0x00000236FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x150 count=330 elements=0x000002367138C000 node0[+08]=0x000002367F26E780 node0[+18]=0x000002367F26E8C0
[schema-probe]   map @ schema+0x170 count=12 elements=0x0000023681702A00 node0[+08]=0x0000000100000001 node0[+18]=0x0000023681658600
[schema-probe]   map @ schema+0x180 count=3 elements=0x00000236FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x198 count=97 elements=0x00000236778A2000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFB20F83B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x00000236FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x00000236798A4000 node0[+08]=0x0000000100000128 node0[+18]=0x000002367FDCCBA1
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x00000236815D8C00 node0[+08]=0x0000000100000001 node0[+18]=0x000002367FDD2DA1
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x00000236FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x210 count=2505 elements=0x0000023681860000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFB20F83C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x00000236FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x278 count=2 elements=0x0000023680370D40 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x00000236816D5780
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x000002365EBF0000 node0[+08]=0x65735F0100000002 node0[+18]=0x000002367F158E80
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x00000236798B8000 node0[+08]=0x65735F0100000013 node0[+18]=0x000002367F64CBE0
[schema-probe]   map @ schema+0x300 count=102 elements=0x00000236FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x328 count=382 elements=0x00000236FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x000002367787E000 node0[+08]=0x000000000000003E node0[+18]=0x0000023680AF33B0
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x00000236FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x000002367F149500 node0[+08]=0x0000023680313FC0 node0[+18]=0x0000023680313CA0
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000023600000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x00000236797D5200 node0[+08]=0x0000023680314220 node0[+18]=0x0000023680314280
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000023600000013 node0[+08]=0x0000000000000000 node0[+18]=0x00000000007FFB3B
[schema-probe]   map @ schema+0x400 count=19 elements=0x00000236342FC900 node0[+08]=0x0000023680314260 node0[+18]=0x00000236803142A0
[schema-probe] sane map candidates: 27
[verify] items count=2059 elems=0x00000236815E0000
[verify]   items[0] key=613566756 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=0 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=613566756 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=0 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=613566756 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x000002365EBF0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x000002365EBF0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x0000023680F83700 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x0000023680F83E00 name="sporty_poison_frog_blue_white"
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
[loadout] T/gloves: Specialist Gloves (Fade) pk=10063 def=5034
[loadout] CT/weapon: USP-S (Jawbreaker) pk=1173 def=61
[loadout] CT/weapon: Desert Eagle (Eastern Enigma) pk=1458 def=1
[loadout] CT/weapon: M4A4 (Temukau) pk=1228 def=16
[loadout] CT/weapon: Five-SeveN (Fairy Tale) pk=979 def=3
[loadout] CT/weapon: P250 (Digital Architect) pk=1081 def=36
[loadout] CT/weapon: MP9 (Wild Lily) pk=734 def=34
[loadout] CT/weapon: M4A1-S (Vaporwave) pk=106 def=60
[loadout] CT/weapon: AWP (Redline) pk=259 def=9
[loadout] CT/knife: Skeleton Knife (Doppler) pk=417 def=525
[loadout] CT/gloves: Hand Wraps (Cobalt Skulls) pk=10053 def=5032
[loadout] 20 items from E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan\n1ssan-data.json
[plan-a] CEconItemSystem* = 0x0000023589B33DB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFB203A27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFB20358540, setFloat=00007FFB20358750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000002367F26EA00
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000002367F26EAA0
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000002367F26EB40
[plan-a] inject: created=20 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FFB1FA89DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FFB217D35A0 vtable=0x00007FFB20ED7200 fn=0x00007FFB1FDDEE60 slot=36
[fsn] hooked (vtable overwrite)
[ready] v9.0.3 split; targets=20
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236A9405600
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x002C000B (idx=11)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x002C000B -> 0x00000236A9B39000
[snap] ----------------------------------------
[model-refresh] functions: SetModel=00007FFB1FBD5B10 Precache=00007FFB3CF26B20 Resource=00007FFB3CF99230 FileSystem=00007FFB332943D0 Insert=00007FFB3B531B10 Purge=00007FFB3B533D60
[knife-anim] stage=6 reached
[glove-observe] pawn=00000236A9B39000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 00000236A9B39000
[match] FOUND pawn=0x00000236A9B39000 hp=100
[apply] tick pawn=0x00000236A9B39000
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4672 lastStage=0 stage5Count=317
[snap] stage histogram:
[snap]   stage  0: 910 frames
[snap]   stage  1: 317 frames
[snap]   stage  2: 317 frames
[snap]   stage  3: 317 frames
[snap]   stage  5: 317 frames
[snap]   stage  6: 317 frames
[snap]   stage  7: 317 frames
[snap]   stage  8: 317 frames
[snap]   stage 10: 317 frames
[snap]   stage 11: 323 frames
[snap]   stage 12: 903 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236A9405600
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x002C000B (idx=11)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x002C000B -> 0x00000236A9B39000
[snap] ----------------------------------------
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000236A9B39000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=7931 lastStage=3 stage5Count=506
[snap] stage histogram:
[snap]   stage  0: 1677 frames
[snap]   stage  1: 515 frames
[snap]   stage  2: 515 frames
[snap]   stage  3: 511 frames
[snap]   stage  5: 506 frames
[snap]   stage  6: 506 frames
[snap]   stage  7: 506 frames
[snap]   stage  8: 506 frames
[snap]   stage 10: 506 frames
[snap]   stage 11: 514 frames
[snap]   stage 12: 1669 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=00000236179D0600 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 00000236179D0600
[apply] tick pawn=0x00000236179D0600
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=0000023692920000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000023692920000
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000023692920000 reapply=0 changed=0 def=5032 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon=0x00000236A2352000 view=0x00000236A23532E0
[pw]   view+0x00 = 0x20F845A0
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
[pw]   +0x1290 = 0x00007FFB20F84740
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x019300EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFB20F845A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x00000236A2352000 def=61
[team] pawn=0x0000023692920000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x00000236A2352000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000236A23532E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=00000236D4A85F00 alloc=11
[apply] world view 0x00000236A23532E0 painted (pk=1173)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236A326D080
[hud-find] child[0]=0x00000236A326D080 owner=0x00000236A2406C00 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[1]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 2 nodes
[apply-cache] rebuilding weapon=00000236A2352000 hud=00000236A2408000 def=61 pk=1173
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236CC687480
[hud-find] child[1]=0x00000236A326D080 owner=0x00000236A2406C00 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0B1C80
[hud-find] child[1]=0x00000236A326D080 owner=0x00000236A2406C00 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-cache] rebuilding weapon=00000236A2352000 hud=00000236A2408000 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0B1C80
[hud-find] child[1]=0x00000236A326D080 owner=0x00000236A2406C00 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0B1C80
[hud-find] child[1]=0x00000236A326D080 owner=0x00000236A2406C00 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0BA080
[hud-find] child[1]=0x00000236A326D080 owner=0x00000236A2406C00 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-cache] rebuilding weapon=00000236A2352000 hud=00000236A2408000 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=12386 lastStage=0 stage5Count=772
[snap] stage histogram:
[snap]   stage  0: 2551 frames
[snap]   stage  1: 870 frames
[snap]   stage  2: 870 frames
[snap]   stage  3: 866 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 772 frames
[snap]   stage  6: 772 frames
[snap]   stage  7: 772 frames
[snap]   stage  8: 772 frames
[snap]   stage 10: 772 frames
[snap]   stage 11: 797 frames
[snap]   stage 12: 2571 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x00000236A2350000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000236A23512E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=00000236D4A89A80 alloc=11
[apply] world view 0x00000236A23512E0 painted (pk=417)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0BA080
[hud-find] child[1]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=00000236A2350000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0BB880
[hud-find] child[0]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 1 nodes
[apply-cache] rebuilding weapon=00000236A2350000 hud=000002369857B400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0BB880
[hud-find] child[0]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0BB880
[hud-find] child[0]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0BB880
[hud-find] child[0]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236DF0BB880
[hud-find] child[0]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-cache] rebuilding weapon=00000236A2352000 hud=00000236A2408000 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-cache] rebuilding weapon=00000236A2350000 hud=000002369857B400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=17377 lastStage=10 stage5Count=1090
[snap] stage histogram:
[snap]   stage  0: 3615 frames
[snap]   stage  1: 1188 frames
[snap]   stage  2: 1188 frames
[snap]   stage  3: 1184 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1090 frames
[snap]   stage  6: 1090 frames
[snap]   stage  7: 1090 frames
[snap]   stage  8: 1090 frames
[snap]   stage 10: 1091 frames
[snap]   stage 11: 1117 frames
[snap]   stage 12: 3633 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2352000
[pw] weapon 0x00000236A2352000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000236A2352000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D4C8C080
[hud-find] child[1]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000
[hud-find] child[2]=0x00000236A326DC80 owner=0x00000236A2408000 handle=0x19300EC resolved=0x00000236A2352000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A2408000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[apply] enter (weapon=0x00000236D4706000 def=60 pk=106)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000236D47072E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=106.000 initial=106.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.298660 initial=0.298660
[apply] world post-create: size=3 data=00000236D4A89E00 alloc=11
[apply] world view 0x00000236D47072E0 painted (pk=106)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-cache] rebuilding weapon=00000236D4706000 hud=00000236A240D000 def=60 pk=106
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D4706000
[pw] weapon 0x00000236D4706000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000236D4706000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240D000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=21881 lastStage=0 stage5Count=1403
[snap] stage histogram:
[snap]   stage  0: 4459 frames
[snap]   stage  1: 1501 frames
[snap]   stage  2: 1501 frames
[snap]   stage  3: 1497 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1403 frames
[snap]   stage  6: 1403 frames
[snap]   stage  7: 1403 frames
[snap]   stage  8: 1403 frames
[snap]   stage 10: 1403 frames
[snap]   stage 11: 1437 frames
[snap]   stage 12: 4470 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A2350000
[pw] weapon 0x00000236A2350000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000236A2350000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x00000236A23F8800
[hud-find] armsNode=0x00000236A326E880
[hud-find] firstChild=0x00000236D5214080
[hud-find] child[0]=0x00000236D5214080 owner=0x00000236A240D000 handle=0x1C300EE resolved=0x00000236D4706000
[hud-find] child[2]=0x00000236DF0BB880 owner=0x000002369857B400 handle=0x2B80EB resolved=0x00000236A2350000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002369857B400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[model-refresh] map acquired schema=000002361770C200 count=2059 capacityFlags=0x1000 elements=00000236815E0000
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
[glove-observe] pawn=0000023692920000 reapply=1 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x00000236D5080000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000236D50812E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=00000236D4A87780 alloc=11
[apply] world view 0x00000236D50812E0 painted (pk=38)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x216EC214
[hud-find] arms=0x0000000000000000
[hud-find] FAIL: handle did not resolve
[apply-cache] rebuilding weapon=00000236D5080000 hud=0000000000000000 def=4 pk=38
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000023692920000 reapply=0 changed=0 def=5034 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236D4FE1880
[hud-find] child[1]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 2 nodes
[apply-cache] rebuilding weapon=00000236D5080000 hud=00000236A240BC00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236D4FE1880
[hud-find] child[1]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236D4FE1880
[hud-find] child[1]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=505)
[knife] SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply] enter (weapon=0x00000236A235E000 def=505 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000236A235F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=00000236CC6EE380 alloc=11
[apply] world view 0x00000236A235F2E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236D4FE1880
[hud-find] child[1]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=00000236A235E000 hud=0000000000000000 def=505 pk=413
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-cache] rebuilding weapon=00000236A235E000 hud=00000236D4C25800 def=505 pk=413
[knife] HUD SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=26562 lastStage=7 stage5Count=1708
[snap] stage histogram:
[snap]   stage  0: 5428 frames
[snap]   stage  1: 1806 frames
[snap]   stage  2: 1806 frames
[snap]   stage  3: 1801 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1708 frames
[snap]   stage  6: 1708 frames
[snap]   stage  7: 1708 frames
[snap]   stage  8: 1707 frames
[snap]   stage 10: 1708 frames
[snap]   stage 11: 1750 frames
[snap]   stage 12: 5431 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=30603 lastStage=7 stage5Count=1975
[snap] stage histogram:
[snap]   stage  0: 6247 frames
[snap]   stage  1: 2073 frames
[snap]   stage  2: 2073 frames
[snap]   stage  3: 2068 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1975 frames
[snap]   stage  6: 1975 frames
[snap]   stage  7: 1975 frames
[snap]   stage  8: 1974 frames
[snap]   stage 10: 1975 frames
[snap]   stage 11: 2069 frames
[snap]   stage 12: 6198 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=32944 lastStage=7 stage5Count=2164
[snap] stage histogram:
[snap]   stage  0: 6567 frames
[snap]   stage  1: 2262 frames
[snap]   stage  2: 2262 frames
[snap]   stage  3: 2257 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2164 frames
[snap]   stage  6: 2164 frames
[snap]   stage  7: 2164 frames
[snap]   stage  8: 2163 frames
[snap]   stage 10: 2164 frames
[snap]   stage 11: 2389 frames
[snap]   stage 12: 6387 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=35282 lastStage=0 stage5Count=2352
[snap] stage histogram:
[snap]   stage  0: 6889 frames
[snap]   stage  1: 2450 frames
[snap]   stage  2: 2450 frames
[snap]   stage  3: 2446 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2352 frames
[snap]   stage  6: 2352 frames
[snap]   stage  7: 2352 frames
[snap]   stage  8: 2352 frames
[snap]   stage 10: 2352 frames
[snap]   stage 11: 2710 frames
[snap]   stage 12: 6576 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=37612 lastStage=0 stage5Count=2540
[snap] stage histogram:
[snap]   stage  0: 7208 frames
[snap]   stage  1: 2638 frames
[snap]   stage  2: 2638 frames
[snap]   stage  3: 2634 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2540 frames
[snap]   stage  6: 2540 frames
[snap]   stage  7: 2540 frames
[snap]   stage  8: 2540 frames
[snap]   stage 10: 2540 frames
[snap]   stage 11: 3029 frames
[snap]   stage 12: 6764 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=39910 lastStage=0 stage5Count=2724
[snap] stage histogram:
[snap]   stage  0: 7529 frames
[snap]   stage  1: 2822 frames
[snap]   stage  2: 2822 frames
[snap]   stage  3: 2818 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2724 frames
[snap]   stage  6: 2724 frames
[snap]   stage  7: 2724 frames
[snap]   stage  8: 2724 frames
[snap]   stage 10: 2724 frames
[snap]   stage 11: 3350 frames
[snap]   stage 12: 6948 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=42251 lastStage=0 stage5Count=2913
[snap] stage histogram:
[snap]   stage  0: 7849 frames
[snap]   stage  1: 3011 frames
[snap]   stage  2: 3011 frames
[snap]   stage  3: 3007 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2913 frames
[snap]   stage  6: 2913 frames
[snap]   stage  7: 2913 frames
[snap]   stage  8: 2913 frames
[snap]   stage 10: 2913 frames
[snap]   stage 11: 3670 frames
[snap]   stage 12: 7137 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=44524 lastStage=0 stage5Count=3094
[snap] stage histogram:
[snap]   stage  0: 8171 frames
[snap]   stage  1: 3192 frames
[snap]   stage  2: 3192 frames
[snap]   stage  3: 3188 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3094 frames
[snap]   stage  6: 3094 frames
[snap]   stage  7: 3094 frames
[snap]   stage  8: 3094 frames
[snap]   stage 10: 3094 frames
[snap]   stage 11: 3992 frames
[snap]   stage 12: 7318 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=47021 lastStage=0 stage5Count=3289
[snap] stage histogram:
[snap]   stage  0: 8542 frames
[snap]   stage  1: 3387 frames
[snap]   stage  2: 3387 frames
[snap]   stage  3: 3383 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3289 frames
[snap]   stage  6: 3289 frames
[snap]   stage  7: 3289 frames
[snap]   stage  8: 3289 frames
[snap]   stage 10: 3289 frames
[snap]   stage 11: 4314 frames
[snap]   stage 12: 7562 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=51941 lastStage=0 stage5Count=3597
[snap] stage histogram:
[snap]   stage  0: 9616 frames
[snap]   stage  1: 3695 frames
[snap]   stage  2: 3695 frames
[snap]   stage  3: 3691 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3597 frames
[snap]   stage  6: 3597 frames
[snap]   stage  7: 3597 frames
[snap]   stage  8: 3597 frames
[snap]   stage 10: 3597 frames
[snap]   stage 11: 4634 frames
[snap]   stage 12: 8624 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236D5080000
[pw] weapon 0x00000236D5080000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000236D5080000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000
[hud-find] child[2]=0x00000236D50FA080 owner=0x00000236A240BC00 handle=0x9580F1 resolved=0x00000236D5080000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236A240BC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=55308 lastStage=0 stage5Count=3836
[snap] stage histogram:
[snap]   stage  0: 10224 frames
[snap]   stage  1: 3934 frames
[snap]   stage  2: 3934 frames
[snap]   stage  3: 3930 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3836 frames
[snap]   stage  6: 3836 frames
[snap]   stage  7: 3836 frames
[snap]   stage  8: 3836 frames
[snap]   stage 10: 3836 frames
[snap]   stage 11: 4953 frames
[snap]   stage 12: 9152 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=58891 lastStage=0 stage5Count=4087
[snap] stage histogram:
[snap]   stage  0: 10886 frames
[snap]   stage  1: 4185 frames
[snap]   stage  2: 4185 frames
[snap]   stage  3: 4181 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4087 frames
[snap]   stage  6: 4087 frames
[snap]   stage  7: 4087 frames
[snap]   stage  8: 4087 frames
[snap]   stage 10: 4087 frames
[snap]   stage 11: 5274 frames
[snap]   stage 12: 9744 frames
[snap] dwLocalPlayerController @ 0x00007FFB217B13F8 -> 0x00000236AE681000
[snap] dwLocalPlayerPawn       @ 0x00007FFB219A8160 -> 0x00000236179D0600
[snap] pawn: vtable=0x00007FFB24AB3740 inClient=0 health=566
[snap] ctrl: vtable=0x00007FFB20E80648 inClient=1 m_hPlayerPawn@0x92C = 0x005281A1 (idx=417)
[snap] entitySystem @ 0x00007FFB2198EB28 = 0x0000023617468800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x005281A1 -> 0x0000023692920000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023692920000
[apply] active 0x00000236A235E000
[pw] weapon 0x00000236A235E000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x00000236A235E000 pawn=0x0000023692920000
[hud-find] armsHandle=0x7294266
[hud-find] arms=0x00000236D595E000
[hud-find] armsNode=0x00000236CC68E080
[hud-find] firstChild=0x00000236DEFE8C80
[hud-find] child[0]=0x00000236DEFE8C80 owner=0x00000236D4C25800 handle=0x8C00F0 resolved=0x00000236A235E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000236D4C25800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[