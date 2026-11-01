[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 10:32:57
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FF98948924B -> rva 0x271EB28 (val=000002A7DF45E000)
[auto-off] dwLocalPlayerController      hit 0x00007FF9893A55D0 -> rva 0x25413F8 (val=000002A86D345400)
[auto-off] dwLocalPlayerPawn            hit 0x00007FF988BC15D5 -> rva 0x2738160 (val=000002A7DF9E0000)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FF98B18EB28
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FF98AFB13F8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FF98B1A8160
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
[resolve] InvalidateDescription          @ 0x00007FF989C10A20
[resolve] BuildModernSkin                @ 0x00007FF9898B53D0
[resolve] SetMeshGroupMask               @ 0x00007FF989535910
[resolve] RegenerateSkins                @ 0x00007FF98929B330
[resolve] ReleaseCompositeMaterials      @ 0x00007FF989F5BB70
[resolve] GloveCreatePaintKit            @ 0x00007FF989C00AA0
[resolve] AgentSetModel                  @ 0x00007FF9893D5B10
[resolve] KnifeUpdateSubclass            @ 0x00007FF988C78FC0
[resolve] GloveSetBodyGroup              @ 0x00007FF9893D4A30
[resolve] MemAlloc                       @ 0x00007FF9A967DD30
[resolve] MemFree                        @ 0x00007FF9A967DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FF98B18EB28 -> 0x000002A7DF45E000
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FF989BFE2A5 -> ptrAddr 0x00007FF98B0683E0 -> es 0x000002A751B32F40
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x000002A751B32F40
[schema-probe] CEconItemSchema* = 0x000002A7DF739E00
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x000002A8496E0000 node0[+08]=0x000002A842D3C800 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x000002A7DFBCC1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x000002A849700000 node0[+08]=0x0000000100000001 node0[+18]=0x000002A842D3C800
[schema-probe]   map @ schema+0x138 count=737 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x000002A842E0D000 node0[+08]=0x000002A847EFDE80 node0[+18]=0x000002A847EFDFC0
[schema-probe]   map @ schema+0x160 count=512 elements=0x000002A7DF958000 node0[+08]=0x000002A7FC315500 node0[+18]=0x000002A7FC314C40
[schema-probe]   map @ schema+0x170 count=12 elements=0x000002A849811200 node0[+08]=0x0000000100000001 node0[+18]=0x000002A849752A00
[schema-probe]   map @ schema+0x180 count=3 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x000002A84286F000 node0[+08]=0x0000020000000002 node0[+18]=0x00007FF98A783B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x000002A83F954000 node0[+08]=0x0000000100000128 node0[+18]=0x000002A847ED2121
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x000002A8497F3000 node0[+08]=0x0000000100000001 node0[+18]=0x000002A847F462A1
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x000002A849970000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FF98A783C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x000002A84846EF90 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x000002A8497DB400
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x000002A8468D0000 node0[+08]=0x65735F0100000002 node0[+18]=0x000002A8471C90E0
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x000002A83F930000 node0[+08]=0x65735F0100000013 node0[+18]=0x000002A8477A1540
[schema-probe]   map @ schema+0x300 count=102 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x000002A84284E000 node0[+08]=0x000002000000003E node0[+18]=0x000002A848BF3370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x000002A7FFFFFFFF node0[+08]=0x0000000000000300 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x000002A8472CA000 node0[+08]=0x000002A8484194C0 node0[+18]=0x000002A848419580
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x000002A700000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x000002A8427EEE00 node0[+08]=0x000002A848419980 node0[+18]=0x000002A8484199E0
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x000002A700000013 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x400 count=19 elements=0x000002A7FC2FFA00 node0[+08]=0x000002A8484199C0 node0[+18]=0x000002A848419A00
[schema-probe] sane map candidates: 29
[verify] items count=2059 elems=0x000002A8496E0000
[verify]   items[0] key=34668544 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=599785472 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=273 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=4093466314 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=671088896 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x000002A8468D0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x000002A8468D0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x000002A8490836A0 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x000002A849083DA0 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x000002A751B32F40 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FF989BA27C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FF989B58540, setFloat=00007FF989B58750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000002A847EFE100
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000002A847EFE1A0
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000002A847EFE240
[plan-a] inject: created=20 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FF989289DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FF98AFD35A0 vtable=0x00007FF98A6D7200 fn=0x00007FF9895DEE60 slot=36
[fsn] hooked (vtable overwrite)
[ready] v9.0.3 split; targets=20
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FF98AFB13F8 -> 0x000002A86D345400
[snap] dwLocalPlayerPawn       @ 0x00007FF98B1A8160 -> 0x000002A7DF9E0000
[snap] pawn: vtable=0x00007FF994FA3740 inClient=0 health=680
[snap] ctrl: vtable=0x00007FF98A680648 inClient=1 m_hPlayerPawn@0x92C = 0x016F800B (idx=11)
[snap] entitySystem @ 0x00007FF98B18EB28 = 0x000002A7DF45E000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x016F800B -> 0x000002A86DB5B800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000002A86DB5B800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000002A86DB5B800
[match] FOUND pawn=0x000002A86DB5B800 hp=100
[apply] tick pawn=0x000002A86DB5B800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-snapshot] ===== PAWN-EMBEDDED item=000002A86DB5CF70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000002A86DB5B800 vector=000002A86DB5CA68 data=0000000000000000 count=0
[wearable-dump] no wearables
[glove] first item=0x000002A86DB5CF70 vtable=0x00007FF98A6FE0D0 def=0 init=0 quality=-1 attrCount=2323196392
[glove-diag] pawn=000002A86DB5B800 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A86DB5B800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=3382 lastStage=1 stage5Count=205
[snap] stage histogram:
[snap]   stage  0: 768 frames
[snap]   stage  1: 206 frames
[snap]   stage  2: 205 frames
[snap]   stage  3: 205 frames
[snap]   stage  5: 205 frames
[snap]   stage  6: 205 frames
[snap]   stage  7: 205 frames
[snap]   stage  8: 205 frames
[snap]   stage 10: 205 frames
[snap]   stage 11: 217 frames
[snap]   stage 12: 756 frames
[snap] dwLocalPlayerController @ 0x00007FF98AFB13F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FF98B1A8160 -> 0x000002A7DF9E0000
[snap] pawn: vtable=0x00007FF994FA3740 inClient=0 health=680
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FF98B18EB28 = 0x000002A7DF45E000 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=000002A7DF9E0000 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000002A7DF9E0000
[apply] tick pawn=0x000002A7DF9E0000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-snapshot] ===== PAWN-EMBEDDED item=000002A870A92770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000002A870A91000 vector=000002A870A92268 data=0000000000000000 count=0
[wearable-dump] no wearables
[glove-observe] pawn=000002A870A91000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000002A870A91000
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-diag] pawn=000002A870A91000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A89BFBCC00 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=1 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove] APPLIED def=5033 pk=10053 team=3
[glove-arms] invalid handle=0xFFFFFFFF
[glove-observe] pawn=000002A870A91000 reapply=0 changed=0 def=5033 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A871534000
[pw] weapon=0x000002A871534000 view=0x000002A8715352E0
[pw]   view+0x00 = 0x8A7845A0
[pw]   view+0x04 = 0x00007FF9
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
[pw]   +0x1290 = 0x00007FF98A784740
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x01EF80EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FF98A7845A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000002A871534000 def=61
[team] pawn=0x000002A870A91000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000002A871534000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002A8715352E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=000002A88F164C80 alloc=11
[apply] world view 0x000002A8715352E0 painted (pk=1173)
[hud-find] START weapon=0x000002A871534000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x0000000000000000
[hud-find] NO MATCH walked=0 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002A871534000 hud=0000000000000000 def=61 pk=1173
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-next-tick] seq=1 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A89BFBCC00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F164580 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=2 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=2 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F164580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F169D00 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=3 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053

=== SNAPSHOT ===
[snap] fsnCount=7002 lastStage=11 stage5Count=420
[snap] stage histogram:
[snap]   stage  0: 1439 frames
[snap]   stage  1: 520 frames
[snap]   stage  2: 520 frames
[snap]   stage  3: 516 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 420 frames
[snap]   stage  6: 420 frames
[snap]   stage  7: 420 frames
[snap]   stage  8: 420 frames
[snap]   stage 10: 420 frames
[snap]   stage 11: 456 frames
[snap]   stage 12: 1450 frames
[snap] dwLocalPlayerController @ 0x00007FF98AFB13F8 -> 0x000002A85B5F4000
[snap] dwLocalPlayerPawn       @ 0x00007FF98B1A8160 -> 0x000002A7DF9E0000
[snap] pawn: vtable=0x00007FF994FA3740 inClient=0 health=680
[snap] ctrl: vtable=0x00007FF98A680648 inClient=1 m_hPlayerPawn@0x92C = 0x012B81A1 (idx=417)
[snap] entitySystem @ 0x00007FF98B18EB28 = 0x000002A7DF45E000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012B81A1 -> 0x000002A870A91000
[snap] ----------------------------------------
[glove-next-tick] seq=3 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F169D00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F166880 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=4 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A871534000
[pw] weapon 0x000002A871534000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A871534000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A845227880
[hud-find] child[0]=0x000002A845227880 owner=0x000002A845373800 handle=0xA300EB resolved=0x000002A877588000
[hud-find] child[1]=0x000002A845228480 owner=0x000002A845374C00 handle=0x1EF80EC resolved=0x000002A871534000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A845374C00 after 2 nodes
[apply-cache] rebuilding weapon=000002A871534000 hud=000002A845374C00 def=61 pk=1173
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-next-tick] seq=4 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F166880 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F16CA80 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=5 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=5 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16CA80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F160300 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=6 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=6 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F160300 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F16CA80 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=7 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=7 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16CA80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F166880 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=8 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=8 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F166880 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A871534000
[pw] weapon 0x000002A871534000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A871534000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A845227880
[hud-find] child[0]=0x000002A845227880 owner=0x000002A845373800 handle=0xA300EB resolved=0x000002A877588000
[hud-find] child[1]=0x000002A845228480 owner=0x000002A845374C00 handle=0x1EF80EC resolved=0x000002A871534000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A845374C00 after 2 nodes
[apply-cache] rebuilding weapon=000002A871534000 hud=000002A845374C00 def=61 pk=1173
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A871534000
[pw] weapon 0x000002A871534000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A871534000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A89A47F480
[hud-find] child[1]=0x000002A845227880 owner=0x000002A845373800 handle=0xA300EB resolved=0x000002A877588000
[hud-find] child[2]=0x000002A845228480 owner=0x000002A845374C00 handle=0x1EF80EC resolved=0x000002A871534000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A845374C00 after 3 nodes
[apply-cache] rebuilding weapon=000002A871534000 hud=000002A845374C00 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A871534000
[pw] weapon 0x000002A871534000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A871534000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A89A47F480
[hud-find] child[1]=0x000002A845227880 owner=0x000002A845373800 handle=0xA300EB resolved=0x000002A877588000
[hud-find] child[2]=0x000002A845228480 owner=0x000002A845374C00 handle=0x1EF80EC resolved=0x000002A871534000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A845374C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F164580 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=9 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=9 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F164580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F165380 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=10 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=10 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F165380 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F16D180 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=11 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=11 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16D180 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F16A080 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=12 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=12 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16A080 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A871534000
[pw] weapon 0x000002A871534000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A871534000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A891FFE480
[hud-find] child[1]=0x000002A845227880 owner=0x000002A845373800 handle=0xA300EB resolved=0x000002A877588000
[hud-find] child[2]=0x000002A845228480 owner=0x000002A845374C00 handle=0x1EF80EC resolved=0x000002A871534000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A845374C00 after 3 nodes
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A871534000
[pw] weapon 0x000002A871534000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A871534000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A891FFE480
[hud-find] child[1]=0x000002A845227880 owner=0x000002A845373800 handle=0xA300EB resolved=0x000002A877588000
[hud-find] child[2]=0x000002A845228480 owner=0x000002A845374C00 handle=0x1EF80EC resolved=0x000002A871534000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A845374C00 after 3 nodes
[apply-cache] rebuilding weapon=000002A871534000 hud=000002A845374C00 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000002A877588000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002A8775892E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002A88F165700 alloc=11
[apply] world view 0x000002A8775892E0 painted (pk=417)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A891FFE480
[hud-find] child[1]=0x000002A845228480 owner=0x000002A845374C00 handle=0x1EF80EC resolved=0x000002A871534000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002A877588000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A891A2D880
[hud-find] child[0]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 1 nodes
[apply-cache] rebuilding weapon=000002A877588000 hud=000002A88E2B6400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A891A2D880
[hud-find] child[0]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A891A2D880
[hud-find] child[0]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A891A2D880
[hud-find] child[0]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F16FB80 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=13 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=13 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16FB80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F16F100 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=14 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=14 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16F100 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F160300 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=15 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=15 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F160300 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F163E80 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=16 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=16 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F163E80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A891A2D880
[hud-find] child[0]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 1 nodes
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-cache] rebuilding weapon=000002A877588000 hud=000002A88E2B6400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=11571 lastStage=0 stage5Count=718
[snap] stage histogram:
[snap]   stage  0: 2383 frames
[snap]   stage  1: 818 frames
[snap]   stage  2: 818 frames
[snap]   stage  3: 814 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 718 frames
[snap]   stage  6: 718 frames
[snap]   stage  7: 718 frames
[snap]   stage  8: 718 frames
[snap]   stage 10: 718 frames
[snap]   stage 11: 778 frames
[snap]   stage 12: 2369 frames
[snap] dwLocalPlayerController @ 0x00007FF98AFB13F8 -> 0x000002A85B5F4000
[snap] dwLocalPlayerPawn       @ 0x00007FF98B1A8160 -> 0x000002A7DF9E0000
[snap] pawn: vtable=0x00007FF994FA3740 inClient=0 health=680
[snap] ctrl: vtable=0x00007FF98A680648 inClient=1 m_hPlayerPawn@0x92C = 0x012B81A1 (idx=417)
[snap] entitySystem @ 0x00007FF98B18EB28 = 0x000002A7DF45E000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012B81A1 -> 0x000002A870A91000
[snap] ----------------------------------------
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A877588000
[pw] weapon 0x000002A877588000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A877588000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x2A49C214
[hud-find] arms=0x000002A8453A0000
[hud-find] armsNode=0x000002A845226C80
[hud-find] firstChild=0x000002A88ECB9480
[hud-find] child[1]=0x000002A891A2D880 owner=0x000002A88E2B6400 handle=0xA300EB resolved=0x000002A877588000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88E2B6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-diag] pawn=000002A870A91000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-kit] sold; model refresh scheduled in 200 ms
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5033 desiredDef=5031
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-observe] pawn=000002A870A91000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5031 pk=10063 size=3 data=000002A877119B00 alloc=11
[glove-paintkit] pk=10063 result=000002A849084D60 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=17 pawn=000002A870A91000 item=000002A870A92770 team=2 def=5031 pk=10063
[glove] APPLIED def=5031 pk=10063 team=2
[model] outer=0x000002A7FDC43018 inner=0x000002A834DF4600
[glove-arms] pawn=000002A870A91000 handle=0x137C425C entity=000002A89A8A7800 scene=000002A89A8E5080 model=000002A834DF4600 namePtr=000002A835114D70 name="agents/models/tm_phoenix/tm_phoenix.vmdl"
[glove-observe] pawn=000002A870A91000 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-next-tick] seq=17 pawn=000002A870A91000 item=000002A870A92770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A877119B00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5031 pk=10063 size=3 data=000002A87711A200 alloc=11
[glove-paintkit] pk=10063 result=000002A849084D60 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=18 pawn=000002A870A91000 item=000002A870A92770 team=2 def=5031 pk=10063
[glove-next-tick] seq=18 pawn=000002A870A91000 item=000002A870A92770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A87711A200 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5031 pk=10063 size=3 data=000002A87711A200 alloc=11
[glove-paintkit] pk=10063 result=000002A849084D60 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=19 pawn=000002A870A91000 item=000002A870A92770 team=2 def=5031 pk=10063
[glove-next-tick] seq=19 pawn=000002A870A91000 item=000002A870A92770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A87711A200 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5031 pk=10063 size=3 data=000002A88F16A080 alloc=11
[glove-paintkit] pk=10063 result=000002A849084D60 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=20 pawn=000002A870A91000 item=000002A870A92770 team=2 def=5031 pk=10063
[glove-next-tick] seq=20 pawn=000002A870A91000 item=000002A870A92770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16A080 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-kit] delayed model refresh triggered
[glove-schema] def=5030 definition=000002A84927CC00 type="#Type_Hands" item="sporty_gloves" model="agents/models/shared/arms/glove_sporty/glove_sporty.vmdl" typeRead=1 itemRead=1 modelRead=1
[glove-schema] def=5031 definition=000002A84927D000 type="#Type_Hands" item="slick_gloves" model="agents/models/shared/arms/glove_slick/glove_slick.vmdl" typeRead=1 itemRead=1 modelRead=1
[glove-schema] def=5033 definition=000002A84927D800 type="#Type_Hands" item="motorcycle_gloves" model="agents/models/shared/arms/glove_motorcycle/glove_motorcycle.vmdl" typeRead=1 itemRead=1 modelRead=1
[glove-model-refresh] schema model selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=000002A870A91000 reapply=1 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F532000
[pw] weapon 0x000002A88F532000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000002A88F532000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002A88F5332E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000002A88F165000 alloc=11
[apply] world view 0x000002A88F5332E0 painted (pk=38)
[hud-find] START weapon=0x000002A88F532000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x137C425C
[hud-find] arms=0x000002A89A8A7800
[hud-find] armsNode=0x000002A89A8E5080
[hud-find] firstChild=0x000002A89BC3D480
[hud-find] child[0]=0x000002A89BC3D480 owner=0x000002A872156400 handle=0xCF80F0 resolved=0x000002A88F532000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A872156400 after 1 nodes
[apply-cache] rebuilding weapon=000002A88F532000 hud=000002A872156400 def=4 pk=38
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42D58
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-trigger] active=1 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5031 pk=10063 size=3 data=000002A88F163E80 alloc=11
[glove-paintkit] pk=10063 result=000002A849084D60 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000002A870A91000 reapply=1->1
[glove-sequence] applied seq=21 pawn=000002A870A91000 item=000002A870A92770 team=2 def=5031 pk=10063
[glove-observe] pawn=000002A870A91000 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-next-tick] seq=21 pawn=000002A870A91000 item=000002A870A92770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F163E80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5031 pk=10063 size=3 data=000002A88F16CA80 alloc=11
[glove-paintkit] pk=10063 result=000002A849084D60 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=22 pawn=000002A870A91000 item=000002A870A92770 team=2 def=5031 pk=10063
[glove-next-tick] seq=22 pawn=000002A870A91000 item=000002A870A92770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16CA80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5031 pk=10063 size=3 data=000002A88F165A80 alloc=11
[glove-paintkit] pk=10063 result=000002A849084D60 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=23 pawn=000002A870A91000 item=000002A870A92770 team=2 def=5031 pk=10063
[glove-next-tick] seq=23 pawn=000002A870A91000 item=000002A870A92770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F165A80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5031 pk=10063 size=3 data=000002A88F16F100 alloc=11
[glove-paintkit] pk=10063 result=000002A849084D60 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=24 pawn=000002A870A91000 item=000002A870A92770 team=2 def=5031 pk=10063
[glove-next-tick] seq=24 pawn=000002A870A91000 item=000002A870A92770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16F100 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F532000
[pw] weapon 0x000002A88F532000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002A88F532000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A89BC3D480
[hud-find] child[0]=0x000002A89BC3D480 owner=0x000002A872156400 handle=0xCF80F0 resolved=0x000002A88F532000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A872156400 after 1 nodes
[apply-cache] rebuilding weapon=000002A88F532000 hud=000002A872156400 def=4 pk=38
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F532000
[pw] weapon 0x000002A88F532000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002A88F532000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A85B608480
[hud-find] child[1]=0x000002A89BC3D480 owner=0x000002A872156400 handle=0xCF80F0 resolved=0x000002A88F532000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A872156400 after 2 nodes
[apply-cache] rebuilding weapon=000002A88F532000 hud=000002A872156400 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F532000
[pw] weapon 0x000002A88F532000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002A88F532000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A85B608480
[hud-find] child[1]=0x000002A89BC3D480 owner=0x000002A872156400 handle=0xCF80F0 resolved=0x000002A88F532000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A872156400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F532000
[pw] weapon 0x000002A88F532000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002A88F532000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A85B608480
[hud-find] child[1]=0x000002A89BC3D480 owner=0x000002A872156400 handle=0xCF80F0 resolved=0x000002A88F532000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A872156400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=505)
[knife] SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply] enter (weapon=0x000002A88F530000 def=505 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002A88F5312E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002A88F169280 alloc=11
[apply] world view 0x000002A88F5312E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A85B608480
[hud-find] child[1]=0x000002A89BC3D480 owner=0x000002A872156400 handle=0xCF80F0 resolved=0x000002A88F532000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002A88F530000 hud=0000000000000000 def=505 pk=413
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=2 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC43018
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-cache] rebuilding weapon=000002A88F530000 hud=000002A84537D800 def=505 pk=413
[knife] HUD SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F532000
[pw] weapon 0x000002A88F532000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002A88F532000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000
[hud-find] child[2]=0x000002A89BC3D480 owner=0x000002A872156400 handle=0xCF80F0 resolved=0x000002A88F532000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A872156400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=16413 lastStage=0 stage5Count=1018
[snap] stage histogram:
[snap]   stage  0: 3454 frames
[snap]   stage  1: 1118 frames
[snap]   stage  2: 1118 frames
[snap]   stage  3: 1114 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1018 frames
[snap]   stage  6: 1018 frames
[snap]   stage  7: 1018 frames
[snap]   stage  8: 1018 frames
[snap]   stage 10: 1018 frames
[snap]   stage 11: 1098 frames
[snap]   stage 12: 3420 frames
[snap] dwLocalPlayerController @ 0x00007FF98AFB13F8 -> 0x000002A85B5F4000
[snap] dwLocalPlayerPawn       @ 0x00007FF98B1A8160 -> 0x000002A7DF9E0000
[snap] pawn: vtable=0x00007FF994FA3740 inClient=0 health=680
[snap] ctrl: vtable=0x00007FF98A680648 inClient=1 m_hPlayerPawn@0x92C = 0x012B81A1 (idx=417)
[snap] entitySystem @ 0x00007FF98B18EB28 = 0x000002A7DF45E000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012B81A1 -> 0x000002A870A91000
[snap] ----------------------------------------
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F532000
[pw] weapon 0x000002A88F532000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000002A88F532000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000
[hud-find] child[2]=0x000002A89BC3D480 owner=0x000002A872156400 handle=0xCF80F0 resolved=0x000002A88F532000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A872156400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F530000
[pw] weapon 0x000002A88F530000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000002A88F530000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x878D4268
[hud-find] arms=0x000002A88F0FB000
[hud-find] armsNode=0x000002A891FF2480
[hud-find] firstChild=0x000002A88E2AF080
[hud-find] child[0]=0x000002A88E2AF080 owner=0x000002A84537D800 handle=0x80EF resolved=0x000002A88F530000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A84537D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-diag] pawn=000002A870A91000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove] team changed: 2 -> 3
[glove-trigger] active=1 curDef=5031 desiredDef=5033
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-observe] pawn=000002A870A91000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F168480 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=25 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove] APPLIED def=5033 pk=10053 team=3
[glove-arms] pawn=000002A870A91000 handle=0x87314299 entity=000002A8453AD800 scene=000002A891FF8480 model=000002A835E62000 namePtr=000002A835C14E10 name="agents/models/ctm_sas/ctm_sas.vmdl"
[glove-observe] pawn=000002A870A91000 reapply=0 changed=0 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-next-tick] seq=25 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F168480 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F165A80 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=26 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=26 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F165A80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F16B900 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=27 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[glove-next-tick] seq=27 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16B900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-model] stage=AFTER-BODYGROUP pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[attr-diag] item=000002A870A92770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002A870A92770 def=5033 pk=10053 size=3 data=000002A88F16E680 alloc=11
[glove-paintkit] pk=10053 result=000002A8490844A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000002A870A91000 reapply=0->1
[glove-sequence] applied seq=28 pawn=000002A870A91000 item=000002A870A92770 team=3 def=5033 pk=10053
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000002A88F562000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002A88F5632E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=000002A88F168800 alloc=11
[apply] world view 0x000002A88F5632E0 painted (pk=1173)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 1 nodes
[apply-cache] rebuilding weapon=000002A88F562000 hud=000002A88F520000 def=61 pk=1173
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518
[glove-next-tick] seq=28 pawn=000002A870A91000 item=000002A870A92770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000002A870A92770 =====
[glove-snapshot] LOCAL size=3 data=000002A88F16E680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 1 nodes
[apply-cache] rebuilding weapon=000002A88F562000 hud=000002A88F520000 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000002A88F560000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002A88F5612E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000002A88F169D00 alloc=11
[apply] world view 0x000002A88F5612E0 painted (pk=417)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A88F55D080
[hud-find] child[0]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000002A88F560000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000002A870A91000 team=3 scene=000002A88E92A080 skeleton=000002A88E92A080 modelState=000002A88E92A1C0 rawHandle=0x2A7FDC42518

=== SNAPSHOT ===
[snap] fsnCount=21469 lastStage=0 stage5Count=1328
[snap] stage histogram:
[snap]   stage  0: 4587 frames
[snap]   stage  1: 1428 frames
[snap]   stage  2: 1428 frames
[snap]   stage  3: 1424 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1328 frames
[snap]   stage  6: 1328 frames
[snap]   stage  7: 1328 frames
[snap]   stage  8: 1328 frames
[snap]   stage 10: 1328 frames
[snap]   stage 11: 1418 frames
[snap]   stage 12: 4543 frames
[snap] dwLocalPlayerController @ 0x00007FF98AFB13F8 -> 0x000002A85B5F4000
[snap] dwLocalPlayerPawn       @ 0x00007FF98B1A8160 -> 0x000002A7DF9E0000
[snap] pawn: vtable=0x00007FF994FA3740 inClient=0 health=680
[snap] ctrl: vtable=0x00007FF98A680648 inClient=1 m_hPlayerPawn@0x92C = 0x012B81A1 (idx=417)
[snap] entitySystem @ 0x00007FF98B18EB28 = 0x000002A7DF45E000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012B81A1 -> 0x000002A870A91000
[snap] ----------------------------------------
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-cache] rebuilding weapon=000002A88F560000 hud=000002A88F52A000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000
[hud-find] child[1]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F562000
[pw] weapon 0x000002A88F562000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000002A88F562000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000
[hud-find] child[1]=0x000002A88F55D080 owner=0x000002A88F520000 handle=0x12400F3 resolved=0x000002A88F562000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F520000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=26624 lastStage=0 stage5Count=1647
[snap] stage histogram:
[snap]   stage  0: 5729 frames
[snap]   stage  1: 1747 frames
[snap]   stage  2: 1747 frames
[snap]   stage  3: 1743 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1647 frames
[snap]   stage  6: 1647 frames
[snap]   stage  7: 1647 frames
[snap]   stage  8: 1647 frames
[snap]   stage 10: 1647 frames
[snap]   stage 11: 1738 frames
[snap]   stage 12: 5684 frames
[snap] dwLocalPlayerController @ 0x00007FF98AFB13F8 -> 0x000002A85B5F4000
[snap] dwLocalPlayerPawn       @ 0x00007FF98B1A8160 -> 0x000002A7DF9E0000
[snap] pawn: vtable=0x00007FF994FA3740 inClient=0 health=680
[snap] ctrl: vtable=0x00007FF98A680648 inClient=1 m_hPlayerPawn@0x92C = 0x012B81A1 (idx=417)
[snap] entitySystem @ 0x00007FF98B18EB28 = 0x000002A7DF45E000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x012B81A1 -> 0x000002A870A91000
[snap] ----------------------------------------
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000002A870A91000
[apply] active 0x000002A88F560000
[pw] weapon 0x000002A88F560000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000002A88F560000 pawn=0x000002A870A91000
[hud-find] armsHandle=0x87314299
[hud-find] arms=0x000002A8453AD800
[hud-find] armsNode=0x000002A891FF8480
[hud-find] firstChild=0x000002A89B934480
[hud-find] child[0]=0x000002A89B934480 owner=0x000002A88F52A000 handle=0x1BD80F2 resolved=0x000002A88F560000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000002A88F52A000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
