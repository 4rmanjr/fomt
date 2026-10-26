s32 func_0809CD98(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_r2;
    s32 var_r6;
    u32 *temp_r1;
    u32 *temp_r1_2;
    u32 temp_r3;

    var_r6 = 0;
    temp_r2 = arg1 * 8;
    temp_r1 = arg0 + temp_r2;
    temp_r3 = *temp_r1;
    if (temp_r3 <= 0x3B9AC9FFU) {
        *temp_r1 = temp_r3 + 1;
    }
    temp_r1_2 = arg0 + 4 + temp_r2;
    if (arg2 > (u32) *temp_r1_2) {
        *temp_r1_2 = arg2;
        var_r6 = 1;
    }
    return var_r6;
}
