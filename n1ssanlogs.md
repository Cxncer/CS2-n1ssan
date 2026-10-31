[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 01:45:16
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFC73CE924B -> rva 0x271EB28 (val=000003A83D45E000)
[auto-off] dwLocalPlayerController      hit 0x00007FFC73C055D0 -> rva 0x25413F8 (val=000003A8D9870200)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFC734215D5 -> rva 0x2738160 (val=000003A83D9D0800)
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
[resolve] MemAlloc                       @ 0x00007FFCE663DD30
[resolve] MemFree                        @ 0x00007FFCE663DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFC759EEB28 -> 0x000003A83D45E000
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFC7445E2A5 -> ptrAddr 0x00007FFC758C83E0 -> es 0x000003A7AFB33E20
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x000003A7AFB33E20
[schema-probe] CEconItemSchema* = 0x000003A83D70C400
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x000003A8AB560000 node0[+08]=0x000003A894E52400 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x000003A83DBDC1C0 node0[+08]=0x000003A85A0150A0 node0[+18]=0x00007FFCE17E4ED0
[schema-probe]   map @ schema+0x128 count=2059 elements=0x000003A8AB580000 node0[+08]=0x0000000100000001 node0[+18]=0x000003A894E52400
[schema-probe]   map @ schema+0x138 count=737 elements=0x000003A8FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x150 count=330 elements=0x000003A89E0D2000 node0[+08]=0x000003A8AA2A6B00 node0[+18]=0x000003A8AA2A6C40
[schema-probe]   map @ schema+0x170 count=12 elements=0x000003A8AB680600 node0[+08]=0x0000000100000001 node0[+18]=0x000003A8AB5D1E00
[schema-probe]   map @ schema+0x180 count=3 elements=0x000003A8FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x198 count=97 elements=0x000003A89EFBF000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFC74FE3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x000003A8FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x000003A894444000 node0[+08]=0x3F80000100000128 node0[+18]=0x000003A8A9D5E521
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x000003A8AB559C00 node0[+08]=0x0000000100000001 node0[+18]=0x000003A8A9D795C1
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x000003A8FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x210 count=2505 elements=0x000003A8AB7D0000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFC74FE3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x000003A8FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x278 count=2 elements=0x000003A8AA29E7B0 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x000003A8AB667880
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x000003A895BE0000 node0[+08]=0x65735F0100000002 node0[+18]=0x000003A8A90C9080
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x000003A89443C000 node0[+08]=0x30326E0100000013 node0[+18]=0x000003A8A960E5A0
[schema-probe]   map @ schema+0x300 count=102 elements=0x000003A8FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x328 count=382 elements=0x000003A8FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x000003A894A24000 node0[+08]=0x000000000000003E node0[+18]=0x000003A8AAA73370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x000003A8FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x000003A8A92A8E00 node0[+08]=0x000003A8AA245940 node0[+18]=0x000003A8AA245A00
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x000003A800000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x000003A89436D800 node0[+08]=0x000003A8AA245E00 node0[+18]=0x000003A8AA245E60
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x000003A800000013 node0[+08]=0x0000000000000000 node0[+18]=0x00000000007FFCE6
[schema-probe]   map @ schema+0x400 count=19 elements=0x000003A85A2FC800 node0[+08]=0x000003A8AA245E40 node0[+18]=0x000003A8AA245E80
[schema-probe] sane map candidates: 27
[verify] items count=2059 elems=0x000003A8AB560000
[verify]   items[0] key=936 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=936 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=936 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=936 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=936 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x000003A895BE0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x000003A895BE0000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x000003A8AAF036C0 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x000003A8AAF03DC0 name="sporty_poison_frog_blue_white"
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
[plan-a] CEconItemSystem* = 0x000003A7AFB33E20 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFC744027C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFC743B8540, setFloat=00007FFC743B8750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000003A8AA2A6D80
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000003A8AA2A6E20
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000003A8AA2A6EC0
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
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000003A8D9870200
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x00C8000B (idx=11)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00C8000B -> 0x000003A8D9BDB800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000003A8D9BDB800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000003A8D9BDB800
[match] FOUND pawn=0x000003A8D9BDB800 hp=100
[apply] tick pawn=0x000003A8D9BDB800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove-snapshot] ===== PAWN-EMBEDDED item=000003A8D9BDCF70 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000003A8D9BDB800 count=1962271320 data=0000000000000000
[wearable-dump] invalid vector; aborting
[glove] first item=0x000003A8D9BDCF70 vtable=0x00007FFC74F5E0D0 def=0 init=0 quality=-1 attrCount=1962879464
[glove-diag] pawn=000003A8D9BDB800 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4368 lastStage=0 stage5Count=291
[snap] stage histogram:
[snap]   stage  0: 875 frames
[snap]   stage  1: 291 frames
[snap]   stage  2: 291 frames
[snap]   stage  3: 291 frames
[snap]   stage  5: 291 frames
[snap]   stage  6: 291 frames
[snap]   stage  7: 291 frames
[snap]   stage  8: 291 frames
[snap]   stage 10: 291 frames
[snap]   stage 11: 321 frames
[snap]   stage 12: 844 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000003A8D9870200
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x00C8000B (idx=11)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00C8000B -> 0x000003A8D9BDB800
[snap] ----------------------------------------
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D9BDB800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=5716 lastStage=1 stage5Count=367
[snap] stage histogram:
[snap]   stage  0: 1206 frames
[snap]   stage  1: 368 frames
[snap]   stage  2: 367 frames
[snap]   stage  3: 367 frames
[snap]   stage  5: 367 frames
[snap]   stage  6: 367 frames
[snap]   stage  7: 367 frames
[snap]   stage  8: 367 frames
[snap]   stage 10: 367 frames
[snap]   stage 11: 400 frames
[snap]   stage 12: 1173 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=000003A83D9D0800 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000003A83D9D0800
[apply] tick pawn=0x000003A83D9D0800
[glove-snapshot] ===== PAWN-EMBEDDED item=000003A83D9D1F70 =====
[glove-snapshot] LOCAL size=0 data=3F80000000000000 alloc=0
[glove-snapshot] NETWORKED size=-1343225856 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED invalid vector; entries skipped
[wearable-dump] pawn=000003A83D9D0800 count=-676382912 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=000003A8D358D000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000003A8D358D000
[apply] tick pawn=0x000003A8D358D000
[glove-snapshot] ===== PAWN-EMBEDDED item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=0 data=0000000000000000 alloc=0
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[wearable-dump] pawn=000003A8D358D000 count=1962271320 data=0000000000000000
[wearable-dump] invalid vector; aborting
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon=0x000003A9115C8000 view=0x000003A9115C92E0
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
[pw]   +0x12B0 = 0x0004835A00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000001
[pw]   +0x12E0 = 0x00007FFC74FE45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000003A9115C8000 def=32
[team] pawn=0x000003A8D358D000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] NO TARGET def=32 team=CT
[glove-diag] pawn=000003A8D358D000 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] active=1 curDef=0 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A91040F500 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=1 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[glove] APPLIED def=5033 pk=10053 team=3
[model] outer=0x000003A85B7AEA18 inner=0x000003A86D424000
[glove-arms] pawn=000003A8D358D000 handle=0x4AAC4217 entity=000003A911D08000 scene=000003A8CCB20880 model=000003A86D424000 namePtr=000003A86D0E49E0 name="agents/models/ctm_sas/ctm_sas.vmdl"
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-observe] pawn=000003A8D358D000 reapply=0 changed=0 def=5033 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=1 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A91040F500 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C93A00 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=2 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=2 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C93A00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C9E580 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=3 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=3 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C9E580 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C91380 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=4 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=4 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C91380 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C9DE80 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=5 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18

=== SNAPSHOT ===
[snap] fsnCount=7688 lastStage=0 stage5Count=500
[snap] stage histogram:
[snap]   stage  0: 1514 frames
[snap]   stage  1: 548 frames
[snap]   stage  2: 548 frames
[snap]   stage  3: 544 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 500 frames
[snap]   stage  6: 500 frames
[snap]   stage  7: 500 frames
[snap]   stage  8: 500 frames
[snap]   stage 10: 500 frames
[snap]   stage 11: 645 frames
[snap]   stage 12: 1388 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000003A923A9EA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x0077821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0077821B -> 0x000003A8D358D000
[snap] ----------------------------------------
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=5 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C9DE80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C9E900 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=6 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=6 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C9E900 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C99880 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=7 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=7 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C99880 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C97200 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=8 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=8 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C97200 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C9DE80 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=9 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[glove-next-tick] seq=9 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C9DE80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000003A9115CA000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003A9115CB2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000003A8F9C97C80 alloc=11
[apply] world view 0x000003A9115CB2E0 painted (pk=417)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A8F8890880
[hud-find] child[1]=0x000003A8CCE2BC80 owner=0x000003A8CCB43C00 handle=0x4835A resolved=0x000003A9115C8000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003A9115CA000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A8F8896880
[hud-find] child[0]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 1 nodes
[apply-cache] rebuilding weapon=000003A9115CA000 hud=000003A8F296D400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A8F8896880
[hud-find] child[0]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 1 nodes
[glove-trigger] active=1 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C9F700 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=10 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A9102FB080
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-cache] rebuilding weapon=000003A9115CA000 hud=000003A8F296D400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=10 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C9F700 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5033 desiredDef=5033
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C94B80 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=11 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FFF2080
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-cache] rebuilding weapon=000003A9115CA000 hud=000003A8F296D400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=11 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C94B80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C94100 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=12 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A911E73C80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-cache] rebuilding weapon=000003A9115CA000 hud=000003A8F296D400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=12 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C94100 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10053.000 initial=10053.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5033 pk=10053 size=3 data=000003A8F9C91A80 alloc=11
[glove-paintkit] pk=10053 result=000003A8AAF044C0 nameOk=1 name="handwrap_leathery_fabric_blue_skulls"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=13 pawn=000003A8D358D000 item=000003A8D358E770 team=3 def=5033 pk=10053
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=3 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AEA18
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-cache] rebuilding weapon=000003A9115CA000 hud=000003A8F296D400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-next-tick] seq=13 pawn=000003A8D358D000 item=000003A8D358E770 def=5033 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A8F9C91A80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10053.000000 initial=10053.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=12096 lastStage=12 stage5Count=793
[snap] stage histogram:
[snap]   stage  0: 2399 frames
[snap]   stage  1: 841 frames
[snap]   stage  2: 841 frames
[snap]   stage  3: 837 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 793 frames
[snap]   stage  6: 793 frames
[snap]   stage  7: 793 frames
[snap]   stage  8: 793 frames
[snap]   stage 10: 793 frames
[snap]   stage 11: 965 frames
[snap]   stage 12: 2247 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000003A923A9EA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x0077821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0077821B -> 0x000003A8D358D000
[snap] ----------------------------------------
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=17212 lastStage=10 stage5Count=1109
[snap] stage histogram:
[snap]   stage  0: 3535 frames
[snap]   stage  1: 1157 frames
[snap]   stage  2: 1157 frames
[snap]   stage  3: 1153 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1109 frames
[snap]   stage  6: 1109 frames
[snap]   stage  7: 1109 frames
[snap]   stage  8: 1109 frames
[snap]   stage 10: 1110 frames
[snap]   stage 11: 1285 frames
[snap]   stage 12: 3378 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000003A923A9EA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x0077821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0077821B -> 0x000003A8D358D000
[snap] ----------------------------------------
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115CA000
[pw] weapon 0x000003A9115CA000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003A9115CA000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x000003A911D08000
[hud-find] armsNode=0x000003A8CCB20880
[hud-find] firstChild=0x000003A90FD3AC80
[hud-find] child[1]=0x000003A8F8896880 owner=0x000003A8F296D400 handle=0x1B0359 resolved=0x000003A9115CA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8F296D400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A9115C8000
[pw] weapon 0x000003A9115C8000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=22014 lastStage=11 stage5Count=1424
[snap] stage histogram:
[snap]   stage  0: 4518 frames
[snap]   stage  1: 1472 frames
[snap]   stage  2: 1472 frames
[snap]   stage  3: 1468 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1424 frames
[snap]   stage  6: 1424 frames
[snap]   stage  7: 1424 frames
[snap]   stage  8: 1424 frames
[snap]   stage 10: 1425 frames
[snap]   stage 11: 1606 frames
[snap]   stage 12: 4356 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000003A923A9EA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x0077821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0077821B -> 0x000003A8D358D000
[snap] ----------------------------------------
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92A8000
[pw] weapon 0x000003A8F92A8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000003A8F92A8000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003A8F92A92E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000003A9103E4000 alloc=11
[apply] world view 0x000003A8F92A92E0 painted (pk=38)
[hud-find] START weapon=0x000003A8F92A8000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x4AAC4217
[hud-find] arms=0x0000000000000000
[hud-find] FAIL: handle did not resolve
[apply-cache] rebuilding weapon=000003A8F92A8000 hud=0000000000000000 def=4 pk=38
[glove-diag] pawn=000003A8D358D000 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove] team changed: 3 -> 2
[glove-trigger] active=1 curDef=5033 desiredDef=5031
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=0
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[glove-observe] pawn=000003A8D358D000 reapply=0 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92A8000
[pw] weapon 0x000003A8F92A8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003A8F92A8000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A8F94D8880
[hud-find] child[0]=0x000003A8F94D8880 owner=0x000003A8CCB45000 handle=0x1E18363 resolved=0x000003A8F92A8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB45000 after 1 nodes
[apply-cache] rebuilding weapon=000003A8F92A8000 hud=000003A8CCB45000 def=4 pk=38
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92A8000
[pw] weapon 0x000003A8F92A8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003A8F92A8000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A8F94D8880
[hud-find] child[0]=0x000003A8F94D8880 owner=0x000003A8CCB45000 handle=0x1E18363 resolved=0x000003A8F92A8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB45000 after 1 nodes
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5031 pk=10063 size=3 data=000003A9103E6A00 alloc=11
[glove-paintkit] pk=10063 result=000003A8AAF04D80 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=14 pawn=000003A8D358D000 item=000003A8D358E770 team=2 def=5031 pk=10063
[glove] APPLIED def=5031 pk=10063 team=2
[glove-arms] pawn=000003A8D358D000 handle=0x95C54268 entity=000003A8F92B9800 scene=000003A8F94DE880 model=000003A8931B6400 namePtr=000003A86B618FA0 name="agents/models/tm_phoenix/tm_phoenix.vmdl"
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[glove-observe] pawn=000003A8D358D000 reapply=0 changed=0 def=5031 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92A8000
[pw] weapon 0x000003A8F92A8000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003A8F92A8000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A8F94D8880
[hud-find] child[0]=0x000003A8F94D8880 owner=0x000003A8CCB45000 handle=0x1E18363 resolved=0x000003A8F92A8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB45000 after 1 nodes
[apply-cache] rebuilding weapon=000003A8F92A8000 hud=000003A8CCB45000 def=4 pk=38
[glove-next-tick] seq=14 pawn=000003A8D358D000 item=000003A8D358E770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A9103E6A00 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-trigger] active=0 curDef=5031 desiredDef=5031
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5031 pk=10063 size=3 data=000003A9103E8600 alloc=11
[glove-paintkit] pk=10063 result=000003A8AAF04D80 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=15 pawn=000003A8D358D000 item=000003A8D358E770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=59
[pw] knife: applying Slaughter (pk=59 target def=523)
[knife] SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[apply] enter (weapon=0x000003A8F92AC000 def=523 pk=59)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003A8F92AD2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=59.000 initial=59.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000003A9103EB700 alloc=11
[apply] world view 0x000003A8F92AD2E0 painted (pk=59)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A8F94D8880
[hud-find] child[0]=0x000003A8F94D8880 owner=0x000003A8CCB45000 handle=0x1E18363 resolved=0x000003A8F92A8000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003A8F92AC000 hud=0000000000000000 def=523 pk=59
[glove-next-tick] seq=15 pawn=000003A8D358D000 item=000003A8D358E770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A9103E8600 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5031 pk=10063 size=3 data=000003A9103E3C80 alloc=11
[glove-paintkit] pk=10063 result=000003A8AAF04D80 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=16 pawn=000003A8D358D000 item=000003A8D358E770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-cache] rebuilding weapon=000003A8F92AC000 hud=000003A8CCB43C00 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=16 pawn=000003A8D358D000 item=000003A8D358E770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A9103E3C80 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[glove-model] stage=BEFORE-BODYGROUP pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[glove-model] stage=AFTER-BODYGROUP pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[attr-diag] item=000003A8D358E770 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10063.000 initial=10063.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000003A8D358E770 def=5031 pk=10063 size=3 data=000003A9103E4380 alloc=11
[glove-paintkit] pk=10063 result=000003A8AAF04D80 nameOk=1 name="specialist_fade"
[glove-flags] pawn=000003A8D358D000 reapply=0->1
[glove-sequence] applied seq=17 pawn=000003A8D358D000 item=000003A8D358E770 team=2 def=5031 pk=10063
[apply-cache] weapon model cache invalidated
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=0 gloveUpdate=1
[skin-regenerate] returned
[glove-model] stage=AFTER-REGENERATE pawn=000003A8D358D000 team=2 scene=000003A8F889C880 skeleton=000003A8F889C880 modelState=000003A8F889C9C0 rawHandle=0x3A85B7AF518
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-cache] rebuilding weapon=000003A8F92AC000 hud=000003A8CCB43C00 def=523 pk=59
[knife] HUD SetModel (schema): weapons/models/knife/knife_talon/weapon_knife_talon.vmdl
[glove-next-tick] seq=17 pawn=000003A8D358D000 item=000003A8D358E770 def=5031 init=1 idHigh=0xFFFFFFFF
[glove-snapshot] ===== NEXT-TICK item=000003A8D358E770 =====
[glove-snapshot] LOCAL size=3 data=000003A9103E4380 alloc=11
[glove-snapshot] LOCAL entry=0 def=6 value=10063.000000 initial=10063.000000
[glove-snapshot] LOCAL entry=1 def=7 value=0.000000 initial=0.000000
[glove-snapshot] LOCAL entry=2 def=8 value=0.001000 initial=0.001000
[glove-snapshot] NETWORKED size=0 data=0000000000000000 alloc=0
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=26805 lastStage=6 stage5Count=1734
[snap] stage histogram:
[snap]   stage  0: 5521 frames
[snap]   stage  1: 1782 frames
[snap]   stage  2: 1782 frames
[snap]   stage  3: 1777 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1734 frames
[snap]   stage  6: 1734 frames
[snap]   stage  7: 1733 frames
[snap]   stage  8: 1733 frames
[snap]   stage 10: 1734 frames
[snap]   stage 11: 1926 frames
[snap]   stage 12: 5348 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000003A923A9EA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x0077821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0077821B -> 0x000003A8D358D000
[snap] ----------------------------------------
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=31771 lastStage=0 stage5Count=2041
[snap] stage histogram:
[snap]   stage  0: 6621 frames
[snap]   stage  1: 2089 frames
[snap]   stage  2: 2089 frames
[snap]   stage  3: 2085 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2041 frames
[snap]   stage  6: 2041 frames
[snap]   stage  7: 2041 frames
[snap]   stage  8: 2041 frames
[snap]   stage 10: 2041 frames
[snap]   stage 11: 2241 frames
[snap]   stage 12: 6440 frames
[snap] dwLocalPlayerController @ 0x00007FFC758113F8 -> 0x000003A923A9EA00
[snap] dwLocalPlayerPawn       @ 0x00007FFC75A08160 -> 0x000003A83D9D0800
[snap] pawn: vtable=0x00007FFCD7AF3740 inClient=0 health=936
[snap] ctrl: vtable=0x00007FFC74EE0648 inClient=1 m_hPlayerPawn@0x92C = 0x0077821B (idx=539)
[snap] entitySystem @ 0x00007FFC759EEB28 = 0x000003A83D45E000 highestEntityIndex=385
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0077821B -> 0x000003A8D358D000
[snap] ----------------------------------------
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003A8D358D000
[apply] active 0x000003A8F92AC000
[pw] weapon 0x000003A8F92AC000 def=523
[pw] knife: applying Slaughter (pk=59 target def=523)
[hud-find] START weapon=0x000003A8F92AC000 pawn=0x000003A8D358D000
[hud-find] armsHandle=0x95C54268
[hud-find] arms=0x000003A8F92B9800
[hud-find] armsNode=0x000003A8F94DE880
[hud-find] firstChild=0x000003A90F796480
[hud-find] child[0]=0x000003A90F796480 owner=0x000003A8CCB43C00 handle=0x738362 resolved=0x000003A8F92AC000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003A8CCB43C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[