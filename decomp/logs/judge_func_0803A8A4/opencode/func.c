#include "common.h"
s32 func_0803A8A4(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    s32 var_r0;
    s32 var_r0_2;
    u32 temp_r1;
    u32 var_r4;

    temp_r1 = arg0 - 0x34;
    if (temp_r1 <= 0x1FFU) {
        if (arg0 > 0x133) {
            var_r4 = arg0 + 0xFFFFFECC;
            var_r0_2 = 1;
        } else {
            var_r4 = temp_r1;
            var_r0_2 = 0;
        }
        if (var_r4 == 0) {
            return 0x38;
        }
        if ((var_r4 == 9) && (var_r0_2 == 1)) {
            return 0x3D;
        }
        if ((var_r4 % 5U) == 0) {
            return 0x39;
        }
        if ((var_r4 % 3U) == 0) {
            return 0x3A;
        }
        return 0x3B;
    }
    switch ((u32) arg0) {                           /* switch 1; irregular */
    case 0x2:                                       /* switch 1 */
        if (arg1 != 3) {
            return 0;
        }
        return 1;
    case 0x6:                                       /* switch 1 */
        if (arg1 == 3) {
            return 3;
        }
        return 2;
    case 0x5:                                       /* switch 1 */
        if (arg1 == 3) {
            return 5;
        }
        return 4;
    case 0x7:                                       /* switch 1 */
        if (arg1 == 3) {
            return 7;
        }
        return 6;
    case 0x1:                                       /* switch 1 */
        if (arg1 == 3) {
            return 9;
        }
        return 8;
    case 0x3:                                       /* switch 1 */
        var_r0 = 0xD;
        if (arg1 != 3) {
            return 0xC;
        }
        return var_r0;
    case 0x4:                                       /* switch 1 */
        var_r0 = 0xB;
        if (arg1 != 3) {
            return 0xA;
        }
        /* Duplicate return node #96. Try simplifying control flow for better match */
        return var_r0;
    case 0x0:                                       /* switch 1 */
        var_r0 = 0xF;
        if (arg1 != 3) {
            return 0xE;
        }
        /* Duplicate return node #96. Try simplifying control flow for better match */
        return var_r0;
    case 0x8:                                       /* switch 1 */
        var_r0 = 0x11;
        if (arg1 != 3) {
            return 0x10;
        }
        /* Duplicate return node #96. Try simplifying control flow for better match */
        return var_r0;
    case 0x11:                                      /* switch 1 */
        switch (arg3) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            return 0x24;
        case 1:                                     /* switch 2 */
            return 0x25;
        }
        break;
    case 0x25:                                      /* switch 1 */
        switch (arg4) {                             /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            return 0x26;
        case 1:                                     /* switch 3 */
            return 0x27;
        }
        break;
    case 0x1D:                                      /* switch 1 */
        if (arg2 != 1) {
            if (arg2 >= 1U) {
                if (arg2 != 2) {
                default:                            /* switch 1 */
                    var_r0 = 0;
                    /* Duplicate return node #96. Try simplifying control flow for better match */
                    return var_r0;
                }
                return 0x2B;
            }
            return 0x29;
        }
        return 0x2A;
    case 0x1F:                                      /* switch 1 */
        return 0x12;
    case 0x20:                                      /* switch 1 */
        return 0x13;
    case 0x21:                                      /* switch 1 */
        return 0x14;
    case 0x22:                                      /* switch 1 */
        return 0x15;
    case 0x15:                                      /* switch 1 */
        return 0x16;
    case 0x16:                                      /* switch 1 */
        return 0x17;
    case 0x17:                                      /* switch 1 */
        return 0x18;
    case 0xF:                                       /* switch 1 */
        return 0x19;
    case 0x10:                                      /* switch 1 */
        return 0x1A;
    case 0x24:                                      /* switch 1 */
        return 0x1B;
    case 0xD:                                       /* switch 1 */
        return 0x1C;
    case 0x13:                                      /* switch 1 */
        return 0x1D;
    case 0x14:                                      /* switch 1 */
        return 0x1E;
    case 0xC:                                       /* switch 1 */
        return 0x1F;
    case 0x18:                                      /* switch 1 */
        return 0x20;
    case 0x19:                                      /* switch 1 */
        return 0x21;
    case 0x1A:                                      /* switch 1 */
        return 0x22;
    case 0x1B:                                      /* switch 1 */
        return 0x23;
    case 0x9:                                       /* switch 1 */
        return 0x28;
    case 0xA:                                       /* switch 1 */
        return 0x2C;
    case 0xB:                                       /* switch 1 */
        return 0x2D;
    case 0x29:                                      /* switch 1 */
        return 0x2E;
    case 0x2A:                                      /* switch 1 */
        return 0x2F;
    case 0x26:                                      /* switch 1 */
        return 0x30;
    case 0x28:                                      /* switch 1 */
        return 0x31;
    case 0x1E:                                      /* switch 1 */
        return 0x32;
    case 0xE:                                       /* switch 1 */
        return 0x33;
    case 0x1C:                                      /* switch 1 */
        return 0x34;
    case 0x12:                                      /* switch 1 */
        return 0x35;
    case 0x23:                                      /* switch 1 */
        return 0x36;
    case 0x27:                                      /* switch 1 */
        return 0x37;
    case 0x2B:                                      /* switch 1 */
        return 0x3C;
    case 0x30:                                      /* switch 1 */
        return 0x3E;
    case 0x31:                                      /* switch 1 */
        return 0x3F;
    case 0x32:                                      /* switch 1 */
        return 0x40;
    case 0x33:                                      /* switch 1 */
        return 0x41;
    case 0x2C:                                      /* switch 1 */
    case 0x2D:                                      /* switch 1 */
    case 0x2E:                                      /* switch 1 */
        return 0x10;
    case 0x2F:                                      /* switch 1 */
        return 0x11;
    }
}

