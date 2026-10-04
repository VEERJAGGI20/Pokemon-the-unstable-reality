# Pokémon: The Unstable Reality — Cumulative Build 010

## Kanto progression: Vermilion → Lavender

Implemented a source-level story pass that extends the current Kanto vertical slice toward Lavender Town.

### New overworld events
- Vermilion City: harbor watcher hints that an unnamed group is moving three-part-symbol artifacts north.
- Route 8: researcher points toward Lavender and mentions suppressed records.
- Route 10: witness warns about nighttime equipment movement toward Lavender.
- Lavender Town: first non-combat cult leader contact establishes the seal beneath the town and that something has noticed the player.

### State
Four persistent FRLG story flags are named from previously unused slots 0x2E5–0x2E8.
Each new NPC disappears after its one-time interaction.

### Validation
- Modified map JSON files parse successfully.
- All four new script symbols are present.
- Flag aliases resolve to existing FRLG unused story slots.
- Full `make firered` could not complete in this environment because `arm-none-eabi-gcc` and repository history are unavailable in the extracted ZIP. No successful ROM build is claimed.

### Next
Turn the Lavender contact into the full cult encounter sequence, then build the Charmeleon → Charizard evolution scene and Lavender HQ/leader battle.
