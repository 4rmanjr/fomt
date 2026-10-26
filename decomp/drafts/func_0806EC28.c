void func_0806EC28(s32 arg1, u32 arg2, u32 arg3, s32 arg4, s32 arg5, u16 *arg6) {
    u16 *var_r4;
    u32 temp_r1;
    u32 temp_r7;
    u32 var_r2;
    u32 var_r3;

    var_r3 = arg3;
    var_r4 = arg6;
    temp_r7 = arg2 + arg4;
    temp_r1 = arg5 + var_r3;
    if (var_r3 < temp_r1) {
        do {
            var_r2 = arg2;
            if (var_r2 < temp_r7) {
                do {
                    *(((((var_r3 >> 5) * 2) + (var_r2 >> 5) + arg1) << 0xB) + (((var_r3 & 0x1F) << 6) + 0x06000000) + ((var_r2 & 0x1F) * 2)) = *var_r4;
                    var_r4 += 2;
                    var_r2 += 1;
                } while (var_r2 < temp_r7);
            }
            var_r3 += 1;
        } while (var_r3 < temp_r1);
    }
}
