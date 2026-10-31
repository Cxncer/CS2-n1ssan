[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 01:22:45
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC259C924B -> rva 0x271EB28 (val=0000026F19469800)
[auto-off] dwLocalPlayerController      hit 0x00007FFC258E55D0 -> rva 0x25413F8 (val=0000026FB5397200)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC251015D5 -> rva 0x2738160 (val=0000026F19AA0C00)
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
[resolve] MemAlloc                       @ 0x00007FFCE663DD30
[resolve] MemFree                        @ 0x00007FFCE663DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFC276CEB28 -> 0x0000026F19469800
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC2613E2A5 -> ptrAddr 0x00007FFC275A83E0 -> es 0x0000026E8BB33E20
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x0000026E8BB33E20
[schema-probe] CEconItemSchema* = 0x0000026F19809A00
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x0000026F89650000 node0[+08]=0x0000026F72CDEC00 node0[+18]=0x801E239900000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x0000026F19CDC1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x0000026F89670000 node0[+08]=0x0000000100000001 node0[+18]=0x0000026F72CDEC00
[schema-probe]   map @ schema+0x138 count=737 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x150 count=330 elements=0x0000026F664AA000 node0[+08]=0x0000026F883A6DE0 node0[+18]=0x0000026F883A6F20
[schema-probe]   map @ schema+0x160 count=512 elements=0x0000026F19A68000 node0[+08]=0x0000026F36454E40 node0[+18]=0x0000026F36454740
[schema-probe]   map @ schema+0x170 count=12 elements=0x0000026F71A4F600 node0[+08]=0x0000000100000001 node0[+18]=0x0000026F896E0C00
[schema-probe]   map @ schema+0x180 count=3 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x198 count=97 elements=0x0000026F71F31000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC26CC3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x0000026F71CF0000 node0[+08]=0x0000000100000128 node0[+18]=0x0000026F87E5AEC1
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x0000026F89696800 node0[+08]=0x0000000100000001 node0[+18]=0x0000026F87FC55C1
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x210 count=2505 elements=0x0000026F898D0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC26CC3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x278 count=2 elements=0x0000026F8838DA70 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x0000026F89764200
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x0000026F73CB0000 node0[+08]=0x65735F0100000002 node0[+18]=0x0000026F871A9380
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x0000026F71D0C000 node0[+08]=0x65735F0100000013 node0[+18]=0x0000026F876FA1C0
[schema-probe]   map @ schema+0x300 count=102 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x328 count=382 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x0000026F72988000 node0[+08]=0x000000000000003E node0[+18]=0x0000026F88B53370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x0000026FFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x0000026F87277E00 node0[+08]=0x0000026F883420A0 node0[+18]=0x0000026F88342160
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000026F00000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x0000026F71A4C600 node0[+08]=0x0000026F88342560 node0[+18]=0x0000026F883425C0
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000026F00000013 node0[+08]=0x0000000000000000 node0[+18]=0x00000000007FFCE6
[schema-probe]   map @ schema+0x400 count=19 elements=0x0000026F363FFA00 node0[+08]=0x0000026F883425A0 node0[+18]=0x0000026F883425E0
[schema-probe] sane map candidates: 29
[verify] items count=2059 elems=0x0000026F89650000
[verify]   items[0] key=4294967295 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=4294967295 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=1768714349 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=4294967295 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=45 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x0000026F73CB0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x0000026F73CB0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x0000026F88FF3940 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x0000026F88FF4040 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x0000026E8BB33E20 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC260E27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC26098540, setFloat=00007FFC26098750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x0000026F883A7060
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x0000026F883A7100
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x0000026F883A71A0
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
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000026FB5397200
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000026F19AA0C00
[snap] pawn: vtable=0x00007FFCD7A83740 inClient=0 health=623
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x002E800B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000026F19469800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x002E800B -> 0x0000026FB5AFF000
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=0000026FB5AFF000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000026FB5AFF000
[match] FOUND pawn=0x0000026FB5AFF000 hp=100
[apply] tick pawn=0x0000026FB5AFF000
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=0000026FB5B00770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000026FB5AFF000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x0000026FB5B00770 vtable=0x00007FFC26C3E0D0 def=0 init=0 quality=-1 attrCount=650979816
[glove-diag] pawn=0000026FB5AFF000 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB5AFF000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=3226 lastStage=1 stage5Count=215
[snap] stage histogram:
[snap]   stage  0: 645 frames
[snap]   stage  1: 216 frames
[snap]   stage  2: 215 frames
[snap]   stage  3: 215 frames
[snap]   stage  5: 215 frames
[snap]   stage  6: 215 frames
[snap]   stage  7: 215 frames
[snap]   stage  8: 215 frames
[snap]   stage 10: 215 frames
[snap]   stage 11: 250 frames
[snap]   stage 12: 610 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000026F19AA0C00
[snap] pawn: vtable=0x00007FFCD7A83740 inClient=0 health=623
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000026F19469800 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=0000026F19AA0C00 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000026F19AA0C00
[apply] tick pawn=0x0000026F19AA0C00
[glove-snapshot] ===== PAWN-EMBEDDED item=0000026F19AA2370 =====
[glove-snapshot] LOCAL size=0 data=3F80000000000000 alloc=0
[glove-snapshot] NETWORKED size=-1947205632 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=0000026F19AA0C00 count=-676841664 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=0000026FB7CE3800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000026FB7CE3800
[apply] tick pawn=0x0000026FB7CE3800
[glove-snapshot] ===== PAWN-EMBEDDED item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000026FB7CE3800 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=5340 lastStage=0 stage5Count=376
[snap] stage histogram:
[snap]   stage  0: 919 frames
[snap]   stage  1: 412 frames
[snap]   stage  2: 412 frames
[snap]   stage  3: 408 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 376 frames
[snap]   stage  6: 376 frames
[snap]   stage  7: 376 frames
[snap]   stage  8: 376 frames
[snap]   stage 10: 376 frames
[snap]   stage 11: 524 frames
[snap]   stage 12: 784 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000026FB6EEB600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000026F19AA0C00
[snap] pawn: vtable=0x00007FFCD7A83740 inClient=0 health=623
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x012C01A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000026F19469800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012C01A1 -> 0x0000026FB7CE3800
[snap] ----------------------------------------
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=7913 lastStage=10 stage5Count=582
[snap] stage histogram:
[snap]   stage  0: 1278 frames
[snap]   stage  1: 618 frames
[snap]   stage  2: 618 frames
[snap]   stage  3: 614 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 582 frames
[snap]   stage  6: 582 frames
[snap]   stage  7: 582 frames
[snap]   stage  8: 582 frames
[snap]   stage 10: 583 frames
[snap]   stage 11: 845 frames
[snap]   stage 12: 1028 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000026FB6EEB600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000026F19AA0C00
[snap] pawn: vtable=0x00007FFCD7A83740 inClient=0 health=623
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x012C01A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000026F19469800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012C01A1 -> 0x0000026FB7CE3800
[snap] ----------------------------------------
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon=0x0000026F9B10A000 view=0x0000026F9B10B2E0
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
[pw]   +0x12B0 = 0x003D80EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFC26CC45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x0000026F9B10A000 def=61
[team] pawn=0x0000026FB7CE3800, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x0000026F9B10A000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000026F9B10B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=0000026FCD93CE00 alloc=11
[apply] world view 0x0000026F9B10B2E0 painted (pk=1173)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000000000000000
[hud-find] NO MATCH walked=0 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000026F9B10A000 hud=0000000000000000 def=61 pk=1173
[glove-diag] pawn=0000026FB7CE3800 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026FCD93D180 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=1 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[glove] APPLIED def=5030 pk=1405 team=3
[model] outer=0x0000026F3792E918 inner=0x0000026F475A0100
[glove-arms] pawn=0000026FB7CE3800 handle=0x28C04214 entity=0000026FD84BE800 scene=0000026FE3278080 model=0000026F475A0100 namePtr=0000026F37B46960 name="agents/models/ctm_sas/ctm_sas.vmdl"
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-observe] pawn=0000026FB7CE3800 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon 0x0000026F9B10A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934C880
[hud-find] child[0]=0x0000026FD934C880 owner=0x0000026FD9692800 handle=0xA300EB resolved=0x0000026FCD4AC000
[hud-find] child[1]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FD9693C00 after 2 nodes
[apply-cache] rebuilding weapon=0000026F9B10A000 hud=0000026FD9693C00 def=61 pk=1173
[glove-next-tick] seq=1 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026FCD93D180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026FCD93F100 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=2 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon 0x0000026F9B10A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE3274480
[hud-find] child[1]=0x0000026FD934C880 owner=0x0000026FD9692800 handle=0xA300EB resolved=0x0000026FCD4AC000
[hud-find] child[2]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FD9693C00 after 3 nodes
[apply-cache] rebuilding weapon=0000026F9B10A000 hud=0000026FD9693C00 def=61 pk=1173
[glove-next-tick] seq=2 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026FCD93F100 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADEE800 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=3 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x0000026FCD4AC000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000026FCD4AD2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000026F9ADECC00 alloc=11
[apply] world view 0x0000026FCD4AD2E0 painted (pk=417)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2A1DC80
[hud-find] child[1]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000000000000000 def=525 pk=417
[glove-next-tick] seq=3 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADEE800 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADED680 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=4 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FA6713480
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=4 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADED680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADEC180 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=5 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD831C080
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=5 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADEC180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADE9B00 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=6 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE3272080
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=6 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADE9B00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADED680 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=7 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2437480
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=7 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADED680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADECF80 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=8 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FA6780080
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=8 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADECF80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADED680 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=9 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FCCF68880
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=9 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADED680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon 0x0000026F9B10A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FCCF68880
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000
[hud-find] child[2]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FD9693C00 after 3 nodes
[apply-cache] rebuilding weapon=0000026F9B10A000 hud=0000026FD9693C00 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FCCF68880
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FCCF68880
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADEC180 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=10 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE282E080
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=10 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADEC180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADEA580 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=11 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FA671AC80
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=11 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADEA580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADED300 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=12 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD838D480
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=12 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADED300 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5030 pk=1405 size=3 data=0000026F9ADEA580 alloc=11
[glove-paintkit] pk=1405 result=0000026F89036D80 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=13 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2E37C80
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FCD4AC000 hud=0000026FA67C9800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=13 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADEA580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2E37C80
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2E37C80
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2E37C80
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=11740 lastStage=7 stage5Count=854
[snap] stage histogram:
[snap]   stage  0: 1969 frames
[snap]   stage  1: 890 frames
[snap]   stage  2: 890 frames
[snap]   stage  3: 885 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 854 frames
[snap]   stage  6: 854 frames
[snap]   stage  7: 854 frames
[snap]   stage  8: 853 frames
[snap]   stage 10: 854 frames
[snap]   stage 11: 1163 frames
[snap]   stage 12: 1673 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000026FB6EEB600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000026F19AA0C00
[snap] pawn: vtable=0x00007FFCD7A83740 inClient=0 health=623
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x012C01A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000026F19469800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012C01A1 -> 0x0000026FB7CE3800
[snap] ----------------------------------------
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2E37C80
[hud-find] child[1]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon 0x0000026F9B10A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FD9693C00 after 1 nodes
[apply-cache] rebuilding weapon=0000026F9B10A000 hud=0000026FD9693C00 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon 0x0000026F9B10A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FD9693C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon 0x0000026F9B10A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FD9693C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon 0x0000026F9B10A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FD9693C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026F9B10A000
[pw] weapon 0x0000026F9B10A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x0000026F9B10A000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FD9693C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FD934D480
[hud-find] child[0]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[2]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FB69F0000
[pw] weapon 0x0000026FB69F0000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[apply] enter (weapon=0x0000026FB69F0000 def=16 pk=1228)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000026FB69F12E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1228.000 initial=1228.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.070775 initial=0.070775
[apply] world post-create: size=3 data=0000026F9ADEB000 alloc=11
[apply] world view 0x0000026FB69F12E0 painted (pk=1228)
[hud-find] START weapon=0x0000026FB69F0000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA6750400 after 1 nodes
[apply-cache] rebuilding weapon=0000026FB69F0000 hud=0000026FA6750400 def=16 pk=1228
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=3 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792E918
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FB69F0000
[pw] weapon 0x0000026FB69F0000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x0000026FB69F0000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA6750400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FB69F0000
[pw] weapon 0x0000026FB69F0000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x0000026FB69F0000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA6750400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=16621 lastStage=0 stage5Count=1167
[snap] stage histogram:
[snap]   stage  0: 3000 frames
[snap]   stage  1: 1203 frames
[snap]   stage  2: 1203 frames
[snap]   stage  3: 1199 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1167 frames
[snap]   stage  6: 1167 frames
[snap]   stage  7: 1167 frames
[snap]   stage  8: 1167 frames
[snap]   stage 10: 1167 frames
[snap]   stage 11: 1483 frames
[snap]   stage 12: 2697 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000026FB6EEB600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000026F19AA0C00
[snap] pawn: vtable=0x00007FFCD7A83740 inClient=0 health=623
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x012C01A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000026F19469800 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012C01A1 -> 0x0000026FB7CE3800
[snap] ----------------------------------------
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FB69F0000
[pw] weapon 0x0000026FB69F0000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x0000026FB69F0000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA6750400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FB69F0000
[pw] weapon 0x0000026FB69F0000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x0000026FB69F0000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA6750400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FB69F0000
[pw] weapon 0x0000026FB69F0000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x0000026FB69F0000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA6750400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FB69F0000
[pw] weapon 0x0000026FB69F0000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x0000026FB69F0000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA6750400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FB69F0000
[pw] weapon 0x0000026FB69F0000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x0000026FB69F0000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA6750400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000
[hud-find] child[1]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[3]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000
[hud-find] child[1]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[3]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000
[hud-find] child[1]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[3]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000
[hud-find] child[1]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[3]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FCD4AC000
[pw] weapon 0x0000026FCD4AC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x0000026FCD4AC000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x28C04214
[hud-find] arms=0x0000026FD84BE800
[hud-find] armsNode=0x0000026FE3278080
[hud-find] firstChild=0x0000026FE2210080
[hud-find] child[0]=0x0000026FE2210080 owner=0x0000026FA6750400 handle=0xEA00EE resolved=0x0000026FB69F0000
[hud-find] child[1]=0x0000026FD934D480 owner=0x0000026FD9693C00 handle=0x3D80EC resolved=0x0000026F9B10A000
[hud-find] child[3]=0x0000026FE263E480 owner=0x0000026FA67C9800 handle=0xA300EB resolved=0x0000026FCD4AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FA67C9800 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F36000
[pw] weapon 0x0000026FE2F36000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x0000026FE2F36000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000026FE2F372E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=0000026FCD93ED80 alloc=11
[apply] world view 0x0000026FE2F372E0 painted (pk=38)
[hud-find] START weapon=0x0000026FE2F36000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x2CA84268
[hud-find] arms=0x0000026FD96C1800
[hud-find] armsNode=0x0000026FE2F22880
[hud-find] firstChild=0x0000026FE2F2A080
[hud-find] child[0]=0x0000026FE2F2A080 owner=0x0000026FE2EF9800 handle=0x18180F0 resolved=0x0000026FE2F34000
[hud-find] child[1]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FE2EF7000 after 2 nodes
[apply-cache] rebuilding weapon=0000026FE2F36000 hud=0000026FE2EF7000 def=4 pk=38
[glove-diag] pawn=0000026FB7CE3800 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-kit] sold; model refresh scheduled in 200 ms
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[glove-observe] pawn=0000026FB7CE3800 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F36000
[pw] weapon 0x0000026FE2F36000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026FE2F36000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0x2CA84268
[hud-find] arms=0x0000026FD96C1800
[hud-find] armsNode=0x0000026FE2F22880
[hud-find] firstChild=0x0000026FE2F2A080
[hud-find] child[0]=0x0000026FE2F2A080 owner=0x0000026FE2EF9800 handle=0x18180F0 resolved=0x0000026FE2F34000
[hud-find] child[1]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FE2EF7000 after 2 nodes
[glove-kit] delayed model refresh triggered
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] schema model selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000026FB7CE3800 reapply=1 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000026FB7CE3800 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F36000
[pw] weapon 0x0000026FE2F36000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026FE2F36000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2F2C480
[hud-find] child[0]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FE2EF7000 after 1 nodes
[apply-cache] rebuilding weapon=0000026FE2F36000 hud=0000026FE2EF7000 def=4 pk=38
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5031 pk=10033 size=3 data=0000026F9ADEA580 alloc=11
[glove-paintkit] pk=10033 result=0000026F88FF35C0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=14 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=2 def=5031 pk=10033
[glove] APPLIED def=5031 pk=10033 team=2
[glove-arms] pawn=0000026FB7CE3800 handle=0xC798C26F entity=0000026FA66C7800 scene=0000026FCCF67C80 model=0000026F6BC40900 namePtr=0000026F6BB94A10 name="agents/models/tm_phoenix/tm_phoenix.vmdl"
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[glove-observe] pawn=0000026FB7CE3800 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F36000
[pw] weapon 0x0000026FE2F36000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026FE2F36000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FA671AC80
[hud-find] child[1]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FE2EF7000 after 2 nodes
[apply-cache] rebuilding weapon=0000026FE2F36000 hud=0000026FE2EF7000 def=4 pk=38
[glove-next-tick] seq=14 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026F9ADEA580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5031 pk=10033 size=3 data=0000026FA7182000 alloc=11
[glove-paintkit] pk=10033 result=0000026F88FF35C0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=15 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=59
[pw] knife: applying Slaughter (pk=59 target def=523)
[knife] SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply] enter (weapon=0x0000026FE2F34000 def=523 pk=59)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000026FE2F352E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=59.000 initial=59.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000026FA718EB00 alloc=11
[apply] world view 0x0000026FE2F352E0 painted (pk=59)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2F21C80
[hud-find] child[1]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000026FE2F34000 hud=0000000000000000 def=523 pk=59
[glove-next-tick] seq=15 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026FA7182000 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5031 pk=10033 size=3 data=0000026FA7189700 alloc=11
[glove-paintkit] pk=10033 result=0000026F88FF35C0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=16 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FD9A80080
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FE2F34000 hud=0000026F9A46A800 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=16 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026FA7189700 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[glove-model] stage=AFTER-BODYGROUP pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[attr-diag] item=0000026FB7CE4F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000026FB7CE4F70 def=5031 pk=10033 size=3 data=0000026FA7183880 alloc=11
[glove-paintkit] pk=10033 result=0000026F88FF35C0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=0000026FB7CE3800 reapply=0->1
[glove-sequence] applied seq=17 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000026FB7CE3800 team=2 scene=0000026FA6786C80 skeleton=0000026FA6786C80 modelState=0000026FA6786DC0 rawHandle=0x26F3792F418
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-cache] rebuilding weapon=0000026FE2F34000 hud=0000026F9A46A800 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=17 pawn=0000026FB7CE3800 item=0000026FB7CE4F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000026FB7CE4F70 =====
[glove-snapshot] LOCAL size=3 data=0000026FA7183880 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=21072 lastStage=0 stage5Count=1470
[snap] stage histogram:
[snap]   stage  0: 3862 frames
[snap]   stage  1: 1506 frames
[snap]   stage  2: 1506 frames
[snap]   stage  3: 1502 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1470 frames
[snap]   stage  6: 1470 frames
[snap]   stage  7: 1470 frames
[snap]   stage  8: 1470 frames
[snap]   stage 10: 1470 frames
[snap]   stage 11: 1803 frames
[snap]   stage 12: 3542 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000026FB6EEB600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000026F19AA0C00
[snap] pawn: vtable=0x00007FFCD7A83740 inClient=0 health=623
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x012C01A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000026F19469800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012C01A1 -> 0x0000026FB7CE3800
[snap] ----------------------------------------
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=26252 lastStage=7 stage5Count=1788
[snap] stage histogram:
[snap]   stage  0: 5022 frames
[snap]   stage  1: 1824 frames
[snap]   stage  2: 1824 frames
[snap]   stage  3: 1819 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1788 frames
[snap]   stage  6: 1788 frames
[snap]   stage  7: 1788 frames
[snap]   stage  8: 1787 frames
[snap]   stage 10: 1788 frames
[snap]   stage 11: 2123 frames
[snap]   stage 12: 4700 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000026FB6EEB600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000026F19AA0C00
[snap] pawn: vtable=0x00007FFCD7A83740 inClient=0 health=623
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x012C01A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000026F19469800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012C01A1 -> 0x0000026FB7CE3800
[snap] ----------------------------------------
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F36000
[pw] weapon 0x0000026FE2F36000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026FE2F36000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000
[hud-find] child[2]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FE2EF7000 after 3 nodes
[apply-cache] rebuilding weapon=0000026FE2F36000 hud=0000026FE2EF7000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F36000
[pw] weapon 0x0000026FE2F36000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026FE2F36000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000
[hud-find] child[2]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FE2EF7000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F36000
[pw] weapon 0x0000026FE2F36000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026FE2F36000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000
[hud-find] child[2]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FE2EF7000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F36000
[pw] weapon 0x0000026FE2F36000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026FE2F36000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000
[hud-find] child[2]=0x0000026FE2F2C480 owner=0x0000026FE2EF7000 handle=0x15100F1 resolved=0x0000026FE2F36000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026FE2EF7000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026FB7CE3800
[apply] active 0x0000026FE2F34000
[pw] weapon 0x0000026FE2F34000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026FE2F34000 pawn=0x0000026FB7CE3800
[hud-find] armsHandle=0xC798C26F
[hud-find] arms=0x0000026FA66C7800
[hud-find] armsNode=0x0000026FCCF67C80
[hud-find] firstChild=0x0000026FE2A16480
[hud-find] child[1]=0x0000026FE221A880 owner=0x0000026F9A46A800 handle=0x18180F0 resolved=0x0000026FE2F34000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026F9A46A800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[