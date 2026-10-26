s32 strlen(s32 arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;

    var_r1 = arg0;
    temp_r5 = var_r1;
    if (!(3 & var_r1)) {
        var_r2 = var_r1;
        temp_r1 = *var_r2;
        var_r0 = (temp_r1 + 0xFEFEFEFF) & ~temp_r1;
loop_3:
        if (!(var_r0 & 0x80808080)) {
            var_r2 += 4;
            temp_r1_2 = *var_r2;
            var_r0 = (temp_r1_2 + 0xFEFEFEFF) & ~temp_r1_2;
            goto loop_3;
        }
        var_r1 = var_r2;
    }
loop_6:
    if (*var_r1 != 0) {
        var_r1 += 1;
        goto loop_6;
    }
    return var_r1 - temp_r5;
}
