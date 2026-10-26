s32 func_080077DC(s32 *arg0, u32 arg1) {
    s32 temp_r2;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r4;

    var_r1 = 0;
    temp_r3 = *arg0;
    if ((temp_r3 + 1) == 0) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        var_r0 = 0;
        if (temp_r3 == 0) {
            var_r0 = 1;
        }
        if (var_r0 != 0) {
            *arg0 = temp_r3 | ((1 << (1 << arg1)) - 1);
            return 0;
        }
        if (arg1 <= 4U) {
            temp_r2 = 1 << arg1;
            var_r4 = 0;
            var_r1_2 = (1 << temp_r2) - 1;
loop_10:
            if (temp_r3 & var_r1_2) {
                var_r4 += temp_r2;
                var_r1_2 <<= temp_r2;
                if (var_r1_2 == 0) {
                    goto block_12;
                }
                goto loop_10;
            }
            *arg0 |= var_r1_2;
            return var_r4;
        }
        goto block_12;
    }
block_12:
    return 0x20;
}
