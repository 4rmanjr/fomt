s32 func_080077DC(s32 *arg0, u32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    s32 var_r1;
    s32 temp_r2;
    s32 var_r1_2;
    s32 var_r4;

    var_r1 = 0;
    temp_r3 = *arg0;
    if ((temp_r3 + 1) == 0) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        goto block_ret20;
    }
    var_r0 = 0;
    if (temp_r3 == 0) {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        goto block_loop_setup;
    }
    *arg0 = temp_r3 | ((1 << (1 << arg1)) - 1);
    return 0;
block_store:
    *arg0 |= var_r1_2;
    return var_r4;
block_loop_setup:
    if (arg1 > 4U) {
        goto block_ret20;
    }
    temp_r2 = 1 << arg1;
    var_r4 = 0;
    var_r1_2 = (1 << temp_r2) - 1;
block_loop:
    if ((temp_r3 & var_r1_2) == 0) {
        goto block_store;
    }
    var_r4 += temp_r2;
    var_r1_2 <<= temp_r2;
    if (var_r1_2 != 0) {
        goto block_loop;
    }
block_ret20:
    return 0x20;
}
