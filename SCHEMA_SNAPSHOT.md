# Live CS2 Schema Snapshot

The startup schema diagnostic exports a read-only snapshot to:

`n1ssan-cs2-schema.json` beside the loaded n1ssan DLL.

The export does not modify the game schema, inventory, SOCache, or item definitions.

## Sources

- Base item definitions are enumerated from the live `CEconItemSchema::m_SortedItemDefinitions` map.
- Paint kits are enumerated from the live paint-kit map. Its offset is obtained through the already-resolved `GloveCreatePaintKit` lookup, not a fixed schema offset.
- Paint-kit names, sticker kits, and keychain definitions are read from `scripts/items/items_game.txt` through the game's `VFileSystem017` interface with the `GAME` search path. This also works when the file is packed in a VPK. Repeated top-level definition sections are merged by numeric ID; later entries replace earlier entries, matching Lootline's behavior.
- Per-item paint-kit compatibility is checked using the same generated-material lookup as Lootline's `ItemSchema::IsPaintKitForItem`: `VFileSystem017::Exists(path, "GAME")`.

## Snapshot format

Version 2 contains:

- `itemDefinitions[]`: `definitionIndex`, internal map key, item/type names, model names, coarse item kind, and `compatiblePaintKitIds[]`.
- `livePaintKits[]`: live paint-kit ID, map key, rarity, and name.
- `paintKitDefinitions[]`: paint-kit definitions parsed from `items_game.txt`.
- `stickerKits[]`: sticker-kit IDs and their source names/material metadata.
- `keychainDefinitions[]`: charm definition IDs and their source names/art metadata.
- `itemsGameLoaded` and `paintKitMapAvailable`: explicit source completeness flags.
- `compatibilityScanAvailable`, `compatibilityItemsChecked`, `compatibilityPairsChecked`, and `compatiblePairsFound`: generated-material scan status and totals.

The compatibility scan checks each skin-capable live item definition (weapon, knife, glove) against each named live paint kit. The default paint kit ID 0 is included for every such item. A non-default pair is included only when this exact asset exists:

`panorama/images/econ/default_generated/{itemName}_{paintKitName}_light_png.vtex_c`

The snapshot intentionally contains no process addresses or pointers.

## Validation workflow

1. Build the DLL and run it in CS2.
2. Check `n1ssalogs.md` for the `[schema-snapshot]` summary, including compatibility scan totals.
3. Copy `n1ssan-cs2-schema.json` into the web-bridge repository at `src/armory/n1ssan-cs2-schema.json`.
4. Run `npm run armory:validate-schema` in the web-bridge repository.

The bridge validator checks catalogue base definitions, live paint-kit IDs, paint-kit file definitions, paint-kit map-key consistency, and every unique catalogue weapon/paint-kit pair against the per-item generated-material compatibility records. It also reports sticker/keychain counts.

This is a file-presence compatibility check, matching Lootline's current approach. It does not guarantee the engine will successfully apply or render every item at runtime; that remains a separate integration test.
