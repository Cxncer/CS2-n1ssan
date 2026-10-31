[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 00:54:35
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC259C924B -> rva 0x271EB28 (val=0000029119490000)
[auto-off] dwLocalPlayerController      hit 0x00007FFC258E55D0 -> rva 0x25413F8 (val=00000291B13A5800)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC251015D5 -> rva 0x2738160 (val=00000291363A2E00)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFC276CEB28
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFC274F13F8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFC276E8160
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
[resolve] InvalidateDescription          @ 0x00007FFC26150A20
[resolve] BuildModernSkin                @ 0x00007FFC25DF53D0
[resolve] SetMeshGroupMask               @ 0x00007FFC25A75910
[resolve] RegenerateSkins                @ 0x00007FFC257DB330
[resolve] ReleaseCompositeMaterials      @ 0x00007FFC2649BB70
[resolve] GloveCreatePaintKit            @ 0x00007FFC26140AA0
[resolve] AgentSetModel                  @ 0x00007FFC25915B10
[resolve] KnifeUpdateSubclass            @ 0x00007FFC251B8FC0
[resolve] GloveSetBodyGroup              @ 0x00007FFC25914A30
[resolve] MemAlloc                       @ 0x00007FFCE6C4DD30
[resolve] MemFree                        @ 0x00007FFCE6C4DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFC276CEB28 -> 0x0000029119490000
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC2613E2A5 -> ptrAddr 0x00007FFC275A83E0 -> es 0x000002908BB53DB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x000002908BB53DB0
[schema-probe] CEconItemSchema* = 0x000002911982C600
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x0000029189660000 node0[+08]=0x0000029180E47000 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x0000029119CFC1C0 node0[+08]=0x0000000800000004 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x0000029189680000 node0[+08]=0x0000000100000001 node0[+18]=0x0000029180E47000
[schema-probe]   map @ schema+0x138 count=737 elements=0x00000291FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x150 count=330 elements=0x0000029174502000 node0[+08]=0x0000029188376560 node0[+18]=0x00000291883766A0
[schema-probe]   map @ schema+0x170 count=12 elements=0x00000291896F0400 node0[+08]=0x0000000100000001 node0[+18]=0x00000291896CB200
[schema-probe]   map @ schema+0x180 count=3 elements=0x00000291FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x198 count=97 elements=0x0000029174BF6000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC26CC3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x00000291FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x0000029175A70000 node0[+08]=0x3F80000100000128 node0[+18]=0x0000029185F508C1
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x000002918965E400 node0[+08]=0x0000000100000001 node0[+18]=0x0000029185F49591
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x00000291FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x210 count=2505 elements=0x0000029189850000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC26CC3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x00000291FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x278 count=2 elements=0x0000029188390EA0 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x0000029189509EC0
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x0000029181070000 node0[+08]=0x65735F0100000002 node0[+18]=0x0000029185179760
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x0000029175A7C000 node0[+08]=0x0000000100000013 node0[+18]=0x0000029185630CC0
[schema-probe]   map @ schema+0x300 count=102 elements=0x00000291FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x328 count=382 elements=0x00000291FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x0000029175F08000 node0[+08]=0x000000000000003E node0[+18]=0x0000029188AF3370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x00000291FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x0000029185149D00 node0[+08]=0x0000029188317C80 node0[+18]=0x0000029188317D40
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000029100000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x00000291809ED600 node0[+08]=0x0000029188317820 node0[+18]=0x0000029188317760
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000029100000013 node0[+08]=0x0000000000000000 node0[+18]=0x00000000007FFCE6
[schema-probe]   map @ schema+0x400 count=19 elements=0x000002913641C800 node0[+08]=0x00000291883177E0 node0[+18]=0x0000029188317780
[schema-probe] sane map candidates: 27
[verify] items count=2059 elems=0x0000029189660000
[verify]   items[0] key=0 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=0 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=0 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=0 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=0 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x0000029181070000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x0000029181070000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x0000029188F93C60 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x0000029188F94360 name="sporty_poison_frog_blue_white"
=== [schema-probe] done ===
[loadout] T/weapon: Glock-18 (Fade) pk=38 def=4
[loadout] T/weapon: AK-47 (Inheritance) pk=1171 def=7
[loadout] T/weapon: AWP (Printstream) pk=1206 def=9
[loadout] T/weapon: Desert Eagle (Fennec Fox) pk=764 def=1
[loadout] T/weapon: P250 (Epicenter) pk=130 def=36
[loadout] T/weapon: Tec-9 (Nuclear Threat) pk=179 def=30
[loadout] T/weapon: MAC-10 (Neon Rider) pk=433 def=17
[loadout] T/weapon: Galil AR (Sugar Rush) pk=661 def=13
[loadout] T/knife: Talon Knife (Slaughter) pk=59 def=523
[loadout] T/gloves: Specialist Gloves (Crimson Kimono) pk=10033 def=5031
[loadout] CT/weapon: USP-S (Jawbreaker) pk=1173 def=61
[loadout] CT/weapon: Desert Eagle (Eastern Enigma) pk=1458 def=1
[loadout] CT/weapon: M4A4 (Temukau) pk=1228 def=16
[loadout] CT/weapon: Five-SeveN (Fairy Tale) pk=979 def=3
[loadout] CT/weapon: P250 (Digital Architect) pk=1081 def=36
[loadout] CT/weapon: MP9 (Wild Lily) pk=734 def=34
[loadout] CT/weapon: M4A1-S (Vaporwave) pk=106 def=60
[loadout] CT/weapon: AWP (Redline) pk=259 def=9
[loadout] CT/knife: Skeleton Knife (Doppler) pk=417 def=525
[loadout] CT/gloves: Sport Gloves (Violet Beadwork) pk=1405 def=5030
[loadout] 20 items from E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan\n1ssan-data.json
[plan-a] CEconItemSystem* = 0x000002908BB53DB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC260E27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC26098540, setFloat=00007FFC26098750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x00000291883767E0
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x0000029188376880
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x0000029188376920
[plan-a] inject: created=20 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FFC257C9DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FFC275135A0 vtable=0x00007FFC26C17200 fn=0x00007FFC25B1EE60 slot=36
[fsn] hooked (vtable overwrite)
[fsn] first stage call seen
[ready] v9.0.3 split; targets=20

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B13A5800
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x012A000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012A000B -> 0x00000291B1B1F800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=00000291B1B1F800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 00000291B1B1F800
[match] FOUND pawn=0x00000291B1B1F800 hp=100
[apply] tick pawn=0x00000291B1B1F800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=00000291B1B20F70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=00000291B1B1F800 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x00000291B1B20F70 vtable=0x00007FFC26C3E0D0 def=0 init=0 quality=-1 attrCount=650979816
[glove-diag] pawn=00000291B1B1F800 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4657 lastStage=0 stage5Count=292
[snap] stage histogram:
[snap]   stage  0: 1015 frames
[snap]   stage  1: 292 frames
[snap]   stage  2: 292 frames
[snap]   stage  3: 292 frames
[snap]   stage  5: 292 frames
[snap]   stage  6: 292 frames
[snap]   stage  7: 292 frames
[snap]   stage  8: 292 frames
[snap]   stage 10: 292 frames
[snap]   stage 11: 307 frames
[snap]   stage 12: 999 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B13A5800
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x012A000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012A000B -> 0x00000291B1B1F800
[snap] ----------------------------------------
[apply] tick pawn=0x00000291B1B1F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=00000291363A2E00 reapply=114 changed=0 def=24948 init=115 idHigh=0x726F482C
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 00000291363A2E00
[apply] tick pawn=0x00000291363A2E00
[glove-snapshot] ===== PAWN-EMBEDDED item=00000291363A4570 =====
[glove-snapshot] LOCAL size=779247938 data=54482C6E776F4465 alloc=1867009101
[glove-snapshot] LOCAL invalid vector; entries skipped
[glove-snapshot] NETWORKED size=1853321028 data=6D7568546C6C6F72 alloc=1920236386
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=00000291363A2E00 count=-679790784 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=0000029199457000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000029199457000
[apply] tick pawn=0x0000029199457000
[glove-snapshot] ===== PAWN-EMBEDDED item=0000029199458770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000029199457000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=7395 lastStage=12 stage5Count=442
[snap] stage histogram:
[snap]   stage  0: 1540 frames
[snap]   stage  1: 540 frames
[snap]   stage  2: 540 frames
[snap]   stage  3: 536 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 442 frames
[snap]   stage  6: 442 frames
[snap]   stage  7: 442 frames
[snap]   stage  8: 442 frames
[snap]   stage 10: 442 frames
[snap]   stage 11: 464 frames
[snap]   stage 12: 1564 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon=0x00000291BC442000 view=0x00000291BC4432E0
[pw]   view+0x00 = 0x26CC45A0
[pw]   view+0x04 = 0x00007FFC
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
[pw]   +0x1290 = 0x00007FFC26CC4740
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x01DB00EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFC26CC45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x00000291BC442000 def=61
[team] pawn=0x0000029199457000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x00000291BC442000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000291BC4432E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=00000291E8E7A000 alloc=11
[apply] world view 0x00000291BC4432E0 painted (pk=1173)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AE080
[hud-find] child[0]=0x00000291BD3AE080 owner=0x00000291BD692C00 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC442000 hud=00000291BD694000 def=61 pk=1173
[glove-diag] pawn=0000029199457000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E7DB80 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=1 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[glove] APPLIED def=5030 pk=1405 team=3
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-observe] pawn=0000029199457000 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AE080
[hud-find] child[0]=0x00000291BD3AE080 owner=0x00000291BD692C00 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC442000 hud=00000291BD694000 def=61 pk=1173
[glove-next-tick] seq=1 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E7DB80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E74180 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=2 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ECE53C80
[hud-find] child[1]=0x00000291BD3AE080 owner=0x00000291BD692C00 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-cache] rebuilding weapon=00000291BC442000 hud=00000291BD694000 def=61 pk=1173
[glove-next-tick] seq=2 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E74180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E78400 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=3 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C7880
[hud-find] child[1]=0x00000291BD3AE080 owner=0x00000291BD692C00 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-cache] rebuilding weapon=00000291BC442000 hud=00000291BD694000 def=61 pk=1173
[glove-next-tick] seq=3 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E78400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E7CA00 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=4 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291B4D31480
[hud-find] child[1]=0x00000291BD3AE080 owner=0x00000291BD692C00 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-cache] rebuilding weapon=00000291BC442000 hud=00000291BD694000 def=61 pk=1173
[glove-next-tick] seq=4 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E7CA00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E76F00 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=5 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EDE0D080
[hud-find] child[1]=0x00000291BD3AE080 owner=0x00000291BD692C00 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-cache] rebuilding weapon=00000291BC442000 hud=00000291BD694000 def=61 pk=1173
[glove-next-tick] seq=5 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E76F00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E78B00 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=6 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x00000291BC440000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000291BC4412E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=00000291E8E74880 alloc=11
[apply] world view 0x00000291BC4412E0 painted (pk=417)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED9D9880
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=00000291BC440000 hud=0000000000000000 def=525 pk=417
[glove-next-tick] seq=6 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E78B00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E74500 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=7 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ECFA1880
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC440000 hud=00000291B4D5A000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=7 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E74500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E78080 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=8 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291B514CC80
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC440000 hud=00000291B4D5A000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=8 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E78080 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E76F00 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=9 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EDBD3080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC440000 hud=00000291B4D5A000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=9 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E76F00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EDBD3080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EDBD3080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EDBD3080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E70600 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=10 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ECFA9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC440000 hud=00000291B4D5A000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=10 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E70600 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E7AE00 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=11 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291B5143080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC440000 hud=00000291B4D5A000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=11 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E7AE00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E7D480 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=12 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ECE50080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC440000 hud=00000291B4D5A000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=12 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E7D480 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5030 pk=1405 size=3 data=00000291E8E76F00 alloc=11
[glove-paintkit] pk=1405 result=0000029188FD70A0 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=13 pawn=0000029199457000 item=0000029199458770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58

=== SNAPSHOT ===
[snap] fsnCount=11390 lastStage=0 stage5Count=716
[snap] stage histogram:
[snap]   stage  0: 2305 frames
[snap]   stage  1: 814 frames
[snap]   stage  2: 814 frames
[snap]   stage  3: 810 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 716 frames
[snap]   stage  6: 716 frames
[snap]   stage  7: 716 frames
[snap]   stage  8: 716 frames
[snap]   stage 10: 716 frames
[snap]   stage 11: 782 frames
[snap]   stage 12: 2284 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-cache] rebuilding weapon=00000291BC442000 hud=00000291BD694000 def=61 pk=1173
[glove-next-tick] seq=13 pawn=0000029199457000 item=0000029199458770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E8E76F00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F6000
[pw] weapon 0x00000291EC8F6000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[apply] enter (weapon=0x00000291EC8F6000 def=16 pk=1228)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000291EC8F72E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1228.000 initial=1228.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.070775 initial=0.070775
[apply] world post-create: size=3 data=00000291E8E7DF00 alloc=11
[apply] world view 0x00000291EC8F72E0 painted (pk=1228)
[hud-find] START weapon=0x00000291EC8F6000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EF24DC80
[hud-find] child[0]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000029199F8E800 after 1 nodes
[apply-cache] rebuilding weapon=00000291EC8F6000 hud=0000029199F8E800 def=16 pk=1228
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F6000
[pw] weapon 0x00000291EC8F6000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x00000291EC8F6000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EF24DC80
[hud-find] child[0]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000029199F8E800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F6000
[pw] weapon 0x00000291EC8F6000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x00000291EC8F6000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EF24DC80
[hud-find] child[0]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000029199F8E800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F6000
[pw] weapon 0x00000291EC8F6000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x00000291EC8F6000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291EF24DC80
[hud-find] child[0]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000029199F8E800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000
[hud-find] child[2]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-cache] rebuilding weapon=00000291BC440000 hud=00000291B4D5A000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[apply] enter (weapon=0x00000291EC8F8000 def=60 pk=106)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000291EC8F92E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=106.000 initial=106.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.298660 initial=0.298660
[apply] world post-create: size=3 data=00000291E8E77600 alloc=11
[apply] world view 0x00000291EC8F92E0 painted (pk=106)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-cache] rebuilding weapon=00000291EC8F8000 hud=00000291B4D53C00 def=60 pk=106
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=3 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790EB58
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=16058 lastStage=12 stage5Count=1029
[snap] stage histogram:
[snap]   stage  0: 3230 frames
[snap]   stage  1: 1127 frames
[snap]   stage  2: 1127 frames
[snap]   stage  3: 1123 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1029 frames
[snap]   stage  6: 1029 frames
[snap]   stage  7: 1029 frames
[snap]   stage  8: 1029 frames
[snap]   stage 10: 1029 frames
[snap]   stage 11: 1103 frames
[snap]   stage 12: 3202 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[2]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[2]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[2]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3C9080
[hud-find] child[1]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F6000
[pw] weapon 0x00000291EC8F6000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x00000291EC8F6000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000029199F8E800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F6000
[pw] weapon 0x00000291EC8F6000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x00000291EC8F6000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000029199F8E800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F6000
[pw] weapon 0x00000291EC8F6000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x00000291EC8F6000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000029199F8E800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=21039 lastStage=12 stage5Count=1348
[snap] stage histogram:
[snap]   stage  0: 4285 frames
[snap]   stage  1: 1446 frames
[snap]   stage  2: 1446 frames
[snap]   stage  3: 1442 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1348 frames
[snap]   stage  6: 1348 frames
[snap]   stage  7: 1348 frames
[snap]   stage  8: 1348 frames
[snap]   stage 10: 1348 frames
[snap]   stage 11: 1423 frames
[snap]   stage 12: 4256 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291BD3AEC80
[hud-find] child[0]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[1]=0x00000291EF24DC80 owner=0x0000029199F8E800 handle=0x1BC80EE resolved=0x00000291EC8F6000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC442000
[pw] weapon 0x00000291BC442000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x00000291BC442000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291BD694000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EC8F8000
[pw] weapon 0x00000291EC8F8000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x00000291EC8F8000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291BC440000
[pw] weapon 0x00000291BC440000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x00000291BC440000 pawn=0x0000029199457000
[hud-find] armsHandle=0x5ED14214
[hud-find] arms=0x00000291BD6C0000
[hud-find] armsNode=0x00000291BD3AD480
[hud-find] firstChild=0x00000291ED3CC080
[hud-find] child[0]=0x00000291ED3CC080 owner=0x00000291B4D53C00 handle=0x11900EF resolved=0x00000291EC8F8000
[hud-find] child[1]=0x00000291BD3AEC80 owner=0x00000291BD694000 handle=0x1DB00EC resolved=0x00000291BC442000
[hud-find] child[3]=0x00000291ED5E7480 owner=0x00000291B4D5A000 handle=0x6A00EB resolved=0x00000291BC440000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D5A000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x00000291E91CE000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000291E91CF2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=00000291E99A7E80 alloc=11
[apply] world view 0x00000291E91CF2E0 painted (pk=38)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xDE7AC269
[hud-find] arms=0x00000291BD6CC000
[hud-find] armsNode=0x00000291EDE0E880
[hud-find] firstChild=0x00000291E91D5C80
[hud-find] child[0]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 1 nodes
[apply-cache] rebuilding weapon=00000291E91CE000 hud=00000291E8DDB400 def=4 pk=38
[glove-diag] pawn=0000029199457000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-kit] sold; model refresh scheduled in 200 ms
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-flags] pawn=0000029199457000 reapply=0->1
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[glove-observe] pawn=0000029199457000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xDE7AC269
[hud-find] arms=0x00000291BD6CC000
[hud-find] armsNode=0x00000291EDE0E880
[hud-find] firstChild=0x00000291E91D5C80
[hud-find] child[0]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 1 nodes
[glove-kit] delayed model refresh triggered
[glove-flags] pawn=0000029199457000 reapply=0->1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[model] outer=0x000002913790F658 inner=0x000002917387F300
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000029199457000 reapply=1 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000029199457000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=26000 lastStage=0 stage5Count=1664
[snap] stage histogram:
[snap]   stage  0: 5344 frames
[snap]   stage  1: 1762 frames
[snap]   stage  2: 1762 frames
[snap]   stage  3: 1758 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1664 frames
[snap]   stage  6: 1664 frames
[snap]   stage  7: 1664 frames
[snap]   stage  8: 1664 frames
[snap]   stage 10: 1664 frames
[snap]   stage 11: 1743 frames
[snap]   stage 12: 5310 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291E91D5C80
[hud-find] child[0]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 1 nodes
[apply-cache] rebuilding weapon=00000291E91CE000 hud=00000291E8DDB400 def=4 pk=38
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5031 pk=10033 size=3 data=00000291E99A9700 alloc=11
[glove-paintkit] pk=10033 result=0000029188F938E0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=14 pawn=0000029199457000 item=0000029199458770 team=2 def=5031 pk=10033
[glove] APPLIED def=5031 pk=10033 team=2
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[glove-observe] pawn=0000029199457000 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291B4DB3C80
[hud-find] child[1]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 2 nodes
[apply-cache] rebuilding weapon=00000291E91CE000 hud=00000291E8DDB400 def=4 pk=38
[glove-next-tick] seq=14 pawn=0000029199457000 item=0000029199458770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E99A9700 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5031 pk=10033 size=3 data=00000291E99A0080 alloc=11
[glove-paintkit] pk=10033 result=0000029188F938E0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=15 pawn=0000029199457000 item=0000029199458770 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291EDF80480
[hud-find] child[1]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 2 nodes
[apply-cache] rebuilding weapon=00000291E91CE000 hud=00000291E8DDB400 def=4 pk=38
[glove-next-tick] seq=15 pawn=0000029199457000 item=0000029199458770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E99A0080 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5031 pk=10033 size=3 data=00000291E99A8900 alloc=11
[glove-paintkit] pk=10033 result=0000029188F938E0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=16 pawn=0000029199457000 item=0000029199458770 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291EDE0B880
[hud-find] child[1]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 2 nodes
[apply-cache] rebuilding weapon=00000291E91CE000 hud=00000291E8DDB400 def=4 pk=38
[glove-next-tick] seq=16 pawn=0000029199457000 item=0000029199458770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E99A8900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[glove-model] stage=AFTER-BODYGROUP pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[attr-diag] item=0000029199458770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000029199458770 def=5031 pk=10033 size=3 data=00000291E99A0400 alloc=11
[glove-paintkit] pk=10033 result=0000029188F938E0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=0000029199457000 reapply=0->1
[glove-sequence] applied seq=17 pawn=0000029199457000 item=0000029199458770 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ED7E2480
[hud-find] child[1]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 2 nodes
[apply-cache] rebuilding weapon=00000291E91CE000 hud=00000291E8DDB400 def=4 pk=38
[glove-next-tick] seq=17 pawn=0000029199457000 item=0000029199458770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000029199458770 =====
[glove-snapshot] LOCAL size=3 data=00000291E99A0400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=59
[pw] knife: applying Slaughter (pk=59 target def=523)
[knife] SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply] enter (weapon=0x00000291E91CC000 def=523 pk=59)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000291E91CD2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=59.000 initial=59.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=00000291E99A4300 alloc=11
[apply] world view 0x00000291E91CD2E0 painted (pk=59)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ED7E2480
[hud-find] child[1]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=00000291E91CC000 hud=0000000000000000 def=523 pk=59
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-cache] rebuilding weapon=00000291E91CC000 hud=00000291B4D53C00 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000
[hud-find] child[2]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=31007 lastStage=0 stage5Count=1975
[snap] stage histogram:
[snap]   stage  0: 6448 frames
[snap]   stage  1: 2073 frames
[snap]   stage  2: 2073 frames
[snap]   stage  3: 2069 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1975 frames
[snap]   stage  6: 1975 frames
[snap]   stage  7: 1975 frames
[snap]   stage  8: 1975 frames
[snap]   stage 10: 1975 frames
[snap]   stage 11: 2063 frames
[snap]   stage 12: 6405 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000
[hud-find] child[2]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CE000
[pw] weapon 0x00000291E91CE000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x00000291E91CE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000
[hud-find] child[2]=0x00000291E91D5C80 owner=0x00000291E8DDB400 handle=0x18C00F2 resolved=0x00000291E91CE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DDB400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=36254 lastStage=0 stage5Count=2290
[snap] stage histogram:
[snap]   stage  0: 7654 frames
[snap]   stage  1: 2388 frames
[snap]   stage  2: 2388 frames
[snap]   stage  3: 2384 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2290 frames
[snap]   stage  6: 2290 frames
[snap]   stage  7: 2290 frames
[snap]   stage  8: 2290 frames
[snap]   stage 10: 2290 frames
[snap]   stage 11: 2383 frames
[snap]   stage 12: 7606 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=41585 lastStage=7 stage5Count=2609
[snap] stage histogram:
[snap]   stage  0: 8885 frames
[snap]   stage  1: 2707 frames
[snap]   stage  2: 2707 frames
[snap]   stage  3: 2702 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2609 frames
[snap]   stage  6: 2609 frames
[snap]   stage  7: 2609 frames
[snap]   stage  8: 2608 frames
[snap]   stage 10: 2609 frames
[snap]   stage 11: 2703 frames
[snap]   stage 12: 8836 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=44422 lastStage=0 stage5Count=2816
[snap] stage histogram:
[snap]   stage  0: 9371 frames
[snap]   stage  1: 2914 frames
[snap]   stage  2: 2914 frames
[snap]   stage  3: 2910 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2816 frames
[snap]   stage  6: 2816 frames
[snap]   stage  7: 2816 frames
[snap]   stage  8: 2816 frames
[snap]   stage 10: 2816 frames
[snap]   stage 11: 3021 frames
[snap]   stage 12: 9211 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291ECFA3080
[hud-find] child[0]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[apply] enter (weapon=0x00000291EDEDE000 def=7 pk=1171)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000291EDEDF2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1171.000 initial=1171.000
[attr-entry] 1: def=7 value=246.000 initial=246.000
[attr-entry] 2: def=8 value=0.122852 initial=0.122852
[apply] world post-create: size=3 data=00000291E99A6600 alloc=11
[apply] world view 0x00000291EDEDF2E0 painted (pk=1171)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-cache] rebuilding weapon=00000291EDEDE000 hud=00000291E8DD2800 def=7 pk=1171
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000029199457000 team=2 scene=00000291B4DB8480 skeleton=00000291B4DB8480 modelState=00000291B4DB85C0 rawHandle=0x2913790F658
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000
[hud-find] child[1]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=49216 lastStage=8 stage5Count=3129
[snap] stage histogram:
[snap]   stage  0: 10360 frames
[snap]   stage  1: 3227 frames
[snap]   stage  2: 3227 frames
[snap]   stage  3: 3222 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3129 frames
[snap]   stage  6: 3129 frames
[snap]   stage  7: 3129 frames
[snap]   stage  8: 3129 frames
[snap]   stage 10: 3129 frames
[snap]   stage 11: 3344 frames
[snap]   stage 12: 10190 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x00000291B5C2DA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000291363A2E00
[snap] pawn: vtable=0x00007FFCD77B3740 inClient=0 health=657
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x016481A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000029119490000 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016481A1 -> 0x0000029199457000
[snap] ----------------------------------------
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291EDEDE000
[pw] weapon 0x00000291EDEDE000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x00000291EDEDE000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291E8DD2800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000
[hud-find] child[1]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000
[hud-find] child[1]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000
[hud-find] child[1]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000
[hud-find] child[1]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000
[hud-find] child[1]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000029199457000
[apply] active 0x00000291E91CC000
[pw] weapon 0x00000291E91CC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x00000291E91CC000 pawn=0x0000029199457000
[hud-find] armsHandle=0xA369C270
[hud-find] arms=0x00000291E91F6000
[hud-find] armsNode=0x00000291E91DC880
[hud-find] firstChild=0x00000291BDA22480
[hud-find] child[0]=0x00000291BDA22480 owner=0x00000291E8DD2800 handle=0xCB00F3 resolved=0x00000291EDEDE000
[hud-find] child[1]=0x00000291ECFA3080 owner=0x00000291B4D53C00 handle=0x5C00F1 resolved=0x00000291E91CC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000291B4D53C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[