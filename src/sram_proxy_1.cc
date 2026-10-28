#include "prelude.h"

// DECOMP-MATCHED func_08000358 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080006A4(i32, i32, i32 *, i32);              /* extern */
extern u16 gUnk_03000400;
extern i32 gUnk_080E862C;

void func_08000358(i32 arg0) {
    i32 sp0;

    func_080006A4(arg0, 0, &gUnk_080E862C, 0x20);
    if (gUnk_03000400 == 0) {
        sp0 = gUnk_03000400;
        func_080006A4(arg0, 0x20, &sp0, 4);
        if (gUnk_03000400 == 0) {
            func_080006A4(arg0, 0x24, &sp0, 4);
        }
    }
}
}

// DECOMP-MATCHED func_080003A0 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080002E0();                                /* extern */
i32 func_080006E4(i32, i32 *, i32, i32);              /* extern */
extern u16 gUnk_03000400;

i32 func_080003A0(i32 arg0) {
    i32 sp0;

    if ((func_080002E0() << 0x18) != 0) {
        sp0 = 0;
        func_080006E4(arg0, &sp0, 0x20, 4);
        if (gUnk_03000400 == 0) {
            return sp0;
        }
    }
    return 0;
}
}

// DECOMP-MATCHED func_080003DC (dari sram_proxy_1.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080003DC(i32 arg0, i32 arg1) {
    u32 m = 0x3FEC;
    return (arg1 * m) + 0x28;
}
}

// DECOMP-MATCHED func_080003E8 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080006A4(i32, i32, i32 *, i32);              /* extern */
i32 func_080006E4(i32, i32 *, i32, i32);              /* extern */
extern u16 gUnk_03000400;

void func_080003E8(i32 arg0, i32 arg1) {
    i32 sp0;

    sp0 = 0;
    func_080006E4(arg0, &sp0, 0x20, 4);
    if (gUnk_03000400 == 0) {
        sp0 |= 1 << arg1;
        func_080006A4(arg0, 0x20, &sp0, 4);
    }
}
}
// ekor tak-bermarker dari sram_proxy_1.s (verbatim, jangan diubah)
asm(
"    .byte 0x30, 0xB5, 0x81, 0xB0\n"
"    .byte 0x04, 0x1C, 0x0D, 0x1C, 0x00, 0x20, 0x00, 0x90, 0x20, 0x1C, 0x69, 0x46, 0x20, 0x22, 0x04, 0x23\n"
"    .byte 0x00, 0xF0, 0x50, 0xF9, 0x09, 0x48, 0x00, 0x88, 0x00, 0x28, 0x0A, 0xD1, 0x01, 0x21, 0xA9, 0x40\n"
"    .byte 0x00, 0x98, 0x88, 0x43, 0x00, 0x90, 0x20, 0x1C, 0x20, 0x21, 0x6A, 0x46, 0x04, 0x23, 0x00, 0xF0\n"
"    .byte 0x21, 0xF9, 0x01, 0xB0, 0x30, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0x00, 0x04, 0x00, 0x03\n"
);

// DECOMP-MATCHED func_08000470 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080006A4(i32, i32, i32 *, i32);

void func_08000470(i32 arg0, i32 arg1) {
    i32 sp0;

    sp0 = arg1;
    func_080006A4(arg0, 0x24, &sp0, 4);
}
}

// DECOMP-MATCHED func_08000488 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080002E0();                                /* extern */
i32 func_080006E4(i32, i32 *, i32, i32);              /* extern */
extern u16 gUnk_03000400;

i32 func_08000488(i32 arg0) {
    i32 sp0;

    if ((func_080002E0() << 0x18) != 0) {
        sp0 = 0;
        func_080006E4(arg0, &sp0, 0x24, 4);
        if (gUnk_03000400 == 0) {
            return sp0;
        }
    }
    return 0;
}
}
