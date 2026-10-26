void func_0804EE30(u32 arg0, s16 *arg1, u16 arg2, s32 arg3) {
    s16 *var_r5;
    u32 var_r4;

    var_r4 = arg0;
    var_r5 = arg1;
    do {
        *var_r5 = (arg2 + (var_r4 % 10)) | ((u32) (arg3 << 0x10) >> 4);
        var_r4 = var_r4 / 10U;
        var_r5 -= 2;
    } while (var_r4 != 0);
}
