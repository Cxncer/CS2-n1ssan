[status-path] selected=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-26572.status source=LOCALAPPDATA

# n1ssan diagnostic session
[build] armory-obsidian-3.0
[build] Operation Armory x Obsidian Build 3.0 | Nov 11 2026 03:24:44
N1SSAN_STATUS|1|2026-11-11T03:18:58Z|26572|armory-obsidian-3.0|INITIALIZING|reason=worker_started
[status-write] begin state=INITIALIZING path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-26572.status
[status-write] success state=INITIALIZING error=0
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FF8047293CB -> rva 0x271FBB8 (val=000002E5E145F000)
[auto-off] dwLocalPlayerController      hit 0x00007FF804645750 -> rva 0x2542548 (val=000002E66F5F0C00)
[auto-off] dwLocalPlayerPawn            hit 0x00007FF803E61615 -> rva 0x27391E0 (val=000002E5FE1E1800)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FF80642FBB8
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FF806252548
[off] RVA_LOCALPLAYERPAWN       = 0x00007FF8064491E0
[bridge] discovered Bridge directory: E:\Vibe Coding\CS2 Lore\CS2 n1ssan\development\n1ssan-web-bridge\
[runtime-mode] no valid selection yet; waiting for launcher
[runtime-mode] initialized in neutral mode; waiting for DOMINATE selection
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
[schema-gloves] READY
[resolve] InvalidateDescription          @ 0x00007FF804EB1350
[resolve] BuildModernSkin                @ 0x00007FF804B55B10
[resolve] SetMeshGroupMask               @ 0x00007FF8047D5A90
[resolve] RegenerateSkins                @ 0x00007FF80453B4B0
[resolve] ReleaseCompositeMaterials      @ 0x00007FF8051FC4A0
[resolve] GloveCreatePaintKit            @ 0x00007FF804EA13D0
[resolve] AgentSetModel                  @ 0x00007FF804675C90
[resolve] KnifeUpdateSubclass            @ 0x00007FF803F19000
[resolve] GloveSetBodyGroup              @ 0x00007FF804674BB0
[resolve] MemAlloc                       @ 0x00007FF839B4DD30
[resolve] MemFree                        @ 0x00007FF839B4DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FF80642FBB8 -> 0x000002E5E145F000
[glove-paintkit-schema] READY
[glove-schema] READY
[plan-a] CEconItemSystem* = 0x000002E553B22F60 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FF804E430F0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FF804DF8E70, setFloat=00007FF804DF9080)
[socache] CreateBaseTypeCache initialized @ 00007FF80533B820
[plan-a] shared inventory runtime ready; Loadout injection disabled
[use-tool] initialize attempt=1 installed=0 mode=0
[use-tool] placement probe: sticker signature=FOUND
[use-tool] placement probe: keychain signature=FOUND
[use-tool] notification: engine=0x00007FF8064491E0 dispatch=vfunc 47 eventId=903
[use-tool] hook: ok at 0x00007FF804D15810 via signature (CS2's inventory applies Armory stickers and charms)
[use-tool] placement pointers: sticker slot=00007FF805F2AE90 x=00007FF80630960C y=00007FF806309610 rotation=00007FF806309614 wear=00007FF806309618; charm x=00007FF8063098A8 y=00007FF8063098AC z=00007FF8063098B0
[use-tool] placement: sticker ok, charm ok
[use-tool] popup notification: ok (the applying spinner finishes)
[armory-inventory] watching for inventory changes: E:\Vibe Coding\CS2 Lore\CS2 n1ssan\development\n1ssan-web-bridge\armory-inventory.json
[loadout-api] resolved GetItemID=00007FF804CB85D0 GetSlotEquippedWithDefIndex=00007FF804CCDC10
[loadout-api] resolved CanEquipItemInSlot=00007FF804C9CCC0 EquipItemInSlot=00007FF804CA6690
[fsn] pClient=0x00007FF806274620 vtable=0x00007FF805978230 fn=0x00007FF80487EFE0 slot=36
[fsn] hooked (vtable overwrite)
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000002E66FC09000 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[match] network signOn=6 maxClients=1 backgroundMap=0 connected=0 alive=0
N1SSAN_STATUS|1|2026-11-11T03:18:59Z|26572|armory-obsidian-3.0|CHECKS_PASSED|reason=required_initialization_checks_passed
[status-write] begin state=CHECKS_PASSED path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-26572.status
[status-write] success state=CHECKS_PASSED error=0
[diagnostic] runtime=unknown targets=0; awaiting DOMINATE selection
N1SSAN_STATUS|1|2026-11-11T03:18:59Z|26572|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-26572.status
[status-write] success state=READY error=0
[knife-anim] stage=6 reached
[knife-anim] stage=6 reached
[armory-inventory] staged 35 items (applies outside an active match)
[runtime-mode] switched to armory
[runtime-mode] preparing requested mode: armory
[runtime-mode] active mode: armory
[socache-diag] SOCache resolved inv=000002E5E17FA000 offset=0x68 cache=000002E6512EBE80 typeCache=000002E651377000
[plan-a] Loadout cleanup: found=0 removed=0 failed=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[armory-inventory] preparing replacement set: 35 items
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000002E64C380EC0
[loot-schema] attr 6 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000002E64C380F60
[loot-schema] attr 7 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000002E64C381000
[loot-schema] attr 8 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'kill eater' (idx 80) -> 0x000002E64C383A80
[loot-schema] attr 'kill eater score type' (idx 81) -> 0x000002E64C383B20
[attach] sticker and charm attributes resolved (6 sticker slots, 1 charm)
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=20 slots=0
[armory-inventory] replacement committed: desired=35 created=35 retained=0 removed=0 removeFailed=0
[native-equipment] loaded 4 profile maps
[native-equipment] restoring 16 assignments for profile profile-1793694856473-vrmr
[use-tool] main thread: panorama CUIEngine::RunFrame vfunc 5 (0x00007FF808FD6B70)
[detect] pawn=0x000002E66FC09000 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=2621 lastStage=0 stage5Count=220
[snap] stage histogram:
[snap]   stage  0: 321 frames
[snap]   stage  1: 220 frames
[snap]   stage  2: 220 frames
[snap]   stage  3: 220 frames
[snap]   stage  5: 220 frames
[snap]   stage  6: 220 frames
[snap]   stage  7: 220 frames
[snap]   stage  8: 220 frames
[snap]   stage 10: 220 frames
[snap]   stage 11: 320 frames
[snap]   stage 12: 220 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
[native-equipment] restored CT/clothing_hands instance=legacy:profile-1793694856473-vrmr:item-1793694910224-ql2n6
[native-equipment] restored CT/customplayer instance=item-1793695772472-bhvgw
[native-equipment] restored CT/melee instance=legacy:profile-1793694856473-vrmr:item-1793694963372-0fqz9
[native-equipment] restored CT/rifle1 instance=item-1794186577561-8op0s
[native-equipment] restored CT/rifle2 instance=item-1793695788128-2t5gl
[native-equipment] restored CT/rifle4 instance=item-1794212738845-8k8zq
[native-equipment] restored CT/secondary0 instance=legacy:profile-1793694856473-vrmr:item-1793694920330-fpb9j
[native-equipment] restored CT/secondary2 instance=item-1794074349597-cft63
[native-equipment] restored CT/smg4 instance=item-1794186565316-7rk03
[native-equipment] restored T/clothing_hands instance=legacy:profile-1793694856473-vrmr:item-1793695561672-drh3i
[native-equipment] restored T/customplayer instance=legacy:profile-1793694856473-vrmr:item-1793694996426-vzvxs
[native-equipment] restored T/melee instance=legacy:profile-1793694856473-vrmr:item-1793695256284-02th1
[native-equipment] restored T/rifle1 instance=legacy:profile-1793694856473-vrmr:item-1793695199212-pjawx
[native-equipment] restored T/rifle4 instance=item-1793715889452-g55g9
[native-equipment] restored T/secondary0 instance=legacy:profile-1793694856473-vrmr:item-1793695224264-scrve
[native-equipment] restored T/secondary2 instance=item-1794074349597-cft63
[native-equipment] restore complete: equipped=16 skipped=0
[armory-inventory] staged 35 items (applies outside an active match)
[armory-inventory] preparing replacement set: 35 items
[armory-inventory] retained item id=95A9B496DD0863FF def=5404
[armory-inventory] attachments synced on 95A9B496DD0863FF: stickers=0 charm=none
[armory-inventory] retained item id=9716366248F075D7 def=5034
[armory-inventory] retained item id=9502E287D965BBF2 def=5034
[armory-inventory] attachments synced on 9502E287D965BBF2: stickers=0 charm=none
[armory-inventory] retained item id=99E1BAF01502BE2C def=61
[armory-inventory] retained item id=985A3F279B62E8B7 def=515
[armory-inventory] retained item id=93F6DB09F3D56591 def=5502
[armory-inventory] retained item id=94D37271449A4D93 def=7
[armory-inventory] retained item id=977AA887CD1B96DE def=4
[armory-inventory] retained item id=9AF567D70D34A997 def=525
[armory-inventory] retained item id=91C6732BF76F50B8 def=1209
[armory-inventory] attachments synced on 91C6732BF76F50B8: stickers=0 charm=none
[armory-inventory] retained item id=9E2B913433DFA637 def=1209
[armory-inventory] retained item id=91BF78AC9FB7775E def=1209
[armory-inventory] retained item id=9562676CB14FC944 def=1209
[armory-inventory] retained item id=92D60AE97E3A06D3 def=1209
[armory-inventory] retained item id=9DB604B65ACC14FA def=1209
[armory-inventory] attachments synced on 9DB604B65ACC14FA: stickers=0 charm=none
[armory-inventory] retained item id=91D6320A4E22A916 def=1209
[armory-inventory] attachments synced on 91D6320A4E22A916: stickers=0 charm=none
[armory-inventory] retained item id=9CFDD4A5A563C0DD def=1209
[armory-inventory] attachments synced on 9CFDD4A5A563C0DD: stickers=0 charm=none
[armory-inventory] retained item id=9C7DC0810CD979C5 def=1209
[armory-inventory] attachments synced on 9C7DC0810CD979C5: stickers=0 charm=none
[armory-inventory] retained item id=9267EFCB1A5F97CA def=1209
[armory-inventory] attachments synced on 9267EFCB1A5F97CA: stickers=0 charm=none
[armory-inventory] retained item id=97AF86D31CBA8FDC def=5030
[armory-inventory] attachments synced on 97AF86D31CBA8FDC: stickers=0 charm=none
[armory-inventory] retained item id=9879654D0B275492 def=5405
[armory-inventory] attachments synced on 9879654D0B275492: stickers=0 charm=none
[armory-inventory] retained item id=9928CB3A6CE76E73 def=16
[armory-inventory] attachments synced on 9928CB3A6CE76E73: stickers=1 [0 kit=5843 wear=0.000 rot=0.0 off=-0.265,-0.010 schema=3] charm=kit:7 seed=0 off=33.263,0.479,12.303
[armory-inventory] retained item id=92B6CC19CBAC29A1 def=1209
[armory-inventory] attachments synced on 92B6CC19CBAC29A1: stickers=0 charm=none
[armory-inventory] retained item id=9E7FE5042722E182 def=1209
[armory-inventory] attachments synced on 9E7FE5042722E182: stickers=0 charm=none
[armory-inventory] retained item id=916BBFE2596513DA def=9
[armory-inventory] attachments synced on 916BBFE2596513DA: stickers=0 charm=none
[armory-inventory] retained item id=95FE7CD05BB1A503 def=36
[armory-inventory] attachments synced on 95FE7CD05BB1A503: stickers=0 charm=none
[armory-inventory] retained item id=95588FD2F275031D def=61
[armory-inventory] attachments synced on 95588FD2F275031D: stickers=0 charm=kit:9 seed=0 off=13.786,0.763,4.177
[armory-inventory] retained item id=9141DCBAD0CEA2B1 def=34
[armory-inventory] attachments synced on 9141DCBAD0CEA2B1: stickers=0 charm=none
[armory-inventory] retained item id=9D32DE2F3ADFB818 def=60
[armory-inventory] attachments synced on 9D32DE2F3ADFB818: stickers=0 charm=none
[armory-inventory] retained item id=9EDC9E334D60B9BC def=507
[armory-inventory] retained item id=9FB2DA5DA238F16B def=9
[armory-inventory] retained item id=9878626BD65F69A8 def=9
[armory-inventory] attachments synced on 9878626BD65F69A8: stickers=0 charm=none
[armory-inventory] retained item id=91D37BDF8B2AA474 def=5031
[armory-inventory] retained item id=9DDA5397F3601FB5 def=508
[armory-inventory] retained item id=921026B7EFB4FEF1 def=523
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=20 slots=0
[armory-inventory] replacement committed: desired=35 created=0 retained=35 removed=0 removeFailed=0
[armory-inventory] staged 35 items (applies outside an active match)
[armory-inventory] preparing replacement set: 35 items
[armory-inventory] retained item id=95A9B496DD0863FF def=5404
[armory-inventory] attachments synced on 95A9B496DD0863FF: stickers=0 charm=none
[armory-inventory] retained item id=9716366248F075D7 def=5034
[armory-inventory] retained item id=9502E287D965BBF2 def=5034
[armory-inventory] attachments synced on 9502E287D965BBF2: stickers=0 charm=none
[armory-inventory] retained item id=99E1BAF01502BE2C def=61
[armory-inventory] retained item id=985A3F279B62E8B7 def=515
[armory-inventory] retained item id=93F6DB09F3D56591 def=5502
[armory-inventory] retained item id=94D37271449A4D93 def=7
[armory-inventory] retained item id=977AA887CD1B96DE def=4
[armory-inventory] retained item id=9AF567D70D34A997 def=525
[armory-inventory] retained item id=91C6732BF76F50B8 def=1209
[armory-inventory] attachments synced on 91C6732BF76F50B8: stickers=0 charm=none
[armory-inventory] retained item id=9E2B913433DFA637 def=1209
[armory-inventory] retained item id=91BF78AC9FB7775E def=1209
[armory-inventory] retained item id=9562676CB14FC944 def=1209
[armory-inventory] retained item id=92D60AE97E3A06D3 def=1209
[armory-inventory] retained item id=9DB604B65ACC14FA def=1209
[armory-inventory] attachments synced on 9DB604B65ACC14FA: stickers=0 charm=none
[armory-inventory] retained item id=91D6320A4E22A916 def=1209
[armory-inventory] attachments synced on 91D6320A4E22A916: stickers=0 charm=none
[armory-inventory] retained item id=9CFDD4A5A563C0DD def=1209
[armory-inventory] attachments synced on 9CFDD4A5A563C0DD: stickers=0 charm=none
[armory-inventory] retained item id=9C7DC0810CD979C5 def=1209
[armory-inventory] attachments synced on 9C7DC0810CD979C5: stickers=0 charm=none
[armory-inventory] retained item id=9267EFCB1A5F97CA def=1209
[armory-inventory] attachments synced on 9267EFCB1A5F97CA: stickers=0 charm=none
[armory-inventory] retained item id=97AF86D31CBA8FDC def=5030
[armory-inventory] attachments synced on 97AF86D31CBA8FDC: stickers=0 charm=none
[armory-inventory] retained item id=9879654D0B275492 def=5405
[armory-inventory] attachments synced on 9879654D0B275492: stickers=0 charm=none
[armory-inventory] retained item id=9928CB3A6CE76E73 def=16
[armory-inventory] attachments synced on 9928CB3A6CE76E73: stickers=1 [0 kit=5843 wear=0.000 rot=0.0 off=-0.265,-0.010 schema=3] charm=kit:7 seed=0 off=33.263,0.479,12.303
[armory-inventory] retained item id=92B6CC19CBAC29A1 def=1209
[armory-inventory] attachments synced on 92B6CC19CBAC29A1: stickers=0 charm=none
[armory-inventory] retained item id=9E7FE5042722E182 def=1209
[armory-inventory] attachments synced on 9E7FE5042722E182: stickers=0 charm=none
[armory-inventory] retained item id=916BBFE2596513DA def=9
[armory-inventory] attachments synced on 916BBFE2596513DA: stickers=0 charm=none
[armory-inventory] retained item id=95FE7CD05BB1A503 def=36
[armory-inventory] attachments synced on 95FE7CD05BB1A503: stickers=0 charm=none
[armory-inventory] retained item id=95588FD2F275031D def=61
[armory-inventory] attachments synced on 95588FD2F275031D: stickers=0 charm=kit:9 seed=0 off=13.786,0.763,4.177
[armory-inventory] retained item id=9141DCBAD0CEA2B1 def=34
[armory-inventory] attachments synced on 9141DCBAD0CEA2B1: stickers=0 charm=none
[armory-inventory] retained item id=9D32DE2F3ADFB818 def=60
[armory-inventory] attachments synced on 9D32DE2F3ADFB818: stickers=0 charm=none
[armory-inventory] retained item id=9EDC9E334D60B9BC def=507
[armory-inventory] retained item id=9FB2DA5DA238F16B def=9
[armory-inventory] retained item id=9878626BD65F69A8 def=9
[armory-inventory] attachments synced on 9878626BD65F69A8: stickers=0 charm=none
[armory-inventory] retained item id=91D37BDF8B2AA474 def=5031
[armory-inventory] retained item id=9DDA5397F3601FB5 def=508
[armory-inventory] retained item id=921026B7EFB4FEF1 def=523
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=20 slots=0
[armory-inventory] replacement committed: desired=35 created=0 retained=35 removed=0 removeFailed=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=374 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=5267 lastStage=0 stage5Count=442
[snap] stage histogram:
[snap]   stage  0: 645 frames
[snap]   stage  1: 442 frames
[snap]   stage  2: 442 frames
[snap]   stage  3: 442 frames
[snap]   stage  5: 442 frames
[snap]   stage  6: 442 frames
[snap]   stage  7: 442 frames
[snap]   stage  8: 442 frames
[snap]   stage 10: 442 frames
[snap]   stage 11: 641 frames
[snap]   stage 12: 445 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-11T03:19:09Z|26572|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-26572.status
[status-write] success state=READY error=0
[armory-inventory] staged 22 items (applies outside an active match)
[armory-inventory] preparing replacement set: 22 items
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=18 slots=0
[armory-inventory] replacement committed: desired=22 created=22 retained=0 removed=35 removeFailed=0
[attach] item 9919302EC58DC70A did not read back its saved attachments: stickers=0 charm=none
[attach] item 9CF82CD4592CD5C7 did not read back its saved attachments: stickers=0 charm=none
[attach] item 9AD2A303DFC2661B did not read back its saved attachments: stickers=0 charm=none
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[native-equipment] restoring 14 assignments for profile profile-1794104942044-ah1u
[detect] pawn=0x000002E66FC09000 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=7889 lastStage=0 stage5Count=662
[snap] stage histogram:
[snap]   stage  0: 966 frames
[snap]   stage  1: 662 frames
[snap]   stage  2: 662 frames
[snap]   stage  3: 662 frames
[snap]   stage  5: 662 frames
[snap]   stage  6: 662 frames
[snap]   stage  7: 662 frames
[snap]   stage  8: 662 frames
[snap]   stage 10: 662 frames
[snap]   stage 11: 962 frames
[snap]   stage 12: 665 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
[native-equipment] restored CT/clothing_hands instance=item-1794105008504-d7zwe
[native-equipment] restored CT/customplayer instance=item-1794104959955-quxf6
[native-equipment] restored CT/melee instance=item-1794158463322-29zje
[native-equipment] restored CT/rifle1 instance=item-1794105070324-mfrfy
[native-equipment] restored CT/rifle2 instance=item-1794105058792-p7kr2
[native-equipment] restored CT/rifle4 instance=item-1794105197869-7umla
[native-equipment] restored CT/secondary0 instance=item-1794105231943-mmwd3
[native-equipment] restored CT/smg4 instance=item-1794105257091-rg5uy
[native-equipment] restored T/clothing_hands instance=item-1794153054371-sdcvc
[native-equipment] restored T/customplayer instance=item-1794154990030-ycn6h
[native-equipment] restored T/melee instance=item-1794153044424-wx1xe
[native-equipment] restored T/rifle1 instance=item-1794105099681-k0fuq
[native-equipment] restored T/rifle4 instance=item-1794105197869-7umla
[native-equipment] restored T/secondary0 instance=item-1794105299922-rgmzp
[native-equipment] restore complete: equipped=14 skipped=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=374 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T03:19:19Z|26572|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-26572.status
[status-write] success state=READY error=0

=== SNAPSHOT ===
[snap] fsnCount=10511 lastStage=0 stage5Count=882
[snap] stage histogram:
[snap]   stage  0: 1287 frames
[snap]   stage  1: 882 frames
[snap]   stage  2: 882 frames
[snap]   stage  3: 882 frames
[snap]   stage  5: 882 frames
[snap]   stage  6: 882 frames
[snap]   stage  7: 882 frames
[snap]   stage  8: 882 frames
[snap]   stage 10: 882 frames
[snap]   stage 11: 1283 frames
[snap]   stage 12: 885 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
[armory-inventory] staged 50 items (applies outside an active match)
[armory-inventory] preparing replacement set: 50 items
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=23 slots=0
[armory-inventory] replacement committed: desired=50 created=50 retained=0 removed=22 removeFailed=0
[native-equipment] restoring 1 assignments for profile profile-1794212971774-3rcb
[native-equipment] restored CT/customplayer instance=item-1794212990979-tmzbn
[native-equipment] restore complete: equipped=1 skipped=0
[detect] pawn=0x000002E66FC09000 hp=100 signOn=6 bg=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=13131 lastStage=0 stage5Count=1102
[snap] stage histogram:
[snap]   stage  0: 1607 frames
[snap]   stage  1: 1102 frames
[snap]   stage  2: 1102 frames
[snap]   stage  3: 1102 frames
[snap]   stage  5: 1102 frames
[snap]   stage  6: 1102 frames
[snap]   stage  7: 1102 frames
[snap]   stage  8: 1102 frames
[snap]   stage 10: 1102 frames
[snap]   stage 11: 1603 frames
[snap]   stage 12: 1105 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T03:19:29Z|26572|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-26572.status
[status-write] success state=READY error=0

=== SNAPSHOT ===
[snap] fsnCount=15771 lastStage=0 stage5Count=1324
[snap] stage histogram:
[snap]   stage  0: 1928 frames
[snap]   stage  1: 1324 frames
[snap]   stage  2: 1324 frames
[snap]   stage  3: 1324 frames
[snap]   stage  5: 1324 frames
[snap]   stage  6: 1324 frames
[snap]   stage  7: 1324 frames
[snap]   stage  8: 1324 frames
[snap]   stage 10: 1324 frames
[snap]   stage 11: 1924 frames
[snap]   stage 12: 1327 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
[detect] pawn=0x000002E66FC09000 hp=100 signOn=6 bg=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=18411 lastStage=0 stage5Count=1546
[snap] stage histogram:
[snap]   stage  0: 2249 frames
[snap]   stage  1: 1546 frames
[snap]   stage  2: 1546 frames
[snap]   stage  3: 1546 frames
[snap]   stage  5: 1546 frames
[snap]   stage  6: 1546 frames
[snap]   stage  7: 1546 frames
[snap]   stage  8: 1546 frames
[snap]   stage 10: 1546 frames
[snap]   stage 11: 2245 frames
[snap]   stage 12: 1549 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T03:19:39Z|26572|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-26572.status
[status-write] success state=READY error=0

=== SNAPSHOT ===
[snap] fsnCount=21058 lastStage=0 stage5Count=1769
[snap] stage histogram:
[snap]   stage  0: 2569 frames
[snap]   stage  1: 1769 frames
[snap]   stage  2: 1769 frames
[snap]   stage  3: 1769 frames
[snap]   stage  5: 1769 frames
[snap]   stage  6: 1769 frames
[snap]   stage  7: 1769 frames
[snap]   stage  8: 1769 frames
[snap]   stage 10: 1769 frames
[snap]   stage 11: 2565 frames
[snap]   stage 12: 1772 frames
[snap] dwLocalPlayerController @ 0x00007FF806252548 -> 0x000002E66F5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FF8064491E0 -> 0x000002E5FE1E1800 
[snap] pawn: vtable=0x00007FF8093E3740 inClient=0 health=742
[snap] ctrl: vtable=0x00007FF805921680 inClient=1 m_hPlayerPawn@0x92C = 0x0190000B (idx=11)
[snap] entitySystem @ 0x00007FF80642FBB8 = 0x000002E5E145F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0190000B -> 0x000002E66FC09000
[snap] ----------------------------------------
