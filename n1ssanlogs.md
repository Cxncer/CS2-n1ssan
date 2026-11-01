[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 02:44:20
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FF99475924B -> rva 0x271EB28 (val=000005BE7B469800)
[auto-off] dwLocalPlayerController      hit 0x00007FF9946755D0 -> rva 0x25413F8 (val=000005BF0F492E00)
[auto-off] dwLocalPlayerPawn            hit 0x00007FF993E915D5 -> rva 0x2738160 (val=000005BE7BB01E00)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FF99645EB28
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FF9962813F8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FF996478160
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
[resolve] InvalidateDescription          @ 0x00007FF994EE0A20
[resolve] BuildModernSkin                @ 0x00007FF994B853D0
[resolve] SetMeshGroupMask               @ 0x00007FF994805910
[resolve] RegenerateSkins                @ 0x00007FF99456B330
[resolve] ReleaseCompositeMaterials      @ 0x00007FF99522BB70
[resolve] GloveCreatePaintKit            @ 0x00007FF994ED0AA0
[resolve] AgentSetModel                  @ 0x00007FF9946A5B10
[resolve] KnifeUpdateSubclass            @ 0x00007FF993F48FC0
[resolve] GloveSetBodyGroup              @ 0x00007FF9946A4A30
[resolve] MemAlloc                       @ 0x00007FF9A967DD30
[resolve] MemFree                        @ 0x00007FF9A967DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FF99645EB28 -> 0x000005BE7B469800
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FF994ECE2A5 -> ptrAddr 0x00007FF9963383E0 -> es 0x000005BDEDB23DB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x000005BDEDB23DB0
[schema-probe] CEconItemSchema* = 0x000005BE7B81B200
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x000005BEE97C0000 node0[+08]=0x000005BEE8460C00 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x000005BE7BCAC1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x000005BEE97E0000 node0[+08]=0x0000000100000001 node0[+18]=0x000005BEE8460C00
[schema-probe]   map @ schema+0x138 count=737 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x000005BECA9D4000 node0[+08]=0x000005BEE84A4AA0 node0[+18]=0x000005BEE84A4BE0
[schema-probe]   map @ schema+0x170 count=12 elements=0x000005BED84EF600 node0[+08]=0x0000000100000001 node0[+18]=0x000005BEE9834400
[schema-probe]   map @ schema+0x180 count=3 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x000005BEDD5A4000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FF995A53B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x000005BED8814000 node0[+08]=0x0000000100000128 node0[+18]=0x000005BEE7F1CE81
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x000005BEE97B8000 node0[+08]=0x0000000100000001 node0[+18]=0x000005BEE7EDF921
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x000005BEE99A0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FF995A53C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x000005BEE848E9B0 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x000005BEE96961C0
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x000005BED9D40000 node0[+08]=0x65735F0100000002 node0[+18]=0x000005BEE7239760
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x000005BED8824000 node0[+08]=0x65735F0100000013 node0[+18]=0x000005BEE783C100
[schema-probe]   map @ schema+0x300 count=102 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x000005BED8AE8000 node0[+08]=0xAAAAEA000000003E node0[+18]=0x000005BEE8C23370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x000005BEFFFFFFFF node0[+08]=0x0000000000000500 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x000005BEE72B8E00 node0[+08]=0x000005BEE8434060 node0[+18]=0x000005BEE8434120
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x000005BE00000040 node0[+08]=0xFFFFFFFFFFFFFFFF node0[+18]=0xFFFFFFFFFFFFFFFF
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x000005BED84EC600 node0[+08]=0x000005BEE8434520 node0[+18]=0x000005BEE8434580
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x000005BE00000013 node0[+08]=0x0000000000000000 node0[+18]=0x064A6F00007FF9A9
[schema-probe]   map @ schema+0x400 count=19 elements=0x000005BE9842C800 node0[+08]=0x000005BEE8434560 node0[+18]=0x000005BEE84345A0
[schema-probe] sane map candidates: 28
[verify] items count=2059 elems=0x000005BEE97C0000
[verify]   items[0] key=0 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=0 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=0 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=0 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=0 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x000005BED9D40000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x000005BED9D40000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x000005BEE90D3AA0 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x000005BEE90D41A0 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x000005BDEDB23DB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FF994E727C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FF994E28540, setFloat=00007FF994E28750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000005BEE84A4D20
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000005BEE84A4DC0
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000005BEE84A4E60
[plan-a] inject: created=20 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FF994559DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FF9962A35A0 vtable=0x00007FF9959A7200 fn=0x00007FF9948AEE60 slot=36
[fsn] hooked (vtable overwrite)
[fsn] first stage call seen
[ready] v9.0.3 split; targets=20

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=12 stage5Count=0
[snap] stage histogram:
[snap]   stage 12: 1 frames
[snap] dwLocalPlayerController @ 0x00007FF9962813F8 -> 0x000005BF0F492E00
[snap] dwLocalPlayerPawn       @ 0x00007FF996478160 -> 0x000005BE7BB01E00
[snap] pawn: vtable=0x00007FF999583740 inClient=0 health=1470
[snap] ctrl: vtable=0x00007FF995950648 inClient=1 m_hPlayerPawn@0x92C = 0x00E6000B (idx=11)
[snap] entitySystem @ 0x00007FF99645EB28 = 0x000005BE7B469800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00E6000B -> 0x000005BF0FC4C800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000005BF0FC4C800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000005BF0FC4C800
[match] FOUND pawn=0x000005BF0FC4C800 hp=100
[apply] tick pawn=0x000005BF0FC4C800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-snapshot] ===== PAWN-EMBEDDED item=000005BF0FC4DF70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000005BF0FC4C800 vector=000005BF0FC4DA68 data=0000000000000000 count=0
[wearable-dump] no wearables
[glove] first item=0x000005BF0FC4DF70 vtable=0x00007FF9959CE0D0 def=0 init=0 quality=-1 attrCount=2510694888
[glove-diag] pawn=000005BF0FC4C800 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF0FC4C800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4071 lastStage=1 stage5Count=245
[snap] stage histogram:
[snap]   stage  0: 932 frames
[snap]   stage  1: 246 frames
[snap]   stage  2: 245 frames
[snap]   stage  3: 245 frames
[snap]   stage  5: 245 frames
[snap]   stage  6: 245 frames
[snap]   stage  7: 245 frames
[snap]   stage  8: 245 frames
[snap]   stage 10: 245 frames
[snap]   stage 11: 257 frames
[snap]   stage 12: 921 frames
[snap] dwLocalPlayerController @ 0x00007FF9962813F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FF996478160 -> 0x000005BE7BB01E00
[snap] pawn: vtable=0x00007FF999583740 inClient=0 health=1470
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FF99645EB28 = 0x000005BE7B469800 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=000005BE7BB01E00 reapply=114 changed=48 def=24948 init=115 idHigh=0x726F482C
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000005BE7BB01E00
[apply] tick pawn=0x000005BE7BB01E00
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-snapshot] ===== PAWN-EMBEDDED item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000005BF1982F800 vector=000005BF19830A68 data=0000000000000000 count=0
[wearable-dump] no wearables
[glove-observe] pawn=000005BF1982F800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000005BF1982F800
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon=0x000005BF49C2E000 view=0x000005BF49C2F2E0
[pw]   view+0x00 = 0x95A545A0
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
[pw]   +0x1290 = 0x00007FF995A54740
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x019680EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FF995A545A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000005BF49C2E000 def=4
[team] pawn=0x000005BF1982F800, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000005BF49C2E000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005BF49C2F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000005BF4974C900 alloc=11
[apply] world view 0x000005BF49C2F2E0 painted (pk=38)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0xFFFFFFFF
[hud-find] FAIL: invalid arms handle
[apply-cache] rebuilding weapon=000005BF49C2E000 hud=0000000000000000 def=4 pk=38
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[glove-diag] pawn=000005BF1982F800 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF4974B400 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=1 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove] APPLIED def=5031 pk=10063 team=2
[glove-arms] invalid handle=0xFFFFFFFF
[glove-observe] pawn=000005BF1982F800 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-next-tick] seq=1 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF4974B400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E2C80 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=2 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon 0x000005BF49C2E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF0B59D080
[hud-find] child[0]=0x000005BF0B59D080 owner=0x000005BF0A727800 handle=0x2380EB resolved=0x000005BF497EA000
[hud-find] child[1]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF0A728C00 after 2 nodes
[apply-cache] rebuilding weapon=000005BF49C2E000 hud=000005BF0A728C00 def=4 pk=38
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-next-tick] seq=2 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E2C80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E1400 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=3 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=3 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E1400 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309EED00 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=4 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=4 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309EED00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E4F80 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=5 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon 0x000005BF49C2E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF0B59D080
[hud-find] child[0]=0x000005BF0B59D080 owner=0x000005BF0A727800 handle=0x2380EB resolved=0x000005BF497EA000
[hud-find] child[1]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF0A728C00 after 2 nodes
[apply-cache] rebuilding weapon=000005BF49C2E000 hud=000005BF0A728C00 def=4 pk=38
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-next-tick] seq=5 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E4F80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309EDB80 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=6 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=6 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309EDB80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E4880 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=7 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=7 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E4880 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309ED800 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=8 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=8 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309ED800 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon 0x000005BF49C2E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF480C9880
[hud-find] child[1]=0x000005BF0B59D080 owner=0x000005BF0A727800 handle=0x2380EB resolved=0x000005BF497EA000
[hud-find] child[2]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF0A728C00 after 3 nodes
[apply-cache] rebuilding weapon=000005BF49C2E000 hud=000005BF0A728C00 def=4 pk=38
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58

=== SNAPSHOT ===
[snap] fsnCount=6905 lastStage=0 stage5Count=415
[snap] stage histogram:
[snap]   stage  0: 1406 frames
[snap]   stage  1: 519 frames
[snap]   stage  2: 519 frames
[snap]   stage  3: 515 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 415 frames
[snap]   stage  6: 415 frames
[snap]   stage  7: 415 frames
[snap]   stage  8: 415 frames
[snap]   stage 10: 415 frames
[snap]   stage 11: 461 frames
[snap]   stage 12: 1409 frames
[snap] dwLocalPlayerController @ 0x00007FF9962813F8 -> 0x000005BF0D484A00
[snap] dwLocalPlayerPawn       @ 0x00007FF996478160 -> 0x000005BE7BB01E00
[snap] pawn: vtable=0x00007FF999583740 inClient=0 health=1470
[snap] ctrl: vtable=0x00007FF995950648 inClient=1 m_hPlayerPawn@0x92C = 0x002581A1 (idx=417)
[snap] entitySystem @ 0x00007FF99645EB28 = 0x000005BE7B469800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x002581A1 -> 0x000005BF1982F800
[snap] ----------------------------------------
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=505)
[knife] SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply] enter (weapon=0x000005BF497EA000 def=505 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005BF497EB2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000005BF309E4F80 alloc=11
[apply] world view 0x000005BF497EB2E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF480C9880
[hud-find] child[1]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000005BF497EA000 hud=0000000000000000 def=505 pk=413
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon 0x000005BF49C2E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47758480
[hud-find] child[0]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000
[hud-find] child[2]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF0A728C00 after 3 nodes
[apply-cache] rebuilding weapon=000005BF49C2E000 hud=000005BF0A728C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-trigger] active=1 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309EBF80 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=9 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=9 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309EBF80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E5680 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=10 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=10 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E5680 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E1E80 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=11 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=11 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E1E80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309EA380 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=12 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=12 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309EA380 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon 0x000005BF49C2E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47F54080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000
[hud-find] child[2]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF0A728C00 after 3 nodes
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon 0x000005BF49C2E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47F54080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000
[hud-find] child[2]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF0A728C00 after 3 nodes
[apply-cache] rebuilding weapon=000005BF49C2E000 hud=000005BF0A728C00 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47F54080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-cache] rebuilding weapon=000005BF497EA000 hud=000005BF068EB000 def=505 pk=413
[knife] HUD SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon 0x000005BF49C2E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47F54080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000
[hud-find] child[2]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF0A728C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF49C2E000
[pw] weapon 0x000005BF49C2E000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF49C2E000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47F54080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000
[hud-find] child[2]=0x000005BF0B59DC80 owner=0x000005BF0A728C00 handle=0x19680EC resolved=0x000005BF49C2E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF0A728C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47F54080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-trigger] active=1 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E2900 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=13 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47F54080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-next-tick] seq=13 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E2900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309ED480 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=14 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=14 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309ED480 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E8780 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=15 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=15 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E8780 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF309E8780 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=16 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=16 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF309E8780 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-cache] rebuilding weapon=000005BF497EA000 hud=000005BF068EB000 def=505 pk=413
[knife] HUD SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-cache] rebuilding weapon=000005BF497EA000 hud=000005BF068EB000 def=505 pk=413
[knife] HUD SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=11525 lastStage=12 stage5Count=718
[snap] stage histogram:
[snap]   stage  0: 2352 frames
[snap]   stage  1: 822 frames
[snap]   stage  2: 822 frames
[snap]   stage  3: 818 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 718 frames
[snap]   stage  6: 718 frames
[snap]   stage  7: 718 frames
[snap]   stage  8: 718 frames
[snap]   stage 10: 718 frames
[snap]   stage 11: 781 frames
[snap]   stage 12: 2339 frames
[snap] dwLocalPlayerController @ 0x00007FF9962813F8 -> 0x000005BF0D484A00
[snap] dwLocalPlayerPawn       @ 0x00007FF996478160 -> 0x000005BE7BB01E00
[snap] pawn: vtable=0x00007FF999583740 inClient=0 health=1470
[snap] ctrl: vtable=0x00007FF995950648 inClient=1 m_hPlayerPawn@0x92C = 0x002581A1 (idx=417)
[snap] entitySystem @ 0x00007FF99645EB28 = 0x000005BE7B469800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x002581A1 -> 0x000005BF1982F800
[snap] ----------------------------------------
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF497EA000
[pw] weapon 0x000005BF497EA000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF497EA000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x4F99C214
[hud-find] arms=0x000005BF0B840000
[hud-find] armsNode=0x000005BF0B59E880
[hud-find] firstChild=0x000005BF47B40080
[hud-find] child[1]=0x000005BF47758480 owner=0x000005BF068EB000 handle=0x2380EB resolved=0x000005BF497EA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF068EB000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-diag] pawn=000005BF1982F800 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove] team changed: 2 -> 3
[glove-trigger] active=1 curDef=5031 desiredDef=5033
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-observe] pawn=000005BF1982F800 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5033 pk=10053 size=3 data=000005BF480A5100 alloc=11
[glove-paintkit] pk=10053 result=000005BEE90D48A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=17 pawn=000005BF1982F800 item=000005BF19830F70 team=3 def=5033 pk=10053
[glove] APPLIED def=5033 pk=10053 team=3
[model] outer=0x000005BE999BF258 inner=0x000005BECB4DE600
[glove-arms] pawn=000005BF1982F800 handle=0x033F425C entity=000005BF48086000 scene=000005BF0B59AC80 model=000005BECB4DE600 namePtr=000005BECB0AC630 name="agents/models/ctm_sas/ctm_sas.vmdl"
[glove-observe] pawn=000005BF1982F800 reapply=0 changed=0 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-next-tick] seq=17 pawn=000005BF1982F800 item=000005BF19830F70 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF480A5100 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5033 pk=10053 size=3 data=000005BF480A6280 alloc=11
[glove-paintkit] pk=10053 result=000005BEE90D48A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=18 pawn=000005BF1982F800 item=000005BF19830F70 team=3 def=5033 pk=10053
[glove-next-tick] seq=18 pawn=000005BF1982F800 item=000005BF19830F70 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF480A6280 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5033 pk=10053 size=3 data=000005BF480A3500 alloc=11
[glove-paintkit] pk=10053 result=000005BEE90D48A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=19 pawn=000005BF1982F800 item=000005BF19830F70 team=3 def=5033 pk=10053
[glove-next-tick] seq=19 pawn=000005BF1982F800 item=000005BF19830F70 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF480A3500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5033 pk=10053 size=3 data=000005BF480A6D00 alloc=11
[glove-paintkit] pk=10053 result=000005BEE90D48A0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=20 pawn=000005BF1982F800 item=000005BF19830F70 team=3 def=5033 pk=10053
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000005BF47B56000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005BF47B572E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=000005BF480A5B80 alloc=11
[apply] world view 0x000005BF47B572E0 painted (pk=1173)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF06D69480
[hud-find] child[0]=0x000005BF06D69480 owner=0x000005BF069BD000 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-cache] rebuilding weapon=000005BF47B56000 hud=000005BF4774AC00 def=61 pk=1173
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[glove-next-tick] seq=20 pawn=000005BF1982F800 item=000005BF19830F70 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF480A6D00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF06D69480
[hud-find] child[0]=0x000005BF06D69480 owner=0x000005BF069BD000 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-cache] rebuilding weapon=000005BF47B56000 hud=000005BF4774AC00 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF06D69480
[hud-find] child[0]=0x000005BF06D69480 owner=0x000005BF069BD000 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000005BF47B54000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005BF47B552E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000005BF480A6980 alloc=11
[apply] world view 0x000005BF47B552E0 painted (pk=417)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF06D65880
[hud-find] child[0]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000005BF47B54000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=3 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BF258
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-cache] rebuilding weapon=000005BF47B54000 hud=000005BF47FF5800 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=16158 lastStage=0 stage5Count=1022
[snap] stage histogram:
[snap]   stage  0: 3301 frames
[snap]   stage  1: 1126 frames
[snap]   stage  2: 1126 frames
[snap]   stage  3: 1122 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1022 frames
[snap]   stage  6: 1022 frames
[snap]   stage  7: 1022 frames
[snap]   stage  8: 1022 frames
[snap]   stage 10: 1022 frames
[snap]   stage 11: 1101 frames
[snap]   stage 12: 3271 frames
[snap] dwLocalPlayerController @ 0x00007FF9962813F8 -> 0x000005BF0D484A00
[snap] dwLocalPlayerPawn       @ 0x00007FF996478160 -> 0x000005BE7BB01E00
[snap] pawn: vtable=0x00007FF999583740 inClient=0 health=1470
[snap] ctrl: vtable=0x00007FF995950648 inClient=1 m_hPlayerPawn@0x92C = 0x002581A1 (idx=417)
[snap] entitySystem @ 0x00007FF99645EB28 = 0x000005BE7B469800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x002581A1 -> 0x000005BF1982F800
[snap] ----------------------------------------
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=21034 lastStage=0 stage5Count=1340
[snap] stage histogram:
[snap]   stage  0: 4308 frames
[snap]   stage  1: 1444 frames
[snap]   stage  2: 1444 frames
[snap]   stage  3: 1440 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1340 frames
[snap]   stage  6: 1340 frames
[snap]   stage  7: 1340 frames
[snap]   stage  8: 1340 frames
[snap]   stage 10: 1340 frames
[snap]   stage 11: 1421 frames
[snap]   stage 12: 4276 frames
[snap] dwLocalPlayerController @ 0x00007FF9962813F8 -> 0x000005BF0D484A00
[snap] dwLocalPlayerPawn       @ 0x00007FF996478160 -> 0x000005BE7BB01E00
[snap] pawn: vtable=0x00007FF999583740 inClient=0 health=1470
[snap] ctrl: vtable=0x00007FF995950648 inClient=1 m_hPlayerPawn@0x92C = 0x002581A1 (idx=417)
[snap] entitySystem @ 0x00007FF99645EB28 = 0x000005BE7B469800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x002581A1 -> 0x000005BF1982F800
[snap] ----------------------------------------
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B54000
[pw] weapon 0x000005BF47B54000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000005BF47B54000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47FF5800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF47B56000
[pw] weapon 0x000005BF47B56000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000005BF47B56000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x33F425C
[hud-find] arms=0x000005BF48086000
[hud-find] armsNode=0x000005BF0B59AC80
[hud-find] firstChild=0x000005BF49364C80
[hud-find] child[0]=0x000005BF49364C80 owner=0x000005BF47FF5800 handle=0x1AF80EF resolved=0x000005BF47B54000
[hud-find] child[1]=0x000005BF06D65880 owner=0x000005BF4774AC00 handle=0xCC00F0 resolved=0x000005BF47B56000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF4774AC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-diag] pawn=000005BF1982F800 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-kit] sold; model refresh scheduled in 200 ms
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5033 desiredDef=5031
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-observe] pawn=000005BF1982F800 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF480A8C80 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=21 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove] APPLIED def=5031 pk=10063 team=2
[glove-arms] pawn=000005BF1982F800 handle=0xF96A4292 entity=000005BF0B84C000 scene=000005BF0B59D080 model=000005BEADF94900 namePtr=000005BEADDF5D00 name="agents/models/tm_phoenix/tm_phoenix.vmdl"
[glove-observe] pawn=000005BF1982F800 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-next-tick] seq=21 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF480A8C80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF480A3500 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=22 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=22 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF480A3500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF480A6280 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=23 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[glove-next-tick] seq=23 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF480A6280 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-model] stage=AFTER-BODYGROUP pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[attr-diag] item=000005BF19830F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000005BF19830F70 def=5031 pk=10063 size=3 data=000005BF480A5480 alloc=11
[glove-paintkit] pk=10063 result=000005BEE90D5160 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000005BF1982F800 reapply=0->1
[glove-sequence] applied seq=24 pawn=000005BF1982F800 item=000005BF19830F70 team=2 def=5031 pk=10063
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D8000
[pw] weapon 0x000005BF0B9D8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000005BF0B9D8000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005BF0B9D92E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000005BF480A8C80 alloc=11
[apply] world view 0x000005BF0B9D92E0 painted (pk=38)
[hud-find] START weapon=0x000005BF0B9D8000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0xF96A4292
[hud-find] arms=0x000005BF0B84C000
[hud-find] armsNode=0x000005BF0B59D080
[hud-find] firstChild=0x000005BF31574C80
[hud-find] child[0]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47744800 after 1 nodes
[apply-cache] rebuilding weapon=000005BF0B9D8000 hud=000005BF47744800 def=4 pk=38
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58
[glove-next-tick] seq=24 pawn=000005BF1982F800 item=000005BF19830F70 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000005BF19830F70 =====
[glove-snapshot] LOCAL size=3 data=000005BF480A5480 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-kit] delayed model refresh triggered
[glove-schema] def=5030 definition=000005BEE92C1C00 type="#Type_Hands" item="sporty_gloves" model="agents/models/shared/arms/glove_sporty/glove_sporty.vmdl" typeRead=1 itemRead=1 modelRead=1
[glove-schema] def=5031 definition=000005BEE92C2000 type="#Type_Hands" item="slick_gloves" model="agents/models/shared/arms/glove_slick/glove_slick.vmdl" typeRead=1 itemRead=1 modelRead=1
[glove-schema] def=5033 definition=000005BEE92C2800 type="#Type_Hands" item="motorcycle_gloves" model="agents/models/shared/arms/glove_motorcycle/glove_motorcycle.vmdl" typeRead=1 itemRead=1 modelRead=1
[glove-model-refresh] schema model selected: agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[apply-cache] weapon model cache invalidated
[glove-model-refresh] alternate model applied; restore queued
[glove-observe] pawn=000005BF1982F800 reapply=1 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000005BF1982F800 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D8000
[pw] weapon 0x000005BF0B9D8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF0B9D8000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF31574C80
[hud-find] child[0]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47744800 after 1 nodes
[apply-cache] rebuilding weapon=000005BF0B9D8000 hud=000005BF47744800 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D8000
[pw] weapon 0x000005BF0B9D8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF0B9D8000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF31574C80
[hud-find] child[0]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47744800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D8000
[pw] weapon 0x000005BF0B9D8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF0B9D8000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF31574C80
[hud-find] child[0]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47744800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D8000
[pw] weapon 0x000005BF0B9D8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF0B9D8000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF31574C80
[hud-find] child[0]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47744800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D8000
[pw] weapon 0x000005BF0B9D8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF0B9D8000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF31574C80
[hud-find] child[0]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47744800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D8000
[pw] weapon 0x000005BF0B9D8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF0B9D8000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF31574C80
[hud-find] child[0]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47744800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=505)
[knife] SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply] enter (weapon=0x000005BF0B9D6000 def=505 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000005BF0B9D72E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000005BF309E4500 alloc=11
[apply] world view 0x000005BF0B9D72E0 painted (pk=413)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF31574C80
[hud-find] child[0]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000005BF0B9D6000 hud=0000000000000000 def=505 pk=413
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000005BF1982F800 team=2 scene=000005BF06983C80 skeleton=000005BF06983C80 modelState=000005BF06983DC0 rawHandle=0x5BE999BFD58

=== SNAPSHOT ===
[snap] fsnCount=25787 lastStage=0 stage5Count=1645
[snap] stage histogram:
[snap]   stage  0: 5312 frames
[snap]   stage  1: 1749 frames
[snap]   stage  2: 1749 frames
[snap]   stage  3: 1745 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1645 frames
[snap]   stage  6: 1645 frames
[snap]   stage  7: 1645 frames
[snap]   stage  8: 1645 frames
[snap]   stage 10: 1645 frames
[snap]   stage 11: 1741 frames
[snap]   stage 12: 5265 frames
[snap] dwLocalPlayerController @ 0x00007FF9962813F8 -> 0x000005BF0D484A00
[snap] dwLocalPlayerPawn       @ 0x00007FF996478160 -> 0x000005BE7BB01E00
[snap] pawn: vtable=0x00007FF999583740 inClient=0 health=1470
[snap] ctrl: vtable=0x00007FF995950648 inClient=1 m_hPlayerPawn@0x92C = 0x002581A1 (idx=417)
[snap] entitySystem @ 0x00007FF99645EB28 = 0x000005BE7B469800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x002581A1 -> 0x000005BF1982F800
[snap] ----------------------------------------
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-cache] rebuilding weapon=000005BF0B9D6000 hud=000005BF3151A400 def=505 pk=413
[knife] HUD SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D8000
[pw] weapon 0x000005BF0B9D8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000005BF0B9D8000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000
[hud-find] child[1]=0x000005BF31574C80 owner=0x000005BF47744800 handle=0xAA80F3 resolved=0x000005BF0B9D8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF47744800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000005BF1982F800
[apply] active 0x000005BF0B9D6000
[pw] weapon 0x000005BF0B9D6000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000005BF0B9D6000 pawn=0x000005BF1982F800
[hud-find] armsHandle=0x14FDC29E
[hud-find] arms=0x000005BF46646000
[hud-find] armsNode=0x000005BF47B8C880
[hud-find] firstChild=0x000005BF48FCB080
[hud-find] child[0]=0x000005BF48FCB080 owner=0x000005BF3151A400 handle=0x1D400F2 resolved=0x000005BF0B9D6000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000005BF3151A400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
