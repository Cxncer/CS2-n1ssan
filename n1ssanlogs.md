[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Oct 31 2026 23:06:17
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC259C924B -> rva 0x271EB28 (val=0000055A8B448000)
[auto-off] dwLocalPlayerController      hit 0x00007FFC258E55D0 -> rva 0x25413F8 (val=0000055B234C5800)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC251015D5 -> rva 0x2738160 (val=0000055AA8283400)
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
[resolve] entityList @ 0x00007FFC276CEB28 -> 0x0000055A8B448000
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC2613E2A5 -> ptrAddr 0x00007FFC275A83E0 -> es 0x00000559FDB02FC0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x00000559FDB02FC0
[schema-probe] CEconItemSchema* = 0x0000055A8B939A00
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x0000055AF9570000 node0[+08]=0x0000055AF32D1800 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x0000055A8BBCC1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x0000055AF9590000 node0[+08]=0x0000000100000001 node0[+18]=0x0000055AF32D1800
[schema-probe]   map @ schema+0x138 count=737 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x0000055AF3296000 node0[+08]=0x0000055AF3FEA120 node0[+18]=0x0000055AF3FEA260
[schema-probe]   map @ schema+0x160 count=512 elements=0x0000055A8B838000 node0[+08]=0x0000055AA8354E40 node0[+18]=0x0000055AA8354EC0
[schema-probe]   map @ schema+0x170 count=12 elements=0x0000055AF9671E00 node0[+08]=0x0000000100000001 node0[+18]=0x0000055AF95D6A00
[schema-probe]   map @ schema+0x180 count=3 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x0000055AF31D8000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC26CC3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x0000055AD17CC000 node0[+08]=0x0000010100000128 node0[+18]=0x0000055AF3EA7CE1
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x0000055AF9568800 node0[+08]=0x0000000100000001 node0[+18]=0x0000055AF3FB3AF1
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x0000055AF97F0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC26CC3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x0000055AF82ACFC0 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x0000055AF9650760
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x0000055AF7A10000 node0[+08]=0x65735F0100000002 node0[+18]=0x0000055AF2EE8EC0
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2D8 count=4120 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x0000055AD17B4000 node0[+08]=0x65735F0100000013 node0[+18]=0x0000055AF35E75C0
[schema-probe]   map @ schema+0x300 count=102 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x0000055AF328E000 node0[+08]=0xFFFFFE000000003E node0[+18]=0x0000055AF8A63370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x0000055AFFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x0000055AF3017400 node0[+08]=0x0000055AF822ED40 node0[+18]=0x0000055AF822EC00
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000055A00000040 node0[+08]=0x0007000000000000 node0[+18]=0x001FFFFFFF9FFFFF
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x0000055AF678E200 node0[+08]=0x0000055AF822F300 node0[+18]=0x0000055AF822F360
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000055A00000013 node0[+08]=0x0000000000000000 node0[+18]=0x900D1700007FFCE6
[schema-probe]   map @ schema+0x400 count=19 elements=0x0000055AA82FFA00 node0[+08]=0x0000055AF822F340 node0[+18]=0x0000055AF822F380
[schema-probe] sane map candidates: 30
[verify] items count=2059 elems=0x0000055AF9570000
[verify]   items[0] key=0 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=0 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=0 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=0 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=0 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x0000055AF7A10000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x0000055AF7A10000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x0000055AF8F13C20 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x0000055AF8F14320 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x00000559FDB02FC0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC260E27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC26098540, setFloat=00007FFC26098750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x0000055AF3FEA3A0
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x0000055AF3FEA440
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x0000055AF3FEA4E0
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
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000055B234C5800
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000055AA8283400
[snap] pawn: vtable=0x00007FFCD7C73740 inClient=0 health=1370
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x00B2000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000055A8B448000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00B2000B -> 0x0000055B23C4B000
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=0000055B23C4B000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000055B23C4B000
[match] FOUND pawn=0x0000055B23C4B000 hp=100
[apply] tick pawn=0x0000055B23C4B000
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=0000055B23C4C770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000055B23C4B000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x0000055B23C4C770 vtable=0x00007FFC26C3E0D0 def=0 init=0 quality=-1 attrCount=650979816
[glove-diag] pawn=0000055B23C4B000 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4493 lastStage=0 stage5Count=292
[snap] stage histogram:
[snap]   stage  0: 933 frames
[snap]   stage  1: 292 frames
[snap]   stage  2: 292 frames
[snap]   stage  3: 292 frames
[snap]   stage  5: 292 frames
[snap]   stage  6: 292 frames
[snap]   stage  7: 292 frames
[snap]   stage  8: 292 frames
[snap]   stage 10: 292 frames
[snap]   stage 11: 321 frames
[snap]   stage 12: 903 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000055B234C5800
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000055AA8283400
[snap] pawn: vtable=0x00007FFCD7C73740 inClient=0 health=1370
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x00B2000B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000055A8B448000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00B2000B -> 0x0000055B23C4B000
[snap] ----------------------------------------
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B23C4B000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=0000055AA8283400 reapply=114 changed=0 def=24948 init=115 idHigh=0x726F482C
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000055AA8283400
[apply] tick pawn=0x0000055AA8283400
[glove-snapshot] ===== PAWN-EMBEDDED item=0000055AA8284B70 =====
[glove-snapshot] LOCAL size=779247938 data=54482C6E776F4465 alloc=1867009101
[glove-snapshot] LOCAL invalid vector; entries skipped
[glove-snapshot] NETWORKED size=1853321028 data=6D7568546C6C6F72 alloc=1920236386
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=0000055AA8283400 count=-674810048 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000055B1B576000
[apply] tick pawn=0x0000055B1B576000
[glove-snapshot] ===== PAWN-EMBEDDED item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000055B1B576000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=7258 lastStage=0 stage5Count=442
[snap] stage histogram:
[snap]   stage  0: 1493 frames
[snap]   stage  1: 528 frames
[snap]   stage  2: 528 frames
[snap]   stage  3: 524 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 442 frames
[snap]   stage  6: 442 frames
[snap]   stage  7: 442 frames
[snap]   stage  8: 442 frames
[snap]   stage 10: 442 frames
[snap]   stage 11: 479 frames
[snap]   stage 12: 1495 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000055B267A8600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000055AA8283400
[snap] pawn: vtable=0x00007FFCD7C73740 inClient=0 health=1370
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x007601A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000055A8B448000 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x007601A1 -> 0x0000055B1B576000
[snap] ----------------------------------------
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5EB16000
[pw] weapon=0x0000055B5EB16000 view=0x0000055B5EB172E0
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
[pw]   +0x12B0 = 0x015480EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFC26CC45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x0000055B5EB16000 def=61
[team] pawn=0x0000055B1B576000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[apply] enter (weapon=0x0000055B5EB16000 def=61 pk=1377)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000055B5EB172E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1377.000 initial=1377.000
[attr-entry] 1: def=7 value=73.000 initial=73.000
[attr-entry] 2: def=8 value=0.100895 initial=0.100895
[apply] world post-create: size=3 data=0000055B563BA380 alloc=11
[apply] world view 0x0000055B5EB172E0 painted (pk=1377)
[hud-find] START weapon=0x0000055B5EB16000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000000000000000
[hud-find] NO MATCH walked=0 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000055B5EB16000 hud=0000000000000000 def=61 pk=1377
[glove-diag] pawn=0000055B1B576000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[glove-model] stage=AFTER-BODYGROUP pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[attr-diag] item=0000055B1B577770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000055B1B577770 def=5030 pk=10037 size=3 data=0000055B563B9900 alloc=11
[glove-paintkit] pk=10037 result=0000055AF8F13C20 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000055B1B576000 reapply=0->1 changed=0->1
[glove-sequence] applied seq=1 pawn=0000055B1B576000 item=0000055B1B577770 team=3 def=5030 pk=10037
[glove] APPLIED def=5030 pk=10037 team=3
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=1 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5EB16000
[pw] weapon 0x0000055B5EB16000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000055B5EB16000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B563CB880
[hud-find] child[1]=0x0000055B1301AC80 owner=0x0000055B27232800 handle=0x4C80EB resolved=0x0000055B5F51C000
[hud-find] child[2]=0x0000055B1301B880 owner=0x0000055B120FEC00 handle=0x15480EC resolved=0x0000055B5EB16000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B120FEC00 after 3 nodes
[apply-cache] rebuilding weapon=0000055B5EB16000 hud=0000055B120FEC00 def=61 pk=1377
[glove-next-tick] seq=1 pawn=0000055B1B576000 item=0000055B1B577770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=3 data=0000055B563B9900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[glove-model] stage=AFTER-BODYGROUP pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[attr-diag] item=0000055B1B577770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000055B1B577770 def=5030 pk=10037 size=3 data=0000055B563BF400 alloc=11
[glove-paintkit] pk=10037 result=0000055AF8F13C20 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000055B1B576000 reapply=0->1 changed=1->2
[glove-sequence] applied seq=2 pawn=0000055B1B576000 item=0000055B1B577770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=2 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5EB16000
[pw] weapon 0x0000055B5EB16000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000055B5EB16000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B563C5880
[hud-find] child[1]=0x0000055B1301AC80 owner=0x0000055B27232800 handle=0x4C80EB resolved=0x0000055B5F51C000
[hud-find] child[2]=0x0000055B1301B880 owner=0x0000055B120FEC00 handle=0x15480EC resolved=0x0000055B5EB16000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B120FEC00 after 3 nodes
[apply-cache] rebuilding weapon=0000055B5EB16000 hud=0000055B120FEC00 def=61 pk=1377
[glove-next-tick] seq=2 pawn=0000055B1B576000 item=0000055B1B577770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=3 data=0000055B563BF400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[glove-model] stage=AFTER-BODYGROUP pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[attr-diag] item=0000055B1B577770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000055B1B577770 def=5030 pk=10037 size=3 data=0000055B563BC680 alloc=11
[glove-paintkit] pk=10037 result=0000055AF8F13C20 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000055B1B576000 reapply=0->1 changed=2->3
[glove-sequence] applied seq=3 pawn=0000055B1B576000 item=0000055B1B577770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=3 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5EB16000
[pw] weapon 0x0000055B5EB16000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000055B5EB16000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5B9D2880
[hud-find] child[1]=0x0000055B1301AC80 owner=0x0000055B27232800 handle=0x4C80EB resolved=0x0000055B5F51C000
[hud-find] child[2]=0x0000055B1301B880 owner=0x0000055B120FEC00 handle=0x15480EC resolved=0x0000055B5EB16000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B120FEC00 after 3 nodes
[apply-cache] rebuilding weapon=0000055B5EB16000 hud=0000055B120FEC00 def=61 pk=1377
[glove-next-tick] seq=3 pawn=0000055B1B576000 item=0000055B1B577770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=3 data=0000055B563BC680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[glove-model] stage=AFTER-BODYGROUP pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[attr-diag] item=0000055B1B577770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000055B1B577770 def=5030 pk=10037 size=3 data=0000055B563B9900 alloc=11
[glove-paintkit] pk=10037 result=0000055AF8F13C20 nameOk=1 name="sporty_purple"
[glove-flags] pawn=0000055B1B576000 reapply=0->1 changed=3->4
[glove-sequence] applied seq=4 pawn=0000055B1B576000 item=0000055B1B577770 team=3 def=5030 pk=10037
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=4 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5EB16000
[pw] weapon 0x0000055B5EB16000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000055B5EB16000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5BDD1880
[hud-find] child[1]=0x0000055B1301AC80 owner=0x0000055B27232800 handle=0x4C80EB resolved=0x0000055B5F51C000
[hud-find] child[2]=0x0000055B1301B880 owner=0x0000055B120FEC00 handle=0x15480EC resolved=0x0000055B5EB16000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B120FEC00 after 3 nodes
[apply-cache] rebuilding weapon=0000055B5EB16000 hud=0000055B120FEC00 def=61 pk=1377
[glove-next-tick] seq=4 pawn=0000055B1B576000 item=0000055B1B577770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=3 data=0000055B563B9900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10037.000000 initial=10037.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply] enter (weapon=0x0000055B5F51C000 def=515 pk=617)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000055B5F51D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=617.000 initial=617.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000055B563B2580 alloc=11
[apply] world view 0x0000055B5F51D2E0 painted (pk=617)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5BDD1880
[hud-find] child[1]=0x0000055B1301B880 owner=0x0000055B120FEC00 handle=0x15480EC resolved=0x0000055B5EB16000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000000000000000 def=515 pk=617
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=3 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E71C58
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=11951 lastStage=0 stage5Count=737
[snap] stage histogram:
[snap]   stage  0: 2512 frames
[snap]   stage  1: 823 frames
[snap]   stage  2: 823 frames
[snap]   stage  3: 819 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 737 frames
[snap]   stage  6: 737 frames
[snap]   stage  7: 737 frames
[snap]   stage  8: 737 frames
[snap]   stage 10: 737 frames
[snap]   stage 11: 797 frames
[snap]   stage 12: 2491 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000055B267A8600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000055AA8283400
[snap] pawn: vtable=0x00007FFCD7C73740 inClient=0 health=1370
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x007601A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000055A8B448000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x007601A1 -> 0x0000055B1B576000
[snap] ----------------------------------------
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5F51C000
[pw] weapon 0x0000055B5F51C000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[hud-find] START weapon=0x0000055B5F51C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0x5D154214
[hud-find] arms=0x0000055B1207C800
[hud-find] armsNode=0x0000055B1301A080
[hud-find] firstChild=0x0000055B5EFC7480
[hud-find] child[0]=0x0000055B5EFC7480 owner=0x0000055B270A5000 handle=0x4C80EB resolved=0x0000055B5F51C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B270A5000 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5F51C000 hud=0000055B270A5000 def=515 pk=617
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x0000055B5659C000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000055B5659D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=0000055B21A89100 alloc=11
[apply] world view 0x0000055B5659D2E0 painted (pk=38)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xEF634252
[hud-find] arms=0x0000055B5A1E6000
[hud-find] armsNode=0x0000055B1301B880
[hud-find] firstChild=0x0000055B1301C480
[hud-find] child[0]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[glove-diag] pawn=0000055B1B576000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-model-refresh] queued: team 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[glove-model] stage=AFTER-BODYGROUP pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[attr-diag] item=0000055B1B577770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000055B1B577770 def=5031 pk=10034 size=3 data=0000055B21A8EC00 alloc=11
[glove-paintkit] pk=10034 result=0000055AF8F13980 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=0000055B1B576000 reapply=0->1 changed=4->5
[glove-sequence] applied seq=5 pawn=0000055B1B576000 item=0000055B1B577770 team=2 def=5031 pk=10034
[glove] APPLIED def=5031 pk=10034 team=2
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[model] outer=0x0000055AA9E72758 inner=0x0000055ACF9F4000
[glove-model-refresh] candidate selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=0000055B1B576000 reapply=1 changed=5 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=5 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B1301C480
[hud-find] child[0]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[glove-next-tick] seq=5 pawn=0000055B1B576000 item=0000055B1B577770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=3 data=0000055B21A8EC00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[glove-model] stage=AFTER-BODYGROUP pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[attr-diag] item=0000055B1B577770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000055B1B577770 def=5031 pk=10034 size=3 data=0000055B21A8E500 alloc=11
[glove-paintkit] pk=10034 result=0000055AF8F13980 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=0000055B1B576000 reapply=0->1 changed=5->6
[glove-sequence] applied seq=6 pawn=0000055B1B576000 item=0000055B1B577770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=6 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5AB80880
[hud-find] child[1]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 2 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[glove-next-tick] seq=6 pawn=0000055B1B576000 item=0000055B1B577770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=3 data=0000055B21A8E500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[glove-model] stage=AFTER-BODYGROUP pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[attr-diag] item=0000055B1B577770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000055B1B577770 def=5031 pk=10034 size=3 data=0000055B21A8A980 alloc=11
[glove-paintkit] pk=10034 result=0000055AF8F13980 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=0000055B1B576000 reapply=0->1 changed=6->7
[glove-sequence] applied seq=7 pawn=0000055B1B576000 item=0000055B1B577770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=7 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B1301B880
[hud-find] child[1]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 2 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[glove-next-tick] seq=7 pawn=0000055B1B576000 item=0000055B1B577770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=3 data=0000055B21A8A980 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[glove-model] stage=AFTER-BODYGROUP pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[attr-diag] item=0000055B1B577770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10034.000 initial=10034.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=0000055B1B577770 def=5031 pk=10034 size=3 data=0000055B21A8EC00 alloc=11
[glove-paintkit] pk=10034 result=0000055AF8F13980 nameOk=1 name="specialist_emerald_web"
[glove-flags] pawn=0000055B1B576000 reapply=0->1 changed=7->8
[glove-sequence] applied seq=8 pawn=0000055B1B576000 item=0000055B1B577770 team=2 def=5031 pk=10034
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758
[glove-observe] pawn=0000055B1B576000 reapply=0 changed=8 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5F2B8480
[hud-find] child[1]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 2 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[glove-next-tick] seq=8 pawn=0000055B1B576000 item=0000055B1B577770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=0000055B1B577770 =====
[glove-snapshot] LOCAL size=3 data=0000055B21A8EC00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10034.000000 initial=10034.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5F2B8480
[hud-find] child[1]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 2 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5F2B8480
[hud-find] child[1]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 2 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5F2B8480
[hud-find] child[1]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 2 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000055B5659E000 runtimeOffset=0x380 read=1 value=609768950 target=3412259219
[subclass-diag] BEFORE weapon=0000055B5659E000 offset=0x38C read=1 value=609768950 target=3412259219
[knife] SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[subclass-diag] WRITE success=1 target=3412259219
[subclass-diag] UPDATE success=1 READBACK read=1 value=3412259219
[apply] enter (weapon=0x0000055B5659E000 def=512 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000055B5659F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000055B21A87F80 alloc=11
[apply] world view 0x0000055B5659F2E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5F2B8480
[hud-find] child[1]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000000000000000 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=0000055B1B576000 team=2 scene=0000055B271DDC80 skeleton=0000055B271DDC80 modelState=0000055B271DDDC0 rawHandle=0x55AA9E72758

=== SNAPSHOT ===
[snap] fsnCount=16634 lastStage=0 stage5Count=1042
[snap] stage histogram:
[snap]   stage  0: 3481 frames
[snap]   stage  1: 1128 frames
[snap]   stage  2: 1128 frames
[snap]   stage  3: 1124 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1042 frames
[snap]   stage  6: 1042 frames
[snap]   stage  7: 1042 frames
[snap]   stage  8: 1042 frames
[snap]   stage 10: 1042 frames
[snap]   stage 11: 1117 frames
[snap]   stage 12: 3445 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000055B267A8600
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x0000055AA8283400
[snap] pawn: vtable=0x00007FFCD7C73740 inClient=0 health=1370
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x007601A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x0000055A8B448000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x007601A1 -> 0x0000055B1B576000
[snap] ----------------------------------------
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000055B5659E000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000055B5659E000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000055B5659E000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000055B5659E000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000055B5659E000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000055B5659E000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000055B5659E000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000055B5659E000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[subclass-diag] BEFORE weapon=0000055B5659E000 runtimeOffset=0x380 read=1 value=3412259219 target=3412259219
[subclass-diag] BEFORE weapon=0000055B5659E000 offset=0x38C read=1 value=3412259219 target=3412259219
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659C000
[pw] weapon 0x0000055B5659C000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000055B5659C000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000
[hud-find] child[2]=0x0000055B1301C480 owner=0x0000055B13259400 handle=0x15A00F0 resolved=0x0000055B5659C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B13259400 after 3 nodes
[apply-cache] rebuilding weapon=0000055B5659C000 hud=0000055B13259400 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000055B1B576000
[apply] active 0x0000055B5659E000
[pw] weapon 0x0000055B5659E000 def=512
[pw] knife: applying Marble Fade (pk=413 target def=512)
[hud-find] START weapon=0x0000055B5659E000 pawn=0x0000055B1B576000
[hud-find] armsHandle=0xE85FC25B
[hud-find] arms=0x0000055B26DAE000
[hud-find] armsNode=0x0000055B5B9DA080
[hud-find] firstChild=0x0000055B5BDDD880
[hud-find] child[0]=0x0000055B5BDDD880 owner=0x0000055B271EC800 handle=0x1F680EF resolved=0x0000055B5659E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000055B271EC800 after 1 nodes
[apply-cache] rebuilding weapon=0000055B5659E000 hud=0000055B271EC800 def=512 pk=413
[mesh-diag] WORLD entity=0000055B5659E000 mask=2
[knife] HUD SetModel: weapons/models/knife/knife_falchion_advanced/weapon_knife_falchion_advanced.vmdl
[mesh-diag] HUD entity=0000055B271EC800 mask=2
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[