s32 func_080D3840(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_r4;
    u8 *var_r3;
    u8 *var_r5;
    u8 temp_r0;
    u8 temp_r1;
    s32 var_r2;

    var_r5 = arg0;
    var_r3 = arg1;
    var_r4 = arg2 - 1;
    if (arg2 != 0) {
        var_r2 = -1;
loop_2:
        temp_r1 = *var_r3;
        temp_r0 = *var_r5;
        var_r5 += 1;
        var_r3 += 1;
        if (temp_r1 != temp_r0) {
            return var_r3 - 1;
        }
        var_r4 -= 1;
        if (var_r4 != var_r2) {
            goto loop_2;
        }
    }
    return 0;
}
