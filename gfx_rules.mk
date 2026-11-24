# Dihasilkan `tools/assets/gfx_rules.py` — jangan disunting tangan.
# Menambah aset: taruh PNG/palet + JSON di assets/gfx/**, jalankan
# tool ini. Hanya aset `rom-exact` yang punya aturan build.

ASSET_BINS := \
  $(BUILD_DIR)/assets/gUnk_0875A440.bin \
  $(BUILD_DIR)/assets/gUnk_0872DE44.bin \
  $(BUILD_DIR)/assets/gUnk_08731940.bin \
  $(BUILD_DIR)/assets/gUnk_087518CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875196C.bin \
  $(BUILD_DIR)/assets/gUnk_08751A0C.bin \
  $(BUILD_DIR)/assets/gUnk_08751AAC.bin \
  $(BUILD_DIR)/assets/gUnk_08751B4C.bin \
  $(BUILD_DIR)/assets/gUnk_08751BEC.bin \
  $(BUILD_DIR)/assets/gUnk_08751C8C.bin

$(BUILD_DIR)/assets/gUnk_0875A440.bin: \
    assets/gfx/fonts/clock.json \
    assets/gfx/fonts/clock.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/fonts/clock.json --out $@

$(BUILD_DIR)/assets/gUnk_0872DE44.bin: \
    assets/gfx/fonts/unk_0872de44.json \
    assets/gfx/fonts/unk_0872de44.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0872de44.json --out $@

$(BUILD_DIR)/assets/gUnk_08731940.bin: \
    assets/gfx/palettes/unk_08731940.json \
    assets/gfx/palettes/unk_08731940.png \
    assets/gfx/palettes/unk_08731940.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08731940.json --out $@

$(BUILD_DIR)/assets/gUnk_087518CC.bin: \
    assets/gfx/sprites/gUnk_087518CC.json \
    assets/gfx/sprites/gUnk_087518CC.png \
    assets/gfx/sprites/gUnk_087518CC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087518CC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875196C.bin: \
    assets/gfx/sprites/gUnk_0875196C.json \
    assets/gfx/sprites/gUnk_0875196C.png \
    assets/gfx/sprites/gUnk_0875196C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875196C.json --out $@

$(BUILD_DIR)/assets/gUnk_08751A0C.bin: \
    assets/gfx/sprites/gUnk_08751A0C.json \
    assets/gfx/sprites/gUnk_08751A0C.png \
    assets/gfx/sprites/gUnk_08751A0C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751A0C.json --out $@

$(BUILD_DIR)/assets/gUnk_08751AAC.bin: \
    assets/gfx/sprites/gUnk_08751AAC.json \
    assets/gfx/sprites/gUnk_08751AAC.png \
    assets/gfx/sprites/gUnk_08751AAC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751AAC.json --out $@

$(BUILD_DIR)/assets/gUnk_08751B4C.bin: \
    assets/gfx/sprites/gUnk_08751B4C.json \
    assets/gfx/sprites/gUnk_08751B4C.png \
    assets/gfx/sprites/gUnk_08751B4C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751B4C.json --out $@

$(BUILD_DIR)/assets/gUnk_08751BEC.bin: \
    assets/gfx/sprites/gUnk_08751BEC.json \
    assets/gfx/sprites/gUnk_08751BEC.png \
    assets/gfx/sprites/gUnk_08751BEC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751BEC.json --out $@

$(BUILD_DIR)/assets/gUnk_08751C8C.bin: \
    assets/gfx/sprites/gUnk_08751C8C.json \
    assets/gfx/sprites/gUnk_08751C8C.png \
    assets/gfx/sprites/gUnk_08751C8C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751C8C.json --out $@
