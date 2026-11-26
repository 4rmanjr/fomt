# Dihasilkan `tools/assets/gfx_rules.py` — jangan disunting tangan.
# Menambah aset: taruh PNG/palet + JSON di assets/gfx/**, jalankan
# tool ini. Hanya aset `rom-exact` yang punya aturan build.

ASSET_BINS := \
  $(BUILD_DIR)/assets/gUnk_0875A440.bin \
  $(BUILD_DIR)/assets/gUnk_0875B444.bin \
  $(BUILD_DIR)/assets/gUnk_084F90CC.bin \
  $(BUILD_DIR)/assets/gUnk_084FA9A0.bin \
  $(BUILD_DIR)/assets/gUnk_084FA7A0.bin \
  $(BUILD_DIR)/assets/gUnk_08523290.bin \
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
  $(BUILD_DIR)/assets/gUnk_0869B284.bin \
  $(BUILD_DIR)/assets/gUnk_086D6368.bin \
  $(BUILD_DIR)/assets/gUnk_086D6458.bin \
  $(BUILD_DIR)/assets/gUnk_086D6518.bin \
  $(BUILD_DIR)/assets/gUnk_086D6520.bin \
  $(BUILD_DIR)/assets/gUnk_086D6528.bin \
  $(BUILD_DIR)/assets/gUnk_086D6548.bin \
  $(BUILD_DIR)/assets/gUnk_086D6608.bin \
  $(BUILD_DIR)/assets/gUnk_086D74F8.bin \
  $(BUILD_DIR)/assets/gUnk_086DC3C4.bin \
  $(BUILD_DIR)/assets/gUnk_086DC3D0.bin \
  $(BUILD_DIR)/assets/gUnk_086DC3DC.bin \
  $(BUILD_DIR)/assets/gUnk_086DC3E8.bin \
  $(BUILD_DIR)/assets/gUnk_086DC3F4.bin \
  $(BUILD_DIR)/assets/gUnk_086DC54C.bin \
  $(BUILD_DIR)/assets/gUnk_086DC57C.bin \
  $(BUILD_DIR)/assets/gUnk_086DCC88.bin \
  $(BUILD_DIR)/assets/gUnk_086DD690.bin \
  $(BUILD_DIR)/assets/gUnk_086DD6B0.bin \
  $(BUILD_DIR)/assets/gUnk_086DD6E0.bin \
  $(BUILD_DIR)/assets/gUnk_086DDDEC.bin \
  $(BUILD_DIR)/assets/gUnk_086DE7F4.bin \
  $(BUILD_DIR)/assets/gUnk_086EACDC.bin \
  $(BUILD_DIR)/assets/gUnk_086EAD64.bin \
  $(BUILD_DIR)/assets/gUnk_086EAD84.bin \
  $(BUILD_DIR)/assets/gUnk_086EAD8C.bin \
  $(BUILD_DIR)/assets/gUnk_08755230.bin \
  $(BUILD_DIR)/assets/gUnk_0875553C.bin \
  $(BUILD_DIR)/assets/gUnk_08757BA0.bin \
  $(BUILD_DIR)/assets/gUnk_08757BAC.bin \
  $(BUILD_DIR)/assets/gUnk_08757BCC.bin \
  $(BUILD_DIR)/assets/gUnk_08757BD8.bin \
  $(BUILD_DIR)/assets/gUnk_08757BF8.bin \
  $(BUILD_DIR)/assets/gUnk_08757C0C.bin \
  $(BUILD_DIR)/assets/gUnk_08757C14.bin \
  $(BUILD_DIR)/assets/gUnk_08757F20.bin \
  $(BUILD_DIR)/assets/gUnk_0875A418.bin \
  $(BUILD_DIR)/assets/gUnk_0875A424.bin \
  $(BUILD_DIR)/assets/gUnk_0875A438.bin \
  $(BUILD_DIR)/assets/gUnk_086EACE4.bin \
  $(BUILD_DIR)/assets/gUnk_086EAD04.bin \
  $(BUILD_DIR)/assets/gUnk_086EAD24.bin \
  $(BUILD_DIR)/assets/gUnk_086EAD44.bin \
  $(BUILD_DIR)/assets/gUnk_0872DDE4.bin \
  $(BUILD_DIR)/assets/gUnk_0872FA9C.bin \
  $(BUILD_DIR)/assets/gUnk_087399C4.bin \
  $(BUILD_DIR)/assets/gUnk_0873CBF4.bin \
  $(BUILD_DIR)/assets/gUnk_087400E4.bin \
  $(BUILD_DIR)/assets/gUnk_08747A14.bin \
  $(BUILD_DIR)/assets/gUnk_0874F2EC.bin \
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
  $(BUILD_DIR)/assets/gUnk_0875194C.bin \
  $(BUILD_DIR)/assets/gUnk_087519EC.bin \
  $(BUILD_DIR)/assets/gUnk_08751A8C.bin \
  $(BUILD_DIR)/assets/gUnk_08751B2C.bin \
  $(BUILD_DIR)/assets/gUnk_08751BCC.bin \
  $(BUILD_DIR)/assets/gUnk_08751C6C.bin \
  $(BUILD_DIR)/assets/gUnk_08751D0C.bin \
  $(BUILD_DIR)/assets/gUnk_08751DAC.bin \
  $(BUILD_DIR)/assets/gUnk_08751E4C.bin \
  $(BUILD_DIR)/assets/gUnk_08751EEC.bin \
  $(BUILD_DIR)/assets/gUnk_08751F8C.bin \
  $(BUILD_DIR)/assets/gUnk_0875202C.bin \
  $(BUILD_DIR)/assets/gUnk_087520CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875216C.bin \
  $(BUILD_DIR)/assets/gUnk_0875220C.bin \
  $(BUILD_DIR)/assets/gUnk_087522AC.bin \
  $(BUILD_DIR)/assets/gUnk_0875234C.bin \
  $(BUILD_DIR)/assets/gUnk_087523EC.bin \
  $(BUILD_DIR)/assets/gUnk_0875248C.bin \
  $(BUILD_DIR)/assets/gUnk_0875252C.bin \
  $(BUILD_DIR)/assets/gUnk_087525CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875266C.bin \
  $(BUILD_DIR)/assets/gUnk_0875270C.bin \
  $(BUILD_DIR)/assets/gUnk_087527AC.bin \
  $(BUILD_DIR)/assets/gUnk_0875284C.bin \
  $(BUILD_DIR)/assets/gUnk_087528EC.bin \
  $(BUILD_DIR)/assets/gUnk_0875298C.bin \
  $(BUILD_DIR)/assets/gUnk_08752AAC.bin \
  $(BUILD_DIR)/assets/gUnk_08752ECC.bin \
  $(BUILD_DIR)/assets/gUnk_08752F6C.bin \
  $(BUILD_DIR)/assets/gUnk_0875300C.bin \
  $(BUILD_DIR)/assets/gUnk_087530AC.bin \
  $(BUILD_DIR)/assets/gUnk_0875314C.bin \
  $(BUILD_DIR)/assets/gUnk_087531EC.bin \
  $(BUILD_DIR)/assets/gUnk_0875328C.bin \
  $(BUILD_DIR)/assets/gUnk_0875332C.bin \
  $(BUILD_DIR)/assets/gUnk_087533CC.bin \
  $(BUILD_DIR)/assets/gUnk_0875346C.bin \
  $(BUILD_DIR)/assets/gUnk_0875350C.bin \
  $(BUILD_DIR)/assets/gUnk_08757AE0.bin \
  $(BUILD_DIR)/assets/gUnk_0875A358.bin \
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
  $(BUILD_DIR)/assets/gUnk_08750C8C.bin \
  $(BUILD_DIR)/assets/gUnk_08529994.bin \
  $(BUILD_DIR)/assets/gUnk_08529BA8.bin \
  $(BUILD_DIR)/assets/gUnk_08529DA4.bin \
  $(BUILD_DIR)/assets/gUnk_0852CC40.bin \
  $(BUILD_DIR)/assets/gUnk_0852CE54.bin \
  $(BUILD_DIR)/assets/gUnk_0852D050.bin \
  $(BUILD_DIR)/assets/gUnk_08698B00.bin \
  $(BUILD_DIR)/assets/gUnk_08699FF4.bin \
  $(BUILD_DIR)/assets/gUnk_08527238.bin \
  $(BUILD_DIR)/assets/gUnk_08527348.bin \
  $(BUILD_DIR)/assets/gUnk_08527520.bin \
  $(BUILD_DIR)/assets/gUnk_085275D0.bin \
  $(BUILD_DIR)/assets/gUnk_0852A6D8.bin \
  $(BUILD_DIR)/assets/gUnk_0852A7EC.bin \
  $(BUILD_DIR)/assets/gUnk_0852A9BC.bin \
  $(BUILD_DIR)/assets/gUnk_0852AA6C.bin \
  $(BUILD_DIR)/assets/gUnk_086FB004.bin \
  $(BUILD_DIR)/assets/gUnk_086FD19C.bin \
  $(BUILD_DIR)/assets/gUnk_086FD240.bin \
  $(BUILD_DIR)/assets/gUnk_08714A30.bin \
  $(BUILD_DIR)/assets/gUnk_08714B60.bin \
  $(BUILD_DIR)/assets/gUnk_08714BEC.bin \
  $(BUILD_DIR)/assets/gUnk_08716F84.bin \
  $(BUILD_DIR)/assets/gUnk_087170B8.bin \
  $(BUILD_DIR)/assets/gUnk_0872C5D0.bin \
  $(BUILD_DIR)/assets/gUnk_0872C73C.bin \
  $(BUILD_DIR)/assets/gUnk_0872C84C.bin \
  $(BUILD_DIR)/assets/gUnk_0872D5CC.bin \
  $(BUILD_DIR)/assets/gUnk_0872D630.bin \
  $(BUILD_DIR)/assets/gUnk_0872D6D8.bin \
  $(BUILD_DIR)/assets/gUnk_0872F11C.bin \
  $(BUILD_DIR)/assets/gUnk_0872F1BC.bin \
  $(BUILD_DIR)/assets/gUnk_0872F1EC.bin \
  $(BUILD_DIR)/assets/gUnk_0872F21C.bin \
  $(BUILD_DIR)/assets/gUnk_0872FBFC.bin \
  $(BUILD_DIR)/assets/gUnk_0872FC34.bin \
  $(BUILD_DIR)/assets/gUnk_0872FE6C.bin \
  $(BUILD_DIR)/assets/gUnk_0872FEF8.bin \
  $(BUILD_DIR)/assets/gUnk_08738AD8.bin \
  $(BUILD_DIR)/assets/gUnk_08738CC8.bin \
  $(BUILD_DIR)/assets/gUnk_08738CF0.bin \
  $(BUILD_DIR)/assets/gUnk_08738D1C.bin \
  $(BUILD_DIR)/assets/gUnk_08739A64.bin \
  $(BUILD_DIR)/assets/gUnk_0873BE24.bin \
  $(BUILD_DIR)/assets/gUnk_0873BF48.bin \
  $(BUILD_DIR)/assets/gUnk_0873BFF0.bin \
  $(BUILD_DIR)/assets/gUnk_0873F3C8.bin \
  $(BUILD_DIR)/assets/gUnk_0873F5D4.bin \
  $(BUILD_DIR)/assets/gUnk_0873F6AC.bin \
  $(BUILD_DIR)/assets/gUnk_08743058.bin \
  $(BUILD_DIR)/assets/gUnk_08747A74.bin \
  $(BUILD_DIR)/assets/gUnk_0874A9C0.bin \
  $(BUILD_DIR)/assets/gUnk_0874E648.bin \
  $(BUILD_DIR)/assets/gUnk_0874EB60.bin \
  $(BUILD_DIR)/assets/gUnk_0874ECCC.bin \
  $(BUILD_DIR)/assets/gUnk_0874EF14.bin \
  $(BUILD_DIR)/assets/gUnk_0874EF3C.bin \
  $(BUILD_DIR)/assets/gUnk_0874EFEC.bin \
  $(BUILD_DIR)/assets/gUnk_0874F050.bin \
  $(BUILD_DIR)/assets/gUnk_08755848.bin \
  $(BUILD_DIR)/assets/gUnk_0875822C.bin

$(BUILD_DIR)/assets/gUnk_0875A440.bin: \
    assets/gfx/fonts/clock.json \
    assets/gfx/fonts/clock.png \
    tools/assets/tile4bpp.py
	@echo "ASSET $@"
	@python3 tools/assets/tile4bpp.py encode --json assets/gfx/fonts/clock.json --out $@

$(BUILD_DIR)/assets/gUnk_0875B444.bin: \
    assets/gfx/fonts/gUnk_0875B444.json \
    assets/gfx/fonts/gUnk_0875B444.png \
    tools/assets/font_container.py
	@echo "ASSET $@"
	@python3 tools/assets/font_container.py encode --json assets/gfx/fonts/gUnk_0875B444.json --out $@

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

$(BUILD_DIR)/assets/gUnk_084FA7A0.bin: \
    assets/gfx/fonts/glyph_index_084fa7a0.json \
    tools/assets/glyph_index.py
	@echo "ASSET $@"
	@python3 tools/assets/glyph_index.py encode --json assets/gfx/fonts/glyph_index_084fa7a0.json --out $@

$(BUILD_DIR)/assets/gUnk_08523290.bin: \
    assets/gfx/fonts/glyph_index_08523290.json \
    tools/assets/glyph_index.py
	@echo "ASSET $@"
	@python3 tools/assets/glyph_index.py encode --json assets/gfx/fonts/glyph_index_08523290.json --out $@

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

$(BUILD_DIR)/assets/gUnk_0869B284.bin: \
    assets/gfx/maps/gUnk_0869B284.json \
    tools/assets/compressed_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/compressed_bank.py encode --json assets/gfx/maps/gUnk_0869B284.json --out $@

$(BUILD_DIR)/assets/gUnk_086D6368.bin: \
    assets/gfx/maps/gUnk_086D6368.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/maps/gUnk_086D6368.json --out $@

$(BUILD_DIR)/assets/gUnk_086D6458.bin: \
    assets/gfx/maps/gUnk_086D6458.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086D6458.json --out $@

$(BUILD_DIR)/assets/gUnk_086D6518.bin: \
    assets/gfx/maps/gUnk_086D6518.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086D6518.json --out $@

$(BUILD_DIR)/assets/gUnk_086D6520.bin: \
    assets/gfx/maps/gUnk_086D6520.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086D6520.json --out $@

$(BUILD_DIR)/assets/gUnk_086D6528.bin: \
    assets/gfx/maps/gUnk_086D6528.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086D6528.json --out $@

$(BUILD_DIR)/assets/gUnk_086D6548.bin: \
    assets/gfx/maps/gUnk_086D6548.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/maps/gUnk_086D6548.json --out $@

$(BUILD_DIR)/assets/gUnk_086D6608.bin: \
    assets/gfx/maps/gUnk_086D6608.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086D6608.json --out $@

$(BUILD_DIR)/assets/gUnk_086D74F8.bin: \
    assets/gfx/maps/gUnk_086D74F8.json \
    tools/assets/compressed_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/compressed_bank.py encode --json assets/gfx/maps/gUnk_086D74F8.json --out $@

$(BUILD_DIR)/assets/gUnk_086DC3C4.bin: \
    assets/gfx/maps/gUnk_086DC3C4.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086DC3C4.json --out $@

$(BUILD_DIR)/assets/gUnk_086DC3D0.bin: \
    assets/gfx/maps/gUnk_086DC3D0.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086DC3D0.json --out $@

$(BUILD_DIR)/assets/gUnk_086DC3DC.bin: \
    assets/gfx/maps/gUnk_086DC3DC.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086DC3DC.json --out $@

$(BUILD_DIR)/assets/gUnk_086DC3E8.bin: \
    assets/gfx/maps/gUnk_086DC3E8.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086DC3E8.json --out $@

$(BUILD_DIR)/assets/gUnk_086DC3F4.bin: \
    assets/gfx/maps/gUnk_086DC3F4.json \
    tools/assets/compressed_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/compressed_bank.py encode --json assets/gfx/maps/gUnk_086DC3F4.json --out $@

$(BUILD_DIR)/assets/gUnk_086DC54C.bin: \
    assets/gfx/maps/gUnk_086DC54C.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086DC54C.json --out $@

$(BUILD_DIR)/assets/gUnk_086DC57C.bin: \
    assets/gfx/maps/gUnk_086DC57C.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086DC57C.json --out $@

$(BUILD_DIR)/assets/gUnk_086DCC88.bin: \
    assets/gfx/maps/gUnk_086DCC88.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086DCC88.json --out $@

$(BUILD_DIR)/assets/gUnk_086DD690.bin: \
    assets/gfx/maps/gUnk_086DD690.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086DD690.json --out $@

$(BUILD_DIR)/assets/gUnk_086DD6B0.bin: \
    assets/gfx/maps/gUnk_086DD6B0.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086DD6B0.json --out $@

$(BUILD_DIR)/assets/gUnk_086DD6E0.bin: \
    assets/gfx/maps/gUnk_086DD6E0.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086DD6E0.json --out $@

$(BUILD_DIR)/assets/gUnk_086DDDEC.bin: \
    assets/gfx/maps/gUnk_086DDDEC.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086DDDEC.json --out $@

$(BUILD_DIR)/assets/gUnk_086DE7F4.bin: \
    assets/gfx/maps/gUnk_086DE7F4.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086DE7F4.json --out $@

$(BUILD_DIR)/assets/gUnk_086EACDC.bin: \
    assets/gfx/maps/gUnk_086EACDC.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086EACDC.json --out $@

$(BUILD_DIR)/assets/gUnk_086EAD64.bin: \
    assets/gfx/maps/gUnk_086EAD64.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086EAD64.json --out $@

$(BUILD_DIR)/assets/gUnk_086EAD84.bin: \
    assets/gfx/maps/gUnk_086EAD84.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_086EAD84.json --out $@

$(BUILD_DIR)/assets/gUnk_086EAD8C.bin: \
    assets/gfx/maps/gUnk_086EAD8C.json \
    tools/assets/tilemap_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/tilemap_bank.py encode --json assets/gfx/maps/gUnk_086EAD8C.json --out $@

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

$(BUILD_DIR)/assets/gUnk_08757BA0.bin: \
    assets/gfx/maps/gUnk_08757BA0.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08757BA0.json --out $@

$(BUILD_DIR)/assets/gUnk_08757BAC.bin: \
    assets/gfx/maps/gUnk_08757BAC.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08757BAC.json --out $@

$(BUILD_DIR)/assets/gUnk_08757BCC.bin: \
    assets/gfx/maps/gUnk_08757BCC.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08757BCC.json --out $@

$(BUILD_DIR)/assets/gUnk_08757BD8.bin: \
    assets/gfx/maps/gUnk_08757BD8.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08757BD8.json --out $@

$(BUILD_DIR)/assets/gUnk_08757BF8.bin: \
    assets/gfx/maps/gUnk_08757BF8.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08757BF8.json --out $@

$(BUILD_DIR)/assets/gUnk_08757C0C.bin: \
    assets/gfx/maps/gUnk_08757C0C.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_08757C0C.json --out $@

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

$(BUILD_DIR)/assets/gUnk_0875A418.bin: \
    assets/gfx/maps/gUnk_0875A418.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_0875A418.json --out $@

$(BUILD_DIR)/assets/gUnk_0875A424.bin: \
    assets/gfx/maps/gUnk_0875A424.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_0875A424.json --out $@

$(BUILD_DIR)/assets/gUnk_0875A438.bin: \
    assets/gfx/maps/gUnk_0875A438.json \
    tools/assets/map2bin.py
	@echo "ASSET $@"
	@python3 tools/assets/map2bin.py encode --json assets/gfx/maps/gUnk_0875A438.json --out $@

$(BUILD_DIR)/assets/gUnk_086EACE4.bin: \
    assets/gfx/palettes/gunk_086eace4.json \
    assets/gfx/palettes/gunk_086eace4.png \
    assets/gfx/palettes/gunk_086eace4.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_086eace4.json --out $@

$(BUILD_DIR)/assets/gUnk_086EAD04.bin: \
    assets/gfx/palettes/gunk_086ead04.json \
    assets/gfx/palettes/gunk_086ead04.png \
    assets/gfx/palettes/gunk_086ead04.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_086ead04.json --out $@

$(BUILD_DIR)/assets/gUnk_086EAD24.bin: \
    assets/gfx/palettes/gunk_086ead24.json \
    assets/gfx/palettes/gunk_086ead24.png \
    assets/gfx/palettes/gunk_086ead24.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_086ead24.json --out $@

$(BUILD_DIR)/assets/gUnk_086EAD44.bin: \
    assets/gfx/palettes/gunk_086ead44.json \
    assets/gfx/palettes/gunk_086ead44.png \
    assets/gfx/palettes/gunk_086ead44.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_086ead44.json --out $@

$(BUILD_DIR)/assets/gUnk_0872DDE4.bin: \
    assets/gfx/palettes/gunk_0872dde4.json \
    assets/gfx/palettes/gunk_0872dde4.png \
    assets/gfx/palettes/gunk_0872dde4.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_0872dde4.json --out $@

$(BUILD_DIR)/assets/gUnk_0872FA9C.bin: \
    assets/gfx/palettes/gunk_0872fa9c.json \
    assets/gfx/palettes/gunk_0872fa9c.png \
    assets/gfx/palettes/gunk_0872fa9c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_0872fa9c.json --out $@

$(BUILD_DIR)/assets/gUnk_087399C4.bin: \
    assets/gfx/palettes/gunk_087399c4.json \
    assets/gfx/palettes/gunk_087399c4.png \
    assets/gfx/palettes/gunk_087399c4.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_087399c4.json --out $@

$(BUILD_DIR)/assets/gUnk_0873CBF4.bin: \
    assets/gfx/palettes/gunk_0873cbf4.json \
    assets/gfx/palettes/gunk_0873cbf4.png \
    assets/gfx/palettes/gunk_0873cbf4.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_0873cbf4.json --out $@

$(BUILD_DIR)/assets/gUnk_087400E4.bin: \
    assets/gfx/palettes/gunk_087400e4.json \
    assets/gfx/palettes/gunk_087400e4.png \
    assets/gfx/palettes/gunk_087400e4.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_087400e4.json --out $@

$(BUILD_DIR)/assets/gUnk_08747A14.bin: \
    assets/gfx/palettes/gunk_08747a14.json \
    assets/gfx/palettes/gunk_08747a14.png \
    assets/gfx/palettes/gunk_08747a14.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_08747a14.json --out $@

$(BUILD_DIR)/assets/gUnk_0874F2EC.bin: \
    assets/gfx/palettes/gunk_0874f2ec.json \
    assets/gfx/palettes/gunk_0874f2ec.png \
    assets/gfx/palettes/gunk_0874f2ec.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/gunk_0874f2ec.json --out $@

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

$(BUILD_DIR)/assets/gUnk_0875194C.bin: \
    assets/gfx/palettes/unk_0875194c.json \
    assets/gfx/palettes/unk_0875194c.png \
    assets/gfx/palettes/unk_0875194c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875194c.json --out $@

$(BUILD_DIR)/assets/gUnk_087519EC.bin: \
    assets/gfx/palettes/unk_087519ec.json \
    assets/gfx/palettes/unk_087519ec.png \
    assets/gfx/palettes/unk_087519ec.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087519ec.json --out $@

$(BUILD_DIR)/assets/gUnk_08751A8C.bin: \
    assets/gfx/palettes/unk_08751a8c.json \
    assets/gfx/palettes/unk_08751a8c.png \
    assets/gfx/palettes/unk_08751a8c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751a8c.json --out $@

$(BUILD_DIR)/assets/gUnk_08751B2C.bin: \
    assets/gfx/palettes/unk_08751b2c.json \
    assets/gfx/palettes/unk_08751b2c.png \
    assets/gfx/palettes/unk_08751b2c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751b2c.json --out $@

$(BUILD_DIR)/assets/gUnk_08751BCC.bin: \
    assets/gfx/palettes/unk_08751bcc.json \
    assets/gfx/palettes/unk_08751bcc.png \
    assets/gfx/palettes/unk_08751bcc.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751bcc.json --out $@

$(BUILD_DIR)/assets/gUnk_08751C6C.bin: \
    assets/gfx/palettes/unk_08751c6c.json \
    assets/gfx/palettes/unk_08751c6c.png \
    assets/gfx/palettes/unk_08751c6c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751c6c.json --out $@

$(BUILD_DIR)/assets/gUnk_08751D0C.bin: \
    assets/gfx/palettes/unk_08751d0c.json \
    assets/gfx/palettes/unk_08751d0c.png \
    assets/gfx/palettes/unk_08751d0c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751d0c.json --out $@

$(BUILD_DIR)/assets/gUnk_08751DAC.bin: \
    assets/gfx/palettes/unk_08751dac.json \
    assets/gfx/palettes/unk_08751dac.png \
    assets/gfx/palettes/unk_08751dac.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751dac.json --out $@

$(BUILD_DIR)/assets/gUnk_08751E4C.bin: \
    assets/gfx/palettes/unk_08751e4c.json \
    assets/gfx/palettes/unk_08751e4c.png \
    assets/gfx/palettes/unk_08751e4c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751e4c.json --out $@

$(BUILD_DIR)/assets/gUnk_08751EEC.bin: \
    assets/gfx/palettes/unk_08751eec.json \
    assets/gfx/palettes/unk_08751eec.png \
    assets/gfx/palettes/unk_08751eec.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751eec.json --out $@

$(BUILD_DIR)/assets/gUnk_08751F8C.bin: \
    assets/gfx/palettes/unk_08751f8c.json \
    assets/gfx/palettes/unk_08751f8c.png \
    assets/gfx/palettes/unk_08751f8c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08751f8c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875202C.bin: \
    assets/gfx/palettes/unk_0875202c.json \
    assets/gfx/palettes/unk_0875202c.png \
    assets/gfx/palettes/unk_0875202c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875202c.json --out $@

$(BUILD_DIR)/assets/gUnk_087520CC.bin: \
    assets/gfx/palettes/unk_087520cc.json \
    assets/gfx/palettes/unk_087520cc.png \
    assets/gfx/palettes/unk_087520cc.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087520cc.json --out $@

$(BUILD_DIR)/assets/gUnk_0875216C.bin: \
    assets/gfx/palettes/unk_0875216c.json \
    assets/gfx/palettes/unk_0875216c.png \
    assets/gfx/palettes/unk_0875216c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875216c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875220C.bin: \
    assets/gfx/palettes/unk_0875220c.json \
    assets/gfx/palettes/unk_0875220c.png \
    assets/gfx/palettes/unk_0875220c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875220c.json --out $@

$(BUILD_DIR)/assets/gUnk_087522AC.bin: \
    assets/gfx/palettes/unk_087522ac.json \
    assets/gfx/palettes/unk_087522ac.png \
    assets/gfx/palettes/unk_087522ac.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087522ac.json --out $@

$(BUILD_DIR)/assets/gUnk_0875234C.bin: \
    assets/gfx/palettes/unk_0875234c.json \
    assets/gfx/palettes/unk_0875234c.png \
    assets/gfx/palettes/unk_0875234c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875234c.json --out $@

$(BUILD_DIR)/assets/gUnk_087523EC.bin: \
    assets/gfx/palettes/unk_087523ec.json \
    assets/gfx/palettes/unk_087523ec.png \
    assets/gfx/palettes/unk_087523ec.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087523ec.json --out $@

$(BUILD_DIR)/assets/gUnk_0875248C.bin: \
    assets/gfx/palettes/unk_0875248c.json \
    assets/gfx/palettes/unk_0875248c.png \
    assets/gfx/palettes/unk_0875248c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875248c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875252C.bin: \
    assets/gfx/palettes/unk_0875252c.json \
    assets/gfx/palettes/unk_0875252c.png \
    assets/gfx/palettes/unk_0875252c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875252c.json --out $@

$(BUILD_DIR)/assets/gUnk_087525CC.bin: \
    assets/gfx/palettes/unk_087525cc.json \
    assets/gfx/palettes/unk_087525cc.png \
    assets/gfx/palettes/unk_087525cc.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087525cc.json --out $@

$(BUILD_DIR)/assets/gUnk_0875266C.bin: \
    assets/gfx/palettes/unk_0875266c.json \
    assets/gfx/palettes/unk_0875266c.png \
    assets/gfx/palettes/unk_0875266c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875266c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875270C.bin: \
    assets/gfx/palettes/unk_0875270c.json \
    assets/gfx/palettes/unk_0875270c.png \
    assets/gfx/palettes/unk_0875270c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875270c.json --out $@

$(BUILD_DIR)/assets/gUnk_087527AC.bin: \
    assets/gfx/palettes/unk_087527ac.json \
    assets/gfx/palettes/unk_087527ac.png \
    assets/gfx/palettes/unk_087527ac.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087527ac.json --out $@

$(BUILD_DIR)/assets/gUnk_0875284C.bin: \
    assets/gfx/palettes/unk_0875284c.json \
    assets/gfx/palettes/unk_0875284c.png \
    assets/gfx/palettes/unk_0875284c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875284c.json --out $@

$(BUILD_DIR)/assets/gUnk_087528EC.bin: \
    assets/gfx/palettes/unk_087528ec.json \
    assets/gfx/palettes/unk_087528ec.png \
    assets/gfx/palettes/unk_087528ec.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087528ec.json --out $@

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

$(BUILD_DIR)/assets/gUnk_08752ECC.bin: \
    assets/gfx/palettes/unk_08752ecc.json \
    assets/gfx/palettes/unk_08752ecc.png \
    assets/gfx/palettes/unk_08752ecc.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08752ecc.json --out $@

$(BUILD_DIR)/assets/gUnk_08752F6C.bin: \
    assets/gfx/palettes/unk_08752f6c.json \
    assets/gfx/palettes/unk_08752f6c.png \
    assets/gfx/palettes/unk_08752f6c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08752f6c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875300C.bin: \
    assets/gfx/palettes/unk_0875300c.json \
    assets/gfx/palettes/unk_0875300c.png \
    assets/gfx/palettes/unk_0875300c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875300c.json --out $@

$(BUILD_DIR)/assets/gUnk_087530AC.bin: \
    assets/gfx/palettes/unk_087530ac.json \
    assets/gfx/palettes/unk_087530ac.png \
    assets/gfx/palettes/unk_087530ac.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087530ac.json --out $@

$(BUILD_DIR)/assets/gUnk_0875314C.bin: \
    assets/gfx/palettes/unk_0875314c.json \
    assets/gfx/palettes/unk_0875314c.png \
    assets/gfx/palettes/unk_0875314c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875314c.json --out $@

$(BUILD_DIR)/assets/gUnk_087531EC.bin: \
    assets/gfx/palettes/unk_087531ec.json \
    assets/gfx/palettes/unk_087531ec.png \
    assets/gfx/palettes/unk_087531ec.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087531ec.json --out $@

$(BUILD_DIR)/assets/gUnk_0875328C.bin: \
    assets/gfx/palettes/unk_0875328c.json \
    assets/gfx/palettes/unk_0875328c.png \
    assets/gfx/palettes/unk_0875328c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875328c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875332C.bin: \
    assets/gfx/palettes/unk_0875332c.json \
    assets/gfx/palettes/unk_0875332c.png \
    assets/gfx/palettes/unk_0875332c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875332c.json --out $@

$(BUILD_DIR)/assets/gUnk_087533CC.bin: \
    assets/gfx/palettes/unk_087533cc.json \
    assets/gfx/palettes/unk_087533cc.png \
    assets/gfx/palettes/unk_087533cc.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_087533cc.json --out $@

$(BUILD_DIR)/assets/gUnk_0875346C.bin: \
    assets/gfx/palettes/unk_0875346c.json \
    assets/gfx/palettes/unk_0875346c.png \
    assets/gfx/palettes/unk_0875346c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875346c.json --out $@

$(BUILD_DIR)/assets/gUnk_0875350C.bin: \
    assets/gfx/palettes/unk_0875350c.json \
    assets/gfx/palettes/unk_0875350c.png \
    assets/gfx/palettes/unk_0875350c.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875350c.json --out $@

$(BUILD_DIR)/assets/gUnk_08757AE0.bin: \
    assets/gfx/palettes/unk_08757ae0.json \
    assets/gfx/palettes/unk_08757ae0.png \
    assets/gfx/palettes/unk_08757ae0.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_08757ae0.json --out $@

$(BUILD_DIR)/assets/gUnk_0875A358.bin: \
    assets/gfx/palettes/unk_0875a358.json \
    assets/gfx/palettes/unk_0875a358.png \
    assets/gfx/palettes/unk_0875a358.pal \
    tools/assets/pal2gba.py
	@echo "ASSET $@"
	@python3 tools/assets/pal2gba.py encode --json assets/gfx/palettes/unk_0875a358.json --out $@

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

$(BUILD_DIR)/assets/gUnk_08529994.bin: \
    assets/gfx/tables/gUnk_08529994.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/tables/gUnk_08529994.json --out $@

$(BUILD_DIR)/assets/gUnk_08529BA8.bin: \
    assets/gfx/tables/gUnk_08529BA8.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/tables/gUnk_08529BA8.json --out $@

$(BUILD_DIR)/assets/gUnk_08529DA4.bin: \
    assets/gfx/tables/gUnk_08529DA4.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/tables/gUnk_08529DA4.json --out $@

$(BUILD_DIR)/assets/gUnk_0852CC40.bin: \
    assets/gfx/tables/gUnk_0852CC40.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/tables/gUnk_0852CC40.json --out $@

$(BUILD_DIR)/assets/gUnk_0852CE54.bin: \
    assets/gfx/tables/gUnk_0852CE54.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/tables/gUnk_0852CE54.json --out $@

$(BUILD_DIR)/assets/gUnk_0852D050.bin: \
    assets/gfx/tables/gUnk_0852D050.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/tables/gUnk_0852D050.json --out $@

$(BUILD_DIR)/assets/gUnk_08698B00.bin: \
    assets/gfx/tables/gUnk_08698B00.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/tables/gUnk_08698B00.json --out $@

$(BUILD_DIR)/assets/gUnk_08699FF4.bin: \
    assets/gfx/tables/gUnk_08699FF4.json \
    tools/assets/table.py
	@echo "ASSET $@"
	@python3 tools/assets/table.py encode --json assets/gfx/tables/gUnk_08699FF4.json --out $@

$(BUILD_DIR)/assets/gUnk_08527238.bin: \
    assets/gfx/streams/gunk_08527238.json \
    assets/gfx/streams/../../0x70/png/gUnk_08527238_00_peta_indeks_64.png \
    assets/0x70/bin/gUnk_08527238_00_5632_0x130.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08527238.json --out $@

$(BUILD_DIR)/assets/gUnk_08527348.bin: \
    assets/gfx/streams/gunk_08527348.json \
    assets/gfx/streams/../../0x70/png/gUnk_08527348_00_peta_indeks_64.png \
    assets/0x70/bin/gUnk_08527348_00_5632_0x130.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08527348.json --out $@

$(BUILD_DIR)/assets/gUnk_08527520.bin: \
    assets/gfx/streams/gunk_08527520.json \
    assets/gfx/streams/../../0x70/png/gUnk_08527520_00_peta_indeks_64.png \
    assets/0x70/bin/gUnk_08527520_00_5632_0x130.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08527520.json --out $@

$(BUILD_DIR)/assets/gUnk_085275D0.bin: \
    assets/gfx/streams/gunk_085275d0.json \
    assets/gfx/streams/../../0x70/png/gUnk_085275D0_00_tile.png \
    assets/0x70/bin/gUnk_085275D0_00_18432_0x230.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_085275d0.json --out $@

$(BUILD_DIR)/assets/gUnk_0852A6D8.bin: \
    assets/gfx/streams/gunk_0852a6d8.json \
    assets/gfx/streams/../../0x70/png/gUnk_0852A6D8_00_peta_indeks_64.png \
    assets/0x70/bin/gUnk_0852A6D8_00_5632_0x130.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0852a6d8.json --out $@

$(BUILD_DIR)/assets/gUnk_0852A7EC.bin: \
    assets/gfx/streams/gunk_0852a7ec.json \
    assets/gfx/streams/../../0x70/png/gUnk_0852A7EC_00_peta_indeks_64.png \
    assets/0x70/bin/gUnk_0852A7EC_00_5632_0x130.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0852a7ec.json --out $@

$(BUILD_DIR)/assets/gUnk_0852A9BC.bin: \
    assets/gfx/streams/gunk_0852a9bc.json \
    assets/gfx/streams/../../0x70/png/gUnk_0852A9BC_00_peta_indeks_64.png \
    assets/0x70/bin/gUnk_0852A9BC_00_5632_0x130.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0852a9bc.json --out $@

$(BUILD_DIR)/assets/gUnk_0852AA6C.bin: \
    assets/gfx/streams/gunk_0852aa6c.json \
    assets/gfx/streams/../../0x70/png/gUnk_0852AA6C_00_tile.png \
    assets/0x70/bin/gUnk_0852AA6C_00_18432_0x220.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0852aa6c.json --out $@

$(BUILD_DIR)/assets/gUnk_086FB004.bin: \
    assets/gfx/streams/gunk_086fb004.json \
    assets/gfx/streams/../../0x70/png/gUnk_086FB004_00_tile.png \
    assets/0x70/bin/gUnk_086FB004_00_32768_0x230.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_086fb004.json --out $@

$(BUILD_DIR)/assets/gUnk_086FD19C.bin: \
    assets/gfx/streams/gunk_086fd19c.json \
    assets/gfx/streams/../../0x70/png/gUnk_086FD19C_00_palet.png \
    assets/0x70/bin/gUnk_086FD19C_00_480_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_086fd19c.json --out $@

$(BUILD_DIR)/assets/gUnk_086FD240.bin: \
    assets/gfx/streams/gunk_086fd240.json \
    assets/gfx/streams/../../0x70/png/gUnk_086FD240_00_peta_60x56.png \
    assets/0x70/bin/gUnk_086FD240_00_6720_0x134.bin \
    assets/0x70/bin/gUnk_086FD240_01_6720_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_02_6720_0x030.bin \
    assets/0x70/bin/gUnk_086FD240_03_480_0x030.bin \
    assets/0x70/bin/gUnk_086FD240_04_32768_0x230.bin \
    assets/0x70/bin/gUnk_086FD240_05_480_0x030.bin \
    assets/0x70/bin/gUnk_086FD240_06_6720_0x133.bin \
    assets/0x70/bin/gUnk_086FD240_07_6720_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_08_6720_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_09_480_0x030.bin \
    assets/0x70/bin/gUnk_086FD240_10_1680_0x124.bin \
    assets/0x70/bin/gUnk_086FD240_11_1680_0x023.bin \
    assets/0x70/bin/gUnk_086FD240_12_1680_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_13_1680_0x024.bin \
    assets/0x70/bin/gUnk_086FD240_14_1680_0x023.bin \
    assets/0x70/bin/gUnk_086FD240_15_1680_0x023.bin \
    assets/0x70/bin/gUnk_086FD240_16_1680_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_17_1680_0x023.bin \
    assets/0x70/bin/gUnk_086FD240_18_1680_0x023.bin \
    assets/0x70/bin/gUnk_086FD240_19_32768_0x231.bin \
    assets/0x70/bin/gUnk_086FD240_20_480_0x133.bin \
    assets/0x70/bin/gUnk_086FD240_21_1680_0x134.bin \
    assets/0x70/bin/gUnk_086FD240_22_1680_0x023.bin \
    assets/0x70/bin/gUnk_086FD240_23_1680_0x024.bin \
    assets/0x70/bin/gUnk_086FD240_24_5472_0x230.bin \
    assets/0x70/bin/gUnk_086FD240_25_5472_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_26_5472_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_27_3312_0x230.bin \
    assets/0x70/bin/gUnk_086FD240_28_3312_0x030.bin \
    assets/0x70/bin/gUnk_086FD240_29_3312_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_30_1680_0x123.bin \
    assets/0x70/bin/gUnk_086FD240_31_1680_0x023.bin \
    assets/0x70/bin/gUnk_086FD240_32_1680_0x023.bin \
    assets/0x70/bin/gUnk_086FD240_33_32768_0x231.bin \
    assets/0x70/bin/gUnk_086FD240_34_480_0x030.bin \
    assets/0x70/bin/gUnk_086FD240_35_22144_0x230.bin \
    assets/0x70/bin/gUnk_086FD240_36_22144_0x134.bin \
    assets/0x70/bin/gUnk_086FD240_37_22144_0x033.bin \
    assets/0x70/bin/gUnk_086FD240_38_480_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_39_32768_0x231.bin \
    assets/0x70/bin/gUnk_086FD240_40_480_0x030.bin \
    assets/0x70/bin/gUnk_086FD240_41_22144_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_42_22144_0x133.bin \
    assets/0x70/bin/gUnk_086FD240_43_22144_0x134.bin \
    assets/0x70/bin/gUnk_086FD240_44_480_0x130.bin \
    assets/0x70/bin/gUnk_086FD240_45_32768_0x231.bin \
    assets/0x70/bin/gUnk_086FD240_46_480_0x000.bin \
    assets/0x70/bin/gUnk_086FD240_47_7200_0x033.bin \
    assets/0x70/bin/gUnk_086FD240_48_7200_0x133.bin \
    assets/0x70/bin/gUnk_086FD240_49_7200_0x133.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_086fd240.json --out $@

$(BUILD_DIR)/assets/gUnk_08714A30.bin: \
    assets/gfx/streams/gunk_08714a30.json \
    assets/gfx/streams/../../0x70/png/gUnk_08714A30_00_palet.png \
    assets/0x70/bin/gUnk_08714A30_00_480_0x030.bin \
    assets/0x70/bin/gUnk_08714A30_01_480_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08714a30.json --out $@

$(BUILD_DIR)/assets/gUnk_08714B60.bin: \
    assets/gfx/streams/gunk_08714b60.json \
    assets/gfx/streams/../../0x70/png/gUnk_08714B60_00_palet.png \
    assets/0x70/bin/gUnk_08714B60_00_480_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08714b60.json --out $@

$(BUILD_DIR)/assets/gUnk_08714BEC.bin: \
    assets/gfx/streams/gunk_08714bec.json \
    assets/gfx/streams/../../0x70/png/gUnk_08714BEC_00_palet.png \
    assets/0x70/bin/gUnk_08714BEC_00_480_0x030.bin \
    assets/0x70/bin/gUnk_08714BEC_01_32768_0x231.bin \
    assets/0x70/bin/gUnk_08714BEC_02_480_0x000.bin \
    assets/0x70/bin/gUnk_08714BEC_03_7200_0x133.bin \
    assets/0x70/bin/gUnk_08714BEC_04_7200_0x133.bin \
    assets/0x70/bin/gUnk_08714BEC_05_7200_0x023.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08714bec.json --out $@

$(BUILD_DIR)/assets/gUnk_08716F84.bin: \
    assets/gfx/streams/gunk_08716f84.json \
    assets/gfx/streams/../../0x70/png/gUnk_08716F84_00_palet.png \
    assets/0x70/bin/gUnk_08716F84_00_480_0x030.bin \
    assets/0x70/bin/gUnk_08716F84_01_480_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08716f84.json --out $@

$(BUILD_DIR)/assets/gUnk_087170B8.bin: \
    assets/gfx/streams/gunk_087170b8.json \
    assets/gfx/streams/../../0x70/png/gUnk_087170B8_00_palet.png \
    assets/0x70/bin/gUnk_087170B8_00_480_0x030.bin \
    assets/0x70/bin/gUnk_087170B8_01_1680_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_02_1680_0x024.bin \
    assets/0x70/bin/gUnk_087170B8_03_1680_0x023.bin \
    assets/0x70/bin/gUnk_087170B8_04_1200_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_05_1200_0x030.bin \
    assets/0x70/bin/gUnk_087170B8_06_1200_0x230.bin \
    assets/0x70/bin/gUnk_087170B8_07_1200_0x024.bin \
    assets/0x70/bin/gUnk_087170B8_08_1200_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_09_1200_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_10_1200_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_11_1200_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_12_1680_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_13_1680_0x023.bin \
    assets/0x70/bin/gUnk_087170B8_14_1680_0x024.bin \
    assets/0x70/bin/gUnk_087170B8_15_32768_0x231.bin \
    assets/0x70/bin/gUnk_087170B8_16_480_0x133.bin \
    assets/0x70/bin/gUnk_087170B8_17_1680_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_18_1680_0x023.bin \
    assets/0x70/bin/gUnk_087170B8_19_1680_0x133.bin \
    assets/0x70/bin/gUnk_087170B8_20_1680_0x130.bin \
    assets/0x70/bin/gUnk_087170B8_21_1680_0x023.bin \
    assets/0x70/bin/gUnk_087170B8_22_1680_0x033.bin \
    assets/0x70/bin/gUnk_087170B8_23_32768_0x231.bin \
    assets/0x70/bin/gUnk_087170B8_24_480_0x133.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_087170b8.json --out $@

$(BUILD_DIR)/assets/gUnk_0872C5D0.bin: \
    assets/gfx/streams/gunk_0872c5d0.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872C5D0_00_layar_32x32.png \
    assets/0x70/bin/gUnk_0872C5D0_00_2048_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872c5d0.json --out $@

$(BUILD_DIR)/assets/gUnk_0872C73C.bin: \
    assets/gfx/streams/gunk_0872c73c.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872C73C_00_layar_32x32.png \
    assets/0x70/bin/gUnk_0872C73C_00_2048_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872c73c.json --out $@

$(BUILD_DIR)/assets/gUnk_0872C84C.bin: \
    assets/gfx/streams/gunk_0872c84c.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872C84C_00_tile.png \
    assets/0x70/bin/gUnk_0872C84C_00_4480_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872c84c.json --out $@

$(BUILD_DIR)/assets/gUnk_0872D5CC.bin: \
    assets/gfx/streams/gunk_0872d5cc.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872D5CC_00_layar_32x32.png \
    assets/0x70/bin/gUnk_0872D5CC_00_2048_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872d5cc.json --out $@

$(BUILD_DIR)/assets/gUnk_0872D630.bin: \
    assets/gfx/streams/gunk_0872d630.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872D630_00_layar_32x32.png \
    assets/0x70/bin/gUnk_0872D630_00_2048_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872d630.json --out $@

$(BUILD_DIR)/assets/gUnk_0872D6D8.bin: \
    assets/gfx/streams/gunk_0872d6d8.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872D6D8_00_tile.png \
    assets/0x70/bin/gUnk_0872D6D8_00_3776_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872d6d8.json --out $@

$(BUILD_DIR)/assets/gUnk_0872F11C.bin: \
    assets/gfx/streams/gunk_0872f11c.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872F11C_00_peta_indeks_16.png \
    assets/0x70/bin/gUnk_0872F11C_00_384_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872f11c.json --out $@

$(BUILD_DIR)/assets/gUnk_0872F1BC.bin: \
    assets/gfx/streams/gunk_0872f1bc.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872F1BC_00_peta_indeks_16.png \
    assets/0x70/bin/gUnk_0872F1BC_00_384_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872f1bc.json --out $@

$(BUILD_DIR)/assets/gUnk_0872F1EC.bin: \
    assets/gfx/streams/gunk_0872f1ec.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872F1EC_00_peta_indeks_16.png \
    assets/0x70/bin/gUnk_0872F1EC_00_384_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872f1ec.json --out $@

$(BUILD_DIR)/assets/gUnk_0872F21C.bin: \
    assets/gfx/streams/gunk_0872f21c.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872F21C_00_tile.png \
    assets/0x70/bin/gUnk_0872F21C_00_11456_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872f21c.json --out $@

$(BUILD_DIR)/assets/gUnk_0872FBFC.bin: \
    assets/gfx/streams/gunk_0872fbfc.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872FBFC_00_peta_indeks_16.png \
    assets/0x70/bin/gUnk_0872FBFC_00_384_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872fbfc.json --out $@

$(BUILD_DIR)/assets/gUnk_0872FC34.bin: \
    assets/gfx/streams/gunk_0872fc34.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872FC34_00_layar_32x32.png \
    assets/0x70/bin/gUnk_0872FC34_00_2048_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872fc34.json --out $@

$(BUILD_DIR)/assets/gUnk_0872FE6C.bin: \
    assets/gfx/streams/gunk_0872fe6c.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872FE6C_00_layar_32x32.png \
    assets/0x70/bin/gUnk_0872FE6C_00_2048_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872fe6c.json --out $@

$(BUILD_DIR)/assets/gUnk_0872FEF8.bin: \
    assets/gfx/streams/gunk_0872fef8.json \
    assets/gfx/streams/../../0x70/png/gUnk_0872FEF8_00_tile.png \
    assets/0x70/bin/gUnk_0872FEF8_00_29696_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0872fef8.json --out $@

$(BUILD_DIR)/assets/gUnk_08738AD8.bin: \
    assets/gfx/streams/gunk_08738ad8.json \
    assets/gfx/streams/../../0x70/png/gUnk_08738AD8_00_peta_indeks_32.png \
    assets/0x70/bin/gUnk_08738AD8_00_1280_0x000.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08738ad8.json --out $@

$(BUILD_DIR)/assets/gUnk_08738CC8.bin: \
    assets/gfx/streams/gunk_08738cc8.json \
    assets/gfx/streams/../../0x70/png/gUnk_08738CC8_00_peta_indeks_32.png \
    assets/0x70/bin/gUnk_08738CC8_00_1280_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08738cc8.json --out $@

$(BUILD_DIR)/assets/gUnk_08738CF0.bin: \
    assets/gfx/streams/gunk_08738cf0.json \
    assets/gfx/streams/../../0x70/png/gUnk_08738CF0_00_peta_indeks_20.png \
    assets/0x70/bin/gUnk_08738CF0_00_320_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08738cf0.json --out $@

$(BUILD_DIR)/assets/gUnk_08738D1C.bin: \
    assets/gfx/streams/gunk_08738d1c.json \
    assets/gfx/streams/../../0x70/png/gUnk_08738D1C_00_tile.png \
    assets/0x70/bin/gUnk_08738D1C_00_10496_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08738d1c.json --out $@

$(BUILD_DIR)/assets/gUnk_08739A64.bin: \
    assets/gfx/streams/gunk_08739a64.json \
    assets/gfx/streams/../../0x70/png/gUnk_08739A64_00_tile.png \
    assets/0x70/bin/gUnk_08739A64_00_6144_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08739a64.json --out $@

$(BUILD_DIR)/assets/gUnk_0873BE24.bin: \
    assets/gfx/streams/gunk_0873be24.json \
    assets/gfx/streams/../../0x70/png/gUnk_0873BE24_00_peta_32x32.png \
    assets/0x70/bin/gUnk_0873BE24_00_2048_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0873be24.json --out $@

$(BUILD_DIR)/assets/gUnk_0873BF48.bin: \
    assets/gfx/streams/gunk_0873bf48.json \
    assets/gfx/streams/../../0x70/png/gUnk_0873BF48_00_peta_32x32.png \
    assets/0x70/bin/gUnk_0873BF48_00_2048_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0873bf48.json --out $@

$(BUILD_DIR)/assets/gUnk_0873BFF0.bin: \
    assets/gfx/streams/gunk_0873bff0.json \
    assets/0x70/bin/gUnk_0873BFF0_00_31714_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0873bff0.json --out $@

$(BUILD_DIR)/assets/gUnk_0873F3C8.bin: \
    assets/gfx/streams/gunk_0873f3c8.json \
    assets/gfx/streams/../../0x70/png/gUnk_0873F3C8_00_peta_32x32.png \
    assets/0x70/bin/gUnk_0873F3C8_00_2048_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0873f3c8.json --out $@

$(BUILD_DIR)/assets/gUnk_0873F5D4.bin: \
    assets/gfx/streams/gunk_0873f5d4.json \
    assets/gfx/streams/../../0x70/png/gUnk_0873F5D4_00_peta_32x32.png \
    assets/0x70/bin/gUnk_0873F5D4_00_2048_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0873f5d4.json --out $@

$(BUILD_DIR)/assets/gUnk_0873F6AC.bin: \
    assets/gfx/streams/gunk_0873f6ac.json \
    assets/gfx/streams/../../0x70/png/gUnk_0873F6AC_00_tile.png \
    assets/0x70/bin/gUnk_0873F6AC_00_3712_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0873f6ac.json --out $@

$(BUILD_DIR)/assets/gUnk_08743058.bin: \
    assets/gfx/streams/gunk_08743058.json \
    assets/gfx/streams/../../0x70/png/gUnk_08743058_00_tile.png \
    assets/0x70/bin/gUnk_08743058_00_28160_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08743058.json --out $@

$(BUILD_DIR)/assets/gUnk_08747A74.bin: \
    assets/gfx/streams/gunk_08747a74.json \
    assets/gfx/streams/../../0x70/png/gUnk_08747A74_01_peta_indeks_64.png \
    assets/0x70/bin/gUnk_08747A74_00_19468_0x220.bin \
    assets/0x70/bin/gUnk_08747A74_01_4096_0x130.bin \
    assets/0x70/bin/gUnk_08747A74_02_4096_0x130.bin \
    assets/0x70/bin/gUnk_08747A74_03_4096_0x130.bin \
    assets/0x70/bin/gUnk_08747A74_04_4096_0x130.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08747a74.json --out $@

$(BUILD_DIR)/assets/gUnk_0874A9C0.bin: \
    assets/gfx/streams/gunk_0874a9c0.json \
    assets/gfx/streams/../../0x70/png/gUnk_0874A9C0_00_tile.png \
    assets/0x70/bin/gUnk_0874A9C0_00_32768_0x230.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0874a9c0.json --out $@

$(BUILD_DIR)/assets/gUnk_0874E648.bin: \
    assets/gfx/streams/gunk_0874e648.json \
    assets/0x70/bin/gUnk_0874E648_00_11234_0x230.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0874e648.json --out $@

$(BUILD_DIR)/assets/gUnk_0874EB60.bin: \
    assets/gfx/streams/gunk_0874eb60.json \
    assets/gfx/streams/../../0x70/png/gUnk_0874EB60_00_layar_32x20.png \
    assets/0x70/bin/gUnk_0874EB60_00_1280_0x100.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0874eb60.json --out $@

$(BUILD_DIR)/assets/gUnk_0874ECCC.bin: \
    assets/gfx/streams/gunk_0874eccc.json \
    assets/gfx/streams/../../0x70/png/gUnk_0874ECCC_00_layar_32x64.png \
    assets/0x70/bin/gUnk_0874ECCC_00_4096_0x130.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0874eccc.json --out $@

$(BUILD_DIR)/assets/gUnk_0874EF14.bin: \
    assets/gfx/streams/gunk_0874ef14.json \
    assets/gfx/streams/../../0x70/png/gUnk_0874EF14_00_layar_32x20.png \
    assets/0x70/bin/gUnk_0874EF14_00_1280_0x030.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0874ef14.json --out $@

$(BUILD_DIR)/assets/gUnk_0874EF3C.bin: \
    assets/gfx/streams/gunk_0874ef3c.json \
    assets/gfx/streams/../../0x70/png/gUnk_0874EF3C_00_layar_32x20.png \
    assets/0x70/bin/gUnk_0874EF3C_00_1280_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0874ef3c.json --out $@

$(BUILD_DIR)/assets/gUnk_0874EFEC.bin: \
    assets/gfx/streams/gunk_0874efec.json \
    assets/gfx/streams/../../0x70/png/gUnk_0874EFEC_00_layar_32x20.png \
    assets/0x70/bin/gUnk_0874EFEC_00_1280_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0874efec.json --out $@

$(BUILD_DIR)/assets/gUnk_0874F050.bin: \
    assets/gfx/streams/gunk_0874f050.json \
    assets/gfx/streams/../../0x70/png/gUnk_0874F050_00_tile.png \
    assets/0x70/bin/gUnk_0874F050_00_5120_0x020.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0874f050.json --out $@

$(BUILD_DIR)/assets/gUnk_08755848.bin: \
    assets/gfx/streams/gunk_08755848.json \
    assets/gfx/streams/../../0x70/png/gUnk_08755848_00_tile.png \
    assets/0x70/bin/gUnk_08755848_00_32768_0x220.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_08755848.json --out $@

$(BUILD_DIR)/assets/gUnk_0875822C.bin: \
    assets/gfx/streams/gunk_0875822c.json \
    assets/gfx/streams/../../0x70/png/gUnk_0875822C_00_tile.png \
    assets/0x70/bin/gUnk_0875822C_00_32768_0x230.bin \
    tools/assets/stream_bank.py
	@echo "ASSET $@"
	@python3 tools/assets/stream_bank.py encode --json assets/gfx/streams/gunk_0875822c.json --out $@
