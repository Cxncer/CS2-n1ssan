# Live CS2 Schema Snapshot

The startup schema diagnostic exports a read-only snapshot to:

`n1ssan-cs2-schema.json` beside the loaded n1ssan DLL.

The export does not modify the game schema, inventory, SOCache, or item definitions.

## Sources

- Base item definitions are enumerated from the live `CEconItemSchema::m_SortedItemDefinitions` map.
- Paint kits are enumerated from the live paint-kit map. Its offset is obtained through the already-resolved `GloveCreatePaintKit` lookup, not a fixed schema offset.
- Paint-kit names, sticker kits, and keychain definitions are read from `scripts/items/items_game.txt` through the game's `VFileSystem017` interface with the `GAME` search path. This also works when the file is packed in a VPK. Repeated top-level definition sections are merged by numeric ID; later entries replace earlier entries, matching Lootline's behavior.

## Snapshot format

Version 1 contains:

- `itemDefinitions[]`: `definitionIndex`, map key, item/type names, model names, and coarse item kind.
- `livePaintKits[]`: live paint-kit ID, map key, rarity, and name.
- `paintKitDefinitions[]`: paint-kit definitions parsed from `items_game.txt`.
- `stickerKits[]`: sticker-kit IDs and their source names/material metadata.
- `keychainDefinitions[]`: charm definition IDs and their source names/art metadata.
- `itemsGameLoaded` and `paintKitMapAvailable`: explicit completeness flags.

The snapshot intentionally contains no process addresses or pointers.

## Validation workflow

1. Build and run the DLL in CS2 as usual.
2. Check `n1ssalogs.md` for the `[schema-snapshot]` summary and output path.
3. Copy `n1ssan-cs2-schema.json` into the web-bridge repository at `src/armory/n1ssan-cs2-schema.json`.
4. Run `npm run armory:validate-schema` in the web-bridge repository.

The bridge validator checks all static catalogue rows against live base definitions and paint-kit IDs, verifies map-key consistency, and reports sticker/keychain counts.

A paint kit existing globally does not prove it is compatible with every weapon. Per-item compatibility is a separate check based on the generated material asset path used by Lootline:
`panorama/images/econ/default_generated/{itemName}_{paintKitName}_light_png.vtex_c`.
