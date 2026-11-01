#include "prelude.h"

// DECOMP-MATCHED func_0800063C (dari sram_proxy_2.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.sram_proxy_2.0800063C")))
void func_0800063C(void) {

}
}

// DECOMP-MATCHED func_08000640 (dari sram_proxy_2.s; cek manusia sebelum ke src/)
extern "C" {
extern i16 gUnk_03000400;
extern u8 gUnk_03000402;

__attribute__((section(".text.sram_proxy_2.08000640")))
i32 func_08000640(i32 arg0) {
    u8 temp_r1;

    temp_r1 = gUnk_03000402;
    if (temp_r1 == 0) {
        gUnk_03000402 = 1;
        gUnk_03000400 = (i16) temp_r1;
    }
    return arg0;
}
}
// DECOMP-MATCHED gData_sram_proxy_2_08000664.data.08000664
extern "C" {
// data tak-dirujuk di 0x08000664 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_sram_proxy_2_08000664[64] __attribute__((section(".text.sram_proxy_2.08000664"))) = {0x70, 0xB5, 0x82, 0xB0, 0x06, 0x1C, 0x00, 0x22, 0xFF, 0x23, 0x69, 0x46, 0x88, 0x18, 0x01, 0x78, 0x19, 0x43, 0x01, 0x70, 0x50, 0x1C, 0x00, 0x06, 0x02, 0x0E, 0x07, 0x2A, 0xF5, 0xD9, 0x00, 0x24, 0x80, 0x25, 0x2D, 0x02, 0x30, 0x1C, 0x21, 0x1C, 0x6A, 0x46, 0x08, 0x23, 0x00, 0xF0, 0x08, 0xF8, 0x08, 0x34, 0xAC, 0x42, 0xF6, 0xD3, 0x01, 0x20, 0x02, 0xB0, 0x70, 0xBC, 0x02, 0xBC, 0x08, 0x47};
}


// DECOMP-MATCHED func_080006A4 (dari sram_proxy_2.s; cek manusia sebelum ke src/)
extern "C" {
void func_08000728(i32 arg0, i32 arg1);                             /* extern */
i32 func_080D38D4(i32, i32, i32);                   /* extern */
extern i16 gUnk_03000400;

__attribute__((section(".text.sram_proxy_2.080006A4")))
i32 func_080006A4(i32 arg0, i32 arg1, i32 arg2, i32 arg3) {
    register i32 var_r0 __asm__("r0");
    i32 var_r6;
    i16 *p = &gUnk_03000400;

    var_r0 = 0;
    *p = var_r0;
    if (arg3 != 0) {
        var_r6 = 1;
        if (func_080D38D4(arg2, 0x0E000000 | arg1, arg3) != 0) {
            func_08000728(arg0, 0x100);
            var_r6 = 0;
        }
        var_r0 = var_r6;
    }
    return var_r0;
}
}

// DECOMP-MATCHED func_080006E4 (dari sram_proxy_2.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D379C(i32, i32, i32);                      /* extern */
extern i16 gUnk_03000400;

i32 func_080006E4(i32 arg0, i32 arg1, i32 arg2, i32 arg3) {
    gUnk_03000400 = 0;
    if (arg3 == 0)
        return 0;
    func_080D379C(0x0E000000 | arg2, arg1, arg3);
    return 1;
}
}
// ekor tak-bermarker dari sram_proxy_2.s (verbatim, jangan diubah)
asm(
".L08000714:\n"
"    .byte 0x00, 0xB5, 0x00, 0x79, 0x03, 0x22, 0x10, 0x40, 0x03, 0x30, 0xD0, 0xF0\n"
"    .byte 0x75, 0xFC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_08000728 (dari sram_proxy_2.s; cek manusia sebelum ke src/)
extern "C" {
extern i16 gUnk_03000400;

void func_08000728(i32 arg0, i32 arg1) {
    i32 var_r2;
    u16 old;
    i32 v;

    (void)arg0;
    v = (u16)arg1;
    if (v == 0x10) goto DO10;
    if (v > 0x10) goto BIG;
    if (v == 2) goto DO2;
    if (v > 2) goto DO48;
    if (v == 1) goto DO1;
    goto END;
DO48:
    if (v == 4) goto DO4;
    if (v == 8) goto DO8;
    goto END;
BIG:
    if (v == 0x80) goto DO80;
    if (v > 0x80) goto DO800;
    if (v == 0x20) goto DO20;
    if (v == 0x40) goto DO40;
    goto END;
DO800:
    if (v == 0x100) goto OR;
    if (v == 0x200) goto OR;
    goto END;
DO1:
    old = gUnk_03000400;
    var_r2 = 1;
    goto TAIL;
DO2:
    old = gUnk_03000400;
    var_r2 = 2;
    goto TAIL;
OR:
    gUnk_03000400 |= v;
    goto END;
DO4:
    old = gUnk_03000400;
    var_r2 = 4;
    goto TAIL;
DO20:
    old = gUnk_03000400;
    var_r2 = 0x20;
    goto TAIL;
DO8:
    old = gUnk_03000400;
    var_r2 = 8;
    goto TAIL;
DO10:
    old = gUnk_03000400;
    var_r2 = 0x10;
    goto TAIL;
DO40:
    old = gUnk_03000400;
    var_r2 = 0x40;
    goto TAIL;
DO80:
    old = gUnk_03000400;
    var_r2 = 0x80;
    goto TAIL;
TAIL:
    gUnk_03000400 = old | var_r2;
END:
    return;
}
}
