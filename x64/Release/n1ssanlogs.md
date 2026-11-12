[status-path] selected=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status source=LOCALAPPDATA
# n1ssan diagnostic session
Session started (Cambodia, UTC+7): 2026-11-12 10:33:22
[build] armory-obsidian-3.0
[build] Operation Armory x Obsidian Build 3.0 | Nov 12 2026 09:15:35
N1SSAN_STATUS|1|2026-11-12T03:33:22Z|16592|armory-obsidian-3.0|INITIALIZING|reason=worker_started
[status-write] begin state=INITIALIZING path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=INITIALIZING error=0
[off] PAWN_MyWearables = 0x1268
[off] PAWN_hHudModelArms schema override: 0x1DA8 -> 0x1DD8 (C_CSPlayerPawn)
[off] field offsets populated
[auto-off] dwEntityList                 hit 0x00007FFB66A422AB -> rva 0x2709010 (val=000003DCA95E1800)
[auto-off] dwLocalPlayerController      hit 0x00007FFB6695F5C0 -> rva 0x252B0C8 (val=000003DD3B5F0C00)
[auto-off] dwLocalPlayerPawn            hit 0x00007FFB66181825 -> rva 0x27226C0 (val=000003DCC6272A00)
[auto-off] summary: matched=3/3
[off] RVA_ENTITY_LIST           = 0x00007FFB68739010
[off] RVA_LOCALPLAYERCONTROLLER = 0x00007FFB6855B0C8
[off] RVA_LOCALPLAYERPAWN       = 0x00007FFB687526C0
[config] canonical configuration directory: C:\Users\mirac\AppData\Local\n1ssan\configs\
[runtime-mode] no selection pending; waiting for an Apply to CS2
[runtime-mode] initialized in neutral mode; waiting for DOMINATE selection
[schema-live] m_nSubclassID runtime=0x380 hardcoded=0x38C MISMATCH
[schema-live] subclass resolver ready: 0x380
[schema-gloves] C_CSPlayerPawn->m_EconGloves = 0x17A0
[schema-gloves] C_CSPlayerPawn->m_bNeedToReApplyGloves = 0x179D
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
[resolve] InvalidateDescription          @ 0x00007FFB671C7E70
[resolve] BuildModernSkin                @ 0x00007FFB66E6BE70
[resolve] SetMeshGroupMask               @ 0x00007FFB66AE8670
[resolve] RegenerateSkins                @ 0x00007FFB66855490
[resolve] ReleaseCompositeMaterials      @ 0x00007FFB67510A90
[resolve] GloveCreatePaintKit            @ 0x00007FFB671B7EF0
[resolve] AgentSetModel                  @ 0x00007FFB6698F8C0
[resolve] KnifeUpdateSubclass            @ 0x00007FFB66238DE0
[resolve] GloveSetBodyGroup              @ 0x00007FFB6698E7E0
[resolve] MemAlloc                       @ 0x00007FFBB6BFDDC0
[resolve] MemFree                        @ 0x00007FFBB6BFDE00
[resolve] CSkeletonInstance->m_modelState = 0x140 (hardcoded)
[resolve] CModelState->m_hModel = 0xA0 (hardcoded)
[resolve] entityList @ 0x00007FFB68739010 -> 0x000003DCA95E1800
[glove-paintkit-schema] READY
[glove-schema] READY
[plan-a] CEconItemSystem* = 0x000003DC1BB32F40 (stored)
[loot-schema] GetAttributeDefinitionByName @ 0x00007FFB67159C10
[loot-schema] OK (invOffset=0x528D0, setUint=00007FFB6710F990, setFloat=00007FFB6710FBA0)
[socache] CreateBaseTypeCache initialized @ 00007FFB6764FDE0
[plan-a] shared inventory runtime ready; Loadout injection disabled
[use-tool] initialize attempt=1 installed=0 mode=0
[use-tool] placement probe: sticker signature=FOUND
[use-tool] placement probe: keychain signature=FOUND
[use-tool] notification: engine=0x00007FFB687526C0 dispatch=vfunc 47 eventId=903
[use-tool] hook: ok at 0x00007FFB6702C280 via signature (CS2's inventory applies Armory stickers and charms)
[use-tool] placement pointers: sticker slot=00007FFB68237AD0 x=00007FFB68612A2C y=00007FFB68612A30 rotation=00007FFB68612A34 wear=00007FFB68612A38; charm x=00007FFB68612CD8 y=00007FFB68612CDC z=00007FFB68612CE0
[use-tool] placement: sticker ok, charm ok
[use-tool] popup notification: ok (the applying spinner finishes)
[armory-inventory] watching for inventory changes: C:\Users\mirac\AppData\Local\n1ssan\configs\armory-inventory.json
[loadout-api] resolved GetItemID=00007FFB66FCEFA0 GetSlotEquippedWithDefIndex=00007FFB66FE4690
[loadout-api] resolved CanEquipItemInSlot=00007FFB66FB3690 EquipItemInSlot=00007FFB66FBD060
[fsn] pClient=0x00007FFB6857D9F0 vtable=0x00007FFB67C8AA90 fn=0x00007FFB66B928B0 slot=36
[fsn] hooked (vtable overwrite)
[fsn] first stage call seen

=== SNAPSHOT ===
[snap] fsnCount=1 lastStage=0 stage5Count=0
[snap] stage histogram:
[snap]   stage  0: 1 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD3B5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x0012800B (idx=11)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0012800B -> 0x000003DD3BCE0800
[snap] ----------------------------------------
[knife-anim] stage=6 reached
[glove-observe] pawn=000003DD3BCE0800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[match] network signOn=-1 maxClients=0 backgroundMap=0 connected=0 alive=0
[match] network state unavailable; using pawn heuristic
[knife-anim] stage=6 reached
N1SSAN_STATUS|1|2026-11-12T03:33:23Z|16592|armory-obsidian-3.0|CHECKS_PASSED|reason=required_initialization_checks_passed
[status-write] begin state=CHECKS_PASSED path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=CHECKS_PASSED error=0
[diagnostic] runtime=unknown targets=0; awaiting DOMINATE selection
N1SSAN_STATUS|1|2026-11-12T03:33:23Z|16592|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=READY error=0
[knife-anim] stage=6 reached
[armory-inventory] staged 48 items (applies outside an active match)

=== SNAPSHOT ===
[snap] fsnCount=3016 lastStage=0 stage5Count=320
[snap] stage histogram:
[snap]   stage  0: 321 frames
[snap]   stage  1: 219 frames
[snap]   stage  2: 219 frames
[snap]   stage  3: 219 frames
[snap]   stage  5: 320 frames
[snap]   stage  6: 320 frames
[snap]   stage  7: 320 frames
[snap]   stage  8: 320 frames
[snap]   stage 10: 219 frames
[snap]   stage 11: 320 frames
[snap]   stage 12: 219 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD3B5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x0012800B (idx=11)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0012800B -> 0x000003DD3BCE0800
[snap] ----------------------------------------

=== SNAPSHOT ===
[snap] fsnCount=6925 lastStage=0 stage5Count=635
[snap] stage histogram:
[snap]   stage  0: 1023 frames
[snap]   stage  1: 468 frames
[snap]   stage  2: 468 frames
[snap]   stage  3: 468 frames
[snap]   stage  5: 635 frames
[snap]   stage  6: 635 frames
[snap]   stage  7: 635 frames
[snap]   stage  8: 635 frames
[snap]   stage 10: 468 frames
[snap]   stage 11: 635 frames
[snap]   stage 12: 855 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD3B5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x0012800B (idx=11)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0012800B -> 0x000003DD3BCE0800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-12T03:33:33Z|16592|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=READY error=0
[armory-inventory] staged 48 items (applies outside an active match)
[runtime-mode] switched to armory (selection 8cb712d9-bb3b-4dcf-9fcc-db6a8ca35b18)
[runtime-mode] preparing requested mode: armory
[runtime-mode] active mode: armory
[socache-diag] SOCache resolved inv=000003DCA97C4000 offset=0x68 cache=000003DD1F428280 typeCache=000003DD1F493A40
[plan-a] Loadout cleanup: found=0 removed=0 failed=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=309 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[armory-inventory] preparing replacement set: 48 items
[loot-schema] attr 'set item texture prefab' (idx 6) -> 0x000003DD0A4A07A0
[loot-schema] attr 6 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture seed' (idx 7) -> 0x000003DD0A4A0840
[loot-schema] attr 7 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'set item texture wear' (idx 8) -> 0x000003DD0A4A08E0
[loot-schema] attr 8 kind=2 (0=float,1=uint32,2=default,3=other)
[loot-schema] attr 'kill eater' (idx 80) -> 0x000003DD0A4A3360
[loot-schema] attr 'kill eater score type' (idx 81) -> 0x000003DD0A4A3400
[attach] sticker and charm attributes resolved (6 sticker slots, 1 charm)
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=23 slots=0
[armory-inventory] replacement committed: desired=48 created=48 retained=0 removed=0 removeFailed=0
[native-equipment] loaded 4 profile maps
[native-equipment] restoring 15 assignments for profile profile-1794212971774-3rcb
[attach] item 9BF887929A073443 did not read back its saved attachments: stickers=0 charm=none
[attach] item 99F91AFFA6319D14 did not read back its saved attachments: stickers=0 charm=none
[use-tool] main thread: panorama CUIEngine::RunFrame vfunc 5 (0x00007FFB83026B70)
[detect] pawn=0x000003DD3BCE0800 hp=100 signOn=-1 bg=0
[native-equipment] restored CT/clothing_hands instance=item-1794284611926-5qtrf
[native-equipment] restored CT/customplayer instance=item-1794212990979-tmzbn
[native-equipment] restored CT/melee instance=item-1794284779726-4755y
[native-equipment] restored CT/rifle0 instance=item-1794285496455-9ktll
[native-equipment] restored CT/rifle1 instance=item-1794285475600-tqt1f
[native-equipment] restored CT/rifle2 instance=item-1794285519604-gbjsr
[native-equipment] restored CT/rifle4 instance=item-1794285398878-j2vst
[native-equipment] restored CT/secondary0 instance=item-1794284904958-3swvm
[native-equipment] restored CT/secondary2 instance=item-1794285575482-vhuer
[native-equipment] restored CT/secondary3 instance=item-1794284958718-0taem
[native-equipment] restored CT/smg4 instance=item-1794285280733-131tl
[native-equipment] restored T/clothing_hands instance=item-1794284656143-uahrq
[native-equipment] restored T/customplayer instance=item-1794213002906-lbqq1
[native-equipment] restored T/melee instance=item-1794284679292-uy8hn
[native-equipment] restored T/rifle1 instance=item-1794213154518-ngwem
[native-equipment] restore complete: equipped=15 skipped=0
[runtime-mode] switched to armory (selection 676026d0-26a7-4425-8ecc-a322199ecb0e)
[armory-inventory] staged 48 items (applies outside an active match)
[armory-inventory] preparing replacement set: 48 items
[armory-inventory] retained item id=90F23E3B326CA836 def=5404
[armory-inventory] retained item id=99E3F778309F9124 def=4726
[armory-inventory] retained item id=9BB359855E555093 def=61
[armory-inventory] attachments synced on 9BB359855E555093: stickers=0 charm=none
[armory-inventory] retained item id=904460E534C23FAF def=16
[armory-inventory] attachments synced on 904460E534C23FAF: stickers=0 charm=none
[armory-inventory] retained item id=9AD4BC071FFD0FD7 def=60
[armory-inventory] attachments synced on 9AD4BC071FFD0FD7: stickers=0 charm=none
[armory-inventory] retained item id=912EF78637E5B7DA def=34
[armory-inventory] attachments synced on 912EF78637E5B7DA: stickers=0 charm=none
[armory-inventory] retained item id=9F159744BD1AB20E def=7
[armory-inventory] attachments synced on 9F159744BD1AB20E: stickers=0 charm=none
[armory-inventory] retained item id=932B480A253583F1 def=10
[armory-inventory] attachments synced on 932B480A253583F1: stickers=0 charm=none
[armory-inventory] retained item id=97F69DFD267B7EEB def=5030
[armory-inventory] retained item id=92F86BA5C1EC962F def=5030
[armory-inventory] attachments synced on 92F86BA5C1EC962F: stickers=0 charm=none
[armory-inventory] retained item id=95487A8BBE35D0E1 def=5030
[armory-inventory] attachments synced on 95487A8BBE35D0E1: stickers=0 charm=none
[armory-inventory] retained item id=9F29EAC682C284F8 def=5034
[armory-inventory] retained item id=91231EEDD0F5646F def=5031
[armory-inventory] attachments synced on 91231EEDD0F5646F: stickers=0 charm=none
[armory-inventory] retained item id=948A7D1DE5C7D908 def=515
[armory-inventory] attachments synced on 948A7D1DE5C7D908: stickers=0 charm=none
[armory-inventory] retained item id=95B041E1A2932D86 def=515
[armory-inventory] attachments synced on 95B041E1A2932D86: stickers=0 charm=none
[armory-inventory] retained item id=9D65DADFEFDEF423 def=508
[armory-inventory] attachments synced on 9D65DADFEFDEF423: stickers=0 charm=none
[armory-inventory] retained item id=97BA2F4582B00A86 def=508
[armory-inventory] attachments synced on 97BA2F4582B00A86: stickers=0 charm=none
[armory-inventory] retained item id=9C180F7D319FBC9D def=500
[armory-inventory] attachments synced on 9C180F7D319FBC9D: stickers=0 charm=none
[armory-inventory] retained item id=965354FE16403F60 def=525
[armory-inventory] attachments synced on 965354FE16403F60: stickers=0 charm=none
[armory-inventory] retained item id=9466742F799E7539 def=525
[armory-inventory] attachments synced on 9466742F799E7539: stickers=0 charm=none
[armory-inventory] retained item id=9A14259D5C4828EE def=523
[armory-inventory] attachments synced on 9A14259D5C4828EE: stickers=0 charm=none
[armory-inventory] retained item id=92BF42CEFE35B89C def=523
[armory-inventory] attachments synced on 92BF42CEFE35B89C: stickers=0 charm=none
[armory-inventory] retained item id=9BB117CFE5B3B20A def=523
[armory-inventory] attachments synced on 9BB117CFE5B3B20A: stickers=0 charm=none
[armory-inventory] retained item id=970F8FC735FD1192 def=508
[armory-inventory] attachments synced on 970F8FC735FD1192: stickers=0 charm=none
[armory-inventory] retained item id=9C16FFEC86135578 def=508
[armory-inventory] retained item id=9BF887929A073443 def=61
[armory-inventory] attachments synced on 9BF887929A073443: stickers=1 [0 kit=1795 wear=0.000 rot=0.0 off=0.057,0.002 schema=1] charm=kit:13 seed=0 off=15.413,0.676,3.736
[armory-inventory] retained item id=9F10316E28875AC2 def=1
[armory-inventory] attachments synced on 9F10316E28875AC2: stickers=0 charm=none
[armory-inventory] retained item id=9949A256DB0A3D0B def=3
[armory-inventory] retained item id=9FA2C429D349FDFA def=25
[armory-inventory] retained item id=996E899702894BF0 def=34
[armory-inventory] attachments synced on 996E899702894BF0: stickers=0 charm=kit:80 seed=0 off=2.837,0.704,5.891
[armory-inventory] retained item id=92FD79FC3B3CB239 def=9
[armory-inventory] attachments synced on 92FD79FC3B3CB239: stickers=0 charm=none
[armory-inventory] retained item id=99F91AFFA6319D14 def=60
[armory-inventory] attachments synced on 99F91AFFA6319D14: stickers=1 [0 kit=1795 wear=0.000 rot=0.0 off=0.010,-0.001 schema=3] charm=kit:31 seed=0 off=1.317,0.332,7.726
[armory-inventory] retained item id=9249E5C07352F90C def=10
[armory-inventory] attachments synced on 9249E5C07352F90C: stickers=0 charm=none
[armory-inventory] retained item id=9E6153DD2D32344C def=16
[armory-inventory] attachments synced on 9E6153DD2D32344C: stickers=0 charm=none
[armory-inventory] retained item id=94E8DF6FFBA00BDF def=16
[armory-inventory] attachments synced on 94E8DF6FFBA00BDF: stickers=0 charm=none
[armory-inventory] retained item id=9AB126E5A5E6F7C2 def=36
[armory-inventory] attachments synced on 9AB126E5A5E6F7C2: stickers=0 charm=none
[armory-inventory] retained item id=90A05137A567A01E def=1209
[armory-inventory] attachments synced on 90A05137A567A01E: stickers=0 charm=none
[armory-inventory] retained item id=9588AC1766E9BFF9 def=1209
[armory-inventory] retained item id=9EA7BC4ED6A5D3AC def=1209
[armory-inventory] attachments synced on 9EA7BC4ED6A5D3AC: stickers=0 charm=none
[armory-inventory] retained item id=9711CEA39EC37F17 def=1209
[armory-inventory] attachments synced on 9711CEA39EC37F17: stickers=0 charm=none
[armory-inventory] retained item id=9D5D35D074367AF2 def=1209
[armory-inventory] attachments synced on 9D5D35D074367AF2: stickers=0 charm=none
[armory-inventory] retained item id=921CCF3852F5B5CB def=1209
[armory-inventory] attachments synced on 921CCF3852F5B5CB: stickers=0 charm=none
[armory-inventory] retained item id=9ED3C8B4C886ADBC def=1209
[armory-inventory] attachments synced on 9ED3C8B4C886ADBC: stickers=0 charm=none
[armory-inventory] retained item id=90501CD211D23D77 def=1209
[armory-inventory] attachments synced on 90501CD211D23D77: stickers=0 charm=none
[armory-inventory] retained item id=975DF8FAFB582C12 def=1209
[armory-inventory] attachments synced on 975DF8FAFB582C12: stickers=0 charm=none
[armory-inventory] retained item id=97EB6A7CC4953CD5 def=1355
[armory-inventory] attachments synced on 97EB6A7CC4953CD5: stickers=0 charm=none
[armory-inventory] retained item id=9FF45715823AD556 def=1355
[armory-inventory] retained item id=94EA964865C34AEA def=5030
[armory-inventory] attachments synced on 94EA964865C34AEA: stickers=0 charm=none
[armory-equipment] index: assignments=0 resolved=0 unresolved=0 conflicts=0 definitions=23 slots=0
[armory-inventory] replacement committed: desired=48 created=0 retained=48 removed=0 removeFailed=0

=== SNAPSHOT ===
[snap] fsnCount=10539 lastStage=0 stage5Count=956
[snap] stage histogram:
[snap]   stage  0: 1583 frames
[snap]   stage  1: 710 frames
[snap]   stage  2: 710 frames
[snap]   stage  3: 710 frames
[snap]   stage  5: 956 frames
[snap]   stage  6: 956 frames
[snap]   stage  7: 956 frames
[snap]   stage  8: 956 frames
[snap]   stage 10: 710 frames
[snap]   stage 11: 956 frames
[snap]   stage 12: 1336 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD3B5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x0012800B (idx=11)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0012800B -> 0x000003DD3BCE0800
[snap] ----------------------------------------
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=332 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=15018 lastStage=0 stage5Count=1273
[snap] stage histogram:
[snap]   stage  0: 2436 frames
[snap]   stage  1: 1011 frames
[snap]   stage  2: 1011 frames
[snap]   stage  3: 1011 frames
[snap]   stage  5: 1273 frames
[snap]   stage  6: 1273 frames
[snap]   stage  7: 1273 frames
[snap]   stage  8: 1273 frames
[snap]   stage 10: 1011 frames
[snap]   stage 11: 1273 frames
[snap]   stage 12: 2173 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD3B5F0C00 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x0012800B (idx=11)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=13
[snap] entity resolution: 12/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x0012800B -> 0x000003DD3BCE0800
[snap] ----------------------------------------
N1SSAN_STATUS|1|2026-11-12T03:33:43Z|16592|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=READY error=0
[detect] pawn=0x000003DD3BCE0800 hp=100 signOn=-1 bg=0
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=13 maxIndex=32766 valid=334 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38

=== SNAPSHOT ===
[snap] fsnCount=18721 lastStage=10 stage5Count=1470
[snap] stage histogram:
[snap]   stage  0: 3263 frames
[snap]   stage  1: 1289 frames
[snap]   stage  2: 1289 frames
[snap]   stage  3: 1285 frames
[snap]   stage  5: 1470 frames
[snap]   stage  6: 1470 frames
[snap]   stage  7: 1470 frames
[snap]   stage  8: 1470 frames
[snap]   stage 10: 1208 frames
[snap]   stage 11: 1470 frames
[snap]   stage 12: 3037 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x0000000000000000 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: null or below 0x10000 - not connected
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=0
[snap] entity resolution: 0/16 of indices 1..16 valid
[snap] ----------------------------------------
[glove-observe] pawn=000003DCC6272A00 reapply=108 changed=48 def=28019 init=117 idHigh=0x6D65742E
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000003DCC6272A00
[match] FOUND pawn=0x000003DCC6272A00 hp=989 signOn=-1 bg=0 connected=-999
[apply] tick pawn=0x000003DCC6272A00
[apply] wData=0x0000000000000000 count=0
[apply] activeHandle=0x00000000
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[armory-gloves] nothing applied team=unknown (team unknown)
[armory-agent] nothing applied team=unknown (team unknown)
[glove-observe] pawn=000003DD01827800 reapply=0 changed=0 def=0 init=0 idHigh=0x0
[apply-cache] weapon model cache invalidated
[apply-cache] left active match pawn
[match] LOST pawn=0x000003DD01827800 hp=100
[charm-entity] active weapon handle=0xFFFFFFFF entity=0000000000000000
[charm-entity] world scan complete weapon=0000000000000000 weaponNode=0000000000000000 highestNetworked=205 maxIndex=32766 valid=755 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[apply-cache] weapon model cache invalidated
[apply-cache] pawn changed: 000003DD01827800
[match] FOUND pawn=0x000003DD01827800 hp=100 signOn=-1 bg=0 connected=0
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon=0x000003DD58452000 view=0x000003DD584532E0
[pw]   view+0x00 = 0x67D38050
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
[pw]   +0x1290 = 0x00007FFB67D381F0
[pw]   +0x1298 = 0x0000000000000000
[pw]   +0x12A0 = 0x0000000000000000
[pw]   +0x12A8 = 0x0000000000000000
[pw]   +0x12B0 = 0x010400EC00000001
[pw]   +0x12B8 = 0x0000000100000000
[pw]   +0x12C0 = 0x0000000000000000
[pw]   +0x12C8 = 0x0000000000000000
[pw]   +0x12D0 = 0x0000000000000000
[pw]   +0x12D8 = 0x0000000000000000
[pw]   +0x12E0 = 0x00007FFB67D38050
[pw]   +0x12E8 = 0x0000000000000000
[pw] weapon 0x000003DD58452000 def=32
[team] pawn=0x000003DD01827800, scanning +0x380..0x400:
[team]   pawn+0x3BC (u8)  = 1
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[armory-gloves] applied def=5030 team=CT (native item clothing_hands instance 95487A8BBE35D0E1)
[armory-agent] applied def=5404 team=CT model=agents/models/ctm_st6/ctm_st6_varianti.vmdl
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000003DD01827800 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000003DD01827800 reapply=1 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000003DD01827800 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
N1SSAN_STATUS|1|2026-11-12T03:33:53Z|16592|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=READY error=0

=== SNAPSHOT ===
[snap] fsnCount=24300 lastStage=12 stage5Count=1789
[snap] stage histogram:
[snap]   stage  0: 4639 frames
[snap]   stage  1: 1599 frames
[snap]   stage  2: 1599 frames
[snap]   stage  3: 1595 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 1789 frames
[snap]   stage  6: 1789 frames
[snap]   stage  7: 1789 frames
[snap]   stage  8: 1789 frames
[snap]   stage 10: 1517 frames
[snap]   stage 11: 1789 frames
[snap]   stage 12: 4405 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD01B7D400 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x003F01A1 (idx=417)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F01A1 -> 0x000003DD01827800
[snap] ----------------------------------------
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=1 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[charm-entity] active weapon handle=0x010400EC entity=000003DD58452000
[charm-entity] world scan complete weapon=000003DD58452000 weaponNode=000003DD3482E080 highestNetworked=211 maxIndex=32766 valid=735 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=42
[armory-apply] native-loadout live weapon def=42 team=CT paintKit=417 (native item instance 965354FE16403F60)
[knife] SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[apply] enter (weapon=0x000003DD58456000 def=525 pk=417)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003DD584572E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=417.000 initial=417.000
[attr-entry] 1: def=7 value=110.000 initial=110.000
[attr-entry] 2: def=8 value=0.007760 initial=0.007760
[apply] world post-create: size=3 data=000003DD00A0C980 alloc=11
[apply] world view 0x000003DD584572E0 painted (pk=417)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD58421880
[hud-find] child[2]=0x000003DD3EA0E880 owner=0x000003DD3FF0A800 handle=0x10400EC resolved=0x000003DD58452000
[hud-find] NO MATCH walked=3 finalChild=0x0000000000000000
[apply-cache] rebuilding weapon=000003DD58456000 hud=0000000000000000 def=525 pk=417
[charm] gun=000003DD58456000 hud=0000000000000000 wanted=0 hanging=0 removed=0 keychainEntity=0 hudHanging=0 hudRemoved=0 hudCall=0 repair=1
[hud-name] weapon selection entry refreshed: 000003DD58456000
[apply-diagnostic] weaponChanged=1 gloveUpdate=1 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000003DD01827800 reapply=1 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[glove-observe] pawn=000003DD01827800 reapply=0 changed=0 def=5030 init=1 idHigh=0xFFFFFFFF
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply-cache] weapon model cache invalidated
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-cache] rebuilding weapon=000003DD58456000 hud=000003DD75C39000 def=525 pk=417
[knife] HUD SetModel (schema): weapons/models/knife/knife_skeleton/weapon_knife_skeleton.vmdl
[charm-pass] HUD addon lookup hud=000003DD75C39000 index=0x0000000A
[charm-pass] HUD addon slot entries=000003DD17469E00 capacity=32 handleAddress=000003DD17469EAC
[charm] gun=000003DD58456000 hud=000003DD75C39000 wanted=0 hanging=0 removed=0 keychainEntity=0 hudHanging=0 hudRemoved=0 hudCall=1 repair=1
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58452000
[pw] weapon 0x000003DD58452000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=29501 lastStage=0 stage5Count=2109
[snap] stage histogram:
[snap]   stage  0: 5820 frames
[snap]   stage  1: 1911 frames
[snap]   stage  2: 1911 frames
[snap]   stage  3: 1907 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2109 frames
[snap]   stage  6: 2109 frames
[snap]   stage  7: 2109 frames
[snap]   stage  8: 2109 frames
[snap]   stage 10: 1829 frames
[snap]   stage 11: 2109 frames
[snap]   stage 12: 5577 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD01B7D400 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x003F01A1 (idx=417)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=211
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F01A1 -> 0x000003DD01827800
[snap] ----------------------------------------
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[charm-entity] active weapon handle=0x002F00EB entity=000003DD58456000
[charm-entity] world scan complete weapon=000003DD58456000 weaponNode=000003DD3482EC80 highestNetworked=211 maxIndex=32766 valid=738 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177FA000
[pw] weapon 0x000003DD177FA000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177FA000
[pw] weapon 0x000003DD177FA000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177FA000
[pw] weapon 0x000003DD177FA000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
N1SSAN_STATUS|1|2026-11-12T03:34:03Z|16592|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=READY error=0

=== SNAPSHOT ===
[snap] fsnCount=34615 lastStage=0 stage5Count=2429
[snap] stage histogram:
[snap]   stage  0: 6937 frames
[snap]   stage  1: 2231 frames
[snap]   stage  2: 2231 frames
[snap]   stage  3: 2227 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2429 frames
[snap]   stage  6: 2429 frames
[snap]   stage  7: 2429 frames
[snap]   stage  8: 2429 frames
[snap]   stage 10: 2149 frames
[snap]   stage 11: 2429 frames
[snap]   stage 12: 6694 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD01B7D400 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x003F01A1 (idx=417)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F01A1 -> 0x000003DD01827800
[snap] ----------------------------------------
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177FA000
[pw] weapon 0x000003DD177FA000 def=32
[armory-apply] no Armory target for live weapon def=32 team=CT (no native CS2 item selected in this slot)
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[charm-entity] active weapon handle=0x002F00EB entity=000003DD58456000
[charm-entity] world scan complete weapon=000003DD58456000 weaponNode=000003DD3482EC80 highestNetworked=211 maxIndex=32766 valid=738 globalFound=0 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD76165080
[hud-find] child[1]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[apply] enter (weapon=0x000003DD34F7E000 def=34 pk=734)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003DD34F7F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=734.000 initial=734.000
[attr-entry] 1: def=7 value=321.000 initial=321.000
[attr-entry] 2: def=8 value=0.058530 initial=0.058530
[attr] attachments written (5 attributes): stickers=0 charm=kit:80 seed=0 off=2.837,0.704,5.891
[apply] world post-create: size=10 data=000003DD35068C00 alloc=18
[apply] world view 0x000003DD34F7F2E0 painted (pk=734)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD58422480
[hud-find] child[0]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 1 nodes
[apply-cache] rebuilding weapon=000003DD34F7E000 hud=000003DD34ED5C00 def=34 pk=734
[nametag] weapon=000003DD34F7E000 was="" name="SpiderMan" applied=1
[charm-clean] removed world keychain index=17007 entity=000003DD34EDD400
[charm-clean] removed world keychain index=17009 entity=000003DD34ED0C00
[charm-pass] HUD addon lookup hud=000003DD34ED5C00 index=0x0000000A
[charm-pass] HUD addon slot entries=000003DD00CBA200 capacity=32 handleAddress=000003DD00CBA2AC
[charm] gun=000003DD34F7E000 hud=000003DD34ED5C00 wanted=80 hanging=1 removed=1 keychainEntity=1 hudHanging=1 hudRemoved=1 hudCall=1 repair=1
[hud-name] weapon selection entry refreshed: 000003DD34F7E000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=39824 lastStage=12 stage5Count=2749
[snap] stage histogram:
[snap]   stage  0: 8111 frames
[snap]   stage  1: 2547 frames
[snap]   stage  2: 2547 frames
[snap]   stage  3: 2543 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 2749 frames
[snap]   stage  6: 2749 frames
[snap]   stage  7: 2749 frames
[snap]   stage  8: 2749 frames
[snap]   stage 10: 2465 frames
[snap]   stage 11: 2749 frames
[snap]   stage 12: 7865 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD01B7D400 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x003F01A1 (idx=417)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=212
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F01A1 -> 0x000003DD01827800
[snap] ----------------------------------------
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000
[hud-find] child[3]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000
[hud-find] child[3]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 4 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[charm-entity] active weapon handle=0x018700EF entity=000003DD34F7E000
[charm-entity] world index=17011 handle=0xEEB14273 entity=000003DD34EDC000 owner=0xFFFFFFFF ownerMatch=0 parentMatch=1 belongs=1
[charm-entity] world scan complete weapon=000003DD34F7E000 weaponNode=000003DD58429080 highestNetworked=212 maxIndex=32766 valid=748 globalFound=1 ownerMatches=0 parentMatches=1 onWeapon=1 ownerOffset=0x520 parentOffset=0x38
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD77432880
[hud-find] child[1]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[2]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[2]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[2]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
N1SSAN_STATUS|1|2026-11-12T03:34:13Z|16592|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=READY error=0

=== SNAPSHOT ===
[snap] fsnCount=45145 lastStage=0 stage5Count=3069
[snap] stage histogram:
[snap]   stage  0: 9332 frames
[snap]   stage  1: 2867 frames
[snap]   stage  2: 2867 frames
[snap]   stage  3: 2863 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3069 frames
[snap]   stage  6: 3069 frames
[snap]   stage  7: 3069 frames
[snap]   stage  8: 3069 frames
[snap]   stage 10: 2785 frames
[snap]   stage 11: 3069 frames
[snap]   stage 12: 9085 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD01B7D400 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x003F01A1 (idx=417)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=213
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F01A1 -> 0x000003DD01827800
[snap] ----------------------------------------
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD34F7E000
[pw] weapon 0x000003DD34F7E000 def=34
[armory-apply] native-loadout live weapon def=34 team=CT paintKit=734 (native item instance 996E899702894BF0)
[hud-find] START weapon=0x000003DD34F7E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[2]=0x000003DD58422480 owner=0x000003DD34ED5C00 handle=0x18700EF resolved=0x000003DD34F7E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34ED5C00 after 3 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[apply] enter (weapon=0x000003DD177F4000 def=61 pk=1377)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003DD177F52E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1377.000 initial=1377.000
[attr-entry] 1: def=7 value=222.000 initial=222.000
[attr-entry] 2: def=8 value=0.073750 initial=0.073750
[attr] attachments written (12 attributes): stickers=1 [0 kit=1795 wear=0.000 rot=0.0 off=0.057,0.002 schema=1] charm=kit:13 seed=0 off=15.413,0.676,3.736
[apply] world post-create: size=17 data=000003DD75BA6800 alloc=25
[apply] world view 0x000003DD177F52E0 painted (pk=1377)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-cache] rebuilding weapon=000003DD177F4000 hud=000003DD34EE4C00 def=61 pk=1377
[charm-clean] removed world keychain index=17024 entity=000003DD34EEB000
[charm-clean] removed world keychain index=17026 entity=000003DD34EE7400
[charm-pass] HUD addon lookup hud=000003DD34EE4C00 index=0x0000000A
[charm-pass] HUD addon slot entries=000003DD00CBB400 capacity=32 handleAddress=000003DD00CBB4AC
[charm] gun=000003DD177F4000 hud=000003DD34EE4C00 wanted=13 hanging=1 removed=1 keychainEntity=1 hudHanging=1 hudRemoved=1 hudCall=1 repair=1
[hud-name] weapon selection entry refreshed: 000003DD177F4000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[charm-entity] active weapon handle=0x00E000F0 entity=000003DD177F4000
[charm-entity] world index=17011 handle=0xEEB14273 entity=000003DD34EDC000 owner=0xFFFFFFFF ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world index=17027 handle=0x11C24283 entity=000003DD34EEB000 owner=0xFFFFFFFF ownerMatch=0 parentMatch=1 belongs=1
[charm-entity] world scan complete weapon=000003DD177F4000 weaponNode=000003DD018FD080 highestNetworked=213 maxIndex=32766 valid=755 globalFound=2 ownerMatches=0 parentMatches=1 onWeapon=1 ownerOffset=0x520 parentOffset=0x38
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD018FDC80
[hud-find] child[0]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[apply] enter (weapon=0x000003DD74D8E000 def=60 pk=1376)
[apply] world view pre-write: size=0 data=0x0000000000000000
[attr-diag] item=000003DD74D8F2E0 size=0 data=0000000000000000 alloc=0
[attr-entry] 0: def=6 value=1376.000 initial=1376.000
[attr-entry] 1: def=7 value=55.000 initial=55.000
[attr-entry] 2: def=8 value=0.148490 initial=0.148490
[attr] attachments written (12 attributes): stickers=1 [0 kit=1795 wear=0.000 rot=0.0 off=0.010,-0.001 schema=3] charm=kit:31 seed=0 off=1.317,0.332,7.726
[apply] world post-create: size=17 data=000003DD75BA6000 alloc=25
[apply] world view 0x000003DD74D8F2E0 painted (pk=1376)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-cache] rebuilding weapon=000003DD74D8E000 hud=000003DD75C30400 def=60 pk=1376
[nametag] weapon=000003DD74D8E000 was="" name="KDMV" applied=1
[charm-clean] removed world keychain index=17041 entity=000003DD75C31800
[charm-clean] removed world keychain index=17043 entity=000003DD34880800
[charm-pass] HUD addon lookup hud=000003DD75C30400 index=0x0000000A
[charm-pass] HUD addon slot entries=000003DD40959200 capacity=32 handleAddress=000003DD409592AC
[charm] gun=000003DD74D8E000 hud=000003DD75C30400 wanted=31 hanging=1 removed=1 keychainEntity=1 hudHanging=1 hudRemoved=1 hudCall=1 repair=1
[hud-name] weapon selection entry refreshed: 000003DD74D8E000
[apply-diagnostic] weaponChanged=1 gloveUpdate=0 regenAvailable=1
[skin-regenerate] calling pRegenerateSkins weaponChanged=1
[skin-regenerate] returned
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1

=== SNAPSHOT ===
[snap] fsnCount=50183 lastStage=0 stage5Count=3389
[snap] stage histogram:
[snap]   stage  0: 10431 frames
[snap]   stage  1: 3179 frames
[snap]   stage  2: 3179 frames
[snap]   stage  3: 3175 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3389 frames
[snap]   stage  6: 3389 frames
[snap]   stage  7: 3389 frames
[snap]   stage  8: 3389 frames
[snap]   stage 10: 3097 frames
[snap]   stage 11: 3389 frames
[snap]   stage 12: 10176 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD01B7D400 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x003F01A1 (idx=417)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=214
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F01A1 -> 0x000003DD01827800
[snap] ----------------------------------------
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[charm-entity] active weapon handle=0x00E880F1 entity=000003DD74D8E000
[charm-entity] world index=17011 handle=0xEEB14273 entity=000003DD34EDC000 owner=0xFFFFFFFF ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world index=17027 handle=0x11C24283 entity=000003DD34EEB000 owner=0xFFFFFFFF ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world index=17045 handle=0x26C1C295 entity=000003DD75D39400 owner=0xFFFFFFFF ownerMatch=0 parentMatch=1 belongs=1
[charm-entity] world scan complete weapon=000003DD74D8E000 weaponNode=000003DD75D5E880 highestNetworked=214 maxIndex=32766 valid=765 globalFound=3 ownerMatches=0 parentMatches=1 onWeapon=1 ownerOffset=0x520 parentOffset=0x38
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD74D8E000
[pw] weapon 0x000003DD74D8E000 def=60
[armory-apply] native-loadout live weapon def=60 team=CT paintKit=1376 (native item instance 99F91AFFA6319D14)
[hud-find] START weapon=0x000003DD74D8E000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C30400 after 1 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD177F4000
[pw] weapon 0x000003DD177F4000 def=61
[armory-apply] native-loadout live weapon def=61 team=CT paintKit=1377 (native item instance 9BF887929A073443)
[hud-find] START weapon=0x000003DD177F4000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD34EE4C00 after 2 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
N1SSAN_STATUS|1|2026-11-12T03:34:23Z|16592|armory-obsidian-3.0|READY|reason=runtime_worker_heartbeat
[status-write] begin state=READY path=C:\Users\mirac\AppData\Local\n1ssan\status\cs2-16592.status
[status-write] success state=READY error=0

=== SNAPSHOT ===
[snap] fsnCount=55363 lastStage=0 stage5Count=3709
[snap] stage histogram:
[snap]   stage  0: 11581 frames
[snap]   stage  1: 3499 frames
[snap]   stage  2: 3499 frames
[snap]   stage  3: 3495 frames
[snap]   stage  4: 1 frames
[snap]   stage  5: 3709 frames
[snap]   stage  6: 3709 frames
[snap]   stage  7: 3709 frames
[snap]   stage  8: 3709 frames
[snap]   stage 10: 3417 frames
[snap]   stage 11: 3709 frames
[snap]   stage 12: 11326 frames
[snap] dwLocalPlayerController @ 0x00007FFB6855B0C8 -> 0x000003DD01B7D400 
[snap] dwLocalPlayerPawn       @ 0x00007FFB687526C0 -> 0x000003DCC6272A00 
[snap] pawn: vtable=0x00007FFB83433740 inClient=0 health=989
[snap] ctrl: vtable=0x00007FFB67C35040 inClient=1 m_hPlayerPawn@0x92C = 0x003F01A1 (idx=417)
[snap] entitySystem @ 0x00007FFB68739010 = 0x000003DCA95E1800 highestEntityIndex=214
[snap] entity resolution: 1/16 of indices 1..16 valid
[snap] ctrl->pawn handle resolve: 0x003F01A1 -> 0x000003DD01827800
[snap] ----------------------------------------
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[charm-entity] active weapon handle=0x002F00EB entity=000003DD58456000
[charm-entity] world index=17011 handle=0xEEB14273 entity=000003DD34EDC000 owner=0xFFFFFFFF ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world index=17027 handle=0x11C24283 entity=000003DD34EEB000 owner=0xFFFFFFFF ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world index=17045 handle=0x26C1C295 entity=000003DD75D39400 owner=0xFFFFFFFF ownerMatch=0 parentMatch=0 belongs=0
[charm-entity] world scan complete weapon=000003DD58456000 weaponNode=000003DD3482EC80 highestNetworked=214 maxIndex=32766 valid=764 globalFound=3 ownerMatches=0 parentMatches=0 onWeapon=0 ownerOffset=0x520 parentOffset=0x38
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
[apply] tick pawn=0x000003DD01827800
[apply] active 0x000003DD58456000
[pw] weapon 0x000003DD58456000 def=525
[armory-apply] native-loadout live weapon def=525 team=CT paintKit=417 (native item instance 965354FE16403F60)
[hud-find] START weapon=0x000003DD58456000 pawn=0x000003DD01827800
[hud-find] armsHandle=0xA4D6C229
[hud-find] arms=0x000003DD3FF28000
[hud-find] armsNode=0x000003DD3EA0D080
[hud-find] firstChild=0x000003DD3EA0DC80
[hud-find] child[0]=0x000003DD3EA0DC80 owner=0x000003DD75C30400 handle=0xE880F1 resolved=0x000003DD74D8E000
[hud-find] child[1]=0x000003DD018FDC80 owner=0x000003DD34EE4C00 handle=0xE000F0 resolved=0x000003DD177F4000
[hud-find] child[4]=0x000003DD58426080 owner=0x000003DD75C39000 handle=0x2F00EB resolved=0x000003DD58456000 **MATCH**
[hud-find] SUCCESS hudWeapon=0x000003DD75C39000 after 5 nodes
[apply-diagnostic] weaponChanged=0 gloveUpdate=0 regenAvailable=1
