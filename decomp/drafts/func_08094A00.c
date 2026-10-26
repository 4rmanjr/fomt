extern ? gUnk_08100A36;

void func_08094A00(u8 *arg1, u8 *arg2) {
    s32 var_r3;
    u32 var_r0;
    u8 *var_r1;
    u8 temp_r0;
    u8 temp_r0_2;

    var_r1 = arg1;
    var_r3 = 0;
    temp_r0 = *arg2;
    if (temp_r0 != 0) {
        var_r0 = temp_r0 - 1;
        if (var_r0 <= 0x60U) {
loop_3:
            *var_r1 = *(var_r0 + &gUnk_08100A36);
            var_r1 += 1;
            var_r3 += 1;
            if (var_r3 <= 0xB) {
                temp_r0_2 = *(arg2 + var_r3);
                if (temp_r0_2 != 0) {
                    var_r0 = temp_r0_2 - 1;
                    if (var_r0 <= 0x60U) {
                        goto loop_3;
                    }
                }
            }
        }
    }
    *var_r1 = 0;
}
