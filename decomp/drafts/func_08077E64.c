void func_08077E64(s32 dummy, s32 arg1, u32 arg2, u32 arg3, s32 arg4, s32 arg5, u16 *arg6) {
    s32 _d = dummy;
    u16 *var_r2;
    u16 *var_r3_2;
    u32 temp_r1;
    u32 temp_r5;
    u32 var_r1;
    u32 var_r3;

    var_r3 = arg3;
    var_r2 = arg6;
    temp_r5 = arg2 + arg4;
    temp_r1 = arg5 + var_r3;
    _d = _d;
    if (var_r3 < temp_r1) {
        do {
            var_r1 = arg2;
            if (var_r1 < temp_r5) {
                var_r3_2 = (arg2 * 2) + ((var_r3 << 6) + 0x06000000 + (arg1 << 0xB));
                do {
                    *var_r3_2 = *var_r2;
                    var_r2 += 2;
                    var_r3_2 += 2;
                    var_r1 += 1;
                } while (var_r1 < temp_r5);
            }
            var_r3 += 1;
        } while (var_r3 < temp_r1);
    }
}

/* ATTEMPT-NOTE opencode: dummy agar r4=arg1 + stack offset pas; sisa arg2 di r6 (ref r7); _e-var/self-assign dicoba. */
