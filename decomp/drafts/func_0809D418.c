s32 func_0809D418(u32 arg1) {
    s32 var_r0;
    u32 var_r2;
    u32 var_r2_2;

    var_r0 = 0;
    if (arg1 != 0) {
        if (arg1 <= 9U) {
            return 1;
        }
        if (arg1 <= 0x63U) {
            var_r0 = 2;
            var_r2 = 0x14;
            if (arg1 >= 0x14U) {
loop_5:
                var_r0 += 1;
                var_r2 += 0x14;
                if (var_r2 <= 0x63U) {
                    if (arg1 < var_r2) {
                        return var_r0;
                    }
                    goto loop_5;
                }
                /* Duplicate return node #17. Try simplifying control flow for better match */
                return var_r0;
            }
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return var_r0;
        }
        if (arg1 == 0x64) {
            return 7;
        }
        if (arg1 <= 0xF9U) {
            var_r0 = 8;
            var_r2_2 = 0x82;
            if (arg1 >= 0x82U) {
loop_12:
                var_r0 += 1;
                var_r2_2 += 0x1E;
                if (var_r2_2 <= 0xF9U) {
                    if (arg1 < var_r2_2) {
                        return var_r0;
                    }
                    goto loop_12;
                }
                /* Duplicate return node #17. Try simplifying control flow for better match */
                return var_r0;
            }
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return var_r0;
        }
        var_r0 = 0xE;
        if (arg1 <= 0xFEU) {
            var_r0 = 0xD;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return var_r0;
    }
    return var_r0;
}
