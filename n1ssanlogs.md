[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Oct 31 2026 23:17:49
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC259C924B -> rva 0x271EB28 (val=0000030B4D469000)
[auto-off] dwLocalPlayerController      hit 0x00007FFC258E55D0 -> rva 0x25413F8 (val=0000030BDF437E00)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC251015D5 -> rva 0x2738160 (val=0000030B6A282E00)
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
[resolve] entityList @ 0x00007FFC276CEB28 -> 0x0000030B4D469000
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC2613E2A5 -> ptrAddr 0x00007FFC275A83E0 -> es 0x0000030ABFB32FB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x0000030ABFB32FB0
[schema-probe] CEconItemSchema* = 0x0000030B4D739A00
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x0000030BB7580000 node0[+08]=0x0000030BB6280C00 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x0000030B4DBDC1C0 node0[+08]=0x0038006200860063 node0[+18]=0x0010001A00720059
[schema-probe]   map @ schema+0x128 count=2059 elements=0x0000030BB75A0000 node0[+08]=0x0000000100000001 node0[+18]=0x0000030BB6280C00
[schema-probe]   map @ schema+0x138 count=737 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x150 count=330 elements=0x0000030BB094E000 node0[+08]=0x0000030BB5FEDA80 node0[+18]=0x0000030BB5FEDBC0
[schema-probe]   map @ schema+0x160 count=512 elements=0x0000030B4D958000 node0[+08]=0x0000030B6A354E40 node0[+18]=0x0000030B6A354740
[schema-probe]   map @ schema+0x170 count=12 elements=0x0000030BB076FA00 node0[+08]=0x0000000100000001 node0[+18]=0x0000030BB75E8A00
[schema-probe]   map @ schema+0x180 count=3 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x198 count=97 elements=0x0000030BB0816000 node0[+08]=0x6F79FF0000000002 node0[+18]=0x00007FFC26CC3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x0000030BB8BD8000 node0[+08]=0x0000000100000128 node0[+18]=0x0000030BB5D3D021
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x0000030BB7578000 node0[+08]=0x0000000100000001 node0[+18]=0x0000030BB5FC4D11
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x210 count=2505 elements=0x0000030BB77E0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC26CC3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x278 count=2 elements=0x0000030BB62AE810 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x0000030BB7676360
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x0000030BB1BA0000 node0[+08]=0x65735F0100000002 node0[+18]=0x0000030BB50B9480
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x0000030BB8BC0000 node0[+08]=0x65735F0100000013 node0[+18]=0x0000030BB55FCD60
[schema-probe]   map @ schema+0x300 count=102 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x328 count=382 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x0000030BB07CC000 node0[+08]=0x000003000000003E node0[+18]=0x0000030BB6A63370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x0000030BFFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x0000030BB50A9700 node0[+08]=0x0000030BB6254200 node0[+18]=0x0000030BB62542C0
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000030B00000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x0000030BB076CE00 node0[+08]=0x0000030BB62546C0 node0[+18]=0x0000030BB6254720
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000030B00000013 node0[+08]=0x0000000000000000 node0[+18]=0x00000000007FFCE6
[schema-probe]   map @ schema+0x400 count=19 elements=0x0000030B6A2FFA00 node0[+08]=0x0000030BB6254700 node0[+18]=0x0000030BB6254740
[schema-probe] sane map candidates: 29
[verify] items count=2059 elems=0x0000030BB7580000
[verify]   items[0] key=0 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=0 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=0 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=0 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=0 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x0000030BB1BA0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x0000030BB1BA0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x0000030BB6F13AA0 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x0000030BB6F141A0 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x0000030ABFB32FB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC260E27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC26098540, setFloat=00007FFC26098750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x0000030BB5FEDD00
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x0000030BB5FEDDA0
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x0000030BB5FEDE40
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
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BDF437E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x003F000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F000B -> 0x0000030BDFB60000
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=0000030BDFB60000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000030BDFB60000
[match] FOUND pawn=0x0000030BDFB60000 hp=100
[apply] tick pawn=0x0000030BDFB60000
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=0000030BDFB61770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000030BDFB60000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x0000030BDFB61770 vtable=0x00007FFC26C3E0D0 def=0 init=0 quality=-1 attrCount=650979816
[glove-diag] pawn=0000030BDFB60000 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BDFB60000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4589 lastStage=0 stage5Count=284
[snap] stage histogram:
[snap]   stage  0: 1017 frames
[snap]   stage  1: 284 frames
[snap]   stage  2: 284 frames
[snap]   stage  3: 284 frames
[snap]   stage  5: 284 frames
[snap]   stage  6: 284 frames
[snap]   stage  7: 284 frames
[snap]   stage  8: 284 frames
[snap]   stage 10: 284 frames
[snap]   stage 11: 314 frames
[snap]   stage 12: 986 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BDF437E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x003F000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F000B -> 0x0000030BDFB60000
[snap] ----------------------------------------
[glove-observe] pawn=0000030B6A282E00 reapply=114 changed=0 def=24948 init=115 idHigh=0x726F482C
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000030B6A282E00
[apply] tick pawn=0x0000030B6A282E00
[glove-snapshot] ===== PAWN-EMBEDDED item=0000030B6A284570 =====
[glove-snapshot] LOCAL size=779247938 data=54482C6E776F4465 alloc=1867009101
[glove-snapshot] LOCAL invalid vector; entries skipped
[glove-snapshot] NETWORKED size=1853321028 data=6D7568546C6C6F72 alloc=1920236386
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=0000030B6A282E00 count=-675465408 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000030BE1071800
[apply] tick pawn=0x0000030BE1071800
[glove-snapshot] ===== PAWN-EMBEDDED item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000030BE1071800 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=7263 lastStage=0 stage5Count=437
[snap] stage histogram:
[snap]   stage  0: 1504 frames
[snap]   stage  1: 531 frames
[snap]   stage  2: 531 frames
[snap]   stage  3: 527 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 437 frames
[snap]   stage  6: 437 frames
[snap]   stage  7: 437 frames
[snap]   stage  8: 437 frames
[snap]   stage 10: 437 frames
[snap]   stage 11: 474 frames
[snap]   stage 12: 1510 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BD8FB2200
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x01E881A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E881A1 -> 0x0000030BE1071800
[snap] ----------------------------------------
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon=0x0000030C22F92000 view=0x0000030C22F932E0
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
[pw]   +0x12B0 = 0x009300EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFC26CC45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x0000030C22F92000 def=32
[team] pawn=0x0000030BE1071800, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] NO TARGET def=32 team=CT
[glove-diag] pawn=0000030BE1071800 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-model] stage=AFTER-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[attr-diag] item=0000030BE1072F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000030BE1072F70 def=5030 pk=10037 size=3 data=0000030C23F2E580 alloc=11
[glove-paintkit] pk=10037 result=0000030BB6F13AA0 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=0->1
[glove-sequence] applied seq=1 pawn=0000030BE1071800 item=0000030BE1072F70 team=3 def=5030 pk=10037
[glove] APPLIED def=5030 pk=10037 team=3
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=1 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=1 pawn=0000030BE1071800 item=0000030BE1072F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=3 data=0000030C23F2E580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-model] stage=AFTER-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[attr-diag] item=0000030BE1072F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000030BE1072F70 def=5030 pk=10037 size=3 data=0000030BD733B700 alloc=11
[glove-paintkit] pk=10037 result=0000030BB6F13AA0 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=1->2
[glove-sequence] applied seq=2 pawn=0000030BE1071800 item=0000030BE1072F70 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=2 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=2 pawn=0000030BE1071800 item=0000030BE1072F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=3 data=0000030BD733B700 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-model] stage=AFTER-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[attr-diag] item=0000030BE1072F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000030BE1072F70 def=5030 pk=10037 size=3 data=0000030BD733C500 alloc=11
[glove-paintkit] pk=10037 result=0000030BB6F13AA0 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=2->3
[glove-sequence] applied seq=3 pawn=0000030BE1071800 item=0000030BE1072F70 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=3 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=3 pawn=0000030BE1071800 item=0000030BE1072F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=3 data=0000030BD733C500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-model] stage=AFTER-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[attr-diag] item=0000030BE1072F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000030BE1072F70 def=5030 pk=10037 size=3 data=0000030BD733D680 alloc=11
[glove-paintkit] pk=10037 result=0000030BB6F13AA0 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=3->4
[glove-sequence] applied seq=4 pawn=0000030BE1071800 item=0000030BE1072F70 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=4 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=4 pawn=0000030BE1071800 item=0000030BE1072F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=3 data=0000030BD733D680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply] enter (weapon=0x0000030C2332C000 def=515 pk=617)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000030C2332D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=617.000 initial=617.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000030BD733A580 alloc=11
[apply] world view 0x0000030C2332D2E0 painted (pk=617)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A4C80
[hud-find] child[1]=0x0000030C04DCF480 owner=0x0000030C05123400 handle=0x9300EC resolved=0x0000030C22F92000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000000000000000 def=515 pk=617
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=12120 lastStage=0 stage5Count=736
[snap] stage histogram:
[snap]   stage  0: 2587 frames
[snap]   stage  1: 830 frames
[snap]   stage  2: 830 frames
[snap]   stage  3: 826 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 736 frames
[snap]   stage  6: 736 frames
[snap]   stage  7: 736 frames
[snap]   stage  8: 736 frames
[snap]   stage 10: 736 frames
[snap]   stage 11: 793 frames
[snap]   stage 12: 2573 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BD8FB2200
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x01E881A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E881A1 -> 0x0000030BE1071800
[snap] ----------------------------------------
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C2332C000
[pw] weapon 0x0000030C2332C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C2332C000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10E84214
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C1F8E6480
[hud-find] firstChild=0x0000030C1E4A3480
[hud-find] child[0]=0x0000030C1E4A3480 owner=0x0000030BD9121000 handle=0x15800EB resolved=0x0000030C2332C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9121000 after 1 nodes
[apply-cache] rebuilding weapon=0000030C2332C000 hud=0000030BD9121000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=17128 lastStage=0 stage5Count=1054
[snap] stage histogram:
[snap]   stage  0: 3660 frames
[snap]   stage  1: 1148 frames
[snap]   stage  2: 1148 frames
[snap]   stage  3: 1144 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1054 frames
[snap]   stage  6: 1054 frames
[snap]   stage  7: 1054 frames
[snap]   stage  8: 1054 frames
[snap]   stage 10: 1054 frames
[snap]   stage 11: 1113 frames
[snap]   stage 12: 3644 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BD8FB2200
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x01E881A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=210
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E881A1 -> 0x0000030BE1071800
[snap] ----------------------------------------
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C22F92000
[pw] weapon 0x0000030C22F92000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x0000030C1EE40000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000030C1EE412E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=0000030C1C2B3480 alloc=11
[apply] world view 0x0000030C1EE412E0 painted (pk=38)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x1A014252
[hud-find] arms=0x0000030BD90CD800
[hud-find] armsNode=0x0000030C1EE20880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-diag] pawn=0000030BE1071800 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-model-refresh] queued: team 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=4->5
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=2 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF24D8
[model] outer=0x0000030B6BDF24D8 inner=0x0000030B9CC88C00
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=5 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=5 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x8938C259
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C229FB080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=5->6
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=6 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=6 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xB454425A
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C1E8DB480
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=6->7
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=7 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=7 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x8431C25B
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030BD911E880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=7->8
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=8 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=8 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000030C1E2EE000 runtimeOffset=0x380 read=1 value=609768950 target=3412259219
[subclass-diag] BEFORE weapon=0000030C1E2EE000 offset=0x38C read=1 value=609768950 target=3412259219
[knife] SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[subclass-diag] WRITE success=1 target=3412259219
[subclass-diag] UPDATE success=1 READBACK read=1 value=3412259219
[apply] enter (weapon=0x0000030C1E2EE000 def=512 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000030C1E2EF2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000030C1C2B2680 alloc=11
[apply] world view 0x0000030C1E2EF2E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xD4C2425C
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C05494880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000000000000000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=8->9
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=2 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF24D8
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=9 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=9 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000030C1E2EE000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000030C1E2EE000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x3867425E
[hud-find] arms=0x0000030C23F6E800
[hud-find] armsNode=0x0000030C1E4A3480
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=9->10
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=10 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=10 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000030C1E2EE000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000030C1E2EE000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x1CB5425F
[hud-find] arms=0x0000030BD90CD800
[hud-find] armsNode=0x0000030C1F6FC880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=10->11
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=11 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=11 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000030C1E2EE000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000030C1E2EE000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x24324260
[hud-find] arms=0x0000030C23F6E800
[hud-find] armsNode=0x0000030BD911F480
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=11->12
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=12 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=12 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000030C1E2EE000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000030C1E2EE000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x95544261
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C05497880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=12->13
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=13 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=13 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000030C1E2EE000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000030C1E2EE000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xB3AFC262
[hud-find] arms=0x0000030C23F6E800
[hud-find] armsNode=0x0000030C229FA480
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=13->14
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=14 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=14 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xFB7F4263
[hud-find] arms=0x0000030BD90CA800
[hud-find] armsNode=0x0000030BD8899880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=14->15
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=15 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=15 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xEDEE4264
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030BD9118880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=15->16
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=16 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=16 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xFF54265
[hud-find] arms=0x0000030BD90CA800
[hud-find] armsNode=0x0000030C22D62880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=16->17
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=17 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=17 def=0 init=0 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=21955 lastStage=0 stage5Count=1363
[snap] stage histogram:
[snap]   stage  0: 4683 frames
[snap]   stage  1: 1457 frames
[snap]   stage  2: 1457 frames
[snap]   stage  3: 1453 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1363 frames
[snap]   stage  6: 1363 frames
[snap]   stage  7: 1363 frames
[snap]   stage  8: 1363 frames
[snap]   stage 10: 1363 frames
[snap]   stage 11: 1433 frames
[snap]   stage 12: 4656 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BD8FB2200
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x01E881A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=210
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E881A1 -> 0x0000030BE1071800
[snap] ----------------------------------------
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDAA6C266
[hud-find] arms=0x0000030C23F6E800
[hud-find] armsNode=0x0000030C1ECBF480
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=17->18
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=18 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=18 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xD87EC267
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C1F6FB080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=18->19
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=19 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=19 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x3E3BC268
[hud-find] arms=0x0000030C23F6D000
[hud-find] armsNode=0x0000030C1EE22080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=19->20
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=20 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=20 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x91BEC269
[hud-find] arms=0x0000030BD90CD800
[hud-find] armsNode=0x0000030C23FDA880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=20->21
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=21 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=21 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xB96AC26A
[hud-find] arms=0x0000030C23F6E800
[hud-find] armsNode=0x0000030C1E4A7C80
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=21->22
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=22 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=22 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x8D85426B
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C1E8DB480
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=22->23
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=23 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=23 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1E2EE000
[pw] weapon 0x0000030C1E2EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1E2EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x5CEDC26C
[hud-find] arms=0x0000030C23F6E800
[hud-find] armsNode=0x0000030C1F4FB880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000
[hud-find] child[1]=0x0000030C22D61C80 owner=0x0000030BD9126000 handle=0x9000EF resolved=0x0000030C1E2EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD9126000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1E2EE000 hud=0000030BD9126000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1E2EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030BD9126000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=23->24
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=24 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=24 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xF50C26D
[hud-find] arms=0x0000030BD90CA800
[hud-find] armsNode=0x0000030C1ECBAC80
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=24->25
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=25 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=25 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x22EE426E
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030C05490080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=25->26
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=26 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=26 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x569B426F
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C22B99080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=26->27
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=27 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=27 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xFE504270
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030BD9170480
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=27->28
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=28 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=28 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x393B4271
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C05490080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=28->29
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=29 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=29 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xC277C272
[hud-find] arms=0x0000030C23F6E800
[hud-find] armsNode=0x0000030C22B90C80
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=29->30
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=30 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=30 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x95E14273
[hud-find] arms=0x0000030BD90CA800
[hud-find] armsNode=0x0000030C1E4A1C80
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=30->31
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=31 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=31 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x9360C274
[hud-find] arms=0x0000030C23F6B800
[hud-find] armsNode=0x0000030BD911DC80
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=31->32
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=32 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=32 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x448AC275
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030BD889B080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=32->33
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=33 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=33 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x2F324276
[hud-find] arms=0x0000030C23F6D000
[hud-find] armsNode=0x0000030BD9171C80
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=33->34
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=34 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=34 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x4E6D4277
[hud-find] arms=0x0000030BD90CD800
[hud-find] armsNode=0x0000030C22B9A880
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=34->35
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=35 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=35 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x4903C278
[hud-find] arms=0x0000030C23F6D000
[hud-find] armsNode=0x0000030C1E4AA080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=35->36
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=36 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=36 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x235CC2A1
[hud-find] arms=0x0000030C1E115800
[hud-find] armsNode=0x0000030C1D2F8080
[hud-find] firstChild=0x0000030C1EE2A480
[hud-find] child[0]=0x0000030C1EE2A480 owner=0x0000030C1EDDB800 handle=0x10B00F0 resolved=0x0000030C1EE40000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1EDDB800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000030C1EDDB800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=36->37
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=37 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=37 def=0 init=0 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=26800 lastStage=0 stage5Count=1674
[snap] stage histogram:
[snap]   stage  0: 5706 frames
[snap]   stage  1: 1768 frames
[snap]   stage  2: 1768 frames
[snap]   stage  3: 1764 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1674 frames
[snap]   stage  6: 1674 frames
[snap]   stage  7: 1674 frames
[snap]   stage  8: 1674 frames
[snap]   stage 10: 1674 frames
[snap]   stage 11: 1753 frames
[snap]   stage 12: 5670 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BD8FB2200
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x01E881A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=210
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E881A1 -> 0x0000030BE1071800
[snap] ----------------------------------------
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x85CB42A2
[hud-find] arms=0x0000030C1F956000
[hud-find] armsNode=0x0000030C1D2FEC80
[hud-find] firstChild=0x0000000000000000
[hud-find] NO MATCH walked=0 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000000000000000 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=37->38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=38 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=38 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1EE40000
[pw] weapon 0x0000030C1EE40000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1EE40000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x9060C2A3
[hud-find] arms=0x0000030C23F6E800
[hud-find] armsNode=0x0000030C1D2D4080
[hud-find] firstChild=0x0000000000000000
[hud-find] NO MATCH walked=0 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000030C1EE40000 hud=0000000000000000 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=38->39
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=39 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=39 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D342000
[pw] weapon 0x0000030C1D342000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[apply] enter (weapon=0x0000030C1D342000 def=61 pk=1377)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000030C1D3432E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1377.000 initial=1377.000
[attr-entry] 1: def=7 value=73.000 initial=73.000
[attr-entry] 2: def=8 value=0.100895 initial=0.100895
[apply] world post-create: size=3 data=0000030BD733D680 alloc=11
[apply] world view 0x0000030C1D3432E0 painted (pk=1377)
[hud-find] START weapon=0x0000030C1D342000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030C1D2DB880
[hud-find] child[0]=0x0000030C1D2DB880 owner=0x0000030C1D275C00 handle=0x9500F3 resolved=0x0000030C1D342000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1D275C00 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1D342000 hud=0000030C1D275C00 def=61 pk=1377
[glove-diag] pawn=0000030BE1071800 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=39->40
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=40 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D342000
[pw] weapon 0x0000030C1D342000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000030C1D342000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030C1D2DB880
[hud-find] child[0]=0x0000030C1D2DB880 owner=0x0000030C1D275C00 handle=0x9500F3 resolved=0x0000030C1D342000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1D275C00 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1D342000 hud=0000030C1D275C00 def=61 pk=1377
[glove-model] stage=BEFORE-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-model] stage=AFTER-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[attr-diag] item=0000030BE1072F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000030BE1072F70 def=5030 pk=10037 size=3 data=0000030C23F2E900 alloc=11
[glove-paintkit] pk=10037 result=0000030BB6F13AA0 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=40->41
[glove-sequence] applied seq=5 pawn=0000030BE1071800 item=0000030BE1072F70 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=41 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D342000
[pw] weapon 0x0000030C1D342000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000030C1D342000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD911D080
[hud-find] child[1]=0x0000030C1D2DB880 owner=0x0000030C1D275C00 handle=0x9500F3 resolved=0x0000030C1D342000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1D275C00 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D342000 hud=0000030C1D275C00 def=61 pk=1377
[glove-next-tick] seq=5 pawn=0000030BE1071800 item=0000030BE1072F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=3 data=0000030C23F2E900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-model] stage=AFTER-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[attr-diag] item=0000030BE1072F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000030BE1072F70 def=5030 pk=10037 size=3 data=0000030C23F22180 alloc=11
[glove-paintkit] pk=10037 result=0000030BB6F13AA0 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=41->42
[glove-sequence] applied seq=6 pawn=0000030BE1071800 item=0000030BE1072F70 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=42 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply] enter (weapon=0x0000030C1D340000 def=515 pk=617)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000030C1D3412E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=617.000 initial=617.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000030C23F2D780 alloc=11
[apply] world view 0x0000030C1D3412E0 painted (pk=617)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030C23FD9C80
[hud-find] child[1]=0x0000030C1D2DB880 owner=0x0000030C1D275C00 handle=0x9500F3 resolved=0x0000030C1D342000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000000000000000 def=515 pk=617
[glove-next-tick] seq=6 pawn=0000030BE1071800 item=0000030BE1072F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=3 data=0000030C23F22180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-model] stage=AFTER-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[attr-diag] item=0000030BE1072F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000030BE1072F70 def=5030 pk=10037 size=3 data=0000030C23F2FA80 alloc=11
[glove-paintkit] pk=10037 result=0000030BB6F13AA0 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=42->43
[glove-sequence] applied seq=7 pawn=0000030BE1071800 item=0000030BE1072F70 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=43 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030C1E4A7080
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-next-tick] seq=7 pawn=0000030BE1071800 item=0000030BE1072F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=3 data=0000030C23F2FA80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-model] stage=AFTER-BODYGROUP pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[attr-diag] item=0000030BE1072F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000030BE1072F70 def=5030 pk=10037 size=3 data=0000030C1C2BAB80 alloc=11
[glove-paintkit] pk=10037 result=0000030BB6F13AA0 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=43->44
[glove-sequence] applied seq=8 pawn=0000030BE1071800 item=0000030BE1072F70 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=3 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF19D8
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=44 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-next-tick] seq=8 pawn=0000030BE1071800 item=0000030BE1072F70 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000030BE1072F70 =====
[glove-snapshot] LOCAL size=3 data=0000030C1C2BAB80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1D340000
[pw] weapon 0x0000030C1D340000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000030C1D340000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDA9942A7
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C1D2DA080
[hud-find] firstChild=0x0000030BD889C880
[hud-find] child[1]=0x0000030C1D2E5480 owner=0x0000030BD919B800 handle=0x8C80F2 resolved=0x0000030C1D340000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030BD919B800 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1D340000 hud=0000030BD919B800 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x0000030C1C7D0000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000030C1C7D12E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=0000030C23F2D080 alloc=11
[apply] world view 0x0000030C1C7D12E0 painted (pk=38)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x230AC2E2
[hud-find] arms=0x0000030C1EA7E800
[hud-find] armsNode=0x0000030C1C7CAC80
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-diag] pawn=0000030BE1071800 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-model-refresh] queued: team 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=44->45
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=2 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF24D8
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=45 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=45 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDD84C2E9
[hud-find] arms=0x0000030BD90C0000
[hud-find] armsNode=0x0000030C1EE29880
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=45->46
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=46 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=46 def=0 init=0 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=31416 lastStage=0 stage5Count=1978
[snap] stage histogram:
[snap]   stage  0: 6646 frames
[snap]   stage  1: 2072 frames
[snap]   stage  2: 2072 frames
[snap]   stage  3: 2068 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1978 frames
[snap]   stage  6: 1978 frames
[snap]   stage  7: 1978 frames
[snap]   stage  8: 1978 frames
[snap]   stage 10: 1978 frames
[snap]   stage 11: 2073 frames
[snap]   stage 12: 6594 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BD8FB2200
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x01E881A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=210
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E881A1 -> 0x0000030BE1071800
[snap] ----------------------------------------
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xEF8EC2EA
[hud-find] arms=0x0000030C1EA72800
[hud-find] armsNode=0x0000030C1ECB6480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=46->47
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=47 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=47 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x87F1C2EB
[hud-find] arms=0x0000030BD90C1800
[hud-find] armsNode=0x0000030BD9170480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=47->48
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=48 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=48 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x48DDC2EC
[hud-find] arms=0x0000030C1E112800
[hud-find] armsNode=0x0000030C22B9D880
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=48->49
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=49 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=49 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xB09E42ED
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C1D2EA880
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=49->50
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=50 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=50 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x78F4C2EE
[hud-find] arms=0x0000030BD90C1800
[hud-find] armsNode=0x0000030BD9178880
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=50->51
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=51 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=51 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xECA0C2EF
[hud-find] arms=0x0000030BD90C0000
[hud-find] armsNode=0x0000030C1E4AC480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=51->52
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=52 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=52 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x61D442F0
[hud-find] arms=0x0000030BD90CA800
[hud-find] armsNode=0x0000030BD9A3D480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=52->53
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=53 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=53 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x3A1642F1
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030BD9174C80
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=53->54
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=54 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=54 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xC3B6C2F2
[hud-find] arms=0x0000030BD90C7800
[hud-find] armsNode=0x0000030C1E4A9480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=54->55
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=55 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=55 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[knife] SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[apply] enter (weapon=0x0000030C1F7EE000 def=512 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000030C1F7EF2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000030C1C2B1500 alloc=11
[apply] world view 0x0000030C1F7EF2E0 painted (pk=413)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x76C2F3
[hud-find] arms=0x0000030BD90C0000
[hud-find] armsNode=0x0000030C229FEC80
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000000000000000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=55->56
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000030BE1071800 team=2 scene=0000030BD917D080 skeleton=0000030BD917D080 modelState=0000030BD917D1C0 rawHandle=0x30B6BDF24D8
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=56 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=56 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xC7DCC2F5
[hud-find] arms=0x0000030BD90CD800
[hud-find] armsNode=0x0000030C22D61C80
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=56->57
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=57 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=57 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x4697C2F6
[hud-find] arms=0x0000030BD90CA800
[hud-find] armsNode=0x0000030C1C7CDC80
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=57->58
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=58 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=58 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x10D6C2F7
[hud-find] arms=0x0000030BD90C0000
[hud-find] armsNode=0x0000030C05493080
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=58->59
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=59 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=59 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDD9D42F8
[hud-find] arms=0x0000030BD90CD800
[hud-find] armsNode=0x0000030C22D61C80
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=59->60
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=60 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=60 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xDD86C2F9
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C1F4FE880
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=60->61
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=61 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=61 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x215AC2FA
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C1D2F1480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=61->62
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=62 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=62 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xC10AC2FB
[hud-find] arms=0x0000030BD90CA800
[hud-find] armsNode=0x0000030C1C7C1080
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=62->63
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=63 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=63 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x778442FC
[hud-find] arms=0x0000030BD90CA800
[hud-find] armsNode=0x0000030C1D2E6C80
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=63->64
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=64 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=64 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1C7D0000
[pw] weapon 0x0000030C1C7D0000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000030C1C7D0000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x1C52C2FD
[hud-find] arms=0x0000030BD90C0000
[hud-find] armsNode=0x0000030C1C7C9480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1C72A800 after 1 nodes
[apply-cache] rebuilding weapon=0000030C1C7D0000 hud=0000030C1C72A800 def=4 pk=38
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=64->65
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=65 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=65 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x6CBC2FE
[hud-find] arms=0x0000030BC9DC3000
[hud-find] armsNode=0x0000030C1D2FA480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=65->66
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=66 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=66 def=0 init=0 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=36347 lastStage=0 stage5Count=2289
[snap] stage histogram:
[snap]   stage  0: 7712 frames
[snap]   stage  1: 2383 frames
[snap]   stage  2: 2383 frames
[snap]   stage  3: 2379 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2289 frames
[snap]   stage  6: 2289 frames
[snap]   stage  7: 2289 frames
[snap]   stage  8: 2289 frames
[snap]   stage 10: 2289 frames
[snap]   stage 11: 2393 frames
[snap]   stage 12: 7651 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000030BD8FB2200
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000030B6A282E00
[snap] pawn: vtable=0x00007FFCD7BD3740 inClient=0 health=779
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x01E881A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000030B4D469000 highestEntityIndex=210
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E881A1 -> 0x0000030BE1071800
[snap] ----------------------------------------
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0xB0A342FF
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C22D6E880
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=66->67
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=67 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=67 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x99294300
[hud-find] arms=0x0000030BD90C9000
[hud-find] armsNode=0x0000030C1D2F1480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=67->68
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=68 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=68 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x8E84301
[hud-find] arms=0x0000030BD90C7800
[hud-find] armsNode=0x0000030C1F0D4080
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=68->69
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=69 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=69 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x3A64C302
[hud-find] arms=0x0000030BD90C0000
[hud-find] armsNode=0x0000030C1D2F5C80
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=69->70
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=70 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=70 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x53C9C303
[hud-find] arms=0x0000030BD90C0000
[hud-find] armsNode=0x0000030C1C7C9480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=70->71
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=71 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000030BE1071800 reapply=0 changed=71 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000030BE1071800
[apply] active 0x0000030C1F7EE000
[pw] weapon 0x0000030C1F7EE000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000030C1F7EE000 pawn=0x0000030BE1071800
[hud-find] armsHandle=0x27F44304
[hud-find] arms=0x0000030BD90C1800
[hud-find] armsNode=0x0000030C22CDC480
[hud-find] firstChild=0x0000030C1C7C7080
[hud-find] child[0]=0x0000030C1C7C7080 owner=0x0000030C1C72A800 handle=0x6F80F6 resolved=0x0000030C1C7D0000
[hud-find] child[1]=0x0000030BD9171080 owner=0x0000030C1E802000 handle=0x19F80F5 resolved=0x0000030C1F7EE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000030C1E802000 after 2 nodes
[apply-cache] rebuilding weapon=0000030C1F7EE000 hud=0000030C1E802000 def=512 pk=413
[mesh-diag] WORLD entity=0000030C1F7EE000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000030C1E802000 mask=2
[glove-model-refresh] queued: team 3 -> 2
[glove-flags] pawn=0000030BE1071800 reapply=0->1 changed=71->72
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000030BE1071800 reapply=1 changed=72 def=0 init=0 idHigh=0xFFFFFFFF
[