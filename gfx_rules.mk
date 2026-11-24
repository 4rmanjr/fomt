# Dihasilkan `tools/assets/gfx_rules.py` — jangan disunting tangan.
# Menambah aset: taruh PNG/palet + JSON di assets/gfx/**, jalankan
# tool ini. Hanya aset `rom-exact` yang punya aturan build.

ASSET_BINS := \
  $(BUILD_DIR)/assets/gUnk_0875A440.bin \
  $(BUILD_DIR)/assets/gUnk_084F90CC.bin \
  $(BUILD_DIR)/assets/gUnk_084FA9A0.bin \
  $(BUILD_DIR)/assets/gUnk_08527094.bin \
  $(BUILD_DIR)/assets/gUnk_0852D984.bin \
  $(BUILD_DIR)/assets/gUnk_0858BA28.bin \
  $(BUILD_DIR)/assets/gUnk_086F2FAC.bin \
  $(BUILD_DIR)/assets/gUnk_086FAA80.bin \
  $(BUILD_DIR)/assets/gUnk_0871D51C.bin \
  $(BUILD_DIR)/assets/gUnk_0871E7A8.bin \
  $(BUILD_DIR)/assets/gUnk_0871ECAC.bin \
  $(BUILD_DIR)/assets/gUnk_0871EDD4.bin \
  $(BUILD_DIR)/assets/gUnk_0871EF00.bin \
  $(BUILD_DIR)/assets/gUnk_08725DA0.bin \
  $(BUILD_DIR)/assets/gUnk_08726CCC.bin \
  $(BUILD_DIR)/assets/gUnk_08727368.bin \
  $(BUILD_DIR)/assets/gUnk_08727A74.bin \
  $(BUILD_DIR)/assets/gUnk_08728208.bin \
  $(BUILD_DIR)/assets/gUnk_08728320.bin \
  $(BUILD_DIR)/assets/gUnk_0872937C.bin \
  $(BUILD_DIR)/assets/gUnk_08729460.bin \
  $(BUILD_DIR)/assets/gUnk_0872BE64.bin \
  $(BUILD_DIR)/assets/gUnk_0872DE44.bin \
  $(BUILD_DIR)/assets/gUnk_0872EE78.bin \
  $(BUILD_DIR)/assets/gUnk_08731B40.bin \
  $(BUILD_DIR)/assets/gUnk_08738144.bin \
  $(BUILD_DIR)/assets/gUnk_0873A6E8.bin \
  $(BUILD_DIR)/assets/gUnk_0873AE54.bin \
  $(BUILD_DIR)/assets/gUnk_0873AFC8.bin \
  $(BUILD_DIR)/assets/gUnk_0873CCB4.bin \
  $(BUILD_DIR)/assets/gUnk_0873CEAC.bin \
  $(BUILD_DIR)/assets/gUnk_0873CF90.bin \
  $(BUILD_DIR)/assets/gUnk_0873D234.bin \
  $(BUILD_DIR)/assets/gUnk_0873D5FC.bin \
  $(BUILD_DIR)/assets/gUnk_0873D6D8.bin \
  $(BUILD_DIR)/assets/gUnk_0873DE44.bin \
  $(BUILD_DIR)/assets/gUnk_0873E5B0.bin \
  $(BUILD_DIR)/assets/gUnk_0873ED1C.bin \
  $(BUILD_DIR)/assets/gUnk_087401A4.bin \
  $(BUILD_DIR)/assets/gUnk_08740454.bin \
  $(BUILD_DIR)/assets/gUnk_087405A0.bin \
  $(BUILD_DIR)/assets/gUnk_08740908.bin \
  $(BUILD_DIR)/assets/gUnk_087409E4.bin \
  $(BUILD_DIR)/assets/gUnk_0874E530.bin \
  $(BUILD_DIR)/assets/gUnk_0874EE38.bin \
  $(BUILD_DIR)/assets/gUnk_0874F34C.bin \
  $(BUILD_DIR)/assets/gUnk_087506E0.bin \
  $(BUILD_DIR)/assets/gUnk_0875352C.bin \
  $(BUILD_DIR)/assets/gUnk_08753608.bin \
  $(BUILD_DIR)/assets/gUnk_087536E4.bin \
  $(BUILD_DIR)/assets/gUnk_087537D0.bin \
  $(BUILD_DIR)/assets/gUnk_08754674.bin \
  $(BUILD_DIR)/assets/gUnk_08754C0C.bin \
  $(BUILD_DIR)/assets/gUnk_08755154.bin \
  $(BUILD_DIR)/assets/gUnk_08755230.bin \
  $(BUILD_DIR)/assets/gUnk_0875553C.bin \
  $(BUILD_DIR)/assets/gUnk_08757C14.bin \
  $(BUILD_DIR)/assets/gUnk_08757F20.bin \
  $(BUILD_DIR)/assets/gUnk_08529794.bin \
  $(BUILD_DIR)/assets/gUnk_0852CA40.bin \
  $(BUILD_DIR)/assets/gUnk_0872D5AC.bin \
  $(BUILD_DIR)/assets/gUnk_08731940.bin \
  $(BUILD_DIR)/assets/gUnk_0874E330.bin \
  $(BUILD_DIR)/assets/gUnk_0874EB40.bin \
  $(BUILD_DIR)/assets/gUnk_08750C6C.bin \
  $(BUILD_DIR)/assets/gUnk_08750F6C.bin \
  $(BUILD_DIR)/assets/gUnk_087512EC.bin \
  $(BUILD_DIR)/assets/gUnk_0875178C.bin \
  $(BUILD_DIR)/assets/gUnk_087519EC.bin \
  $(BUILD_DIR)/assets/gUnk_087525CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875298C.bin \
  $(BUILD_DIR)/assets/gUnk_08752AAC.bin \
  $(BUILD_DIR)/assets/gUnk_0875300C.bin \
  $(BUILD_DIR)/assets/gUnk_0875314C.bin \
  $(BUILD_DIR)/assets/gUnk_0875350C.bin \
  $(BUILD_DIR)/assets/gUnk_08750E4C.bin \
  $(BUILD_DIR)/assets/gUnk_08750F8C.bin \
  $(BUILD_DIR)/assets/gUnk_087510AC.bin \
  $(BUILD_DIR)/assets/gUnk_087511CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875130C.bin \
  $(BUILD_DIR)/assets/gUnk_0875142C.bin \
  $(BUILD_DIR)/assets/gUnk_0875154C.bin \
  $(BUILD_DIR)/assets/gUnk_0875166C.bin \
  $(BUILD_DIR)/assets/gUnk_087517AC.bin \
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
  $(BUILD_DIR)/assets/gUnk_087525EC.bin \
  $(BUILD_DIR)/assets/gUnk_0875268C.bin \
  $(BUILD_DIR)/assets/gUnk_0875272C.bin \
  $(BUILD_DIR)/assets/gUnk_087527CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875286C.bin \
  $(BUILD_DIR)/assets/gUnk_0875290C.bin \
  $(BUILD_DIR)/assets/gUnk_087529AC.bin \
  $(BUILD_DIR)/assets/gUnk_08752A2C.bin \
  $(BUILD_DIR)/assets/gUnk_08752ACC.bin \
  $(BUILD_DIR)/assets/gUnk_08752B4C.bin \
  $(BUILD_DIR)/assets/gUnk_08752BCC.bin \
  $(BUILD_DIR)/assets/gUnk_08752C4C.bin \
  $(BUILD_DIR)/assets/gUnk_08752CCC.bin \
  $(BUILD_DIR)/assets/gUnk_08752D4C.bin \
  $(BUILD_DIR)/assets/gUnk_08752DCC.bin \
  $(BUILD_DIR)/assets/gUnk_08752E4C.bin \
  $(BUILD_DIR)/assets/gUnk_08752EEC.bin \
  $(BUILD_DIR)/assets/gUnk_08752F8C.bin \
  $(BUILD_DIR)/assets/gUnk_0875302C.bin \
  $(BUILD_DIR)/assets/gUnk_087530CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875316C.bin \
  $(BUILD_DIR)/assets/gUnk_0875320C.bin \
  $(BUILD_DIR)/assets/gUnk_087532AC.bin \
  $(BUILD_DIR)/assets/gUnk_0875334C.bin \
  $(BUILD_DIR)/assets/gUnk_087533EC.bin \
  $(BUILD_DIR)/assets/gUnk_0875348C.bin \
  $(BUILD_DIR)/assets/gUnk_08667060.bin \
  $(BUILD_DIR)/assets/gUnk_086678A0.bin \
  $(BUILD_DIR)/assets/gUnk_08697920.bin \
  $(BUILD_DIR)/assets/gUnk_08698E14.bin \
  $(BUILD_DIR)/assets/gUnk_0869A0A4.bin \
  $(BUILD_DIR)/assets/gUnk_086D5508.bin \
  $(BUILD_DIR)/assets/gUnk_086D6698.bin \
  $(BUILD_DIR)/assets/gUnk_08750C4C.bin \
  $(BUILD_DIR)/assets/gUnk_08750C8C.bin

$(BUILD_DIR)/assets/gUnk_0875A440.bin: \
    assets/gfx/fonts/clock.json \
    assets/gfx/fonts/clock.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/fonts/clock.json --out $@

$(BUILD_DIR)/assets/gUnk_084F90CC.bin: \
    assets/gfx/fonts/glyph_084f90cc.json \
    assets/gfx/fonts/glyph_084f90cc.png \
    tools/assets/glyph_font.py
	@echo "ASSET $@"
	@python3 tools/assets/glyph_font.py encode --json assets/gfx/fonts/glyph_084f90cc.json --out $@

$(BUILD_DIR)/assets/gUnk_084FA9A0.bin: \
    assets/gfx/fonts/glyph_084fa9a0.json \
    assets/gfx/fonts/glyph_084fa9a0.png \
    tools/assets/glyph_font.py
	@echo "ASSET $@"
	@python3 tools/assets/glyph_font.py encode --json assets/gfx/fonts/glyph_084fa9a0.json --out $@

$(BUILD_DIR)/assets/gUnk_08527094.bin: \
    assets/gfx/fonts/unk_08527094.json \
    assets/gfx/fonts/unk_08527094.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08527094.json --out $@

$(BUILD_DIR)/assets/gUnk_0852D984.bin: \
    assets/gfx/fonts/unk_0852d984.json \
    assets/gfx/fonts/unk_0852d984.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0852d984.json --out $@

$(BUILD_DIR)/assets/gUnk_0858BA28.bin: \
    assets/gfx/fonts/unk_0858ba28.json \
    assets/gfx/fonts/unk_0858ba28.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0858ba28.json --out $@

$(BUILD_DIR)/assets/gUnk_086F2FAC.bin: \
    assets/gfx/fonts/unk_086f2fac.json \
    assets/gfx/fonts/unk_086f2fac.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_086f2fac.json --out $@

$(BUILD_DIR)/assets/gUnk_086FAA80.bin: \
    assets/gfx/fonts/unk_086faa80.json \
    assets/gfx/fonts/unk_086faa80.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_086faa80.json --out $@

$(BUILD_DIR)/assets/gUnk_0871D51C.bin: \
    assets/gfx/fonts/unk_0871d51c.json \
    assets/gfx/fonts/unk_0871d51c.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0871d51c.json --out $@

$(BUILD_DIR)/assets/gUnk_0871E7A8.bin: \
    assets/gfx/fonts/unk_0871e7a8.json \
    assets/gfx/fonts/unk_0871e7a8.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0871e7a8.json --out $@

$(BUILD_DIR)/assets/gUnk_0871ECAC.bin: \
    assets/gfx/fonts/unk_0871ecac.json \
    assets/gfx/fonts/unk_0871ecac.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0871ecac.json --out $@

$(BUILD_DIR)/assets/gUnk_0871EDD4.bin: \
    assets/gfx/fonts/unk_0871edd4.json \
    assets/gfx/fonts/unk_0871edd4.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0871edd4.json --out $@

$(BUILD_DIR)/assets/gUnk_0871EF00.bin: \
    assets/gfx/fonts/unk_0871ef00.json \
    assets/gfx/fonts/unk_0871ef00.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0871ef00.json --out $@

$(BUILD_DIR)/assets/gUnk_08725DA0.bin: \
    assets/gfx/fonts/unk_08725da0.json \
    assets/gfx/fonts/unk_08725da0.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08725da0.json --out $@

$(BUILD_DIR)/assets/gUnk_08726CCC.bin: \
    assets/gfx/fonts/unk_08726ccc.json \
    assets/gfx/fonts/unk_08726ccc.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08726ccc.json --out $@

$(BUILD_DIR)/assets/gUnk_08727368.bin: \
    assets/gfx/fonts/unk_08727368.json \
    assets/gfx/fonts/unk_08727368.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08727368.json --out $@

$(BUILD_DIR)/assets/gUnk_08727A74.bin: \
    assets/gfx/fonts/unk_08727a74.json \
    assets/gfx/fonts/unk_08727a74.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08727a74.json --out $@

$(BUILD_DIR)/assets/gUnk_08728208.bin: \
    assets/gfx/fonts/unk_08728208.json \
    assets/gfx/fonts/unk_08728208.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08728208.json --out $@

$(BUILD_DIR)/assets/gUnk_08728320.bin: \
    assets/gfx/fonts/unk_08728320.json \
    assets/gfx/fonts/unk_08728320.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08728320.json --out $@

$(BUILD_DIR)/assets/gUnk_0872937C.bin: \
    assets/gfx/fonts/unk_0872937c.json \
    assets/gfx/fonts/unk_0872937c.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0872937c.json --out $@

$(BUILD_DIR)/assets/gUnk_08729460.bin: \
    assets/gfx/fonts/unk_08729460.json \
    assets/gfx/fonts/unk_08729460.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08729460.json --out $@

$(BUILD_DIR)/assets/gUnk_0872BE64.bin: \
    assets/gfx/fonts/unk_0872be64.json \
    assets/gfx/fonts/unk_0872be64.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0872be64.json --out $@

$(BUILD_DIR)/assets/gUnk_0872DE44.bin: \
    assets/gfx/fonts/unk_0872de44.json \
    assets/gfx/fonts/unk_0872de44.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0872de44.json --out $@

$(BUILD_DIR)/assets/gUnk_0872EE78.bin: \
    assets/gfx/fonts/unk_0872ee78.json \
    assets/gfx/fonts/unk_0872ee78.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0872ee78.json --out $@

$(BUILD_DIR)/assets/gUnk_08731B40.bin: \
    assets/gfx/fonts/unk_08731b40.json \
    assets/gfx/fonts/unk_08731b40.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08731b40.json --out $@

$(BUILD_DIR)/assets/gUnk_08738144.bin: \
    assets/gfx/fonts/unk_08738144.json \
    assets/gfx/fonts/unk_08738144.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08738144.json --out $@

$(BUILD_DIR)/assets/gUnk_0873A6E8.bin: \
    assets/gfx/fonts/unk_0873a6e8.json \
    assets/gfx/fonts/unk_0873a6e8.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873a6e8.json --out $@

$(BUILD_DIR)/assets/gUnk_0873AE54.bin: \
    assets/gfx/fonts/unk_0873ae54.json \
    assets/gfx/fonts/unk_0873ae54.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873ae54.json --out $@

$(BUILD_DIR)/assets/gUnk_0873AFC8.bin: \
    assets/gfx/fonts/unk_0873afc8.json \
    assets/gfx/fonts/unk_0873afc8.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873afc8.json --out $@

$(BUILD_DIR)/assets/gUnk_0873CCB4.bin: \
    assets/gfx/fonts/unk_0873ccb4.json \
    assets/gfx/fonts/unk_0873ccb4.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873ccb4.json --out $@

$(BUILD_DIR)/assets/gUnk_0873CEAC.bin: \
    assets/gfx/fonts/unk_0873ceac.json \
    assets/gfx/fonts/unk_0873ceac.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873ceac.json --out $@

$(BUILD_DIR)/assets/gUnk_0873CF90.bin: \
    assets/gfx/fonts/unk_0873cf90.json \
    assets/gfx/fonts/unk_0873cf90.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873cf90.json --out $@

$(BUILD_DIR)/assets/gUnk_0873D234.bin: \
    assets/gfx/fonts/unk_0873d234.json \
    assets/gfx/fonts/unk_0873d234.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873d234.json --out $@

$(BUILD_DIR)/assets/gUnk_0873D5FC.bin: \
    assets/gfx/fonts/unk_0873d5fc.json \
    assets/gfx/fonts/unk_0873d5fc.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873d5fc.json --out $@

$(BUILD_DIR)/assets/gUnk_0873D6D8.bin: \
    assets/gfx/fonts/unk_0873d6d8.json \
    assets/gfx/fonts/unk_0873d6d8.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873d6d8.json --out $@

$(BUILD_DIR)/assets/gUnk_0873DE44.bin: \
    assets/gfx/fonts/unk_0873de44.json \
    assets/gfx/fonts/unk_0873de44.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873de44.json --out $@

$(BUILD_DIR)/assets/gUnk_0873E5B0.bin: \
    assets/gfx/fonts/unk_0873e5b0.json \
    assets/gfx/fonts/unk_0873e5b0.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873e5b0.json --out $@

$(BUILD_DIR)/assets/gUnk_0873ED1C.bin: \
    assets/gfx/fonts/unk_0873ed1c.json \
    assets/gfx/fonts/unk_0873ed1c.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0873ed1c.json --out $@

$(BUILD_DIR)/assets/gUnk_087401A4.bin: \
    assets/gfx/fonts/unk_087401a4.json \
    assets/gfx/fonts/unk_087401a4.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_087401a4.json --out $@

$(BUILD_DIR)/assets/gUnk_08740454.bin: \
    assets/gfx/fonts/unk_08740454.json \
    assets/gfx/fonts/unk_08740454.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08740454.json --out $@

$(BUILD_DIR)/assets/gUnk_087405A0.bin: \
    assets/gfx/fonts/unk_087405a0.json \
    assets/gfx/fonts/unk_087405a0.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_087405a0.json --out $@

$(BUILD_DIR)/assets/gUnk_08740908.bin: \
    assets/gfx/fonts/unk_08740908.json \
    assets/gfx/fonts/unk_08740908.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08740908.json --out $@

$(BUILD_DIR)/assets/gUnk_087409E4.bin: \
    assets/gfx/fonts/unk_087409e4.json \
    assets/gfx/fonts/unk_087409e4.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_087409e4.json --out $@

$(BUILD_DIR)/assets/gUnk_0874E530.bin: \
    assets/gfx/fonts/unk_0874e530.json \
    assets/gfx/fonts/unk_0874e530.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0874e530.json --out $@

$(BUILD_DIR)/assets/gUnk_0874EE38.bin: \
    assets/gfx/fonts/unk_0874ee38.json \
    assets/gfx/fonts/unk_0874ee38.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0874ee38.json --out $@

$(BUILD_DIR)/assets/gUnk_0874F34C.bin: \
    assets/gfx/fonts/unk_0874f34c.json \
    assets/gfx/fonts/unk_0874f34c.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0874f34c.json --out $@

$(BUILD_DIR)/assets/gUnk_087506E0.bin: \
    assets/gfx/fonts/unk_087506e0.json \
    assets/gfx/fonts/unk_087506e0.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_087506e0.json --out $@

$(BUILD_DIR)/assets/gUnk_0875352C.bin: \
    assets/gfx/fonts/unk_0875352c.json \
    assets/gfx/fonts/unk_0875352c.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_0875352c.json --out $@

$(BUILD_DIR)/assets/gUnk_08753608.bin: \
    assets/gfx/fonts/unk_08753608.json \
    assets/gfx/fonts/unk_08753608.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08753608.json --out $@

$(BUILD_DIR)/assets/gUnk_087536E4.bin: \
    assets/gfx/fonts/unk_087536e4.json \
    assets/gfx/fonts/unk_087536e4.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_087536e4.json --out $@

$(BUILD_DIR)/assets/gUnk_087537D0.bin: \
    assets/gfx/fonts/unk_087537d0.json \
    assets/gfx/fonts/unk_087537d0.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_087537d0.json --out $@

$(BUILD_DIR)/assets/gUnk_08754674.bin: \
    assets/gfx/fonts/unk_08754674.json \
    assets/gfx/fonts/unk_08754674.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08754674.json --out $@

$(BUILD_DIR)/assets/gUnk_08754C0C.bin: \
    assets/gfx/fonts/unk_08754c0c.json \
    assets/gfx/fonts/unk_08754c0c.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08754c0c.json --out $@

$(BUILD_DIR)/assets/gUnk_08755154.bin: \
    assets/gfx/fonts/unk_08755154.json \
    assets/gfx/fonts/unk_08755154.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/unk_08755154.json --out $@

$(BUILD_DIR)/assets/gUnk_08755230.bin: \
    assets/gfx/maps/gUnk_08755230.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08755230.json --out $@

$(BUILD_DIR)/assets/gUnk_0875553C.bin: \
    assets/gfx/maps/gUnk_0875553C.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_0875553C.json --out $@

$(BUILD_DIR)/assets/gUnk_08757C14.bin: \
    assets/gfx/maps/gUnk_08757C14.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08757C14.json --out $@

$(BUILD_DIR)/assets/gUnk_08757F20.bin: \
    assets/gfx/maps/gUnk_08757F20.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08757F20.json --out $@

$(BUILD_DIR)/assets/gUnk_08529794.bin: \
    assets/gfx/palettes/unk_08529794.json \
    assets/gfx/palettes/unk_08529794.png \
    assets/gfx/palettes/unk_08529794.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08529794.json --out $@

$(BUILD_DIR)/assets/gUnk_0852CA40.bin: \
    assets/gfx/palettes/unk_0852ca40.json \
    assets/gfx/palettes/unk_0852ca40.png \
    assets/gfx/palettes/unk_0852ca40.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0852ca40.json --out $@

$(BUILD_DIR)/assets/gUnk_0872D5AC.bin: \
    assets/gfx/palettes/unk_0872d5ac.json \
    assets/gfx/palettes/unk_0872d5ac.png \
    assets/gfx/palettes/unk_0872d5ac.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0872d5ac.json --out $@

$(BUILD_DIR)/assets/gUnk_08731940.bin: \
    assets/gfx/palettes/unk_08731940.json \
    assets/gfx/palettes/unk_08731940.png \
    assets/gfx/palettes/unk_08731940.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08731940.json --out $@

$(BUILD_DIR)/assets/gUnk_0874E330.bin: \
    assets/gfx/palettes/unk_0874e330.json \
    assets/gfx/palettes/unk_0874e330.png \
    assets/gfx/palettes/unk_0874e330.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0874e330.json --out $@

$(BUILD_DIR)/assets/gUnk_0874EB40.bin: \
    assets/gfx/palettes/unk_0874eb40.json \
    assets/gfx/palettes/unk_0874eb40.png \
    assets/gfx/palettes/unk_0874eb40.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0874eb40.json --out $@

$(BUILD_DIR)/assets/gUnk_08750C6C.bin: \
    assets/gfx/palettes/unk_08750c6c.json \
    assets/gfx/palettes/unk_08750c6c.png \
    assets/gfx/palettes/unk_08750c6c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08750c6c.json --out $@

$(BUILD_DIR)/assets/gUnk_08750F6C.bin: \
    assets/gfx/palettes/unk_08750f6c.json \
    assets/gfx/palettes/unk_08750f6c.png \
    assets/gfx/palettes/unk_08750f6c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08750f6c.json --out $@

$(BUILD_DIR)/assets/gUnk_087512EC.bin: \
    assets/gfx/palettes/unk_087512ec.json \
    assets/gfx/palettes/unk_087512ec.png \
    assets/gfx/palettes/unk_087512ec.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087512ec.json --out $@

$(BUILD_DIR)/assets/gUnk_0875178C.bin: \
    assets/gfx/palettes/unk_0875178c.json \
    assets/gfx/palettes/unk_0875178c.png \
    assets/gfx/palettes/unk_0875178c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875178c.json --out $@

$(BUILD_DIR)/assets/gUnk_087519EC.bin: \
    assets/gfx/palettes/unk_087519ec.json \
    assets/gfx/palettes/unk_087519ec.png \
    assets/gfx/palettes/unk_087519ec.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087519ec.json --out $@

$(BUILD_DIR)/assets/gUnk_087525CC.bin: \
    assets/gfx/palettes/unk_087525cc.json \
    assets/gfx/palettes/unk_087525cc.png \
    assets/gfx/palettes/unk_087525cc.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087525cc.json --out $@

$(BUILD_DIR)/assets/gUnk_0875298C.bin: \
    assets/gfx/palettes/unk_0875298c.json \
    assets/gfx/palettes/unk_0875298c.png \
    assets/gfx/palettes/unk_0875298c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875298c.json --out $@

$(BUILD_DIR)/assets/gUnk_08752AAC.bin: \
    assets/gfx/palettes/unk_08752aac.json \
    assets/gfx/palettes/unk_08752aac.png \
    assets/gfx/palettes/unk_08752aac.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08752aac.json --out $@

$(BUILD_DIR)/assets/gUnk_0875300C.bin: \
    assets/gfx/palettes/unk_0875300c.json \
    assets/gfx/palettes/unk_0875300c.png \
    assets/gfx/palettes/unk_0875300c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875300c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875314C.bin: \
    assets/gfx/palettes/unk_0875314c.json \
    assets/gfx/palettes/unk_0875314c.png \
    assets/gfx/palettes/unk_0875314c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875314c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875350C.bin: \
    assets/gfx/palettes/unk_0875350c.json \
    assets/gfx/palettes/unk_0875350c.png \
    assets/gfx/palettes/unk_0875350c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875350c.json --out $@

$(BUILD_DIR)/assets/gUnk_08750E4C.bin: \
    assets/gfx/sprites/gUnk_08750E4C.json \
    assets/gfx/sprites/gUnk_08750E4C.png \
    assets/gfx/sprites/gUnk_08750E4C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08750E4C.json --out $@

$(BUILD_DIR)/assets/gUnk_08750F8C.bin: \
    assets/gfx/sprites/gUnk_08750F8C.json \
    assets/gfx/sprites/gUnk_08750F8C.png \
    assets/gfx/sprites/gUnk_08750F8C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08750F8C.json --out $@

$(BUILD_DIR)/assets/gUnk_087510AC.bin: \
    assets/gfx/sprites/gUnk_087510AC.json \
    assets/gfx/sprites/gUnk_087510AC.png \
    assets/gfx/sprites/gUnk_087510AC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087510AC.json --out $@

$(BUILD_DIR)/assets/gUnk_087511CC.bin: \
    assets/gfx/sprites/gUnk_087511CC.json \
    assets/gfx/sprites/gUnk_087511CC.png \
    assets/gfx/sprites/gUnk_087511CC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087511CC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875130C.bin: \
    assets/gfx/sprites/gUnk_0875130C.json \
    assets/gfx/sprites/gUnk_0875130C.png \
    assets/gfx/sprites/gUnk_0875130C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875130C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875142C.bin: \
    assets/gfx/sprites/gUnk_0875142C.json \
    assets/gfx/sprites/gUnk_0875142C.png \
    assets/gfx/sprites/gUnk_0875142C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875142C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875154C.bin: \
    assets/gfx/sprites/gUnk_0875154C.json \
    assets/gfx/sprites/gUnk_0875154C.png \
    assets/gfx/sprites/gUnk_0875154C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875154C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875166C.bin: \
    assets/gfx/sprites/gUnk_0875166C.json \
    assets/gfx/sprites/gUnk_0875166C.png \
    assets/gfx/sprites/gUnk_0875166C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875166C.json --out $@

$(BUILD_DIR)/assets/gUnk_087517AC.bin: \
    assets/gfx/sprites/gUnk_087517AC.json \
    assets/gfx/sprites/gUnk_087517AC.png \
    assets/gfx/sprites/gUnk_087517AC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087517AC.json --out $@

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

$(BUILD_DIR)/assets/gUnk_0875268C.bin: \
    assets/gfx/sprites/gUnk_0875268C.json \
    assets/gfx/sprites/gUnk_0875268C.png \
    assets/gfx/sprites/gUnk_0875268C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875268C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875272C.bin: \
    assets/gfx/sprites/gUnk_0875272C.json \
    assets/gfx/sprites/gUnk_0875272C.png \
    assets/gfx/sprites/gUnk_0875272C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875272C.json --out $@

$(BUILD_DIR)/assets/gUnk_087527CC.bin: \
    assets/gfx/sprites/gUnk_087527CC.json \
    assets/gfx/sprites/gUnk_087527CC.png \
    assets/gfx/sprites/gUnk_087527CC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087527CC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875286C.bin: \
    assets/gfx/sprites/gUnk_0875286C.json \
    assets/gfx/sprites/gUnk_0875286C.png \
    assets/gfx/sprites/gUnk_0875286C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875286C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875290C.bin: \
    assets/gfx/sprites/gUnk_0875290C.json \
    assets/gfx/sprites/gUnk_0875290C.png \
    assets/gfx/sprites/gUnk_0875290C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875290C.json --out $@

$(BUILD_DIR)/assets/gUnk_087529AC.bin: \
    assets/gfx/sprites/gUnk_087529AC.json \
    assets/gfx/sprites/gUnk_087529AC.png \
    assets/gfx/sprites/gUnk_087529AC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087529AC.json --out $@

$(BUILD_DIR)/assets/gUnk_08752A2C.bin: \
    assets/gfx/sprites/gUnk_08752A2C.json \
    assets/gfx/sprites/gUnk_08752A2C.png \
    assets/gfx/sprites/gUnk_08752A2C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752A2C.json --out $@

$(BUILD_DIR)/assets/gUnk_08752ACC.bin: \
    assets/gfx/sprites/gUnk_08752ACC.json \
    assets/gfx/sprites/gUnk_08752ACC.png \
    assets/gfx/sprites/gUnk_08752ACC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752ACC.json --out $@

$(BUILD_DIR)/assets/gUnk_08752B4C.bin: \
    assets/gfx/sprites/gUnk_08752B4C.json \
    assets/gfx/sprites/gUnk_08752B4C.png \
    assets/gfx/sprites/gUnk_08752B4C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752B4C.json --out $@

$(BUILD_DIR)/assets/gUnk_08752BCC.bin: \
    assets/gfx/sprites/gUnk_08752BCC.json \
    assets/gfx/sprites/gUnk_08752BCC.png \
    assets/gfx/sprites/gUnk_08752BCC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752BCC.json --out $@

$(BUILD_DIR)/assets/gUnk_08752C4C.bin: \
    assets/gfx/sprites/gUnk_08752C4C.json \
    assets/gfx/sprites/gUnk_08752C4C.png \
    assets/gfx/sprites/gUnk_08752C4C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752C4C.json --out $@

$(BUILD_DIR)/assets/gUnk_08752CCC.bin: \
    assets/gfx/sprites/gUnk_08752CCC.json \
    assets/gfx/sprites/gUnk_08752CCC.png \
    assets/gfx/sprites/gUnk_08752CCC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752CCC.json --out $@

$(BUILD_DIR)/assets/gUnk_08752D4C.bin: \
    assets/gfx/sprites/gUnk_08752D4C.json \
    assets/gfx/sprites/gUnk_08752D4C.png \
    assets/gfx/sprites/gUnk_08752D4C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752D4C.json --out $@

$(BUILD_DIR)/assets/gUnk_08752DCC.bin: \
    assets/gfx/sprites/gUnk_08752DCC.json \
    assets/gfx/sprites/gUnk_08752DCC.png \
    assets/gfx/sprites/gUnk_08752DCC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752DCC.json --out $@

$(BUILD_DIR)/assets/gUnk_08752E4C.bin: \
    assets/gfx/sprites/gUnk_08752E4C.json \
    assets/gfx/sprites/gUnk_08752E4C.png \
    assets/gfx/sprites/gUnk_08752E4C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752E4C.json --out $@

$(BUILD_DIR)/assets/gUnk_08752EEC.bin: \
    assets/gfx/sprites/gUnk_08752EEC.json \
    assets/gfx/sprites/gUnk_08752EEC.png \
    assets/gfx/sprites/gUnk_08752EEC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752EEC.json --out $@

$(BUILD_DIR)/assets/gUnk_08752F8C.bin: \
    assets/gfx/sprites/gUnk_08752F8C.json \
    assets/gfx/sprites/gUnk_08752F8C.png \
    assets/gfx/sprites/gUnk_08752F8C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_08752F8C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875302C.bin: \
    assets/gfx/sprites/gUnk_0875302C.json \
    assets/gfx/sprites/gUnk_0875302C.png \
    assets/gfx/sprites/gUnk_0875302C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875302C.json --out $@

$(BUILD_DIR)/assets/gUnk_087530CC.bin: \
    assets/gfx/sprites/gUnk_087530CC.json \
    assets/gfx/sprites/gUnk_087530CC.png \
    assets/gfx/sprites/gUnk_087530CC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087530CC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875316C.bin: \
    assets/gfx/sprites/gUnk_0875316C.json \
    assets/gfx/sprites/gUnk_0875316C.png \
    assets/gfx/sprites/gUnk_0875316C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875316C.json --out $@

$(BUILD_DIR)/assets/gUnk_0875320C.bin: \
    assets/gfx/sprites/gUnk_0875320C.json \
    assets/gfx/sprites/gUnk_0875320C.png \
    assets/gfx/sprites/gUnk_0875320C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875320C.json --out $@

$(BUILD_DIR)/assets/gUnk_087532AC.bin: \
    assets/gfx/sprites/gUnk_087532AC.json \
    assets/gfx/sprites/gUnk_087532AC.png \
    assets/gfx/sprites/gUnk_087532AC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087532AC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875334C.bin: \
    assets/gfx/sprites/gUnk_0875334C.json \
    assets/gfx/sprites/gUnk_0875334C.png \
    assets/gfx/sprites/gUnk_0875334C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875334C.json --out $@

$(BUILD_DIR)/assets/gUnk_087533EC.bin: \
    assets/gfx/sprites/gUnk_087533EC.json \
    assets/gfx/sprites/gUnk_087533EC.png \
    assets/gfx/sprites/gUnk_087533EC.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_087533EC.json --out $@

$(BUILD_DIR)/assets/gUnk_0875348C.bin: \
    assets/gfx/sprites/gUnk_0875348C.json \
    assets/gfx/sprites/gUnk_0875348C.png \
    assets/gfx/sprites/gUnk_0875348C.pal \
    tools/assets/sprite2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/gUnk_0875348C.json --out $@

$(BUILD_DIR)/assets/gUnk_08667060.bin: \
    assets/gfx/tiles/gUnk_08667060.json \
    assets/gfx/tiles/gUnk_08667060.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_08667060.json --out $@

$(BUILD_DIR)/assets/gUnk_086678A0.bin: \
    assets/gfx/tiles/gUnk_086678A0.json \
    assets/gfx/tiles/gUnk_086678A0.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_086678A0.json --out $@

$(BUILD_DIR)/assets/gUnk_08697920.bin: \
    assets/gfx/tiles/gUnk_08697920.json \
    assets/gfx/tiles/gUnk_08697920.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_08697920.json --out $@

$(BUILD_DIR)/assets/gUnk_08698E14.bin: \
    assets/gfx/tiles/gUnk_08698E14.json \
    assets/gfx/tiles/gUnk_08698E14.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_08698E14.json --out $@

$(BUILD_DIR)/assets/gUnk_0869A0A4.bin: \
    assets/gfx/tiles/gUnk_0869A0A4.json \
    assets/gfx/tiles/gUnk_0869A0A4.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_0869A0A4.json --out $@

$(BUILD_DIR)/assets/gUnk_086D5508.bin: \
    assets/gfx/tiles/gUnk_086D5508.json \
    assets/gfx/tiles/gUnk_086D5508.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_086D5508.json --out $@

$(BUILD_DIR)/assets/gUnk_086D6698.bin: \
    assets/gfx/tiles/gUnk_086D6698.json \
    assets/gfx/tiles/gUnk_086D6698.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_086D6698.json --out $@

$(BUILD_DIR)/assets/gUnk_08750C4C.bin: \
    assets/gfx/tiles/gUnk_08750C4C.json \
    assets/gfx/tiles/gUnk_08750C4C.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_08750C4C.json --out $@

$(BUILD_DIR)/assets/gUnk_08750C8C.bin: \
    assets/gfx/tiles/gUnk_08750C8C.json \
    assets/gfx/tiles/gUnk_08750C8C.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/tiles/gUnk_08750C8C.json --out $@
