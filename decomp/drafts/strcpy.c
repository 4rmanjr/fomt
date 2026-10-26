s32 strcpy(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r0;
    s32 var_r2;
    s32 var_r3;
    u8 temp_r0_2;

    var_r3 = arg0;
    var_r2 = arg1;
    if (!((var_r2 | arg0) & 3)) {
        temp_r1 = *var_r2;
        var_r0 = (temp_r1 + 0xFEFEFEFF) & ~temp_r1;
loop_3:
        if (!(var_r0 & 0x80808080)) {
            temp_r0 = *var_r2;
            var_r2 += 4;
            *var_r3 = temp_r0;
            var_r3 += 4;
            temp_r1_2 = *var_r2;
            var_r0 = (temp_r1_2 + 0xFEFEFEFF) & ~temp_r1_2;
            goto loop_3;
        }
    }
    do {
        temp_r0_2 = *var_r2;
        *var_r3 = temp_r0_2;
        var_r2 += 1;
        var_r3 += 1;
    } while ((temp_r0_2 << 0x18) != 0);
    return arg0;
}
