s32 func_080A3618(?, s32, s32, s32, s32);               /* extern */

void func_080A3588(s32 arg0, s32 arg1, ? arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_r7 = arg1;
    var_r6 = arg3;
    var_r8 = 0;
    if (arg4 <= 1) {
        goto block_4;
    }
    var_r4 = arg4 - 1;
    var_r5 = 0xA;
    if (var_r4 <= 1) {
        goto block_3;
    }
loop_2:
    var_r5 *= 0xA;
    var_r4 -= 1;
    if (var_r4 > 1) {
        goto loop_2;
    }
block_3:
    var_r4_2 = var_r5;
    goto block_11;
block_4:
    var_r4_2 = 1;
block_5:
    if (var_r4_2 != 1) {
        goto block_7;
    }
    var_r8 = 1;
block_7:
    temp_r0 = var_r6 / var_r4_2;
    if (temp_r0 != 0) {
        goto block_9;
    }
    if (var_r8 == 0) {
        goto block_10;
    }
block_9:
    func_080A3618(arg0, var_r7, arg2, temp_r0, arg5);
    var_r8 = 1;
block_10:
    var_r7 += 0x10;
    var_r6 -= var_r4_2 * temp_r0;
    var_r4_2 = var_r4_2 / 10;
block_11:
    if (var_r4_2 > 0) {
        goto block_5;
    }
    return;
}
