void func_0804EDB4(u32 arg0, s16 *arg1, u16 arg2, s32 arg3, s32 arg4) {
    s16 *var_r5;
    s32 temp_r1;
    u32 temp_r6;
    u32 var_r4;
    u32 q;
    u16 a2;

    var_r4 = arg0;
    a2 = arg2;
    temp_r6 = (u32) (arg3 << 0x10) >> 4;
    var_r5 = arg1;
    do {
        q = var_r4 / 10U;
        temp_r1 = a2 + ((var_r4 - (q * 10)) * 2);
        *var_r5 = temp_r6 | temp_r1;
        *(var_r5 + arg4) = (temp_r1 + 1) | temp_r6;
        var_r4 = q;
        var_r5 -= 1;
    } while (var_r4 != 0);
}
