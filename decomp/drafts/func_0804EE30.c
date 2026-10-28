void func_0804EE30(u32 arg0, s16 *arg1, u32 arg2, s32 arg3) {
    u32 var_r4;
    u32 var_r7;
    u32 tmp;
    s16 *var_r5;
    u32 var_r6;

    var_r4 = arg0;
    var_r7 = (arg2 << 16) >> 16;
    tmp = (u32) (arg3 << 0x10);
    var_r5 = arg1;
    var_r6 = tmp >> 4;
    do {
        u32 var_q;

        var_q = var_r4 / 10U;
        *var_r5 = (var_r7 + (var_r4 - var_q * 10)) | var_r6;
        var_r4 = var_q;
        var_r5 -= 1;
    } while (var_r4 != 0);
}
