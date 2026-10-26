u8 func_080003A0(s32 *);                              /* extern */
s32 func_08000640(s32 *);                               /* extern */
s32 func_080024E0(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08008B88(void *, s32);                       /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 rand();                                           /* extern */

s32 sub_080010BE(u16 arg4, void *arg5, ? arg6, s32 arg8, s32 arg9, s32 argA, s32 argB) {
    s16 *var_r1;
    s16 *var_r1_3;
    s16 temp_r0;
    s32 *var_r0;
    s32 *var_r1_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 var_r0_2;
    s32 var_r2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r6;
    s32 var_r8;
    s32 var_sb;
    s32 var_sl;
    s8 *var_r1_4;
    s8 temp_r0_11;
    s8 var_r0_3;
    u16 temp_r0_2;
    u16 temp_r1_10;
    u16 temp_r1_11;
    u16 temp_r1_12;
    u16 temp_r1_9;
    u8 temp_r0_7;
    u8 temp_r1_3;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;

    var_r6 = saved_reg_r6;
    var_r8 = saved_reg_r8;
    var_sb = saved_reg_r9;
    var_sl = saved_reg_r10;
    rand();
    func_080087C8(saved_reg_r7);
    func_080088B8(saved_reg_r7);
    if (arg8 == 0) {
        var_r4 = 0;
        if ((func_080088CC(saved_reg_r7) & 1) || (func_080088CC(saved_reg_r7) & 2) || (func_080088CC(saved_reg_r7) & 8)) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            saved_reg_r7->unk6D32 = 0xBU;
        }
    }
    temp_r0 = saved_reg_r7->unk6D32 - 3;
    switch ((u32) temp_r0) {                        /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_r1 = arg5->unk0;
        if ((s32) ((0 - temp_r1) | temp_r1) < 0) {

        } else {
            saved_reg_r7->unk6D32 = 4U;
        }
        break;
    case 1:                                         /* switch 1 */
        temp_r0_2 = saved_reg_r7->unk6D30 - 1;
        saved_reg_r7->unk6D30 = temp_r0_2;
        if ((s32) (temp_r0_2 << 0x10) < 0) {
            saved_reg_r7->unk6D30 = 0U;
        }
        temp_r1_2 = saved_reg_r7->unk6AB8 + 0xFFFF5000;
        saved_reg_r7->unk6AB8 = temp_r1_2;
        if (temp_r1_2 <= 0x6FFFFF) {
            saved_reg_r7->unk6AB8 = 0x700000;
        }
        if ((s16) saved_reg_r7->unk6D30 != 0) {

        } else if (saved_reg_r7->unk6AB8 != 0x700000) {

        } else {
            func_0805E860(saved_reg_r7 + 0x6AA0, 0x194);
            saved_reg_r7->unk6D2C = 0x5A;
            saved_reg_r7->unk6D32 = 5U;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_r0_3 = saved_reg_r7->unk6D2C - 1;
        saved_reg_r7->unk6D2C = temp_r0_3;
        if (temp_r0_3 != 0x1E) {
            if (temp_r0_3 == 0x3C) {
                func_0805E860(saved_reg_r7 + 0x6AA0, 0x192);
            }
        } else {
            func_0805E860(saved_reg_r7 + 0x6AA0, 0x195);
        }
        if ((s32) saved_reg_r7->unk6D2C > 0) {

        } else {
            func_0805E860(saved_reg_r7 + 0x6AA0, 0x1FD);
            func_08008B6C(saved_reg_r7 + 0xC, 0x67);
            saved_reg_r7->unk6D32 = 6U;
        }
        break;
    case 3:                                         /* switch 1 */
        if ((s32) (saved_reg_r7->unk6AB4 << 0x1D) >= 0) {

        } else {
            func_0805E860(saved_reg_r7 + 0x6AA0, 0x195);
            var_sl = 1;
            var_r8 = 1;
            saved_reg_r7->unk6D32 = 7U;
        }
        break;
    case 4:                                         /* switch 1 */
        temp_r0_4 = saved_reg_r7->unk6AD8 + 0xFFFEC000;
        saved_reg_r7->unk6AD8 = temp_r0_4;
        if (temp_r0_4 > 0x800000) {

        } else {
            saved_reg_r7->unk6D2C = 0x3C;
            func_0805E860(saved_reg_r7 + 0x6AA0, 0x1C2);
            var_r6 = 1;
            saved_reg_r7->unk6AD8 = 0x800000;
            saved_reg_r7->unk6D32 = 8U;
        }
        break;
    case 5:                                         /* switch 1 */
        temp_r0_5 = saved_reg_r7->unk6D2C - 1;
        saved_reg_r7->unk6D2C = temp_r0_5;
        if (temp_r0_5 > 0) {

        } else {
            saved_reg_r7->unk6D32 = 9U;
        }
        break;
    case 6:                                         /* switch 1 */
        temp_r0_6 = saved_reg_r7->unk6BBC + 0x18000;
        saved_reg_r7->unk6BBC = temp_r0_6;
        if (temp_r0_6 < 0) {

        } else {
            saved_reg_r7->unk6BBC = 0;
            saved_reg_r7->unk6C6C = 1U;
            arg9 = 1;
            var_r6 = 3;
            saved_reg_r7->unk6D32 = 0xAU;
        }
        break;
    case 7:                                         /* switch 1 */
        saved_reg_r7->unk6C64 = (u16) (saved_reg_r7->unk6C64 - 0x10);
        saved_reg_r7->unk6C6A = (u16) (saved_reg_r7->unk6C6A - 0x10);
        if ((s16) saved_reg_r7->unk6C64 != 0x100) {

        } else {
            arg8 = 1;
            var_r1 = saved_reg_r7 + 0x6D32;
block_45:
            *var_r1 = 0xC;
        }
        break;
    case 8:                                         /* switch 1 */
        saved_reg_r7->unk6D30 = 0U;
        saved_reg_r7->unk6AB8 = 0x700000;
        func_0805E860(saved_reg_r7 + 0x6AA0, 0x192);
        func_0805E860(saved_reg_r7 + 0x6AC0, 0x338);
        saved_reg_r7->unk6AD8 = 0x800000;
        arg9 = 0;
        var_r6 = 0;
        var_sl = 2;
        var_r8 = 2;
        saved_reg_r7->unk6C6C = 9U;
        saved_reg_r7->unk6BBC = 0;
        saved_reg_r7->unk6C64 = 0x100U;
        saved_reg_r7->unk6C6A = 0x100U;
        arg8 = 1;
        var_r1 = saved_reg_r7 + 0x6D32;
        goto block_45;
    case 9:                                         /* switch 1 */
        func_08000640(&arg6);
        temp_r0_7 = func_080003A0(&arg6);
        if (temp_r0_7 == 0) {
            saved_reg_r7->unk6C6D = 1U;
            saved_reg_r7->unk6C6E = temp_r0_7;
            var_r4_2 = 0x500000;
            saved_reg_r7->unk6BF8 = 0x500000;
            func_0805E860(saved_reg_r7 + 0x6BE0, 2);
            var_r0 = saved_reg_r7 + 0x6C58;
        } else {
            saved_reg_r7->unk6C6D = 2U;
            saved_reg_r7->unk6C6E = 1U;
            saved_reg_r7->unk6BF8 = 0x180000;
            var_r4_2 = 0x880000;
            saved_reg_r7->unk6C18 = 0x880000;
            func_0805E860(saved_reg_r7 + 0x6C00, 5);
            var_r0 = saved_reg_r7 + 0x6C58;
        }
        *var_r0 = var_r4_2;
        saved_reg_r7->unk6D2C = 0x924;
        saved_reg_r7->unk6D32 = 0xDU;
        break;
    case 10:                                        /* switch 1 */
        if ((s8) saved_reg_r7->unk6C6D == 2) {
            var_r4_3 = 0;
            if ((func_080088CC(saved_reg_r7) & 0x20) || (func_080088CC(saved_reg_r7) & 0x10)) {
                var_r4_3 = 1;
            }
            if (var_r4_3 != 0) {
                temp_r1_3 = saved_reg_r7->unk6C6E ^ 1;
                saved_reg_r7->unk6C6E = temp_r1_3;
                if (temp_r1_3 == 0) {
                    func_0805E860(saved_reg_r7 + 0x6BE0, 2);
                    func_0805E860(saved_reg_r7 + 0x6C00, 4);
                    var_r1_2 = saved_reg_r7 + 0x6C58;
                    var_r0_2 = 0x180000;
                } else {
                    func_0805E860(saved_reg_r7 + 0x6BE0, 1);
                    func_0805E860(saved_reg_r7 + 0x6C00, 5);
                    var_r1_2 = saved_reg_r7 + 0x6C58;
                    var_r0_2 = 0x880000;
                }
                *var_r1_2 = var_r0_2;
                saved_reg_r7->unk6D2C = 0x708;
                func_08008B6C(saved_reg_r7 + 0xC, 0xCB);
            }
        }
        var_r4_4 = 0;
        if ((func_080088CC(saved_reg_r7) & 1) || (func_080088CC(saved_reg_r7) & 8)) {
            var_r4_4 = 1;
        }
        if (var_r4_4 != 0) {
            if ((s8) saved_reg_r7->unk6C6E == 0) {
                func_0805E860(saved_reg_r7 + 0x6BE0, 3);
            } else {
                func_0805E860(saved_reg_r7 + 0x6C00, 6);
            }
            saved_reg_r7->unk6D2C = 0x3C;
            func_08008B6C(saved_reg_r7 + 0xC, 0xC5);
            saved_reg_r7->unk6D32 = 0xEU;
        } else {
            temp_r0_8 = saved_reg_r7->unk6D2C - 1;
            saved_reg_r7->unk6D2C = temp_r0_8;
            if (temp_r0_8 <= 0) {
                var_r1_3 = saved_reg_r7 + 0x6D32;
block_71:
                *var_r1_3 = 0xF;
            }
        }
        break;
    case 11:                                        /* switch 1 */
        temp_r0_9 = saved_reg_r7->unk6D2C - 1;
        saved_reg_r7->unk6D2C = temp_r0_9;
        if (temp_r0_9 <= 0) {
            argA = 1;
            var_r1_3 = saved_reg_r7 + 0x6D32;
            goto block_71;
        }
        break;
    case 12:                                        /* switch 1 */
        func_08009378(arg5 + 0xC, 0x889, 1, 0);
        temp_r0_10 = func_08008940(saved_reg_r7);
        temp_r0_10->unk8->unk10(temp_r0_10, arg5);
        saved_reg_r7->unk6D32 = 0x10U;
        break;
    case 13:                                        /* switch 1 */
        temp_r1_4 = arg5->unk0;
        if ((s32) ((0 - temp_r1_4) | temp_r1_4) >= 0) {
            argB = 1;
        }
        break;
    }
    if ((arg9 != 0) && ((s32) (saved_reg_r7->unk6AB4 << 0x1D) < 0)) {
        func_0805E860(saved_reg_r7 + 0x6AA0, 0x192);
        arg9 = 0;
    }
    switch (var_r6) {                               /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        func_0805E860(saved_reg_r7 + 0x6AC0, 0x370);
        func_08008B6C(saved_reg_r7 + 0xC, 0xA9);
        break;
    case 2:                                         /* switch 2 */
        if ((s32) (saved_reg_r7->unk6AD4 << 0x1D) < 0) {
            func_08008B88(saved_reg_r7 + 0xC, 0xA9);
        }
        break;
    case 3:                                         /* switch 2 */
        if ((s32) (saved_reg_r7->unk6AD4 << 0x1D) < 0) {
            func_0805E860(saved_reg_r7 + 0x6AC0, 0x338);
        }
        break;
    }
    switch (var_sl) {                               /* switch 3; irregular */
    case 1:                                         /* switch 3 */
        temp_r1_5 = saved_reg_r7->unk6B18;
        if (temp_r1_5 > 0xBC0000) {
            saved_reg_r7->unk6B18 = (s32) (temp_r1_5 + 0xFFFFA000);
        } else {
        case 2:                                     /* switch 3 */
            func_0805E860(saved_reg_r7 + 0x6B00, 0x2B6);
            saved_reg_r7->unk6B18 = 0xBC0000;
        }
        break;
    }
    switch (var_r8) {                               /* switch 4; irregular */
    case 1:                                         /* switch 4 */
        temp_r1_6 = saved_reg_r7->unk6B38;
        if (temp_r1_6 <= 0x3FFFFF) {
            saved_reg_r7->unk6B38 = (s32) (temp_r1_6 + 0x8000);
        } else {
        case 2:                                     /* switch 4 */
            func_0805E860(saved_reg_r7 + 0x6B20, 0x928);
            saved_reg_r7->unk6B38 = 0x400000;
        }
        break;
    }
    temp_r0_11 = saved_reg_r7->unk6C6C - 1;
    switch ((u32) temp_r0_11) {                     /* switch 5; irregular */
    case 0:                                         /* switch 5 */
        temp_r1_7 = saved_reg_r7->unk6B5C + 0x10000;
        saved_reg_r7->unk6B5C = temp_r1_7;
        saved_reg_r7->unk6B7C = temp_r1_7;
        saved_reg_r7->unk6B58 = (s32) (saved_reg_r7->unk6B58 + 0xFFFF0000);
        saved_reg_r7->unk6B78 = (s32) (saved_reg_r7->unk6B78 + 0x10000);
        if ((s32) saved_reg_r7->unk6B5C <= 0x5FFFFF) {

        } else {
            var_r1_4 = saved_reg_r7 + 0x6C6C;
            var_r0_3 = 2;
block_115:
            *var_r1_4 = var_r0_3;
        }
        break;
    case 1:                                         /* switch 5 */
        temp_r1_8 = saved_reg_r7->unk6B5C + 0x10000;
        saved_reg_r7->unk6B5C = temp_r1_8;
        saved_reg_r7->unk6B7C = temp_r1_8;
        saved_reg_r7->unk6B58 = (s32) (saved_reg_r7->unk6B58 + 0x10000);
        saved_reg_r7->unk6B78 = (s32) (saved_reg_r7->unk6B78 + 0xFFFF0000);
        if ((s32) saved_reg_r7->unk6B5C > 0x93FFFF) {
            saved_reg_r7->unk6C6C = 3U;
        case 2:                                     /* switch 5 */
        case 8:                                     /* switch 5 */
            saved_reg_r7->unk6B58 = 0x1C0000;
            saved_reg_r7->unk6B78 = 0xD40000;
            saved_reg_r7->unk6B5C = 0x940000;
            saved_reg_r7->unk6B7C = 0x940000;
            if ((s8) saved_reg_r7->unk6C6C == 3) {
                var_r2 = 0x1E;
            } else {
                func_0805E860(saved_reg_r7 + 0x6B40, 0x71C);
                func_0805E860(saved_reg_r7 + 0x6B60, 0x71C);
                var_r2 = 0;
            }
            var_sb = var_r2;
            saved_reg_r7->unk6C6C = 4U;
        case 3:                                     /* switch 5 */
            if ((s32) ((var_sb << 0x18) + 0xFF000000) < 0) {
                func_0805E860(saved_reg_r7 + 0x6B40, 0x71C);
                func_0805E860(saved_reg_r7 + 0x6B60, 0x71C);
                var_r1_4 = saved_reg_r7 + 0x6C6C;
                var_r0_3 = 5;
                goto block_115;
            }
        }
        break;
    }
    temp_r0_12 = func_08008918(saved_reg_r7);
    temp_r1_9 = saved_reg_r7->unk6D30;
    arg4 = temp_r1_9;
    temp_r0_12->unk10 = temp_r1_9;
    temp_r0_13 = func_08008918(saved_reg_r7);
    temp_r1_10 = saved_reg_r7->unk6D30;
    arg4 = temp_r1_10;
    temp_r0_13->unk14 = temp_r1_10;
    temp_r0_14 = func_08008918(saved_reg_r7);
    temp_r1_11 = saved_reg_r7->unk6D30;
    arg4 = temp_r1_11;
    temp_r0_14->unk18 = temp_r1_11;
    temp_r0_15 = func_08008918(saved_reg_r7);
    temp_r1_12 = saved_reg_r7->unk6D30;
    arg4 = temp_r1_12;
    temp_r0_15->unk1C = temp_r1_12;
    func_080024E0(saved_reg_r7);
    if (argB == 0) {
        sub_080010BE();
    }
    if (arg5 != 0) {
        arg5->unk8->unkC(arg5, 3);
    }
    return argA;
}
