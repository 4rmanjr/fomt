#include "common.h"
s32 func_0807A2AC(void *arg0, u32 arg1) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r6;
    u32 temp_r0;
    u32 var_r4;

    var_r6 = 0;
    temp_r0 = arg1 / 10U;
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_r1 = 0x21AC;
block_38:
        var_r4 = (u32) (*(arg0->unk8 + var_r1) << 0x1E) >> 0x1E;
        break;
    case 1:
        var_r1_2 = 0x21AC;
block_40:
        var_r4 = (u32) (*(arg0->unk8 + var_r1_2) << 0x1C) >> 0x1E;
        break;
    case 2:
        var_r1_3 = 0x21AC;
block_43:
        var_r4 = (u32) (*(arg0->unk8 + var_r1_3) << 0x1A) >> 0x1E;
        break;
    case 3:
        var_r1_4 = 0x21AC;
block_36:
        var_r4 = (u8) *(arg0->unk8 + var_r1_4) >> 6;
        break;
    case 4:
        var_r1 = 0x21AD;
        goto block_38;
    case 5:
        var_r1_2 = 0x21AD;
        goto block_40;
    case 6:
        var_r1_3 = 0x21AD;
        goto block_43;
    case 7:
        var_r1_4 = 0x21AD;
        goto block_36;
    case 8:
        var_r1 = 0x21AE;
        goto block_38;
    case 9:
        var_r1_2 = 0x21AE;
        goto block_40;
    case 10:
        var_r1_3 = 0x21AE;
        goto block_43;
    case 11:
        var_r1_4 = 0x21AE;
        goto block_36;
    case 12:
        var_r1 = 0x21AF;
        goto block_38;
    case 13:
        var_r1_2 = 0x21AF;
        goto block_40;
    case 14:
        var_r1_3 = 0x21AF;
        goto block_43;
    case 15:
        var_r1_4 = 0x21AF;
        goto block_36;
    case 16:
        var_r1 = 0x21B0;
        goto block_38;
    case 17:
        var_r1_2 = 0x21B0;
        goto block_40;
    case 18:
        var_r1_3 = 0x21B0;
        goto block_43;
    case 19:
        var_r1_4 = 0x21B0;
        goto block_36;
    case 20:
        var_r1 = 0x21B1;
        goto block_38;
    case 21:
        var_r1_2 = 0x21B1;
        goto block_40;
    case 22:
        var_r1_3 = 0x21B1;
        goto block_43;
    case 23:
        var_r1_4 = 0x21B1;
        goto block_36;
    case 24:
        var_r1 = 0x21B2;
        goto block_38;
    case 25:
        var_r1_2 = 0x21B2;
        goto block_40;
    case 26:
        var_r1_3 = 0x21B2;
        goto block_43;
    case 27:
        var_r1_4 = 0x21B2;
        goto block_36;
    case 28:
        var_r1 = 0x21B3;
        goto block_38;
    case 29:
        var_r1_2 = 0x21B3;
        goto block_40;
    case 30:
        var_r1_3 = 0x21B3;
        goto block_43;
    case 31:
        var_r1_4 = 0x21B3;
        goto block_36;
    case 32:
        var_r1_4 = 0x21AB;
        goto block_36;
    case 33:
        var_r1 = 0x21B4;
        goto block_38;
    case 34:
        var_r1_2 = 0x21B4;
        goto block_40;
    case 35:
        var_r1_3 = 0x21B4;
        goto block_43;
    case 36:
        var_r1_3 = 0x21AB;
        goto block_43;
    default:
        var_r4 = 0;
        break;
    }
    if (var_r4 <= (u32) (arg1 % 10U)) {
        var_r6 = 1;
    }
    return var_r6;
}

