#include "common.h"
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08050D34(s32);                             /* extern */
u32 func_08050D3C(s32, s32, s32, s32);              /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050D8C(s32, ? *);                          /* extern */
s32 func_08050DD8(s32);                               /* extern */
s32 func_08050DE4(s32);                               /* extern */
s32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, ? *, ? *, ? *);                /* extern */
s32 func_080AF814(void *);                            /* extern */
s32 func_080B0AA0(void *);                            /* extern */
s32 func_080B34DC(void *);                            /* extern */
s32 func_080B3948(void *);                            /* extern */
u16 rand();                                         /* extern */
extern ? gUnk_081075B0;
extern ? gUnk_081075CC;
extern ? gUnk_081075D0;
extern ? gUnk_081075D4;
extern ? gUnk_08107608;
extern ? gUnk_081076C8;
extern ? gUnk_081077A4;
extern ? gUnk_081077E4;
extern ? gUnk_081077F8;
extern ? gUnk_08107808;
extern ? gUnk_08107818;

void sub_080B0CC0(void *arg4, s32 arg7, u32 arg1E, s32 arg1F, s32 arg20, s32 arg21, s32 arg22, s32 arg23, s32 arg24, s32 arg25, s32 arg26, s32 arg27, s32 arg28, s32 arg2D, s32 *arg2E, s8 *arg2F, s32 arg30, s32 arg31) {
    ? *var_r1_5;
    ? *var_r2;
    ? *var_r3_2;
    s32 *temp_r1_5;
    s32 *temp_r2;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *var_r0;
    s32 *var_r1;
    s32 *var_r1_2;
    s32 *var_r1_3;
    s32 *var_r3;
    s32 *var_r4;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_14;
    s32 temp_r0_18;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_8;
    s32 temp_r2_3;
    s32 temp_r2_6;
    s32 temp_r2_7;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_sl;
    s32 var_sl_2;
    s32 var_sl_3;
    s32 var_sl_4;
    s32 var_sl_5;
    s32 var_sl_6;
    s32 var_sl_7;
    s32 var_sl_8;
    s8 *var_r0_3;
    s8 *var_r1_4;
    s8 var_r0_8;
    u32 temp_r0_17;
    u32 temp_r0_2;
    u32 temp_r1_2;
    u32 temp_r1_9;
    u32 temp_r2_2;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 var_r0_2;
    u32 var_r0_6;
    u8 *temp_r1_10;
    u8 *temp_r1_11;
    u8 *temp_r1_6;
    u8 *temp_r1_7;
    u8 temp_r0_15;
    u8 temp_r0_16;
    u8 temp_r0_8;
    u8 temp_r0_9;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r4;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_7;

    var_sl = saved_reg_r10;
    func_080087C8(saved_reg_r7);
    func_080088B8(saved_reg_r7);
    temp_r6 = func_08050D34(saved_reg_r7->unk418);
    temp_r8 = saved_reg_r7->unk418;
    arg2D = func_080088DC(saved_reg_r7);
    temp_sb = func_08008920(saved_reg_r7);
    temp_r5 = func_08008918(saved_reg_r7);
    temp_r4 = func_08008940(saved_reg_r7);
    temp_r0 = func_0800894C(saved_reg_r7);
    arg4 = temp_r4;
    arg5 = temp_r0;
    arg6 = saved_reg_r7 + 0x810;
    temp_r0_2 = func_08050D3C(temp_r8, arg2D, temp_sb, temp_r5);
    switch (temp_r0_2) {                            /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        switch (arg1E) {                            /* switch 2; irregular */
        case 8:                                     /* switch 2 */
            saved_reg_r7->unk838 = 1;
            break;
        case 4:                                     /* switch 2 */
            arg25 = 1;
            if (arg27 == 0) {

            } else {
                func_08050D5C(saved_reg_r7->unk418);
                arg1E = 5U;
                arg20 = 0;
                var_sl = 0;
                var_r1 = saved_reg_r7 + 0x848;
                do {
                    *var_r1 = 1;
                    var_r1 += 4;
                    *(saved_reg_r7 + 0x91A + var_sl) = 1;
                    var_sl += 1;
                } while (var_sl <= 4);
            }
            break;
        case 5:                                     /* switch 2 */
            arg26 = 1;
            if (arg28 == 0) {

            } else {
                func_080B0AA0(saved_reg_r7);
                func_08050D5C(saved_reg_r7->unk418);
                arg1E = 6U;
                arg20 = 0;
                temp_r2 = saved_reg_r7->unk43C;
                temp_r1 = *temp_r2;
                if ((s32) ((0 - temp_r1) | temp_r1) >= 0) {
                    func_08009378(temp_r2 + 0xC, 0x889, 1, 1);
                    temp_r0_3 = func_08008940(saved_reg_r7);
                    temp_r0_3->unk8->unk10(temp_r0_3, saved_reg_r7->unk43C);
                }
loop_18:
                temp_r0_4 = *saved_reg_r7->unk43C;
                if ((s32) ((0 - temp_r0_4) | temp_r0_4) < 0) {
                    func_080087C8(saved_reg_r7);
                    func_080AF814(saved_reg_r7);
                    goto loop_18;
                }
                func_0800934C(saved_reg_r7->unk43C + 0xC, 0x889, 1, 1);
                temp_r0_5 = func_08008940(saved_reg_r7);
                temp_r0_5->unk8->unk10(temp_r0_5, saved_reg_r7->unk43C);
            }
            break;
        default:                                    /* switch 2 */
            func_08050D5C(saved_reg_r7->unk418);
            if ((arg1E != 0) && (arg1E != 6)) {
                temp_r2_2 = arg1E + 1;
                arg1E = temp_r2_2;
                arg20 = 0;
                if ((temp_r2_2 != 2) && (temp_r2_2 != 8)) {
                    var_sl = 0;
                    var_r1_2 = saved_reg_r7 + 0x848;
                    do {
                        *var_r1_2 = 1;
                        var_r1_2 += 4;
                        *(saved_reg_r7 + 0x91A + var_sl) = 1;
                        var_sl += 1;
                    } while (var_sl <= 4);
                }
            }
            if (arg1E != 4) {

            } else {
                var_r4 = &arg7;
                var_sl_2 = 4;
                do {
                    *var_r4 = ((u32) (0x3C * rand()) >> 0x10) + 0x78;
                    var_r4 += 4;
                    var_sl_2 -= 1;
                } while (var_sl_2 >= 0);
                var_sl_3 = 4;
                var_r0 = saved_reg_r7 + 0x880;
                do {
                    *var_r0 = 0;
                    var_r0 -= 4;
                    var_sl_3 -= 1;
                } while (var_sl_3 >= 0);
                var_sl = 5;
                saved_reg_r7->unk844 = 0U;
                saved_reg_r7->unk929 = 1;
                saved_reg_r7->unk8E3 = 0x70U;
                saved_reg_r7->unk864 = 0;
                saved_reg_r7->unk878 = 0;
            }
            break;
        }
    default:                                        /* switch 1 */
    case 1:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
block_70:
        if (arg1E != 3) {
block_71:
            switch ((s32) arg1E) {                  /* switch 6; irregular */
            case 4:                                 /* switch 6 */
                if (arg25 == 0) {

                } else {
                    var_sl_4 = 0;
loop_111:
                    temp_r0_6 = var_sl_4 * 4;
                    temp_r1_2 = *(saved_reg_r7 + 0x848 + temp_r0_6) - 1;
                    switch (temp_r1_2) {            /* switch 8; irregular */
                    case 0:                         /* switch 8 */
                        temp_r3 = arg2E + temp_r0_6;
                        temp_r1_3 = *temp_r3 + 1;
                        *temp_r3 = temp_r1_3;
                        if (temp_r1_3 != ((s32) (&arg4)[var_sl_4].unkC >> 1)) {

                        } else {
                            *(saved_reg_r7 + 0x848 + temp_r0_6) = 2;
                            *(saved_reg_r7 + 0x91A + var_sl_4) = 1;
                            *temp_r3 = 0;
                            *(saved_reg_r7 + 0x870 + temp_r0_6) = 1;
                        }
                        break;
                    case 1:                         /* switch 8 */
                        temp_r3_2 = arg2E + temp_r0_6;
                        temp_r1_4 = *temp_r3_2 + 1;
                        *temp_r3_2 = temp_r1_4;
                        if (temp_r1_4 != ((s32) (&arg4)[var_sl_4].unkC >> 1)) {

                        } else {
                            *(saved_reg_r7 + 0x848 + temp_r0_6) = 4;
                            *(saved_reg_r7 + 0x91A + var_sl_4) = 1;
                            *temp_r3_2 = 0;
                            *(saved_reg_r7 + 0x870 + temp_r0_6) = 2;
                            func_08008B6C(saved_reg_r7 + 0x814, 0xA6);
                        }
                        break;
                    case 4:                         /* switch 8 */
                        if (*(arg2F + var_sl_4) != 0) {
                            temp_r1_5 = arg2E + temp_r0_6;
                            temp_r0_7 = *temp_r1_5 + 1;
                            *temp_r1_5 = temp_r0_7;
                            if (temp_r0_7 == 0x78) {
                                *temp_r1_5 = 0;
                                *(saved_reg_r7 + 0x848 + temp_r0_6) = 3;
                                *(saved_reg_r7 + 0x91A + var_sl_4) = 1;
                            }
                        }
                        break;
                    case 2:                         /* switch 8 */
                        temp_r1_6 = saved_reg_r7 + 0x8E1 + var_sl_4;
                        temp_r0_8 = *temp_r1_6 - 1;
                        *temp_r1_6 = temp_r0_8;
                        if (temp_r0_8 == 0x70) {
                            *(saved_reg_r7 + 0x848 + temp_r0_6) = 0;
                            *(saved_reg_r7 + 0x91A + var_sl_4) = 1;
                            *(saved_reg_r7 + 0x85C + temp_r0_6) = 2;
                            *(saved_reg_r7 + 0x91F + var_sl_4) = 1;
                            func_08008B6C(saved_reg_r7 + 0x81C, 0xBC);
                        }
                        break;
                    case 3:                         /* switch 8 */
                        temp_r1_7 = saved_reg_r7 + 0x8E1 + var_sl_4;
                        temp_r0_9 = *temp_r1_7 + 1;
                        *temp_r1_7 = temp_r0_9;
                        if (temp_r0_9 == 0xA8) {
                            *(saved_reg_r7 + 0x848 + temp_r0_6) = 5;
                            *(saved_reg_r7 + 0x91A + var_sl_4) = 1;
                            *(saved_reg_r7 + 0x85C + temp_r0_6) = 1;
                            *(saved_reg_r7 + 0x91F + var_sl_4) = 1;
                            func_08008B6C(saved_reg_r7 + 0x814, 0xC7);
                        }
                        break;
                    }
                    var_sl_4 += 1;
                    if (var_sl_4 <= 4) {
                        goto loop_111;
                    }
                    if (arg21 == 0) {
                        var_sl_5 = 0;
                        if (saved_reg_r7->unk848 == 5) {
                            var_r1_3 = saved_reg_r7 + 0x848;
loop_132:
                            var_r1_3 += 4;
                            var_sl_5 += 1;
                            if (var_sl_5 <= 4) {
                                if (*var_r1_3 == 5) {
                                    goto loop_132;
                                }
                            }
                        }
                        if (var_sl_5 != 5) {

                        } else {
                            arg21 = 1;
                            saved_reg_r7->unk844 = 1U;
                            saved_reg_r7->unk929 = 1;
                        }
                    } else {
                        temp_r4_2 = saved_reg_r7->unk844;
                        switch (temp_r4_2) {        /* switch 9; irregular */
                        case 1:                     /* switch 9 */
                            saved_reg_r7->unk8E0 = (u8) (saved_reg_r7->unk8E0 - 2);
                            func_080B34DC(saved_reg_r7);
                            temp_r0_10 = saved_reg_r7->unk884;
                            if (temp_r0_10 == 0) {
                                saved_reg_r7->unk844 = 3U;
                                saved_reg_r7->unk929 = (s8) temp_r4_2;
                                saved_reg_r7->unk870 = 0;
                                *arg2F = (s8) temp_r4_2;
block_149:
                                func_08008B6C(saved_reg_r7 + 0x814, 0x6C);
                            } else if (temp_r0_10 == 2) {
                                saved_reg_r7->unk844 = 0U;
                                saved_reg_r7->unk929 = (s8) temp_r4_2;
                            }
                            break;
                        case 2:                     /* switch 9 */
                            saved_reg_r7->unk8E0 = (u8) (saved_reg_r7->unk8E0 + 2);
                            func_080B34DC(saved_reg_r7);
                            temp_r0_11 = saved_reg_r7->unk884;
                            if ((temp_r0_11 != 0) && (temp_r0_11 != 5)) {
                                saved_reg_r7->unk844 = 3U;
                                saved_reg_r7->unk929 = 1;
                                temp_r1_8 = saved_reg_r7->unk884;
                                *(saved_reg_r7 + 0x870 + (temp_r1_8 * 4)) = 0;
                                *(arg2F + temp_r1_8) = 1;
                                goto block_149;
                            }
                            break;
                        case 3:                     /* switch 9 */
                            temp_r2_3 = arg22 + 1;
                            arg22 = temp_r2_3;
                            if (temp_r2_3 > 0x1E) {
                                if (saved_reg_r7->unk884 != 4) {
                                    var_r0_2 = 2;
                                } else {
                                    var_r0_2 = 1;
                                }
                                saved_reg_r7->unk844 = var_r0_2;
                                saved_reg_r7->unk929 = 1;
                                arg22 = 0;
                            }
                            break;
                        }
                    }
                    arg27 = 1;
                    var_sl_6 = 0;
                    if (saved_reg_r7->unk848 != 0) {
                        arg27 = 0;
                    } else {
loop_157:
                        var_sl_6 += 1;
                        if (var_sl_6 > 4) {

                        } else if (*(saved_reg_r7 + 0x848 + (var_sl_6 * 4)) != 0) {
                            arg27 = 0;
                        } else {
                            goto loop_157;
                        }
                    }
                }
                break;
            case 5:                                 /* switch 6 */
                if (arg26 == 0) {

                } else {
                    if (arg20 == 0) {
                        arg20 = 1;
                        arg7 = 0x78;
                        arg8 = 0xD2;
                        arg9 = 0xB4;
                        argA = 0xD2;
                        argB = 0x3C;
                        saved_reg_r7->unk884 = 4;
                        saved_reg_r7->unk8E0 = 0xA8U;
                        saved_reg_r7->unk844 = 0U;
                        saved_reg_r7->unk929 = 1;
                        arg22 = 0;
                        var_r0_3 = arg2F + 4;
                        do {
                            *var_r0_3 = 0;
                            var_r0_3 -= 1;
                        } while ((s32) var_r0_3 >= (s32) arg2F);
                    }
                    var_sl_7 = 0;
loop_167:
                    temp_r0_12 = var_sl_7 * 4;
                    temp_r1_9 = *(saved_reg_r7 + 0x848 + temp_r0_12) - 1;
                    switch (temp_r1_9) {            /* switch 10; irregular */
                    case 0:                         /* switch 10 */
                        temp_r2_4 = arg2E + temp_r0_12;
                        temp_r0_13 = *temp_r2_4 + 1;
                        *temp_r2_4 = temp_r0_13;
                        if (temp_r0_13 != (&arg4)[var_sl_7].unkC) {

                        } else {
                            *temp_r2_4 = 0;
                            *(saved_reg_r7 + 0x848 + temp_r0_12) = 2;
                            *(saved_reg_r7 + 0x91A + var_sl_7) = 1;
                            *(saved_reg_r7 + 0x870 + temp_r0_12) = 1;
                        }
                        break;
                    case 1:                         /* switch 10 */
                        temp_r2_5 = arg2E + temp_r0_12;
                        temp_r0_14 = *temp_r2_5 + 1;
                        *temp_r2_5 = temp_r0_14;
                        if (temp_r0_14 == *(arg30 + temp_r0_12)) {
                            *temp_r2_5 = 0;
                            *(saved_reg_r7 + 0x848 + temp_r0_12) = 4;
                            *(saved_reg_r7 + 0x91A + var_sl_7) = 1;
                            *(saved_reg_r7 + 0x870 + temp_r0_12) = 2;
                            func_08008B6C(saved_reg_r7 + 0x814, 0xA6);
                        }
                        if (*(arg2F + var_sl_7) == 0) {

                        } else {
                            *(saved_reg_r7 + 0x848 + temp_r0_12) = 0;
                            *(saved_reg_r7 + 0x91A + var_sl_7) = 1;
                            *(saved_reg_r7 + 0x85C + temp_r0_12) = 2;
                            *(saved_reg_r7 + 0x91F + var_sl_7) = 1;
                            var_r0_4 = saved_reg_r7 + 0x81C;
block_184:
                            func_08008B6C(var_r0_4, 0xBC);
                        }
                        break;
                    case 3:                         /* switch 10 */
                        temp_r1_10 = saved_reg_r7 + 0x8E1 + var_sl_7;
                        temp_r0_15 = *temp_r1_10 + 1;
                        *temp_r1_10 = temp_r0_15;
                        if (temp_r0_15 == 0xA8) {
                            *(saved_reg_r7 + 0x848 + temp_r0_12) = 5;
                            *(saved_reg_r7 + 0x91A + var_sl_7) = 1;
                            *(saved_reg_r7 + 0x85C + temp_r0_12) = 1;
                            *(saved_reg_r7 + 0x91F + var_sl_7) = 1;
                            func_08008B6C(saved_reg_r7 + 0x814, 0xC7);
                        }
                        if (*(arg2F + var_sl_7) != 0) {
                            *(saved_reg_r7 + 0x848 + temp_r0_12) = 3;
                            var_r0_5 = saved_reg_r7 + 0x91A;
block_187:
                            *(var_r0_5 + var_sl_7) = 1;
                        }
                        break;
                    case 2:                         /* switch 10 */
                        temp_r1_11 = saved_reg_r7 + 0x8E1 + var_sl_7;
                        temp_r0_16 = *temp_r1_11 - 1;
                        *temp_r1_11 = temp_r0_16;
                        if (temp_r0_16 == 0x70) {
                            *(saved_reg_r7 + 0x848 + temp_r0_12) = 0;
                            *(saved_reg_r7 + 0x91A + var_sl_7) = 1;
                            *(saved_reg_r7 + 0x85C + temp_r0_12) = 2;
                            *(saved_reg_r7 + 0x91F + var_sl_7) = 1;
                            var_r0_4 = saved_reg_r7 + 0x81C;
                            goto block_184;
                        }
                        break;
                    case 4:                         /* switch 10 */
                        if (*(arg2F + var_sl_7) != 0) {
                            *(saved_reg_r7 + 0x848 + temp_r0_12) = 3;
                            var_r0_5 = saved_reg_r7 + 0x91A;
                            goto block_187;
                        }
                        break;
                    }
                    var_sl_7 += 1;
                    if (var_sl_7 <= 4) {
                        goto loop_167;
                    }
                    temp_r4_3 = saved_reg_r7->unk844;
                    switch (temp_r4_3) {            /* switch 11; irregular */
                    case 0:                         /* switch 11 */
                        temp_r3_3 = arg31 + (arg23 * 4);
                        temp_r2_6 = *temp_r3_3;
                        if ((s32) *(saved_reg_r7 + 0x848 + (temp_r2_6 * 4)) > 1) {
                            saved_reg_r7->unk844 = 3U;
                            saved_reg_r7->unk929 = 1;
                            *(arg2F + temp_r2_6) = 1;
                            *(saved_reg_r7 + 0x870 + (*temp_r3_3 * 4)) = temp_r4_3;
                            func_08008B6C(saved_reg_r7 + 0x814, 0x6C);
                        }
                        break;
                    case 1:                         /* switch 11 */
                        saved_reg_r7->unk8E0 = (u8) (saved_reg_r7->unk8E0 - 2);
                        func_080B34DC(saved_reg_r7);
                        if (saved_reg_r7->unk884 == *(arg31 + (arg23 * 4))) {
                            saved_reg_r7->unk844 = 0U;
                            saved_reg_r7->unk929 = (s8) temp_r4_3;
                        }
                        break;
                    case 2:                         /* switch 11 */
                        saved_reg_r7->unk8E0 = (u8) (saved_reg_r7->unk8E0 + 2);
                        func_080B34DC(saved_reg_r7);
                        if (saved_reg_r7->unk884 == *(arg31 + (arg23 * 4))) {
                            saved_reg_r7->unk844 = 0U;
                            saved_reg_r7->unk929 = 1;
                        }
                        break;
                    case 3:                         /* switch 11 */
                        temp_r6_2 = arg22 + 1;
                        arg22 = temp_r6_2;
                        if (temp_r6_2 == 0x1E) {
                            arg22 = 0;
                            switch (arg23) {        /* switch 12; irregular */
                            case 0:                 /* switch 12 */
                            case 2:                 /* switch 12 */
                                var_r0_6 = 1;
block_210:
                                saved_reg_r7->unk844 = var_r0_6;
                                break;
                            case 1:                 /* switch 12 */
                            case 3:                 /* switch 12 */
                                var_r0_6 = 2;
                                goto block_210;
                            }
                            saved_reg_r7->unk929 = 1;
                            arg23 += 1;
                        }
                        break;
                    }
                    arg28 = 1;
                    var_sl_8 = 0;
                    if (saved_reg_r7->unk848 != 0) {
                        arg28 = 0;
                    } else {
loop_214:
                        var_sl_8 += 1;
                        if (var_sl_8 <= 4) {
                            if (*(saved_reg_r7 + 0x848 + (var_sl_8 * 4)) != 0) {
                                arg28 = 0;
                            } else {
                                goto loop_214;
                            }
                        }
                    }
                }
                break;
            }
        } else {
            switch (arg20) {                        /* switch 7; irregular */
            case 0x0:                               /* switch 7 */
                saved_reg_r7->unk844 = arg1E;
                saved_reg_r7->unk929 = 1;
                saved_reg_r7->unk850 = 1U;
                saved_reg_r7->unk91C = 1;
block_95:
block_96:
                func_08008B6C(saved_reg_r7 + 0x814, 0x6C);
                break;
            case 0x1E:                              /* switch 7 */
                saved_reg_r7->unk864 = 1;
                saved_reg_r7->unk921 = 1;
                func_08008B6C(saved_reg_r7 + 0x814, 0xC7);
                break;
            case 0x3C:                              /* switch 7 */
                saved_reg_r7->unk864 = 0;
                saved_reg_r7->unk844 = 0U;
                saved_reg_r7->unk929 = 1;
                saved_reg_r7->unk850 = 1U;
                *(saved_reg_r7 + 0x91A + var_sl) = 1;
                break;
            case 0x5A:                              /* switch 7 */
                saved_reg_r7->unk878 = 1;
                saved_reg_r7->unk844 = arg1E;
                saved_reg_r7->unk929 = 1;
                saved_reg_r7->unk850 = 2U;
                *(saved_reg_r7 + 0x91A + var_sl) = 1;
                goto block_96;
            case 0x78:                              /* switch 7 */
                saved_reg_r7->unk878 = 0;
                saved_reg_r7->unk864 = 2;
                saved_reg_r7->unk921 = 1;
                saved_reg_r7->unk844 = 0U;
                saved_reg_r7->unk929 = 1;
                saved_reg_r7->unk850 = 1U;
                *(saved_reg_r7 + 0x91A + var_sl) = 1;
                var_r0_7 = saved_reg_r7 + 0x81C;
block_99:
                func_08008B6C(var_r0_7, 0xBC);
                break;
            case 0x96:                              /* switch 7 */
                saved_reg_r7->unk864 = 0;
                break;
            case 0xB4:                              /* switch 7 */
                saved_reg_r7->unk850 = 2U;
                *(saved_reg_r7 + 0x91A + var_sl) = 1;
                saved_reg_r7->unk878 = 1;
                break;
            case 0xD2:                              /* switch 7 */
                saved_reg_r7->unk878 = 2;
                saved_reg_r7->unk850 = 4U;
                saved_reg_r7->unk91C = 1;
                func_08008B6C(saved_reg_r7 + 0x814, 0xA6);
                break;
            case 0xF0:                              /* switch 7 */
                saved_reg_r7->unk844 = arg1E;
                saved_reg_r7->unk929 = 1;
                saved_reg_r7->unk878 = 0;
                saved_reg_r7->unk850 = arg1E;
                saved_reg_r7->unk91C = 1;
                goto block_95;
            case 0x10E:                             /* switch 7 */
                saved_reg_r7->unk844 = 0U;
                saved_reg_r7->unk929 = 1;
                saved_reg_r7->unk850 = 1U;
                saved_reg_r7->unk91C = 1;
                saved_reg_r7->unk864 = 2;
                saved_reg_r7->unk921 = 1;
                var_r0_7 = saved_reg_r7 + 0x81C;
                goto block_99;
            case 0x12C:                             /* switch 7 */
                saved_reg_r7->unk864 = 0;
                func_08050DE4(saved_reg_r7->unk418);
                arg20 = -1;
                arg24 = 1;
                break;
            }
            temp_r0_17 = saved_reg_r7->unk850;
            if (temp_r0_17 == 4) {
                var_r1_4 = saved_reg_r7 + 0x8E3;
                var_r0_8 = saved_reg_r7->unk8E3 + 1;
                goto block_106;
            }
            if (temp_r0_17 == 3) {
                var_r1_4 = saved_reg_r7 + 0x8E3;
                var_r0_8 = saved_reg_r7->unk8E3 - 1;
block_106:
                *var_r1_4 = var_r0_8;
            }
            arg20 += 1;
        }
        break;
    case 3:                                         /* switch 1 */
        switch (temp_r6) {                          /* switch 3; irregular */
        case 6:                                     /* switch 3 */
            temp_r0_18 = func_08050DF0(saved_reg_r7->unk418);
            switch (temp_r0_18) {                   /* switch 5; irregular */
            case 1:                                 /* switch 5 */
                if (arg1E == 0) {
                    arg1E = 1U;
                } else if (arg1E == 6) {
                    arg1E = 7U;
                }
                break;
            case 2:                                 /* switch 5 */
                if (arg1E == 0) {
                    arg1E = 7U;
                } else if (arg1E == 6) {
                    arg1E = 1U;
                    arg1F = 0;
                    arg20 = 0;
                    var_sl = 0;
                    var_r3 = arg2E;
                    do {
                        *var_r3 = 0;
                        var_r3 += 4;
                        *(arg2F + var_sl) = 0;
                        var_sl += 1;
                    } while (var_sl <= 4);
                    arg21 = 0;
                    arg22 = 0;
                    arg23 = 0;
                    arg25 = 0;
                    arg26 = 0;
                    arg27 = 0;
                    arg28 = 0;
                    arg24 = 0;
                }
                break;
            }
            break;
        default:                                    /* switch 3 */
            func_08050D74(saved_reg_r7->unk418);
            break;
        case 1:                                     /* switch 3 */
            switch (arg1E) {                        /* switch 4; irregular */
            case 0:                                 /* switch 4 */
                var_r1_5 = &gUnk_081075B0;
                var_r2 = &gUnk_081075CC;
                var_r3_2 = &gUnk_081075D0;
block_50:
                arg4 = 0;
                arg5 = 0;
                arg6 = 0;
                func_08050E30(saved_reg_r7->unk418, var_r1_5, var_r2, var_r3_2);
                break;
            case 2:                                 /* switch 4 */
                func_08050D8C(saved_reg_r7->unk418, &gUnk_081075D4);
                break;
            case 3:                                 /* switch 4 */
                func_08050D8C(saved_reg_r7->unk418, &gUnk_08107608);
                break;
            case 4:                                 /* switch 4 */
                func_08050D8C(saved_reg_r7->unk418, &gUnk_081076C8);
                break;
            case 5:                                 /* switch 4 */
                func_08050D8C(saved_reg_r7->unk418, &gUnk_081077A4);
                break;
            case 6:                                 /* switch 4 */
                var_r1_5 = &gUnk_081077E4;
                var_r2 = &gUnk_081077F8;
                var_r3_2 = &gUnk_08107808;
                goto block_50;
            case 8:                                 /* switch 4 */
                func_08050D8C(saved_reg_r7->unk418, &gUnk_08107818);
                break;
            }
            break;
        }
        goto block_70;
    case 4:                                         /* switch 1 */
        if (arg1E == 3) {
            if (temp_r6 == 5) {
                temp_r2_7 = arg1F + 1;
                arg1F = temp_r2_7;
                if ((arg24 == 0) && (temp_r2_7 == 2)) {
                    func_08050DD8(saved_reg_r7->unk418);
                }
            }
            goto block_70;
        }
        goto block_71;
    }
    func_080B3948(saved_reg_r7);
    func_080AF814(saved_reg_r7);
    if (saved_reg_r7->unk838 == 0) {
        sub_080B0CC0();
    }
}

