u32 func_0809D470(u32 arg1) {
    u32 var_r0;

    switch (arg1) {                                 /* irregular */
    case 0x14:
        return 0xCU;
    case 0x1E:
        return 0xEU;
    case 0x28:
        return 0x10U;
    case 0x98:
    case 0xBE:
    case 0xDE:
    case 0xCA:
    case 0x9B:
    case 0xAB:
    case 0x66:
    case 0x7B:
    case 0x3C:
        return 0x12U;
    case 0xFF:
        return 0x14U;
    default:
        var_r0 = arg1;
        if (var_r0 > 0xAU) {
            var_r0 = 0xB;
            if (arg1 > 0x13U) {
                var_r0 = 0xD;
                if (arg1 > 0x1DU) {
                    var_r0 = 0xF;
                    if (arg1 > 0x27U) {
                        var_r0 = 0x13;
                        if (arg1 <= 0xE6U) {
                            var_r0 = 0x11;
                        }
                    }
                }
            }
        }
        return var_r0;
    }
}
