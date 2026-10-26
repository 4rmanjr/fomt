s32 func_0809E8E4(s32, s32);                        /* extern */

s32 func_080E3E9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;

    var_r4 = arg0;
    var_r5 = (s32) (arg1 - var_r4) >> 5;
    if (var_r5 > 0) {
loop_1:
        if ((func_0809E8E4(var_r4, arg2) << 0x18) == 0) {
            var_r4 += 8;
            if ((func_0809E8E4(var_r4, arg2) << 0x18) == 0) {
                var_r4 += 8;
                if ((func_0809E8E4(var_r4, arg2) << 0x18) == 0) {
                    var_r4 += 8;
                    if ((func_0809E8E4(var_r4, arg2) << 0x18) == 0) {
                        var_r4 += 8;
                        var_r5 -= 1;
                        if (var_r5 <= 0) {
                            goto block_6;
                        }
                        goto loop_1;
                    }
                }
            }
        }
        goto block_15;
    }
block_6:
    temp_r0 = (s32) (arg1 - var_r4) >> 3;
    switch (temp_r0) {                              /* irregular */
    case 3:
        if ((func_0809E8E4(var_r4, arg2) << 0x18) == 0) {
            var_r4 += 8;
        case 2:
            if ((func_0809E8E4(var_r4, arg2) << 0x18) == 0) {
                var_r4 += 8;
            case 1:
                if ((func_0809E8E4(var_r4, arg2) << 0x18) != 0) {
                    goto block_15;
                }
            default:
                return arg1;
            }
            goto block_15;
        }
block_15:
        return var_r4;
    }
}
