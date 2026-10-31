[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Oct 31 2026 23:27:32
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC259C924B -> rva 0x271EB28 (val=000003D35143F800)
[auto-off] dwLocalPlayerController      hit 0x00007FFC258E55D0 -> rva 0x25413F8 (val=000003D3E5F15600)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC251015D5 -> rva 0x2738160 (val=000003D36E383600)
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
[resolve] MemAlloc                       @ 0x00007FFCE672DD30
[resolve] MemFree                        @ 0x00007FFCE672DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFC276CEB28 -> 0x000003D35143F800
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC2613E2A5 -> ptrAddr 0x00007FFC275A83E0 -> es 0x000003D2C3B02F40
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x000003D2C3B02F40
[schema-probe] CEconItemSchema* = 0x000003D35171C000
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x000003D3B7610000 node0[+08]=0x000003D3B4E13800 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x000003D351CCC1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x000003D3B7630000 node0[+08]=0x0000000100000001 node0[+18]=0x000003D3B4E13800
[schema-probe]   map @ schema+0x138 count=737 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x000003D3B1383000 node0[+08]=0x000003D3B1E3DAE0 node0[+18]=0x000003D3B1E3DC20
[schema-probe]   map @ schema+0x170 count=12 elements=0x000003D3B484FC00 node0[+08]=0x0000000100000001 node0[+18]=0x000003D3B767CA00
[schema-probe]   map @ schema+0x180 count=3 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x000003D3B48B2000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC26CC3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x000003D3BF34C000 node0[+08]=0x0000030100000128 node0[+18]=0x000003D3B1DFEAC1
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x00000000FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x000003D3B760B800 node0[+08]=0x0000000100000001 node0[+18]=0x000003D3B1E14771
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x000003D3B7890000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC26CC3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x000003D3B76E0230 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x000003D3B76F77E0
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x000003D3B5CB0000 node0[+08]=0x0000000100000002 node0[+18]=0x000003D3B1169680
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2D8 count=4120 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x000003D3BF338000 node0[+08]=0x65735F0100000013 node0[+18]=0x000003D3B168EFC0
[schema-probe]   map @ schema+0x300 count=102 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x000003D36EC48000 node0[+08]=0x000000000000003E node0[+18]=0x000003D3B6B03370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x000003D3FFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x000003D3B115AE00 node0[+08]=0x000003D3B6335EE0 node0[+18]=0x000003D3B6335FA0
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x000003D300000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x000003D3B484D000 node0[+08]=0x000003D3B6336140 node0[+18]=0x000003D3B63361A0
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x000003D300000013 node0[+08]=0x0000000000000000 node0[+18]=0x00000000007FFCE6
[schema-probe]   map @ schema+0x400 count=19 elements=0x000003D36E3FCA00 node0[+08]=0x000003D3B6336180 node0[+18]=0x000003D3B63361C0
[schema-probe] sane map candidates: 29
[verify] items count=2059 elems=0x000003D3B7610000
[verify]   items[0] key=979 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=979 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=979 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=979 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=979 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x000003D3B5CB0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x000003D3B5CB0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x000003D3B6FA3D80 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x000003D3B6FA4480 name="sporty_poison_frog_blue_white"
=== [schema-probe] done ===
[loadout] T/weapon: Glock-18 (Fade) pk=38 def=4
[loadout] T/weapon: AK-47 (Inheritance) pk=1171 def=7
[loadout] T/knife: Falchion Knife (Marble Fade) pk=413 def=512
[loadout] T/gloves: Specialist Gloves (Emerald Web) pk=10034 def=5031
[loadout] CT/weapon: USP-S (Sleeping Potion) pk=1377 def=61
[loadout] CT/weapon: Desert Eagle (Eastern Enigma) pk=1458 def=1
[loadout] CT/weapon: M4A4 (Temukau) pk=1228 def=16
[loadout] CT/knife: Butterfly Knife (Doppler) pk=617 def=515
[loadout] CT/gloves: Sport Gloves (Pandora's Box) pk=10037 def=5030
[loadout] 9 items from E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan\n1ssan-data.json
[plan-a] CEconItemSystem* = 0x000003D2C3B02F40 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC260E27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC26098540, setFloat=00007FFC26098750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000003D3B1E3DD60
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000003D3B1E3DE00
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000003D3B1E3DEA0
[plan-a] inject: created=9 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FFC257C9DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FFC275135A0 vtable=0x00007FFC26C17200 fn=0x00007FFC25B1EE60 slot=36
[fsn] hooked (vtable overwrite)
[ready] v9.0.3 split; targets=9
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000003D3E5F15600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000003D36E383600
[snap] pawn: vtable=0x00007FFCD76C3740 inClient=0 health=979
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x0090000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000003D35143F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0090000B -> 0x000003D3E5DD1800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000003D3E5DD1800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000003D3E5DD1800
[match] FOUND pawn=0x000003D3E5DD1800 hp=100
[apply] tick pawn=0x000003D3E5DD1800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=000003D3E5DD2F70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000003D3E5DD1800 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x000003D3E5DD2F70 vtable=0x00007FFC26C3E0D0 def=0 init=0 quality=-1 attrCount=650979816
[glove-diag] pawn=000003D3E5DD1800 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4295 lastStage=0 stage5Count=272
[snap] stage histogram:
[snap]   stage  0: 924 frames
[snap]   stage  1: 272 frames
[snap]   stage  2: 272 frames
[snap]   stage  3: 272 frames
[snap]   stage  5: 272 frames
[snap]   stage  6: 272 frames
[snap]   stage  7: 272 frames
[snap]   stage  8: 272 frames
[snap]   stage 10: 272 frames
[snap]   stage 11: 309 frames
[snap]   stage 12: 886 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000003D3E5F15600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000003D36E383600
[snap] pawn: vtable=0x00007FFCD76C3740 inClient=0 health=979
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x0090000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000003D35143F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0090000B -> 0x000003D3E5DD1800
[snap] ----------------------------------------
[apply] tick pawn=0x000003D3E5DD1800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000003D36E383600 reapply=114 changed=0 def=24948 init=115 idHigh=0x726F482C
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000003D36E383600
[apply] tick pawn=0x000003D36E383600
[glove-snapshot] ===== PAWN-EMBEDDED item=000003D36E384D70 =====
[glove-snapshot] LOCAL size=779247938 data=54482C6E776F4465 alloc=1867009101
[glove-snapshot] LOCAL invalid vector; entries skipped
[glove-snapshot] NETWORKED size=1853321028 data=6D7568546C6C6F72 alloc=1920236386
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=000003D36E383600 count=-680773824 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000003D3EEC8A000
[apply] tick pawn=0x000003D3EEC8A000
[glove-snapshot] ===== PAWN-EMBEDDED item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000003D3EEC8A000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=6746 lastStage=0 stage5Count=409
[snap] stage histogram:
[snap]   stage  0: 1375 frames
[snap]   stage  1: 501 frames
[snap]   stage  2: 501 frames
[snap]   stage  3: 497 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 409 frames
[snap]   stage  6: 409 frames
[snap]   stage  7: 409 frames
[snap]   stage  8: 409 frames
[snap]   stage 10: 409 frames
[snap]   stage 11: 454 frames
[snap]   stage 12: 1372 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000003D3EF006600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000003D36E383600
[snap] pawn: vtable=0x00007FFCD76C3740 inClient=0 health=979
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x00E301A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000003D35143F800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00E301A1 -> 0x000003D3EEC8A000
[snap] ----------------------------------------
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD4000
[pw] weapon=0x000003D424BD4000 view=0x000003D424BD52E0
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
[pw]   +0x12B0 = 0x005A00EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFC26CC45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000003D424BD4000 def=61
[team] pawn=0x000003D3EEC8A000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[apply] enter (weapon=0x000003D424BD4000 def=61 pk=1377)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003D424BD52E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1377.000 initial=1377.000
[attr-entry] 1: def=7 value=73.000 initial=73.000
[attr-entry] 2: def=8 value=0.100895 initial=0.100895
[apply] world post-create: size=3 data=000003D41E473000 alloc=11
[apply] world view 0x000003D424BD52E0 painted (pk=1377)
[hud-find] START weapon=0x000003D424BD4000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D3D5340480
[hud-find] child[0]=0x000003D3D5340480 owner=0x000003D3D5383400 handle=0x9480EB resolved=0x000003D424BD6000
[hud-find] child[1]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5384800 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD4000 hud=000003D3D5384800 def=61 pk=1377
[glove-diag] pawn=000003D3EEC8A000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[glove-model] stage=AFTER-BODYGROUP pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[attr-diag] item=000003D3EEC8B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003D3EEC8B770 def=5030 pk=10037 size=3 data=000003D41E473380 alloc=11
[glove-paintkit] pk=10037 result=000003D3B6FA3D80 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=0->1
[glove-sequence] applied seq=1 pawn=000003D3EEC8A000 item=000003D3EEC8B770 team=3 def=5030 pk=10037
[glove] APPLIED def=5030 pk=10037 team=3
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=1 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD4000
[pw] weapon 0x000003D424BD4000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000003D424BD4000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D4250EE880
[hud-find] child[1]=0x000003D3D5340480 owner=0x000003D3D5383400 handle=0x9480EB resolved=0x000003D424BD6000
[hud-find] child[2]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5384800 after 3 nodes
[apply-cache] rebuilding weapon=000003D424BD4000 hud=000003D3D5384800 def=61 pk=1377
[glove-next-tick] seq=1 pawn=000003D3EEC8A000 item=000003D3EEC8B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=3 data=000003D41E473380 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[glove-model] stage=AFTER-BODYGROUP pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[attr-diag] item=000003D3EEC8B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003D3EEC8B770 def=5030 pk=10037 size=3 data=000003D41E47A700 alloc=11
[glove-paintkit] pk=10037 result=000003D3B6FA3D80 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=1->2
[glove-sequence] applied seq=2 pawn=000003D3EEC8A000 item=000003D3EEC8B770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=2 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD4000
[pw] weapon 0x000003D424BD4000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000003D424BD4000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420853480
[hud-find] child[1]=0x000003D3D5340480 owner=0x000003D3D5383400 handle=0x9480EB resolved=0x000003D424BD6000
[hud-find] child[2]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5384800 after 3 nodes
[apply-cache] rebuilding weapon=000003D424BD4000 hud=000003D3D5384800 def=61 pk=1377
[glove-next-tick] seq=2 pawn=000003D3EEC8A000 item=000003D3EEC8B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=3 data=000003D41E47A700 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[glove-model] stage=AFTER-BODYGROUP pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[attr-diag] item=000003D3EEC8B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003D3EEC8B770 def=5030 pk=10037 size=3 data=000003D41E47D480 alloc=11
[glove-paintkit] pk=10037 result=000003D3B6FA3D80 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=2->3
[glove-sequence] applied seq=3 pawn=000003D3EEC8A000 item=000003D3EEC8B770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=3 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD4000
[pw] weapon 0x000003D424BD4000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000003D424BD4000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D42177D480
[hud-find] child[1]=0x000003D3D5340480 owner=0x000003D3D5383400 handle=0x9480EB resolved=0x000003D424BD6000
[hud-find] child[2]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5384800 after 3 nodes
[apply-cache] rebuilding weapon=000003D424BD4000 hud=000003D3D5384800 def=61 pk=1377
[glove-next-tick] seq=3 pawn=000003D3EEC8A000 item=000003D3EEC8B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=3 data=000003D41E47D480 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[glove-model] stage=AFTER-BODYGROUP pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[attr-diag] item=000003D3EEC8B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003D3EEC8B770 def=5030 pk=10037 size=3 data=000003D41E47F400 alloc=11
[glove-paintkit] pk=10037 result=000003D3B6FA3D80 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=3->4
[glove-sequence] applied seq=4 pawn=000003D3EEC8A000 item=000003D3EEC8B770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=4 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD4000
[pw] weapon 0x000003D424BD4000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000003D424BD4000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D421163C80
[hud-find] child[1]=0x000003D3D5340480 owner=0x000003D3D5383400 handle=0x9480EB resolved=0x000003D424BD6000
[hud-find] child[2]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5384800 after 3 nodes
[apply-cache] rebuilding weapon=000003D424BD4000 hud=000003D3D5384800 def=61 pk=1377
[glove-next-tick] seq=4 pawn=000003D3EEC8A000 item=000003D3EEC8B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=3 data=000003D41E47F400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD4000
[pw] weapon 0x000003D424BD4000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000003D424BD4000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D421163C80
[hud-find] child[1]=0x000003D3D5340480 owner=0x000003D3D5383400 handle=0x9480EB resolved=0x000003D424BD6000
[hud-find] child[2]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5384800 after 3 nodes
[apply-cache] rebuilding weapon=000003D424BD4000 hud=000003D3D5384800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD4000
[pw] weapon 0x000003D424BD4000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000003D424BD4000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D421163C80
[hud-find] child[1]=0x000003D3D5340480 owner=0x000003D3D5383400 handle=0x9480EB resolved=0x000003D424BD6000
[hud-find] child[2]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5384800 after 3 nodes
[apply-cache] rebuilding weapon=000003D424BD4000 hud=000003D3D5384800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD4000
[pw] weapon 0x000003D424BD4000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000003D424BD4000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D421163C80
[hud-find] child[1]=0x000003D3D5340480 owner=0x000003D3D5383400 handle=0x9480EB resolved=0x000003D424BD6000
[hud-find] child[2]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5384800 after 3 nodes
[apply-cache] rebuilding weapon=000003D424BD4000 hud=000003D3D5384800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply] enter (weapon=0x000003D424BD6000 def=515 pk=617)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003D424BD72E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=617.000 initial=617.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000003D41E479580 alloc=11
[apply] world view 0x000003D424BD72E0 painted (pk=617)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D421163C80
[hud-find] child[1]=0x000003D3D5343480 owner=0x000003D3D5384800 handle=0x5A00EC resolved=0x000003D424BD4000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003D424BD6000 hud=0000000000000000 def=515 pk=617
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=11249 lastStage=0 stage5Count=702
[snap] stage histogram:
[snap]   stage  0: 2308 frames
[snap]   stage  1: 794 frames
[snap]   stage  2: 794 frames
[snap]   stage  3: 790 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 702 frames
[snap]   stage  6: 702 frames
[snap]   stage  7: 702 frames
[snap]   stage  8: 702 frames
[snap]   stage 10: 702 frames
[snap]   stage 11: 771 frames
[snap]   stage 12: 2281 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000003D3EF006600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000003D36E383600
[snap] pawn: vtable=0x00007FFCD76C3740 inClient=0 health=979
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x00E301A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000003D35143F800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00E301A1 -> 0x000003D3EEC8A000
[snap] ----------------------------------------
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D420F49480
[hud-find] child[0]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 1 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[apply] enter (weapon=0x000003D420822000 def=16 pk=1228)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003D4208232E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1228.000 initial=1228.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.070775 initial=0.070775
[apply] world post-create: size=3 data=000003D41E479900 alloc=11
[apply] world view 0x000003D4208232E0 painted (pk=1228)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=3 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041318
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=15812 lastStage=0 stage5Count=1017
[snap] stage histogram:
[snap]   stage  0: 3172 frames
[snap]   stage  1: 1109 frames
[snap]   stage  2: 1109 frames
[snap]   stage  3: 1105 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1017 frames
[snap]   stage  6: 1017 frames
[snap]   stage  7: 1017 frames
[snap]   stage  8: 1017 frames
[snap]   stage 10: 1017 frames
[snap]   stage 11: 1093 frames
[snap]   stage 12: 3138 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000003D3EF006600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000003D36E383600
[snap] pawn: vtable=0x00007FFCD76C3740 inClient=0 health=979
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x00E301A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000003D35143F800 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00E301A1 -> 0x000003D3EEC8A000
[snap] ----------------------------------------
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D420822000
[pw] weapon 0x000003D420822000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003D420822000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D98800 after 1 nodes
[apply-cache] rebuilding weapon=000003D420822000 hud=000003D3E9D98800 def=16 pk=1228
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D424BD6000
[pw] weapon 0x000003D424BD6000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x000003D424BD6000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x23034214
[hud-find] arms=0x000003D3D5374000
[hud-find] armsNode=0x000003D3D5344080
[hud-find] firstChild=0x000003D41E02BC80
[hud-find] child[0]=0x000003D41E02BC80 owner=0x000003D3E9D98800 handle=0xBB00EE resolved=0x000003D420822000
[hud-find] child[1]=0x000003D420F49480 owner=0x000003D3E9D1CC00 handle=0x9480EB resolved=0x000003D424BD6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D1CC00 after 2 nodes
[apply-cache] rebuilding weapon=000003D424BD6000 hud=000003D3E9D1CC00 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000003D42114E000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003D42114F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000003D3EB0EF880 alloc=11
[apply] world view 0x000003D42114F2E0 painted (pk=38)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x9B064255
[hud-find] arms=0x000003D41E419800
[hud-find] armsNode=0x000003D41F419480
[hud-find] firstChild=0x000003D41F41AC80
[hud-find] child[0]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[glove-diag] pawn=000003D3EEC8A000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-model-refresh] queued: team 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=4->5
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[model] outer=0x000003D37E041E18 inner=0x000003D3A4294C00
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=000003D3EEC8A000 reapply=1 changed=5 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=5 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D41F41AC80
[hud-find] child[0]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=5->6
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=6 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D41F41AC80
[hud-find] child[0]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[glove-model] stage=BEFORE-BODYGROUP pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[glove-model] stage=AFTER-BODYGROUP pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[attr-diag] item=000003D3EEC8B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003D3EEC8B770 def=5031 pk=10034 size=3 data=000003D41E478780 alloc=11
[glove-paintkit] pk=10034 result=000003D3B6FA3AE0 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=6->7
[glove-sequence] applied seq=5 pawn=000003D3EEC8A000 item=000003D3EEC8B770 team=2 def=5031 pk=10034
[glove] APPLIED def=5031 pk=10034 team=2
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=7 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D420F4DC80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[glove-next-tick] seq=5 pawn=000003D3EEC8A000 item=000003D3EEC8B770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=3 data=000003D41E478780 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[glove-model] stage=AFTER-BODYGROUP pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[attr-diag] item=000003D3EEC8B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003D3EEC8B770 def=5031 pk=10034 size=3 data=000003D41E477600 alloc=11
[glove-paintkit] pk=10034 result=000003D3B6FA3AE0 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=7->8
[glove-sequence] applied seq=6 pawn=000003D3EEC8A000 item=000003D3EEC8B770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=8 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D42177BC80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[glove-next-tick] seq=6 pawn=000003D3EEC8A000 item=000003D3EEC8B770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=3 data=000003D41E477600 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[glove-model] stage=AFTER-BODYGROUP pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[attr-diag] item=000003D3EEC8B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003D3EEC8B770 def=5031 pk=10034 size=3 data=000003D41E474500 alloc=11
[glove-paintkit] pk=10034 result=000003D3B6FA3AE0 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=8->9
[glove-sequence] applied seq=7 pawn=000003D3EEC8A000 item=000003D3EEC8B770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=9 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D41F41F480
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[glove-next-tick] seq=7 pawn=000003D3EEC8A000 item=000003D3EEC8B770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=3 data=000003D41E474500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[glove-model] stage=AFTER-BODYGROUP pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[attr-diag] item=000003D3EEC8B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003D3EEC8B770 def=5031 pk=10034 size=3 data=000003D41E473700 alloc=11
[glove-paintkit] pk=10034 result=000003D3B6FA3AE0 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=000003D3EEC8A000 reapply=0->1 changed=9->10
[glove-sequence] applied seq=8 pawn=000003D3EEC8A000 item=000003D3EEC8B770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[glove-observe] pawn=000003D3EEC8A000 reapply=0 changed=10 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[glove-next-tick] seq=8 pawn=000003D3EEC8A000 item=000003D3EEC8B770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003D3EEC8B770 =====
[glove-snapshot] LOCAL size=3 data=000003D41E473700 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=20146 lastStage=0 stage5Count=1317
[snap] stage histogram:
[snap]   stage  0: 3989 frames
[snap]   stage  1: 1409 frames
[snap]   stage  2: 1409 frames
[snap]   stage  3: 1405 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1317 frames
[snap]   stage  6: 1317 frames
[snap]   stage  7: 1317 frames
[snap]   stage  8: 1317 frames
[snap]   stage 10: 1317 frames
[snap]   stage 11: 1413 frames
[snap]   stage 12: 3935 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000003D3EF006600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000003D36E383600
[snap] pawn: vtable=0x00007FFCD76C3740 inClient=0 health=979
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x00E301A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000003D35143F800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00E301A1 -> 0x000003D3EEC8A000
[snap] ----------------------------------------
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 2 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=000003D42114C000 runtimeOffset=0x380 read=1 value=609768950 target=3412259219
[subclass-diag] BEFORE weapon=000003D42114C000 offset=0x38C read=1 value=609768950 target=3412259219
[knife] SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[subclass-diag] WRITE success=1 target=3412259219
[subclass-diag] UPDATE success=1 READBACK read=1 value=3412259219
[apply] enter (weapon=0x000003D42114C000 def=512 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003D42114D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000003D41E47A700 alloc=11
[apply] world view 0x000003D42114D2E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D421973C80
[hud-find] child[1]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003D42114C000 hud=0000000000000000 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003D3EEC8A000 team=2 scene=000003D3E9A77080 skeleton=000003D3E9A77080 modelState=000003D3E9A771C0 rawHandle=0x3D37E041E18
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=000003D42114C000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=000003D42114C000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=000003D42114C000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=000003D42114C000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=000003D42114C000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=000003D42114C000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=000003D42114C000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=000003D42114C000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=000003D42114C000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=000003D42114C000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=25366 lastStage=0 stage5Count=1633
[snap] stage histogram:
[snap]   stage  0: 5177 frames
[snap]   stage  1: 1725 frames
[snap]   stage  2: 1725 frames
[snap]   stage  3: 1721 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1633 frames
[snap]   stage  6: 1633 frames
[snap]   stage  7: 1633 frames
[snap]   stage  8: 1633 frames
[snap]   stage 10: 1633 frames
[snap]   stage 11: 1733 frames
[snap]   stage 12: 5119 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000003D3EF006600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000003D36E383600
[snap] pawn: vtable=0x00007FFCD76C3740 inClient=0 health=979
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x00E301A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000003D35143F800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00E301A1 -> 0x000003D3EEC8A000
[snap] ----------------------------------------
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114E000
[pw] weapon 0x000003D42114E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003D42114E000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000
[hud-find] child[2]=0x000003D41F41AC80 owner=0x000003D3D5382000 handle=0x12700F1 resolved=0x000003D42114E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3D5382000 after 3 nodes
[apply-cache] rebuilding weapon=000003D42114E000 hud=000003D3D5382000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=30636 lastStage=0 stage5Count=1951
[snap] stage histogram:
[snap]   stage  0: 6381 frames
[snap]   stage  1: 2043 frames
[snap]   stage  2: 2043 frames
[snap]   stage  3: 2039 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1951 frames
[snap]   stage  6: 1951 frames
[snap]   stage  7: 1951 frames
[snap]   stage  8: 1951 frames
[snap]   stage 10: 1951 frames
[snap]   stage 11: 2053 frames
[snap]   stage 12: 6321 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000003D3EF006600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000003D36E383600
[snap] pawn: vtable=0x00007FFCD76C3740 inClient=0 health=979
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x00E301A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000003D35143F800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00E301A1 -> 0x000003D3EEC8A000
[snap] ----------------------------------------
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003D3EEC8A000
[apply] active 0x000003D42114C000
[pw] weapon 0x000003D42114C000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x000003D42114C000 pawn=0x000003D3EEC8A000
[hud-find] armsHandle=0x24E8425C
[hud-find] arms=0x000003D42172A000
[hud-find] armsNode=0x000003D3D5348880
[hud-find] firstChild=0x000003D3D56F5080
[hud-find] child[0]=0x000003D3D56F5080 owner=0x000003D3E9D9D800 handle=0x5400F0 resolved=0x000003D42114C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003D3E9D9D800 after 1 nodes
[apply-cache] rebuilding weapon=000003D42114C000 hud=000003D3E9D9D800 def=512 pk=413
[mesh-diag] WORLD entity=000003D42114C000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=000003D3E9D9D800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[