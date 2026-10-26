u32 func_0809D79C(u32 arg1) {
    u32 var_r0;
    u32 var_r2;

    var_r0 = arg1;
    if (var_r0 > 9U) {
        var_r0 = 0x19;
        if (arg1 != 0xFF) {
            var_r0 = 0x18;
            if (arg1 <= 0x4FU) {
                var_r0 = 0xA;
                var_r2 = 0x13;
                if (arg1 >= 0x13U) {
                    if (arg1 == 0x13) {
                        return 0xBU;
                    }
loop_6:
                    var_r0 += 2;
                    var_r2 += 0xA;
                    if ((var_r2 <= 0x4FU) && (arg1 >= var_r2)) {
                        if (arg1 == var_r2) {
                            var_r0 += 1;
                        } else {
                            goto loop_6;
                        }
                    }
                    /* Duplicate return node #10. Try simplifying control flow for better match */
                    return var_r0;
                }
            }
        }
    }
    return var_r0;
}
