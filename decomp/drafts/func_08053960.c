s32 AddAmountOfArticle__8RucksackUiUi(s32, s32, s32); /* extern */
u16 GetIconId__C7Article(s32 *);                      /* extern */
s32 Sqrt(s32);                                      /* extern */
s32 __7ArticleUi(s32 *, s32);                           /* extern */
s32 free();                                           /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s16 func_08054D34(void *);                          /* extern */
s32 func_0805E860(void *, s16);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 rand();                                         /* extern */
extern u8 gUnk_080FA372;
extern ? gUnk_080FA37C;

s32 func_08053960(void *arg0, ? arg3) {
s32 sp0;
    s32 sp10;
s32 sp20;
s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    void *sp48;
    void *sp4C;
    void *sp50;
    void *sp54;
    s16 *var_r1_4;
    s16 *var_r1_6;
    s16 *var_r1_7;
    s16 temp_r0;
    s16 temp_r0_12;
    s16 temp_r0_13;
    s16 temp_r0_14;
    s16 temp_r0_15;
    s16 temp_r0_9;
    s16 temp_r1_12;
    s16 temp_r2;
    s16 temp_r2_10;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r5;
    s16 var_r2_2;
    s32 *var_r0_6;
    s32 *var_r0_7;
    s32 *var_r0_9;
    s32 *var_r2_3;
    s32 *var_r3;
    s32 *var_r4;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r0_20;
    s32 temp_r0_21;
    s32 temp_r0_22;
    s32 temp_r0_23;
    s32 temp_r0_24;
    s32 temp_r0_25;
    s32 temp_r0_27;
    s32 temp_r0_2;
    s32 temp_r0_30;
    s32 temp_r0_32;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r1;
    s32 temp_r1_10;
    s32 temp_r1_11;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 temp_r1_9;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 temp_r2_6;
    s32 temp_r2_8;
    s32 temp_r4_3;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r1_3;
    s32 var_r1_5;
    s32 var_r1_8;
    s32 var_r2;
    s32 var_r2_4;
    s32 var_r3_4;
    s32 var_r3_7;
    s32 var_r4_2;
    s32 var_r7;
    s32 var_sb;
    s32 var_sl;
    u16 *var_r1;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 var_r0;
    u16 var_r1_2;
    u16 var_r3_2;
    u16 var_r3_5;
    u32 temp_r0_6;
    u32 temp_r1_5;
    u8 temp_r0_5;
    u8 temp_r1_6;
    void **temp_r1_13;
    void *temp_r0_26;
    void *temp_r0_28;
    void *temp_r0_29;
    void *temp_r0_31;
    void *temp_r1_14;
    void *temp_r1_15;
    void *temp_r2_7;
    void *temp_r2_9;
    void *temp_r4_4;
    void *temp_r4_7;
    void *temp_r5_2;
    void *var_r0_10;
    void *var_r0_8;
    void *var_r1_10;
    void *var_r1_9;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r3_3;
    void *var_r3_6;
    void *var_r5;
    void *var_r5_2;

    sp44 = 0;
    if (1 & arg0->unk2321) {
        return 0;
    }
    temp_r0 = arg0->unk232A;
    switch ((u32) temp_r0) {                        /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_0805E860(arg0 + 0x200, 0x8A);
        var_r1 = arg0 + 0x232A;
block_48:
        var_r0 = *var_r1 + 1;
block_49:
        *var_r1 = var_r0;
        break;
    case 2:                                         /* switch 1 */
        func_0805E860(arg0 + 0x200, 0x8A);
        break;
    case 4:                                         /* switch 1 */
        arg0->unk22D0 = 0x4000;
        arg0->unk22D4 = 0x1000;
        arg0->unk22DE = 0U;
        func_0805E860(arg0 + 0x200, 0x92);
        var_r1 = arg0 + 0x232A;
        goto block_48;
    case 5:                                         /* switch 1 */
        arg0->unk22DA = (u16) arg0->unk22D8;
        temp_r0_2 = arg0->unk22D0 + arg0->unk22D4;
        arg0->unk22D0 = temp_r0_2;
        if (temp_r0_2 > 0x30000) {
            arg0->unk22D0 = 0x30000;
        }
        temp_r0_3 = arg0->unk22D8 - (arg0 + 0x22D0)->unk2;
        arg0->unk22D8 = temp_r0_3;
        if ((s32) (s16) temp_r0_3 <= 0x2F) {
            arg0->unk22D8 = 0x8FU;
            arg0->unk22D0 = 0x4000;
            arg0->unk22D4 = 0x1000;
            arg0->unk22DE = (u16) (arg0->unk22DE + 1);
        }
        if (arg0->unk2328 != 0x10) {

        } else {
            temp_r2 = (s16) arg0->unk22DA;
            var_r1_2 = arg0->unk22D8;
            if ((s32) temp_r2 < (s32) (s16) arg0->unk22D8) {
                var_r1_2 = 0x30;
            }
            temp_r5 = (s16) var_r1_2;
            temp_r4 = temp_r2 - temp_r5;
            if ((s32) temp_r4 > 1) {
                temp_r0_4 = temp_r5 + ((s32) (rand() >> 8) % temp_r4);
                var_r1_2 = temp_r0_4;
                if ((s32) (s16) temp_r0_4 <= 0x2F) {
                    var_r1_2 = 0x30;
                }
            }
            arg0->unk22D8 = var_r1_2;
            var_r1 = arg0 + 0x232A;
            var_r0 = 7;
            goto block_49;
        }
        break;
    case 7:                                         /* switch 1 */
        if ((s32) (arg0->unk230 << 0x1D) >= 0) {

        } else {
            func_0805E860(arg0 + 0x200, 0x96);
            arg0->unk2320 = 0U;
            var_r1 = arg0 + 0x232A;
            goto block_48;
        }
        break;
    case 8:                                         /* switch 1 */
        if ((s32) (arg0->unk230 << 0x1E) >= 0) {

        } else {
            temp_r0_5 = arg0->unk2320 + 1;
            arg0->unk2320 = temp_r0_5;
            if (temp_r0_5 != 3) {

            } else {
                arg0->unk2294 = 0x500000;
                arg0->unk2298 = 0x440000;
                if ((s16) arg0->unk22D8 == 0x30) {
                    arg0->unk2270 = 0x3E7;
                } else {
                    arg0->unk2270 = (s32) (((0x8F - (s16) arg0->unk22D8) * 0xA) + ((s32) (rand() >> 8) % 10));
                }
                arg0->unk2290 = func_08054D34(arg0);
                temp_r1 = arg0->unk2270;
                if (temp_r1 == 0) {
                    var_r2 = -0xA;
                } else if (temp_r1 <= 0xDB) {
                    var_r2 = 0x10;
                } else {
                    var_r2 = 0x30;
                    if (temp_r1 <= 0x2BB) {
                        var_r2 = 0x20;
                    }
                }
                arg0->unk22A0 = (s32) (arg0->unk2270 + (var_r2 + 0x10));
                arg0->unk2270 = (s32) (arg0->unk2270 << 0x10);
                arg0->unk22A0 = (s32) (arg0->unk22A0 << 0x10);
                arg0->unk22A8 = 0x200;
                temp_r0_6 = (u32) (Sqrt(((s32) arg0->unk22A0 >> 8) * 4) << 0x10) >> 8;
                arg0->unk22A4 = temp_r0_6;
                temp_r1_2 = ((s32) temp_r0_6 >> 3) * 5;
                arg0->unk2274 = temp_r1_2;
                if (temp_r1_2 <= 0xFFFF) {
                    arg0->unk2274 = 0x10000;
                }
                arg0->unk2278 = (s32) arg0->unk2274;
                arg0->unk22B4 = (s32) ((s32) arg0->unk22A0 >> 2);
                temp_r1_3 = arg0->unk22A0;
                if (temp_r1_3 > 0x012C0000) {
                    var_r7 = 0x10;
                } else {
                    var_r7 = 8;
                    if (temp_r1_3 > 0xC80000) {
                        var_r7 = 0xC;
                    }
                }
                temp_r0_7 = (s32) arg0->unk22B4 / var_r7;
                arg0->unk22AC = temp_r0_7;
                arg0->unk22B0 = temp_r0_7;
                temp_r1_4 = arg0->unk22B4 * 3;
                arg0->unk22B8 = temp_r1_4;
                if (arg0->unk2290 != 2) {
                    var_r4 = arg0 + 0x22BC;
                    var_r1_3 = var_r7 + 0xC;
                    var_r0_2 = arg0->unk22B4;
                } else {
                    arg0->unk22B8 = (s32) (temp_r1_4 + ((s32) arg0->unk22B4 >> 1));
                    var_r4 = arg0 + 0x22BC;
                    temp_r0_8 = arg0->unk22B4;
                    var_r0_2 = temp_r0_8 - (temp_r0_8 >> 1);
                    var_r1_3 = var_r7 + 0xC;
                }
                *var_r4 = var_r0_2 / var_r1_3;
                func_08008B6C(arg0 + 0x1C, 0x95);
                arg0->unk229C = 0;
                arg0->unk22C0 = 1;
                arg0->unk34C = 1U;
            }
        }
        if ((s32) (arg0->unk230 << 0x1D) < 0) {
            func_0805E860(arg0 + 0x200, 0x195);
            var_r1 = arg0 + 0x232A;
            goto block_48;
        }
        break;
    }
    temp_r4_2 = arg0->unk22C0;
    switch (temp_r4_2) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        func_0805E860(arg0 + 0x318, 0xC9);
        break;
    case 2:                                         /* switch 2 */
        arg0->unk2294 = (s32) arg0->unk2268;
        arg0->unk2298 = (s32) arg0->unk226C;
        var_r2_2 = 0xB9;
        temp_r0_9 = arg0->unk2288 + 0xFFFFFCC1;
        switch ((u32) temp_r0_9) {                  /* switch 3; irregular */
        case 13:                                    /* switch 3 */
            var_r2_2 = 0xB9;
            break;
        case 16:                                    /* switch 3 */
            var_r2_2 = 0xBC;
            break;
        case 0:                                     /* switch 3 */
            var_r2_2 = 0xB0;
            break;
        case 40:                                    /* switch 3 */
            var_r2_2 = 0xC0;
            break;
        case 44:                                    /* switch 3 */
            var_r2_2 = 0xC4;
            break;
        case 48:                                    /* switch 3 */
            var_r2_2 = 0xC8;
            break;
        }
        func_0805E860(arg0 + 0x318, var_r2_2);
        break;
    case 1:                                         /* switch 2 */
        temp_r0_10 = arg0->unk229C + arg0->unk22A4;
        arg0->unk229C = temp_r0_10;
        arg0->unk2294 = (s32) (temp_r0_10 + 0x500000);
        temp_r2_2 = arg0->unk229C;
        if (temp_r2_2 < (s32) arg0->unk22B4) {
            if (temp_r2_2 > (s32) arg0->unk22B0) {
                arg0->unk2298 = (s32) (arg0->unk2298 + 0xFFFF0000);
                arg0->unk22B0 = (s32) (arg0->unk22B0 + arg0->unk22AC);
            }
        } else if (temp_r2_2 >= (s32) arg0->unk22B8) {
            arg0->unk2298 = (s32) (arg0->unk2298 + 0x10000);
            arg0->unk22B8 = (s32) (arg0->unk22B8 + arg0->unk22BC);
            if ((s32) (arg0 + 0x2298)->unk2 > 0x50) {
                arg0->unk2298 = 0x500000;
                if (arg0->unk22C2 == 0) {
                    arg0->unk3BC = (u8) temp_r4_2;
                    arg0->unk22C2 = temp_r4_2;
                }
            }
        }
        temp_r1_5 = arg0->unk22A4 - arg0->unk22A8;
        arg0->unk22A4 = temp_r1_5;
        if ((s32) temp_r1_5 >= 0) {

        } else {
            arg0->unk22A4 = 0U;
            arg0->unk22C0 = 0;
        }
        break;
    }
    if (arg0->unk228A != (s16) arg0->unk2288) {
        func_0805E860(arg0 + 0x238, (s16) arg0->unk2288);
        arg0->unk228A = (s16) arg0->unk2288;
    }
    temp_r1_6 = 1 & arg0->unk228E;
    if (temp_r1_6 != 0) {
        if ((s32) arg0->unk2268 > (s32) (arg0->unk2294 + 0xFFF00000)) {
            var_r3 = arg0 + 0x227C;
            temp_r1_7 = arg0->unk227C - ((s32) arg0->unk2274 >> 4);
            arg0->unk227C = temp_r1_7;
            var_r0_3 = (s32) arg0->unk2274 >> 1;
            if (temp_r1_7 < var_r0_3) {
                goto block_86;
            }
        } else {
            var_r3 = arg0 + 0x227C;
            temp_r2_3 = arg0->unk227C + ((s32) arg0->unk2274 >> 4);
            arg0->unk227C = temp_r2_3;
            var_r0_3 = arg0->unk2274;
            if (temp_r2_3 > var_r0_3) {
block_86:
                *var_r3 = var_r0_3;
            }
        }
        temp_r0_11 = arg0->unk2268 + arg0->unk227C;
        arg0->unk2268 = temp_r0_11;
        arg0->unk22C4 = (s16) ((temp_r0_11 >> 0x10) - 0x60);
        temp_r0_12 = (arg0 + 0x2270)->unk2;
        if ((s32) arg0->unk22C4 > (s32) temp_r0_12) {
            arg0->unk22C4 = temp_r0_12;
        }
        arg0->unk384 = 1U;
    } else {
        arg0->unk384 = temp_r1_6;
    }
    temp_r0_13 = arg0->unk2292;
    switch (temp_r0_13) {                           /* switch 4 */
    case 0:                                         /* switch 4 */
        temp_r0_14 = (u16) arg0->unk2290 - 1;
        switch (temp_r0_14) {                       /* switch 5 */
        case 0:                                     /* switch 5 */
        case 1:                                     /* switch 5 */
        case 2:                                     /* switch 5 */
        case 3:                                     /* switch 5 */
        case 4:                                     /* switch 5 */
        case 7:                                     /* switch 5 */
            arg0->unk2292 = 1;
            break;
        case 5:                                     /* switch 5 */
            arg0->unk2288 = 0x33BU;
            arg0->unk228E = 0U;
            arg0->unk2284 = 0x3C;
block_142:
            arg0->unk2292 = 8;
            break;
        case 6:                                     /* switch 5 */
            arg0->unk2284 = 0x3C;
            var_r1_4 = arg0 + 0x2292;
block_172:
            *var_r1_4 = 0xD;
            break;
        }
        break;
    case 1:                                         /* switch 4 */
        if ((s32) (arg0->unk2294 + 0xFFF00000) > (s32) arg0->unk2268) {
            arg0->unk2288 = 0x343U;
            arg0->unk227C = 0;
            arg0->unk228E = 3U;
            temp_r0_15 = (u16) arg0->unk2290 - 1;
            switch (temp_r0_15) {                   /* switch 6 */
            case 0:                                 /* switch 6 */
                arg0->unk2284 = 0;
                arg0->unk2292 = 2;
                break;
            case 1:                                 /* switch 6 */
                arg0->unk2284 = 0;
block_116:
                arg0->unk2292 = 5;
                break;
            case 2:                                 /* switch 6 */
                temp_r1_8 = arg0->unk2270;
                if (temp_r1_8 <= 0xDBFFFF) {
                    if (temp_r1_8 > 0x13FFFF) {
                        var_r0_4 = temp_r1_8 + 0xFFEC0000;
                    } else {
                        var_r0_4 = 0;
                    }
                    arg0->unk2270 = var_r0_4;
                }
                if ((s32) arg0->unk2270 <= 0x13FFFF) {
                    var_r2_3 = arg0 + 0x2274;
                    var_r1_5 = (s32) arg0->unk22A4 >> 3;
                } else {
                    var_r2_3 = arg0 + 0x2274;
                    var_r1_5 = (s32) arg0->unk22A4 >> 4;
                }
                *var_r2_3 -= var_r1_5;
                arg0->unk2292 = 0xA;
                break;
            case 3:                                 /* switch 6 */
                temp_r1_9 = arg0->unk2270;
                if (temp_r1_9 > 0x3BFFFF) {
                    var_r0_5 = temp_r1_9 + 0xFFE20000;
                } else {
                    var_r0_5 = 0;
                }
                arg0->unk2270 = var_r0_5;
                goto block_116;
            case 4:                                 /* switch 6 */
            case 7:                                 /* switch 6 */
                arg0->unk2292 = 7;
                break;
            }
        }
        break;
    case 2:                                         /* switch 4 */
        temp_r1_10 = arg0->unk2270;
        if ((s32) (arg0->unk2268 + 0xFFA00000) >= temp_r1_10) {
            arg0->unk2268 = (s32) (temp_r1_10 + 0x600000);
            arg0->unk227C = (s32) ((s32) arg0->unk2274 >> 1);
            arg0->unk2284 = 0x3C;
            arg0->unk228E = 0U;
            arg0->unk2288 = 0x33FU;
            arg0->unk22C0 = 2;
            var_r1_6 = arg0 + 0x2292;
block_130:
            *var_r1_6 = 3;
        } else {
            var_r0_6 = arg0 + 0x2284;
block_160:
            temp_r1_11 = *var_r0_6 + 1;
            *var_r0_6 = temp_r1_11;
            if (temp_r1_11 & 0x3F) {

            } else if (!(1 & rand())) {

            } else {
                func_08008B6C(arg0 + 0x1C, 0xA9);
            }
        }
        break;
    case 3:                                         /* switch 4 */
        arg0->unk2268 = (s32) (arg0->unk2268 + arg0->unk227C);
        temp_r0_16 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_16;
        if (temp_r0_16 < 0) {
            arg0->unk2288 = 0x34FU;
            arg0->unk2292 = 4;
        }
        break;
    case 4:                                         /* switch 4 */
        sp44 = 1;
        break;
    case 5:                                         /* switch 4 */
        if ((s32) (arg0->unk2268 + 0xFFA00000) >= (s32) (arg0->unk2270 + 0xFFF00000)) {
            func_08008B6C(arg0 + 0x1C, 0xA9);
            arg0->unk2280 = 0x10000;
            arg0->unk2292 = (s16) ((u16) arg0->unk2292 + 1);
        } else {
            var_r0_6 = arg0 + 0x2284;
            goto block_160;
        }
        break;
    case 6:                                         /* switch 4 */
        arg0->unk226C = (s32) (arg0->unk226C - arg0->unk2280);
        temp_r2_4 = arg0->unk2280 + 0xFFFFF000;
        arg0->unk2280 = temp_r2_4;
        if ((s32) arg0->unk226C > 0x4FFFFF) {
            if (arg0->unk2290 == 2) {
                arg0->unk226C = 0x500000;
                arg0->unk2280 = 0;
                arg0->unk227C = (s32) ((s32) arg0->unk2274 >> 1);
                arg0->unk2284 = 0x3C;
                arg0->unk228E = 0U;
                arg0->unk2288 = 0x33FU;
                var_r1_6 = arg0 + 0x2292;
                goto block_130;
            }
            arg0->unk2288 = 0x33BU;
            arg0->unk228E = 0U;
            arg0->unk2284 = 0x3C;
            var_r1_7 = arg0 + 0x2292;
block_168:
            *var_r1_7 = 0xC;
        } else if (temp_r2_4 > 0x8000) {
            arg0->unk2288 = 0x367U;
        } else if (temp_r2_4 < 0xFFFF8000) {
            arg0->unk2288 = 0x36FU;
        } else {
            arg0->unk228E = (u16) (0xFFFD & arg0->unk228E);
            arg0->unk2288 = 0x36BU;
            temp_r1_12 = arg0->unk2290;
            if (temp_r1_12 != 2) {

            } else {
                arg0->unk22C0 = temp_r1_12;
            }
        }
        break;
    case 7:                                         /* switch 4 */
        if ((s32) (arg0->unk2268 + 0xFFA00000) > 0xC7FFFF) {
            temp_r2_5 = arg0->unk227C;
            if (temp_r2_5 == 0) {
                arg0->unk2288 = 0x33BU;
                arg0->unk228E = (u16) temp_r2_5;
                arg0->unk2284 = 0x3C;
                goto block_142;
            }
            arg0->unk2288 = 0x33FU;
            temp_r0_17 = arg0->unk2274 - ((s32) arg0->unk2278 >> 6);
            arg0->unk2274 = temp_r0_17;
            if (temp_r0_17 >= 0) {

            } else {
                arg0->unk2274 = 0;
            }
        } else {
            var_r0_6 = arg0 + 0x2284;
            goto block_160;
        }
        break;
    case 8:                                         /* switch 4 */
        temp_r0_18 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_18;
        if (temp_r0_18 >= 0) {

        } else if (arg0->unk2290 != 8) {
            arg0->unk2284 = 0x3C;
            arg0->unk2288 = 0x338U;
            arg0->unk2292 = 9;
        } else {
            arg0->unk2284 = 0x1E;
            arg0->unk2288 = 0x338U;
            arg0->unk2292 = 0xE;
            func_0805E860(arg0 + 0x3F8, 2);
            arg0->unk42C = 1U;
        }
        break;
    case 9:                                         /* switch 4 */
        temp_r0_19 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_19;
        if (temp_r0_19 >= 0) {

        } else {
            arg0->unk2284 = 0;
block_260:
            sp44 = 1;
        }
        break;
    case 10:                                        /* switch 4 */
        if ((s32) (arg0->unk2268 + 0xFFA00000) >= (s32) arg0->unk2270) {
            arg0->unk227C = 0x8000;
            arg0->unk2284 = 0x1E;
            if ((s32) (arg0 + 0x2270)->unk2 <= 0x13) {
                arg0->unk2284 = 0xF;
            }
            arg0->unk228E = 0U;
            arg0->unk2288 = 0x33FU;
            arg0->unk2292 = 0xB;
        } else {
            var_r0_6 = arg0 + 0x2284;
            goto block_160;
        }
        break;
    case 11:                                        /* switch 4 */
        arg0->unk2268 = (s32) (arg0->unk2268 + arg0->unk227C);
        temp_r0_20 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_20;
        if (temp_r0_20 >= 0) {

        } else {
            arg0->unk2284 = 0x3C;
            arg0->unk2288 = 0x347U;
            var_r1_7 = arg0 + 0x2292;
            goto block_168;
        }
        break;
    case 12:                                        /* switch 4 */
        temp_r0_21 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_21;
        if (temp_r0_21 >= 0) {

        } else {
            arg0->unk2284 = 0x3C;
            arg0->unk2288 = 0x338U;
            var_r1_4 = arg0 + 0x2292;
            goto block_172;
        }
        break;
    case 13:                                        /* switch 4 */
        temp_r0_22 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_22;
        if (temp_r0_22 >= 0) {

        } else {
            arg0->unk2284 = 0;
            if (arg0->unk22C0 != 0) {

            } else {
                sp44 = 1;
            }
        }
        break;
    case 14:                                        /* switch 4 */
        temp_r0_23 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_23;
        if (temp_r0_23 >= 0) {

        } else {
            arg0->unk42C = 0U;
            arg0->unk2284 = 0x1E;
            arg0->unk2288 = 0x338U;
            arg0->unk2292 = 0xF;
        }
        break;
    case 15:                                        /* switch 4 */
        temp_r0_24 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_24;
        if (temp_r0_24 >= 0) {

        } else {
            arg0->unk2284 = 0x3C;
            arg0->unk2288 = 0x344U;
            arg0->unk2292 = 0x10;
        }
        break;
    case 16:                                        /* switch 4 */
        temp_r0_25 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_25;
        if (temp_r0_25 >= 0) {

        } else {
            if (!((rand() >> 4) & 1)) {
                arg0->unk2290 = 9;
            } else {
                var_r1_8 = (s32) (rand() >> 4) % 100;
                var_r4_2 = 7;
                var_r2_4 = 0;
                sp4C = &sp0 + 0x20;
                sp48 = &sp0 + 8;
                if (var_r1_8 < (s32) gUnk_080FA372) {
                    var_r4_2 = 0;
                } else {
loop_190:
                    var_r1_8 -= (&gUnk_080FA372)[var_r2_4];
                    var_r2_4 += 1;
                    if (var_r2_4 <= 7) {
                        if (var_r1_8 < (s32) (&gUnk_080FA372)[var_r2_4]) {
                            var_r4_2 = var_r2_4;
                        } else {
                            goto loop_190;
                        }
                    }
                }
                temp_r4_3 = *((var_r4_2 * 4) + &gUnk_080FA37C);
                arg0->unk23A4 = (s16) temp_r4_3;
                AddAmountOfArticle__8RucksackUiUi(arg0->unk8 + 0x1C38, temp_r4_3, 1);
                temp_r5_2 = arg0 + 0x430;
                __7ArticleUi(&sp30, temp_r4_3);
                func_0805E860(temp_r5_2, (s16) GetIconId__C7Article(&sp30));
                temp_r1_13 = arg0->unk430;
                (*temp_r1_13)->unk10(&sp0, temp_r1_13, *(arg0->unk434 + (temp_r5_2->unkC * 4)));
                temp_r4_4 = func_08008910(arg0);
                temp_r0_26 = arg0 + 0x4F8;
                temp_r2_6 = func_080074C0(temp_r0_26, temp_r0_26->unk4);
                var_r3_2 = 0;
                if (sp10 != 0) {
                    var_r3_2 = sp10.unk4;
                }
                sp50 = temp_r4_4;
                func_08008F0C(&sp20, sp10, (temp_r2_6 << 5) + 0x05000200, var_r3_2);
                temp_r1_14 = temp_r4_4->unk4;
                if (temp_r1_14 != temp_r4_4->unkC) {
                    if (temp_r1_14 != 0) {
                        temp_r1_14->unk0 = (s32) sp4C->unk0;
                        temp_r1_14->unk4 = (s32) sp4C->unk4;
                        temp_r1_14->unk8 = (s32) sp4C->unk8;
                        temp_r1_14->unkC = (s32) sp4C->unkC;
                    }
                    sp50->unk4 = (void *) (sp50->unk4 + 0x10);
                } else {
                    sp38 = 1;
                    temp_r4_5 = (s32) (temp_r1_14 - sp50->unk0) >> 4;
                    sp34 = temp_r4_5;
                    var_r0_7 = &sp34;
                    if ((u32) temp_r4_5 < 1U) {
                        var_r0_7 = &sp38;
                    }
                    temp_r0_27 = temp_r4_5 + *var_r0_7;
                    if (temp_r0_27 != 0) {
                        temp_r4_6 = temp_r0_27 * 0x10;
                        var_r0_8 = malloc(temp_r4_6);
                        var_sb = temp_r4_6;
                        if (var_r0_8 == 0) {
                            var_r0_8 = func_080D3BC0(var_sb);
                        }
                    } else {
                        var_r0_8 = 0;
                        var_sb = 0;
                    }
                    sp54 = var_r0_8;
                    var_r2_5 = sp50->unk0;
                    var_r3_3 = var_r0_8;
                    if (var_r2_5 != temp_r1_14) {
                        do {
                            if (var_r3_3 != 0) {
                                var_r3_3->unk0 = (s32) var_r2_5->unk0;
                                var_r3_3->unk4 = (s32) var_r2_5->unk4;
                                var_r3_3->unk8 = (s32) var_r2_5->unk8;
                                var_r3_3->unkC = (s32) var_r2_5->unkC;
                            }
                            var_r2_5 += 0x10;
                            var_r3_3 += 0x10;
                        } while (var_r2_5 != temp_r1_14);
                    }
                    if (sp38 == 1) {
                        if (var_r3_3 != 0) {
                            var_r3_3->unk0 = (s32) sp4C->unk0;
                            var_r3_3->unk4 = (s32) sp4C->unk4;
                            var_r3_3->unk8 = (s32) sp4C->unk8;
                            var_r3_3->unkC = (s32) sp4C->unkC;
                        }
                        var_r5 = var_r3_3 + 0x10;
                    } else {
                        var_r3_4 = sp38;
                        var_r2_6 = var_r3_3;
                        if (var_r3_4 != 0) {
                            do {
                                if (var_r2_6 != 0) {
                                    var_r2_6->unk0 = (s32) sp4C->unk0;
                                    var_r2_6->unk4 = (s32) sp4C->unk4;
                                    var_r2_6->unk8 = (s32) sp4C->unk8;
                                    var_r2_6->unkC = (s32) sp4C->unkC;
                                }
                                var_r3_4 -= 1;
                                var_r2_6 += 0x10;
                            } while (var_r3_4 != 0);
                        }
                        var_r5 = var_r2_6;
                    }
                    temp_r2_7 = sp50->unk4;
                    temp_r0_28 = sp50->unk0;
                    var_r1_9 = temp_r0_28;
                    if (temp_r0_28 != temp_r2_7) {
                        do {
                            var_r1_9 += 0x10;
                        } while (var_r1_9 != temp_r2_7);
                    }
                    if (temp_r0_28 != 0) {
                        free();
                    }
                    sp50->unk0 = sp54;
                    sp50->unk4 = var_r5;
                    sp50->unkC = (void *) (sp54 + var_sb);
                }
                temp_r4_7 = func_08008910(arg0);
                temp_r0_29 = arg0 + 0x4F0;
                temp_r2_8 = func_08007D4C(temp_r0_29, temp_r0_29->unk4);
                var_r3_5 = 0;
                if (sp8 != 0) {
                    var_r3_5 = sp48->unk4;
                }
                sp50 = temp_r4_7;
                func_08008F0C(&sp20, sp8, (temp_r2_8 << 5) + 0x06010000, var_r3_5);
                temp_r1_15 = temp_r4_7->unk4;
                if (temp_r1_15 != temp_r4_7->unkC) {
                    if (temp_r1_15 != 0) {
                        temp_r1_15->unk0 = (s32) sp4C->unk0;
                        temp_r1_15->unk4 = (s32) sp4C->unk4;
                        temp_r1_15->unk8 = (s32) sp4C->unk8;
                        temp_r1_15->unkC = (s32) sp4C->unkC;
                    }
                    sp50->unk4 = (void *) (sp50->unk4 + 0x10);
                } else {
                    sp40 = 1;
                    temp_r4_8 = (s32) (temp_r1_15 - sp50->unk0) >> 4;
                    sp3C = temp_r4_8;
                    var_r0_9 = &sp3C;
                    if ((u32) temp_r4_8 < 1U) {
                        var_r0_9 = &sp40;
                    }
                    temp_r0_30 = temp_r4_8 + *var_r0_9;
                    if (temp_r0_30 != 0) {
                        temp_r4_9 = temp_r0_30 * 0x10;
                        var_r0_10 = malloc(temp_r4_9);
                        var_sl = temp_r4_9;
                        if (var_r0_10 == 0) {
                            var_r0_10 = func_080D3BC0(var_sl);
                        }
                    } else {
                        var_r0_10 = 0;
                        var_sl = 0;
                    }
                    sp54 = var_r0_10;
                    var_r2_7 = sp50->unk0;
                    var_r3_6 = var_r0_10;
                    if (var_r2_7 != temp_r1_15) {
                        do {
                            if (var_r3_6 != 0) {
                                var_r3_6->unk0 = (s32) var_r2_7->unk0;
                                var_r3_6->unk4 = (s32) var_r2_7->unk4;
                                var_r3_6->unk8 = (s32) var_r2_7->unk8;
                                var_r3_6->unkC = (s32) var_r2_7->unkC;
                            }
                            var_r2_7 += 0x10;
                            var_r3_6 += 0x10;
                        } while (var_r2_7 != temp_r1_15);
                    }
                    if (sp40 == 1) {
                        if (var_r3_6 != 0) {
                            var_r3_6->unk0 = (s32) sp4C->unk0;
                            var_r3_6->unk4 = (s32) sp4C->unk4;
                            var_r3_6->unk8 = (s32) sp4C->unk8;
                            var_r3_6->unkC = (s32) sp4C->unkC;
                        }
                        var_r5_2 = var_r3_6 + 0x10;
                    } else {
                        var_r3_7 = sp40;
                        var_r2_8 = var_r3_6;
                        if (var_r3_7 != 0) {
                            do {
                                if (var_r2_8 != 0) {
                                    var_r2_8->unk0 = (s32) sp4C->unk0;
                                    var_r2_8->unk4 = (s32) sp4C->unk4;
                                    var_r2_8->unk8 = (s32) sp4C->unk8;
                                    var_r2_8->unkC = (s32) sp4C->unkC;
                                }
                                var_r3_7 -= 1;
                                var_r2_8 += 0x10;
                            } while (var_r3_7 != 0);
                        }
                        var_r5_2 = var_r2_8;
                    }
                    temp_r2_9 = sp50->unk4;
                    temp_r0_31 = sp50->unk0;
                    var_r1_10 = temp_r0_31;
                    if (temp_r0_31 != temp_r2_9) {
                        do {
                            var_r1_10 += 0x10;
                        } while (var_r1_10 != temp_r2_9);
                    }
                    if (temp_r0_31 != 0) {
                        free();
                    }
                    sp50->unk0 = sp54;
                    sp50->unk4 = var_r5_2;
                    sp50->unkC = (void *) (sp54 + var_sl);
                }
                arg0->unk464 = 1;
            }
            arg0->unk228C = 0U;
            arg0->unk2284 = 0x1E;
            arg0->unk2288 = 0x338U;
            arg0->unk2292 = 0x11;
        }
        break;
    case 17:                                        /* switch 4 */
        if (arg0->unk2284 & 1) {
            arg0->unk228C = (u16) (arg0->unk228C + 1);
        }
        temp_r0_32 = arg0->unk2284 - 1;
        arg0->unk2284 = temp_r0_32;
        if (temp_r0_32 < 0) {
            arg0->unk2292 = 4;
            goto block_260;
        }
        break;
    }
    temp_r2_10 = (arg0 + 0x2268)->unk2;
    if ((s32) (temp_r2_10 - arg0->unk2330) > 0x7F) {
        arg0->unk2330 = (u16) (temp_r2_10 - 0x80);
    }
    arg0->unk230 = func_0805E8F0(arg0 + 0x200);
    arg0->unk268 = func_0805E8F0(arg0 + 0x238);
    if (arg0->unk34C == 1) {
        arg0->unk348 = func_0805E8F0(arg0 + 0x318);
    }
    if (arg0->unk384 == 1) {
        arg0->unk380 = func_0805E8F0(arg0 + 0x350);
    }
    if (arg0->unk3BC == 1) {
        arg0->unk3B8 = func_0805E8F0(arg0 + 0x388);
        if ((s32) ((u8) arg0->unk3B8 << 0x1D) < 0) {
            arg0->unk3BC = 0U;
        }
    }
    if (arg0->unk42C == 1) {
        arg0->unk428 = func_0805E8F0(arg0 + 0x3F8);
    }
    return sp44;
}
