s32 func_08000728(s32, s32);                          /* extern */
s32 func_080D38D4(s32, s32);                        /* extern */
extern s16 gUnk_03000400;

s32 func_080006A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;
    s32 var_r6;

    var_r0 = 0;
    gUnk_03000400 = 0;
    if (arg3 != 0) {
        var_r6 = 1;
        if (func_080D38D4(arg2, 0x0E000000 | arg1) != 0) {
            func_08000728(arg0, 0x100);
            var_r6 = 0;
        }
        var_r0 = var_r6;
    }
    return var_r0;
}
