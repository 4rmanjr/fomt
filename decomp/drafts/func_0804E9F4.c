void func_0804E9F4(s16 *arg0, u16 arg1, u32 arg2, u32 arg3, s32 arg4, s32 arg5) {
    s16 *var_r4;
    s16 *var_r6;
    u16 temp_r1;
    u16 var_r5;
    u32 var_r1;
    u32 var_r2;

    var_r4 = arg0;
    var_r5 = arg1;
    var_r6 = var_r4;
    var_r1 = 0;
    if (arg3 > 0U) {
        do {
            var_r2 = 0;
            if (arg2 > 0U) {
                do {
                    temp_r1 = var_r5;
                    var_r5 = temp_r1 + 1;
                    *var_r4 = temp_r1 | ((u16) arg4 << 0xC);
                    var_r4 += 2;
                    var_r2 += 1;
                } while (var_r2 < arg2);
            }
            var_r6 += arg5 * 2;
            var_r4 = var_r6;
            var_r1 += 1;
        } while (var_r1 < arg3);
    }
}
