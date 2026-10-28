
// DECOMP-MATCHED func_08000358 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
s32 func_080006A4(s32, s32, s32 *, s32);              /* extern */
extern u16 gUnk_03000400;
extern s32 gUnk_080E862C;

void func_08000358(s32 arg0) {
    s32 sp0;

    func_080006A4(arg0, 0, &gUnk_080E862C, 0x20);
    if (gUnk_03000400 == 0) {
        sp0 = gUnk_03000400;
        func_080006A4(arg0, 0x20, &sp0, 4);
        if (gUnk_03000400 == 0) {
            func_080006A4(arg0, 0x24, &sp0, 4);
        }
    }
}

// DECOMP-MATCHED func_080003A0 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
s32 func_080002E0();                                /* extern */
s32 func_080006E4(s32, s32 *, s32, s32);              /* extern */
extern u16 gUnk_03000400;

s32 func_080003A0(s32 arg0) {
    s32 sp0;

    if ((func_080002E0() << 0x18) != 0) {
        sp0 = 0;
        func_080006E4(arg0, &sp0, 0x20, 4);
        if (gUnk_03000400 == 0) {
            return sp0;
        }
    }
    return 0;
}

// DECOMP-MATCHED func_08000470 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
s32 func_080006A4(s32, s32, s32 *, s32);

void func_08000470(s32 arg0, s32 arg1) {
    s32 sp0;

    sp0 = arg1;
    func_080006A4(arg0, 0x24, &sp0, 4);
}

// DECOMP-MATCHED func_08000488 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
s32 func_080002E0();                                /* extern */
s32 func_080006E4(s32, s32 *, s32, s32);              /* extern */
extern u16 gUnk_03000400;

s32 func_08000488(s32 arg0) {
    s32 sp0;

    if ((func_080002E0() << 0x18) != 0) {
        sp0 = 0;
        func_080006E4(arg0, &sp0, 0x24, 4);
        if (gUnk_03000400 == 0) {
            return sp0;
        }
    }
    return 0;
}

// DECOMP-MATCHED func_080002E0 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
s32 func_080006E4(s32, u32 *, s32, s32);              /* extern */
s32 memcmp(u32 *, s32 *, s32);                        /* extern */
extern u16 gUnk_03000400;
extern s32 gUnk_080E862C;

s32 func_080002E0(s32 arg0) {
    u8 sp0[0x20];
    u32 sp20;
    u32 sp24;
    s32 var_r4;

    func_080006E4(arg0, &sp0, 0, 0x20);
    if ((gUnk_03000400 != 0) || (sp20 = (u32) gUnk_03000400, func_080006E4(arg0, &sp20, 0x20, 4), (gUnk_03000400 != 0)) || (sp24 = (u32) gUnk_03000400, func_080006E4(arg0, &sp24, 0x24, 4), (gUnk_03000400 != 0))) {
        return 0;
    }
    var_r4 = 0;
    if ((memcmp(&sp0, &gUnk_080E862C, 0x20) == 0) && ((3 & sp20) == sp20) && (sp24 <= 1U)) {
        var_r4 = 1;
    }
    return var_r4;
}
