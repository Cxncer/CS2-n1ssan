[status-path] selected=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-25776.status source=LOCALAPPDATA

# n1ssan diagnostic session
[build] armory-obsidian-3.0
[build] Operation Armory x Obsidian Build 3.0 | Nov 11 2026 01:58:41
N1SSAN_STATUS|1|2026-11-10T20:21:43Z|25776|armory-obsidian-3.0|INITIALIZING|reason=worker_started
[status-write] begin state=INITIALIZING path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-25776.status
[status-write] success state=INITIALIZING error=0
[off] PAWN_MyWearables = 0x1268
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFDC14893CB -> rva 0x271FBB8 (val=00000281CD478000)
[auto-off] dwLocalPlayerController      hit 0x00007FFDC13A5750 -> rva 0x2542548 (val=000002825949E200)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFDC0BC1615 -> rva 0x27391E0 (val=00000281EA241C00)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFDC318FBB8
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFDC2FB2548
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFDC31A91E0
[bridge] using packaged runtime directory from LOCALAPPDATA: C:\Users\mirac\AppData\Local\n1ssan\
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
[resolve] InvalidateDescription          @ 0x00007FFDC1C11350
[resolve] BuildModernSkin                @ 0x00007FFDC18B5B10
[resolve] SetMeshGroupMask               @ 0x00007FFDC1535A90
[resolve] RegenerateSkins                @ 0x00007FFDC129B4B0
[resolve] ReleaseCompositeMaterials      @ 0x00007FFDC1F5C4A0
[resolve] GloveCreatePaintKit            @ 0x00007FFDC1C013D0
[resolve] AgentSetModel                  @ 0x00007FFDC13D5C90
[resolve] KnifeUpdateSubclass            @ 0x00007FFDC0C79000
[resolve] GloveSetBodyGroup              @ 0x00007FFDC13D4BB0
[resolve] MemAlloc                       @ 0x00007FFDE979DD30
[resolve] MemFree                        @ 0x00007FFDE979DD70
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFDC318FBB8 -> 0x00000281CD478000
[glove-paintkit-schema] READY
[glove-schema] READY
[plan-a] CEconItemSystem* = 0x000002813FB32F50 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFDC1BA30F0
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFDC1B58E70, setFloat=00007FFDC1B59080)
[socache] CreateBaseTypeCache initialized @ 00007FFDC209B820
[plan-a] shared inventory runtime ready; Loadout injection disabled
[use-tool] initialize attempt=1 installed=0 mode=0
[use-tool] placement probe: sticker signature=FOUND
[use-tool] placement probe: keychain signature=FOUND
[use-tool] notification: engine=0x00007FFDC31A91E0 dispatch=vfunc 47 eventId=903
[use-tool] hook: ok at 0x00007FFDC1A75810 via signature (CS2's inventory applies Armory stickers and charms)
[use-tool] placement pointers: sticker slot=00007FFDC2C8AE90 x=00007FFDC306960C y=00007FFDC3069610 rotation=00007FFDC3069614 wear=00007FFDC3069618; charm x=00007FFDC30698A8 y=00007FFDC30698AC z=00007FFDC30698B0
[use-tool] placement: sticker ok, charm ok
[use-tool] popup notification: ok (the applying spinner finishes)
[armory-inventory] watching for inventory changes: C:\Users\mirac\AppData\Local\n1ssan\armory-inventory.json
[loadout-api] resolved GetItemID=00007FFDC1A185D0 GetSlotEquippedWithDefIndex=00007FFDC1A2DC10
[loadout-api] resolved CanEquipItemInSlot=00007FFDC19FCCC0 EquipItemInSlot=00007FFDC1A06690
[fsn] pClient=0x00007FFDC2FD4620 vtable=0x00007FFDC26D8230 fn=0x00007FFDC15DEFE0 slot=36
[fsn] hooked (vtable overwrite)
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFDC2FB2548 -> 0x000002825949E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFDC31A91E0 -> 0x00000281EA241C00 
[snap] pawn: vtable=0x00007FFDCCBE3740 inClient=0 health=642
[snap] ctrl: vtable=0x00007FFDC2681680 inClient=1 m_hPlayerPawn@0x92C = 0x00F9000B (idx=11)
[snap] entitySystem @ 0x00007FFDC318FBB8 = 0x00000281CD478000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00F9000B -> 0x0000028259FB1800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=0000028259FB1800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[match] network signOn=6 maxClients=1 backgroundMap=0 connected=0 alive=0
N1SSAN_STATUS|1|2026-11-10T20:21:43Z|25776|armory-obsidian-3.0|CHECKS_PASSED|reason=required_initialization_checks_passed
[status-write] begin state=CHECKS_PASSED path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-25776.status
[runtime-mode] preparing requested mode: armory
[runtime-mode] active mode: armory
[status-write] success state=CHECKS_PASSED error=0
[diagnostic] runtime=unknown targets=0; awaiting DOMINATE selection
N1SSAN_STATUS|1|2026-11-10T20:21:43Z|25776|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-25776.status
[knife-anim] stage=6 reached
[socache-diag] SOCache resolved inv=00000281CD7C1000 offset=0x68 cache=00000282392FC500 typeCache=0000028239397160
[plan-a] Loadout cleanup: found=0 removed=0 failed=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=373 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[use-tool] main thread: panorama CUIEngine::RunFrame vfunc 5 (0x00007FFDCC7D6B70)
[status-write] success state=READY error=0
[knife-anim] stage=6 reached
[armory-inventory] staged 68 items (applies outside an active match)
[armory-inventory] preparing replacement set: 68 items
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x00000282323A0E60
[loot-schema] attr 6 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x00000282323A0F00
[loot-schema] attr 7 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x00000282323A0FA0
[loot-schema] attr 8 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'kill eater' (idx 80) -> 0x00000282323A3A20
[loot-schema] attr 'kill eater score type' (idx 81) -> 0x00000282323A3AC0
[attach] sticker and charm attributes resolved (6 sticker slots, 1 charm)
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=20 slots=0
[armory-inventory] replacement committed: desired=68 created=68 retained=0 removed=0 removeFailed=0
[detect] pawn=0x0000028259FB1800 hp=100 signOn=6 bg=0
[native-equipment] loaded 3 profile maps
[native-equipment] restoring 20 assignments for profile profile-1794331239120-3ylq
[native-equipment] restored CT/clothing_hands instance=item-1794331312413-dcp8n
[native-equipment] restored CT/melee instance=item-1794331360613-1jcfp
[native-equipment] restored CT/rifle0 instance=item-1794331613050-twc5j
[native-equipment] restored CT/rifle1 instance=item-1794331658932-w7jck
[native-equipment] restored CT/rifle2 instance=item-1794331673593-vpijl
[native-equipment] restored CT/rifle4 instance=item-1794331651638-0robe
[native-equipment] restored CT/secondary0 instance=item-1794331403908-zdc28
[native-equipment] restored CT/secondary4 instance=item-1794331425897-az8e0
[native-equipment] restored CT/smg0 instance=item-1794331710484-7i7yp
[native-equipment] restored CT/smg4 instance=item-1794331457365-harvv
[native-equipment] restored T/clothing_hands instance=item-1794331323731-ttge5
[native-equipment] restored T/melee instance=item-1794331384777-pb8t1
[native-equipment] restored T/rifle0 instance=item-1794331600289-fd3t7
[native-equipment] restored T/rifle1 instance=item-1794331549285-eovcy
[native-equipment] restored T/rifle4 instance=item-1794331638121-973x4
[native-equipment] restored T/secondary0 instance=item-1794331519684-j2zns
[native-equipment] restored T/secondary1 instance=item-1794331506490-mo2jc
[native-equipment] restored T/secondary4 instance=item-1794331438995-yxopt
[native-equipment] restored T/smg0 instance=item-1794331733396-24pwr
[native-equipment] restored T/smg4 instance=item-1794331493793-rqzih
[native-equipment] restore complete: equipped=20 skipped=0

=== SNAPSHOT ===
[snap] fsnCount=2594 lastStage=7 stage5Count=217
[snap] stage histogram:
[snap]   stage  0: 322 frames
[snap]   stage  1: 217 frames
[snap]   stage  2: 217 frames
[snap]   stage  3: 216 frames
[snap]   stage  5: 217 frames
[snap]   stage  6: 217 frames
[snap]   stage  7: 217 frames
[snap]   stage  8: 216 frames
[snap]   stage 10: 217 frames
[snap]   stage 11: 322 frames
[snap]   stage 12: 216 frames
[snap] dwLocalPlayerController @ 0x00007FFDC2FB2548 -> 0x000002825949E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFDC31A91E0 -> 0x00000281EA241C00 
[snap] pawn: vtable=0x00007FFDCCBE3740 inClient=0 health=642
[snap] ctrl: vtable=0x00007FFDC2681680 inClient=1 m_hPlayerPawn@0x92C = 0x00F9000B (idx=11)
[snap] entitySystem @ 0x00007FFDC318FBB8 = 0x00000281CD478000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00F9000B -> 0x0000028259FB1800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=374 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=5209 lastStage=0 stage5Count=436
[snap] stage histogram:
[snap]   stage  0: 643 frames
[snap]   stage  1: 436 frames
[snap]   stage  2: 436 frames
[snap]   stage  3: 436 frames
[snap]   stage  5: 436 frames
[snap]   stage  6: 436 frames
[snap]   stage  7: 436 frames
[snap]   stage  8: 436 frames
[snap]   stage 10: 436 frames
[snap]   stage 11: 641 frames
[snap]   stage 12: 437 frames
[snap] dwLocalPlayerController @ 0x00007FFDC2FB2548 -> 0x000002825949E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFDC31A91E0 -> 0x00000281EA241C00 
[snap] pawn: vtable=0x00007FFDCCBE3740 inClient=0 health=642
[snap] ctrl: vtable=0x00007FFDC2681680 inClient=1 m_hPlayerPawn@0x92C = 0x00F9000B (idx=11)
[snap] entitySystem @ 0x00007FFDC318FBB8 = 0x00000281CD478000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00F9000B -> 0x0000028259FB1800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-10T20:21:53Z|25776|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-25776.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=374 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[detect] pawn=0x0000028259FB1800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=7875 lastStage=0 stage5Count=658
[snap] stage histogram:
[snap]   stage  0: 977 frames
[snap]   stage  1: 658 frames
[snap]   stage  2: 658 frames
[snap]   stage  3: 658 frames
[snap]   stage  5: 658 frames
[snap]   stage  6: 658 frames
[snap]   stage  7: 658 frames
[snap]   stage  8: 658 frames
[snap]   stage 10: 658 frames
[snap]   stage 11: 962 frames
[snap]   stage 12: 672 frames
[snap] dwLocalPlayerController @ 0x00007FFDC2FB2548 -> 0x000002825949E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFDC31A91E0 -> 0x00000281EA241C00 
[snap] pawn: vtable=0x00007FFDCCBE3740 inClient=0 health=642
[snap] ctrl: vtable=0x00007FFDC2681680 inClient=1 m_hPlayerPawn@0x92C = 0x00F9000B (idx=11)
[snap] entitySystem @ 0x00007FFDC318FBB8 = 0x00000281CD478000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00F9000B -> 0x0000028259FB1800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=374 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=10495 lastStage=0 stage5Count=878
[snap] stage histogram:
[snap]   stage  0: 1297 frames
[snap]   stage  1: 878 frames
[snap]   stage  2: 878 frames
[snap]   stage  3: 878 frames
[snap]   stage  5: 878 frames
[snap]   stage  6: 878 frames
[snap]   stage  7: 878 frames
[snap]   stage  8: 878 frames
[snap]   stage 10: 878 frames
[snap]   stage 11: 1282 frames
[snap]   stage 12: 892 frames
[snap] dwLocalPlayerController @ 0x00007FFDC2FB2548 -> 0x000002825949E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFDC31A91E0 -> 0x00000281EA241C00 
[snap] pawn: vtable=0x00007FFDCCBE3740 inClient=0 health=642
[snap] ctrl: vtable=0x00007FFDC2681680 inClient=1 m_hPlayerPawn@0x92C = 0x00F9000B (idx=11)
[snap] entitySystem @ 0x00007FFDC318FBB8 = 0x00000281CD478000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00F9000B -> 0x0000028259FB1800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-10T20:22:03Z|25776|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-25776.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=374 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[detect] pawn=0x0000028259FB1800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=14449 lastStage=0 stage5Count=1156
[snap] stage histogram:
[snap]   stage  0: 2023 frames
[snap]   stage  1: 1156 frames
[snap]   stage  2: 1156 frames
[snap]   stage  3: 1156 frames
[snap]   stage  5: 1156 frames
[snap]   stage  6: 1156 frames
[snap]   stage  7: 1156 frames
[snap]   stage  8: 1156 frames
[snap]   stage 10: 1156 frames
[snap]   stage 11: 1603 frames
[snap]   stage 12: 1575 frames
[snap] dwLocalPlayerController @ 0x00007FFDC2FB2548 -> 0x000002825949E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFDC31A91E0 -> 0x00000281EA241C00 
[snap] pawn: vtable=0x00007FFDCCBE3740 inClient=0 health=642
[snap] ctrl: vtable=0x00007FFDC2681680 inClient=1 m_hPlayerPawn@0x92C = 0x00F9000B (idx=11)
[snap] entitySystem @ 0x00007FFDC318FBB8 = 0x00000281CD478000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00F9000B -> 0x0000028259FB1800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=372 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=19237 lastStage=0 stage5Count=1476
[snap] stage histogram:
[snap]   stage  0: 2977 frames
[snap]   stage  1: 1476 frames
[snap]   stage  2: 1476 frames
[snap]   stage  3: 1476 frames
[snap]   stage  5: 1476 frames
[snap]   stage  6: 1476 frames
[snap]   stage  7: 1476 frames
[snap]   stage  8: 1476 frames
[snap]   stage 10: 1476 frames
[snap]   stage 11: 1923 frames
[snap]   stage 12: 2529 frames
[snap] dwLocalPlayerController @ 0x00007FFDC2FB2548 -> 0x000002825949E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFDC31A91E0 -> 0x00000281EA241C00 
[snap] pawn: vtable=0x00007FFDCCBE3740 inClient=0 health=642
[snap] ctrl: vtable=0x00007FFDC2681680 inClient=1 m_hPlayerPawn@0x92C = 0x00F9000B (idx=11)
[snap] entitySystem @ 0x00007FFDC318FBB8 = 0x00000281CD478000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00F9000B -> 0x0000028259FB1800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-10T20:22:13Z|25776|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-25776.status
[status-write] success state=READY error=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=372 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[detect] pawn=0x0000028259FB1800 hp=100 signOn=6 bg=0

=== SNAPSHOT ===
[snap] fsnCount=24273 lastStage=0 stage5Count=1796
[snap] stage histogram:
[snap]   stage  0: 4055 frames
[snap]   stage  1: 1796 frames
[snap]   stage  2: 1796 frames
[snap]   stage  3: 1796 frames
[snap]   stage  5: 1796 frames
[snap]   stage  6: 1796 frames
[snap]   stage  7: 1796 frames
[snap]   stage  8: 1796 frames
[snap]   stage 10: 1796 frames
[snap]   stage 11: 2243 frames
[snap]   stage 12: 3607 frames
[snap] dwLocalPlayerController @ 0x00007FFDC2FB2548 -> 0x000002825949E200 
[snap] dwLocalPlayerPawn       @ 0x00007FFDC31A91E0 -> 0x00000281EA241C00 
[snap] pawn: vtable=0x00007FFDCCBE3740 inClient=0 health=642
[snap] ctrl: vtable=0x00007FFDC2681680 inClient=1 m_hPlayerPawn@0x92C = 0x00F9000B (idx=11)
[snap] entitySystem @ 0x00007FFDC318FBB8 = 0x00000281CD478000 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x00F9000B -> 0x0000028259FB1800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=374 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
