void func_080700B8(s32 arg1, u32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp0;
    u16 *temp_r0;
    u32 temp_r1;
    u32 temp_r6;
    u32 var_r2;
    u32 var_r3;

    var_r3 = arg3;
    sp0 = arg1;
    temp_r6 = arg2 + arg4;
    temp_r1 = arg5 + var_r3;
    if (var_r3 < temp_r1) {
        do {
            var_r2 = arg2;
            if (var_r2 < temp_r6) {
                do {
                    temp_r0 = ((sp0 + (((var_r3 >> 5) * 2) + (var_r2 >> 5))) << 0xB) + (((var_r3 & 0x1F) << 6) + 0x06000000) + ((var_r2 & 0x1F) * 2);
                    *temp_r0 = (*temp_r0 & 0xFFF) | ((arg6 << 0xC) & 0xF000);
                    var_r2 += 1;
                } while (var_r2 < temp_r6);
            }
            var_r3 += 1;
        } while (var_r3 < temp_r1);
    }
}
