[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Nov  1 2026 21:52:21
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFB1F87924B -> rva 0x271EB28 (val=00000354C7469000)
[auto-off] dwLocalPlayerController      hit 0x00007FFB1F7955D0 -> rva 0x25413F8 (val=0000035523A56600)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFB1EFB15D5 -> rva 0x2738160 (val=00000354C7820800)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFB2157EB28
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFB213A13F8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFB21598160
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
[resolve] InvalidateDescription          @ 0x00007FFB20000A20
[resolve] BuildModernSkin                @ 0x00007FFB1FCA53D0
[resolve] SetMeshGroupMask               @ 0x00007FFB1F925910
[resolve] RegenerateSkins                @ 0x00007FFB1F68B330
[resolve] ReleaseCompositeMaterials      @ 0x00007FFB2034BB70
[resolve] GloveCreatePaintKit            @ 0x00007FFB1FFF0AA0
[resolve] AgentSetModel                  @ 0x00007FFB1F7C5B10
[resolve] KnifeUpdateSubclass            @ 0x00007FFB1F068FC0
[resolve] GloveSetBodyGroup              @ 0x00007FFB1F7C4A30
[resolve] MemAlloc                       @ 0x00007FFB3402DD30
[resolve] MemFree                        @ 0x00007FFB3402DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFB2157EB28 -> 0x00000354C7469000
[paintkit-schema] READY offset=0x2A0 kits=1481
[glove-paintkit-schema] READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FFB3B3E0000)
[schema] CreateInterface: FOUND (00007FFB3B417560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FFB3B456710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 00000354C7962800
[schema] classCount: 542
[schema] classes: 000003543961E000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[glove-schema] READY
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFB1FFEE2A5 -> ptrAddr 0x00007FFB214583E0 -> es 0x0000035439B23DB0
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x0000035439B23DB0
[schema-probe] CEconItemSchema* = 0x00000354C7939800
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x00000355376C0000 node0[+08]=0x0000035522F25C00 node0[+18]=0x09ADB52F00000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x00000354C7BEC1C0 node0[+08]=0x00000354C7A950A0 node0[+18]=0x00007FFB31744ED0
[schema-probe]   map @ schema+0x128 count=2059 elements=0x00000355376E0000 node0[+08]=0x0000000100000001 node0[+18]=0x0000035522F25C00
[schema-probe]   map @ schema+0x138 count=737 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x000003550EF70000 node0[+08]=0x0000035535ECA8A0 node0[+18]=0x0000035535ECA9E0
[schema-probe]   map @ schema+0x160 count=512 elements=0x00000354C7878000 node0[+08]=0x00000354E4384E40 node0[+18]=0x00000354E4384740
[schema-probe]   map @ schema+0x170 count=12 elements=0x00000355377D0A00 node0[+08]=0x0000000100000001 node0[+18]=0x000003553772B200
[schema-probe]   map @ schema+0x180 count=3 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x0000035522A58000 node0[+08]=0xEDBBDD0000000002 node0[+18]=0x00007FFB20B73B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x0000035522348000 node0[+08]=0x3F80000100000128 node0[+18]=0x0000035535F213A1
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x00000355376BCC00 node0[+08]=0x0000000100000001 node0[+18]=0x0000035535EB8941
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x0000035537950000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFB20B73C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x00000355364613E0 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x00000355377AA6A0
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x0000035523D70000 node0[+08]=0x65735F0100000002 node0[+18]=0x00000355351792E0
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x0000035522358000 node0[+08]=0x735F6E0100000013 node0[+18]=0x00000355357712A0
[schema-probe]   map @ schema+0x300 count=102 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x0000035522A4A000 node0[+08]=0x000000000000003E node0[+18]=0x0000035536BF33B0
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x00000354FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x0000035535109500 node0[+08]=0x00000355363F8760 node0[+18]=0x00000355363F8820
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000035400000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x000003552290E600 node0[+08]=0x00000355363F8C20 node0[+18]=0x00000355363F8C80
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000035400000013 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x400 count=19 elements=0x00000354E432C900 node0[+08]=0x00000355363F8C60 node0[+18]=0x00000355363F8CA0
[schema-probe] sane map candidates: 29
[verify] items count=2059 elems=0x00000355376C0000
[verify]   items[0] key=852 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=852 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=852 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=0 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=853 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x0000035523D70000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
[paint-target] scanning 1481 entries at 0x0000035523D70000
[paint-target] target=10037 index=482 key=10037 objectId=10037 object=0x00000355370638E0 name="sporty_purple"
[paint-target] target=10045 index=490 key=10045 objectId=10045 object=0x0000035537063FE0 name="sporty_poison_frog_blue_white"
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
[loadout] T/gloves: Specialist Gloves (Fade) pk=10063 def=5034
[loadout] CT/weapon: USP-S (Jawbreaker) pk=1173 def=61
[loadout] CT/weapon: Desert Eagle (Eastern Enigma) pk=1458 def=1
[loadout] CT/weapon: M4A4 (Temukau) pk=1228 def=16
[loadout] CT/weapon: Five-SeveN (Fairy Tale) pk=979 def=3
[loadout] CT/weapon: P250 (Digital Architect) pk=1081 def=36
[loadout] CT/weapon: MP9 (Wild Lily) pk=734 def=34
[loadout] CT/weapon: M4A1-S (Vaporwave) pk=106 def=60
[loadout] CT/weapon: AWP (Redline) pk=259 def=9
[loadout] CT/knife: Skeleton Knife (Doppler) pk=417 def=525
[loadout] CT/gloves: Hand Wraps (Cobalt Skulls) pk=10053 def=5032
[loadout] 20 items from E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan\n1ssan-data.json
[plan-a] CEconItemSystem* = 0x0000035439B23DB0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFB1FF927C0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFB1FF48540, setFloat=00007FFB1FF48750)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x0000035535ECAB20
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x0000035535ECABC0
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x0000035535ECAC60
[plan-a] inject: created=20 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FFB1F679DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FFB213C35A0 vtable=0x00007FFB20AC7200 fn=0x00007FFB1F9CEE60 slot=36
[fsn] hooked (vtable overwrite)
[fsn] first stage call seen
[ready] v9.0.3 split; targets=20

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035523A56600
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x015081AC (idx=428)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=13
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x015081AC -> 0x0000035513D22800
[snap] ----------------------------------------
[model-refresh] functions: SetModel=00007FFB1F7C5B10 Precache=00007FFB3C1A6B20 Resource=00007FFB3C219230 FileSystem=00007FFB330A43D0 Insert=00007FFB33F51B10 Purge=00007FFB33F53D60
[knife-anim] stage=6 reached
[glove-observe] pawn=0000035513D22800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000035513D22800
[match] FOUND pawn=0x0000035513D22800 hp=100
[apply] tick pawn=0x0000035513D22800
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=4581 lastStage=7 stage5Count=308
[snap] stage histogram:
[snap]   stage  0: 906 frames
[snap]   stage  1: 308 frames
[snap]   stage  2: 308 frames
[snap]   stage  3: 307 frames
[snap]   stage  5: 308 frames
[snap]   stage  6: 308 frames
[snap]   stage  7: 308 frames
[snap]   stage  8: 307 frames
[snap]   stage 10: 308 frames
[snap]   stage 11: 321 frames
[snap]   stage 12: 892 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035523A56600
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x015081AC (idx=428)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=13
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x015081AC -> 0x0000035513D22800
[snap] ----------------------------------------
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035513D22800
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=00000354C7820800 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 00000354C7820800
[apply] tick pawn=0x00000354C7820800
[apply] active 0x0000035590905400
[pw] weapon=0x0000035590905400 view=0x00000355909066E0
[pw]   view+0x00 = 0x20938640
[pw]   view+0x04 = 0x00007FFB
[pw]   view+0x08 = 0x00000000
[pw]   view+0x0C = 0x00000000
[pw]   view+0x10 = 0xE47A0C00
[pw]   view+0x14 = 0x00000354
[pw]   view+0x18 = 0x20938640
[pw]   view+0x1C = 0x00007FFB
[pw]   view+0x20 = 0x00000000
[pw]   view+0x24 = 0x00000000
[pw]   view+0x28 = 0xE47A0C20
[pw]   view+0x2C = 0x00000354
[pw]   view+0x30 = 0x20A7E618
[pw]   view+0x34 = 0x00007FFB
[pw]   view+0x38 = 0x00000000
[pw]   view+0x3C = 0x00000000
[pw] weapon+0x1290..0x12F0:
[pw]   +0x1290 = 0x0000000000000000
[pw]   +0x1298 = 0x3F80000000000000
[pw]   +0x12A0 = 0x00007FFB20950768
[pw]   +0x12A8 = 0x0000035590905400
[pw]   +0x12B0 = 0x3F8000003F800000
[pw]   +0x12B8 = 0x3F8000003F800000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FFB20938640
[pw]   +0x12E8 = 0x0000000000000000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[glove-observe] pawn=0000035590405000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000035590405000
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=7545 lastStage=0 stage5Count=461
[snap] stage histogram:
[snap]   stage  0: 1520 frames
[snap]   stage  1: 565 frames
[snap]   stage  2: 565 frames
[snap]   stage  3: 561 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 461 frames
[snap]   stage  6: 461 frames
[snap]   stage  7: 461 frames
[snap]   stage  8: 461 frames
[snap]   stage 10: 461 frames
[snap]   stage 11: 487 frames
[snap]   stage 12: 1541 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF32000
[pw] weapon 0x000003558AF32000 def=32
[team] pawn=0x0000035590405000, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000035590405000 reapply=0 changed=0 def=5032 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF32000
[pw] weapon 0x000003558AF32000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF32000
[pw] weapon 0x000003558AF32000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF32000
[pw] weapon 0x000003558AF32000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF32000
[pw] weapon 0x000003558AF32000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF32000
[pw] weapon 0x000003558AF32000 def=32
[pw] NO TARGET def=32 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000003558AF30000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003558AF312E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000003555B6B9D80 alloc=11
[apply] world view 0x000003558AF312E0 painted (pk=417)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035593161080
[hud-find] child[1]=0x000003558BF26880 owner=0x000003558AFDEC00 handle=0xE980A3 resolved=0x000003558AF32000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003558AF30000 hud=0000000000000000 def=525 pk=417
[hud-name] weapon selection entry refreshed: 000003558AF30000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035593161C80
[hud-find] child[0]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 1 nodes
[apply-cache] rebuilding weapon=000003558AF30000 hud=000003555E211400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035593161C80
[hud-find] child[0]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035593161C80
[hud-find] child[0]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035593161C80
[hud-find] child[0]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035593161C80
[hud-find] child[0]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035593161C80
[hud-find] child[0]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 1 nodes
[apply-cache] rebuilding weapon=000003558AF30000 hud=000003555E211400 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=12402 lastStage=0 stage5Count=766
[snap] stage histogram:
[snap]   stage  0: 2576 frames
[snap]   stage  1: 870 frames
[snap]   stage  2: 870 frames
[snap]   stage  3: 866 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 766 frames
[snap]   stage  6: 766 frames
[snap]   stage  7: 766 frames
[snap]   stage  8: 766 frames
[snap]   stage 10: 766 frames
[snap]   stage 11: 805 frames
[snap]   stage 12: 2584 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035592FDA480
[hud-find] child[1]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035592FDA480
[hud-find] child[1]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035592FDA480
[hud-find] child[1]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000003558AF3A000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003558AF3B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=0000035593131380 alloc=11
[apply] world view 0x000003558AF3B2E0 painted (pk=1173)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-cache] rebuilding weapon=000003558AF3A000 hud=000003555A9D1400 def=61 pk=1173
[hud-name] weapon selection entry refreshed: 000003558AF3A000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[2]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3A000
[pw] weapon 0x000003558AF3A000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003558AF3A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A8880
[hud-find] child[0]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555A9D1400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[apply] enter (weapon=0x000003552651E000 def=60 pk=106)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003552651F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=106.000 initial=106.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.298660 initial=0.298660
[apply] world post-create: size=3 data=0000035526BD0580 alloc=11
[apply] world view 0x000003552651F2E0 painted (pk=106)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-cache] rebuilding weapon=000003552651E000 hud=0000035549CA0C00 def=60 pk=106
[hud-name] weapon selection entry refreshed: 000003552651E000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned

=== SNAPSHOT ===
[snap] fsnCount=17186 lastStage=12 stage5Count=1077
[snap] stage histogram:
[snap]   stage  0: 3568 frames
[snap]   stage  1: 1181 frames
[snap]   stage  2: 1181 frames
[snap]   stage  3: 1177 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1077 frames
[snap]   stage  6: 1077 frames
[snap]   stage  7: 1077 frames
[snap]   stage  8: 1077 frames
[snap]   stage 10: 1077 frames
[snap]   stage 11: 1125 frames
[snap]   stage 12: 3568 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651E000
[pw] weapon 0x000003552651E000 def=60
[pw] matched team 'CT'
[pw] applying Vaporwave (pk=106 def=60)
[hud-find] START weapon=0x000003552651E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA0C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=22293 lastStage=0 stage5Count=1393
[snap] stage histogram:
[snap]   stage  0: 4700 frames
[snap]   stage  1: 1497 frames
[snap]   stage  2: 1497 frames
[snap]   stage  3: 1493 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1393 frames
[snap]   stage  6: 1393 frames
[snap]   stage  7: 1393 frames
[snap]   stage  8: 1393 frames
[snap]   stage 10: 1393 frames
[snap]   stage 11: 1445 frames
[snap]   stage 12: 4695 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFBC80
[hud-find] child[0]=0x0000035591EFBC80 owner=0x0000035549CA0C00 handle=0x16C00A6 resolved=0x000003552651E000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[apply] enter (weapon=0x000003552651C000 def=16 pk=1228)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003552651D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1228.000 initial=1228.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.070775 initial=0.070775
[apply] world post-create: size=3 data=0000035526BD6E80 alloc=11
[apply] world view 0x000003552651D2E0 painted (pk=1228)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-cache] rebuilding weapon=000003552651C000 hud=0000035549CAAC00 def=16 pk=1228
[hud-name] weapon selection entry refreshed: 000003552651C000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003552651C000
[pw] weapon 0x000003552651C000 def=16
[pw] matched team 'CT'
[pw] applying Temukau (pk=1228 def=16)
[hud-find] START weapon=0x000003552651C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAAC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=27023 lastStage=0 stage5Count=1709
[snap] stage histogram:
[snap]   stage  0: 5643 frames
[snap]   stage  1: 1813 frames
[snap]   stage  2: 1813 frames
[snap]   stage  3: 1809 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1709 frames
[snap]   stage  6: 1709 frames
[snap]   stage  7: 1709 frames
[snap]   stage  8: 1709 frames
[snap]   stage 10: 1709 frames
[snap]   stage 11: 1765 frames
[snap]   stage 12: 5634 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=214
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003554E3A6480
[hud-find] child[0]=0x000003554E3A6480 owner=0x0000035549CAAC00 handle=0x3C80A7 resolved=0x000003552651C000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035526514000
[pw] weapon 0x0000035526514000 def=40
[pw] NO TARGET def=40 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035526514000
[pw] weapon 0x0000035526514000 def=40
[pw] NO TARGET def=40 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035526514000
[pw] weapon 0x0000035526514000 def=40
[pw] NO TARGET def=40 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035526514000
[pw] weapon 0x0000035526514000 def=40
[pw] NO TARGET def=40 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035526514000
[pw] weapon 0x0000035526514000 def=40
[pw] NO TARGET def=40 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035526514000
[pw] weapon 0x0000035526514000 def=40
[pw] NO TARGET def=40 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035526514000
[pw] weapon 0x0000035526514000 def=40
[pw] NO TARGET def=40 team=CT
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355917CE480
[hud-find] child[0]=0x00000355917CE480 owner=0x000003555E210000 handle=0xC200A8 resolved=0x0000035526514000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355917CE480
[hud-find] child[0]=0x00000355917CE480 owner=0x000003555E210000 handle=0xC200A8 resolved=0x0000035526514000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355917CE480
[hud-find] child[0]=0x00000355917CE480 owner=0x000003555E210000 handle=0xC200A8 resolved=0x0000035526514000
[hud-find] child[1]=0x000003554E3A8880 owner=0x000003555A9D1400 handle=0xE980A5 resolved=0x000003558AF3A000
[hud-find] child[3]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E211400 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[apply] enter (weapon=0x000003553082C000 def=34 pk=734)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003553082D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=734.000 initial=734.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.350000 initial=0.350000
[apply] world post-create: size=3 data=00000355494C6B80 alloc=11
[apply] world view 0x000003553082D2E0 painted (pk=734)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-cache] rebuilding weapon=000003553082C000 hud=0000035549CA9800 def=34 pk=734
[hud-name] weapon selection entry refreshed: 000003553082C000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=31838 lastStage=0 stage5Count=2024
[snap] stage histogram:
[snap]   stage  0: 6633 frames
[snap]   stage  1: 2128 frames
[snap]   stage  2: 2128 frames
[snap]   stage  3: 2124 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2024 frames
[snap]   stage  6: 2024 frames
[snap]   stage  7: 2024 frames
[snap]   stage  8: 2024 frames
[snap]   stage 10: 2024 frames
[snap]   stage 11: 2085 frames
[snap]   stage 12: 6619 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=216
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591EFA480
[hud-find] child[0]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[apply] enter (weapon=0x00000355265D4000 def=1 pk=1458)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000355265D52E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1458.000 initial=1458.000
[attr-entry] 1: def=7 value=53.000 initial=53.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=00000355494CB500 alloc=11
[apply] world view 0x00000355265D52E0 painted (pk=1458)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-cache] rebuilding weapon=00000355265D4000 hud=0000035549CAE800 def=1 pk=1458
[hud-name] weapon selection entry refreshed: 00000355265D4000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265D4000
[pw] weapon 0x00000355265D4000 def=1
[pw] matched team 'CT'
[pw] applying Eastern Enigma (pk=1458 def=1)
[hud-find] START weapon=0x00000355265D4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x00000355911AA480
[hud-find] child[0]=0x00000355911AA480 owner=0x0000035549CAE800 handle=0x12C80AA resolved=0x00000355265D4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CAE800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=36485 lastStage=0 stage5Count=2341
[snap] stage histogram:
[snap]   stage  0: 7530 frames
[snap]   stage  1: 2445 frames
[snap]   stage  2: 2445 frames
[snap]   stage  3: 2441 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2341 frames
[snap]   stage  6: 2341 frames
[snap]   stage  7: 2341 frames
[snap]   stage  8: 2341 frames
[snap]   stage 10: 2341 frames
[snap]   stage 11: 2405 frames
[snap]   stage 12: 7513 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=217
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFA000
[pw] weapon 0x0000035549CFA000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[apply] enter (weapon=0x0000035549CFA000 def=36 pk=1081)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000035549CFB2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1081.000 initial=1081.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.245000 initial=0.245000
[apply] world post-create: size=3 data=00000355494CA380 alloc=11
[apply] world view 0x0000035549CFB2E0 painted (pk=1081)
[hud-find] START weapon=0x0000035549CFA000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E215000 after 1 nodes
[apply-cache] rebuilding weapon=0000035549CFA000 hud=000003555E215000 def=36 pk=1081
[hud-name] weapon selection entry refreshed: 0000035549CFA000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFA000
[pw] weapon 0x0000035549CFA000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x0000035549CFA000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E215000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFA000
[pw] weapon 0x0000035549CFA000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x0000035549CFA000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E215000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFA000
[pw] weapon 0x0000035549CFA000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x0000035549CFA000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E215000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFA000
[pw] weapon 0x0000035549CFA000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x0000035549CFA000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E215000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFA000
[pw] weapon 0x0000035549CFA000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x0000035549CFA000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E215000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFA000
[pw] weapon 0x0000035549CFA000 def=36
[pw] matched team 'CT'
[pw] applying Digital Architect (pk=1081 def=36)
[hud-find] START weapon=0x0000035549CFA000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E215000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=41333 lastStage=0 stage5Count=2655
[snap] stage histogram:
[snap]   stage  0: 8541 frames
[snap]   stage  1: 2759 frames
[snap]   stage  2: 2759 frames
[snap]   stage  3: 2755 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2655 frames
[snap]   stage  6: 2655 frames
[snap]   stage  7: 2655 frames
[snap]   stage  8: 2655 frames
[snap]   stage 10: 2655 frames
[snap]   stage 11: 2725 frames
[snap]   stage 12: 8518 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=218
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003553082C000
[pw] weapon 0x000003553082C000 def=34
[pw] matched team 'CT'
[pw] applying Wild Lily (pk=734 def=34)
[hud-find] START weapon=0x000003553082C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035591581880
[hud-find] child[0]=0x0000035591581880 owner=0x000003555E215000 handle=0xC900AB resolved=0x0000035549CFA000
[hud-find] child[1]=0x0000035591EFA480 owner=0x0000035549CA9800 handle=0x1EC00A9 resolved=0x000003553082C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035549CA9800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E252000
[pw] weapon 0x000003555E252000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[apply] enter (weapon=0x000003555E252000 def=61 pk=1173)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003555E2532E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1173.000 initial=1173.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=0000035526BDF000 alloc=11
[apply] world view 0x000003555E2532E0 painted (pk=1173)
[hud-find] START weapon=0x000003555E252000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x0000035592FDA480
[hud-find] child[1]=0x0000035593161C80 owner=0x000003555E211400 handle=0x8D00A2 resolved=0x000003558AF30000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003555E252000 hud=0000000000000000 def=61 pk=1173
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E252000
[pw] weapon 0x000003555E252000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003555E252000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AF8C400 after 1 nodes
[apply-cache] rebuilding weapon=000003555E252000 hud=000003558AF8C400 def=61 pk=1173
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E252000
[pw] weapon 0x000003555E252000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003555E252000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AF8C400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E252000
[pw] weapon 0x000003555E252000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003555E252000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AF8C400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E252000
[pw] weapon 0x000003555E252000 def=61
[pw] matched team 'CT'
[pw] applying Jawbreaker (pk=1173 def=61)
[hud-find] START weapon=0x000003555E252000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AF8C400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=46098 lastStage=11 stage5Count=2967
[snap] stage histogram:
[snap]   stage  0: 9519 frames
[snap]   stage  1: 3071 frames
[snap]   stage  2: 3071 frames
[snap]   stage  3: 3067 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2967 frames
[snap]   stage  6: 2967 frames
[snap]   stage  7: 2967 frames
[snap]   stage  8: 2967 frames
[snap]   stage 10: 2967 frames
[snap]   stage 11: 3045 frames
[snap]   stage 12: 9489 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25E000
[pw] weapon 0x000003555E25E000 def=42
[pw] knife: applying Doppler (pk=417 target def=525)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000003555E25E000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003555E25F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000003555B6B7380 alloc=11
[apply] world view 0x000003555E25F2E0 painted (pk=417)
[hud-find] START weapon=0x000003555E25E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003555E25E000 hud=0000000000000000 def=525 pk=417
[hud-name] weapon selection entry refreshed: 000003555E25E000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25E000
[pw] weapon 0x000003555E25E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003555E25E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003555E25E000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25E000
[pw] weapon 0x000003555E25E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003555E25E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003555E25E000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25E000
[pw] weapon 0x000003555E25E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003555E25E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003555E25E000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25E000
[pw] weapon 0x000003555E25E000 def=525
[pw] knife: applying Doppler (pk=417 target def=525)
[hud-find] START weapon=0x000003555E25E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x000003558AF4E800
[hud-find] armsNode=0x000003558BF29880
[hud-find] firstChild=0x000003558AF77080
[hud-find] child[0]=0x000003558AF77080 owner=0x000003558AF8C400 handle=0x1F9018E resolved=0x000003555E252000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003555E25E000 hud=0000000000000000 def=525 pk=417
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[model-refresh] map acquired schema=00000354C7939800 count=2059 capacityFlags=0x1000 elements=00000355376C0000
[model-refresh] candidate team=2 item=customplayer_tm_anarchist family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_anarchist_varianta family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_anarchist_variantb family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_anarchist_variantc family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_anarchist_variantd family=tm_anarchist model=agents/models/tm_anarchist/tm_anarchist_variantd.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_anarchist_variantd model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate family=tm_pirate model=agents/models/tm_pirate/tm_pirate.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate_varianta family=tm_pirate model=agents/models/tm_pirate/tm_pirate_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate_variantb family=tm_pirate model=agents/models/tm_pirate/tm_pirate_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate_variantc family=tm_pirate model=agents/models/tm_pirate/tm_pirate_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_pirate_variantd family=tm_pirate model=agents/models/tm_pirate/tm_pirate_variantd.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_pirate_variantd model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional family=tm_professional model=agents/models/tm_professional/tm_professional.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional_var1 family=tm_professional model=agents/models/tm_professional/tm_professional_var1.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional_var1 model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional_var2 family=tm_professional model=agents/models/tm_professional/tm_professional_var2.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional_var2 model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional_var3 family=tm_professional model=agents/models/tm_professional/tm_professional_var3.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional_var3 model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_professional_var4 family=tm_professional model=agents/models/tm_professional/tm_professional_var4.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_professional_var4 model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist family=tm_separatist model=agents/models/tm_separatist/tm_separatist.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist_varianta family=tm_separatist model=agents/models/tm_separatist/tm_separatist_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist_variantb family=tm_separatist model=agents/models/tm_separatist/tm_separatist_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist_variantc family=tm_separatist model=agents/models/tm_separatist/tm_separatist_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_separatist_variantd family=tm_separatist model=agents/models/tm_separatist/tm_separatist_variantd.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_separatist_variantd model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_variante family=tm_balkan model=agents/models/tm_balkan/tm_balkan_variante.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_variante model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_varianta family=tm_balkan model=agents/models/tm_balkan/tm_balkan_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_variantb family=tm_balkan model=agents/models/tm_balkan/tm_balkan_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_variantc family=tm_balkan model=agents/models/tm_balkan/tm_balkan_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_balkan_variantd family=tm_balkan model=agents/models/tm_balkan/tm_balkan_variantd.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_balkan_variantd model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_jumpsuit_varianta family=tm_jumpsuit model=agents/models/tm_jumpsuit/tm_jumpsuit_varianta.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_jumpsuit_varianta model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_jumpsuit_variantb family=tm_jumpsuit model=agents/models/tm_jumpsuit/tm_jumpsuit_variantb.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_jumpsuit_variantb model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_jumpsuit_variantc family=tm_jumpsuit model=agents/models/tm_jumpsuit/tm_jumpsuit_variantc.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_jumpsuit_variantc model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_phoenix_heavy family=tm_phoenix_heavy model=agents/models/tm_phoenix_heavy/tm_phoenix_heavy.vmdl compiled=0 current=0
[model-refresh] schema fallback team=2 item=customplayer_tm_phoenix_heavy model=agents/models/tm_phoenix/tm_phoenix.vmdl compiled=1 current=1
[model-refresh] candidate team=2 item=customplayer_tm_leet_varianta family=tm_leet model=agents/models/tm_leet/tm_leet_varianta.vmdl compiled=1 current=0
[model-refresh] selected candidate: agents/models/tm_leet/tm_leet_varianta.vmdl
[model-refresh] swap: agents/models/tm_phoenix/tm_phoenix.vmdl -> agents/models/tm_leet/tm_leet_varianta.vmdl
[glove-observe] pawn=0000035590405000 reapply=1 changed=0 def=0 init=0 idHigh=0xFFFFFFFF
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[apply] enter (weapon=0x000003558B896000 def=4 pk=38)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003558B8972E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=38.000 initial=38.000
[attr-entry] 1: def=7 value=118.000 initial=118.000
[attr-entry] 2: def=8 value=0.005328 initial=0.005328
[apply] world post-create: size=3 data=000003555B6B2D80 alloc=11
[apply] world view 0x000003558B8972E0 painted (pk=38)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9CB2417A
[hud-find] arms=0x0000000000000000
[hud-find] FAIL: handle did not resolve
[apply-cache] rebuilding weapon=000003558B896000 hud=0000000000000000 def=4 pk=38
[hud-name] weapon selection entry refreshed: 000003558B896000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[model-refresh] original model restored: agents/models/tm_phoenix/tm_phoenix.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000035590405000 reapply=0 changed=0 def=5034 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF29880
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 2 nodes
[apply-cache] rebuilding weapon=000003558B896000 hud=000003558B855000 def=4 pk=38
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF29880
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF29880
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF29880
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF29880
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF29880
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF29880
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=59
[pw] knife: applying Marble Fade (pk=413 target def=505)
[knife] SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply] enter (weapon=0x000003558B89C000 def=505 pk=413)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003558B89D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=413.000 initial=413.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000003555B6B4D00 alloc=11
[apply] world view 0x000003558B89D2E0 painted (pk=413)
[mesh-diag] pk=413 found=1 usesOldModel=1 mask=2
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF29880
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003558B89C000 hud=0000000000000000 def=505 pk=413
[hud-name] weapon selection entry refreshed: 000003558B89C000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-cache] rebuilding weapon=000003558B89C000 hud=00000355971A6400 def=505 pk=413
[knife] HUD SetModel (schema): weapons/models/knife/knife_flip/weapon_knife_flip.vmdl
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000
[hud-find] child[2]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=50713 lastStage=12 stage5Count=3266
[snap] stage histogram:
[snap]   stage  0: 10481 frames
[snap]   stage  1: 3370 frames
[snap]   stage  2: 3370 frames
[snap]   stage  3: 3366 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3266 frames
[snap]   stage  6: 3266 frames
[snap]   stage  7: 3266 frames
[snap]   stage  8: 3266 frames
[snap]   stage 10: 3266 frames
[snap]   stage 11: 3357 frames
[snap]   stage 12: 10438 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000
[hud-find] child[2]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000
[hud-find] child[2]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[apply] enter (weapon=0x000003555E25A000 def=7 pk=1171)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003555E25B2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1171.000 initial=1171.000
[attr-entry] 1: def=7 value=246.000 initial=246.000
[attr-entry] 2: def=8 value=0.122852 initial=0.122852
[apply] world post-create: size=3 data=000003555B6B6200 alloc=11
[apply] world view 0x000003555E25B2E0 painted (pk=1171)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-cache] rebuilding weapon=000003555E25A000 hud=000003555E216400 def=7 pk=1171
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=55585 lastStage=10 stage5Count=3580
[snap] stage histogram:
[snap]   stage  0: 11504 frames
[snap]   stage  1: 3684 frames
[snap]   stage  2: 3684 frames
[snap]   stage  3: 3680 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3580 frames
[snap]   stage  6: 3580 frames
[snap]   stage  7: 3580 frames
[snap]   stage  8: 3580 frames
[snap]   stage 10: 3581 frames
[snap]   stage 11: 3676 frames
[snap]   stage 12: 11455 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000
[hud-find] child[1]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000
[hud-find] child[1]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000
[hud-find] child[1]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000
[hud-find] child[1]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[apply] enter (weapon=0x0000035592F92000 def=9 pk=1206)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000035592F932E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1206.000 initial=1206.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=000003555B6B6580 alloc=11
[apply] world view 0x0000035592F932E0 painted (pk=1206)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-cache] rebuilding weapon=0000035592F92000 hud=0000035591F35400 def=9 pk=1206
[hud-name] weapon selection entry refreshed: 0000035592F92000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=60173 lastStage=11 stage5Count=3893
[snap] stage histogram:
[snap]   stage  0: 12389 frames
[snap]   stage  1: 3997 frames
[snap]   stage  2: 3997 frames
[snap]   stage  3: 3993 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3893 frames
[snap]   stage  6: 3893 frames
[snap]   stage  7: 3893 frames
[snap]   stage  8: 3893 frames
[snap]   stage 10: 3894 frames
[snap]   stage 11: 3997 frames
[snap]   stage 12: 12333 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[apply] enter (weapon=0x000003558AF3E000 def=17 pk=433)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003558AF3F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=433.000 initial=433.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.225000 initial=0.225000
[apply] world post-create: size=3 data=000003555B35C300 alloc=11
[apply] world view 0x000003558AF3F2E0 painted (pk=433)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-cache] rebuilding weapon=000003558AF3E000 hud=0000035591F6D800 def=17 pk=433
[hud-name] weapon selection entry refreshed: 000003558AF3E000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88B480
[hud-find] child[0]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=64770 lastStage=12 stage5Count=4209
[snap] stage histogram:
[snap]   stage  0: 13266 frames
[snap]   stage  1: 4313 frames
[snap]   stage  2: 4313 frames
[snap]   stage  3: 4309 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4209 frames
[snap]   stage  6: 4209 frames
[snap]   stage  7: 4209 frames
[snap]   stage  8: 4209 frames
[snap]   stage 10: 4209 frames
[snap]   stage 11: 4317 frames
[snap]   stage 12: 13206 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=215
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000
[hud-find] child[1]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[apply] enter (weapon=0x000003558AF38000 def=1 pk=764)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003558AF392E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=764.000 initial=764.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.400000 initial=0.400000
[apply] world post-create: size=3 data=00000355494C4F80 alloc=11
[apply] world view 0x000003558AF392E0 painted (pk=764)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-cache] rebuilding weapon=000003558AF38000 hud=0000035591F27800 def=1 pk=764
[hud-name] weapon selection entry refreshed: 000003558AF38000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000
[hud-find] child[1]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[apply] enter (weapon=0x0000035549CFE000 def=36 pk=130)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000035549CFF2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=130.000 initial=130.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.400000 initial=0.400000
[apply] world post-create: size=3 data=00000355494CB180 alloc=11
[apply] world view 0x0000035549CFF2E0 painted (pk=130)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-cache] rebuilding weapon=0000035549CFE000 hud=0000035591F37C00 def=36 pk=130
[hud-name] weapon selection entry refreshed: 0000035549CFE000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=69593 lastStage=12 stage5Count=4526
[snap] stage histogram:
[snap]   stage  0: 14251 frames
[snap]   stage  1: 4630 frames
[snap]   stage  2: 4630 frames
[snap]   stage  3: 4626 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4526 frames
[snap]   stage  6: 4526 frames
[snap]   stage  7: 4526 frames
[snap]   stage  8: 4526 frames
[snap]   stage 10: 4526 frames
[snap]   stage 11: 4637 frames
[snap]   stage 12: 14188 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=216
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFCEC80
[hud-find] child[0]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000
[hud-find] child[1]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFCEC80
[hud-find] child[0]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000
[hud-find] child[1]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF3E000
[pw] weapon 0x000003558AF3E000 def=17
[pw] matched team 'T'
[pw] applying Neon Rider (pk=433 def=17)
[hud-find] START weapon=0x000003558AF3E000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFCEC80
[hud-find] child[0]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000
[hud-find] child[1]=0x000003558B88B480 owner=0x0000035591F6D800 handle=0x690195 resolved=0x000003558AF3E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F6D800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[apply] enter (weapon=0x00000355265E4000 def=30 pk=179)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000355265E52E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=179.000 initial=179.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.430000 initial=0.430000
[apply] world post-create: size=3 data=000003555B359900 alloc=11
[apply] world view 0x00000355265E52E0 painted (pk=179)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFCEC80
[hud-find] child[0]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 1 nodes
[apply-cache] rebuilding weapon=00000355265E4000 hud=000003558AFDEC00 def=30 pk=179
[hud-name] weapon selection entry refreshed: 00000355265E4000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFCEC80
[hud-find] child[0]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFCEC80
[hud-find] child[0]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFCEC80
[hud-find] child[0]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=74431 lastStage=7 stage5Count=4841
[snap] stage histogram:
[snap]   stage  0: 15254 frames
[snap]   stage  1: 4945 frames
[snap]   stage  2: 4945 frames
[snap]   stage  3: 4940 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4841 frames
[snap]   stage  6: 4841 frames
[snap]   stage  7: 4841 frames
[snap]   stage  8: 4840 frames
[snap]   stage 10: 4841 frames
[snap]   stage 11: 4957 frames
[snap]   stage 12: 15185 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=217
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[apply] enter (weapon=0x000003558AF30000 def=13 pk=661)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003558AF312E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=661.000 initial=661.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.275000 initial=0.275000
[apply] world post-create: size=3 data=000003555B6B1C00 alloc=11
[apply] world view 0x000003558AF312E0 painted (pk=661)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-cache] rebuilding weapon=000003558AF30000 hud=0000035591F34000 def=13 pk=661
[hud-name] weapon selection entry refreshed: 000003558AF30000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=79161 lastStage=0 stage5Count=5155
[snap] stage histogram:
[snap]   stage  0: 16205 frames
[snap]   stage  1: 5259 frames
[snap]   stage  2: 5259 frames
[snap]   stage  3: 5255 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5155 frames
[snap]   stage  6: 5155 frames
[snap]   stage  7: 5155 frames
[snap]   stage  8: 5155 frames
[snap]   stage 10: 5155 frames
[snap]   stage 11: 5277 frames
[snap]   stage 12: 16130 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=218
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=83585 lastStage=12 stage5Count=5470
[snap] stage histogram:
[snap]   stage  0: 16999 frames
[snap]   stage  1: 5574 frames
[snap]   stage  2: 5574 frames
[snap]   stage  3: 5570 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5470 frames
[snap]   stage  6: 5470 frames
[snap]   stage  7: 5470 frames
[snap]   stage  8: 5470 frames
[snap]   stage 10: 5470 frames
[snap]   stage 11: 5597 frames
[snap]   stage 12: 16920 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=219
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[apply] enter (weapon=0x00000355265E8000 def=9 pk=1206)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000355265E92E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1206.000 initial=1206.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.500000 initial=0.500000
[apply] world post-create: size=3 data=00000355494CCA00 alloc=11
[apply] world view 0x00000355265E92E0 painted (pk=1206)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-cache] rebuilding weapon=00000355265E8000 hud=000003558B856400 def=9 pk=1206
[hud-name] weapon selection entry refreshed: 00000355265E8000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E8000
[pw] weapon 0x00000355265E8000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x00000355265E8000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF23880
[hud-find] child[0]=0x000003558BF23880 owner=0x000003558B856400 handle=0xD5819A resolved=0x00000355265E8000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B856400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x00000355265E4000
[pw] weapon 0x00000355265E4000 def=30
[pw] matched team 'T'
[pw] applying Nuclear Threat (pk=179 def=30)
[hud-find] START weapon=0x00000355265E4000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558AFC4480
[hud-find] child[0]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000
[hud-find] child[1]=0x000003558AFCEC80 owner=0x000003558AFDEC00 handle=0x1798198 resolved=0x00000355265E4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558AFDEC00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=88475 lastStage=0 stage5Count=5787
[snap] stage histogram:
[snap]   stage  0: 18018 frames
[snap]   stage  1: 5891 frames
[snap]   stage  2: 5891 frames
[snap]   stage  3: 5887 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5787 frames
[snap]   stage  6: 5787 frames
[snap]   stage  7: 5787 frames
[snap]   stage  8: 5787 frames
[snap]   stage 10: 5787 frames
[snap]   stage 11: 5917 frames
[snap]   stage 12: 17935 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=219
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000
[hud-find] child[1]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000
[hud-find] child[1]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF30000
[pw] weapon 0x000003558AF30000 def=13
[pw] matched team 'T'
[pw] applying Sugar Rush (pk=661 def=13)
[hud-find] START weapon=0x000003558AF30000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B88E480
[hud-find] child[0]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000
[hud-find] child[1]=0x000003558AFC4480 owner=0x0000035591F34000 handle=0x1EE0199 resolved=0x000003558AF30000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F34000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558AF38000
[pw] weapon 0x000003558AF38000 def=1
[pw] matched team 'T'
[pw] applying Fennec Fox (pk=764 def=1)
[hud-find] START weapon=0x000003558AF38000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000
[hud-find] child[1]=0x000003558B88E480 owner=0x0000035591F27800 handle=0x8D0196 resolved=0x000003558AF38000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F27800 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035592F92000
[pw] weapon 0x0000035592F92000 def=9
[pw] matched team 'T'
[pw] applying Printstream (pk=1206 def=9)
[hud-find] START weapon=0x0000035592F92000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558B885480
[hud-find] child[0]=0x000003558B885480 owner=0x0000035591F35400 handle=0x1C38194 resolved=0x0000035592F92000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F35400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B896000
[pw] weapon 0x000003558B896000 def=4
[pw] matched team 'T'
[pw] applying Fade (pk=38 def=4)
[hud-find] START weapon=0x000003558B896000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003558BF2EC80
[hud-find] child[0]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000
[hud-find] child[1]=0x000003558B8BCC80 owner=0x000003558B855000 handle=0x588192 resolved=0x000003558B896000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003558B855000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003555E25A000
[pw] weapon 0x000003555E25A000 def=7
[pw] matched team 'T'
[pw] applying Inheritance (pk=1171 def=7)
[hud-find] START weapon=0x000003555E25A000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000
[hud-find] child[1]=0x000003558BF2EC80 owner=0x000003555E216400 handle=0x1BC8193 resolved=0x000003555E25A000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003555E216400 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x0000035549CFE000
[pw] weapon 0x0000035549CFE000 def=36
[pw] matched team 'T'
[pw] applying Epicenter (pk=130 def=36)
[hud-find] START weapon=0x0000035549CFE000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091AC80
[hud-find] child[0]=0x000003559091AC80 owner=0x0000035591F37C00 handle=0x1AB8197 resolved=0x0000035549CFE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000035591F37C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=93402 lastStage=0 stage5Count=6106
[snap] stage histogram:
[snap]   stage  0: 19046 frames
[snap]   stage  1: 6210 frames
[snap]   stage  2: 6210 frames
[snap]   stage  3: 6206 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 6106 frames
[snap]   stage  6: 6106 frames
[snap]   stage  7: 6106 frames
[snap]   stage  8: 6106 frames
[snap]   stage 10: 6106 frames
[snap]   stage 11: 6237 frames
[snap]   stage 12: 18962 frames
[snap] dwLocalPlayerController @ 0x00007FFB213A13F8 -> 0x0000035531766E00
[snap] dwLocalPlayerPawn       @ 0x00007FFB21598160 -> 0x00000354C7820800
[snap] pawn: vtable=0x00007FFB247B3740 inClient=0 health=853
[snap] ctrl: vtable=0x00007FFB20A70648 inClient=1 m_hPlayerPawn@0x92C = 0x014B0158 (idx=344)
[snap] entitySystem @ 0x00007FFB2157EB28 = 0x00000354C7469000 highestEntityIndex=219
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x014B0158 -> 0x0000035590405000
[snap] ----------------------------------------
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000035590405000
[apply] active 0x000003558B89C000
[pw] weapon 0x000003558B89C000 def=505
[pw] knife: applying Marble Fade (pk=413 target def=505)
[hud-find] START weapon=0x000003558B89C000 pawn=0x0000035590405000
[hud-find] armsHandle=0x9DB9C2D0
[hud-find] arms=0x0000035593108800
[hud-find] armsNode=0x000003558B8B5480
[hud-find] firstChild=0x000003559091D080
[hud-find] child[0]=0x000003559091D080 owner=0x00000355971A6400 handle=0x9F8191 resolved=0x000003558B89C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000355971A6400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
