extern u8 gUnk_08100A36;

void func_08094994(s8 *arg1, u8 *arg2) {
    s8 *var_r2;
    u32 var_r5;
    u8 *var_r4;
    u8 temp_r1;
    u8 var_r3;

    var_r4 = arg2;
    var_r5 = 0;
    if (*var_r4 != 0) {
        var_r2 = arg1;
loop_2:
        temp_r1 = *var_r4;
        var_r4 += 1;
        var_r3 = 0;
        if (temp_r1 != gUnk_08100A36) {
loop_4:
            var_r3 += 1;
            if ((u32) var_r3 <= 0x60U) {
                if (temp_r1 == (&gUnk_08100A36)[var_r3]) {
                    goto block_6;
                }
                goto loop_4;
            }
            goto block_7;
        }
block_6:
        if ((u32) var_r3 > 0x60U) {
block_7:
            *var_r2 = 0;
        } else {
            *var_r2 = var_r3 + 1;
            var_r2 += 1;
            var_r5 += 1;
            if ((var_r5 <= 0xBU) && (*var_r4 != 0)) {
                goto loop_2;
            }
        }
    }
    if (var_r5 <= 0xCU) {
        do {
            *((u8 *)arg1 + var_r5) = 0;
            var_r5 += 1;
        } while (var_r5 <= 0xCU);
    }
}
