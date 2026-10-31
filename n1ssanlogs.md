[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 00:41:45
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC259C924B -> rva 0x271EB28 (val=000002C4CF43F800)
[auto-off] dwLocalPlayerController      hit 0x00007FFC258E55D0 -> rva 0x25413F8 (val=000002C565C34600)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC251015D5 -> rva 0x2738160 (val=000002C4CFA00200)
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
[resolve] entityList @ 0x00007FFC276CEB28 -> 0x000002C4CF43F800
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC2613E2A5 -> ptrAddr 0x00007FFC275A83E0 -> es 0x000002C441B03DB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x000002C441B03DB0
[schema-probe] CEconItemSchema* = 0x000002C4CF6E9600
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x000002C53B670000 node0[+08]=0x000002C528DCF400 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x000002C4CFCCC1C0 node0[+08]=0x5C4D4D414554535C node0[+18]=0x6E6F6D6D6F635C73
[schema-probe]   map @ schema+0x128 count=2059 elements=0x000002C53B690000 node0[+08]=0x0000000100000001 node0[+18]=0x000002C528DCF400
[schema-probe]   map @ schema+0x138 count=737 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x000002C53118F000 node0[+08]=0x000002C53A396820 node0[+18]=0x000002C53A396960
[schema-probe]   map @ schema+0x160 count=512 elements=0x000002C4CFA68000 node0[+08]=0x000002C4EC414E40 node0[+18]=0x000002C4EC414EC0
[schema-probe]   map @ schema+0x170 count=12 elements=0x000002C5287DE600 node0[+08]=0x0000000100000001 node0[+18]=0x000002C53B6E4600
[schema-probe]   map @ schema+0x180 count=3 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x000002C531444000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC26CC3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x000002C5284E8000 node0[+08]=0x0000000100000128 node0[+18]=0x000002C539FEEAA1
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x000002C53B6B7000 node0[+08]=0x0000000100000001 node0[+18]=0x000002C539E38D01
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x000002C53B8E0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC26CC3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x000002C53A38F6E0 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x000002C53B777800
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x000002C529CD0000 node0[+08]=0x65735F0100000002 node0[+18]=0x000002C5391C9C20
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x000002C52850C000 node0[+08]=0x65735F0100000013 node0[+18]=0x000002C5396FEFE0
[schema-probe]   map @ schema+0x300 count=102 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x000002C528A18000 node0[+08]=0x000000000000003E node0[+18]=0x000002C53AB63370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x000002C4FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x000002C539198500 node0[+08]=0x000002C53A335EC0 node0[+18]=0x000002C53A335F80
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x000002C400000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x000002C5287DB600 node0[+08]=0x000002C53A336120 node0[+18]=0x000002C53A336180
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x000002C400000013 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x400 count=19 elements=0x000002C4EC3FFA00 node0[+08]=0x000002C53A336160 node0[+18]=0x000002C53A3361A0
[schema-probe] sane map candidates: 29
[verify] items count=2059 elems=0x000002C53B670000
[verify]   items[0] key=34668544 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=599785472 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=273 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=4093466314 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=671088896 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x000002C529CD0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x000002C529CD0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x000002C53AFF3B00 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x000002C53AFF4200 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x000002C441B03DB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC260E27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC26098540, setFloat=00007FFC26098750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000002C53A396AA0
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000002C53A396B40
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000002C53A396BE0
[plan-a] inject: created=20 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FFC257C9DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FFC275135A0 vtable=0x00007FFC26C17200 fn=0x00007FFC25B1EE60 slot=36
[fsn] hooked (vtable overwrite)
[ready] v9.0.3 split; targets=20
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C565C34600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x0168000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0168000B -> 0x000002C565B19800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000002C565B19800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000002C565B19800
[match] FOUND pawn=0x000002C565B19800 hp=100
[apply] tick pawn=0x000002C565B19800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=000002C565B1AF70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000002C565B19800 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x000002C565B1AF70 vtable=0x00007FFC26C3E0D0 def=0 init=0 quality=-1 attrCount=650979816
[glove-diag] pawn=000002C565B19800 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C565B19800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4328 lastStage=1 stage5Count=267
[snap] stage histogram:
[snap]   stage  0: 962 frames
[snap]   stage  1: 268 frames
[snap]   stage  2: 267 frames
[snap]   stage  3: 267 frames
[snap]   stage  5: 267 frames
[snap]   stage  6: 267 frames
[snap]   stage  7: 267 frames
[snap]   stage  8: 267 frames
[snap]   stage 10: 267 frames
[snap]   stage 11: 289 frames
[snap]   stage 12: 940 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=000002C4CFA00200 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000002C4CFA00200
[apply] tick pawn=0x000002C4CFA00200
[glove-snapshot] ===== PAWN-EMBEDDED item=000002C4CFA01970 =====
[glove-snapshot] LOCAL size=0 data=3F80000000000000 alloc=0
[glove-snapshot] NETWORKED size=1105985536 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=000002C4CFA00200 count=-672516288 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000002C56EC3D800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000002C56EC3D800
[apply] tick pawn=0x000002C56EC3D800
[glove-snapshot] ===== PAWN-EMBEDDED item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000002C56EC3D800 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=9113 lastStage=0 stage5Count=537
[snap] stage histogram:
[snap]   stage  0: 1979 frames
[snap]   stage  1: 631 frames
[snap]   stage  2: 631 frames
[snap]   stage  3: 627 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 537 frames
[snap]   stage  6: 537 frames
[snap]   stage  7: 537 frames
[snap]   stage  8: 537 frames
[snap]   stage 10: 537 frames
[snap]   stage 11: 567 frames
[snap]   stage 12: 1992 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon=0x000001D7DFE2A000 view=0x000001D7DFE2B2E0
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
[pw]   +0x12B0 = 0x01DC80EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FFC26CC45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000001D7DFE2A000 def=32
[team] pawn=0x000002C56EC3D800, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] NO TARGET def=32 team=CT
[glove-diag] pawn=000002C56EC3D800 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C5841C0E00 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=1 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[glove] APPLIED def=5030 pk=1405 team=3
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-observe] pawn=000002C56EC3D800 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=1 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C5841C0E00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFCF00 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=2 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=2 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFCF00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBF8900 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=3 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=3 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBF8900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFB300 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=4 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=4 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFB300 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFD980 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=5 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=5 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFD980 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBF9700 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=6 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=6 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBF9700 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFAF80 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=7 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=7 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFAF80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBF8C80 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=8 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=8 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBF8C80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFD600 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=9 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18

=== SNAPSHOT ===
[snap] fsnCount=13860 lastStage=7 stage5Count=832
[snap] stage histogram:
[snap]   stage  0: 3026 frames
[snap]   stage  1: 926 frames
[snap]   stage  2: 926 frames
[snap]   stage  3: 921 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 832 frames
[snap]   stage  6: 832 frames
[snap]   stage  7: 832 frames
[snap]   stage  8: 831 frames
[snap]   stage 10: 832 frames
[snap]   stage 11: 885 frames
[snap]   stage 12: 3016 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=9 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFD600 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2A000
[pw] weapon 0x000001D7DFE2A000 def=32
[pw] NO TARGET def=32 team=CT
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFBD80 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=10 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000001D7DFE2E000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DFE2F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002C57EBFD280 alloc=11
[apply] world view 0x000001D7DFE2F2E0 painted (pk=417)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DDF72480
[hud-find] child[1]=0x000002C58564B480 owner=0x000002C585884800 handle=0x1DC80EC resolved=0x000001D7DFE2A000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000001D7DFE2E000 hud=0000000000000000 def=525 pk=417
[glove-next-tick] seq=10 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFBD80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFD980 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=11 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DD934C80
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-cache] rebuilding weapon=000001D7DFE2E000 hud=000001D7DD031400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=11 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFD980 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFA500 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=12 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C554766480
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-cache] rebuilding weapon=000001D7DFE2E000 hud=000001D7DD031400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=12 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFA500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5030 pk=1405 size=3 data=000002C57EBFB680 alloc=11
[glove-paintkit] pk=1405 result=000002C53B037020 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=13 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-cache] rebuilding weapon=000001D7DFE2E000 hud=000001D7DD031400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=13 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C57EBFB680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=18785 lastStage=12 stage5Count=1138
[snap] stage histogram:
[snap]   stage  0: 4110 frames
[snap]   stage  1: 1232 frames
[snap]   stage  2: 1232 frames
[snap]   stage  3: 1228 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1138 frames
[snap]   stage  6: 1138 frames
[snap]   stage  7: 1138 frames
[snap]   stage  8: 1138 frames
[snap]   stage 10: 1138 frames
[snap]   stage 11: 1207 frames
[snap]   stage 12: 4085 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DF431080
[hud-find] child[1]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000001D7DBF78000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DBF792E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=000001D7DE1B2200 alloc=11
[apply] world view 0x000001D7DBF792E0 painted (pk=1173)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DBF78000 hud=000002C554B66400 def=61 pk=1173
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000
[hud-find] child[2]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DFE2E000
[pw] weapon 0x000001D7DFE2E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DFE2E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000
[hud-find] child[2]=0x000001D7DCEA8080 owner=0x000001D7DD031400 handle=0x7F80EB resolved=0x000001D7DFE2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD031400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF78000
[pw] weapon 0x000001D7DBF78000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000001D7DBF78000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000001D7DCEA6880
[hud-find] child[0]=0x000001D7DCEA6880 owner=0x000002C554B66400 handle=0x14280EE resolved=0x000001D7DBF78000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B66400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[apply] enter (weapon=0x000001D7DBF7E000 def=60 pk=106)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DBF7F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=106.000 initial=106.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.298660 initial=0.298660
[apply] world post-create: size=3 data=000001D7DAB2B400 alloc=11
[apply] world view 0x000001D7DBF7F2E0 painted (pk=106)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DBF7E000 hud=000002C554B94800 def=60 pk=106
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=23671 lastStage=7 stage5Count=1453
[snap] stage histogram:
[snap]   stage  0: 5137 frames
[snap]   stage  1: 1547 frames
[snap]   stage  2: 1547 frames
[snap]   stage  3: 1542 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1453 frames
[snap]   stage  6: 1453 frames
[snap]   stage  7: 1453 frames
[snap]   stage  8: 1452 frames
[snap]   stage 10: 1453 frames
[snap]   stage 11: 1527 frames
[snap]   stage 12: 5106 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484A480
[hud-find] child[0]=0x000002C55484A480 owner=0x000002C554B94800 handle=0x7C80EF resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B94800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=29010 lastStage=0 stage5Count=1770
[snap] stage histogram:
[snap]   stage  0: 6379 frames
[snap]   stage  1: 1864 frames
[snap]   stage  2: 1864 frames
[snap]   stage  3: 1860 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1770 frames
[snap]   stage  6: 1770 frames
[snap]   stage  7: 1770 frames
[snap]   stage  8: 1770 frames
[snap]   stage 10: 1770 frames
[snap]   stage 11: 1847 frames
[snap]   stage 12: 6345 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6E000
[pw] weapon 0x000001D7DCD6E000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000001D7DCD6E000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DCD6F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=000002C5841C4600 alloc=11
[apply] world view 0x000001D7DCD6F2E0 painted (pk=1173)
[hud-find] START weapon=0x000001D7DCD6E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484E080
[hud-find] child[0]=0x000002C55484E080 owner=0x000002C5845ACC00 handle=0x1E81D6 resolved=0x000001D7DCD6E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5845ACC00 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DCD6E000 hud=000002C5845ACC00 def=61 pk=1173
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000001D7DCD60000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DCD612E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002C5841C6580 alloc=11
[apply] world view 0x000001D7DCD612E0 painted (pk=417)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484E080
[hud-find] child[0]=0x000002C55484E080 owner=0x000002C5845ACC00 handle=0x1E81D6 resolved=0x000001D7DCD6E000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000001D7DCD60000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DCD60000 hud=000002C5846D8C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[apply] enter (weapon=0x000001D7DCD6A000 def=9 pk=259)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DCD6B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=259.000 initial=259.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.250000 initial=0.250000
[apply] world post-create: size=3 data=000002C5841CF880 alloc=11
[apply] world view 0x000001D7DCD6B2E0 painted (pk=259)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DCD6A000 hud=000002C5846D3C00 def=9 pk=259
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000
[hud-find] child[1]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000
[hud-find] child[1]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000
[hud-find] child[1]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=33950 lastStage=6 stage5Count=2084
[snap] stage histogram:
[snap]   stage  0: 7440 frames
[snap]   stage  1: 2177 frames
[snap]   stage  2: 2177 frames
[snap]   stage  3: 2172 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2084 frames
[snap]   stage  6: 2084 frames
[snap]   stage  7: 2083 frames
[snap]   stage  8: 2083 frames
[snap]   stage 10: 2083 frames
[snap]   stage 11: 2168 frames
[snap]   stage 12: 7398 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD6A000
[pw] weapon 0x000001D7DCD6A000 def=9
[pw] matched team 'CT'
[pw] applying Redline (pk=259 def=9)
[hud-find] START weapon=0x000001D7DCD6A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C584742480
[hud-find] child[0]=0x000002C584742480 owner=0x000002C5846D3C00 handle=0x7B81D8 resolved=0x000001D7DCD6A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D3C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[apply] enter (weapon=0x000001D7DE124000 def=34 pk=734)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DE1252E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=734.000 initial=734.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.350000 initial=0.350000
[apply] world post-create: size=3 data=000002C5841C5E80 alloc=11
[apply] world view 0x000001D7DE1252E0 painted (pk=734)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474C080
[hud-find] child[0]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000
[hud-find] child[1]=0x000002C55484E080 owner=0x000002C5845ACC00 handle=0x1E81D6 resolved=0x000001D7DCD6E000
[hud-find] NO MATCH walked=3 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000001D7DE124000 hud=0000000000000000 def=34 pk=734
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DE124000 hud=000002C554806800 def=34 pk=734
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000
[hud-find] child[1]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000
[hud-find] child[1]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000
[hud-find] child[1]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000
[hud-find] child[1]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000
[hud-find] child[1]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=39149 lastStage=11 stage5Count=2402
[snap] stage histogram:
[snap]   stage  0: 8606 frames
[snap]   stage  1: 2495 frames
[snap]   stage  2: 2495 frames
[snap]   stage  3: 2491 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2402 frames
[snap]   stage  6: 2402 frames
[snap]   stage  7: 2402 frames
[snap]   stage  8: 2402 frames
[snap]   stage 10: 2402 frames
[snap]   stage 11: 2488 frames
[snap]   stage 12: 8563 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585641880
[hud-find] child[0]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000
[hud-find] child[1]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[apply] enter (weapon=0x000001D7DE12A000 def=3 pk=979)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DE12B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=979.000 initial=979.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.460000 initial=0.460000
[apply] world post-create: size=3 data=000002C5841CC400 alloc=11
[apply] world view 0x000001D7DE12B2E0 painted (pk=979)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DE12A000 hud=000002C554837400 def=3 pk=979
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=44016 lastStage=0 stage5Count=2721
[snap] stage histogram:
[snap]   stage  0: 9605 frames
[snap]   stage  1: 2814 frames
[snap]   stage  2: 2814 frames
[snap]   stage  3: 2810 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2721 frames
[snap]   stage  6: 2721 frames
[snap]   stage  7: 2721 frames
[snap]   stage  8: 2721 frames
[snap]   stage 10: 2720 frames
[snap]   stage 11: 2807 frames
[snap]   stage 12: 9561 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=214
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12A000
[pw] weapon 0x000001D7DE12A000 def=3
[pw] matched team 'CT'
[pw] applying Fairy Tale (pk=979 def=3)
[hud-find] START weapon=0x000001D7DE12A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C58474CC80
[hud-find] child[0]=0x000002C58474CC80 owner=0x000002C554837400 handle=0x11581DA resolved=0x000001D7DE12A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554837400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000
[hud-find] child[1]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000
[hud-find] child[1]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE124000
[pw] weapon 0x000001D7DE124000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000001D7DE124000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000
[hud-find] child[1]=0x000002C585641880 owner=0x000002C554806800 handle=0x1A981D9 resolved=0x000001D7DE124000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554806800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[apply] enter (weapon=0x000001D7DC238000 def=36 pk=1081)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DC2392E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1081.000 initial=1081.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.245000 initial=0.245000
[apply] world post-create: size=3 data=000002C5841CD580 alloc=11
[apply] world view 0x000001D7DC2392E0 painted (pk=1081)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DC238000 hud=000002C584735400 def=36 pk=1081
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=48804 lastStage=0 stage5Count=3039
[snap] stage histogram:
[snap]   stage  0: 10568 frames
[snap]   stage  1: 3132 frames
[snap]   stage  2: 3132 frames
[snap]   stage  3: 3128 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3039 frames
[snap]   stage  6: 3039 frames
[snap]   stage  7: 3039 frames
[snap]   stage  8: 3039 frames
[snap]   stage 10: 3038 frames
[snap]   stage 11: 3127 frames
[snap]   stage 12: 10522 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=215
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC238000
[pw] weapon 0x000001D7DC238000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x000001D7DC238000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C55484EC80
[hud-find] child[0]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584735400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC232000
[pw] weapon 0x000001D7DC232000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[apply] enter (weapon=0x000001D7DC232000 def=16 pk=1228)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DC2332E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1228.000 initial=1228.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.070775 initial=0.070775
[apply] world post-create: size=3 data=000002C5841CB980 alloc=11
[apply] world view 0x000001D7DC2332E0 painted (pk=1228)
[hud-find] START weapon=0x000001D7DC232000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C554769480
[hud-find] child[0]=0x000002C554769480 owner=0x000002C5846DC800 handle=0x1B181DC resolved=0x000001D7DC232000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846DC800 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DC232000 hud=000002C5846DC800 def=16 pk=1228
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC232000
[pw] weapon 0x000001D7DC232000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000001D7DC232000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C554769480
[hud-find] child[0]=0x000002C554769480 owner=0x000002C5846DC800 handle=0x1B181DC resolved=0x000001D7DC232000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846DC800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC232000
[pw] weapon 0x000001D7DC232000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000001D7DC232000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C554769480
[hud-find] child[0]=0x000002C554769480 owner=0x000002C5846DC800 handle=0x1B181DC resolved=0x000001D7DC232000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846DC800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC232000
[pw] weapon 0x000001D7DC232000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000001D7DC232000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C554769480
[hud-find] child[0]=0x000002C554769480 owner=0x000002C5846DC800 handle=0x1B181DC resolved=0x000001D7DC232000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846DC800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC232000
[pw] weapon 0x000001D7DC232000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000001D7DC232000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C554769480
[hud-find] child[0]=0x000002C554769480 owner=0x000002C5846DC800 handle=0x1B181DC resolved=0x000001D7DC232000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846DC800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC232000
[pw] weapon 0x000001D7DC232000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000001D7DC232000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C554769480
[hud-find] child[0]=0x000002C554769480 owner=0x000002C5846DC800 handle=0x1B181DC resolved=0x000001D7DC232000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846DC800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[apply] enter (weapon=0x000001D7DE128000 def=60 pk=106)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DE1292E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=106.000 initial=106.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.298660 initial=0.298660
[apply] world post-create: size=3 data=000002C5841C4980 alloc=11
[apply] world view 0x000001D7DE1292E0 painted (pk=106)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DE128000 hud=000002C554802C00 def=60 pk=106
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=3 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CEB18
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=53583 lastStage=11 stage5Count=3354
[snap] stage histogram:
[snap]   stage  0: 11539 frames
[snap]   stage  1: 3447 frames
[snap]   stage  2: 3447 frames
[snap]   stage  3: 3443 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3354 frames
[snap]   stage  6: 3354 frames
[snap]   stage  7: 3354 frames
[snap]   stage  8: 3354 frames
[snap]   stage 10: 3354 frames
[snap]   stage 11: 3448 frames
[snap]   stage 12: 11488 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=217
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE128000
[pw] weapon 0x000001D7DE128000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000001D7DE128000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554802C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000
[hud-find] child[1]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000
[hud-find] child[2]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000
[hud-find] child[1]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000
[hud-find] child[2]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000
[hud-find] child[1]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000
[hud-find] child[2]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000
[hud-find] child[1]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000
[hud-find] child[2]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DCD60000
[pw] weapon 0x000001D7DCD60000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000001D7DCD60000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x77B14214
[hud-find] arms=0x000002C5846AE800
[hud-find] armsNode=0x000002C585649C80
[hud-find] firstChild=0x000002C585525480
[hud-find] child[0]=0x000002C585525480 owner=0x000002C554802C00 handle=0x18181DD resolved=0x000001D7DE128000
[hud-find] child[1]=0x000002C55484EC80 owner=0x000002C584735400 handle=0x1D281DB resolved=0x000001D7DC238000
[hud-find] child[2]=0x000002C58474C080 owner=0x000002C5846D8C00 handle=0x11981D5 resolved=0x000001D7DCD60000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5846D8C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B22000
[pw] weapon 0x000002C584B22000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000002C584B22000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002C584B232E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000001D7DB5A3980 alloc=11
[apply] world view 0x000002C584B232E0 painted (pk=38)
[hud-find] START weapon=0x000002C584B22000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0xD997C2D1
[hud-find] arms=0x000001D7DE186000
[hud-find] armsNode=0x000002C58564F080
[hud-find] firstChild=0x000002C585522480
[hud-find] child[0]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584B09400 after 1 nodes
[apply-cache] rebuilding weapon=000002C584B22000 hud=000002C584B09400 def=4 pk=38
[glove-diag] pawn=000002C56EC3D800 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-kit] sold; model refresh scheduled in 200 ms
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[glove-observe] pawn=000002C56EC3D800 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B22000
[pw] weapon 0x000002C584B22000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002C584B22000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0xD997C2D1
[hud-find] arms=0x000001D7DE186000
[hud-find] armsNode=0x000002C58564F080
[hud-find] firstChild=0x000002C585522480
[hud-find] child[0]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584B09400 after 1 nodes
[glove-kit] delayed model refresh triggered
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[model] outer=0x000002C4ED8CF618 inner=0x000002C51F6C7000
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=000002C56EC3D800 reapply=1 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000002C56EC3D800 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B22000
[pw] weapon 0x000002C584B22000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002C584B22000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585522480
[hud-find] child[0]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584B09400 after 1 nodes
[apply-cache] rebuilding weapon=000002C584B22000 hud=000002C584B09400 def=4 pk=38
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5031 pk=10033 size=3 data=000002C5841CAF00 alloc=11
[glove-paintkit] pk=10033 result=000002C53AFF3780 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=14 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=2 def=5031 pk=10033
[glove] APPLIED def=5031 pk=10033 team=2
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[glove-observe] pawn=000002C56EC3D800 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B22000
[pw] weapon 0x000002C584B22000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002C584B22000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584A75480
[hud-find] child[1]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584B09400 after 2 nodes
[apply-cache] rebuilding weapon=000002C584B22000 hud=000002C584B09400 def=4 pk=38
[glove-next-tick] seq=14 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000002C5841CAF00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5031 pk=10033 size=3 data=000001D7DB5A2B80 alloc=11
[glove-paintkit] pk=10033 result=000002C53AFF3780 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=15 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B22000
[pw] weapon 0x000002C584B22000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002C584B22000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DCD88C80
[hud-find] child[1]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584B09400 after 2 nodes
[apply-cache] rebuilding weapon=000002C584B22000 hud=000002C584B09400 def=4 pk=38
[glove-next-tick] seq=15 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000001D7DB5A2B80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5031 pk=10033 size=3 data=000001D7DB5A1300 alloc=11
[glove-paintkit] pk=10033 result=000002C53AFF3780 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=16 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B22000
[pw] weapon 0x000002C584B22000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002C584B22000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C17880
[hud-find] child[1]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584B09400 after 2 nodes
[apply-cache] rebuilding weapon=000002C584B22000 hud=000002C584B09400 def=4 pk=38
[glove-next-tick] seq=16 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000001D7DB5A1300 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[glove-model] stage=AFTER-BODYGROUP pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[attr-diag] item=000002C56EC3EF70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002C56EC3EF70 def=5031 pk=10033 size=3 data=000001D7DB5A2100 alloc=11
[glove-paintkit] pk=10033 result=000002C53AFF3780 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=000002C56EC3D800 reapply=0->1
[glove-sequence] applied seq=17 pawn=000002C56EC3D800 item=000002C56EC3EF70 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B22000
[pw] weapon 0x000002C584B22000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002C584B22000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B15C80
[hud-find] child[1]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584B09400 after 2 nodes
[apply-cache] rebuilding weapon=000002C584B22000 hud=000002C584B09400 def=4 pk=38
[glove-next-tick] seq=17 pawn=000002C56EC3D800 item=000002C56EC3EF70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002C56EC3EF70 =====
[glove-snapshot] LOCAL size=3 data=000001D7DB5A2100 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=59
[pw] knife: applying Slaughter (pk=59 target def=523)
[knife] SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply] enter (weapon=0x000002C584B20000 def=523 pk=59)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002C584B212E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=59.000 initial=59.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000001D7DB5A1A00 alloc=11
[apply] world view 0x000002C584B212E0 painted (pk=59)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B15C80
[hud-find] child[1]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002C584B20000 hud=0000000000000000 def=523 pk=59
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618

=== SNAPSHOT ===
[snap] fsnCount=58157 lastStage=10 stage5Count=3657
[snap] stage histogram:
[snap]   stage  0: 12463 frames
[snap]   stage  1: 3750 frames
[snap]   stage  2: 3750 frames
[snap]   stage  3: 3746 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3657 frames
[snap]   stage  6: 3657 frames
[snap]   stage  7: 3657 frames
[snap]   stage  8: 3657 frames
[snap]   stage 10: 3657 frames
[snap]   stage 11: 3767 frames
[snap]   stage 12: 12395 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=216
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-cache] rebuilding weapon=000002C584B20000 hud=000002C554839C00 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B22000
[pw] weapon 0x000002C584B22000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002C584B22000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000
[hud-find] child[2]=0x000002C585522480 owner=0x000002C584B09400 handle=0x8C81E0 resolved=0x000002C584B22000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C584B09400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=63258 lastStage=0 stage5Count=3971
[snap] stage histogram:
[snap]   stage  0: 13601 frames
[snap]   stage  1: 4064 frames
[snap]   stage  2: 4064 frames
[snap]   stage  3: 4060 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3971 frames
[snap]   stage  6: 3971 frames
[snap]   stage  7: 3971 frames
[snap]   stage  8: 3971 frames
[snap]   stage 10: 3970 frames
[snap]   stage 11: 4088 frames
[snap]   stage 12: 13526 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=216
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B18080
[hud-find] child[0]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[apply] enter (weapon=0x000002C585560000 def=7 pk=1171)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002C5855612E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1171.000 initial=1171.000
[attr-entry] 1: def=7 value=246.000 initial=246.000
[attr-entry] 2: def=8 value=0.122852 initial=0.122852
[apply] world post-create: size=3 data=000001D7DB5A2480 alloc=11
[apply] world view 0x000002C5855612E0 painted (pk=1171)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-cache] rebuilding weapon=000002C585560000 hud=000002C5841BE800 def=7 pk=1171
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=68150 lastStage=0 stage5Count=4289
[snap] stage histogram:
[snap]   stage  0: 14616 frames
[snap]   stage  1: 4382 frames
[snap]   stage  2: 4382 frames
[snap]   stage  3: 4378 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4289 frames
[snap]   stage  6: 4289 frames
[snap]   stage  7: 4289 frames
[snap]   stage  8: 4289 frames
[snap]   stage 10: 4288 frames
[snap]   stage 11: 4408 frames
[snap]   stage 12: 14539 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=217
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585566000
[pw] weapon 0x000002C585566000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[apply] enter (weapon=0x000002C585566000 def=9 pk=1206)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002C5855672E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1206.000 initial=1206.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=000002C5841C2A00 alloc=11
[apply] world view 0x000002C5855672E0 painted (pk=1206)
[hud-find] START weapon=0x000002C585566000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585646080
[hud-find] child[0]=0x000002C585646080 owner=0x000002C554B3A800 handle=0x1CE81E2 resolved=0x000002C585566000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B3A800 after 1 nodes
[apply-cache] rebuilding weapon=000002C585566000 hud=000002C554B3A800 def=9 pk=1206
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585566000
[pw] weapon 0x000002C585566000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x000002C585566000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585646080
[hud-find] child[0]=0x000002C585646080 owner=0x000002C554B3A800 handle=0x1CE81E2 resolved=0x000002C585566000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B3A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585566000
[pw] weapon 0x000002C585566000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x000002C585566000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585646080
[hud-find] child[0]=0x000002C585646080 owner=0x000002C554B3A800 handle=0x1CE81E2 resolved=0x000002C585566000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B3A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585566000
[pw] weapon 0x000002C585566000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x000002C585566000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585646080
[hud-find] child[0]=0x000002C585646080 owner=0x000002C554B3A800 handle=0x1CE81E2 resolved=0x000002C585566000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B3A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585566000
[pw] weapon 0x000002C585566000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x000002C585566000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585646080
[hud-find] child[0]=0x000002C585646080 owner=0x000002C554B3A800 handle=0x1CE81E2 resolved=0x000002C585566000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B3A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585566000
[pw] weapon 0x000002C585566000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x000002C585566000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585646080
[hud-find] child[0]=0x000002C585646080 owner=0x000002C554B3A800 handle=0x1CE81E2 resolved=0x000002C585566000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B3A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585566000
[pw] weapon 0x000002C585566000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x000002C585566000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585646080
[hud-find] child[0]=0x000002C585646080 owner=0x000002C554B3A800 handle=0x1CE81E2 resolved=0x000002C585566000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B3A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585566000
[pw] weapon 0x000002C585566000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x000002C585566000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585646080
[hud-find] child[0]=0x000002C585646080 owner=0x000002C554B3A800 handle=0x1CE81E2 resolved=0x000002C585566000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B3A800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B28000
[pw] weapon 0x000002C584B28000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[apply] enter (weapon=0x000002C584B28000 def=17 pk=433)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002C584B292E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=433.000 initial=433.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.225000 initial=0.225000
[apply] world post-create: size=3 data=000001D7DB5A9B80 alloc=11
[apply] world view 0x000002C584B292E0 painted (pk=433)
[hud-find] START weapon=0x000002C584B28000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584AE5C80
[hud-find] child[0]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C57E4F3800 after 1 nodes
[apply-cache] rebuilding weapon=000002C584B28000 hud=000002C57E4F3800 def=17 pk=433
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B28000
[pw] weapon 0x000002C584B28000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000002C584B28000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584AE5C80
[hud-find] child[0]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C57E4F3800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B28000
[pw] weapon 0x000002C584B28000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000002C584B28000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584AE5C80
[hud-find] child[0]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C57E4F3800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B28000
[pw] weapon 0x000002C584B28000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000002C584B28000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584AE5C80
[hud-find] child[0]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C57E4F3800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584AE5C80
[hud-find] child[0]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000
[hud-find] child[1]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584AE5C80
[hud-find] child[0]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000
[hud-find] child[1]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584AE5C80
[hud-find] child[0]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000
[hud-find] child[1]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[apply] enter (weapon=0x000001D7DBF7E000 def=1 pk=764)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DBF7F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=764.000 initial=764.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.400000 initial=0.400000
[apply] world post-create: size=3 data=000001D7DE1B6100 alloc=11
[apply] world view 0x000001D7DBF7F2E0 painted (pk=764)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B30800 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DBF7E000 hud=000002C554B30800 def=1 pk=764
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618

=== SNAPSHOT ===
[snap] fsnCount=72758 lastStage=7 stage5Count=4603
[snap] stage histogram:
[snap]   stage  0: 15508 frames
[snap]   stage  1: 4696 frames
[snap]   stage  2: 4696 frames
[snap]   stage  3: 4691 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4603 frames
[snap]   stage  6: 4603 frames
[snap]   stage  7: 4603 frames
[snap]   stage  8: 4602 frames
[snap]   stage 10: 4602 frames
[snap]   stage 11: 4727 frames
[snap]   stage 12: 15426 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=220
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000
[hud-find] child[1]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000
[hud-find] child[1]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B30800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B30800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B30800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B30800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B30800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B30800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DBF7E000
[pw] weapon 0x000001D7DBF7E000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000001D7DBF7E000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C584B66080
[hud-find] child[0]=0x000002C584B66080 owner=0x000002C554B30800 handle=0xCA81E4 resolved=0x000001D7DBF7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B30800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B28000
[pw] weapon 0x000002C584B28000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000002C584B28000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[1]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C57E4F3800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B28000
[pw] weapon 0x000002C584B28000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000002C584B28000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[1]=0x000002C584AE5C80 owner=0x000002C57E4F3800 handle=0x81E3 resolved=0x000002C584B28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C57E4F3800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12C000
[pw] weapon 0x000001D7DE12C000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[apply] enter (weapon=0x000001D7DE12C000 def=36 pk=130)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DE12D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=130.000 initial=130.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.400000 initial=0.400000
[apply] world post-create: size=3 data=000001D7DB5AF680 alloc=11
[apply] world view 0x000001D7DE12D2E0 painted (pk=130)
[hud-find] START weapon=0x000001D7DE12C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554831000 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DE12C000 hud=000002C554831000 def=36 pk=130
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12C000
[pw] weapon 0x000001D7DE12C000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x000001D7DE12C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554831000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12C000
[pw] weapon 0x000001D7DE12C000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x000001D7DE12C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554831000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12C000
[pw] weapon 0x000001D7DE12C000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x000001D7DE12C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554831000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12C000
[pw] weapon 0x000001D7DE12C000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x000001D7DE12C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554831000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12C000
[pw] weapon 0x000001D7DE12C000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x000001D7DE12C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554831000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DE12C000
[pw] weapon 0x000001D7DE12C000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x000001D7DE12C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1F7C80
[hud-find] child[0]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554831000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[apply] enter (weapon=0x000001D7DC23A000 def=13 pk=661)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000001D7DC23B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=661.000 initial=661.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.275000 initial=0.275000
[apply] world post-create: size=3 data=000001D7DE1B2900 alloc=11
[apply] world view 0x000001D7DC23B2E0 painted (pk=661)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-cache] rebuilding weapon=000001D7DC23A000 hud=000002C554B31C00 def=13 pk=661
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618

=== SNAPSHOT ===
[snap] fsnCount=77296 lastStage=3 stage5Count=4917
[snap] stage histogram:
[snap]   stage  0: 16363 frames
[snap]   stage  1: 5010 frames
[snap]   stage  2: 5010 frames
[snap]   stage  3: 5006 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4917 frames
[snap]   stage  6: 4917 frames
[snap]   stage  7: 4917 frames
[snap]   stage  8: 4917 frames
[snap]   stage 10: 4916 frames
[snap]   stage 11: 5049 frames
[snap]   stage 12: 16273 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=222
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=82180 lastStage=10 stage5Count=5232
[snap] stage histogram:
[snap]   stage  0: 17387 frames
[snap]   stage  1: 5325 frames
[snap]   stage  2: 5325 frames
[snap]   stage  3: 5321 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5232 frames
[snap]   stage  6: 5232 frames
[snap]   stage  7: 5232 frames
[snap]   stage  8: 5232 frames
[snap]   stage 10: 5232 frames
[snap]   stage 11: 5368 frames
[snap]   stage 12: 17293 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=222
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C4ED806480
[hud-find] child[0]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[1]=0x000001D7DC1F7C80 owner=0x000002C554831000 handle=0x19D81E5 resolved=0x000001D7DE12C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[apply] enter (weapon=0x000002C584B2C000 def=30 pk=179)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002C584B2D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=179.000 initial=179.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.430000 initial=0.430000
[apply] world post-create: size=3 data=000002C57EBFD980 alloc=11
[apply] world view 0x000002C584B2D2E0 painted (pk=179)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-cache] rebuilding weapon=000002C584B2C000 hud=000001D7DD037800 def=30 pk=179
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002C56EC3D800 team=2 scene=000002C554B89480 skeleton=000002C554B89480 modelState=000002C554B895C0 rawHandle=0x2C4ED8CF618
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=86639 lastStage=0 stage5Count=5544
[snap] stage histogram:
[snap]   stage  0: 18213 frames
[snap]   stage  1: 5637 frames
[snap]   stage  2: 5637 frames
[snap]   stage  3: 5633 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5544 frames
[snap]   stage  6: 5544 frames
[snap]   stage  7: 5544 frames
[snap]   stage  8: 5544 frames
[snap]   stage 10: 5543 frames
[snap]   stage 11: 5689 frames
[snap]   stage 12: 18110 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=223
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B2C000
[pw] weapon 0x000002C584B2C000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x000002C584B2C000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000001D7DD037800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=91430 lastStage=0 stage5Count=5861
[snap] stage histogram:
[snap]   stage  0: 19182 frames
[snap]   stage  1: 5954 frames
[snap]   stage  2: 5954 frames
[snap]   stage  3: 5950 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5861 frames
[snap]   stage  6: 5861 frames
[snap]   stage  7: 5861 frames
[snap]   stage  8: 5861 frames
[snap]   stage 10: 5860 frames
[snap]   stage 11: 6009 frames
[snap]   stage 12: 19076 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=223
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000001D7DC23A000
[pw] weapon 0x000001D7DC23A000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000001D7DC23A000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000001D7DC1FC480
[hud-find] child[0]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[1]=0x000002C4ED806480 owner=0x000002C554B31C00 handle=0x13181E6 resolved=0x000001D7DC23A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554B31C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C585560000
[pw] weapon 0x000002C585560000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000002C585560000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C5841BE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=96098 lastStage=12 stage5Count=6178
[snap] stage histogram:
[snap]   stage  0: 20089 frames
[snap]   stage  1: 6271 frames
[snap]   stage  2: 6271 frames
[snap]   stage  3: 6267 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 6178 frames
[snap]   stage  6: 6178 frames
[snap]   stage  7: 6178 frames
[snap]   stage  8: 6178 frames
[snap]   stage 10: 6177 frames
[snap]   stage 11: 6329 frames
[snap]   stage 12: 19981 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=223
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=100777 lastStage=0 stage5Count=6492
[snap] stage histogram:
[snap]   stage  0: 21016 frames
[snap]   stage  1: 6585 frames
[snap]   stage  2: 6585 frames
[snap]   stage  3: 6581 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 6492 frames
[snap]   stage  6: 6492 frames
[snap]   stage  7: 6492 frames
[snap]   stage  8: 6492 frames
[snap]   stage 10: 6491 frames
[snap]   stage 11: 6649 frames
[snap]   stage 12: 20901 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=223
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=103245 lastStage=0 stage5Count=6656
[snap] stage histogram:
[snap]   stage  0: 21512 frames
[snap]   stage  1: 6749 frames
[snap]   stage  2: 6749 frames
[snap]   stage  3: 6745 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 6656 frames
[snap]   stage  6: 6656 frames
[snap]   stage  7: 6656 frames
[snap]   stage  8: 6656 frames
[snap]   stage 10: 6655 frames
[snap]   stage 11: 6830 frames
[snap]   stage 12: 21380 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=223
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=104285 lastStage=7 stage5Count=6726
[snap] stage histogram:
[snap]   stage  0: 21718 frames
[snap]   stage  1: 6819 frames
[snap]   stage  2: 6819 frames
[snap]   stage  3: 6814 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 6726 frames
[snap]   stage  6: 6726 frames
[snap]   stage  7: 6726 frames
[snap]   stage  8: 6725 frames
[snap]   stage 10: 6725 frames
[snap]   stage 11: 6901 frames
[snap]   stage 12: 21585 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002C555D36E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x000002C4CFA00200
[snap] pawn: vtable=0x00007FFCD7EA3740 inClient=0 health=709
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x006081A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x000002C4CF43F800 highestEntityIndex=223
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x006081A1 -> 0x000002C56EC3D800
[snap] ----------------------------------------
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002C56EC3D800
[apply] active 0x000002C584B20000
[pw] weapon 0x000002C584B20000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000002C584B20000 pawn=0x000002C56EC3D800
[hud-find] armsHandle=0x9BEA42D8
[hud-find] arms=0x000002C5547F7000
[hud-find] armsNode=0x000001D7DCDFB880
[hud-find] firstChild=0x000002C585C13C80
[hud-find] child[0]=0x000002C585C13C80 owner=0x000002C5841BE800 handle=0xF601E1 resolved=0x000002C585560000
[hud-find] child[1]=0x000001D7DC1FC480 owner=0x000001D7DD037800 handle=0x8A81E7 resolved=0x000002C584B2C000
[hud-find] child[2]=0x000002C584B18080 owner=0x000002C554839C00 handle=0x10981DF resolved=0x000002C584B20000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002C554839C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[