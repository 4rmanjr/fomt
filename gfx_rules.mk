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
  $(BUILD_DIR)/assets/gUnk_08751C8C.bin \
  $(BUILD_DIR)/assets/gUnk_08751D2C.bin \
  $(BUILD_DIR)/assets/gUnk_08751DCC.bin \
  $(BUILD_DIR)/assets/gUnk_08751E6C.bin \
  $(BUILD_DIR)/assets/gUnk_08751F0C.bin \
  $(BUILD_DIR)/assets/gUnk_08751FAC.bin \
  $(BUILD_DIR)/assets/gUnk_0875204C.bin \
  $(BUILD_DIR)/assets/gUnk_087520EC.bin \
  $(BUILD_DIR)/assets/gUnk_0875218C.bin \
  $(BUILD_DIR)/assets/gUnk_0875222C.bin \
  $(BUILD_DIR)/assets/gUnk_087522CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875236C.bin \
  $(BUILD_DIR)/assets/gUnk_0875240C.bin \
  $(BUILD_DIR)/assets/gUnk_087524AC.bin \
  $(BUILD_DIR)/assets/gUnk_0875254C.bin \
  $(BUILD_DIR)/assets/gUnk_087525EC.bin

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

$(BUILD_DIR)/assets/gUnk_08751D2C.bin: \
    assets/gfx/sprites/gUnk_08751D2C.json \
    assets/gfx/sprites/gUnk_08751D2C.png \
    assets/gfx/sprites/gUnk_08751D2C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751D2C.json --out $@

$(BUILD_DIR)/assets/gUnk_08751DCC.bin: \
    assets/gfx/sprites/gUnk_08751DCC.json \
    assets/gfx/sprites/gUnk_08751DCC.png \
    assets/gfx/sprites/gUnk_08751DCC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751DCC.json --out $@

$(BUILD_DIR)/assets/gUnk_08751E6C.bin: \
    assets/gfx/sprites/gUnk_08751E6C.json \
    assets/gfx/sprites/gUnk_08751E6C.png \
    assets/gfx/sprites/gUnk_08751E6C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751E6C.json --out $@

$(BUILD_DIR)/assets/gUnk_08751F0C.bin: \
    assets/gfx/sprites/gUnk_08751F0C.json \
    assets/gfx/sprites/gUnk_08751F0C.png \
    assets/gfx/sprites/gUnk_08751F0C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751F0C.json --out $@

$(BUILD_DIR)/assets/gUnk_08751FAC.bin: \
    assets/gfx/sprites/gUnk_08751FAC.json \
    assets/gfx/sprites/gUnk_08751FAC.png \
    assets/gfx/sprites/gUnk_08751FAC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08751FAC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875204C.bin: \
    assets/gfx/sprites/gUnk_0875204C.json \
    assets/gfx/sprites/gUnk_0875204C.png \
    assets/gfx/sprites/gUnk_0875204C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875204C.json --out $@

$(BUILD_DIR)/assets/gUnk_087520EC.bin: \
    assets/gfx/sprites/gUnk_087520EC.json \
    assets/gfx/sprites/gUnk_087520EC.png \
    assets/gfx/sprites/gUnk_087520EC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087520EC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875218C.bin: \
    assets/gfx/sprites/gUnk_0875218C.json \
    assets/gfx/sprites/gUnk_0875218C.png \
    assets/gfx/sprites/gUnk_0875218C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875218C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875222C.bin: \
    assets/gfx/sprites/gUnk_0875222C.json \
    assets/gfx/sprites/gUnk_0875222C.png \
    assets/gfx/sprites/gUnk_0875222C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875222C.json --out $@

$(BUILD_DIR)/assets/gUnk_087522CC.bin: \
    assets/gfx/sprites/gUnk_087522CC.json \
    assets/gfx/sprites/gUnk_087522CC.png \
    assets/gfx/sprites/gUnk_087522CC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087522CC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875236C.bin: \
    assets/gfx/sprites/gUnk_0875236C.json \
    assets/gfx/sprites/gUnk_0875236C.png \
    assets/gfx/sprites/gUnk_0875236C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875236C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875240C.bin: \
    assets/gfx/sprites/gUnk_0875240C.json \
    assets/gfx/sprites/gUnk_0875240C.png \
    assets/gfx/sprites/gUnk_0875240C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875240C.json --out $@

$(BUILD_DIR)/assets/gUnk_087524AC.bin: \
    assets/gfx/sprites/gUnk_087524AC.json \
    assets/gfx/sprites/gUnk_087524AC.png \
    assets/gfx/sprites/gUnk_087524AC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087524AC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875254C.bin: \
    assets/gfx/sprites/gUnk_0875254C.json \
    assets/gfx/sprites/gUnk_0875254C.png \
    assets/gfx/sprites/gUnk_0875254C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875254C.json --out $@

$(BUILD_DIR)/assets/gUnk_087525EC.bin: \
    assets/gfx/sprites/gUnk_087525EC.json \
    assets/gfx/sprites/gUnk_087525EC.png \
    assets/gfx/sprites/gUnk_087525EC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087525EC.json --out $@
