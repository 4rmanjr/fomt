
// DECOMP-MATCHED func_0800063C (dari sram_proxy_2.s; cek manusia sebelum ke src/)
void func_0800063C(void) {

}

// DECOMP-MATCHED func_08000640 (dari sram_proxy_2.s; cek manusia sebelum ke src/)
extern s16 gUnk_03000400;
extern u8 gUnk_03000402;

s32 func_08000640(s32 arg0) {
    u8 temp_r1;

    temp_r1 = gUnk_03000402;
    if (temp_r1 == 0) {
        gUnk_03000402 = 1;
        gUnk_03000400 = (s16) temp_r1;
    }
    return arg0;
}

// DECOMP-MATCHED func_08000728 (dari sram_proxy_2.s; cek manusia sebelum ke src/)
extern s16 gUnk_03000400;

void func_08000728(s32 arg0, s32 arg1) {
    s32 var_r2;
    u16 old;
    s32 v;

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
