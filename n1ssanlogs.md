[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 01:09:40
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC259C924B -> rva 0x271EB28 (val=00000262C1449000)
[auto-off] dwLocalPlayerController      hit 0x00007FFC258E55D0 -> rva 0x25413F8 (val=000002635165DE00)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC251015D5 -> rva 0x2738160 (val=00000262DE2A0A00)
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
[resolve] MemAlloc                       @ 0x00007FFCE6DFDD30
[resolve] MemFree                        @ 0x00007FFCE6DFDD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFC276CEB28 -> 0x00000262C1449000
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC2613E2A5 -> ptrAddr 0x00007FFC275A83E0 -> es 0x0000026233B03DB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x0000026233B03DB0
[schema-probe] CEconItemSchema* = 0x00000262C17EB000
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x000002632F660000 node0[+08]=0x0000026318DBB800 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x00000262C1C7C1C0 node0[+08]=0xFFFFFFFF00000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x000002632F680000 node0[+08]=0x0000000100000001 node0[+18]=0x0000026318DBB800
[schema-probe]   map @ schema+0x138 count=737 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x0000026310D6E000 node0[+08]=0x000002632E3B6580 node0[+18]=0x000002632E3B66C0
[schema-probe]   map @ schema+0x170 count=12 elements=0x00000263184EF800 node0[+08]=0x0000000100000001 node0[+18]=0x000002632F6D2200
[schema-probe]   map @ schema+0x180 count=3 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x0000026318631000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC26CC3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x0000026318528000 node0[+08]=0x3F80000100000128 node0[+18]=0x000002632DE25941
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x000002632F753C00 node0[+08]=0x0000000100000001 node0[+18]=0x000002632DFA6941
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x000002632F8E0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC26CC3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x000002632E3AC2A0 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x000002632F73EF20
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x0000026319CC0000 node0[+08]=0x65735F0100000002 node0[+18]=0x000002632D1E9720
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x000002631854C000 node0[+08]=0x6972630100000013 node0[+18]=0x000002632D735DC0
[schema-probe]   map @ schema+0x300 count=102 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x0000026318A28000 node0[+08]=0x000000000000003E node0[+18]=0x000002632EB23370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x00000262FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x000002632D297500 node0[+08]=0x000002632E31CD00 node0[+18]=0x000002632E31CDC0
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000026200000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x00000263184EC800 node0[+08]=0x000002632E31C800 node0[+18]=0x000002632E31C7A0
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000026200000013 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x400 count=19 elements=0x00000262DE3FC800 node0[+08]=0x000002632E31C760 node0[+18]=0x000002632E31C780
[schema-probe] sane map candidates: 28
[verify] items count=2059 elems=0x000002632F660000
[verify]   items[0] key=0 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=0 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=0 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=0 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=0 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x0000026319CC0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x0000026319CC0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x000002632EFF3D20 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x000002632EFF4420 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x0000026233B03DB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC260E27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC26098540, setFloat=00007FFC26098750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000002632E3B6800
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000002632E3B68A0
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000002632E3B6940
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
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002635165DE00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000262DE2A0A00
[snap] pawn: vtable=0x00007FFCD7AE3740 inClient=0 health=611
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x004C800B (idx=11)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x00000262C1449000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x004C800B -> 0x0000026351E79000
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=0000026351E79000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000026351E79000
[match] FOUND pawn=0x0000026351E79000 hp=100
[apply] tick pawn=0x0000026351E79000
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=0000026351E7A770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=0000026351E79000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x0000026351E7A770 vtable=0x00007FFC26C3E0D0 def=0 init=0 quality=-1 attrCount=650979816
[glove-diag] pawn=0000026351E79000 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000026351E79000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4180 lastStage=1 stage5Count=251
[snap] stage histogram:
[snap]   stage  0: 960 frames
[snap]   stage  1: 252 frames
[snap]   stage  2: 251 frames
[snap]   stage  3: 251 frames
[snap]   stage  5: 251 frames
[snap]   stage  6: 251 frames
[snap]   stage  7: 251 frames
[snap]   stage  8: 251 frames
[snap]   stage 10: 251 frames
[snap]   stage 11: 265 frames
[snap]   stage 12: 946 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000262DE2A0A00
[snap] pawn: vtable=0x00007FFCD7AE3740 inClient=0 health=611
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x00000262C1449000 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=00000262DE2A0A00 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 00000262DE2A0A00
[apply] tick pawn=0x00000262DE2A0A00
[apply] ws null
[glove-snapshot] ===== PAWN-EMBEDDED item=00000262DE2A2170 =====
[glove-snapshot] LOCAL size=-65519 data=0000000000000000 alloc=0
[glove-snapshot] LOCAL invalid vector; entries skipped
[glove-snapshot] NETWORKED size=0 data=CE6E6B2800000000 alloc=-831624408
[wearable-dump] pawn=00000262DE2A0A00 count=-676448448 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove-observe] pawn=000002635325A000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000002635325A000
[apply] tick pawn=0x000002635325A000
[glove-snapshot] ===== PAWN-EMBEDDED item=000002635325B770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000002635325A000 count=650371672 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon=0x000002639B248000 view=0x000002639B2492E0
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
[pw]   +0x12B0 = 0x00B380EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFC26CC45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000002639B248000 def=32
[team] pawn=0x000002635325A000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] NO TARGET def=32 team=CT
[glove-diag] pawn=000002635325A000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=0000026385C3DB00 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=1 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[glove] APPLIED def=5030 pk=1405 team=3
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-observe] pawn=000002635325A000 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=1 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=0000026385C3DB00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C6500 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=2 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=2 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C6500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C1800 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=3 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000002639B5BC000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002639B5BD2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=00000263845C7300 alloc=11
[apply] world view 0x000002639B5BD2E0 painted (pk=417)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x00000263852BC880
[hud-find] child[1]=0x000002638B2F4C80 owner=0x000002638A21E400 handle=0xB380EC resolved=0x000002639B248000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002639B5BC000 hud=0000000000000000 def=525 pk=417
[glove-next-tick] seq=3 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C1800 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C2980 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=4 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA28880
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=4 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C2980 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C6180 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=5 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258

=== SNAPSHOT ===
[snap] fsnCount=8276 lastStage=0 stage5Count=498
[snap] stage histogram:
[snap]   stage  0: 1729 frames
[snap]   stage  1: 596 frames
[snap]   stage  2: 596 frames
[snap]   stage  3: 592 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 498 frames
[snap]   stage  6: 498 frames
[snap]   stage  7: 498 frames
[snap]   stage  8: 498 frames
[snap]   stage 10: 498 frames
[snap]   stage 11: 541 frames
[snap]   stage 12: 1731 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002633E495E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000262DE2A0A00
[snap] pawn: vtable=0x00007FFCD7AE3740 inClient=0 health=611
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x017701A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x00000262C1449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017701A1 -> 0x000002635325A000
[snap] ----------------------------------------
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x0000026384B2CC80
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=5 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C6180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C7680 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=6 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=6 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C7680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845CAB00 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=7 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA26480
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=7 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845CAB00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C2980 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=8 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002639AE71880
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=8 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C2980 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C0A00 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=9 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x0000026358B03480
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=9 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C0A00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x0000026358B03480
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x0000026358B03480
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x0000026358B03480
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[glove-trigger] active=1 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C2D00 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=10 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA23480
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=10 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C2D00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5030 desiredDef=5030
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C8800 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=11 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002639AF8C480
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=11 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C8800 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845CB200 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=12 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x00000263858CC480
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=12 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845CB200 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1405.000 initial=1405.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5030 pk=1405 size=3 data=00000263845C1F00 alloc=11
[glove-paintkit] pk=1405 result=000002632F037240 nameOk=1 name="glove_sport_beadwork_diamonds_purple"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=13 pawn=000002635325A000 item=000002635325B770 team=3 def=5030 pk=1405
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=3 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94E258
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-cache] rebuilding weapon=000002639B5BC000 hud=000002638B369C00 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=13 pawn=000002635325A000 item=000002635325B770 def=5030 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=00000263845C1F00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=1405.000000 initial=1405.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=12884 lastStage=12 stage5Count=799
[snap] stage histogram:
[snap]   stage  0: 2678 frames
[snap]   stage  1: 897 frames
[snap]   stage  2: 897 frames
[snap]   stage  3: 893 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 799 frames
[snap]   stage  6: 799 frames
[snap]   stage  7: 799 frames
[snap]   stage  8: 799 frames
[snap]   stage 10: 799 frames
[snap]   stage 11: 862 frames
[snap]   stage 12: 2661 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002633E495E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000262DE2A0A00
[snap] pawn: vtable=0x00007FFCD7AE3740 inClient=0 health=611
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x017701A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x00000262C1449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017701A1 -> 0x000002635325A000
[snap] ----------------------------------------
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B248000
[pw] weapon 0x000002639B248000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x000002639B5BC000
[pw] weapon 0x000002639B5BC000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002639B5BC000 pawn=0x000002635325A000
[hud-find] armsHandle=0xEB37C214
[hud-find] arms=0x000002638A19D800
[hud-find] armsNode=0x000002638B2F5880
[hud-find] firstChild=0x000002633FA24080
[hud-find] child[1]=0x0000026384EC5C80 owner=0x000002638B369C00 handle=0xE880EB resolved=0x000002639B5BC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002638B369C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x0000026384E66000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000026384E672E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=0000026390573E00 alloc=11
[apply] world view 0x0000026384E672E0 painted (pk=38)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xF3CB4264
[hud-find] arms=0x000002638421A000
[hud-find] armsNode=0x000002639A2B2C80
[hud-find] firstChild=0x0000026384EBF080
[hud-find] child[0]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 1 nodes
[apply-cache] rebuilding weapon=0000026384E66000 hud=0000026384E4CC00 def=4 pk=38
[glove-diag] pawn=000002635325A000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-kit] sold; model refresh scheduled in 200 ms
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5030 desiredDef=5031
[glove-flags] pawn=000002635325A000 reapply=0->1
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[glove-observe] pawn=000002635325A000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xF3CB4264
[hud-find] arms=0x000002638421A000
[hud-find] armsNode=0x000002639A2B2C80
[hud-find] firstChild=0x0000026384EBF080
[hud-find] child[0]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 1 nodes
[glove-kit] delayed model refresh triggered
[glove-flags] pawn=000002635325A000 reapply=0->1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[model] outer=0x00000262DF94ED58 inner=0x0000026310F09E00
[glove-model-refresh] schema model selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=000002635325A000 reapply=1 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000002635325A000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384EBF080
[hud-find] child[0]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 1 nodes
[apply-cache] rebuilding weapon=0000026384E66000 hud=0000026384E4CC00 def=4 pk=38
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5031 pk=10033 size=3 data=0000026390578400 alloc=11
[glove-paintkit] pk=10033 result=000002632EFF39A0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=14 pawn=000002635325A000 item=000002635325B770 team=2 def=5031 pk=10033
[glove] APPLIED def=5031 pk=10033 team=2
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[glove-observe] pawn=000002635325A000 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=59
[pw] knife: applying Slaughter (pk=59 target def=523)
[knife] SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply] enter (weapon=0x0000026384E64000 def=523 pk=59)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000026384E652E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=59.000 initial=59.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=0000026390579580 alloc=11
[apply] world view 0x0000026384E652E0 painted (pk=59)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x00000263858CDC80
[hud-find] child[1]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=0000026384E64000 hud=0000000000000000 def=523 pk=59
[glove-next-tick] seq=14 pawn=000002635325A000 item=000002635325B770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=0000026390578400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5031 pk=10033 size=3 data=0000026390575680 alloc=11
[glove-paintkit] pk=10033 result=000002632EFF39A0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=15 pawn=000002635325A000 item=000002635325B770 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384CA6080
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-cache] rebuilding weapon=0000026384E64000 hud=0000026384AC3C00 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=15 pawn=000002635325A000 item=000002635325B770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=0000026390575680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5031 pk=10033 size=3 data=000002639057D480 alloc=11
[glove-paintkit] pk=10033 result=000002632EFF39A0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=16 pawn=000002635325A000 item=000002635325B770 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x00000263901B7C80
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-cache] rebuilding weapon=0000026384E64000 hud=0000026384AC3C00 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=16 pawn=000002635325A000 item=000002635325B770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=000002639057D480 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[glove-model] stage=AFTER-BODYGROUP pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[attr-diag] item=000002635325B770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10033.000 initial=10033.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002635325B770 def=5031 pk=10033 size=3 data=0000026390578400 alloc=11
[glove-paintkit] pk=10033 result=000002632EFF39A0 nameOk=1 name="specialist_kimono_diamonds_red"
[glove-flags] pawn=000002635325A000 reapply=0->1
[glove-sequence] applied seq=17 pawn=000002635325A000 item=000002635325B770 team=2 def=5031 pk=10033
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002635325A000 team=2 scene=000002633E7F7080 skeleton=000002633E7F7080 modelState=000002633E7F71C0 rawHandle=0x262DF94ED58
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-cache] rebuilding weapon=0000026384E64000 hud=0000026384AC3C00 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=17 pawn=000002635325A000 item=000002635325B770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002635325B770 =====
[glove-snapshot] LOCAL size=3 data=0000026390578400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10033.000000 initial=10033.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=17662 lastStage=0 stage5Count=1108
[snap] stage histogram:
[snap]   stage  0: 3677 frames
[snap]   stage  1: 1206 frames
[snap]   stage  2: 1206 frames
[snap]   stage  3: 1202 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1108 frames
[snap]   stage  6: 1108 frames
[snap]   stage  7: 1108 frames
[snap]   stage  8: 1108 frames
[snap]   stage 10: 1108 frames
[snap]   stage 11: 1182 frames
[snap]   stage 12: 3648 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002633E495E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000262DE2A0A00
[snap] pawn: vtable=0x00007FFCD7AE3740 inClient=0 health=611
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x017701A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x00000262C1449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017701A1 -> 0x000002635325A000
[snap] ----------------------------------------
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-cache] rebuilding weapon=0000026384E66000 hud=0000026384E4CC00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=23100 lastStage=0 stage5Count=1428
[snap] stage histogram:
[snap]   stage  0: 4956 frames
[snap]   stage  1: 1526 frames
[snap]   stage  2: 1526 frames
[snap]   stage  3: 1522 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1428 frames
[snap]   stage  6: 1428 frames
[snap]   stage  7: 1428 frames
[snap]   stage  8: 1428 frames
[snap]   stage 10: 1428 frames
[snap]   stage 11: 1502 frames
[snap]   stage 12: 4927 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002633E495E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000262DE2A0A00
[snap] pawn: vtable=0x00007FFCD7AE3740 inClient=0 health=611
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x017701A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x00000262C1449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017701A1 -> 0x000002635325A000
[snap] ----------------------------------------
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=28573 lastStage=0 stage5Count=1747
[snap] stage histogram:
[snap]   stage  0: 6257 frames
[snap]   stage  1: 1845 frames
[snap]   stage  2: 1845 frames
[snap]   stage  3: 1841 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1747 frames
[snap]   stage  6: 1747 frames
[snap]   stage  7: 1747 frames
[snap]   stage  8: 1747 frames
[snap]   stage 10: 1747 frames
[snap]   stage 11: 1822 frames
[snap]   stage 12: 6227 frames
[snap] dwLocalPlayerController @ 0x00007FFC274F13F8 -> 0x000002633E495E00
[snap] dwLocalPlayerPawn       @ 0x00007FFC276E8160 -> 0x00000262DE2A0A00
[snap] pawn: vtable=0x00007FFCD7AE3740 inClient=0 health=611
[snap] ctrl: vtable=0x00007FFC26BC0648 inClient=1 m_hPlayerPawn@0x92C = 0x017701A1 (idx=417)
[snap] entitySystem @ 0x00007FFC276CEB28 = 0x00000262C1449000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x017701A1 -> 0x000002635325A000
[snap] ----------------------------------------
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E66000
[pw] weapon 0x0000026384E66000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x0000026384E66000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000
[hud-find] child[2]=0x0000026384EBF080 owner=0x0000026384E4CC00 handle=0x19E00F0 resolved=0x0000026384E66000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384E4CC00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002635325A000
[apply] active 0x0000026384E64000
[pw] weapon 0x0000026384E64000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x0000026384E64000 pawn=0x000002635325A000
[hud-find] armsHandle=0xD9DAC26B
[hud-find] arms=0x000002633EDCD000
[hud-find] armsNode=0x000002633E7F4C80
[hud-find] firstChild=0x0000026384ECD480
[hud-find] child[1]=0x00000263858C4C80 owner=0x0000026384AC3C00 handle=0x15A80EF resolved=0x0000026384E64000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000026384AC3C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[