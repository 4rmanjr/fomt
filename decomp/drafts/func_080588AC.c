s32 GetName__C6Animal(s32);                         /* extern */
s32 SetFestivalWinner__6Animal(s32);                  /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088C4(void *);                          /* extern */
s32 func_080088CC(void *);                          /* extern */
u32 func_080088D4(void *);                          /* extern */
s16 *func_08008918(void *);                         /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, s16 *);                     /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08050E50(s32, s32);                          /* extern */
s32 func_08050E5C(s32);                               /* extern */
s32 func_08057F24(void *, s32);                       /* extern */
s32 func_08059780(void *, s32);                       /* extern */
s32 func_08059878(void *);                            /* extern */
s32 func_08059C94(void *);                            /* extern */
s32 func_08059FE0(void *, s32);                       /* extern */
s32 func_0805A3F0(void *);                            /* extern */
s32 func_0805A4DC(void *, s32);                       /* extern */
s32 func_0805A744(void *);                            /* extern */
s32 func_0805AB08(void *);                            /* extern */
s32 func_0805AD14(void *);                            /* extern */
s32 func_0805B38C(void *);                            /* extern */
s32 func_0805BC34(void *);                            /* extern */
s32 func_0805C80C(void *);                            /* extern */
s32 func_0805C96C(void *);                          /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_0809ACC0(void *, s32);                       /* extern */
extern ? vtable_unk_080E5B80;

u32 *func_080588AC(u32 *arg0, void *arg1) {
    s16 sp0;
    void *sp4;
    u32 sp8;
    u32 *spC;
    u32 sp10;
    u32 *sp14;
    u32 *sp1C;
    s16 *sp20;
    s16 *temp_r0;
    s16 *temp_r0_16;
    s16 *temp_r0_17;
    s16 *temp_r0_18;
    s16 *temp_r0_19;
    s16 *temp_r1;
    s16 *var_r1_3;
    s16 *var_r1_7;
    s16 *var_r1_8;
    s16 temp_r0_11;
    s16 temp_r0_3;
    s16 temp_r0_5;
    s16 temp_r4_15;
    s16 var_r2;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r1_10;
    s32 temp_r1_11;
    s32 temp_r1_12;
    s32 temp_r1_13;
    s32 temp_r1_4;
    s32 temp_r1_7;
    s32 temp_r1_9;
    s32 temp_r3;
    s32 var_r3;
    s32 var_r4;
    s32 var_r4_4;
    s32 var_r4_5;
    s32 var_r8;
    u16 *var_r1;
    u16 *var_r1_2;
    u16 *var_r1_4;
    u16 *var_r2_2;
    u16 temp_r0_14;
    u16 temp_r0_6;
    u16 temp_r0_7;
    u16 var_r0;
    u16 var_r1_5;
    u16 var_r1_6;
    u32 temp_r1_5;
    u32 temp_r1_8;
    u32 temp_r3_3;
    u32 temp_r4_14;
    u32 var_r4_2;
    u8 temp_r1_6;
    u8 temp_r4_16;
    void *temp_r0_10;
    void *temp_r0_15;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *var_r4_3;
    void *var_r5;
    void *var_r7;

    sp1C = arg0;
    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    func_08009300(temp_r4 + 0xC, temp_r1);
    sp4 = temp_r4;
    func_08050E50(arg1->unk10, 0x75);
    var_r4 = 0;
    do {
        temp_r2 = arg1 + (0x2C * var_r4);
        temp_r3 = var_r4 * 8;
        temp_r2->unk144C = (s16) (arg1->unk8 + temp_r3)->unk2C2A;
        temp_r2->unk1449 = (u8) (arg1->unk8 + temp_r3)->unk2C28;
        temp_r2->unk144A = (u8) (arg1->unk8 + temp_r3)->unk2C29;
        temp_r2->unk1454 = (u16) (arg1->unk8 + temp_r3)->unk2C2C;
        temp_r2->unk1456 = 0;
        var_r4 += 1;
    } while (var_r4 <= 3);
    func_0805C80C(arg1);
    temp_r1_2 = arg1->unk8;
    temp_r1_2->unk2C4A = (u8) (-0x41 & temp_r1_2->unk2C4A);
    temp_r1_3 = arg1->unk8;
    temp_r1_3->unk2C4A = (u8) (0x7F & temp_r1_3->unk2C4A);
    if (arg1->unk1428 != 0) {
        arg1->unk1424 = 0xD;
    } else {
        func_08059C94(arg1);
        func_08059FE0(arg1, 0);
        func_0805A3F0(arg1);
        func_0800934C(sp4 + 0xC, 0x889, 1, 1);
        temp_r0_2 = func_08008940(arg1);
        temp_r0_2->unk8->unk10(temp_r0_2, sp4);
    }
    if (arg1->unk1424 == 0xD) {
        goto block_76;
    }
loop_7:
    func_080087C8(arg1);
    func_080088B8(arg1);
    temp_r0_3 = arg1->unk1424;
    switch ((u32) temp_r0_3) {                      /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_r1_4 = sp4->unk0;
        temp_r1_5 = (u32) ((0 - temp_r1_4) | temp_r1_4) >> 0x1F;
        if (temp_r1_5 != 0) {

        } else {
            arg1->unk140A = (u16) temp_r1_5;
            var_r1 = arg1 + 0x1424;
block_66:
            *var_r1 += 1;
        }
    default:                                        /* switch 1 */
block_74:
        func_0805A4DC(arg1, 0);
        func_0805A744(arg1);
        if (arg1->unk1424 != 0xD) {
            goto loop_7;
        }
block_76:
        func_08008724(arg1);
        temp_r4_2 = arg1 + 0x608;
        func_080073E0(temp_r4_2, temp_r4_2->unk4);
        temp_r4_2->unk4 = 0;
        temp_r4_3 = arg1 + 0x618;
        func_080073E0(temp_r4_3, temp_r4_3->unk4);
        temp_r4_3->unk4 = 0;
        temp_r4_4 = arg1 + 0x620;
        func_080073E0(temp_r4_4, temp_r4_4->unk4);
        temp_r4_4->unk4 = 0;
        temp_r4_5 = arg1 + 0x648;
        func_080073E0(temp_r4_5, temp_r4_5->unk4);
        temp_r4_5->unk4 = 0;
        temp_r4_6 = arg1 + 0x5C8;
        func_080073E0(temp_r4_6, temp_r4_6->unk4);
        temp_r4_6->unk4 = func_0800736C(temp_r4_6);
        temp_r4_7 = arg1 + 0x5D8;
        func_080073E0(temp_r4_7, temp_r4_7->unk4);
        temp_r4_7->unk4 = func_0800736C(temp_r4_7);
        temp_r4_8 = arg1 + 0x5E8;
        func_080073E0(temp_r4_8, temp_r4_8->unk4);
        temp_r4_8->unk4 = func_0800736C(temp_r4_8);
        temp_r4_9 = arg1 + 0x5F8;
        func_080073E0(temp_r4_9, temp_r4_9->unk4);
        temp_r4_9->unk4 = func_0800736C(temp_r4_9);
        temp_r4_10 = arg1 + 0x638;
        func_080073E0(temp_r4_10, temp_r4_10->unk4);
        temp_r4_10->unk4 = func_0800736C(temp_r4_10);
        func_0805AB08(arg1);
        func_0805AD14(arg1);
        func_0805B38C(arg1);
        func_08008B6C(arg1 + 0x18, 0x21);
        func_0800934C(sp4 + 0xC, 0x889, 1, 1);
        temp_r0_4 = func_08008940(arg1);
        temp_r0_4->unk8->unk10(temp_r0_4, sp4);
        sp20 = &sp0 + 0x14;
        if (arg1->unk1424 == 0x1D) {

        } else {
loop_78:
            func_080087C8(arg1);
            func_080088B8(arg1);
            var_r4_2 = 0;
            if (func_080088CC(arg1) & 8) {
                var_r4_2 = (u32) (0 - (u8) (2 & arg1->unk1427)) >> 0x1F;
            }
            if (var_r4_2 != 0) {
                temp_r1_6 = arg1->unk1427 ^ 1;
                arg1->unk1427 = temp_r1_6;
                if (temp_r1_6 & 1) {
                    func_08008B6C(arg1 + 0x1C, 0xB8);
                    goto block_83;
                }
                goto block_85;
            }
block_83:
            if (1 & arg1->unk1427) {
                func_0805BC34(arg1);
            } else {
block_85:
                temp_r0_5 = (u16) arg1->unk1424 - 0xD;
                switch ((u32) temp_r0_5) {          /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    temp_r1_7 = sp4->unk0;
                    temp_r1_8 = (u32) ((0 - temp_r1_7) | temp_r1_7) >> 0x1F;
                    if (temp_r1_8 != 0) {

                    } else {
                        arg1->unk1429 = (u8) temp_r1_8;
                        if (arg1->unk140E == 0) {
                            func_08050E5C(arg1->unk10);
                            var_r1_2 = arg1 + 0x1424;
                            var_r0 = 0x16;
                        } else {
                            func_08050E50(arg1->unk10, 0x75);
                            var_r1_2 = arg1 + 0x1424;
block_118:
                            var_r0 = *var_r1_2 + 1;
                        }
                        *var_r1_2 = var_r0;
                    }
                    break;
                case 1:                             /* switch 2 */
                case 2:                             /* switch 2 */
                case 3:                             /* switch 2 */
                case 4:                             /* switch 2 */
                case 5:                             /* switch 2 */
                case 6:                             /* switch 2 */
                case 7:                             /* switch 2 */
                case 8:                             /* switch 2 */
                    func_08059878(arg1);
                    if (arg1->unk1429 != 2) {

                    } else {
                        arg1->unk1429 = 0U;
                        func_08050E5C(arg1->unk10);
                        var_r1_2 = arg1 + 0x1424;
                        goto block_118;
                    }
                    break;
                case 9:                             /* switch 2 */
                    arg1->unk14E4 = (s32) arg1->unk144C;
                    arg1->unk14E8 = (s32) arg1->unk1478;
                    arg1->unk14EC = (s32) arg1->unk14A4;
                    arg1->unk14F0 = (s32) arg1->unk14D0;
                    arg1->unk14F8 = GetName__C6Animal(arg1->unk14DC);
                    func_08059878(arg1);
                    if (arg1->unk1429 != 2) {

                    } else {
                        arg1->unk1424 = (s16) ((u16) arg1->unk1424 + 1);
                        arg1->unk1406 = 0x78U;
                        arg1->unk1427 = (u8) (2 | arg1->unk1427);
                    }
                    break;
                case 10:                            /* switch 2 */
                    temp_r0_6 = arg1->unk1406 - 1;
                    arg1->unk1406 = temp_r0_6;
                    if ((s32) (temp_r0_6 << 0x10) > 0) {

                    } else {
                        func_0805E860(arg1 + 0x208, 0x766);
                        func_0805E860(arg1 + 0x240, 0x742);
                        func_0805E860(arg1 + 0x278, 0x74E);
                        func_0805E860(arg1 + 0x2B0, 0x75A);
                        func_0805E860(arg1 + 0x2E8, 0x772);
                        arg1->unk13FC = 0;
                        var_r2 = 3;
                        var_r1_3 = arg1 + 0x1404;
                        do {
                            *var_r1_3 = var_r2;
                            var_r1_3 -= 2;
                            var_r2 -= 1;
                        } while ((s32) var_r2 >= 0);
                        func_08008B6C(arg1 + 0x1C, 0xB9);
block_117:
                        var_r1_2 = arg1 + 0x1424;
                        goto block_118;
                    }
                    break;
                case 11:                            /* switch 2 */
                    if (func_0805C96C(arg1) > 3) {
                        arg1->unk1406 = 0x78U;
                        arg1->unk1424 = (s16) ((u16) arg1->unk1424 + 1);
                    }
                    func_0805AD14(arg1);
                    break;
                case 12:                            /* switch 2 */
                    temp_r0_7 = arg1->unk1406 - 1;
                    arg1->unk1406 = temp_r0_7;
                    if ((s32) (temp_r0_7 << 0x10) > 0) {

                    } else {
                        if ((arg1->unk140E == 1) && (arg1->unk13FE == 2)) {
                            temp_r2_2 = arg1->unk8;
                            temp_r2_2->unk2C4A = (u8) (temp_r2_2->unk2C4A | 0x80);
                            SetFestivalWinner__6Animal(arg1->unk14DC);
                        }
                        arg1->unk1427 = (u8) (0xFD & arg1->unk1427);
                        arg1->unk1429 = 0U;
                        var_r1_2 = arg1 + 0x1424;
                        goto block_118;
                    }
                    break;
                case 13:                            /* switch 2 */
                    arg1->unk14E4 = (s32) (arg1 + (0x2C * arg1->unk13FE))->unk144C;
                    arg1->unk14E8 = (s32) (arg1 + (0x2C * arg1->unk1400))->unk144C;
                    arg1->unk14EC = (s32) (arg1 + (0x2C * arg1->unk1402))->unk144C;
                    arg1->unk14F0 = (s32) (arg1 + (0x2C * arg1->unk1404))->unk144C;
                    func_08059878(arg1);
                    if (arg1->unk1429 == 2) {
                        var_r1_2 = arg1 + 0x1424;
                        goto block_118;
                    }
                    break;
                case 14:                            /* switch 2 */
                    func_08009378(sp4 + 0xC, 0x889, 1, 1);
                    temp_r0_8 = func_08008940(arg1);
                    temp_r0_8->unk8->unk10(temp_r0_8, sp4);
                    var_r1_2 = arg1 + 0x1424;
                    goto block_118;
                case 15:                            /* switch 2 */
                    temp_r1_9 = sp4->unk0;
                    if ((s32) ((0 - temp_r1_9) | temp_r1_9) >= 0) {
                        goto block_117;
                    }
                    break;
                }
                func_0805BC34(arg1);
            }
            if (arg1->unk1424 != 0x1D) {
                goto loop_78;
            }
        }
        func_08008724(arg1);
        var_r7 = arg1 + 0x668;
        var_r4_3 = arg1 + 0x664;
        var_r5 = arg1 + 0x660;
        var_r8 = 3;
        do {
            func_080073E0(var_r5, var_r4_3->unk0);
            var_r4_3->unk0 = 0;
            func_080073E0(var_r7, var_r4_3->unk8);
            var_r4_3->unk8 = 0;
            var_r7 += 0x18;
            var_r4_3 += 0x18;
            var_r5 += 0x18;
            var_r8 -= 1;
        } while (var_r8 >= 0);
        temp_r4_11 = arg1 + 0x608;
        func_080073E0(temp_r4_11, temp_r4_11->unk4);
        temp_r4_11->unk4 = func_0800736C(temp_r4_11);
        temp_r4_12 = arg1 + 0x618;
        func_080073E0(temp_r4_12, temp_r4_12->unk4);
        temp_r4_12->unk4 = func_0800736C(temp_r4_12);
        temp_r4_13 = arg1 + 0x620;
        func_080073E0(temp_r4_13, temp_r4_13->unk4);
        temp_r4_13->unk4 = func_0800736C(temp_r4_13);
        arg1->unk140A = 0xFFFFU;
        func_08059C94(arg1);
        func_08059FE0(arg1, 1);
        temp_r0_9 = arg1 + (arg1->unk13FE * 0x2C);
        arg1->unk141E = (s16) (temp_r0_9->unk1454 * temp_r0_9->unk1456);
        func_0800934C(sp4 + 0xC, 0x889, 1, 1);
        temp_r0_10 = func_08008940(arg1);
        temp_r0_10->unk8->unk10(temp_r0_10, sp4);
loop_160:
        if (arg1->unk1424 != 0x24) {
            func_080087C8(arg1);
            func_080088B8(arg1);
            temp_r0_11 = (u16) arg1->unk1424 - 0x1D;
            switch ((u32) temp_r0_11) {             /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                temp_r1_10 = sp4->unk0;
                temp_r4_14 = (u32) ((0 - temp_r1_10) | temp_r1_10) >> 0x1F;
                if (temp_r4_14 != 0) {

                } else {
                    func_08050E5C(arg1->unk10);
                    arg1->unk1429 = (u8) temp_r4_14;
                    var_r1_4 = arg1 + 0x1424;
block_156:
                    *var_r1_4 += 1;
                }
                break;
            case 1:                                 /* switch 3 */
                arg1->unk14F4 = (s32) (arg1->unk141C + 1);
                func_08059878(arg1);
                if (arg1->unk1429 != 2) {

                } else {
                    arg1->unk1422 = 8U;
                    arg1->unk1420 = 0U;
                    arg1->unk1406 = 0x3CU;
                    var_r1_4 = arg1 + 0x1424;
                    goto block_156;
                }
                break;
            case 2:                                 /* switch 3 */
                if (func_080088CC(arg1) & 1) {
                    arg1->unk1422 = 0U;
                    temp_r4_15 = (s16) arg1->unk1406;
                    if (temp_r4_15 == 0) {
                        temp_r0_12 = arg1->unk1418 + arg1->unk141E;
                        arg1->unk1418 = temp_r0_12;
                        if (temp_r0_12 > 0x1869F) {
                            arg1->unk1418 = 0x1869F;
                        }
                        arg1->unk141E = temp_r4_15;
                        func_08008B6C(arg1 + 0x1C, 0xBA);
                    }
                }
                if ((s32) (s16) arg1->unk1406 > 0) {
                    arg1->unk1406 = (u16) (arg1->unk1406 - 1);
                } else if ((s32) arg1->unk141E > 0) {
                    func_08008B6C(arg1 + 0x1C, 0xBA);
                    arg1->unk141E = (s16) ((u16) arg1->unk141E - 1);
                    temp_r0_13 = arg1->unk1418 + 1;
                    arg1->unk1418 = temp_r0_13;
                    if (temp_r0_13 > 0x1869F) {
                        arg1->unk1418 = 0x1869F;
                    }
                    arg1->unk1420 = (u16) (arg1->unk1420 + 1);
                    if (((((s16) arg1->unk1420 % 5) << 0x10) == 0) && ((s32) (s16) arg1->unk1422 > 0)) {
                        arg1->unk1422 = (u16) (arg1->unk1422 - 1);
                    }
                    arg1->unk1406 = (u16) arg1->unk1422;
                } else {
                    temp_r3_2 = arg1->unk8;
                    temp_r3_2->unk2C48 = (s32) ((temp_r3_2->unk2C48 & 0xFFF80003) | ((arg1->unk1418 & 0x1FFFF) * 4));
                    arg1->unk1406 = 0x1EU;
                    var_r1_4 = arg1 + 0x1424;
                    goto block_156;
                }
                break;
            case 3:                                 /* switch 3 */
                temp_r0_14 = arg1->unk1406 - 1;
                arg1->unk1406 = temp_r0_14;
                if ((s32) (temp_r0_14 << 0x10) > 0) {
                    func_08050E50(arg1->unk10, 0x75);
                    arg1->unk1429 = 0U;
                    var_r1_4 = arg1 + 0x1424;
                    goto block_156;
                }
                break;
            case 4:                                 /* switch 3 */
                func_08059878(arg1);
                if ((arg1->unk1429 == 2) && (func_080088CC(arg1) & 1)) {
                    var_r1_4 = arg1 + 0x1424;
                    goto block_156;
                }
                break;
            case 5:                                 /* switch 3 */
                func_08009378(sp4 + 0xC, 0x889, 1, 1);
                temp_r0_15 = func_08008940(arg1);
                temp_r0_15->unk8->unk10(temp_r0_15, sp4);
                var_r1_4 = arg1 + 0x1424;
                goto block_156;
            case 6:                                 /* switch 3 */
                temp_r1_11 = sp4->unk0;
                if ((s32) ((0 - temp_r1_11) | temp_r1_11) >= 0) {
                    arg1->unk1424 = (s16) ((u16) arg1->unk1424 + 1);
                    func_08057F24(arg1->unk8 + 0x2C1C, 1);
                }
                break;
            }
            func_0805A4DC(arg1, 1);
            func_0805A744(arg1);
            goto loop_160;
        }
        sp8 = 0;
        sp14 = &sp8;
        sp20->unk4 = 0;
        sp8 = 0;
        *sp1C = 0;
        if (sp8 != 0) {
            (*sp8)->unk8(sp8, 3);
        }
        if (sp4 != 0) {
            sp4->unk8->unkC(sp4, 3);
        }
        break;
    case 1:                                         /* switch 1 */
        if (arg1->unk1426 == 0) {
            if (func_080088C4(arg1) & 4) {
                temp_r0_16 = func_08008918(arg1);
                sp0 = 0xC40;
                *temp_r0_16 = 0xC40;
                temp_r0_17 = func_08008918(arg1);
                sp0 = 0x1F49;
                temp_r0_17->unkC = 0x1F49;
                arg1->unk1426 = 1U;
            } else {
                if (func_080088CC(arg1) & 0x40) {
                    if ((s32) (s16) arg1->unk140A > 0) {
                        var_r1_5 = arg1->unk140A - 1;
                    } else {
                        var_r1_5 = 4;
                    }
                    arg1->unk140A = var_r1_5;
                    func_08008B6C(arg1 + 0x1C, 0xCB);
                } else if (func_080088CC(arg1) & 0x80) {
                    if ((s32) (s16) arg1->unk140A <= 3) {
                        var_r1_6 = arg1->unk140A + 1;
                    } else {
                        var_r1_6 = 0;
                    }
                    arg1->unk140A = var_r1_6;
                    func_08008B6C(arg1 + 0x1C, 0xCB);
                }
                if ((s16) arg1->unk140A != 4) {
                    var_r4_4 = 0;
                    if (func_080088D4(arg1) & 0x10) {
                        var_r4_4 = 1;
                        goto block_39;
                    }
                    if (func_080088D4(arg1) & 0x20) {
                        var_r4_4 = -1;
                        goto block_39;
                    }
                    if (1 & (func_080088D4(arg1) >> 8)) {
                        var_r4_4 = 0xA;
                        goto block_39;
                    }
                    if (2 & (func_080088D4(arg1) >> 8)) {
                        var_r4_4 = -0xA;
                    }
                    if (var_r4_4 != 0) {
block_39:
                        func_08059780(arg1, var_r4_4);
                        func_08008B6C(arg1 + 0x1C, 0xCB);
                    } else {
                        goto block_40;
                    }
                } else {
block_40:
                    if (func_080088CC(arg1) & 2) {
                        func_08008B6C(arg1 + 0x1C, 0xC6);
                        arg1->unk1429 = 0U;
                        var_r1_7 = arg1 + 0x1424;
                        goto block_53;
                    }
                    var_r4_5 = 0;
                    if ((func_080088CC(arg1) & 8) || ((func_080088CC(arg1) & 1) && ((s16) arg1->unk140A == 4))) {
                        var_r4_5 = 1;
                    }
                    if (var_r4_5 == 0) {

                    } else {
                        func_08008B6C(arg1 + 0x1C, 0xC5);
                        arg1->unk1420 = 0U;
                        var_r2_2 = arg1 + 0x1456;
                        var_r3 = 3;
                        do {
                            arg1->unk1420 = (u16) (*var_r2_2 + arg1->unk1420);
                            var_r2_2 += 0x2C;
                            var_r3 -= 1;
                        } while (var_r3 >= 0);
                        if ((s32) (s16) arg1->unk1420 > 0) {
                            arg1->unk1429 = 0U;
                            arg1->unk1424 = 7;
                        } else {
                            arg1->unk1429 = 0U;
                            var_r1_7 = arg1 + 0x1424;
block_53:
                            *var_r1_7 = 2;
                        }
                    }
                }
            }
        } else {
            temp_r4_16 = func_080088C4(arg1) & 4;
            if (temp_r4_16 != 0) {

            } else {
                temp_r0_18 = func_08008918(arg1);
                sp0 = 0x1E40;
                *temp_r0_18 = 0x1E40;
                temp_r0_19 = func_08008918(arg1);
                sp0 = 0x1D41;
                temp_r0_19->unkC = 0x1D41;
                arg1->unk1426 = temp_r4_16;
            }
        }
        goto block_74;
    case 2:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
        func_08059878(arg1);
        if (arg1->unk1429 != 2) {

        } else if (arg1->unk142A == 0) {
            arg1->unk1424 = 5;
        } else {
            var_r1_8 = arg1 + 0x1424;
block_64:
            *var_r1_8 = 1;
            func_0805A3F0(arg1);
        }
        goto block_74;
    case 7:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
    case 9:                                         /* switch 1 */
        func_08059878(arg1);
        if (arg1->unk1429 != 2) {

        } else if (arg1->unk142A == 0) {
            arg1->unk1424 = 0xA;
        } else {
            var_r1_8 = arg1 + 0x1424;
            goto block_64;
        }
        goto block_74;
    case 5:                                         /* switch 1 */
    case 10:                                        /* switch 1 */
        func_08009378(sp4 + 0xC, 0x889, 1, 1);
        temp_r0_20 = func_08008940(arg1);
        temp_r0_20->unk8->unk10(temp_r0_20, sp4);
        var_r1 = arg1 + 0x1424;
        goto block_66;
    case 11:                                        /* switch 1 */
        temp_r1_12 = sp4->unk0;
        if ((s32) ((0 - temp_r1_12) | temp_r1_12) >= 0) {
            func_0809ACC0(arg1->unk8 + 0x1AA8, 0x32 * (s16) arg1->unk1420);
            arg1->unk1410 = (s32) (arg1->unk1410 - (0x32 * (s16) arg1->unk1420));
            arg1->unk1424 = 0xD;
        }
        goto block_74;
    case 6:                                         /* switch 1 */
        temp_r1_13 = sp4->unk0;
        temp_r3_3 = (u32) ((0 - temp_r1_13) | temp_r1_13) >> 0x1F;
        if (temp_r3_3 == 0) {
            temp_r0_21 = arg1->unk8;
            temp_r0_21->unk2C4A = (u8) (temp_r0_21->unk2C4A | 0x40);
            sp8 = temp_r3_3;
            spC = &sp8;
            sp10 = temp_r3_3;
            sp8 = temp_r3_3;
            *sp1C = temp_r3_3;
            if (sp8 != 0) {
                (*sp8)->unk8(sp8, 3);
            }
            if (sp4 != 0) {
                sp4->unk8->unkC(sp4, 3);
            }
        } else {
            goto block_74;
        }
        break;
    }
    return sp1C;
}
