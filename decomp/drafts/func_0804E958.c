u32 func_0804E5AC(s32, s32, u32, s32, s32, s32, s32);   /* extern */

void func_0804E958(s32 arg0, ? arg1, u32 arg2, ? arg3, u8 *arg4, s32 arg5, s32 arg6) {
    s32 var_r5;
    s32 var_r5_2;
    u32 temp_r0;
    u32 var_r4;
    u8 *var_r6;
    u8 var_r0;

    var_r4 = arg2;
    var_r6 = arg4;
    var_r5 = 0;
    var_r0 = *var_r6;
loop_8:
    if ((var_r0 == 0) || (var_r4 >= (u32) ((u32) (arg0 << 0x10) >> 0xD))) {
        return;
    }
    var_r5_2 = var_r5 | var_r0;
    temp_r0 = func_0804E5AC(arg0, arg1, var_r4, arg3, var_r5_2, arg5, arg6);
    switch (temp_r0) {                              /* irregular */
    case 1:
        var_r5_2 = 0;
        var_r4 += 8;
    default:
block_7:
        var_r6 += 1;
        var_r0 = *var_r6;
        var_r5 = var_r5_2 << 8;
        goto loop_8;
    case 2:
        var_r5_2 = 0;
        var_r4 += 0x10;
        goto block_7;
    }
}
