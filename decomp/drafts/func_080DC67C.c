u8 *func_080DC67C(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 temp_r0;
    s32 var_r2;
    u8 *var_r3;
    u8 temp_r1;

    var_r3 = arg0;
    var_r2 = (s32) (arg1 - var_r3) >> 2;
    if (var_r2 > 0) {
        temp_r1 = *arg2;
loop_2:
        if (*var_r3 != temp_r1) {
            var_r3 += 1;
            if (*var_r3 != temp_r1) {
                var_r3 += 1;
                if (*var_r3 != temp_r1) {
                    var_r3 += 1;
                    if (*var_r3 != temp_r1) {
                        var_r3 += 1;
                        var_r2 -= 1;
                        if (var_r2 <= 0) {
                            goto block_7;
                        }
                        goto loop_2;
                    }
                }
            }
        }
        goto block_16;
    }
block_7:
    temp_r0 = arg1 - var_r3;
    switch (temp_r0) {                              /* irregular */
    case 3:
        if (*var_r3 != *arg2) {
            var_r3 += 1;
        case 2:
            if (*var_r3 != *arg2) {
                var_r3 += 1;
            case 1:
                if (*var_r3 == *arg2) {
                    goto block_16;
                }
            default:
                return arg1;
            }
            goto block_16;
        }
block_16:
        return var_r3;
    }
}
