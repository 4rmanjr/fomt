void func_08094974(s32 arg1, s32 arg2, u32 arg3) {
    u32 var_r2;

    var_r2 = 0;
    if (arg3 > 0U) {
        do {
            *((u8 *)arg1 + var_r2) = *((u8 *)arg2 + var_r2);
            var_r2 += 1;
        } while (var_r2 < arg3);
    }
}
