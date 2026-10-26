void sub_080D14C6(s32 arg1, s32 arg2) {
    s32 var_r1;
    s32 var_r6;
    u16 var_r4;
    u32 temp_r4;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_r6 = saved_reg_r6;
    var_r1 = arg1;
    if ((s32) (var_r1 << 0x1F) >= 0) {
        goto block_2;
    }
    var_r4 = (arg2 << 8) | arg2;
    var_r1 += 1;
    var_r6 = saved_reg_r6 + 1;
    goto block_4;
block_2:
    temp_r4 = (u16) *var_r1 >> 8;
    var_r4 = temp_r4 | (temp_r4 << 8);
block_3:
    var_r1 += 2;
block_4:
    *var_r1 = var_r4;
    var_r6 -= 2;
    if ((s64) var_r6 > 0) {
        goto block_3;
    }
    return;
}
