[status-path] selected=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status source=LOCALAPPDATA
# n1ssan diagnostic session
Session started (UTC): 2026-11-11T15:41:14Z
[build] armory-obsidian-3.0
[build] Operation Armory x Obsidian Build 3.0 | Nov 11 2026 15:49:51
N1SSAN_STATUS|1|2026-11-11T15:41:14Z|2264|armory-obsidian-3.0|INITIALIZING|reason=worker_started
[status-write] begin state=INITIALIZING path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
[status-write] success state=INITIALIZING error=0
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFD959693CB -> rva 0x271FBB8 (val=00000464A146F000)
[auto-off] dwLocalPlayerController      hit 0x00007FFD95885750 -> rva 0x2542548 (val=000004653592CE00)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFD950A1615 -> rva 0x27391E0 (val=00000464A1B22800)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFD9766FBB8
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFD97492548
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFD976891E0
[bridge] discovered Bridge directory: E:\Vibe Coding\CS2 Lore\CS2 n1ssan\development\n1ssan-web-bridge\
[runtime-mode] initial mode: armory
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
[resolve] InvalidateDescription          @ 0x00007FFD960F1350
[resolve] BuildModernSkin                @ 0x00007FFD95D95B10
[resolve] SetMeshGroupMask               @ 0x00007FFD95A15A90
[resolve] RegenerateSkins                @ 0x00007FFD9577B4B0
[resolve] ReleaseCompositeMaterials      @ 0x00007FFD9643C4A0
[resolve] GloveCreatePaintKit            @ 0x00007FFD960E13D0
[resolve] AgentSetModel                  @ 0x00007FFD958B5C90
[resolve] KnifeUpdateSubclass            @ 0x00007FFD95159000
[resolve] GloveSetBodyGroup              @ 0x00007FFD958B4BB0
[resolve] MemAlloc                       @ 0x00007FFDEF52DD30
[resolve] MemFree                        @ 0x00007FFDEF52DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFD9766FBB8 -> 0x00000464A146F000
[glove-paintkit-schema] READY
[glove-schema] READY
[plan-a] CEconItemSystem* = 0x0000046415B33E20 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFD960830F0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFD96038E70, setFloat=00007FFD96039080)
[socache] CreateBaseTypeCache initialized @ 00007FFD9657B820
[plan-a] shared inventory runtime ready; Loadout injection disabled
[use-tool] initialize attempt=1 installed=0 mode=0
[use-tool] placement probe: sticker signature=FOUND
[use-tool] placement probe: keychain signature=FOUND
[use-tool] notification: engine=0x00007FFD976891E0 dispatch=vfunc 47 eventId=903
[use-tool] hook: ok at 0x00007FFD95F55810 via signature (CS2's inventory applies Armory stickers and charms)
[use-tool] placement pointers: sticker slot=00007FFD9716AE90 x=00007FFD9754960C y=00007FFD97549610 rotation=00007FFD97549614 wear=00007FFD97549618; charm x=00007FFD975498A8 y=00007FFD975498AC z=00007FFD975498B0
[use-tool] placement: sticker ok, charm ok
[use-tool] popup notification: ok (the applying spinner finishes)
[armory-inventory] watching for inventory changes: E:\Vibe Coding\CS2 Lore\CS2 n1ssan\development\n1ssan-web-bridge\armory-inventory.json
[loadout-api] resolved GetItemID=00007FFD95EF85D0 GetSlotEquippedWithDefIndex=00007FFD95F0DC10
[loadout-api] resolved CanEquipItemInSlot=00007FFD95EDCCC0 EquipItemInSlot=00007FFD95EE6690
[fsn] pClient=0x00007FFD974B4620 vtable=0x00007FFD96BB8230 fn=0x00007FFD95ABEFE0 slot=36
[fsn] hooked (vtable overwrite)
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1124
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-11T15:41:15Z|2264|armory-obsidian-3.0|CHECKS_PASSED|reason=required_initialization_checks_passed
[status-write] begin state=CHECKS_PASSED path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
[knife-anim] stage=6 reached
[glove-observe] pawn=0000046535E1C800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[runtime-mode] preparing requested mode: armory
[match] network signOn=6 maxClients=1 backgroundMap=0 connected=0 alive=0
[runtime-mode] active mode: armory
[status-write] success state=CHECKS_PASSED error=0
[diagnostic] runtime=unknown targets=0; awaiting DOMINATE selection
N1SSAN_STATUS|1|2026-11-11T15:41:15Z|2264|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
[status-write] success state=READY error=0
[knife-anim] stage=6 reached
[socache-diag] SOCache resolved inv=00000464A19A3000 offset=0x68 cache=00000464892EB380 typeCache=00000464893D65C0
[plan-a] Loadout cleanup: found=0 removed=0 failed=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=375 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[use-tool] main thread: panorama CUIEngine::RunFrame vfunc 5 (0x00007FFD9A386B70)
[knife-anim] stage=6 reached
[armory-inventory] staged 50 items (applies outside an active match)
[armory-inventory] preparing replacement set: 50 items
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x00000465063895E0
[loot-schema] attr 6 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x0000046506389680
[loot-schema] attr 7 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x0000046506389720
[loot-schema] attr 8 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'kill eater' (idx 80) -> 0x000004650638C1A0
[loot-schema] attr 'kill eater score type' (idx 81) -> 0x000004650638C240
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=23 slots=0
[armory-inventory] replacement committed: desired=50 created=50 retained=0 removed=0 removeFailed=0
[detect] pawn=0x0000046535E1C800 hp=100 signOn=6 bg=0
[native-equipment] loaded 4 profile maps
[native-equipment] restoring 1 assignments for profile profile-1794212971774-3rcb
[native-equipment] restored CT/customplayer instance=item-1794212990979-tmzbn
[native-equipment] restore complete: equipped=1 skipped=0

=== SNAPSHOT ===
[snap] fsnCount=2596 lastStage=0 stage5Count=217
[snap] stage histogram:
[snap]   stage  0: 322 frames
[snap]   stage  1: 217 frames
[snap]   stage  2: 217 frames
[snap]   stage  3: 217 frames
[snap]   stage  5: 217 frames
[snap]   stage  6: 217 frames
[snap]   stage  7: 217 frames
[snap]   stage  8: 217 frames
[snap]   stage 10: 217 frames
[snap]   stage 11: 321 frames
[snap]   stage 12: 217 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1124
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=375 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T15:41:25Z|2264|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status

=== SNAPSHOT ===
[snap] fsnCount=5227 lastStage=0 stage5Count=438
[snap] stage histogram:
[snap]   stage  0: 643 frames
[snap]   stage  1: 438 frames
[snap]   stage  2: 438 frames
[snap]   stage  3: 438 frames
[snap]   stage  5: 438 frames
[snap]   stage  6: 438 frames
[snap]   stage  7: 438 frames
[snap]   stage  8: 438 frames
[snap]   stage 10: 438 frames
[snap]   stage 11: 642 frames
[snap]   stage 12: 438 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1124
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=375 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[status-write] success state=READY error=0
[detect] pawn=0x0000046535E1C800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=7490 lastStage=0 stage5Count=627
[snap] stage histogram:
[snap]   stage  0: 924 frames
[snap]   stage  1: 627 frames
[snap]   stage  2: 627 frames
[snap]   stage  3: 627 frames
[snap]   stage  5: 627 frames
[snap]   stage  6: 627 frames
[snap]   stage  7: 627 frames
[snap]   stage  8: 627 frames
[snap]   stage 10: 627 frames
[snap]   stage 11: 923 frames
[snap]   stage 12: 627 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1124
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=375 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=11560 lastStage=0 stage5Count=907
[snap] stage histogram:
[snap]   stage  0: 1699 frames
[snap]   stage  1: 907 frames
[snap]   stage  2: 907 frames
[snap]   stage  3: 907 frames
[snap]   stage  5: 907 frames
[snap]   stage  6: 907 frames
[snap]   stage  7: 907 frames
[snap]   stage  8: 907 frames
[snap]   stage 10: 907 frames
[snap]   stage 11: 1238 frames
[snap]   stage 12: 1367 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1124
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T15:41:36Z|2264|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
[status-write] success state=READY error=0
[detect] pawn=0x0000046535E1C800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=16284 lastStage=0 stage5Count=1227
[snap] stage histogram:
[snap]   stage  0: 2621 frames
[snap]   stage  1: 1227 frames
[snap]   stage  2: 1227 frames
[snap]   stage  3: 1227 frames
[snap]   stage  5: 1227 frames
[snap]   stage  6: 1227 frames
[snap]   stage  7: 1227 frames
[snap]   stage  8: 1227 frames
[snap]   stage 10: 1227 frames
[snap]   stage 11: 1559 frames
[snap]   stage 12: 2288 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1124
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=20896 lastStage=0 stage5Count=1543
[snap] stage histogram:
[snap]   stage  0: 3505 frames
[snap]   stage  1: 1543 frames
[snap]   stage  2: 1543 frames
[snap]   stage  3: 1543 frames
[snap]   stage  5: 1543 frames
[snap]   stage  6: 1543 frames
[snap]   stage  7: 1543 frames
[snap]   stage  8: 1543 frames
[snap]   stage 10: 1543 frames
[snap]   stage 11: 1880 frames
[snap]   stage 12: 3167 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1125
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T15:41:46Z|2264|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
[status-write] success state=READY error=0
[detect] pawn=0x0000046535E1C800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=25171 lastStage=0 stage5Count=1860
[snap] stage histogram:
[snap]   stage  0: 4216 frames
[snap]   stage  1: 1860 frames
[snap]   stage  2: 1860 frames
[snap]   stage  3: 1860 frames
[snap]   stage  5: 1860 frames
[snap]   stage  6: 1860 frames
[snap]   stage  7: 1860 frames
[snap]   stage  8: 1860 frames
[snap]   stage 10: 1860 frames
[snap]   stage 11: 2200 frames
[snap]   stage 12: 3875 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1125
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world index=16832 handle=0x947F41C0 entity=00000465271CBC00 owner=0x00000000 ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=604 globalFound=1 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=29073 lastStage=0 stage5Count=2180
[snap] stage histogram:
[snap]   stage  0: 4727 frames
[snap]   stage  1: 2180 frames
[snap]   stage  2: 2180 frames
[snap]   stage  3: 2180 frames
[snap]   stage  5: 2180 frames
[snap]   stage  6: 2180 frames
[snap]   stage  7: 2180 frames
[snap]   stage  8: 2180 frames
[snap]   stage 10: 2180 frames
[snap]   stage 11: 2520 frames
[snap]   stage 12: 4386 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1125
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world index=16832 handle=0x947F41C0 entity=00000465271CBC00 owner=0x00000000 ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=604 globalFound=1 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T15:41:56Z|2264|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
[status-write] success state=READY error=0
[detect] pawn=0x0000046535E1C800 hp=100 signOn=6 bg=0
[use-tool] hook-entry #1 mode=2 api=000004641526C900 toolArg=0000046529E05F60 targetArg=0000046529E02E60 original=00007FFD932B0FC0
[use-tool] charm 13 on 9BF887929A073443: at the popup's spot - applying
[use-tool] hook-entry #1 decision=handled locally
[attach] Lootline ItemViewById resolved @ 00007FFD9578D190
[attach] ItemViewById read 9BF887929A073443 via CS2 getters
[use-tool] charm target sticker slots read through CS2 ItemView fallback; preserving stickers
[attach] sticker and charm attributes resolved (6 sticker slots, 1 charm)
[use-tool] consumed charm item 9D7C53075E53B850 removal=SUCCESS
[attach] immediate native observation stickers=0 charm=kit:13 seed=0 off=11.107,0.757,4.006 for item-1794284904958-3swvm (9BF887929A073443), source=item-1794285644485-e92mt#0 consumed=1 file=written
[use-tool] charm 13 (seed 0) hung on 9BF887929A073443 at x 11.107 y 0.757 z 4.006 (the popup's spot): attributes written, inventory told, popup NOT told, charm item used up

=== SNAPSHOT ===
[snap] fsnCount=32935 lastStage=0 stage5Count=2492
[snap] stage histogram:
[snap]   stage  0: 5254 frames
[snap]   stage  1: 2492 frames
[snap]   stage  2: 2492 frames
[snap]   stage  3: 2492 frames
[snap]   stage  5: 2492 frames
[snap]   stage  6: 2492 frames
[snap]   stage  7: 2492 frames
[snap]   stage  8: 2492 frames
[snap]   stage 10: 2492 frames
[snap]   stage 11: 2840 frames
[snap]   stage 12: 4905 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1125
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world index=17012 handle=0xDECE4274 entity=0000046535833800 owner=0x00000000 ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=471 globalFound=1 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[native-equipment] saved 2 native assignments for profile profile-1794212971774-3rcb (revision=285)

=== SNAPSHOT ===
[snap] fsnCount=37144 lastStage=7 stage5Count=2807
[snap] stage histogram:
[snap]   stage  0: 5942 frames
[snap]   stage  1: 2807 frames
[snap]   stage  2: 2807 frames
[snap]   stage  3: 2806 frames
[snap]   stage  5: 2807 frames
[snap]   stage  6: 2807 frames
[snap]   stage  7: 2807 frames
[snap]   stage  8: 2806 frames
[snap]   stage 10: 2807 frames
[snap]   stage 11: 3161 frames
[snap]   stage 12: 5587 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1125
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=394 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T15:42:06Z|2264|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
[status-write] success state=READY error=0
[detect] pawn=0x0000046535E1C800 hp=100 signOn=6 bg=0
[native-equipment] saved 3 native assignments for profile profile-1794212971774-3rcb (revision=285)
[native-equipment] saved 4 native assignments for profile profile-1794212971774-3rcb (revision=285)

=== SNAPSHOT ===
[snap] fsnCount=41412 lastStage=0 stage5Count=3127
[snap] stage histogram:
[snap]   stage  0: 6635 frames
[snap]   stage  1: 3127 frames
[snap]   stage  2: 3127 frames
[snap]   stage  3: 3127 frames
[snap]   stage  5: 3127 frames
[snap]   stage  6: 3127 frames
[snap]   stage  7: 3127 frames
[snap]   stage  8: 3127 frames
[snap]   stage 10: 3127 frames
[snap]   stage 11: 3481 frames
[snap]   stage 12: 6280 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1125
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=396 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=46294 lastStage=0 stage5Count=3445
[snap] stage histogram:
[snap]   stage  0: 7645 frames
[snap]   stage  1: 3445 frames
[snap]   stage  2: 3445 frames
[snap]   stage  3: 3445 frames
[snap]   stage  5: 3445 frames
[snap]   stage  6: 3445 frames
[snap]   stage  7: 3445 frames
[snap]   stage  8: 3445 frames
[snap]   stage 10: 3445 frames
[snap]   stage 11: 3801 frames
[snap]   stage 12: 7288 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004653592CE00 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1125
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x0031000B (idx=11)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0031000B -> 0x0000046535E1C800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=411 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
N1SSAN_STATUS|1|2026-11-11T15:42:16Z|2264|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
[status-write] success state=READY error=0
[glove-observe] pawn=00000464A1B22800 reapply=114 changed=48 def=24948 init=115 idHigh=0x726F482C
[detect] pawn=0x00000464A1B22800 hp=1125 signOn=5 bg=0
[glove-observe] pawn=00000465350BD800 reapply=0 changed=0 def=0 init=0 idHigh=0x0

=== SNAPSHOT ===
[snap] fsnCount=50064 lastStage=0 stage5Count=3638
[snap] stage histogram:
[snap]   stage  0: 8549 frames
[snap]   stage  1: 3704 frames
[snap]   stage  2: 3704 frames
[snap]   stage  3: 3700 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3638 frames
[snap]   stage  6: 3638 frames
[snap]   stage  7: 3638 frames
[snap]   stage  8: 3638 frames
[snap]   stage 10: 3638 frames
[snap]   stage 11: 4000 frames
[snap]   stage 12: 8216 frames
[snap] dwLocalPlayerController @ 0x00007FFD97492548 -> 0x000004650850B600 
[snap] dwLocalPlayerPawn       @ 0x00007FFD976891E0 -> 0x00000464A1B22800 
[snap] pawn: vtable=0x00007FFD9A793740 inClient=0 health=1125
[snap] ctrl: vtable=0x00007FFD96B61680 inClient=1 m_hPlayerPawn@0x92C = 0x00B181A1 (idx=417)
[snap] entitySystem @ 0x00007FFD9766FBB8 = 0x00000464A146F000 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00B181A1 -> 0x00000465350BD800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=205 maxIndex=32766 valid=781 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 00000465350BD800
[match] FOUND pawn=0x00000465350BD800 hp=100 signOn=6 bg=0 connected=0
[apply] tick pawn=0x00000465350BD800
[apply] wData=0x0000000000000002 count=742167200
[apply] activeHandle=0x00E380EC
[apply] active 0x00000464E50E2000
[pw] weapon=0x00000464E50E2000 view=0x00000464E50E32E0
[pw]   view+0x00 = 0x96C655F0
[pw]   view+0x04 = 0x00007FFD
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
[pw]   +0x1290 = 0x00007FFD96C65790
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x00E380EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FFD96C655F0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x00000464E50E2000 def=32
[team] pawn=0x00000465350BD800, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[armory-gloves] applied def=5030 team=CT (native item clothing_hands instance 95487A8BBE35D0E1)
[armory-agent] applied def=5404 team=CT model=agents/models/ctm_st6/ctm_st6_varianti.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=00000465350BD800 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x00000465350BD800
[apply] active 0x00000464E50E2000
[pw] weapon 0x00000464E50E2000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x00000465350BD800
[apply] active 0x00000464E50E2000
[pw] weapon 0x00000464E50E2000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000465350BD800
[apply] active 0x00000464E50E2000
[pw] weapon 0x00000464E50E2000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x00000465350BD800
[apply] active 0x00000464E50E2000
[pw] weapon 0x00000464E50E2000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x00000465350BD800
[apply] active 0x00000464E50E2000
[pw] weapon 0x00000464E50E2000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x00000465350BD800
[apply] active 0x00000464E50E0000
[pw] weapon 0x00000464E50E0000 def=42
[armory-apply] native-loadout live weapon def=42 team=CT paintKit=417 (native item instance 965354FE16403F60)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x00000464E50E0000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000464E50E12E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=110.000 initial=110.000
[attr-entry] 2: def=8 value=0.007760 initial=0.007760
[apply] world post-create: size=3 data=00000465650DCB00 alloc=11
[apply] world view 0x00000464E50E12E0 painted (pk=417)
[loot-schema] CallSetAttribute: threw
[loot-schema] CallSetAttribute: threw
[loot-schema] CallSetAttribute: threw
[attr-networked] item=00000464E50E12E0 paint=417 stattrak=-1 attachments=0 result=0
[attr-networked] sync incomplete for weapon=00000464E50E0000 view=00000464E50E12E0
[hud-find] START weapon=0x00000464E50E0000 pawn=0x00000465350BD800
[hud-find] armsHandle=0x1D2C4261
[hud-find] arms=0x0000046567DB3800
[hud-find] armsNode=0x000004656A5F8480
[hud-find] firstChild=0x000004656749A080
[hud-find] child[1]=0x000004656A5F6C80 owner=0x00000464E517E000 handle=0xE380EC resolved=0x00000464E50E2000
[hud-find] NO MATCH walked=2 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=00000464E50E0000 hud=0000000000000000 def=525 pk=417
[apply] world BuildModernSkin THREW
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
N1SSAN_STATUS|1|2026-11-11T15:42:27Z|2264|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-2264.status
