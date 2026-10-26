#include "common.h"
s32 SubtractFriendship__3Npci(s32, s32);              /* extern */
s32 SubtractLove__12Bachelorettei(s32, s32);          /* extern */
s32 func_080A06B0(s32, u32);                        /* extern */
s32 func_080A0878(s32, u32);                        /* extern */

void func_080A1484(s32 arg0, u16 *arg1, void *arg2) {
    s32 temp_r0_2;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r4;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 var_r0;
    u32 var_r5;

    temp_r0 = (u32) (*arg1 << 0x16) >> 0x16;
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 7:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
        var_r5 = 1;
        do {
            var_r1 = 1;
            switch (var_r5) {                       /* switch 2; irregular */
            case 34:                                /* switch 2 */
                var_r0 = arg2->unk3B << 0x1B;
block_11:
                if ((var_r0 >> 0x1E) != 2) {

                } else {
                default:                            /* switch 2 */
block_14:
                    if (var_r1 != 0) {
                        temp_r0_2 = func_080A06B0(arg0, var_r5);
                        if (temp_r0_2 != 0) {
                            SubtractFriendship__3Npci(temp_r0_2, 1);
                        }
                    }
                }
                break;
            case 33:                                /* switch 2 */
                var_r0 = arg2->unk3A << 0x19;
                goto block_11;
            case 32:                                /* switch 2 */
                var_r1 = 0;
                goto block_14;
            }
            temp_r0_3 = var_r5 - 3;
            switch (temp_r0_3) {                    /* switch 3 */
            case 0:                                 /* switch 3 */
            case 9:                                 /* switch 3 */
            case 16:                                /* switch 3 */
            case 18:                                /* switch 3 */
            case 22:                                /* switch 3 */
            case 28:                                /* switch 3 */
                SubtractLove__12Bachelorettei(func_080A0878(arg0, var_r5), 0xC8);
                break;
            }
            var_r5 += 1;
        } while (var_r5 <= 0x2AU);
        return;
    case 10:                                        /* switch 1 */
    case 11:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x70, 5);
        SubtractFriendship__3Npci(arg0 + 0x84, 5);
        var_r4 = arg0 + 0x98;
block_31:
        SubtractFriendship__3Npci(var_r4, 5);
        SubtractLove__12Bachelorettei(var_r4, 0x1F4);
        return;
    case 12:                                        /* switch 1 */
        var_r1_2 = 0x228;
block_38:
        var_r0_2 = arg0 + var_r1_2;
block_39:
        SubtractFriendship__3Npci(var_r0_2, 5);
        return;
    case 13:                                        /* switch 1 */
        var_r1_2 = 0x2A8;
        goto block_38;
    case 14:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x194, 5);
        SubtractFriendship__3Npci(arg0 + 0x1A8, 5);
        var_r0_3 = 0x210;
block_30:
        var_r4 = arg0 + var_r0_3;
        goto block_31;
    case 15:                                        /* switch 1 */
    case 16:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x1BC, 5);
        SubtractFriendship__3Npci(arg0 + 0x1D0, 5);
        var_r0_3 = 0x1E4;
        goto block_30;
    case 19:                                        /* switch 1 */
    case 20:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x1FC, 5);
        var_r0_3 = 0x210;
        goto block_30;
    case 21:                                        /* switch 1 */
    case 22:                                        /* switch 1 */
    case 23:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x250, 5);
        var_r0_3 = 0x264;
        goto block_30;
    case 24:                                        /* switch 1 */
    case 25:                                        /* switch 1 */
    case 26:                                        /* switch 1 */
    case 27:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x12C, 5);
        SubtractFriendship__3Npci(arg0 + 0x140, 5);
        var_r0_3 = 0x154;
        goto block_30;
    case 28:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x33C, 5);
        SubtractFriendship__3Npci(arg0 + 0x360, 5);
        SubtractFriendship__3Npci(arg0 + 0x384, 5);
        SubtractFriendship__3Npci(arg0 + 0x3A8, 5);
        SubtractFriendship__3Npci(arg0 + 0x3CC, 5);
        SubtractFriendship__3Npci(arg0 + 0x3F0, 5);
        var_r1_2 = 0x414;
        goto block_38;
    case 30:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x16C, 5);
        var_r1_2 = 0x180;
        goto block_38;
    case 31:                                        /* switch 1 */
    case 32:                                        /* switch 1 */
    case 33:                                        /* switch 1 */
    case 34:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0x104, 5);
        var_r1_2 = 0x118;
        goto block_38;
    case 36:                                        /* switch 1 */
        var_r1_2 = 0x27C;
        goto block_38;
    case 38:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0xD8, 5);
        var_r0_2 = arg0 + 0xF0;
        goto block_39;
    case 40:                                        /* switch 1 */
        var_r1_2 = 0x290;
        goto block_38;
    case 41:                                        /* switch 1 */
    case 42:                                        /* switch 1 */
        SubtractFriendship__3Npci(arg0 + 0xB0, 5);
        SubtractFriendship__3Npci(arg0 + 0xC4, 5);
        /* fallthrough */
        return;
    }
}

