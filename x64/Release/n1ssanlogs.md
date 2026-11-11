[status-path] selected=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status source=LOCALAPPDATA

# n1ssan diagnostic session
[build] armory-obsidian-3.0
[build] Operation Armory x Obsidian Build 3.0 | Nov 11 2026 22:53:16
N1SSAN_STATUS|1|2026-11-11T15:54:52Z|19940|armory-obsidian-3.0|INITIALIZING|reason=worker_started
[status-write] begin state=INITIALIZING path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[status-write] success state=INITIALIZING error=0
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFD28E693CB -> rva 0x271FBB8 (val=000004730346F800)
[auto-off] dwLocalPlayerController      hit 0x00007FFD28D85750 -> rva 0x2542548 (val=000004739150E200)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFD285A1615 -> rva 0x27391E0 (val=0000047303A00000)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFD2AB6FBB8
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFD2A992548
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFD2AB891E0
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
[resolve] InvalidateDescription          @ 0x00007FFD295F1350
[resolve] BuildModernSkin                @ 0x00007FFD29295B10
[resolve] SetMeshGroupMask               @ 0x00007FFD28F15A90
[resolve] RegenerateSkins                @ 0x00007FFD28C7B4B0
[resolve] ReleaseCompositeMaterials      @ 0x00007FFD2993C4A0
[resolve] GloveCreatePaintKit            @ 0x00007FFD295E13D0
[resolve] AgentSetModel                  @ 0x00007FFD28DB5C90
[resolve] KnifeUpdateSubclass            @ 0x00007FFD28659000
[resolve] GloveSetBodyGroup              @ 0x00007FFD28DB4BB0
[resolve] MemAlloc                       @ 0x00007FFD619BDD30
[resolve] MemFree                        @ 0x00007FFD619BDD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFD2AB6FBB8 -> 0x000004730346F800
[glove-paintkit-schema] READY
[glove-schema] READY
[plan-a] CEconItemSystem* = 0x0000047275B32FC0 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFD295830F0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFD29538E70, setFloat=00007FFD29539080)
[socache] CreateBaseTypeCache initialized @ 00007FFD29A7B820
[plan-a] shared inventory runtime ready; Loadout injection disabled
[use-tool] initialize attempt=1 installed=0 mode=0
[use-tool] placement probe: sticker signature=FOUND
[use-tool] placement probe: keychain signature=FOUND
[use-tool] notification: engine=0x00007FFD2AB891E0 dispatch=vfunc 47 eventId=903
[use-tool] hook: ok at 0x00007FFD29455810 via signature (CS2's inventory applies Armory stickers and charms)
[use-tool] placement pointers: sticker slot=00007FFD2A66AE90 x=00007FFD2AA4960C y=00007FFD2AA49610 rotation=00007FFD2AA49614 wear=00007FFD2AA49618; charm x=00007FFD2AA498A8 y=00007FFD2AA498AC z=00007FFD2AA498B0
[use-tool] placement: sticker ok, charm ok
[use-tool] popup notification: ok (the applying spinner finishes)
[armory-inventory] watching for inventory changes: E:\Vibe Coding\CS2 Lore\CS2 n1ssan\development\n1ssan-web-bridge\armory-inventory.json
[loadout-api] resolved GetItemID=00007FFD293F85D0 GetSlotEquippedWithDefIndex=00007FFD2940DC10
[loadout-api] resolved CanEquipItemInSlot=00007FFD293DCCC0 EquipItemInSlot=00007FFD293E6690
[fsn] pClient=0x00007FFD2A9B4620 vtable=0x00007FFD2A0B8230 fn=0x00007FFD28FBEFE0 slot=36
[fsn] hooked (vtable overwrite)
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=0000047391DE3800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[match] network signOn=6 maxClients=1 backgroundMap=0 connected=0 alive=0
N1SSAN_STATUS|1|2026-11-11T15:54:53Z|19940|armory-obsidian-3.0|CHECKS_PASSED|reason=required_initialization_checks_passed
[status-write] begin state=CHECKS_PASSED path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[runtime-mode] preparing requested mode: armory
[runtime-mode] active mode: armory
[status-write] success state=CHECKS_PASSED error=0
[diagnostic] runtime=unknown targets=0; awaiting DOMINATE selection
N1SSAN_STATUS|1|2026-11-11T15:54:53Z|19940|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[status-write] success state=READY error=0
[knife-anim] stage=6 reached
[socache-diag] SOCache resolved inv=00000473038C1000 offset=0x68 cache=000004737327BF00 typeCache=0000047373307060
[plan-a] Loadout cleanup: found=0 removed=0 failed=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=375 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[use-tool] main thread: panorama CUIEngine::RunFrame vfunc 5 (0x00007FFD30A46B70)
[knife-anim] stage=6 reached
[armory-inventory] staged 50 items (applies outside an active match)
[armory-inventory] preparing replacement set: 50 items
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x0000047366360BE0
[loot-schema] attr 6 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x0000047366360C80
[loot-schema] attr 7 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x0000047366360D20
[loot-schema] attr 8 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'kill eater' (idx 80) -> 0x00000473663637A0
[loot-schema] attr 'kill eater score type' (idx 81) -> 0x0000047366363840
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=23 slots=0
[armory-inventory] replacement committed: desired=50 created=50 retained=0 removed=0 removeFailed=0
[detect] pawn=0x0000047391DE3800 hp=100 signOn=6 bg=0
[native-equipment] loaded 4 profile maps
[native-equipment] restoring 4 assignments for profile profile-1794212971774-3rcb
[native-equipment] restored CT/clothing_hands instance=item-1794284611926-5qtrf
[native-equipment] restored CT/customplayer instance=item-1794212990979-tmzbn
[native-equipment] restored CT/melee instance=item-1794284779726-4755y
[native-equipment] restored CT/secondary0 instance=item-1794284904958-3swvm
[native-equipment] restore complete: equipped=4 skipped=0

=== SNAPSHOT ===
[snap] fsnCount=2663 lastStage=0 stage5Count=218
[snap] stage histogram:
[snap]   stage  0: 351 frames
[snap]   stage  1: 218 frames
[snap]   stage  2: 218 frames
[snap]   stage  3: 218 frames
[snap]   stage  5: 218 frames
[snap]   stage  6: 218 frames
[snap]   stage  7: 218 frames
[snap]   stage  8: 218 frames
[snap]   stage 10: 218 frames
[snap]   stage 11: 320 frames
[snap]   stage 12: 248 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=376 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=5294 lastStage=0 stage5Count=439
[snap] stage histogram:
[snap]   stage  0: 672 frames
[snap]   stage  1: 439 frames
[snap]   stage  2: 439 frames
[snap]   stage  3: 439 frames
[snap]   stage  5: 439 frames
[snap]   stage  6: 439 frames
[snap]   stage  7: 439 frames
[snap]   stage  8: 439 frames
[snap]   stage 10: 439 frames
[snap]   stage 11: 641 frames
[snap]   stage 12: 469 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-11T15:55:03Z|19940|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=376 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[detect] pawn=0x0000047391DE3800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=8861 lastStage=0 stage5Count=698
[snap] stage histogram:
[snap]   stage  0: 1290 frames
[snap]   stage  1: 698 frames
[snap]   stage  2: 698 frames
[snap]   stage  3: 698 frames
[snap]   stage  5: 698 frames
[snap]   stage  6: 698 frames
[snap]   stage  7: 698 frames
[snap]   stage  8: 698 frames
[snap]   stage 10: 698 frames
[snap]   stage 11: 955 frames
[snap]   stage 12: 1032 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=398 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=13264 lastStage=0 stage5Count=1013
[snap] stage histogram:
[snap]   stage  0: 2074 frames
[snap]   stage  1: 1013 frames
[snap]   stage  2: 1013 frames
[snap]   stage  3: 1013 frames
[snap]   stage  5: 1013 frames
[snap]   stage  6: 1013 frames
[snap]   stage  7: 1013 frames
[snap]   stage  8: 1013 frames
[snap]   stage 10: 1013 frames
[snap]   stage 11: 1275 frames
[snap]   stage 12: 1811 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-11T15:55:13Z|19940|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=397 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[detect] pawn=0x0000047391DE3800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=17732 lastStage=0 stage5Count=1331
[snap] stage histogram:
[snap]   stage  0: 2877 frames
[snap]   stage  1: 1331 frames
[snap]   stage  2: 1331 frames
[snap]   stage  3: 1331 frames
[snap]   stage  5: 1331 frames
[snap]   stage  6: 1331 frames
[snap]   stage  7: 1331 frames
[snap]   stage  8: 1331 frames
[snap]   stage 10: 1331 frames
[snap]   stage 11: 1596 frames
[snap]   stage 12: 2611 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=397 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=21639 lastStage=0 stage5Count=1644
[snap] stage histogram:
[snap]   stage  0: 3422 frames
[snap]   stage  1: 1644 frames
[snap]   stage  2: 1644 frames
[snap]   stage  3: 1644 frames
[snap]   stage  5: 1644 frames
[snap]   stage  6: 1644 frames
[snap]   stage  7: 1644 frames
[snap]   stage  8: 1644 frames
[snap]   stage 10: 1644 frames
[snap]   stage 11: 1915 frames
[snap]   stage 12: 3150 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-11T15:55:23Z|19940|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world index=16854 handle=0xD12D41D6 entity=0000047397A25800 owner=0x00000000 ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=629 globalFound=1 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[use-tool] hook-entry #1 mode=2 api=000004727526B800 toolArg=000004738A677D80 targetArg=000004738A677740 original=00007FFD268F0FC0
[use-tool] charm 13 on 996E899702894BF0: at the popup's spot - applying
[use-tool] hook-entry #1 decision=handled locally
[attach] Lootline ItemViewById resolved @ 00007FFD28C8D190
[attach] ItemViewById read 996E899702894BF0 via CS2 getters
[use-tool] charm target sticker slots read through CS2 ItemView fallback; preserving stickers
[attach] sticker and charm attributes resolved (6 sticker slots, 1 charm)
[use-tool] consumed charm item 9D7C53075E53B850 removal=SUCCESS
[attach] immediate native observation stickers=0 charm=kit:13 seed=0 off=1.828,0.704,5.696 for item-1794285280733-131tl (996E899702894BF0), source=item-1794285644485-e92mt#0 consumed=1 file=written
[use-tool] charm 13 (seed 0) hung on 996E899702894BF0 at x 1.828 y 0.704 z 5.696 (the popup's spot): attributes written, inventory told, popup NOT told, charm item used up
[detect] pawn=0x0000047391DE3800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=25915 lastStage=0 stage5Count=1954
[snap] stage histogram:
[snap]   stage  0: 4165 frames
[snap]   stage  1: 1954 frames
[snap]   stage  2: 1954 frames
[snap]   stage  3: 1954 frames
[snap]   stage  5: 1954 frames
[snap]   stage  6: 1954 frames
[snap]   stage  7: 1954 frames
[snap]   stage  8: 1954 frames
[snap]   stage 10: 1954 frames
[snap]   stage 11: 2236 frames
[snap]   stage 12: 3882 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=399 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=29918 lastStage=0 stage5Count=2269
[snap] stage histogram:
[snap]   stage  0: 4749 frames
[snap]   stage  1: 2269 frames
[snap]   stage  2: 2269 frames
[snap]   stage  3: 2269 frames
[snap]   stage  5: 2269 frames
[snap]   stage  6: 2269 frames
[snap]   stage  7: 2269 frames
[snap]   stage  8: 2269 frames
[snap]   stage 10: 2269 frames
[snap]   stage 11: 2556 frames
[snap]   stage 12: 4461 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-11T15:55:33Z|19940|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world index=17154 handle=0x1C804302 entity=00000473A21B9800 owner=0x00000000 ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=623 globalFound=1 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[use-tool] hook-entry #2 mode=2 api=000004727526B800 toolArg=0000047396112480 targetArg=0000047396111440 original=00007FFD268F0FC0
[use-tool] sticker 3529 on 996E899702894BF0: at the popup's spot - applying
[use-tool] hook-entry #2 decision=handled locally
[attach] ItemViewById read 996E899702894BF0 via CS2 getters
[use-tool] sticker target ItemView fallback; profile charm recovered for exact item
[use-tool] sticker-only write used: charm attributes preserved; full snapshot unavailable
[use-tool] consumed sticker item 975DF8FAFB582C12 removal=SUCCESS
[attach] immediate native observation stickers=1 [0 kit=3529 wear=0.000 rot=0.0 off=0.105,-0.022 schema=1] charm=none for item-1794285280733-131tl (996E899702894BF0), source=item-1794285630936-izaql#2 consumed=1 file=written
[use-tool] sticker 3529 applied to 996E899702894BF0 in slot 0 (position 1): attributes written, inventory told, popup NOT told, sticker item used up
[detect] pawn=0x0000047391DE3800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=33971 lastStage=0 stage5Count=2582
[snap] stage histogram:
[snap]   stage  0: 5367 frames
[snap]   stage  1: 2582 frames
[snap]   stage  2: 2582 frames
[snap]   stage  3: 2582 frames
[snap]   stage  5: 2582 frames
[snap]   stage  6: 2582 frames
[snap]   stage  7: 2582 frames
[snap]   stage  8: 2582 frames
[snap]   stage 10: 2582 frames
[snap]   stage 11: 2876 frames
[snap]   stage 12: 5072 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=397 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[native-equipment] saved 5 native assignments for profile profile-1794212971774-3rcb (revision=285)

=== SNAPSHOT ===
[snap] fsnCount=38367 lastStage=12 stage5Count=2901
[snap] stage histogram:
[snap]   stage  0: 6129 frames
[snap]   stage  1: 2901 frames
[snap]   stage  2: 2901 frames
[snap]   stage  3: 2901 frames
[snap]   stage  5: 2901 frames
[snap]   stage  6: 2901 frames
[snap]   stage  7: 2901 frames
[snap]   stage  8: 2901 frames
[snap]   stage 10: 2901 frames
[snap]   stage 11: 3197 frames
[snap]   stage 12: 5833 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x000004739150E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x01E5800B (idx=11)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x01E5800B -> 0x0000047391DE3800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-11T15:55:43Z|19940|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world index=16803 handle=0x9439C1A3 entity=0000047397D50C00 owner=0x00000000 ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=446 globalFound=1 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[detect] pawn=0x0000047391DE3800 hp=100 signOn=6 bg=0
[glove-observe] pawn=0000047303A00000 reapply=0 changed=48 def=0 init=0 idHigh=0x0
[glove-observe] pawn=0000047387F8A800 reapply=0 changed=0 def=0 init=0 idHigh=0x0

=== SNAPSHOT ===
[snap] fsnCount=41935 lastStage=0 stage5Count=3092
[snap] stage histogram:
[snap]   stage  0: 6910 frames
[snap]   stage  1: 3176 frames
[snap]   stage  2: 3176 frames
[snap]   stage  3: 3172 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3092 frames
[snap]   stage  6: 3092 frames
[snap]   stage  7: 3092 frames
[snap]   stage  8: 3092 frames
[snap]   stage 10: 3092 frames
[snap]   stage 11: 3393 frames
[snap]   stage 12: 6647 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x0000047373FBB400 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x009881A1 (idx=417)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=205
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009881A1 -> 0x0000047387F8A800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world index=17348 handle=0xFBED43C4 entity=00000473CFB6AC00 owner=0x00000000 ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=205 maxIndex=32766 valid=783 globalFound=1 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 0000047387F8A800
[match] FOUND pawn=0x0000047387F8A800 hp=100 signOn=6 bg=0 connected=0
[apply] tick pawn=0x0000047387F8A800
[apply] wData=0x0000000000000002 count=-822885920
[apply] activeHandle=0x004D00EC
[apply] active 0x00000473ACE28000
[pw] weapon=0x00000473ACE28000 view=0x00000473ACE292E0
[pw]   view+0x00 = 0x2A1655F0
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
[pw]   +0x1290 = 0x00007FFD2A165790
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x004D00EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FFD2A1655F0
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x00000473ACE28000 def=32
[team] pawn=0x0000047387F8A800, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[armory-gloves] applied def=5030 team=CT (native item clothing_hands instance 95487A8BBE35D0E1)
[armory-agent] applied def=5404 team=CT model=agents/models/ctm_st6/ctm_st6_varianti.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=0000047387F8A800 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=47926 lastStage=0 stage5Count=3409
[snap] stage histogram:
[snap]   stage  0: 8479 frames
[snap]   stage  1: 3493 frames
[snap]   stage  2: 3493 frames
[snap]   stage  3: 3489 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3409 frames
[snap]   stage  6: 3409 frames
[snap]   stage  7: 3409 frames
[snap]   stage  8: 3409 frames
[snap]   stage 10: 3409 frames
[snap]   stage 11: 3713 frames
[snap]   stage 12: 8213 frames
[snap] dwLocalPlayerController @ 0x00007FFD2A992548 -> 0x0000047373FBB400 
[snap] dwLocalPlayerPawn       @ 0x00007FFD2AB891E0 -> 0x0000047303A00000 
[snap] pawn: vtable=0x00007FFD30E53740 inClient=0 health=1139
[snap] ctrl: vtable=0x00007FFD2A061680 inClient=1 m_hPlayerPawn@0x92C = 0x009881A1 (idx=417)
[snap] entitySystem @ 0x00007FFD2AB6FBB8 = 0x000004730346F800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x009881A1 -> 0x0000047387F8A800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-11T15:55:53Z|19940|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-19940.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0x004D00EC entity=00000473ACE28000
[charm-entity] world index=17348 handle=0xFBED43C4 entity=00000473CFB6AC00 owner=0xFFFFFFFF ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=00000473ACE28000 weaponNode=00000473217FB480 highestNetworked=211 maxIndex=32766 valid=763 globalFound=1 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE28000
[pw] weapon 0x00000473ACE28000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x0000047387F8A800
[apply] active 0x00000473ACE26000
[pw] weapon 0x00000473ACE26000 def=42
[armory-apply] native-loadout live weapon def=42 team=CT paintKit=417 (native item instance 965354FE16403F60)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x00000473ACE26000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=00000473ACE272E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=110.000 initial=110.000
[attr-entry] 2: def=8 value=0.007760 initial=0.007760
[apply] world post-create: size=3 data=00000473A330DB00 alloc=11
[apply] world view 0x00000473ACE272E0 painted (pk=417)
[loot-schema] CallSetAttribute: threw
[loot-schema] CallSetAttribute: threw
[loot-schema] CallSetAttribute: threw
[attr-networked] item=00000473ACE272E0 paint=417 stattrak=-1 attachments=0 result=0
[attr-networked] sync incomplete for weapon=00000473ACE26000 view=00000473ACE272E0
[hud-find] START weapon=0x00000473ACE26000 pawn=0x0000047387F8A800
[hud-find] armsHandle=0xC4E6419C
[hud-find] arms=0x00000473AD468800
[hud-find] armsNode=0x00000473CE7E2080
[hud-find] firstChild=0x000004738E52EC80
[hud-find] NO MATCH walked=1 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=00000473ACE26000 hud=0000000000000000 def=525 pk=417
[model] outer=0x000004738EB02DD8 inner=0x0000047387C94100
[apply] world BuildModernSkin failed item=00000473ACE272E0 model=0000047387C94100 entity=00000473ACE26000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
