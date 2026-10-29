Log:
[n1ssan] console attached
[n1ssan] log: E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan-dll\x64\Release\n1ssan-dll.log
[build] v9.0.3 BUILD-TEST Oct 29 2026 14:09:12
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFB4A1A924B -> rva 0x271EB08 (val=0000024591448800)
[auto-off] dwLocalPlayerController      hit 0x00007FFB4A0C55D0 -> rva 0x25413F8 (val=0000024625F67800)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFB498E15D5 -> rva 0x2738140 (val=00000245919A2E00)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFB4BEAEB08
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFB4BCD13F8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFB4BEC8140
[resolve] InvalidateDescription          @ 0x00007FFB4A930940
[resolve] BuildModernSkin                @ 0x00007FFB4A5D53D0
[resolve] SetMeshGroupMask               @ 0x00007FFB4A255910
[resolve] RegenerateSkins                @ 0x00007FFB49FBB330
[resolve] ReleaseCompositeMaterials      @ 0x00007FFB4AC7BA90
[resolve] GloveCreatePaintKit            @ 0x00007FFB4A9209C0
[resolve] AgentSetModel                  @ 0x00007FFB4A0F5B10
[resolve] KnifeUpdateSubclass            @ 0x00007FFB49998FC0
[resolve] GloveSetBodyGroup              @ 0x00007FFB4A0F4A30
[resolve] MemAlloc                       @ 0x00007FFB49B3DF60
[resolve] MemFree                        @ 0x00007FFB4B1BBC20
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFB4BEAEB08 -> 0x0000024591448800
=== [schema-probe] start ===
[schema-probe] pattern hit @ 0x00007FFB4A91E285 -> ptrAddr 0x00007FFB4BD883E0 -> es 0x0000024505B03E20
[schema-probe] pattern scan: 1 hit(s)
[schema-probe] CEconItemSystem* = 0x0000024505B03E20
[schema-probe] CEconItemSchema* = 0x00000245917E9E00
[schema-probe] sweeping schema+0x0F8..schema+0x400:
[schema-probe]   map @ schema+0x0F8 count=2059 elements=0x00000245FB7A0000 node0[+08]=0x00000245ECA52C00 node0[+18]=0x0000000000000002
[schema-probe]   map @ schema+0x110 count=12 elements=0x0000024591C7C1C0 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x128 count=2059 elements=0x00000245FB7C0000 node0[+08]=0x0000000100000001 node0[+18]=0x00000245ECA52C00
[schema-probe]   map @ schema+0x138 count=737 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x150 count=330 elements=0x00000245D8E61000 node0[+08]=0x00000245DFF2E320 node0[+18]=0x00000245DFF2E460
[schema-probe]   map @ schema+0x160 count=512 elements=0x0000024591A88000 node0[+08]=0x00000245AE414E40 node0[+18]=0x00000245AE414740
[schema-probe]   map @ schema+0x170 count=12 elements=0x00000245FB830800 node0[+08]=0x0000000100000001 node0[+18]=0x00000245FB805A00
[schema-probe]   map @ schema+0x180 count=3 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x198 count=97 elements=0x00000245E082A000 node0[+08]=0x0000000000000002 node0[+18]=0x00007FFB4B4A3B98
[schema-probe]   map @ schema+0x1A8 count=50 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1C0 count=471 elements=0x00000245D8F28000 node0[+08]=0x3F80000100000128 node0[+18]=0x00000245DFEFE381
[schema-probe]   map @ schema+0x1D0 count=128 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x1E8 count=23 elements=0x00000245FB799C00 node0[+08]=0x0000000100000001 node0[+18]=0x00000245DFF088F1
[schema-probe]   map @ schema+0x1F8 count=7 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x210 count=2505 elements=0x00000245FB990000 node0[+08]=0x0000000100000005 node0[+18]=0x00007FFB4B4A3C08
[schema-probe]   map @ schema+0x220 count=19 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x278 count=2 elements=0x00000245FA4A0E40 node0[+08]=0x00000001FFFFFFFF node0[+18]=0x00000245FB6676C0
[schema-probe]   map @ schema+0x2A0 count=1481 elements=0x00000245ED7E0000 node0[+08]=0x65735F0100000002 node0[+18]=0x00000245DF1F90E0
[schema-probe]   map @ schema+0x2B0 count=256 elements=0x00000006FFFFFFFF node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x2F0 count=377 elements=0x00000245D8F64000 node0[+08]=0x0909090100000013 node0[+18]=0x00000245DF85E280
[schema-probe]   map @ schema+0x300 count=102 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x328 count=382 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3B0 count=214 elements=0x00000245EC3E8000 node0[+08]=0x73E383000000003E node0[+18]=0x00000245FAC03370
[schema-probe]   map @ schema+0x3C0 count=11 elements=0x00000245FFFFFFFF node0[+08]=0x0000000000000400 node0[+18]=0x0000000000010100
[schema-probe]   map @ schema+0x3D0 count=20 elements=0x00000245DF1C9500 node0[+08]=0x00000245FA4357A0 node0[+18]=0x00000245FA435860
[schema-probe]   map @ schema+0x3E0 count=32 elements=0x0000024500000040 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x3E8 count=64 elements=0x00000245E1F9D800 node0[+08]=0x00000245FA435C60 node0[+18]=0x00000245FA435CC0
[schema-probe]   map @ schema+0x3F8 count=64 elements=0x0000024500000013 node0[+08]=0x0000000000000000 node0[+18]=0x0000000000000000
[schema-probe]   map @ schema+0x400 count=19 elements=0x00000245AE3FC800 node0[+08]=0x00000245FA435CA0 node0[+18]=0x00000245FA435CE0
[schema-probe] sane map candidates: 29
[verify] items count=2059 elems=0x00000245FB7A0000
[verify]   items[0] key=0 defIdx=1 baseName="#SFUI_WPNHUD_DesertEagle"
[verify]   items[1] key=0 defIdx=2 baseName="#SFUI_WPNHUD_Elites"
[verify]   items[2] key=0 defIdx=3 baseName="#SFUI_WPNHUD_FiveSeven"
[verify]   items[3] key=581 defIdx=4 baseName="#SFUI_WPNHUD_Glock18"
[verify]   items[4] key=0 defIdx=7 baseName="#SFUI_WPNHUD_AK47"
[verify] paints count=1481 elems=0x00000245ED7E0000
[verify]   paints[0] key=0 id=0 name="default"
[verify]   paints[1] key=9001 id=9001 name="workshop_default"
[verify]   paints[2] key=2 id=2 name="so_olive"
[verify]   paints[3] key=3 id=3 name="so_red"
[verify]   paints[4] key=5 id=5 name="hy_ddpat"
=== [schema-probe] done ===
[loadout] T/weapon: Glock-18 (Shinobu) pk=1208 def=4
[loadout] T/weapon: AK-47 (Inheritance) pk=1171 def=7
[loadout] T/knife: Skeleton Knife (Case Hardened) pk=44 def=525
[loadout] T/gloves: Sport Gloves (Amphibious) pk=10045 def=5030
[loadout] CT/weapon: USP-S (Sleeping Potion) pk=1377 def=61
[loadout] CT/weapon: Desert Eagle (Eastern Enigma) pk=1458 def=1
[loadout] CT/weapon: M4A4 (Temukau) pk=1228 def=16
[loadout] CT/knife: Butterfly Knife (Doppler) pk=617 def=515
[loadout] CT/gloves: Sport Gloves (Pandora's Box) pk=10037 def=5030
[loadout] 9 items from E:\Vibe Coding\CS2 Lore\CS2 Lore\n1ssan\n1ssan-data.json
[plan-a] CEconItemSystem* = 0x0000024505B03E20 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFB4A8C27A0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFB4A878520, setFloat=00007FFB4A878730)
[plan-a] ready, will inject on first stage-6
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x00000245DFF2E5A0
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x00000245DFF2E640
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x00000245DFF2E6E0
[plan-a] inject: created=9 existed=0 failed=0
[knife-anim] initialized (State=0x19A8 Action=0xC0 Reset=0xD8 Extra=0x270)
[knife-anim] KnifeInspect @ 0x00007FFB49FA9DD0 HOOKED
[knife-anim] KnifeReflect pattern not found
[fsn] pClient=0x00007FFB4BCF35A0 vtable=0x00007FFB4B3F7200 fn=0x00007FFB4A2FEE60 slot=36
[fsn] hooked (vtable overwrite)
[ready] v9.0.3 split; targets=9
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x0000024625F67800
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x0179800B (idx=11)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0179800B -> 0x0000024625DD7000
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[match] FOUND pawn=0x0000024625DD7000 hp=100
[apply] tick pawn=0x0000024625DD7000
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0xFFFFFFFF
[glove] first item=0x0000024625DD8770 vtable=0x00007FFB4B41E0D0 def=0 init=0 quality=-1 attrCount=1263217128
[glove-diag] pawn=0000024625DD7000 team@3E7=0 team@3BC=1 offset=0x3E7 enabled=1
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000

=== SNAPSHOT ===
[snap] fsnCount=4403 lastStage=0 stage5Count=302
[snap] stage histogram:
[snap]   stage  0: 843 frames
[snap]   stage  1: 302 frames
[snap]   stage  2: 302 frames
[snap]   stage  3: 302 frames
[snap]   stage  5: 302 frames
[snap]   stage  6: 302 frames
[snap]   stage  7: 302 frames
[snap]   stage  8: 302 frames
[snap]   stage 10: 302 frames
[snap]   stage 11: 322 frames
[snap]   stage 12: 822 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x0000024625F67800
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x0179800B (idx=11)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0179800B -> 0x0000024625DD7000
[snap] ----------------------------------------
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000

=== SNAPSHOT ===
[snap] fsnCount=9194 lastStage=0 stage5Count=621
[snap] stage histogram:
[snap]   stage  0: 1803 frames
[snap]   stage  1: 621 frames
[snap]   stage  2: 621 frames
[snap]   stage  3: 621 frames
[snap]   stage  5: 621 frames
[snap]   stage  6: 621 frames
[snap]   stage  7: 621 frames
[snap]   stage  8: 621 frames
[snap]   stage 10: 621 frames
[snap]   stage 11: 642 frames
[snap]   stage 12: 1781 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x0000024625F67800
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x0179800B (idx=11)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0179800B -> 0x0000024625DD7000
[snap] ----------------------------------------
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000

=== SNAPSHOT ===
[snap] fsnCount=13997 lastStage=0 stage5Count=940
[snap] stage histogram:
[snap]   stage  0: 2769 frames
[snap]   stage  1: 940 frames
[snap]   stage  2: 940 frames
[snap]   stage  3: 940 frames
[snap]   stage  5: 940 frames
[snap]   stage  6: 940 frames
[snap]   stage  7: 940 frames
[snap]   stage  8: 940 frames
[snap]   stage 10: 940 frames
[snap]   stage 11: 962 frames
[snap]   stage 12: 2746 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x0000024625F67800
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x0179800B (idx=11)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0179800B -> 0x0000024625DD7000
[snap] ----------------------------------------
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000

=== SNAPSHOT ===
[snap] fsnCount=18676 lastStage=0 stage5Count=1255
[snap] stage histogram:
[snap]   stage  0: 3691 frames
[snap]   stage  1: 1255 frames
[snap]   stage  2: 1255 frames
[snap]   stage  3: 1255 frames
[snap]   stage  5: 1255 frames
[snap]   stage  6: 1255 frames
[snap]   stage  7: 1255 frames
[snap]   stage  8: 1255 frames
[snap]   stage 10: 1255 frames
[snap]   stage 11: 1282 frames
[snap]   stage 12: 3663 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x0000024625F67800
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x0179800B (idx=11)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0179800B -> 0x0000024625DD7000
[snap] ----------------------------------------
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000

=== SNAPSHOT ===
[snap] fsnCount=23495 lastStage=0 stage5Count=1576
[snap] stage histogram:
[snap]   stage  0: 4656 frames
[snap]   stage  1: 1576 frames
[snap]   stage  2: 1576 frames
[snap]   stage  3: 1576 frames
[snap]   stage  5: 1576 frames
[snap]   stage  6: 1576 frames
[snap]   stage  7: 1576 frames
[snap]   stage  8: 1576 frames
[snap]   stage 10: 1576 frames
[snap]   stage 11: 1603 frames
[snap]   stage 12: 4628 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x0000024625F67800
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x0179800B (idx=11)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0179800B -> 0x0000024625DD7000
[snap] ----------------------------------------
[apply] tick pawn=0x0000024625DD7000
[apply] tick pawn=0x0000024625DD7000

=== SNAPSHOT ===
[snap] fsnCount=25569 lastStage=1 stage5Count=1690
[snap] stage histogram:
[snap]   stage  0: 5179 frames
[snap]   stage  1: 1691 frames
[snap]   stage  2: 1690 frames
[snap]   stage  3: 1690 frames
[snap]   stage  5: 1690 frames
[snap]   stage  6: 1690 frames
[snap]   stage  7: 1690 frames
[snap]   stage  8: 1690 frames
[snap]   stage 10: 1690 frames
[snap]   stage 11: 1718 frames
[snap]   stage 12: 5151 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x0000000000000000
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[apply] tick pawn=0x00000245919A2E00
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800

=== SNAPSHOT ===
[snap] fsnCount=30074 lastStage=12 stage5Count=1943
[snap] stage histogram:
[snap]   stage  0: 6122 frames
[snap]   stage  1: 2043 frames
[snap]   stage  2: 2043 frames
[snap]   stage  3: 2039 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1943 frames
[snap]   stage  6: 1943 frames
[snap]   stage  7: 1943 frames
[snap]   stage  8: 1943 frames
[snap]   stage 10: 1943 frames
[snap]   stage 11: 1987 frames
[snap]   stage 12: 6124 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800

=== SNAPSHOT ===
[snap] fsnCount=35773 lastStage=0 stage5Count=2263
[snap] stage histogram:
[snap]   stage  0: 7532 frames
[snap]   stage  1: 2363 frames
[snap]   stage  2: 2363 frames
[snap]   stage  3: 2359 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2263 frames
[snap]   stage  6: 2263 frames
[snap]   stage  7: 2263 frames
[snap]   stage  8: 2263 frames
[snap]   stage 10: 2263 frames
[snap]   stage 11: 2307 frames
[snap]   stage 12: 7533 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800

=== SNAPSHOT ===
[snap] fsnCount=41578 lastStage=12 stage5Count=2583
[snap] stage histogram:
[snap]   stage  0: 8994 frames
[snap]   stage  1: 2683 frames
[snap]   stage  2: 2683 frames
[snap]   stage  3: 2679 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2583 frames
[snap]   stage  6: 2583 frames
[snap]   stage  7: 2583 frames
[snap]   stage  8: 2583 frames
[snap]   stage 10: 2583 frames
[snap]   stage 11: 2627 frames
[snap]   stage 12: 8996 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon=0x000002461DDEA000 view=0x000002461DDEB2E0
[pw]   view+0x00 = 0x4B4A45A0
[pw]   view+0x04 = 0x00007FFB
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
[pw]   +0x1290 = 0x00007FFB4B4A4740
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x019F80EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FFB4B4A45A0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000002461DDEA000 def=4
[team] pawn=0x000002462A9A6800, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[apply] enter (weapon=0x000002461DDEA000 def=4 pk=1208)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002461DDEB2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1208.000 initial=1208.000
[attr-entry] 1: def=7 value=94.000 initial=94.000
[attr-entry] 2: def=8 value=0.090457 initial=0.090457
[apply] world post-create: size=3 data=000001D1802F49B0 alloc=11
[apply] world view 0x000002461DDEB2E0 painted (pk=1208)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xFFFFFFFF
[hud-find] FAIL: invalid arms handle
[glove-diag] pawn=000002462A9A6800 team@3E7=2 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] pawnChanged=0 configChanged=1 teamChanged=0 spawnChanged=1 engineReset=1 followUp=0 forced=1 frames=0 curDef=0 desiredDef=5030 initialized=0 idHigh=0x0
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10045.000 initial=10045.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10045 size=3 data=000001D1802F7570 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10045 result=00000245FB0B3D40
[glove] APPLIED def=5030 pk=10045 team=2
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=1 forced=0 frames=3 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10045.000 initial=10045.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10045 size=3 data=000001D1802F6C10 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10045 result=00000245FB0B3D40
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=1 forced=0 frames=3 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10045.000 initial=10045.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10045 size=3 data=000001D1802F5950 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10045 result=00000245FB0B3D40
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=3 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10045.000 initial=10045.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10045 size=3 data=000001D1802F4690 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10045 result=00000245FB0B3D40

=== SNAPSHOT ===
[snap] fsnCount=47027 lastStage=0 stage5Count=2889
[snap] stage histogram:
[snap]   stage  0: 10342 frames
[snap]   stage  1: 2989 frames
[snap]   stage  2: 2989 frames
[snap]   stage  3: 2985 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2889 frames
[snap]   stage  6: 2889 frames
[snap]   stage  7: 2889 frames
[snap]   stage  8: 2889 frames
[snap]   stage 10: 2889 frames
[snap]   stage 11: 2942 frames
[snap]   stage 12: 10334 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=1 forced=0 frames=2 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10045.000 initial=10045.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10045 size=3 data=000001D1802F5950 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10045 result=00000245FB0B3D40
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=3 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10045.000 initial=10045.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10045 size=3 data=000001D1802F4690 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10045 result=00000245FB0B3D40
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=2 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10045.000 initial=10045.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10045 size=3 data=000001D1802F6C10 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10045 result=00000245FB0B3D40
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=1 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10045.000 initial=10045.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10045 size=3 data=000001D1802F4690 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10045 result=00000245FB0B3D40
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=52764 lastStage=0 stage5Count=3208
[snap] stage histogram:
[snap]   stage  0: 11775 frames
[snap]   stage  1: 3308 frames
[snap]   stage  2: 3308 frames
[snap]   stage  3: 3304 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3208 frames
[snap]   stage  6: 3208 frames
[snap]   stage  7: 3208 frames
[snap]   stage  8: 3208 frames
[snap]   stage 10: 3208 frames
[snap]   stage 11: 3262 frames
[snap]   stage 12: 11766 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=58452 lastStage=0 stage5Count=3528
[snap] stage histogram:
[snap]   stage  0: 13179 frames
[snap]   stage  1: 3628 frames
[snap]   stage  2: 3628 frames
[snap]   stage  3: 3624 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3528 frames
[snap]   stage  6: 3528 frames
[snap]   stage  7: 3528 frames
[snap]   stage  8: 3528 frames
[snap]   stage 10: 3528 frames
[snap]   stage 11: 3582 frames
[snap]   stage 12: 13170 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=64073 lastStage=7 stage5Count=3847
[snap] stage histogram:
[snap]   stage  0: 14555 frames
[snap]   stage  1: 3947 frames
[snap]   stage  2: 3947 frames
[snap]   stage  3: 3942 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3847 frames
[snap]   stage  6: 3847 frames
[snap]   stage  7: 3847 frames
[snap]   stage  8: 3846 frames
[snap]   stage 10: 3847 frames
[snap]   stage 11: 3902 frames
[snap]   stage 12: 14545 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=69578 lastStage=12 stage5Count=4167
[snap] stage histogram:
[snap]   stage  0: 15866 frames
[snap]   stage  1: 4267 frames
[snap]   stage  2: 4267 frames
[snap]   stage  3: 4263 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4167 frames
[snap]   stage  6: 4167 frames
[snap]   stage  7: 4167 frames
[snap]   stage  8: 4167 frames
[snap]   stage 10: 4167 frames
[snap]   stage 11: 4223 frames
[snap]   stage 12: 15856 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=75318 lastStage=11 stage5Count=4486
[snap] stage histogram:
[snap]   stage  0: 17300 frames
[snap]   stage  1: 4586 frames
[snap]   stage  2: 4586 frames
[snap]   stage  3: 4582 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4486 frames
[snap]   stage  6: 4486 frames
[snap]   stage  7: 4486 frames
[snap]   stage  8: 4486 frames
[snap]   stage 10: 4487 frames
[snap]   stage 11: 4543 frames
[snap]   stage 12: 17289 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=81084 lastStage=0 stage5Count=4806
[snap] stage histogram:
[snap]   stage  0: 18744 frames
[snap]   stage  1: 4906 frames
[snap]   stage  2: 4906 frames
[snap]   stage  3: 4902 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 4806 frames
[snap]   stage  6: 4806 frames
[snap]   stage  7: 4806 frames
[snap]   stage  8: 4806 frames
[snap]   stage 10: 4806 frames
[snap]   stage 11: 4862 frames
[snap]   stage 12: 18733 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=86803 lastStage=5 stage5Count=5127
[snap] stage histogram:
[snap]   stage  0: 20161 frames
[snap]   stage  1: 5227 frames
[snap]   stage  2: 5227 frames
[snap]   stage  3: 5222 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5127 frames
[snap]   stage  6: 5126 frames
[snap]   stage  7: 5126 frames
[snap]   stage  8: 5126 frames
[snap]   stage 10: 5127 frames
[snap]   stage 11: 5183 frames
[snap]   stage 12: 20150 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=92520 lastStage=0 stage5Count=5446
[snap] stage histogram:
[snap]   stage  0: 21582 frames
[snap]   stage  1: 5546 frames
[snap]   stage  2: 5546 frames
[snap]   stage  3: 5542 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5446 frames
[snap]   stage  6: 5446 frames
[snap]   stage  7: 5446 frames
[snap]   stage  8: 5446 frames
[snap]   stage 10: 5446 frames
[snap]   stage 11: 5502 frames
[snap]   stage 12: 21571 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=98078 lastStage=10 stage5Count=5765
[snap] stage histogram:
[snap]   stage  0: 22925 frames
[snap]   stage  1: 5865 frames
[snap]   stage  2: 5865 frames
[snap]   stage  3: 5861 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 5765 frames
[snap]   stage  6: 5765 frames
[snap]   stage  7: 5765 frames
[snap]   stage  8: 5765 frames
[snap]   stage 10: 5766 frames
[snap]   stage 11: 5822 frames
[snap]   stage 12: 22913 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=103805 lastStage=0 stage5Count=6085
[snap] stage histogram:
[snap]   stage  0: 24349 frames
[snap]   stage  1: 6185 frames
[snap]   stage  2: 6185 frames
[snap]   stage  3: 6181 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 6085 frames
[snap]   stage  6: 6085 frames
[snap]   stage  7: 6085 frames
[snap]   stage  8: 6085 frames
[snap]   stage 10: 6085 frames
[snap]   stage 11: 6142 frames
[snap]   stage 12: 24337 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=109547 lastStage=7 stage5Count=6405
[snap] stage histogram:
[snap]   stage  0: 25781 frames
[snap]   stage  1: 6505 frames
[snap]   stage  2: 6505 frames
[snap]   stage  3: 6500 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 6405 frames
[snap]   stage  6: 6405 frames
[snap]   stage  7: 6405 frames
[snap]   stage  8: 6404 frames
[snap]   stage 10: 6405 frames
[snap]   stage 11: 6463 frames
[snap]   stage 12: 25768 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEA000
[pw] weapon 0x000002461DDEA000 def=4
[pw] matched team 'T'
[pw] applying Shinobu (pk=1208 def=4)
[hud-find] START weapon=0x000002461DDEA000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198B0400 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=59
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000002461DDEE000 def=525 pk=44)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000002461DDEF2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=44.000 initial=44.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000001D1802F5950 alloc=11
[apply] world view 0x000002461DDEF2E0 painted (pk=44)
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x00000246198A0880
[hud-find] child[0]=0x00000246198A0880 owner=0x00000246198B0400 handle=0x19F80EC resolved=0x000002461DDEA000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=115219 lastStage=12 stage5Count=6724
[snap] stage histogram:
[snap]   stage  0: 27180 frames
[snap]   stage  1: 6824 frames
[snap]   stage  2: 6824 frames
[snap]   stage  3: 6820 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 6724 frames
[snap]   stage  6: 6724 frames
[snap]   stage  7: 6724 frames
[snap]   stage  8: 6724 frames
[snap]   stage 10: 6724 frames
[snap]   stage 11: 6783 frames
[snap]   stage 12: 27167 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=120900 lastStage=11 stage5Count=7040
[snap] stage histogram:
[snap]   stage  0: 28598 frames
[snap]   stage  1: 7140 frames
[snap]   stage  2: 7140 frames
[snap]   stage  3: 7136 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 7040 frames
[snap]   stage  6: 7040 frames
[snap]   stage  7: 7040 frames
[snap]   stage  8: 7040 frames
[snap]   stage 10: 7041 frames
[snap]   stage 11: 7103 frames
[snap]   stage 12: 28581 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=126294 lastStage=12 stage5Count=7361
[snap] stage histogram:
[snap]   stage  0: 29851 frames
[snap]   stage  1: 7461 frames
[snap]   stage  2: 7461 frames
[snap]   stage  3: 7457 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 7361 frames
[snap]   stage  6: 7361 frames
[snap]   stage  7: 7361 frames
[snap]   stage  8: 7361 frames
[snap]   stage 10: 7361 frames
[snap]   stage 11: 7423 frames
[snap]   stage 12: 29835 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x000002461DDEE000
[pw] weapon 0x000002461DDEE000 def=525
[pw] knife: applying Case Hardened (pk=44 target def=525)
[knife] SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[hud-find] START weapon=0x000002461DDEE000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000024618796800
[hud-find] armsNode=0x00000246198A1480
[hud-find] firstChild=0x000002465DF27080
[hud-find] child[0]=0x000002465DF27080 owner=0x00000246600CB400 handle=0x4D80EB resolved=0x000002461DDEE000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246600CB400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[apply] enter (weapon=0x0000024660E2C000 def=61 pk=1377)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000024660E2D2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1377.000 initial=1377.000
[attr-entry] 1: def=7 value=73.000 initial=73.000
[attr-entry] 2: def=8 value=0.100895 initial=0.100895
[apply] world post-create: size=3 data=000001D1802F6C10 alloc=11
[apply] world view 0x0000024660E2D2E0 painted (pk=1377)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0x4349C214
[hud-find] arms=0x0000000000000000
[hud-find] FAIL: handle did not resolve
[glove-diag] pawn=000002462A9A6800 team@3E7=3 team@3BC=1 offset=0x3E7 enabled=1
[glove-trigger] pawnChanged=0 configChanged=1 teamChanged=1 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10037 size=3 data=000001D1802F7570 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10037 result=00000245FB0B3640
[glove] APPLIED def=5030 pk=10037 team=3
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=3 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10037 size=3 data=000001D1802F4690 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10037 result=00000245FB0B3640
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=2 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10037 size=3 data=000001D1802F7570 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10037 result=00000245FB0B3640
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=1 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[attr-diag] item=000002462A9A7F70 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=10037.000 initial=10037.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[glove-post] team item=000002462A9A7F70 def=5030 pk=10037 size=3 data=000001D1802F7570 alloc=11
[glove-paintkit] item=000002462A9A7F70 def=5030 pk=10037 result=00000245FB0B3640

=== SNAPSHOT ===
[snap] fsnCount=131324 lastStage=0 stage5Count=7674
[snap] stage histogram:
[snap]   stage  0: 30958 frames
[snap]   stage  1: 7774 frames
[snap]   stage  2: 7774 frames
[snap]   stage  3: 7770 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 7674 frames
[snap]   stage  6: 7674 frames
[snap]   stage  7: 7674 frames
[snap]   stage  8: 7674 frames
[snap]   stage 10: 7674 frames
[snap]   stage 11: 7742 frames
[snap]   stage 12: 30935 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=136385 lastStage=0 stage5Count=7993
[snap] stage histogram:
[snap]   stage  0: 32053 frames
[snap]   stage  1: 8093 frames
[snap]   stage  2: 8093 frames
[snap]   stage  3: 8089 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 7993 frames
[snap]   stage  6: 7993 frames
[snap]   stage  7: 7993 frames
[snap]   stage  8: 7993 frames
[snap]   stage 10: 7993 frames
[snap]   stage 11: 8062 frames
[snap]   stage 12: 32029 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E2C000
[pw] weapon 0x0000024660E2C000 def=61
[pw] matched team 'CT'
[pw] applying Sleeping Potion (pk=1377 def=61)
[hud-find] START weapon=0x0000024660E2C000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x00000246198BCC00 after 1 nodes
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=42
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[apply] enter (weapon=0x0000024660E28000 def=515 pk=617)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=0000024660E292E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=617.000 initial=617.000
[attr-entry] 1: def=7 value=0.000 initial=0.000
[attr-entry] 2: def=8 value=0.001000 initial=0.001000
[apply] world post-create: size=3 data=000001D1802F4690 alloc=11
[apply] world view 0x0000024660E292E0 painted (pk=617)
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024618789C80
[hud-find] child[0]=0x0000024618789C80 owner=0x00000246198BCC00 handle=0x9680F0 resolved=0x0000024660E2C000
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=141747 lastStage=10 stage5Count=8312
[snap] stage histogram:
[snap]   stage  0: 33298 frames
[snap]   stage  1: 8412 frames
[snap]   stage  2: 8412 frames
[snap]   stage  3: 8408 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 8312 frames
[snap]   stage  6: 8312 frames
[snap]   stage  7: 8312 frames
[snap]   stage  8: 8312 frames
[snap]   stage 10: 8313 frames
[snap]   stage 11: 8382 frames
[snap]   stage 12: 33273 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF

=== SNAPSHOT ===
[snap] fsnCount=146892 lastStage=0 stage5Count=8630
[snap] stage histogram:
[snap]   stage  0: 34440 frames
[snap]   stage  1: 8730 frames
[snap]   stage  2: 8730 frames
[snap]   stage  3: 8726 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 8630 frames
[snap]   stage  6: 8630 frames
[snap]   stage  7: 8630 frames
[snap]   stage  8: 8630 frames
[snap]   stage 10: 8630 frames
[snap]   stage 11: 8702 frames
[snap]   stage 12: 34413 frames
[snap] dwLocalPlayerController @ 0x00007FFB4BCD13F8 -> 0x000002462FF41600
[snap] dwLocalPlayerPawn       @ 0x00007FFB4BEC8140 -> 0x00000245919A2E00
[snap] pawn: vtable=0x00007FFB4EFD3740 inClient=0 health=582
[snap] ctrl: vtable=0x00007FFB4B3A0648 inClient=1 m_hPlayerPawn@0x92C = 0x01D981A1 (idx=417)
[snap] entitySystem @ 0x00007FFB4BEAEB08 = 0x0000024591448800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01D981A1 -> 0x000002462A9A6800
[snap] ----------------------------------------
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000002462A9A6800
[apply] active 0x0000024660E28000
[pw] weapon 0x0000024660E28000 def=515
[pw] knife: applying Doppler (pk=617 target def=515)
[knife] SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[hud-find] START weapon=0x0000024660E28000 pawn=0x000002462A9A6800
[hud-find] armsHandle=0xB0004251
[hud-find] arms=0x000002465DB98800
[hud-find] armsNode=0x00000246198A0880
[hud-find] firstChild=0x0000024628956080
[hud-find] child[0]=0x0000024628956080 owner=0x0000024628AFE400 handle=0x6A80EF resolved=0x0000024660E28000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x0000024628AFE400 after 1 nodes
[knife] HUD SetModel: weapons/models/knife/knife_butterfly/weapon_knife_butterfly.vmdl
[glove-trigger] pawnChanged=0 configChanged=0 teamChanged=0 spawnChanged=0 engineReset=0 followUp=0 forced=0 frames=0 curDef=5030 desiredDef=5030 initialized=1 idHigh=0xFFFFFFFF
