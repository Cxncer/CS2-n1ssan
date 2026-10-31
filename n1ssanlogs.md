[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 01:33:22
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC73CE924B -> rva 0x271EB28 (val=0000023F81468800)
[auto-off] dwLocalPlayerController      hit 0x00007FFC73C055D0 -> rva 0x25413F8 (val=000002400BF24200)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC734215D5 -> rva 0x2738160 (val=0000023F9E283000)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFC759EEB28
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFC758113F8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFC75A08160
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
[resolve] InvalidateDescription          @ 0x00007FFC74470A20
[resolve] BuildModernSkin                @ 0x00007FFC741153D0
[resolve] SetMeshGroupMask               @ 0x00007FFC73D95910
[resolve] RegenerateSkins                @ 0x00007FFC73AFB330
[resolve] ReleaseCompositeMaterials      @ 0x00007FFC747BBB70
[resolve] GloveCreatePaintKit            @ 0x00007FFC74460AA0
[resolve] AgentSetModel                  @ 0x00007FFC73C35B10
[resolve] KnifeUpdateSubclass            @ 0x00007FFC734D8FC0
[resolve] GloveSetBodyGroup              @ 0x00007FFC73C34A30
[resolve] MemAlloc                       @ 0x00007FFCE680DD30
[resolve] MemFree                        @ 0x00007FFCE680DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFC759EEB28 -> 0x0000023F81468800
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC7445E2A5 -> ptrAddr 0x00007FFC758C83E0 -> es 0x0000023EF3B33DB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x0000023EF3B33DB0
[schema-probe] CEconItemSchema* = 0x0000023F8178C400
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x0000023FEF710000 node0[+08]=0x0000023FE6EA2C00 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x0000023F81BDC1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000500000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x0000023FEF730000 node0[+08]=0x0000000100000001 node0[+18]=0x0000023FE6EA2C00
[schema-probe]   map @ schema+0x138 count=737 elements=0x0000023FFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x0000023FC8D6C000 node0[+08]=0x0000023FEE3D6F00 node0[+18]=0x0000023FEE3D7040
[schema-probe]   map @ schema+0x170 count=12 elements=0x0000023FE638FA00 node0[+08]=0x0000000100000001 node0[+18]=0x0000023FEF782C00
[schema-probe]   map @ schema+0x180 count=3 elements=0x0000023FFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x0000023FCCC9A000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC74FE3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x0000023FFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x0000023FE67C0000 node0[+08]=0x3F80000100000128 node0[+18]=0x0000023FEDE6D9E1
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x0000023FEF709C00 node0[+08]=0x0000000100000001 node0[+18]=0x0000023FEDE85BA1
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x0000023FFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x0000023FEF8F0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC74FE3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x0000023FFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x0000023FEE3BEB80 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x0000023FEF5C7020
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x0000023FE7C80000 node0[+08]=0x65735F0100000002 node0[+18]=0x0000023FED219180
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x0000023FE67A4000 node0[+08]=0x0909090100000013 node0[+18]=0x0000023FED7ADEE0
[schema-probe]   map @ schema+0x300 count=102 elements=0x0000023FFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x0000023FFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x0000023FE69FA000 node0[+08]=0x000000000000003E node0[+18]=0x0000023FEEB83370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x0000023FFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x0000023FED298E00 node0[+08]=0x0000023FEE374E00 node0[+18]=0x0000023FEE374EC0
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000023F00000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x0000023FE638CE00 node0[+08]=0x0000023FEE375060 node0[+18]=0x0000023FEE3750C0
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000023F00000013 node0[+08]=0x0000000000000000 node0[+18]=0x00000000007FFCE6
[schema-probe]   map @ schema+0x400 count=19 elements=0x0000023F9E2FCA00 node0[+08]=0x0000023FEE3750A0 node0[+18]=0x0000023FEE3750E0
[schema-probe] sane map candidates: 27
[verify] items count=2059 elems=0x0000023FEF710000
[verify]   items[0] key=0 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=0 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=0 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=0 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=0 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x0000023FE7C80000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x0000023FE7C80000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x0000023FEF023780 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x0000023FEF023E80 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x0000023EF3B33DB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC744027C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC743B8540, setFloat=00007FFC743B8750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x0000023FEE3D7180
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x0000023FEE3D7220
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x0000023FEE3D72C0
[plan-a] inject: created=20 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FFC73AE9DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FFC758335A0 vtable=0x00007FFC74F37200 fn=0x00007FFC73E3EE60 slot=36
[fsn] hooked (vtable overwrite)
[ready] v9.0.3 split; targets=20
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002400BF24200
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x0118000B (idx=11)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0118000B -> 0x000002400BCEA000
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000002400BCEA000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000002400BCEA000
[match] FOUND pawn=0x000002400BCEA000 hp=100
[apply] tick pawn=0x000002400BCEA000
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=000002400BCEB770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000002400BCEA000 count=1962271320 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x000002400BCEB770 vtable=0x00007FFC74F5E0D0 def=0 init=0 quality=-1 attrCount=1962879464
[glove-diag] pawn=000002400BCEA000 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4300 lastStage=0 stage5Count=293
[snap] stage histogram:
[snap]   stage  0: 832 frames
[snap]   stage  1: 293 frames
[snap]   stage  2: 293 frames
[snap]   stage  3: 293 frames
[snap]   stage  5: 293 frames
[snap]   stage  6: 293 frames
[snap]   stage  7: 293 frames
[snap]   stage  8: 293 frames
[snap]   stage 10: 293 frames
[snap]   stage 11: 308 frames
[snap]   stage 12: 816 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002400BF24200
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x0118000B (idx=11)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0118000B -> 0x000002400BCEA000
[snap] ----------------------------------------
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002400BCEA000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=7904 lastStage=1 stage5Count=505
[snap] stage histogram:
[snap]   stage  0: 1679 frames
[snap]   stage  1: 506 frames
[snap]   stage  2: 505 frames
[snap]   stage  3: 505 frames
[snap]   stage  5: 505 frames
[snap]   stage  6: 505 frames
[snap]   stage  7: 505 frames
[snap]   stage  8: 505 frames
[snap]   stage 10: 505 frames
[snap]   stage 11: 521 frames
[snap]   stage 12: 1663 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=0000023F9E283000 reapply=114 changed=0 def=24948 init=115 idHigh=0x726F482C
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000023F9E283000
[apply] tick pawn=0x0000023F9E283000
[glove-snapshot] ===== PAWN-EMBEDDED item=0000023F9E284770 =====
[glove-snapshot] LOCAL size=779247938 data=54482C6E776F4465 alloc=1867009101
[glove-snapshot] LOCAL invalid vector; entries skipped
[glove-snapshot] NETWORKED size=1853321028 data=6D7568546C6C6F72 alloc=1920236386
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=0000023F9E283000 count=-679528640 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=0000023FC9EEC000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000023FC9EEC000
[apply] tick pawn=0x0000023FC9EEC000
[glove-snapshot] ===== PAWN-EMBEDDED item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000023FC9EEC000 count=1962271320 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769A000
[pw] weapon=0x000002405769A000 view=0x000002405769B2E0
[pw]   view+0x00 = 0x74FE45A0
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
[pw]   +0x1290 = 0x00007FFC74FE4740
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x0120035A00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FFC74FE45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000002405769A000 def=61
[team] pawn=0x0000023FC9EEC000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000002405769A000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002405769B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=0000024056F07000 alloc=11
[apply] world view 0x000002405769B2E0 painted (pk=1173)
[hud-find] START weapon=0x000002405769A000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xFFFFFFFF
[hud-find] FAIL: invalid arms handle
[apply-cache] rebuilding weapon=000002405769A000 hud=0000000000000000 def=61 pk=1173
[glove-diag] pawn=0000023FC9EEC000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=0000024056F06900 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=1 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[glove] APPLIED def=5033 pk=10053 team=3
[glove-arms] invalid handle=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-observe] pawn=0000023FC9EEC000 reapply=0 changed=0 def=5033 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769A000
[pw] weapon 0x000002405769A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002405769A000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024006FE4C80
[hud-find] child[0]=0x0000024006FE4C80 owner=0x0000024057F17400 handle=0x1B8359 resolved=0x000002405769E000
[hud-find] child[1]=0x0000024006FE5880 owner=0x0000024057F13800 handle=0x120035A resolved=0x000002405769A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024057F13800 after 2 nodes
[apply-cache] rebuilding weapon=000002405769A000 hud=0000024057F13800 def=61 pk=1173
[glove-next-tick] seq=1 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=0000024056F06900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB4380 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=2 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769A000
[pw] weapon 0x000002405769A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002405769A000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x00000240555CCC80
[hud-find] child[1]=0x0000024006FE4C80 owner=0x0000024057F17400 handle=0x1B8359 resolved=0x000002405769E000
[hud-find] child[2]=0x0000024006FE5880 owner=0x0000024057F13800 handle=0x120035A resolved=0x000002405769A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024057F13800 after 3 nodes
[apply-cache] rebuilding weapon=000002405769A000 hud=0000024057F13800 def=61 pk=1173
[glove-next-tick] seq=2 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB4380 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB1600 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=3 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000002405769E000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002405769F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002404FCBF280 alloc=11
[apply] world view 0x000002405769F2E0 painted (pk=417)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024055CA7080
[hud-find] child[1]=0x0000024006FE5880 owner=0x0000024057F13800 handle=0x120035A resolved=0x000002405769A000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002405769E000 hud=0000000000000000 def=525 pk=417
[glove-next-tick] seq=3 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB1600 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB7F00 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=4 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002404EC90C80
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=4 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB7F00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCBDA00 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=5 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498

=== SNAPSHOT ===
[snap] fsnCount=10002 lastStage=7 stage5Count=653
[snap] stage histogram:
[snap]   stage  0: 1980 frames
[snap]   stage  1: 703 frames
[snap]   stage  2: 703 frames
[snap]   stage  3: 698 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 653 frames
[snap]   stage  6: 653 frames
[snap]   stage  7: 653 frames
[snap]   stage  8: 652 frames
[snap]   stage 10: 653 frames
[snap]   stage 11: 760 frames
[snap]   stage 12: 1893 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x00000240555CC080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=5 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCBDA00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB4000 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=6 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024057FF6C80
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=6 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB4000 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB5180 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=7 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024057BD3C80
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=7 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB5180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB5500 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=8 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x00000240555CD880
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=8 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB5500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB5180 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=9 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769A000
[pw] weapon 0x000002405769A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002405769A000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024057FF0C80
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000
[hud-find] child[2]=0x0000024006FE5880 owner=0x0000024057F13800 handle=0x120035A resolved=0x000002405769A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024057F13800 after 3 nodes
[apply-cache] rebuilding weapon=000002405769A000 hud=0000024057F13800 def=61 pk=1173
[glove-next-tick] seq=9 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB5180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024057FF0C80
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024057FF0C80
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024057FF0C80
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB3580 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=10 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024006FE7080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=10 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB3580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB1D00 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=11 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x0000024055FF0880
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=11 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB1D00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB3900 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=12 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002404EBFC480
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=12 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB3900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCBF600 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=13 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769A000
[pw] weapon 0x000002405769A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002405769A000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000
[hud-find] child[2]=0x0000024006FE5880 owner=0x0000024057F13800 handle=0x120035A resolved=0x000002405769A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024057F13800 after 3 nodes
[apply-cache] rebuilding weapon=000002405769A000 hud=0000024057F13800 def=61 pk=1173
[glove-next-tick] seq=13 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCBF600 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-cache] rebuilding weapon=000002405769E000 hud=000002404E804400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769A000
[pw] weapon 0x000002405769A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002405769A000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000
[hud-find] child[2]=0x0000024006FE5880 owner=0x0000024057F13800 handle=0x120035A resolved=0x000002405769A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024057F13800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=13994 lastStage=0 stage5Count=947
[snap] stage histogram:
[snap]   stage  0: 2652 frames
[snap]   stage  1: 997 frames
[snap]   stage  2: 997 frames
[snap]   stage  3: 993 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 947 frames
[snap]   stage  6: 947 frames
[snap]   stage  7: 947 frames
[snap]   stage  8: 947 frames
[snap]   stage 10: 947 frames
[snap]   stage 11: 1082 frames
[snap]   stage 12: 2537 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=18531 lastStage=8 stage5Count=1263
[snap] stage histogram:
[snap]   stage  0: 3499 frames
[snap]   stage  1: 1313 frames
[snap]   stage  2: 1313 frames
[snap]   stage  3: 1308 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1263 frames
[snap]   stage  6: 1263 frames
[snap]   stage  7: 1263 frames
[snap]   stage  8: 1263 frames
[snap]   stage 10: 1263 frames
[snap]   stage 11: 1403 frames
[snap]   stage 12: 3379 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=23622 lastStage=0 stage5Count=1583
[snap] stage histogram:
[snap]   stage  0: 4604 frames
[snap]   stage  1: 1633 frames
[snap]   stage  2: 1633 frames
[snap]   stage  3: 1629 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1583 frames
[snap]   stage  6: 1583 frames
[snap]   stage  7: 1583 frames
[snap]   stage  8: 1583 frames
[snap]   stage 10: 1583 frames
[snap]   stage 11: 1723 frames
[snap]   stage 12: 4484 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=28584 lastStage=0 stage5Count=1899
[snap] stage histogram:
[snap]   stage  0: 5663 frames
[snap]   stage  1: 1949 frames
[snap]   stage  2: 1949 frames
[snap]   stage  3: 1945 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1899 frames
[snap]   stage  6: 1899 frames
[snap]   stage  7: 1899 frames
[snap]   stage  8: 1899 frames
[snap]   stage 10: 1899 frames
[snap]   stage 11: 2043 frames
[snap]   stage 12: 5539 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769A000
[pw] weapon 0x000002405769A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002405769A000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000
[hud-find] child[2]=0x0000024006FE5880 owner=0x0000024057F13800 handle=0x120035A resolved=0x000002405769A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024057F13800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=33108 lastStage=6 stage5Count=2212
[snap] stage histogram:
[snap]   stage  0: 6518 frames
[snap]   stage  1: 2262 frames
[snap]   stage  2: 2262 frames
[snap]   stage  3: 2257 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2212 frames
[snap]   stage  6: 2212 frames
[snap]   stage  7: 2211 frames
[snap]   stage  8: 2211 frames
[snap]   stage 10: 2212 frames
[snap]   stage 11: 2363 frames
[snap]   stage 12: 6387 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405769E000
[pw] weapon 0x000002405769E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002405769E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xB9F04217
[hud-find] arms=0x0000024057E26800
[hud-find] armsNode=0x0000024057ED6C80
[hud-find] firstChild=0x000002405625C080
[hud-find] child[1]=0x0000024057FF9080 owner=0x000002404E804400 handle=0x1B8359 resolved=0x000002405769E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E804400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x0000024054294000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000240542952E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000002404F138A80 alloc=11
[apply] world view 0x00000240542952E0 painted (pk=38)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[apply-cache] rebuilding weapon=0000024054294000 hud=000002405763A800 def=4 pk=38
[glove-diag] pawn=0000023FC9EEC000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5033 desiredDef=5031
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-observe] pawn=0000023FC9EEC000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5031 pk=10063 size=3 data=000002404F133D80 alloc=11
[glove-paintkit] pk=10063 result=0000023FEF024E40 nameOk=1 name="specialist_fade"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=14 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=2 def=5031 pk=10063
[glove] APPLIED def=5031 pk=10063 team=2
[model] outer=0x0000023F9F9FEF98 inner=0x0000023FC95CA200
[glove-arms] pawn=0000023FC9EEC000 handle=0x8B2E4268 entity=00000240542B6800 scene=000002404EC97880 model=0000023FC95CA200 namePtr=0000023FC9087940 name="agents/models/tm_phoenix/tm_phoenix.vmdl"
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-observe] pawn=0000023FC9EEC000 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[apply-cache] rebuilding weapon=0000024054294000 hud=000002405763A800 def=4 pk=38
[glove-next-tick] seq=14 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404F133D80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5031 pk=10063 size=3 data=000002404F134F00 alloc=11
[glove-paintkit] pk=10063 result=0000023FEF024E40 nameOk=1 name="specialist_fade"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=15 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[apply-cache] rebuilding weapon=0000024054294000 hud=000002405763A800 def=4 pk=38
[glove-next-tick] seq=15 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404F134F00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5031 pk=10063 size=3 data=000002404F130C80 alloc=11
[glove-paintkit] pk=10063 result=0000023FEF024E40 nameOk=1 name="specialist_fade"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=16 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98

=== SNAPSHOT ===
[snap] fsnCount=37219 lastStage=12 stage5Count=2515
[snap] stage histogram:
[snap]   stage  0: 7208 frames
[snap]   stage  1: 2565 frames
[snap]   stage  2: 2565 frames
[snap]   stage  3: 2561 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2515 frames
[snap]   stage  6: 2515 frames
[snap]   stage  7: 2515 frames
[snap]   stage  8: 2515 frames
[snap]   stage 10: 2515 frames
[snap]   stage 11: 2683 frames
[snap]   stage 12: 7061 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[apply-cache] rebuilding weapon=0000024054294000 hud=000002405763A800 def=4 pk=38
[glove-next-tick] seq=16 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404F130C80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5031 pk=10063 size=3 data=000002404F134480 alloc=11
[glove-paintkit] pk=10063 result=0000023FEF024E40 nameOk=1 name="specialist_fade"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=17 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[apply-cache] rebuilding weapon=0000024054294000 hud=000002405763A800 def=4 pk=38
[glove-next-tick] seq=17 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404F134480 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054294000
[pw] weapon 0x0000024054294000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000024054294000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405763A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=59
[pw] knife: applying Slaughter (pk=59 target def=523)
[knife] SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply] enter (weapon=0x0000024054298000 def=523 pk=59)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000240542992E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=59.000 initial=59.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002404F134F00 alloc=11
[apply] world view 0x00000240542992E0 painted (pk=59)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x000002404F50D880
[hud-find] child[0]=0x000002404F50D880 owner=0x000002405763A800 handle=0x1AE8363 resolved=0x0000024054294000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000024054298000 hud=0000000000000000 def=523 pk=59
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-cache] rebuilding weapon=0000024054298000 hud=000002404E80A800 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=41875 lastStage=7 stage5Count=2830
[snap] stage histogram:
[snap]   stage  0: 8120 frames
[snap]   stage  1: 2880 frames
[snap]   stage  2: 2880 frames
[snap]   stage  3: 2875 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2830 frames
[snap]   stage  6: 2830 frames
[snap]   stage  7: 2830 frames
[snap]   stage  8: 2829 frames
[snap]   stage 10: 2830 frames
[snap]   stage 11: 3003 frames
[snap]   stage 12: 7967 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x0000024054298000
[pw] weapon 0x0000024054298000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000024054298000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x8B2E4268
[hud-find] arms=0x00000240542B6800
[hud-find] armsNode=0x000002404EC97880
[hud-find] firstChild=0x0000024055CA2880
[hud-find] child[0]=0x0000024055CA2880 owner=0x000002404E80A800 handle=0x1D00362 resolved=0x0000024054298000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E80A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BA000
[pw] weapon 0x000002404F3BA000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000002404F3BA000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002404F3BB2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=000002404FCB7480 alloc=11
[apply] world view 0x000002404F3BB2E0 painted (pk=1173)
[hud-find] START weapon=0x000002404F3BA000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x000002404F500080
[hud-find] child[0]=0x000002404F500080 owner=0x000002400636A400 handle=0x7A8366 resolved=0x000002404F3BA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002400636A400 after 1 nodes
[apply-cache] rebuilding weapon=000002404F3BA000 hud=000002400636A400 def=61 pk=1173
[glove-diag] pawn=0000023FC9EEC000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove] team changed: 2 -> 3
[glove-trigger] active=1 curDef=5031 desiredDef=5033
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-observe] pawn=0000023FC9EEC000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BA000
[pw] weapon 0x000002404F3BA000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002404F3BA000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x000002404F500080
[hud-find] child[0]=0x000002404F500080 owner=0x000002400636A400 handle=0x7A8366 resolved=0x000002404F3BA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002400636A400 after 1 nodes
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BA000
[pw] weapon 0x000002404F3BA000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002404F3BA000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x000002404F500080
[hud-find] child[0]=0x000002404F500080 owner=0x000002400636A400 handle=0x7A8366 resolved=0x000002404F3BA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002400636A400 after 1 nodes
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB3200 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=18 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[glove] APPLIED def=5033 pk=10053 team=3
[glove-arms] pawn=0000023FC9EEC000 handle=0xBB14C29E entity=00000240542B3800 scene=00000240063B8880 model=0000023FB4B9A500 namePtr=0000023FB4BC4910 name="agents/models/ctm_sas/ctm_sas.vmdl"
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-observe] pawn=0000023FC9EEC000 reapply=0 changed=0 def=5033 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000002404F3BC000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002404F3BD2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002404FCB7100 alloc=11
[apply] world view 0x000002404F3BD2E0 painted (pk=417)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x000002404F500080
[hud-find] child[0]=0x000002404F500080 owner=0x000002400636A400 handle=0x7A8366 resolved=0x000002404F3BA000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002404F3BC000 hud=0000000000000000 def=525 pk=417
[glove-next-tick] seq=18 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB3200 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB3580 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=19 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-cache] rebuilding weapon=000002404F3BC000 hud=000002404E8FBC00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=19 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB3580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB4380 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=20 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498

=== SNAPSHOT ===
[snap] fsnCount=46281 lastStage=10 stage5Count=3133
[snap] stage histogram:
[snap]   stage  0: 8958 frames
[snap]   stage  1: 3183 frames
[snap]   stage  2: 3183 frames
[snap]   stage  3: 3179 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3133 frames
[snap]   stage  6: 3133 frames
[snap]   stage  7: 3133 frames
[snap]   stage  8: 3133 frames
[snap]   stage 10: 3134 frames
[snap]   stage 11: 3323 frames
[snap]   stage 12: 8788 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-cache] rebuilding weapon=000002404F3BC000 hud=000002404E8FBC00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=20 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB4380 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5033 pk=10053 size=3 data=000002404FCB0B80 alloc=11
[glove-paintkit] pk=10053 result=0000023FEF024580 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=21 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=3 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FE498
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-cache] rebuilding weapon=000002404F3BC000 hud=000002404E8FBC00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=21 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404FCB0B80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BA000
[pw] weapon 0x000002404F3BA000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002404F3BA000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000
[hud-find] child[1]=0x000002404F500080 owner=0x000002400636A400 handle=0x7A8366 resolved=0x000002404F3BA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002400636A400 after 2 nodes
[apply-cache] rebuilding weapon=000002404F3BA000 hud=000002400636A400 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002404F3BC000
[pw] weapon 0x000002404F3BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002404F3BC000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x00000240542B3800
[hud-find] armsNode=0x00000240063B8880
[hud-find] firstChild=0x0000024057FFD880
[hud-find] child[0]=0x0000024057FFD880 owner=0x000002404E8FBC00 handle=0x1CF8365 resolved=0x000002404F3BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002404E8FBC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526C000
[pw] weapon 0x000002405526C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000002405526C000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002405526D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000002404F137900 alloc=11
[apply] world view 0x000002405526D2E0 painted (pk=38)
[hud-find] START weapon=0x000002405526C000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0xBB14C29E
[hud-find] arms=0x0000000000000000
[hud-find] FAIL: handle did not resolve
[apply-cache] rebuilding weapon=000002405526C000 hud=0000000000000000 def=4 pk=38
[glove-diag] pawn=0000023FC9EEC000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5033 desiredDef=5031
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-observe] pawn=0000023FC9EEC000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526C000
[pw] weapon 0x000002405526C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002405526C000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240561D9880
[hud-find] child[0]=0x00000240561D9880 owner=0x0000024006366800 handle=0xAA0369 resolved=0x000002405526C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024006366800 after 1 nodes
[apply-cache] rebuilding weapon=000002405526C000 hud=0000024006366800 def=4 pk=38
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526C000
[pw] weapon 0x000002405526C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002405526C000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240561D9880
[hud-find] child[0]=0x00000240561D9880 owner=0x0000024006366800 handle=0xAA0369 resolved=0x000002405526C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024006366800 after 1 nodes
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5031 pk=10063 size=3 data=000002404F131E00 alloc=11
[glove-paintkit] pk=10063 result=0000023FEF024E40 nameOk=1 name="specialist_fade"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=22 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=2 def=5031 pk=10063
[glove] APPLIED def=5031 pk=10063 team=2
[glove-arms] pawn=0000023FC9EEC000 handle=0x6A4342D4 entity=00000240542BC800 scene=00000240561D1480 model=0000023FC95CA200 namePtr=0000023FC9087940 name="agents/models/tm_phoenix/tm_phoenix.vmdl"
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-observe] pawn=0000023FC9EEC000 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526C000
[pw] weapon 0x000002405526C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002405526C000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240561D9880
[hud-find] child[0]=0x00000240561D9880 owner=0x0000024006366800 handle=0xAA0369 resolved=0x000002405526C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024006366800 after 1 nodes
[apply-cache] rebuilding weapon=000002405526C000 hud=0000024006366800 def=4 pk=38
[glove-next-tick] seq=22 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404F131E00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5031 pk=10063 size=3 data=000002404F135D00 alloc=11
[glove-paintkit] pk=10063 result=0000023FEF024E40 nameOk=1 name="specialist_fade"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=23 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98

=== SNAPSHOT ===
[snap] fsnCount=50513 lastStage=12 stage5Count=3441
[snap] stage histogram:
[snap]   stage  0: 9688 frames
[snap]   stage  1: 3491 frames
[snap]   stage  2: 3491 frames
[snap]   stage  3: 3487 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3441 frames
[snap]   stage  6: 3441 frames
[snap]   stage  7: 3441 frames
[snap]   stage  8: 3441 frames
[snap]   stage 10: 3441 frames
[snap]   stage 11: 3644 frames
[snap]   stage 12: 9506 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=59
[pw] knife: applying Slaughter (pk=59 target def=523)
[knife] SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply] enter (weapon=0x000002405526E000 def=523 pk=59)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002405526F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=59.000 initial=59.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002404F130900 alloc=11
[apply] world view 0x000002405526F2E0 painted (pk=59)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240561D9880
[hud-find] child[0]=0x00000240561D9880 owner=0x0000024006366800 handle=0xAA0369 resolved=0x000002405526C000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002405526E000 hud=0000000000000000 def=523 pk=59
[glove-next-tick] seq=23 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404F135D00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5031 pk=10063 size=3 data=000002404F130C80 alloc=11
[glove-paintkit] pk=10063 result=0000023FEF024E40 nameOk=1 name="specialist_fade"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=24 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-cache] rebuilding weapon=000002405526E000 hud=000002405573E000 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=24 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404F130C80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[glove-model] stage=AFTER-BODYGROUP pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[attr-diag] item=0000023FC9EED770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000023FC9EED770 def=5031 pk=10063 size=3 data=000002404F138000 alloc=11
[glove-paintkit] pk=10063 result=0000023FEF024E40 nameOk=1 name="specialist_fade"
[glove-flags] pawn=0000023FC9EEC000 reapply=0->1
[glove-sequence] applied seq=25 pawn=0000023FC9EEC000 item=0000023FC9EED770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000023FC9EEC000 team=2 scene=000002404E970880 skeleton=000002404E970880 modelState=000002404E9709C0 rawHandle=0x23F9F9FEF98
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-cache] rebuilding weapon=000002405526E000 hud=000002405573E000 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=25 pawn=0000023FC9EEC000 item=0000023FC9EED770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000023FC9EED770 =====
[glove-snapshot] LOCAL size=3 data=000002404F138000 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=55156 lastStage=10 stage5Count=3754
[snap] stage histogram:
[snap]   stage  0: 10601 frames
[snap]   stage  1: 3804 frames
[snap]   stage  2: 3804 frames
[snap]   stage  3: 3800 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3754 frames
[snap]   stage  6: 3754 frames
[snap]   stage  7: 3754 frames
[snap]   stage  8: 3754 frames
[snap]   stage 10: 3755 frames
[snap]   stage 11: 3963 frames
[snap]   stage 12: 10412 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=59666 lastStage=0 stage5Count=4059
[snap] stage histogram:
[snap]   stage  0: 11484 frames
[snap]   stage  1: 4109 frames
[snap]   stage  2: 4109 frames
[snap]   stage  3: 4105 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4059 frames
[snap]   stage  6: 4059 frames
[snap]   stage  7: 4059 frames
[snap]   stage  8: 4059 frames
[snap]   stage 10: 4059 frames
[snap]   stage 11: 4283 frames
[snap]   stage 12: 11280 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000002404E170800
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x0000023F9E283000
[snap] pawn: vtable=0x00007FFCD77F3740 inClient=0 health=575
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x01EE821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x0000023F81468800 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01EE821B -> 0x0000023FC9EEC000
[snap] ----------------------------------------
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000023FC9EEC000
[apply] active 0x000002405526E000
[pw] weapon 0x000002405526E000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002405526E000 pawn=0x0000023FC9EEC000
[hud-find] armsHandle=0x6A4342D4
[hud-find] arms=0x00000240542BC800
[hud-find] armsNode=0x00000240561D1480
[hud-find] firstChild=0x00000240555CB480
[hud-find] child[0]=0x00000240555CB480 owner=0x000002405573E000 handle=0xBE0368 resolved=0x000002405526E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002405573E000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[