[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Oct 31 2026 23:42:47
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC259C924B -> rva 0x271EB28 (val=000004C7C3449000)
[auto-off] dwLocalPlayerController      hit 0x00007FFC258E55D0 -> rva 0x25413F8 (val=000004C855EE4400)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC251015D5 -> rva 0x2738160 (val=000004C7C37E0400)
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
[resolve] MemAlloc                       @ 0x00007FFCE6A0DD30
[resolve] MemFree                        @ 0x00007FFCE6A0DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFC276CEB28 -> 0x000004C7C3449000
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC2613E2A5 -> ptrAddr 0x00007FFC275A83E0 -> es 0x000004C735B02FB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x000004C735B02FB0
[schema-probe] CEconItemSchema* = 0x000004C7C3939600
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x000004C82D640000 node0[+08]=0x000004C826EC3000 node0[+18]=0x0000000A00000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x000004C7C3BCC1C0 node0[+08]=0x00580069002D0055 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x000004C82D660000 node0[+08]=0x0000000100000001 node0[+18]=0x000004C826EC3000
[schema-probe]   map @ schema+0x138 count=737 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x000004C82B3D5000 node0[+08]=0x000004C82BFDA780 node0[+18]=0x000004C82BFDA8C0
[schema-probe]   map @ schema+0x160 count=512 elements=0x000004C7C3838000 node0[+08]=0x000004C7E0354E40 node0[+18]=0x000004C7E0354740
[schema-probe]   map @ schema+0x170 count=12 elements=0x000004C82E80E200 node0[+08]=0x0000040100000001 node0[+18]=0x000004C82D6B7600
[schema-probe]   map @ schema+0x180 count=3 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x000004C826972000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC26CC3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x000004C82EE08000 node0[+08]=0x3F80000100000128 node0[+18]=0x000004C82BE4B301
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x000004C82D63A800 node0[+08]=0x0000000100000001 node0[+18]=0x000004C82BFB4891
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x000004C82D8D0000 node0[+08]=0x0000040100000005 node0[+18]=0x00007FFC26CC3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x000004C82C37E3A0 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x000004C82D754640
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x000004C827CC0000 node0[+08]=0x65735F0100000002 node0[+18]=0x000004C82B149280
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2D8 count=4120 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x000004C82EDE4000 node0[+08]=0x616E670100000013 node0[+18]=0x000004C82B6CB180
[schema-probe]   map @ schema+0x300 count=102 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x000004C7E0BB2000 node0[+08]=0x000004000000003E node0[+18]=0x000004C82CB43370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x000004C7FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x000004C82B1D8500 node0[+08]=0x000004C82C332720 node0[+18]=0x000004C82C3327E0
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x000004C700000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x000004C82680B400 node0[+08]=0x000004C82C332BE0 node0[+18]=0x000004C82C332C40
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x000004C700000013 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x400 count=19 elements=0x000004C7E02FCA00 node0[+08]=0x000004C82C332C20 node0[+18]=0x000004C82C332C60
[schema-probe] sane map candidates: 30
[verify] items count=2059 elems=0x000004C82D640000
[verify]   items[0] key=1223 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=2863311445 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=1223 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=1431698943 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=1224 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x000004C827CC0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x000004C827CC0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x000004C82CFE3860 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x000004C82CFE3F60 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x000004C735B02FB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC260E27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC26098540, setFloat=00007FFC26098750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000004C82BFDAA00
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000004C82BFDAAA0
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000004C82BFDAB40
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
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C855EE4400
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x015C000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x015C000B -> 0x000004C855D18800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000004C855D18800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000004C855D18800
[match] FOUND pawn=0x000004C855D18800 hp=100
[apply] tick pawn=0x000004C855D18800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=000004C855D19F70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000004C855D18800 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x000004C855D19F70 vtable=0x00007FFC26C3E0D0 def=0 init=0 quality=-1 attrCount=650979816
[glove-diag] pawn=000004C855D18800 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=3975 lastStage=0 stage5Count=272
[snap] stage histogram:
[snap]   stage  0: 764 frames
[snap]   stage  1: 272 frames
[snap]   stage  2: 272 frames
[snap]   stage  3: 272 frames
[snap]   stage  5: 272 frames
[snap]   stage  6: 272 frames
[snap]   stage  7: 272 frames
[snap]   stage  8: 272 frames
[snap]   stage 10: 272 frames
[snap]   stage 11: 304 frames
[snap]   stage 12: 731 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C855EE4400
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x015C000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x015C000B -> 0x000004C855D18800
[snap] ----------------------------------------
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C855D18800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000004C7C37E0400 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000004C7C37E0400
[apply] tick pawn=0x000004C7C37E0400
[glove-snapshot] ===== PAWN-EMBEDDED item=000004C7C37E1B70 =====
[glove-snapshot] LOCAL size=0 data=3F80000000000000 alloc=0
[glove-snapshot] NETWORKED size=-1013186560 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=000004C7C37E0400 count=-674941120 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000004C857373000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000004C857373000
[apply] tick pawn=0x000004C857373000
[glove-snapshot] ===== PAWN-EMBEDDED item=000004C857374770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000004C857373000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=6693 lastStage=0 stage5Count=420
[snap] stage histogram:
[snap]   stage  0: 1292 frames
[snap]   stage  1: 516 frames
[snap]   stage  2: 516 frames
[snap]   stage  3: 512 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 420 frames
[snap]   stage  6: 420 frames
[snap]   stage  7: 420 frames
[snap]   stage  8: 420 frames
[snap]   stage 10: 420 frames
[snap]   stage 11: 461 frames
[snap]   stage 12: 1295 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon=0x000004C89D7FE000 view=0x000004C89D7FF2E0
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
[pw]   +0x12B0 = 0x013D00EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FFC26CC45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000004C89D7FE000 def=61
[team] pawn=0x000004C857373000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[apply] enter (weapon=0x000004C89D7FE000 def=61 pk=1377)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000004C89D7FF2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1377.000 initial=1377.000
[attr-entry] 1: def=7 value=73.000 initial=73.000
[attr-entry] 2: def=8 value=0.100895 initial=0.100895
[apply] world post-create: size=3 data=000004C89DFB5680 alloc=11
[apply] world view 0x000004C89D7FF2E0 painted (pk=1377)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0xFFFFFFFF
[hud-find] FAIL: invalid arms handle
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=0000000000000000 def=61 pk=1377
[glove-diag] pawn=000004C857373000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C89DFB4180 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=0->1
[glove-sequence] applied seq=1 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[glove] APPLIED def=5030 pk=10037 team=3
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=1 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C887446480
[hud-find] child[0]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[1]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 2 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=1 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C89DFB4180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5FB00 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=1->2
[glove-sequence] applied seq=2 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=2 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C899996080
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=2 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5FB00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5F400 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=2->3
[glove-sequence] applied seq=3 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=3 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C89D6A7080
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=3 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5F400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5D800 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=3->4
[glove-sequence] applied seq=4 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=4 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C89938C480
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=4 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5D800 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5D100 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=4->5
[glove-sequence] applied seq=5 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=5 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898D57C80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=5 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5D100 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5E280 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=5->6
[glove-sequence] applied seq=6 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=6 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C85894DC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=6 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5E280 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5C300 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=6->7
[glove-sequence] applied seq=7 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=7 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C8592DAC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=7 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5C300 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5A700 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=7->8
[glove-sequence] applied seq=8 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=8 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C8962CE880
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=8 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5A700 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5AE00 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=8->9
[glove-sequence] applied seq=9 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=9 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C89999F080
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[glove-next-tick] seq=9 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5AE00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C89999F080
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C89999F080
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[apply] enter (weapon=0x000004C89CDF4000 def=515 pk=617)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000004C89CDF52E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=617.000 initial=617.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000004C833D5C680 alloc=11
[apply] world view 0x000004C89CDF52E0 painted (pk=617)
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C89999F080
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5CA00 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=9->10
[glove-sequence] applied seq=10 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98

=== SNAPSHOT ===
[snap] fsnCount=10677 lastStage=7 stage5Count=702
[snap] stage histogram:
[snap]   stage  0: 2016 frames
[snap]   stage  1: 798 frames
[snap]   stage  2: 798 frames
[snap]   stage  3: 793 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 702 frames
[snap]   stage  6: 702 frames
[snap]   stage  7: 702 frames
[snap]   stage  8: 701 frames
[snap]   stage 10: 702 frames
[snap]   stage 11: 773 frames
[snap]   stage 12: 1989 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[glove-observe] pawn=000004C857373000 reapply=0 changed=10 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C89979C880
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[glove-next-tick] seq=10 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5CA00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5F780 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=10->11
[glove-sequence] applied seq=11 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=11 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C89938F480
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[glove-next-tick] seq=11 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5F780 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5BC00 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=11->12
[glove-sequence] applied seq=12 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=12 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898F7CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[glove-next-tick] seq=12 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5BC00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5B880 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=12->13
[glove-sequence] applied seq=13 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=13 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[glove-next-tick] seq=13 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5B880 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=15390 lastStage=12 stage5Count=1010
[snap] stage histogram:
[snap]   stage  0: 2985 frames
[snap]   stage  1: 1106 frames
[snap]   stage  2: 1106 frames
[snap]   stage  3: 1102 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1010 frames
[snap]   stage  6: 1010 frames
[snap]   stage  7: 1010 frames
[snap]   stage  8: 1010 frames
[snap]   stage 10: 1010 frames
[snap]   stage 11: 1096 frames
[snap]   stage 12: 2944 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89D7FE000
[pw] weapon 0x000004C89D7FE000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C89D7FE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000
[hud-find] child[2]=0x000004C887449480 owner=0x000004C8864FD000 handle=0x13D00EC resolved=0x000004C89D7FE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FD000 after 3 nodes
[apply-cache] rebuilding weapon=000004C89D7FE000 hud=000004C8864FD000 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C89CDF4000
[pw] weapon 0x000004C89CDF4000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C89CDF4000 pawn=0x000004C857373000
[hud-find] armsHandle=0x51A14232
[hud-find] arms=0x000004C887610800
[hud-find] armsNode=0x000004C88744A080
[hud-find] firstChild=0x000004C898B5CC80
[hud-find] child[1]=0x000004C887446480 owner=0x000004C8864FBC00 handle=0xE00EB resolved=0x000004C89CDF4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C8864FBC00 after 2 nodes
[apply-cache] rebuilding weapon=000004C89CDF4000 hud=000004C8864FBC00 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000004C898DF6000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000004C898DF72E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000004C8962EB980 alloc=11
[apply] world view 0x000004C898DF72E0 painted (pk=38)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[glove-diag] pawn=000004C857373000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=13->14
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[glove-observe] pawn=000004C857373000 reapply=0 changed=14 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=14->15
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000004C857373000 reapply=0 changed=15 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5031 pk=10034 size=3 data=000004C8962ED900 alloc=11
[glove-paintkit] pk=10034 result=000004C82CFE35C0 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=15->16
[glove-sequence] applied seq=14 pawn=000004C857373000 item=000004C857374770 team=2 def=5031 pk=10034
[glove] APPLIED def=5031 pk=10034 team=2
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[glove-observe] pawn=000004C857373000 reapply=0 changed=16 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[glove-next-tick] seq=14 pawn=000004C857373000 item=000004C857374770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C8962ED900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5031 pk=10034 size=3 data=000004C8962EEA80 alloc=11
[glove-paintkit] pk=10034 result=000004C82CFE35C0 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=16->17
[glove-sequence] applied seq=15 pawn=000004C857373000 item=000004C857374770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[glove-observe] pawn=000004C857373000 reapply=0 changed=17 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[glove-next-tick] seq=15 pawn=000004C857373000 item=000004C857374770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C8962EEA80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5031 pk=10034 size=3 data=000004C8962EF500 alloc=11
[glove-paintkit] pk=10034 result=000004C82CFE35C0 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=17->18
[glove-sequence] applied seq=16 pawn=000004C857373000 item=000004C857374770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798

=== SNAPSHOT ===
[snap] fsnCount=20107 lastStage=7 stage5Count=1318
[snap] stage histogram:
[snap]   stage  0: 3959 frames
[snap]   stage  1: 1414 frames
[snap]   stage  2: 1414 frames
[snap]   stage  3: 1409 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1318 frames
[snap]   stage  6: 1318 frames
[snap]   stage  7: 1318 frames
[snap]   stage  8: 1317 frames
[snap]   stage 10: 1318 frames
[snap]   stage 11: 1416 frames
[snap]   stage 12: 3905 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[glove-observe] pawn=000004C857373000 reapply=0 changed=18 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[glove-next-tick] seq=16 pawn=000004C857373000 item=000004C857374770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C8962EF500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5031 pk=10034 size=3 data=000004C8962E4980 alloc=11
[glove-paintkit] pk=10034 result=000004C82CFE35C0 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=18->19
[glove-sequence] applied seq=17 pawn=000004C857373000 item=000004C857374770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[glove-observe] pawn=000004C857373000 reapply=0 changed=19 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[glove-next-tick] seq=17 pawn=000004C857373000 item=000004C857374770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C8962E4980 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[apply] enter (weapon=0x000004C898DFE000 def=512 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000004C898DFF2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000004C8962E7000 alloc=11
[apply] world view 0x000004C898DFF2E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=2 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E92798
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=25102 lastStage=0 stage5Count=1629
[snap] stage histogram:
[snap]   stage  0: 5056 frames
[snap]   stage  1: 1725 frames
[snap]   stage  2: 1725 frames
[snap]   stage  3: 1721 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1629 frames
[snap]   stage  6: 1629 frames
[snap]   stage  7: 1629 frames
[snap]   stage  8: 1629 frames
[snap]   stage 10: 1629 frames
[snap]   stage 11: 1739 frames
[snap]   stage 12: 4990 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DFE000
[pw] weapon 0x000004C898DFE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] schema lookup failed for def=512
[hud-find] START weapon=0x000004C898DFE000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000
[hud-find] child[1]=0x000004C8962C1C80 owner=0x000004C898F65800 handle=0x10580EF resolved=0x000004C898DFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F65800 after 2 nodes
[apply-cache] rebuilding weapon=000004C898DFE000 hud=000004C898F65800 def=512 pk=413
[mesh-diag] WORLD entity=000004C898DFE000 mask=2
[knife] schema model missing for def=512
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=30240 lastStage=5 stage5Count=1945
[snap] stage histogram:
[snap]   stage  0: 6205 frames
[snap]   stage  1: 2041 frames
[snap]   stage  2: 2041 frames
[snap]   stage  3: 2036 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1945 frames
[snap]   stage  6: 1944 frames
[snap]   stage  7: 1944 frames
[snap]   stage  8: 1944 frames
[snap]   stage 10: 1945 frames
[snap]   stage 11: 2059 frames
[snap]   stage 12: 6135 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898DF6000
[pw] weapon 0x000004C898DF6000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000004C898DF6000 pawn=0x000004C857373000
[hud-find] armsHandle=0x8C67C280
[hud-find] arms=0x000004C899E83800
[hud-find] armsNode=0x000004C88744F480
[hud-find] firstChild=0x000004C8962CB880
[hud-find] child[0]=0x000004C8962CB880 owner=0x000004C898F66C00 handle=0xA500F0 resolved=0x000004C898DF6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F66C00 after 1 nodes
[apply-cache] rebuilding weapon=000004C898DF6000 hud=000004C898F66C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[apply] enter (weapon=0x000004C898D0C000 def=61 pk=1377)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000004C898D0D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1377.000 initial=1377.000
[attr-entry] 1: def=7 value=73.000 initial=73.000
[attr-entry] 2: def=8 value=0.100895 initial=0.100895
[apply] world post-create: size=3 data=000004C833D5FB00 alloc=11
[apply] world view 0x000004C898D0D2E0 painted (pk=1377)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[glove-diag] pawn=000004C857373000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove] team changed: 2 -> 3
[glove-trigger] active=1 curDef=5031 desiredDef=5030
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=19->20
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=20 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=20->21
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000004C857373000 reapply=0 changed=21 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5F400 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=21->22
[glove-sequence] applied seq=18 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[glove] APPLIED def=5030 pk=10037 team=3
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=22 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[glove-next-tick] seq=18 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5F400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5BF80 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=22->23
[glove-sequence] applied seq=19 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=23 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[glove-next-tick] seq=19 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5BF80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5CA00 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=23->24
[glove-sequence] applied seq=20 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=24 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[glove-next-tick] seq=20 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5CA00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-model] stage=AFTER-BODYGROUP pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[attr-diag] item=000004C857374770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000004C857374770 def=5030 pk=10037 size=3 data=000004C833D5D800 alloc=11
[glove-paintkit] pk=10037 result=000004C82CFE3860 nameOk=1 name="sporty_purple"
[glove-flags] pawn=000004C857373000 reapply=0->1 changed=24->25
[glove-sequence] applied seq=21 pawn=000004C857373000 item=000004C857374770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[glove-observe] pawn=000004C857373000 reapply=0 changed=25 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[glove-next-tick] seq=21 pawn=000004C857373000 item=000004C857374770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000004C857374770 =====
[glove-snapshot] LOCAL size=3 data=000004C833D5D800 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=34897 lastStage=0 stage5Count=2252
[snap] stage histogram:
[snap]   stage  0: 7150 frames
[snap]   stage  1: 2348 frames
[snap]   stage  2: 2348 frames
[snap]   stage  3: 2344 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2252 frames
[snap]   stage  6: 2252 frames
[snap]   stage  7: 2252 frames
[snap]   stage  8: 2252 frames
[snap]   stage 10: 2252 frames
[snap]   stage 11: 2379 frames
[snap]   stage 12: 7067 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[apply] enter (weapon=0x000004C898D0A000 def=515 pk=617)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000004C898D0B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=617.000 initial=617.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000004C833D5A700 alloc=11
[apply] world view 0x000004C898D0B2E0 painted (pk=617)
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000004C857373000 team=3 scene=000004C8592DDC80 skeleton=000004C8592DDC80 modelState=000004C8592DDDC0 rawHandle=0x4C7E1E91C98
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=39818 lastStage=7 stage5Count=2569
[snap] stage histogram:
[snap]   stage  0: 8185 frames
[snap]   stage  1: 2665 frames
[snap]   stage  2: 2665 frames
[snap]   stage  3: 2660 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2569 frames
[snap]   stage  6: 2569 frames
[snap]   stage  7: 2569 frames
[snap]   stage  8: 2568 frames
[snap]   stage 10: 2569 frames
[snap]   stage 11: 2699 frames
[snap]   stage 12: 8099 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=44751 lastStage=10 stage5Count=2887
[snap] stage histogram:
[snap]   stage  0: 9219 frames
[snap]   stage  1: 2983 frames
[snap]   stage  2: 2983 frames
[snap]   stage  3: 2979 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2887 frames
[snap]   stage  6: 2887 frames
[snap]   stage  7: 2887 frames
[snap]   stage  8: 2887 frames
[snap]   stage 10: 2888 frames
[snap]   stage 11: 3019 frames
[snap]   stage 12: 9131 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=210
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0A000
[pw] weapon 0x000004C898D0A000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] schema lookup failed for def=515
[hud-find] START weapon=0x000004C898D0A000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000
[hud-find] child[1]=0x000004C898F7E480 owner=0x000004C898F64400 handle=0x8080F2 resolved=0x000004C898D0A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C898F64400 after 2 nodes
[apply-cache] rebuilding weapon=000004C898D0A000 hud=000004C898F64400 def=515 pk=617
[knife] schema model missing for def=515
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=49778 lastStage=0 stage5Count=3207
[snap] stage histogram:
[snap]   stage  0: 10293 frames
[snap]   stage  1: 3303 frames
[snap]   stage  2: 3303 frames
[snap]   stage  3: 3299 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3207 frames
[snap]   stage  6: 3207 frames
[snap]   stage  7: 3207 frames
[snap]   stage  8: 3207 frames
[snap]   stage 10: 3207 frames
[snap]   stage 11: 3340 frames
[snap]   stage 12: 10204 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000004C858954000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000004C7C37E0400
[snap] pawn: vtable=0x00007FFCD7C53740 inClient=0 health=1224
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x009A81A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000004C7C3449000 highestEntityIndex=210
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009A81A1 -> 0x000004C857373000
[snap] ----------------------------------------
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000004C857373000
[apply] active 0x000004C898D0C000
[pw] weapon 0x000004C898D0C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x000004C898D0C000 pawn=0x000004C857373000
[hud-find] armsHandle=0xCCD042B8
[hud-find] arms=0x000004C896BC5800
[hud-find] armsNode=0x000004C898D53480
[hud-find] firstChild=0x000004C898F7B480
[hud-find] child[0]=0x000004C898F7B480 owner=0x000004C85932E800 handle=0xA480F3 resolved=0x000004C898D0C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000004C85932E800 after 1 nodes
[apply-cache] rebuilding weapon=000004C898D0C000 hud=000004C85932E800 def=61 pk=1377
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[