s32 func_080006A4(s32, s32, s32 *, s32);            /* extern */
s32 func_08011588(s32 *, s32);                      /* extern */
extern u16 gUnk_03000400;

s32 func_080115B0(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 var_r1;

    sp0 = 0x34F4;
    if ((func_080006A4(arg1, arg2, &sp0, 4) << 0x18) == 0) {
        var_r1 = 0x10000;
        goto block_7;
    }
    if ((func_080006A4(arg1, arg2 + 4, arg0, 0x34F4) << 0x18) == 0) {
        var_r1 = 0x20000;
        goto block_7;
    }
    sp4 = func_08011588(arg0, 0x34F4);
    if ((func_080006A4(arg1, arg2 + 0x34F8, &sp4, 4) << 0x18) != 0) {
        return 0;
    }
    var_r1 = 0x30000;
block_7:
    return gUnk_03000400 | var_r1;
}
