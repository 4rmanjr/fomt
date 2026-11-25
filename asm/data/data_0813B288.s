    .section .rodata

    .LDATA_BEG = 0x13B288

	.incbin "baserom.gba", (.LDATA_BEG), (0x4F90CC - .LDATA_BEG)

	.global gUnk_084F90CC
gUnk_084F90CC:
	@ rom: 0x4F90CC 0x16D4 — source assets/gfx/fonts/glyph_084f90cc.{png,json}; glyph 8x12 1bpp, record 12 B
	@ func_080D0D28 mengindeks record ini; decode/encode glyph_font.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_084F90CC.bin"

	.global gUnk_084FA7A0
gUnk_084FA7A0:
	@ rom: 0x4FA7A0 0x200 — source assets/gfx/fonts/glyph_index_084fa7a0.json; 256 entri s16
	@ func_080D0D28 (baris 103120) ldrsh indeks kode*2; nilai < 0 = tanpa glyph; encode glyph_index.py byte identik.
	.incbin "build/assets/gUnk_084FA7A0.bin"

	.global gUnk_084FA9A0
gUnk_084FA9A0:
	@ rom: 0x4FA9A0 0x288F0 — source assets/gfx/fonts/glyph_084fa9a0.{png,json}; glyph 8x12 2bpp, record 24 B
	@ func_080D0D28 mengindeks record ini; decode/encode glyph_font.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_084FA9A0.bin"

	.global gUnk_08523290
gUnk_08523290:
	@ rom: 0x523290 0x3E04 — source assets/gfx/fonts/glyph_index_08523290.json; 7938 entri s16
	@ func_080D0D28 (baris 103137) ldrsh indeks dari func_080D0CD4 (189*lead + trail-0x40); encode byte identik.
	.incbin "build/assets/gUnk_08523290.bin"

	.global gUnk_08527094
gUnk_08527094:
	@ rom: 0x527094 0x1A4 — source assets/gfx/fonts/unk_08527094.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08527094.bin"

	.global gUnk_08527238
gUnk_08527238:
	.incbin "baserom.gba", 0x527238, 0x110

	.global gUnk_08527348
gUnk_08527348:
	.incbin "baserom.gba", 0x527348, 0x1D8

	.global gUnk_08527520
gUnk_08527520:
	.incbin "baserom.gba", 0x527520, 0xB0

	.global gUnk_085275D0
gUnk_085275D0:
	.incbin "baserom.gba", 0x5275D0, 0x21C4

	.global gUnk_08529794
gUnk_08529794:
	@ rom: 0x529794 0x200 — source assets/gfx/palettes/unk_08529794.{pal,png,json}; palet BGR555
	@ func_0806EC94 (code_0803EE94.s:93938) menyalin 0x200 B ke 0x05000000 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_08529794.bin"

	.global gUnk_08529994
gUnk_08529994:
	.incbin "baserom.gba", 0x529994, 0x214

	.global gUnk_08529BA8
gUnk_08529BA8:
	.incbin "baserom.gba", 0x529BA8, 0x1FC

	.global gUnk_08529DA4
gUnk_08529DA4:
	.incbin "baserom.gba", 0x529DA4, 0x934

	.global gUnk_0852A6D8
gUnk_0852A6D8:
	.incbin "baserom.gba", 0x52A6D8, 0x114

	.global gUnk_0852A7EC
gUnk_0852A7EC:
	.incbin "baserom.gba", 0x52A7EC, 0x1D0

	.global gUnk_0852A9BC
gUnk_0852A9BC:
	.incbin "baserom.gba", 0x52A9BC, 0xB0

	.global gUnk_0852AA6C
gUnk_0852AA6C:
	.incbin "baserom.gba", 0x52AA6C, 0x1FD4

	.global gUnk_0852CA40
gUnk_0852CA40:
	@ rom: 0x52CA40 0x200 — source assets/gfx/palettes/unk_0852ca40.{pal,png,json}; palet BGR555
	@ func_0806EC94 (code_0803EE94.s:93938) menyalin 0x200 B ke 0x05000000 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0852CA40.bin"

	.global gUnk_0852CC40
gUnk_0852CC40:
	.incbin "baserom.gba", 0x52CC40, 0x214

	.global gUnk_0852CE54
gUnk_0852CE54:
	.incbin "baserom.gba", 0x52CE54, 0x1FC

	.global gUnk_0852D050
gUnk_0852D050:
	.incbin "baserom.gba", 0x52D050, 0x934

	.global gUnk_0852D984
gUnk_0852D984:
	@ rom: 0x52D984 0x5E0A4 — source assets/gfx/fonts/unk_0852d984.{png,json}; container func_0805E6CC + ekor
	@ decode font_container.py (tabel + tail_hex) lalu encode ulang: byte identik slice ROM.
	.incbin "build/assets/gUnk_0852D984.bin"

	.global gUnk_0858BA28
gUnk_0858BA28:
	@ rom: 0x58BA28 0xDB638 — source assets/gfx/fonts/unk_0858ba28.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0858BA28.bin"

	.global gUnk_08667060
gUnk_08667060:
	@ rom: 0x667060 0x840 — source assets/gfx/tiles/gUnk_08667060.{png,json}; 66 tile 4bpp
	@ decode tile4bpp.py dari ROM + encode ulang, byte identik slice ROM (gate asset_verify).
	.incbin "build/assets/gUnk_08667060.bin"

	.global gUnk_086678A0
gUnk_086678A0:
	@ rom: 0x6678A0 0x30080 — source assets/gfx/tiles/gUnk_086678A0.{png,json}; 6148 tile 4bpp
	@ decode tile4bpp.py dari ROM + encode ulang, byte identik slice ROM (gate asset_verify).
	.incbin "build/assets/gUnk_086678A0.bin"

	.global gUnk_08697920
gUnk_08697920:
	@ rom: 0x697920 0x11E0 — source assets/gfx/tiles/gUnk_08697920.{png,json}; 143 tile 4bpp
	@ decode tile4bpp.py dari ROM + encode ulang, byte identik slice ROM (gate asset_verify).
	.incbin "build/assets/gUnk_08697920.bin"

	.global gUnk_08698B00
gUnk_08698B00:
	.incbin "baserom.gba", 0x698B00, 0x314

	.global gUnk_08698E14
gUnk_08698E14:
	@ rom: 0x698E14 0x11E0 — source assets/gfx/tiles/gUnk_08698E14.{png,json}; 143 tile 4bpp
	@ decode tile4bpp.py dari ROM + encode ulang, byte identik slice ROM (gate asset_verify).
	.incbin "build/assets/gUnk_08698E14.bin"

	.global gUnk_08699FF4
gUnk_08699FF4:
	.incbin "baserom.gba", 0x699FF4, 0xB0

	.global gUnk_0869A0A4
gUnk_0869A0A4:
	@ rom: 0x69A0A4 0x11E0 — source assets/gfx/tiles/gUnk_0869A0A4.{png,json}; tiles 4bpp (143 tile)
	@ func_080A748C (code_809E804.s:19344) menyalin 0x11E0 B ke 0x06006E20 (VRAM); tile4bpp.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0869A0A4.bin"

	.global gUnk_0869B284
gUnk_0869B284:
	.incbin "baserom.gba", 0x69B284, 0x3A284

	.global gUnk_086D5508
gUnk_086D5508:
	@ rom: 0x6D5508 0xE60 — source assets/gfx/tiles/gUnk_086D5508.{png,json}; 115 tile 4bpp
	@ decode tile4bpp.py dari ROM + encode ulang, byte identik slice ROM (gate asset_verify).
	.incbin "build/assets/gUnk_086D5508.bin"

	.global gUnk_086D6368
gUnk_086D6368:
	.incbin "baserom.gba", 0x6D6368, 0xF0

	.global gUnk_086D6458
gUnk_086D6458:
	.incbin "baserom.gba", 0x6D6458, 0xC0

	.global gUnk_086D6518
gUnk_086D6518:
	@ rom: 0x6D6518 0x8 — source assets/gfx/maps/gUnk_086D6518.json
	@ tilemap 2x2: method_0800AF20 field 0 (literal 0xAF40), disalin func_080AA6D0 (src+0/+4).
	.incbin "build/assets/gUnk_086D6518.bin"

	.global gUnk_086D6520
gUnk_086D6520:
	@ rom: 0x6D6520 0x8 — source assets/gfx/maps/gUnk_086D6520.json
	@ tilemap 2x2: method_0800AF20 field 1 (literal 0xAF48), disalin func_080AA6D0 (src+0/+4).
	.incbin "build/assets/gUnk_086D6520.bin"

	.global gUnk_086D6528
gUnk_086D6528:
	@ PARKIR (decoded-exact): layer 2x2 offset 0 sudah terbukti, 24/32 B raw;
	@ source assets/gfx/maps/gUnk_086D6528.json, belum dihitung selesai.
	.incbin "baserom.gba", 0x6D6528, 0x20

	.global gUnk_086D6548
gUnk_086D6548:
	.incbin "baserom.gba", 0x6D6548, 0xC0

	.global gUnk_086D6608
gUnk_086D6608:
	.incbin "baserom.gba", 0x6D6608, 0x90

	.global gUnk_086D6698
gUnk_086D6698:
	@ rom: 0x6D6698 0xE60 — source assets/gfx/tiles/gUnk_086D6698.{png,json}; 115 tile 4bpp
	@ decode tile4bpp.py dari ROM + encode ulang, byte identik slice ROM (gate asset_verify).
	.incbin "build/assets/gUnk_086D6698.bin"

	.global gUnk_086D74F8
gUnk_086D74F8:
	.incbin "baserom.gba", 0x6D74F8, 0x4ECC

	.global gUnk_086DC3C4
gUnk_086DC3C4:
	@ rom: 0x6DC3C4 0xC — source assets/gfx/maps/gUnk_086DC3C4.json
	@ tilemap 2x3: func_0809E0AC field 0 (literal 0x9E0EC), func_080AA540 menyalin src+0/+4/+8 (3 baris x 2 entri).
	.incbin "build/assets/gUnk_086DC3C4.bin"

	.global gUnk_086DC3D0
gUnk_086DC3D0:
	@ rom: 0x6DC3D0 0xC — source assets/gfx/maps/gUnk_086DC3D0.json
	@ tilemap 2x3: func_0809E0AC field 1 (literal 0x9E0F4), func_080AA540 menyalin src+0/+4/+8.
	.incbin "build/assets/gUnk_086DC3D0.bin"

	.global gUnk_086DC3DC
gUnk_086DC3DC:
	@ rom: 0x6DC3DC 0xC — source assets/gfx/maps/gUnk_086DC3DC.json
	@ tilemap 2x3: func_0809E0AC field 2 (literal 0x9E0FC), func_080AA540 menyalin src+0/+4/+8.
	.incbin "build/assets/gUnk_086DC3DC.bin"

	.global gUnk_086DC3E8
gUnk_086DC3E8:
	@ rom: 0x6DC3E8 0xC — source assets/gfx/maps/gUnk_086DC3E8.json
	@ tilemap 2x3: func_0809E0AC field 3 (literal 0x9E104), func_080AA540 menyalin src+0/+4/+8.
	.incbin "build/assets/gUnk_086DC3E8.bin"

	.global gUnk_086DC3F4
gUnk_086DC3F4:
	.incbin "baserom.gba", 0x6DC3F4, 0x158

	.global gUnk_086DC54C
gUnk_086DC54C:
	@ rom: 0x6DC54C 0x30 — source assets/gfx/maps/gUnk_086DC54C.json
	@ stamp 6x4: func_080AA9C8 memilihnya untuk id 0xe (baris 24622), sl=6 (24631) dan 4 baris (24633);
	@ loop 24672/24686 membaca 24 entri urut baris (ldrh [r4], 24701) dan menulis strh ke lapis peta [r6,#0x14] (24699/24702).
	@ 48 B = seluruh slice; gUnk_086DC57C tepat di +0x30, jadi batas simbol benar.
	.incbin "build/assets/gUnk_086DC54C.bin"

	.global gUnk_086DC57C
gUnk_086DC57C:
	@ PARKIR (decoded-exact): layer 2x2 offset 0 terbukti, 1796/1804 B raw;
	@ source assets/gfx/maps/gUnk_086DC57C.json, belum dihitung selesai.
	.incbin "baserom.gba", 0x6DC57C, 0x70C

	.global gUnk_086DCC88
gUnk_086DCC88:
	@ PARKIR (decoded-exact): layer 4x4 offset 0 terbukti, 2536/2568 B raw;
	@ source assets/gfx/maps/gUnk_086DCC88.json, belum dihitung selesai.
	.incbin "baserom.gba", 0x6DCC88, 0xA08

	.global gUnk_086DD690
gUnk_086DD690:
	@ rom: 0x6DD690 0x20 — source assets/gfx/maps/gUnk_086DD690.json
	@ stamp 4x4: func_080AA9C8 memilihnya untuk id 0xe (baris 24582), sl=4 (24603) dan 4 baris (24606);
	@ loop 24672/24686 membaca 16 entri urut baris (ldrh [r4], 24701) dan menulis strh ke lapis peta [r6,#0x14] (24699/24702).
	.incbin "build/assets/gUnk_086DD690.bin"

	.global gUnk_086DD6B0
gUnk_086DD6B0:
	@ rom: 0x6DD6B0 0x30 — source assets/gfx/maps/gUnk_086DD6B0.json
	@ stamp 6x4: func_080AA9C8 memilihnya untuk id 0xf (baris 24628), sl=6 (24631) dan 4 baris (24633);
	@ loop 24672/24686 membaca 24 entri urut baris (ldrh [r4], 24701) dan menulis strh ke lapis peta [r6,#0x14] (24699/24702).
	@ 48 B = seluruh slice; gUnk_086DD6E0 tepat di +0x30, jadi batas simbol benar.
	.incbin "build/assets/gUnk_086DD6B0.bin"

	.global gUnk_086DD6E0
gUnk_086DD6E0:
	@ PARKIR (decoded-exact): layer 2x2 offset 0 terbukti, 1796/1804 B raw;
	@ source assets/gfx/maps/gUnk_086DD6E0.json, belum dihitung selesai.
	.incbin "baserom.gba", 0x6DD6E0, 0x70C

	.global gUnk_086DDDEC
gUnk_086DDDEC:
	@ PARKIR (decoded-exact): layer 4x4 offset 0 terbukti, 2536/2568 B raw;
	@ source assets/gfx/maps/gUnk_086DDDEC.json, belum dihitung selesai.
	.incbin "baserom.gba", 0x6DDDEC, 0xA08

	.global gUnk_086DE7F4
gUnk_086DE7F4:
	@ PARKIR (decoded-exact): 45 layer descriptor terbukti, 29940/50408 B raw;
	@ source assets/gfx/maps/gUnk_086DE7F4.json, belum dihitung selesai.
	.incbin "baserom.gba", 0x6DE7F4, 0xC4E8

	.global gUnk_086EACDC
gUnk_086EACDC:
	@ rom: 0x6EACDC 0x8 — source assets/gfx/maps/gUnk_086EACDC.json
	@ tilemap 2x2 (kolom demi kolom): func_080AA9C8 id 0xc (baris 24548), sl=2/tinggi=2 (24556-24559), loop 24678-24702.
	.incbin "build/assets/gUnk_086EACDC.bin"

	.global gUnk_086EACE4
gUnk_086EACE4:
	@ rom: 0x6EACE4 0x20 — source assets/gfx/palettes/gunk_086eace4.json
	@ palet: func_08008E64(gUnk_086EACE4, palette RAM, 0x20) — code_809E804.s:22343/22357.
	.incbin "build/assets/gUnk_086EACE4.bin"

	.global gUnk_086EAD04
gUnk_086EAD04:
	@ rom: 0x6EAD04 0x20 — source assets/gfx/palettes/gunk_086ead04.json
	@ palet: func_08008E64(gUnk_086EAD04, palette RAM, 0x20) — code_809E804.s:22368/22378.
	.incbin "build/assets/gUnk_086EAD04.bin"

	.global gUnk_086EAD24
gUnk_086EAD24:
	@ rom: 0x6EAD24 0x20 — source assets/gfx/palettes/gunk_086ead24.json
	@ palet: func_08008E64(gUnk_086EAD24, palette RAM, 0x20) — code_809E804.s:22348/22357.
	.incbin "build/assets/gUnk_086EAD24.bin"

	.global gUnk_086EAD44
gUnk_086EAD44:
	@ rom: 0x6EAD44 0x20 — source assets/gfx/palettes/gunk_086ead44.json
	@ palet: func_08008E64(gUnk_086EAD44, palette RAM, 0x20) — code_809E804.s:22386/22395.
	.incbin "build/assets/gUnk_086EAD44.bin"

	.global gUnk_086EAD64
gUnk_086EAD64:
	@ rom: 0x6EAD64 0x20 — source assets/gfx/maps/gUnk_086EAD64.json
	@ stamp 4x4: func_080AA9C8 memilihnya untuk id 0xc (baris 24593), sl=4 (24603) dan 4 baris (24606);
	@ loop 24672/24686 membaca 16 entri urut baris (ldrh [r4], 24701) dan menulis strh ke lapis peta [r6,#0x14] (24699/24702).
	.incbin "build/assets/gUnk_086EAD64.bin"

	.global gUnk_086EAD84
gUnk_086EAD84:
	@ rom: 0x6EAD84 0x8 — source assets/gfx/maps/gUnk_086EAD84.json
	@ tilemap 2x2 (kolom demi kolom): func_080AA9C8 id 0xd (baris 24554), sl=2/tinggi=2 (24556-24559), loop 24678-24702.
	.incbin "build/assets/gUnk_086EAD84.bin"

	.global gUnk_086EAD8C
gUnk_086EAD8C:
	@ PARKIR (decoded-exact): 58 layer descriptor terbukti, 30426/33312 B raw;
	@ source assets/gfx/maps/gUnk_086EAD8C.json, belum dihitung selesai.
	.incbin "baserom.gba", 0x6EAD8C, 0x8220

	.global gUnk_086F2FAC
gUnk_086F2FAC:
	@ rom: 0x6F2FAC 0x7AD4 — source assets/gfx/fonts/unk_086f2fac.{png,json}; container func_0805E6CC + ekor
	@ decode font_container.py (tabel + tail_hex) lalu encode ulang: byte identik slice ROM.
	.incbin "build/assets/gUnk_086F2FAC.bin"

	.global gUnk_086FAA80
gUnk_086FAA80:
	@ rom: 0x6FAA80 0x584 — source assets/gfx/fonts/unk_086faa80.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_086FAA80.bin"

	.global gUnk_086FB004
gUnk_086FB004:
	.incbin "baserom.gba", 0x6FB004, 0x2198

	.global gUnk_086FD19C
gUnk_086FD19C:
	.incbin "baserom.gba", 0x6FD19C, 0xA4

	.global gUnk_086FD240
gUnk_086FD240:
	.incbin "baserom.gba", 0x6FD240, 0x177F0

	.global gUnk_08714A30
gUnk_08714A30:
	.incbin "baserom.gba", 0x714A30, 0x130

	.global gUnk_08714B60
gUnk_08714B60:
	.incbin "baserom.gba", 0x714B60, 0x8C

	.global gUnk_08714BEC
gUnk_08714BEC:
	.incbin "baserom.gba", 0x714BEC, 0x2398

	.global gUnk_08716F84
gUnk_08716F84:
	.incbin "baserom.gba", 0x716F84, 0x134

	.global gUnk_087170B8
gUnk_087170B8:
	.incbin "baserom.gba", 0x7170B8, 0x6464

	.global gUnk_0871D51C
gUnk_0871D51C:
	@ rom: 0x71D51C 0x128C — source assets/gfx/fonts/unk_0871d51c.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0871D51C.bin"

	.global gUnk_0871E7A8
gUnk_0871E7A8:
	@ rom: 0x71E7A8 0x504 — source assets/gfx/fonts/unk_0871e7a8.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0871E7A8.bin"

	.global gUnk_0871ECAC
gUnk_0871ECAC:
	@ rom: 0x71ECAC 0x128 — source assets/gfx/fonts/unk_0871ecac.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0871ECAC.bin"

	.global gUnk_0871EDD4
gUnk_0871EDD4:
	@ rom: 0x71EDD4 0x12C — source assets/gfx/fonts/unk_0871edd4.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0871EDD4.bin"

	.global gUnk_0871EF00
gUnk_0871EF00:
	@ rom: 0x71EF00 0x6EA0 — source assets/gfx/fonts/unk_0871ef00.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0871EF00.bin"

	.global gUnk_08725DA0
gUnk_08725DA0:
	@ rom: 0x725DA0 0xF2C — source assets/gfx/fonts/unk_08725da0.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08725DA0.bin"

	.global gUnk_08726CCC
gUnk_08726CCC:
	@ rom: 0x726CCC 0x69C — source assets/gfx/fonts/unk_08726ccc.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08726CCC.bin"

	.global gUnk_08727368
gUnk_08727368:
	@ rom: 0x727368 0x70C — source assets/gfx/fonts/unk_08727368.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08727368.bin"

	.global gUnk_08727A74
gUnk_08727A74:
	@ rom: 0x727A74 0x794 — source assets/gfx/fonts/unk_08727a74.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08727A74.bin"

	.global gUnk_08728208
gUnk_08728208:
	@ rom: 0x728208 0x118 — source assets/gfx/fonts/unk_08728208.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08728208.bin"

	.global gUnk_08728320
gUnk_08728320:
	@ rom: 0x728320 0x105C — source assets/gfx/fonts/unk_08728320.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08728320.bin"

	.global gUnk_0872937C
gUnk_0872937C:
	@ rom: 0x72937C 0xE4 — source assets/gfx/fonts/unk_0872937c.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0872937C.bin"

	.global gUnk_08729460
gUnk_08729460:
	@ rom: 0x729460 0x2A04 — source assets/gfx/fonts/unk_08729460.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08729460.bin"

	.global gUnk_0872BE64
gUnk_0872BE64:
	@ rom: 0x72BE64 0x76C — source assets/gfx/fonts/unk_0872be64.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0872BE64.bin"

	.global gUnk_0872C5D0
gUnk_0872C5D0:
	.incbin "baserom.gba", 0x72C5D0, 0x16C

	.global gUnk_0872C73C
gUnk_0872C73C:
	.incbin "baserom.gba", 0x72C73C, 0x110

	.global gUnk_0872C84C
gUnk_0872C84C:
	.incbin "baserom.gba", 0x72C84C, 0xD60

	.global gUnk_0872D5AC
gUnk_0872D5AC:
	@ rom: 0x72D5AC 0x20 — source assets/gfx/palettes/unk_0872d5ac.{pal,png,json}; palet BGR555
	@ func_080B55D0 (code_809E804.s:46450) menyalin 0x20 B ke 0x050000E0 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0872D5AC.bin"

	.global gUnk_0872D5CC
gUnk_0872D5CC:
	.incbin "baserom.gba", 0x72D5CC, 0x64

	.global gUnk_0872D630
gUnk_0872D630:
	.incbin "baserom.gba", 0x72D630, 0xA8

	.global gUnk_0872D6D8
gUnk_0872D6D8:
	.incbin "baserom.gba", 0x72D6D8, 0x70C

	.global gUnk_0872DDE4
gUnk_0872DDE4:
	@ rom: 0x72DDE4 0x60 — source assets/gfx/palettes/gunk_0872dde4.json
	@ palet: func_08008E64(gUnk_0872DDE4, palette RAM, 0x60) — code_809E804.s:49969/49974.
	.incbin "build/assets/gUnk_0872DDE4.bin"

	.global gUnk_0872DE44
gUnk_0872DE44:
	@ rom: 0x72DE44 0x1034 — source assets/gfx/fonts/unk_0872de44.{png,json}; container func_0805E6CC
	@ decode font_container.py (6 tabel + ekor T) lalu encode ulang: byte identik slice ROM.
	.incbin "build/assets/gUnk_0872DE44.bin"

	.global gUnk_0872EE78
gUnk_0872EE78:
	@ rom: 0x72EE78 0x2A4 — source assets/gfx/fonts/unk_0872ee78.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0872EE78.bin"

	.global gUnk_0872F11C
gUnk_0872F11C:
	.incbin "baserom.gba", 0x72F11C, 0xA0

	.global gUnk_0872F1BC
gUnk_0872F1BC:
	.incbin "baserom.gba", 0x72F1BC, 0x30

	.global gUnk_0872F1EC
gUnk_0872F1EC:
	.incbin "baserom.gba", 0x72F1EC, 0x30

	.global gUnk_0872F21C
gUnk_0872F21C:
	.incbin "baserom.gba", 0x72F21C, 0x880

	.global gUnk_0872FA9C
gUnk_0872FA9C:
	@ rom: 0x72FA9C 0x160 — source assets/gfx/palettes/gunk_0872fa9c.json
	@ palet: func_08008E64(gUnk_0872FA9C, palette RAM, 0x160) — code_0803EE94.s:52053/52058.
	.incbin "build/assets/gUnk_0872FA9C.bin"

	.global gUnk_0872FBFC
gUnk_0872FBFC:
	.incbin "baserom.gba", 0x72FBFC, 0x38

	.global gUnk_0872FC34
gUnk_0872FC34:
	.incbin "baserom.gba", 0x72FC34, 0x238

	.global gUnk_0872FE6C
gUnk_0872FE6C:
	.incbin "baserom.gba", 0x72FE6C, 0x8C

	.global gUnk_0872FEF8
gUnk_0872FEF8:
	.incbin "baserom.gba", 0x72FEF8, 0x1A48

	.global gUnk_08731940
gUnk_08731940:
	@ rom: 0x731940 0x200 — source assets/gfx/palettes/unk_08731940.{pal,png,json}; 256 warna
	@ func_080AE7D0 (code_809E804.s:32445) menyalin 512 B ke palette RAM; pal2gba.py: byte identik ROM.
	.incbin "build/assets/gUnk_08731940.bin"

	.global gUnk_08731B40 @ChickenPortraits
gUnk_08731B40:
	@ rom: 0x731B40 0x6604 — source assets/gfx/fonts/unk_08731b40.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08731B40.bin"

	.global gUnk_08738144 @gCalendarFont?
gUnk_08738144:
	@ rom: 0x738144 0x994 — source assets/gfx/fonts/unk_08738144.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08738144.bin"

	.global gUnk_08738AD8
gUnk_08738AD8:
	.incbin "baserom.gba", 0x738AD8, 0x1F0

	.global gUnk_08738CC8
gUnk_08738CC8:
	.incbin "baserom.gba", 0x738CC8, 0x28

	.global gUnk_08738CF0
gUnk_08738CF0:
	.incbin "baserom.gba", 0x738CF0, 0x2C

	.global gUnk_08738D1C
gUnk_08738D1C:
	.incbin "baserom.gba", 0x738D1C, 0xCA8

	.global gUnk_087399C4
gUnk_087399C4:
	@ rom: 0x7399C4 0xA0 — source assets/gfx/palettes/gunk_087399c4.json
	@ palet: func_08008E64(gUnk_087399C4, palette RAM, 0xA0) — code_0803EE94.s:40686/40691.
	.incbin "build/assets/gUnk_087399C4.bin"

	.global gUnk_08739A64
gUnk_08739A64:
	.incbin "baserom.gba", 0x739A64, 0xC84

	.global gUnk_0873A6E8
gUnk_0873A6E8:
	@ rom: 0x73A6E8 0x76C — source assets/gfx/fonts/unk_0873a6e8.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873A6E8.bin"

	.global gUnk_0873AE54
gUnk_0873AE54:
	@ rom: 0x73AE54 0x174 — source assets/gfx/fonts/unk_0873ae54.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873AE54.bin"

	.global gUnk_0873AFC8
gUnk_0873AFC8:
	@ rom: 0x73AFC8 0xE5C — source assets/gfx/fonts/unk_0873afc8.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873AFC8.bin"

	.global gUnk_0873BE24
gUnk_0873BE24:
	.incbin "baserom.gba", 0x73BE24, 0x124

	.global gUnk_0873BF48
gUnk_0873BF48:
	.incbin "baserom.gba", 0x73BF48, 0xA8

	.global gUnk_0873BFF0
gUnk_0873BFF0:
	.incbin "baserom.gba", 0x73BFF0, 0xC04

	.global gUnk_0873CBF4
gUnk_0873CBF4:
	@ rom: 0x73CBF4 0xC0 — source assets/gfx/palettes/gunk_0873cbf4.json
	@ palet: func_08008E64(gUnk_0873CBF4, palette RAM, 0xC0) — code_809E804.s:62197/62202.
	.incbin "build/assets/gUnk_0873CBF4.bin"

	.global gUnk_0873CCB4
gUnk_0873CCB4:
	@ rom: 0x73CCB4 0x1F8 — source assets/gfx/fonts/unk_0873ccb4.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873CCB4.bin"

	.global gUnk_0873CEAC
gUnk_0873CEAC:
	@ rom: 0x73CEAC 0xE4 — source assets/gfx/fonts/unk_0873ceac.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873CEAC.bin"

	.global gUnk_0873CF90
gUnk_0873CF90:
	@ rom: 0x73CF90 0x2A4 — source assets/gfx/fonts/unk_0873cf90.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873CF90.bin"

	.global gUnk_0873D234
gUnk_0873D234:
	@ rom: 0x73D234 0x3C8 — source assets/gfx/fonts/unk_0873d234.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873D234.bin"

	.global gUnk_0873D5FC
gUnk_0873D5FC:
	@ rom: 0x73D5FC 0xDC — source assets/gfx/fonts/unk_0873d5fc.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873D5FC.bin"

	.global gUnk_0873D6D8
gUnk_0873D6D8:
	@ rom: 0x73D6D8 0x76C — source assets/gfx/fonts/unk_0873d6d8.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873D6D8.bin"

	.global gUnk_0873DE44
gUnk_0873DE44:
	@ rom: 0x73DE44 0x76C — source assets/gfx/fonts/unk_0873de44.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873DE44.bin"

	.global gUnk_0873E5B0
gUnk_0873E5B0:
	@ rom: 0x73E5B0 0x76C — source assets/gfx/fonts/unk_0873e5b0.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873E5B0.bin"

	.global gUnk_0873ED1C
gUnk_0873ED1C:
	@ rom: 0x73ED1C 0x6AC — source assets/gfx/fonts/unk_0873ed1c.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0873ED1C.bin"

	.global gUnk_0873F3C8
gUnk_0873F3C8:
	.incbin "baserom.gba", 0x73F3C8, 0x20C

	.global gUnk_0873F5D4
gUnk_0873F5D4:
	.incbin "baserom.gba", 0x73F5D4, 0xD8

	.global gUnk_0873F6AC
gUnk_0873F6AC:
	.incbin "baserom.gba", 0x73F6AC, 0xA38

	.global gUnk_087400E4
gUnk_087400E4:
	@ rom: 0x7400E4 0xC0 — source assets/gfx/palettes/gunk_087400e4.json
	@ palet: func_08008E64(gUnk_087400E4, palette RAM, 0xC0) — code_809E804.s:71185/71189.
	.incbin "build/assets/gUnk_087400E4.bin"

	.global gUnk_087401A4
gUnk_087401A4:
	@ rom: 0x7401A4 0x2B0 — source assets/gfx/fonts/unk_087401a4.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_087401A4.bin"

	.global gUnk_08740454
gUnk_08740454:
	@ rom: 0x740454 0x14C — source assets/gfx/fonts/unk_08740454.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08740454.bin"

	.global gUnk_087405A0
gUnk_087405A0:
	@ rom: 0x7405A0 0x368 — source assets/gfx/fonts/unk_087405a0.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_087405A0.bin"

	.global gUnk_08740908
gUnk_08740908:
	@ rom: 0x740908 0xDC — source assets/gfx/fonts/unk_08740908.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_08740908.bin"

	.global gUnk_087409E4
gUnk_087409E4:
	@ rom: 0x7409E4 0x2674 — source assets/gfx/fonts/unk_087409e4.{png,json}; container func_0805E6CC + ekor
	@ decode font_container.py (tabel + tail_hex) lalu encode ulang: byte identik slice ROM.
	.incbin "build/assets/gUnk_087409E4.bin"

	.global gUnk_08743058
gUnk_08743058:
	.incbin "baserom.gba", 0x743058, 0x49BC

	.global gUnk_08747A14
gUnk_08747A14:
	@ rom: 0x747A14 0x60 — source assets/gfx/palettes/gunk_08747a14.json
	@ palet: func_08008E64(gUnk_08747A14, 0x05000000, 0x40) — code_0803EE94.s:62074/62079 (64 B; 32 B ekor belum terbukti).
	.incbin "build/assets/gUnk_08747A14.bin"

	.global gUnk_08747A74
gUnk_08747A74:
	.incbin "baserom.gba", 0x747A74, 0x2F4C

	.global gUnk_0874A9C0
gUnk_0874A9C0:
	.incbin "baserom.gba", 0x74A9C0, 0x3970

	.global gUnk_0874E330
gUnk_0874E330:
	@ rom: 0x74E330 0x200 — source assets/gfx/palettes/unk_0874e330.{pal,png,json}; palet BGR555
	@ func_080019D8 (intro_scene.s:1959) menyalin 0x200 B ke 0x05000000 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0874E330.bin"

	.global gUnk_0874E530
gUnk_0874E530:
	@ rom: 0x74E530 0x118 — source assets/gfx/fonts/unk_0874e530.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0874E530.bin"

	.global gUnk_0874E648
gUnk_0874E648:
	.incbin "baserom.gba", 0x74E648, 0x4F8

	.global gUnk_0874EB40
gUnk_0874EB40:
	@ rom: 0x74EB40 0x20 — source assets/gfx/palettes/unk_0874eb40.{pal,png,json}; palet BGR555
	@ func_08000F5C (intro_scene.s:712) menyalin 0x20 B ke 0x05000000 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0874EB40.bin"

	.global gUnk_0874EB60
gUnk_0874EB60:
	.incbin "baserom.gba", 0x74EB60, 0x16C

	.global gUnk_0874ECCC
gUnk_0874ECCC:
	.incbin "baserom.gba", 0x74ECCC, 0x16C

	.global gUnk_0874EE38
gUnk_0874EE38:
	@ rom: 0x74EE38 0xDC — source assets/gfx/fonts/unk_0874ee38.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0874EE38.bin"

	.global gUnk_0874EF14
gUnk_0874EF14:
	.incbin "baserom.gba", 0x74EF14, 0x28

	.global gUnk_0874EF3C
gUnk_0874EF3C:
	.incbin "baserom.gba", 0x74EF3C, 0xB0

	.global gUnk_0874EFEC
gUnk_0874EFEC:
	.incbin "baserom.gba", 0x74EFEC, 0x64

	.global gUnk_0874F050
gUnk_0874F050:
	.incbin "baserom.gba", 0x74F050, 0x29C

	.global gUnk_0874F2EC
gUnk_0874F2EC:
	@ rom: 0x74F2EC 0x60 — source assets/gfx/palettes/gunk_0874f2ec.json
	@ palet: func_08008E64(gUnk_0874F2EC, palette RAM, 0x60) — code_809E804.s:8447/8452.
	.incbin "build/assets/gUnk_0874F2EC.bin"

	.global gUnk_0874F34C
gUnk_0874F34C:
	@ rom: 0x74F34C 0x1394 — source assets/gfx/fonts/unk_0874f34c.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_0874F34C.bin"

	.global gUnk_087506E0
gUnk_087506E0:
	@ rom: 0x7506E0 0x56C — source assets/gfx/fonts/unk_087506e0.{png,json}; container func_0805E6CC
	@ decode font_container.py dari ROM + encode ulang, byte identik slice ROM.
	.incbin "build/assets/gUnk_087506E0.bin"

	.global gUnk_08750C4C
gUnk_08750C4C:
	@ rom: 0x750C4C 0x20 — source assets/gfx/tiles/gUnk_08750C4C.{png,json};
	@ tile 8x8 (DMA 0x20 B ke 0x060100A0), digerbang tile4bpp.py verify.
	.incbin "build/assets/gUnk_08750C4C.bin"

	.global gUnk_08750C6C
gUnk_08750C6C:
	@ rom: 0x750C6C 0x20 — source assets/gfx/palettes/unk_08750c6c.{pal,png,json}; palet BGR555
	@ func_080645F0 (code_0803EE94.s:74783) menyalin 0x20 B ke 0x05000220 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_08750C6C.bin"

	.global gUnk_08750C8C
gUnk_08750C8C:
	@ rom: 0x750C8C 0x1C0 — source assets/gfx/tiles/gUnk_08750C8C.{png,json};
	@ 14 tile 8x8 (DMA ke 0x06002A00), digerbang tile4bpp.py verify.
	.incbin "build/assets/gUnk_08750C8C.bin"

	.global gUnk_08750E4C
gUnk_08750E4C:
	@ rom: 0x750E4C 0x120 — source assets/gfx/sprites/gUnk_08750E4C.{png,pal,json};
	@ palet pasangan gUnk_08750F6C (pair-rule asm-branch 74337/74487, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08750E4C.bin"

	.global gUnk_08750F6C
gUnk_08750F6C:
	@ rom: 0x750F6C 0x20 — source assets/gfx/palettes/unk_08750f6c.{pal,png,json}; palet BGR555
	@ func_080645F0 (code_0803EE94.s:74491) menyalin 0x20 B ke 0x05000060 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_08750F6C.bin"

	.global gUnk_08750F8C
gUnk_08750F8C:
	@ rom: 0x750F8C 0x120 — source assets/gfx/sprites/gUnk_08750F8C.{png,pal,json};
	@ palet pasangan gUnk_08750F6C (pair-rule asm-branch 74187/74487, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08750F8C.bin"

	.global gUnk_087510AC
gUnk_087510AC:
	@ rom: 0x7510AC 0x120 — source assets/gfx/sprites/gUnk_087510AC.{png,pal,json};
	@ palet pasangan gUnk_0875178C (pair-rule asm-branch 78680/78826, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087510AC.bin"

	.global gUnk_087511CC
gUnk_087511CC:
	@ rom: 0x7511CC 0x120 — source assets/gfx/sprites/gUnk_087511CC.{png,pal,json};
	@ palet pasangan gUnk_087512EC (pair-rule asm-branch 81550/81705, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087511CC.bin"

	.global gUnk_087512EC
gUnk_087512EC:
	@ rom: 0x7512EC 0x20 — source assets/gfx/palettes/unk_087512ec.{pal,png,json}; palet BGR555
	@ func_08068344 (code_0803EE94.s:81712) menyalin 0x20 B ke 0x05000000 + offset slot (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_087512EC.bin"

	.global gUnk_0875130C
gUnk_0875130C:
	@ rom: 0x75130C 0x120 — source assets/gfx/sprites/gUnk_0875130C.{png,pal,json};
	@ palet pasangan gUnk_087512EC (pair-rule asm-branch 82004/81705, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875130C.bin"

	.global gUnk_0875142C
gUnk_0875142C:
	@ rom: 0x75142C 0x120 — source assets/gfx/sprites/gUnk_0875142C.{png,pal,json};
	@ palet pasangan gUnk_087512EC (pair-rule asm-branch 82154/81705, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875142C.bin"

	.global gUnk_0875154C
gUnk_0875154C:
	@ rom: 0x75154C 0x120 — source assets/gfx/sprites/gUnk_0875154C.{png,pal,json};
	@ palet pasangan gUnk_087512EC (pair-rule asm-branch 81854/81705, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875154C.bin"

	.global gUnk_0875166C
gUnk_0875166C:
	@ rom: 0x75166C 0x120 — source assets/gfx/sprites/gUnk_0875166C.{png,pal,json};
	@ palet pasangan gUnk_0875178C (pair-rule asm-branch 78532/78826, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875166C.bin"

	.global gUnk_0875178C
gUnk_0875178C:
	@ rom: 0x75178C 0x20 — source assets/gfx/palettes/unk_0875178c.{pal,png,json}; palet BGR555
	@ func_0806644C (code_0803EE94.s:78830) menyalin 0x20 B ke 0x05000040 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0875178C.bin"

	.global gUnk_087517AC
gUnk_087517AC:
	@ rom: 0x7517AC 0x120 — source assets/gfx/sprites/gUnk_087517AC.{png,pal,json};
	@ palet pasangan gUnk_08750F6C (pair-rule asm-branch 74037/74487, palet dipakai bersama batch DMA) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087517AC.bin"

	.global gUnk_087518CC
gUnk_087518CC:
	@ rom: 0x7518CC 0x80 — source assets/gfx/sprites/gUnk_087518CC.{png,pal,json};
	@ palet pasangan gUnk_0875194C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087518CC.bin"

	.global gUnk_0875194C
gUnk_0875194C:
	@ rom: 0x75194C 0x20 — source assets/gfx/palettes/unk_075194c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875194C.bin"

	.global gUnk_0875196C
gUnk_0875196C:
	@ rom: 0x75196C 0x80 — source assets/gfx/sprites/gUnk_0875196C.{png,pal,json};
	@ palet pasangan gUnk_087519EC ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875196C.bin"

	.global gUnk_087519EC
gUnk_087519EC:
	@ rom: 0x7519EC 0x20 — source assets/gfx/palettes/unk_087519ec.{pal,png,json}; palet BGR555
	@ func_08059FE0 (code_0803EE94.s:50773) menyalin 0x20 B ke 0x05000200 + slot*0x20 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_087519EC.bin"

	.global gUnk_08751A0C
gUnk_08751A0C:
	@ rom: 0x751A0C 0x80 — source assets/gfx/sprites/gUnk_08751A0C.{png,pal,json};
	@ palet pasangan gUnk_08751A8C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751A0C.bin"

	.global gUnk_08751A8C
gUnk_08751A8C:
	@ rom: 0x751A8C 0x20 — source assets/gfx/palettes/unk_0751a8c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751A8C.bin"

	.global gUnk_08751AAC
gUnk_08751AAC:
	@ rom: 0x751AAC 0x80 — source assets/gfx/sprites/gUnk_08751AAC.{png,pal,json};
	@ palet pasangan gUnk_08751B2C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751AAC.bin"

	.global gUnk_08751B2C
gUnk_08751B2C:
	@ rom: 0x751B2C 0x20 — source assets/gfx/palettes/unk_0751b2c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751B2C.bin"

	.global gUnk_08751B4C
gUnk_08751B4C:
	@ rom: 0x751B4C 0x80 — source assets/gfx/sprites/gUnk_08751B4C.{png,pal,json};
	@ palet pasangan gUnk_08751BCC ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751B4C.bin"

	.global gUnk_08751BCC
gUnk_08751BCC:
	@ rom: 0x751BCC 0x20 — source assets/gfx/palettes/unk_0751bcc.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751BCC.bin"

	.global gUnk_08751BEC
gUnk_08751BEC:
	@ rom: 0x751BEC 0x80 — source assets/gfx/sprites/gUnk_08751BEC.{png,pal,json};
	@ palet pasangan gUnk_08751C6C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751BEC.bin"

	.global gUnk_08751C6C
gUnk_08751C6C:
	@ rom: 0x751C6C 0x20 — source assets/gfx/palettes/unk_0751c6c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751C6C.bin"

	.global gUnk_08751C8C
gUnk_08751C8C:
	@ rom: 0x751C8C 0x80 — source assets/gfx/sprites/gUnk_08751C8C.{png,pal,json};
	@ palet pasangan gUnk_08751D0C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751C8C.bin"

	.global gUnk_08751D0C
gUnk_08751D0C:
	@ rom: 0x751D0C 0x20 — source assets/gfx/palettes/unk_0751d0c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751D0C.bin"

	.global gUnk_08751D2C
gUnk_08751D2C:
	@ rom: 0x751D2C 0x80 — source assets/gfx/sprites/gUnk_08751D2C.{png,pal,json};
	@ palet pasangan gUnk_08751DAC ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751D2C.bin"

	.global gUnk_08751DAC
gUnk_08751DAC:
	@ rom: 0x751DAC 0x20 — source assets/gfx/palettes/unk_0751dac.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751DAC.bin"

	.global gUnk_08751DCC
gUnk_08751DCC:
	@ rom: 0x751DCC 0x80 — source assets/gfx/sprites/gUnk_08751DCC.{png,pal,json};
	@ palet pasangan gUnk_08751E4C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751DCC.bin"

	.global gUnk_08751E4C
gUnk_08751E4C:
	@ rom: 0x751E4C 0x20 — source assets/gfx/palettes/unk_0751e4c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751E4C.bin"

	.global gUnk_08751E6C
gUnk_08751E6C:
	@ rom: 0x751E6C 0x80 — source assets/gfx/sprites/gUnk_08751E6C.{png,pal,json};
	@ palet pasangan gUnk_08751EEC ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751E6C.bin"

	.global gUnk_08751EEC
gUnk_08751EEC:
	@ rom: 0x751EEC 0x20 — source assets/gfx/palettes/unk_0751eec.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751EEC.bin"

	.global gUnk_08751F0C
gUnk_08751F0C:
	@ rom: 0x751F0C 0x80 — source assets/gfx/sprites/gUnk_08751F0C.{png,pal,json};
	@ palet pasangan gUnk_08751F8C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751F0C.bin"

	.global gUnk_08751F8C
gUnk_08751F8C:
	@ rom: 0x751F8C 0x20 — source assets/gfx/palettes/unk_0751f8c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08751F8C.bin"

	.global gUnk_08751FAC
gUnk_08751FAC:
	@ rom: 0x751FAC 0x80 — source assets/gfx/sprites/gUnk_08751FAC.{png,pal,json};
	@ palet pasangan gUnk_0875202C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08751FAC.bin"

	.global gUnk_0875202C
gUnk_0875202C:
	@ rom: 0x75202C 0x20 — source assets/gfx/palettes/unk_075202c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875202C.bin"

	.global gUnk_0875204C
gUnk_0875204C:
	@ rom: 0x75204C 0x80 — source assets/gfx/sprites/gUnk_0875204C.{png,pal,json};
	@ palet pasangan gUnk_087520CC ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875204C.bin"

	.global gUnk_087520CC
gUnk_087520CC:
	@ rom: 0x7520CC 0x20 — source assets/gfx/palettes/unk_07520cc.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_087520CC.bin"

	.global gUnk_087520EC
gUnk_087520EC:
	@ rom: 0x7520EC 0x80 — source assets/gfx/sprites/gUnk_087520EC.{png,pal,json};
	@ palet pasangan gUnk_0875216C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087520EC.bin"

	.global gUnk_0875216C
gUnk_0875216C:
	@ rom: 0x75216C 0x20 — source assets/gfx/palettes/unk_075216c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875216C.bin"

	.global gUnk_0875218C
gUnk_0875218C:
	@ rom: 0x75218C 0x80 — source assets/gfx/sprites/gUnk_0875218C.{png,pal,json};
	@ palet pasangan gUnk_0875220C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875218C.bin"

	.global gUnk_0875220C
gUnk_0875220C:
	@ rom: 0x75220C 0x20 — source assets/gfx/palettes/unk_075220c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875220C.bin"

	.global gUnk_0875222C
gUnk_0875222C:
	@ rom: 0x75222C 0x80 — source assets/gfx/sprites/gUnk_0875222C.{png,pal,json};
	@ palet pasangan gUnk_087522AC ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875222C.bin"

	.global gUnk_087522AC
gUnk_087522AC:
	@ rom: 0x7522AC 0x20 — source assets/gfx/palettes/unk_07522ac.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_087522AC.bin"

	.global gUnk_087522CC
gUnk_087522CC:
	@ rom: 0x7522CC 0x80 — source assets/gfx/sprites/gUnk_087522CC.{png,pal,json};
	@ palet pasangan gUnk_0875234C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087522CC.bin"

	.global gUnk_0875234C
gUnk_0875234C:
	@ rom: 0x75234C 0x20 — source assets/gfx/palettes/unk_075234c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875234C.bin"

	.global gUnk_0875236C
gUnk_0875236C:
	@ rom: 0x75236C 0x80 — source assets/gfx/sprites/gUnk_0875236C.{png,pal,json};
	@ palet pasangan gUnk_087523EC ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875236C.bin"

	.global gUnk_087523EC
gUnk_087523EC:
	@ rom: 0x7523EC 0x20 — source assets/gfx/palettes/unk_07523ec.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_087523EC.bin"

	.global gUnk_0875240C
gUnk_0875240C:
	@ rom: 0x75240C 0x80 — source assets/gfx/sprites/gUnk_0875240C.{png,pal,json};
	@ palet pasangan gUnk_0875248C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875240C.bin"

	.global gUnk_0875248C
gUnk_0875248C:
	@ rom: 0x75248C 0x20 — source assets/gfx/palettes/unk_075248c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875248C.bin"

	.global gUnk_087524AC
gUnk_087524AC:
	@ rom: 0x7524AC 0x80 — source assets/gfx/sprites/gUnk_087524AC.{png,pal,json};
	@ palet pasangan gUnk_0875252C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087524AC.bin"

	.global gUnk_0875252C
gUnk_0875252C:
	@ rom: 0x75252C 0x20 — source assets/gfx/palettes/unk_075252c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875252C.bin"

	.global gUnk_0875254C
gUnk_0875254C:
	@ rom: 0x75254C 0x80 — source assets/gfx/sprites/gUnk_0875254C.{png,pal,json};
	@ palet pasangan gUnk_087525CC ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875254C.bin"

	.global gUnk_087525CC
gUnk_087525CC:
	@ rom: 0x7525CC 0x20 — source assets/gfx/palettes/unk_087525cc.{pal,png,json}; palet BGR555
	@ func_0805FF14 (code_0803EE94.s:64274) menyalin 0x20 B ke 0x05000040 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_087525CC.bin"

	.global gUnk_087525EC
gUnk_087525EC:
	@ rom: 0x7525EC 0x80 — source assets/gfx/sprites/gUnk_087525EC.{png,pal,json};
	@ palet pasangan gUnk_0875266C ikut digerbang di metadata sprite.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087525EC.bin"

	.global gUnk_0875266C
gUnk_0875266C:
	@ rom: 0x75266C 0x20 — source assets/gfx/palettes/unk_075266c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875266C.bin"

	.global gUnk_0875268C
gUnk_0875268C:
	@ rom: 0x75268C 0x80 — source assets/gfx/sprites/gUnk_0875268C.{png,pal,json};
	@ palet pasangan gUnk_0875270C (pair-rule asm-load) digerbang di metadata.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875268C.bin"

	.global gUnk_0875270C
gUnk_0875270C:
	@ rom: 0x75270C 0x20 — source assets/gfx/palettes/unk_075270c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875270C.bin"

	.global gUnk_0875272C
gUnk_0875272C:
	@ rom: 0x75272C 0x80 — source assets/gfx/sprites/gUnk_0875272C.{png,pal,json};
	@ palet pasangan gUnk_087527AC (pair-rule asm-load) digerbang di metadata.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875272C.bin"

	.global gUnk_087527AC
gUnk_087527AC:
	@ rom: 0x7527AC 0x20 — source assets/gfx/palettes/unk_07527ac.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_087527AC.bin"

	.global gUnk_087527CC
gUnk_087527CC:
	@ rom: 0x7527CC 0x80 — source assets/gfx/sprites/gUnk_087527CC.{png,pal,json};
	@ palet pasangan gUnk_0875284C (pair-rule asm-load) digerbang di metadata.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087527CC.bin"

	.global gUnk_0875284C
gUnk_0875284C:
	@ rom: 0x75284C 0x20 — source assets/gfx/palettes/unk_075284c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875284C.bin"

	.global gUnk_0875286C
gUnk_0875286C:
	@ rom: 0x75286C 0x80 — source assets/gfx/sprites/gUnk_0875286C.{png,pal,json};
	@ palet pasangan gUnk_087528EC (pair-rule asm-load) digerbang di metadata.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875286C.bin"

	.global gUnk_087528EC
gUnk_087528EC:
	@ rom: 0x7528EC 0x20 — source assets/gfx/palettes/unk_07528ec.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_087528EC.bin"

	.global gUnk_0875290C
gUnk_0875290C:
	@ rom: 0x75290C 0x80 — source assets/gfx/sprites/gUnk_0875290C.{png,pal,json};
	@ palet pasangan gUnk_0875298C (pair-rule asm-branch, lihat `pair.reason`) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875290C.bin"

	.global gUnk_0875298C
gUnk_0875298C:
	@ rom: 0x75298C 0x20 — source assets/gfx/palettes/unk_0875298c.{pal,png,json}; palet BGR555
	@ func_080645F0 (code_0803EE94.s:73896) menyalin 0x20 B ke 0x05000040 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0875298C.bin"

	.global gUnk_087529AC
gUnk_087529AC:
	@ rom: 0x7529AC 0x80 — source assets/gfx/sprites/gUnk_087529AC.{png,pal,json};
	@ 1 tile 8x8 berisi + 0x60 padding nol; func_0804E9F4 menulis BG map tile 0x72
	@ dengan indeks palet 2 (baris 75852), palet gUnk_0875298C di-DMA ke bank 2;
	@ pair-rule asm-branch (tile baris 73296/palet baris 73892) digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_087529AC.bin"

	.global gUnk_08752A2C
gUnk_08752A2C:
	@ rom: 0x752A2C 0x80 — source assets/gfx/sprites/gUnk_08752A2C.{png,pal,json};
	@ palet pasangan gUnk_08752AAC (pair-rule asm-branch) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08752A2C.bin"

	.global gUnk_08752AAC
gUnk_08752AAC:
	@ rom: 0x752AAC 0x20 — source assets/gfx/palettes/unk_08752aac.{pal,png,json}; palet BGR555
	@ func_08068344 (code_0803EE94.s:80966) menyalin 0x20 B ke 0x05000000 + offset slot (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_08752AAC.bin"

	.global gUnk_08752ACC
gUnk_08752ACC:
	@ rom: 0x752ACC 0x80 — source assets/gfx/sprites/gUnk_08752ACC.{png,pal,json};
	@ 1 tile 8x8 berisi + 0x60 padding nol; func_0804E9F4 menulis BG map tile 0x77
	@ dengan indeks palet 2 (baris 76042), palet gUnk_0875298C di-DMA ke bank 2;
	@ pair-rule asm-branch (tile baris 73592/palet baris 73892) digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_08752ACC.bin"

	.global gUnk_08752B4C
gUnk_08752B4C:
	@ rom: 0x752B4C 0x80 — source assets/gfx/sprites/gUnk_08752B4C.{png,pal,json};
	@ 1 tile 8x8 berisi + 0x60 padding nol; func_0804E9F4 menulis BG map tile 0x71
	@ dengan indeks palet 2 (baris 75717), palet gUnk_0875298C di-DMA ke bank 2;
	@ pair-rule asm-branch (tile baris 73148/palet baris 73892) digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_08752B4C.bin"

	.global gUnk_08752BCC
gUnk_08752BCC:
	@ rom: 0x752BCC 0x80 — source assets/gfx/sprites/gUnk_08752BCC.{png,pal,json};
	@ 1 tile 8x8 berisi + 0x60 padding nol; func_0804E9F4 menulis BG map tile 0x5A
	@ dengan indeks palet 1 (baris 83559), palet gUnk_08752AAC di-DMA ke bank 1;
	@ pair-rule asm-branch (tile baris 81254/palet baris 80960) digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_08752BCC.bin"

	.global gUnk_08752C4C
gUnk_08752C4C:
	@ rom: 0x752C4C 0x80 — source assets/gfx/sprites/gUnk_08752C4C.{png,pal,json};
	@ 1 tile 8x8 berisi + 0x60 padding nol; func_0804E9F4 menulis BG map tile 0x5B
	@ dengan indeks palet 1 (baris 83572), palet gUnk_08752AAC di-DMA ke bank 1;
	@ pair-rule asm-branch (tile baris 81402/palet baris 80960) digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_08752C4C.bin"

	.global gUnk_08752CCC
gUnk_08752CCC:
	@ rom: 0x752CCC 0x80 — source assets/gfx/sprites/gUnk_08752CCC.{png,pal,json};
	@ 1 tile 8x8 berisi + 0x60 padding nol; func_0804E9F4 menulis BG map tile 0x59
	@ dengan indeks palet 1 (baris 83546), palet gUnk_08752AAC di-DMA ke bank 1;
	@ pair-rule asm-branch (tile baris 81106/palet baris 80960) digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_08752CCC.bin"

	.global gUnk_08752D4C
gUnk_08752D4C:
	@ rom: 0x752D4C 0x80 — source assets/gfx/sprites/gUnk_08752D4C.{png,pal,json};
	@ 4 tile 8x8 berisi; DMA 0x80 B ke VRAM slot 0x73.
	@ func_0804E9F4 menulis BG map tile 0x73 dengan indeks palet 2 (baris 76012, bl 76042),
	@ palet gUnk_0875298C di-DMA ke bank 2 (baris 73892); pair-rule asm-branch digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_08752D4C.bin"

	.global gUnk_08752DCC
gUnk_08752DCC:
	@ rom: 0x752DCC 0x80 — source assets/gfx/sprites/gUnk_08752DCC.{png,pal,json};
	@ 1 tile 8x8 berisi + 0x60 padding nol; DMA 0x20 B ke VRAM slot 0x70.
	@ func_0804E9F4 menulis BG map tile 0x70 dengan indeks palet 2 (baris 75581, bl 75581),
	@ palet gUnk_0875298C di-DMA ke bank 2 (baris 73892); pair-rule asm-branch digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_08752DCC.bin"

	.global gUnk_08752E4C
gUnk_08752E4C:
	@ rom: 0x752E4C 0x80 — source assets/gfx/sprites/gUnk_08752E4C.{png,pal,json};
	@ palet pasangan gUnk_08752ECC (pair-rule asm-load) digerbang di metadata.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08752E4C.bin"

	.global gUnk_08752ECC
gUnk_08752ECC:
	@ rom: 0x752ECC 0x20 — source assets/gfx/palettes/unk_0752ecc.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08752ECC.bin"

	.global gUnk_08752EEC
gUnk_08752EEC:
	@ rom: 0x752EEC 0x80 — source assets/gfx/sprites/gUnk_08752EEC.{png,pal,json};
	@ palet pasangan gUnk_08752F6C (pair-rule asm-load) digerbang di metadata.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08752EEC.bin"

	.global gUnk_08752F6C
gUnk_08752F6C:
	@ rom: 0x752F6C 0x20 — source assets/gfx/palettes/unk_0752f6c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_08752F6C.bin"

	.global gUnk_08752F8C
gUnk_08752F8C:
	@ rom: 0x752F8C 0x80 — source assets/gfx/sprites/gUnk_08752F8C.{png,pal,json};
	@ palet pasangan gUnk_0875300C (pair-rule asm-load) digerbang di metadata.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_08752F8C.bin"

	.global gUnk_0875300C
gUnk_0875300C:
	@ rom: 0x75300C 0x20 — source assets/gfx/palettes/unk_0875300c.{pal,png,json}; palet BGR555
	@ func_080C85A0 (code_809E804.s:85907) menyalin 0x20 B ke 0x05000200 + slot*0x20 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0875300C.bin"

	.global gUnk_0875302C
gUnk_0875302C:
	@ rom: 0x75302C 0x80 — source assets/gfx/sprites/gUnk_0875302C.{png,pal,json};
	@ palet pasangan gUnk_087530AC (pair-rule asm-load) digerbang di metadata.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875302C.bin"

	.global gUnk_087530AC
gUnk_087530AC:
	@ rom: 0x7530AC 0x20 — source assets/gfx/palettes/unk_07530ac.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_087530AC.bin"

	.global gUnk_087530CC
gUnk_087530CC:
	@ rom: 0x7530CC 0x80 — source assets/gfx/sprites/gUnk_087530CC.{png,pal,json};
	@ palet pasangan gUnk_0875314C (pair-rule asm-branch, lihat `pair.reason`) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087530CC.bin"

	.global gUnk_0875314C
gUnk_0875314C:
	@ rom: 0x75314C 0x20 — source assets/gfx/palettes/unk_0875314c.{pal,png,json}; palet BGR555
	@ func_0805FF14 (code_0803EE94.s:64563) menyalin 0x20 B ke 0x05000060 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0875314C.bin"

	.global gUnk_0875316C
gUnk_0875316C:
	@ rom: 0x75316C 0x80 — source assets/gfx/sprites/gUnk_0875316C.{png,pal,json};
	@ palet pasangan gUnk_087531EC (pair-rule asm-load 68455/68457, lihat `pair.load_lines`) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875316C.bin"

	.global gUnk_087531EC
gUnk_087531EC:
	@ rom: 0x7531EC 0x20 — source assets/gfx/palettes/unk_07531ec.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_087531EC.bin"

	.global gUnk_0875320C
gUnk_0875320C:
	@ rom: 0x75320C 0x80 — source assets/gfx/sprites/gUnk_0875320C.{png,pal,json};
	@ palet pasangan gUnk_0875328C (pair-rule asm-load 68268/68270, lihat `pair.load_lines`) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875320C.bin"

	.global gUnk_0875328C
gUnk_0875328C:
	@ rom: 0x75328C 0x20 — source assets/gfx/palettes/unk_075328c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875328C.bin"

	.global gUnk_087532AC
gUnk_087532AC:
	@ rom: 0x7532AC 0x80 — source assets/gfx/sprites/gUnk_087532AC.{png,pal,json};
	@ palet pasangan gUnk_0875332C (pair-rule asm-load 71946/71947, lihat `pair.load_lines`) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087532AC.bin"

	.global gUnk_0875332C
gUnk_0875332C:
	@ rom: 0x75332C 0x20 — source assets/gfx/palettes/unk_075332c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875332C.bin"

	.global gUnk_0875334C
gUnk_0875334C:
	@ rom: 0x75334C 0x80 — source assets/gfx/sprites/gUnk_0875334C.{png,pal,json};
	@ palet pasangan gUnk_087533CC (pair-rule asm-load 71928/71929, lihat `pair.load_lines`) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875334C.bin"

	.global gUnk_087533CC
gUnk_087533CC:
	@ rom: 0x7533CC 0x20 — source assets/gfx/palettes/unk_07533cc.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_087533CC.bin"

	.global gUnk_087533EC
gUnk_087533EC:
	@ rom: 0x7533EC 0x80 — source assets/gfx/sprites/gUnk_087533EC.{png,pal,json};
	@ palet pasangan gUnk_0875346C (pair-rule asm-load 71953/71954, lihat `pair.load_lines`) ikut digerbang.
	@ gate `sprite2gba.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_087533EC.bin"

	.global gUnk_0875346C
gUnk_0875346C:
	@ rom: 0x75346C 0x20 — source assets/gfx/palettes/unk_075346c.{pal,png,json}
	@ field struct+0xc di list obj+0x594; func_08076EA8 (baris 111004) menyalin 0x20 B ke 0x05000200 + slot*0x20; encode pal2gba.py byte identik.
	.incbin "build/assets/gUnk_0875346C.bin"

	.global gUnk_0875348C
gUnk_0875348C:
	@ rom: 0x75348C 0x80 — source assets/gfx/sprites/gUnk_0875348C.{png,pal,json};
	@ 1 tile 8x8 berisi + 0x60 padding nol; func_0804E9F4 menulis BG map tile 0x5D
	@ dengan indeks palet 4 (baris 65559), palet gUnk_0875350C di-DMA ke bank 4 (baris 64848);
	@ pair-rule asm-branch (tile baris 64701/palet baris 64848) digerbang sprite2gba.py verify.
	.incbin "build/assets/gUnk_0875348C.bin"

	.global gUnk_0875350C
gUnk_0875350C:
	@ rom: 0x75350C 0x20 — source assets/gfx/palettes/unk_0875350c.{pal,png,json}; palet BGR555
	@ func_0805FF14 (code_0803EE94.s:64852) menyalin 0x20 B ke 0x05000080 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0875350C.bin"

	.global gUnk_0875352C
gUnk_0875352C:
	@ rom: 0x75352C 0xDC — source assets/gfx/fonts/unk_0875352c.{png,json};
	@ container func_0805E6CC A1/B1/C1/D4/E1/F0/T1 (bukan tile datar);
	@ func_08082264 (baris 133363 -> 132394) meneruskannya ke func_0805E6CC.
	.incbin "build/assets/gUnk_0875352C.bin"

	.global gUnk_08753608
gUnk_08753608:
	@ rom: 0x753608 0xDC — source assets/gfx/fonts/unk_08753608.{png,json};
	@ container func_0805E6CC A1/B1/C1/D4/E1/F0/T1 (bukan tile datar);
	@ func_0805E6CC dipanggil langsung di baris 130129.
	.incbin "build/assets/gUnk_08753608.bin"

	.global gUnk_087536E4
gUnk_087536E4:
	@ rom: 0x7536E4 0xEC — source assets/gfx/fonts/unk_087536e4.{png,json};
	@ container func_0805E6CC A2/B4/C3/D2/E1/F0/T4 (bukan tile datar);
	@ func_0805E6CC dipanggil langsung di code_809E804.s baris 84854.
	.incbin "build/assets/gUnk_087536E4.bin"

	.global gUnk_087537D0
gUnk_087537D0:
	@ rom: 0x7537D0 0xEA4 — source assets/gfx/fonts/unk_087537d0.{png,json};
	@ container func_0805E6CC A20/B40/C11/D73/E13/F0/T40 (bukan tile datar);
	@ func_0805E6CC dipanggil langsung di baris 96720 dan 113849.
	.incbin "build/assets/gUnk_087537D0.bin"

	.global gUnk_08754674
gUnk_08754674:
	@ rom: 0x754674 0x598 — source assets/gfx/fonts/unk_08754674.{png,json};
	@ container func_0805E6CC A1/B3/C3/D40/E1/F0/T4 (bukan tile datar);
	@ func_0805E6CC dipanggil langsung dengan simbol ini di baris 166592 (func_08094AC0).
	.incbin "build/assets/gUnk_08754674.bin"

	.global gUnk_08754C0C
gUnk_08754C0C:
	@ rom: 0x754C0C 0x548 — source assets/gfx/fonts/unk_08754c0c.{png,json};
	@ container func_0805E6CC A2/B4/C2/D36/E2/F0/T5 (bukan tile datar);
	@ func_0805E6CC dipanggil langsung di baris 166585, code_809E804.s 95889 dan 98781.
	.incbin "build/assets/gUnk_08754C0C.bin"

	.global gUnk_08755154
gUnk_08755154:
	@ rom: 0x755154 0xDC — source assets/gfx/fonts/unk_08755154.{png,json};
	@ container func_0805E6CC A1/B1/C1/D4/E1/F0/T1 (bukan tile datar);
	@ func_08082264 (baris 133387 -> 132394) meneruskannya ke func_0805E6CC.
	.incbin "build/assets/gUnk_08755154.bin"

	.global gUnk_08755230
gUnk_08755230:
	@ rom: 0x755230 0x30C — source assets/gfx/maps/gUnk_08755230.json;
	@ tilemap BG 30x13 entri u16 (indeks tile + bit palet), bukan tile datar;
	@ func_08077EC0 (baris 112762) memuatnya lalu func_08077E34 (baris 112650)
	@ menyalin 30 kolom x 13 baris ke screenblock 0x1e.
	.incbin "build/assets/gUnk_08755230.bin"

	.global gUnk_0875553C
gUnk_0875553C:
	@ rom: 0x75553C 0x30C — source assets/gfx/maps/gUnk_0875553C.json;
	@ tilemap BG 30x13 entri u16 (indeks tile + bit palet), bukan tile datar;
	@ func_08077EC0 (baris 112770) memuatnya lalu func_08077E34 (baris 112650)
	@ menyalin 30 kolom x 13 baris ke screenblock 0x1d.
	.incbin "build/assets/gUnk_0875553C.bin"

	.global gUnk_08755848
gUnk_08755848:
	.incbin "baserom.gba", 0x755848, 0x2298

	.global gUnk_08757AE0
gUnk_08757AE0:
	@ rom: 0x757AE0 0xC0 — source assets/gfx/palettes/unk_08757ae0.{pal,png,json}; palet BGR555
	@ func_08077EC0 (code_0803EE94.s:112761) menyalin 0xC0 B ke 0x05000020 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_08757AE0.bin"

	.global gUnk_08757BA0
gUnk_08757BA0:
	@ rom: 0x757BA0 0xC — source assets/gfx/maps/gUnk_08757BA0.json
	@ tilemap 2x3 (kolom demi kolom): func_08077E64 dari func_08077EC0 x=0, lebar=2, tinggi=3 (112850-112856).
	.incbin "build/assets/gUnk_08757BA0.bin"

	.global gUnk_08757BAC
gUnk_08757BAC:
	@ rom: 0x757BAC 0x20 — source assets/gfx/maps/gUnk_08757BAC.json
	@ tilemap 3x5 + 1 padding nol (kolom demi kolom): func_08077E64 x=0x1e, lebar=3, tinggi=5 (112760-112770).
	.incbin "build/assets/gUnk_08757BAC.bin"

	.global gUnk_08757BCC
gUnk_08757BCC:
	@ rom: 0x757BCC 0xC — source assets/gfx/maps/gUnk_08757BCC.json
	@ tilemap 2x3 (kolom demi kolom): func_08077E64 x=0x18, lebar=2, tinggi=3 (112824-112830).
	.incbin "build/assets/gUnk_08757BCC.bin"

	.global gUnk_08757BD8
gUnk_08757BD8:
	@ rom: 0x757BD8 0x20 — source assets/gfx/maps/gUnk_08757BD8.json
	@ tilemap 3x5 + 1 padding nol (kolom demi kolom): func_08077E64 x=0xa, lebar=3, tinggi=5 (112781-112789).
	.incbin "build/assets/gUnk_08757BD8.bin"

	.global gUnk_08757BF8
gUnk_08757BF8:
	@ rom: 0x757BF8 0x14 — source assets/gfx/maps/gUnk_08757BF8.json
	@ tilemap 3x3 + 1 padding nol (kolom demi kolom): func_08077E64 x=0x1b, lebar=3, tinggi=3 (112900-112906).
	.incbin "build/assets/gUnk_08757BF8.bin"

	.global gUnk_08757C0C
gUnk_08757C0C:
	@ rom: 0x757C0C 0x8 — source assets/gfx/maps/gUnk_08757C0C.json
	@ tilemap 2x2 (kolom demi kolom): func_08077E64 x=0xe, lebar=2, tinggi=2 (112875-112882).
	.incbin "build/assets/gUnk_08757C0C.bin"

	.global gUnk_08757C14
gUnk_08757C14:
	@ rom: 0x757C14 0x30C — source assets/gfx/maps/gUnk_08757C14.json;
	@ tilemap BG 30x13 entri u16 (indeks tile + bit palet), bukan tile datar;
	@ func_08077EC0 (baris 112770, cabang r5=1) memuatnya lalu func_08077E34
	@ (baris 112650) menyalin 30 kolom x 13 baris ke screenblock 0x1e.
	.incbin "build/assets/gUnk_08757C14.bin"

	.global gUnk_08757F20
gUnk_08757F20:
	@ rom: 0x757F20 0x30C — source assets/gfx/maps/gUnk_08757F20.json;
	@ tilemap BG 30x13 entri u16 (indeks tile + bit palet), bukan tile datar;
	@ func_08077EC0 (baris 112773 di code_0803EE94.s) memuatnya lalu func_08077E34
	@ (baris 112650) menyalin 30 kolom x 13 baris ke screenblock 0x1d.
	.incbin "build/assets/gUnk_08757F20.bin"

	.global gUnk_0875822C
gUnk_0875822C:
	.incbin "baserom.gba", 0x75822C, 0x212C

	.global gUnk_0875A358
gUnk_0875A358:
	@ rom: 0x75A358 0xC0 — source assets/gfx/palettes/unk_0875a358.{pal,png,json}; palet BGR555
	@ func_08077EC0 (code_0803EE94.s:112761) menyalin 0xC0 B ke 0x05000020 (palette RAM); pal2gba.py: byte identik slice ROM.
	.incbin "build/assets/gUnk_0875A358.bin"

	.global gUnk_0875A418
gUnk_0875A418:
	@ rom: 0x75A418 0xC — source assets/gfx/maps/gUnk_0875A418.json
	@ tilemap 2x3 (kolom demi kolom): func_08077E64 x=0, lebar=2, tinggi=3 (112843-112849).
	.incbin "build/assets/gUnk_0875A418.bin"

	.global gUnk_0875A424
gUnk_0875A424:
	@ rom: 0x75A424 0x14 — source assets/gfx/maps/gUnk_0875A424.json
	@ tilemap 3x3 + 1 padding nol (kolom demi kolom): func_08077E64 x=0x1b, lebar=3, tinggi=3 (112894-112900).
	.incbin "build/assets/gUnk_0875A424.bin"

	.global gUnk_0875A438
gUnk_0875A438:
	@ rom: 0x75A438 0x8 — source assets/gfx/maps/gUnk_0875A438.json
	@ tilemap 2x2 (kolom demi kolom): func_08077E64 x=0xe, lebar=2, tinggi=2 (112869-112875).
	.incbin "build/assets/gUnk_0875A438.bin"

	.global gUnk_0875A440 @ gClockFont
gUnk_0875A440:
	@ rom: 0x75A440 0x1004 — source assets/gfx/fonts/clock.{png,json};
	@ gate `tile4bpp.py verify` MATCH, lalu `make compare` HIJAU.
	.incbin "build/assets/gUnk_0875A440.bin"

	.global gUnk_0875B444
gUnk_0875B444:
	.incbin "baserom.gba", 0x75B444, 0x5B4
