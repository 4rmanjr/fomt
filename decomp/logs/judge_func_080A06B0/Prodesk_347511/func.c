#include "common.h"
s32 func_080A0A04(s32);                             /* extern */

s32 func_080A06B0(s32 arg0, s32 arg1) {
    s32 var_r1;
    u32 temp_r0;

    temp_r0 = arg1 - 1;
    switch (temp_r0) {
    default:
        return 0;
    case 34:
        return func_080A0A04(arg0);
    case 0:
        return arg0 + 0x70;
    case 1:
        return arg0 + 0x84;
    case 2:
        return arg0 + 0x98;
    case 3:
        return arg0 + 0xB0;
    case 4:
        return arg0 + 0xC4;
    case 5:
        return arg0 + 0xD8;
    case 6:
        return arg0 + 0xF0;
    case 7:
        var_r1 = 0x104;
block_45:
        return arg0 + var_r1;
    case 8:
        var_r1 = 0x118;
        goto block_45;
    case 9:
        var_r1 = 0x12C;
        goto block_45;
    case 10:
        var_r1 = 0x140;
        goto block_45;
    case 11:
        var_r1 = 0x154;
        goto block_45;
    case 12:
        var_r1 = 0x16C;
        goto block_45;
    case 13:
        var_r1 = 0x180;
        goto block_45;
    case 14:
        var_r1 = 0x194;
        goto block_45;
    case 15:
        var_r1 = 0x1A8;
        goto block_45;
    case 16:
        var_r1 = 0x1BC;
        goto block_45;
    case 17:
        var_r1 = 0x1D0;
        goto block_45;
    case 18:
        var_r1 = 0x1E4;
        goto block_45;
    case 19:
        var_r1 = 0x1FC;
        goto block_45;
    case 20:
        var_r1 = 0x210;
        goto block_45;
    case 21:
        var_r1 = 0x228;
        goto block_45;
    case 22:
        var_r1 = 0x23C;
        goto block_45;
    case 23:
        var_r1 = 0x250;
        goto block_45;
    case 24:
        var_r1 = 0x264;
        goto block_45;
    case 25:
        var_r1 = 0x27C;
        goto block_45;
    case 26:
        var_r1 = 0x290;
        goto block_45;
    case 27:
        var_r1 = 0x2A8;
        goto block_45;
    case 28:
        var_r1 = 0x2BC;
        goto block_45;
    case 29:
        var_r1 = 0x2D0;
        goto block_45;
    case 30:
        var_r1 = 0x2E4;
        goto block_45;
    case 31:
        var_r1 = 0x2FC;
        goto block_45;
    case 32:
        var_r1 = 0x310;
        goto block_45;
    case 33:
        var_r1 = 0x328;
        goto block_45;
    case 35:
        var_r1 = 0x33C;
        goto block_45;
    case 36:
        var_r1 = 0x360;
        goto block_45;
    case 37:
        var_r1 = 0x384;
        goto block_45;
    case 38:
        var_r1 = 0x3A8;
        goto block_45;
    case 39:
        var_r1 = 0x3CC;
        goto block_45;
    case 40:
        var_r1 = 0x3F0;
        goto block_45;
    case 41:
        var_r1 = 0x414;
        goto block_45;
    }
}

