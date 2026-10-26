s32 strcpy(u8 *, s32);                                /* extern */

s32 strcat(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r2;

    var_r2 = arg0;
    temp_r4 = var_r2;
    if (!(3 & temp_r4)) {
        temp_r1 = *temp_r4;
        var_r0 = (temp_r1 + 0xFEFEFEFF) & ~temp_r1;
loop_3:
        if (!(var_r0 & 0x80808080)) {
            var_r2 += 4;
            temp_r1_2 = *var_r2;
            var_r0 = (temp_r1_2 + 0xFEFEFEFF) & ~temp_r1_2;
            goto loop_3;
        }
    }
loop_6:
    if (*var_r2 != 0) {
        var_r2 += 1;
        goto loop_6;
    }
    strcpy((u8 *) var_r2, arg1);
    return temp_r4;
}
