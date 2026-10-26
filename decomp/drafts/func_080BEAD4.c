s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088DC(void *);                          /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008920(void *);                          /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08008B88(void *, s32);                       /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08050D34(s32);                             /* extern */
u32 func_08050D3C(s32, s32, s32, s16 *);            /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050D8C(s32, ? *);                          /* extern */
s32 func_08050DD8(s32);                               /* extern */
s32 func_08050DE4(s32);                               /* extern */
s32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, ? *, ? *, ? *);                /* extern */
s32 func_08050E50(s32, u16);                          /* extern */
s32 func_080BDF40(void *);                            /* extern */
u16 func_080C0B58(void *);                          /* extern */
extern ? gUnk_08107DD8;
extern ? gUnk_08107DF4;
extern ? gUnk_08107DF8;
extern ? gUnk_08107DFC;
extern ? gUnk_08107E24;
extern ? gUnk_08107E58;
extern ? gUnk_08107EC8;
extern ? gUnk_08107F18;
extern ? gUnk_08107F2C;
extern ? gUnk_08107F3C;
extern ? gUnk_08107F4C;

void func_080BEAD4(void *arg0) {
    void *sp0;
    s32 sp4;
    void *sp8;
    s16 spC;
    u32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s16 *temp_r0;
    s16 *temp_r5;
    s16 *temp_r5_2;
    s32 *temp_r2;
    s32 *var_r1_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r1;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 temp_sl;
    s32 temp_sl_2;
    s32 var_r0;
    s8 *var_r1;
    u16 temp_r0_9;
    u32 temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r4;
    void *temp_r4_3;

    sp10 = 0;
    sp14 = 0;
    arg0->unk611 = 0U;
    arg0->unk612 = (u8) sp0.unk14;
    sp18 = 0;
    sp1C = 0x8500;
    temp_r0 = func_08008918(arg0);
    spC = 0x1740;
    *temp_r0 = 0x1740;
    temp_sl = arg0->unk418;
    temp_sb = func_080088DC(arg0);
    sp20 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0_2 = func_0800894C(arg0);
    sp0 = temp_r4;
    sp4 = temp_r0_2;
    sp8 = arg0 + 0x57C;
    func_08050D3C(temp_sl, temp_sb, sp20, temp_r5);
    temp_r4_2 = arg0->unk418;
    func_08050E50(temp_r4_2, func_080C0B58(arg0));
loop_93:
    if (arg0->unk5A0 == 0) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_r6 = func_08050D34(arg0->unk418);
        temp_sb_2 = arg0->unk418;
        temp_r8 = func_080088DC(arg0);
        temp_sl_2 = func_08008920(arg0);
        temp_r5_2 = func_08008918(arg0);
        temp_r4_3 = func_08008940(arg0);
        temp_r0_3 = func_0800894C(arg0);
        sp0 = temp_r4_3;
        sp4 = temp_r0_3;
        sp8 = arg0 + 0x57C;
        temp_r0_4 = func_08050D3C(temp_sb_2, temp_r8, temp_sl_2, temp_r5_2);
        switch (temp_r0_4) {                        /* switch 1; irregular */
        case 1:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
        case 5:                                     /* switch 1 */
        case 6:                                     /* switch 1 */
            break;
        case 0:                                     /* switch 1 */
            if (sp10 == 8) {
                arg0->unk5A0 = 1;
            } else {
                func_08050D5C(arg0->unk418);
                if (sp10 != 5) {

                } else {
                    temp_r2 = arg0->unk43C;
                    temp_r1 = *temp_r2;
                    if ((s32) ((0 - temp_r1) | temp_r1) >= 0) {
                        func_08009378(temp_r2 + 0xC, 0x889, 1, 1);
                        temp_r0_5 = func_08008940(arg0);
                        temp_r0_5->unk8->unk10(temp_r0_5, arg0->unk43C);
                    }
loop_12:
                    temp_r0_6 = *arg0->unk43C;
                    if ((s32) ((0 - temp_r0_6) | temp_r0_6) < 0) {
                        func_080087C8(arg0);
                        func_080BDF40(arg0);
                        goto loop_12;
                    }
                    func_0800934C(arg0->unk43C + 0xC, 0x889, 1, 1);
                    temp_r0_7 = func_08008940(arg0);
                    temp_r0_7->unk8->unk10(temp_r0_7, arg0->unk43C);
                }
            }
            break;
        case 3:                                     /* switch 1 */
            switch (temp_r6) {                      /* switch 2; irregular */
            case 6:                                 /* switch 2 */
                temp_r0_8 = func_08050DF0(arg0->unk418);
                switch (temp_r0_8) {                /* switch 4; irregular */
                case 1:                             /* switch 4 */
                    if (sp10 == 0) {
                        sp10 = 1;
                    } else if (sp10 == 6) {
                        sp10 = 7;
                    }
                    break;
                case 2:                             /* switch 4 */
                    if (sp10 == 0) {
                        sp10 = 7;
                    } else if (sp10 == 6) {
                        sp10 = 1;
                        sp18 = 0;
                    }
                    break;
                }
                break;
            default:                                /* switch 2 */
                func_08050D74(arg0->unk418);
                break;
            case 1:                                 /* switch 2 */
                switch (sp10) {                     /* switch 3; irregular */
                case 0:                             /* switch 3 */
                    sp0 = 0;
                    sp4 = 0;
                    sp8 = 0;
                    func_08050E30(arg0->unk418, &gUnk_08107DD8, &gUnk_08107DF4, &gUnk_08107DF8);
                    break;
                case 1:                             /* switch 3 */
                    func_08050D8C(arg0->unk418, &gUnk_08107DFC);
                    sp10 += 1;
                    break;
                case 2:                             /* switch 3 */
                    func_08050D8C(arg0->unk418, &gUnk_08107E24);
                    sp10 += 1;
                    break;
                case 3:                             /* switch 3 */
                    func_08050D8C(arg0->unk418, &gUnk_08107E58);
                    sp14 = 0;
                    sp10 += 1;
                    break;
                case 4:                             /* switch 3 */
                    func_08050D8C(arg0->unk418, &gUnk_08107EC8);
                    func_08050DD8(arg0->unk418);
                    sp14 = 0;
                    sp10 += 1;
                    arg0->unk611 = 0U;
                    break;
                case 5:                             /* switch 3 */
                    sp0 = 0;
                    sp4 = 0;
                    sp8 = 0;
                    func_08050E30(arg0->unk418, &gUnk_08107F18, &gUnk_08107F2C, &gUnk_08107F3C);
                    arg0->unk612 = 0U;
                    arg0->unk5AC = 0;
                    arg0->unk609 = 0;
                    arg0->unk60E = 1;
                    sp10 += 1;
                    sp14 = 0;
                    break;
                case 7:                             /* switch 3 */
                    func_08050D8C(arg0->unk418, &gUnk_08107F4C);
                    sp10 += 1;
                    sp14 = 0;
                    break;
                }
                break;
            }
            break;
        case 4:                                     /* switch 1 */
            if ((temp_r6 == 5) && (sp18 == 0) && (sp10 == 4)) {
                func_08050DD8(arg0->unk418);
            }
            break;
        }
        temp_r4_4 = sp10 - 1;
        switch (temp_r4_4) {                        /* switch 5; irregular */
        case 4:                                     /* switch 5 */
            if (arg0->unk612 == 0) {
                func_08008B88(arg0 + 0x580, 0xBD);
            }
            switch (sp14) {                         /* switch 7; irregular */
            case 0x0:                               /* switch 7 */
                arg0->unk612 = (u8) sp14;
                arg0->unk5AC = sp14;
                var_r1 = arg0 + 0x60E;
block_84:
                *var_r1 = 1;
                break;
            case 0x5A:                              /* switch 7 */
                var_r1_2 = arg0 + 0x5AC;
                var_r0 = 3;
block_83:
                *var_r1_2 = var_r0;
                var_r1 = arg0 + 0x60E;
                goto block_84;
            case 0x3C:                              /* switch 7 */
            case 0x78:                              /* switch 7 */
                var_r1_2 = arg0 + 0x5AC;
                var_r0 = 2;
                goto block_83;
            case 0x1E:                              /* switch 7 */
            case 0x96:                              /* switch 7 */
                arg0->unk5AC = 1;
                arg0->unk60E = 1;
                break;
            case 0xB4:                              /* switch 7 */
                arg0->unk612 = 1U;
                arg0->unk60E = 1;
                func_08008B6C(arg0 + 0x580, 0xBC);
                break;
            case 0xD2:                              /* switch 7 */
                func_08050DE4(arg0->unk418);
                sp14 = -1;
                break;
            }
            sp14 += 1;
            break;
        case 2:                                     /* switch 5 */
            if (sp14 == 0) {
                arg0->unk609 = 1;
                arg0->unk60E = 1;
                sp14 = 1;
            }
            func_08008B88(arg0 + 0x580, 0xBD);
            break;
        case 3:                                     /* switch 5 */
            if (arg0->unk611 == 0) {
                func_08008B88(arg0 + 0x580, 0xBD);
            }
            switch (sp14) {                         /* switch 6; irregular */
            case 0x1E:                              /* switch 6 */
                arg0->unk5AC = 1;
                arg0->unk60E = 1;
                break;
            case 0x3C:                              /* switch 6 */
                arg0->unk5AC = 2;
block_65:
                arg0->unk60E = 1;
                break;
            case 0x5A:                              /* switch 6 */
                arg0->unk5AC = temp_r4_4;
                goto block_65;
            case 0x78:                              /* switch 6 */
                arg0->unk611 = 1U;
                arg0->unk60E = 1;
                func_08008B6C(arg0 + 0x580, 0xC7);
                break;
            default:                                /* switch 6 */
                if ((u32) (sp14 - 0x79) <= 0x1CU) {
                    temp_r0_9 = sp1C + 0x20;
                    sp1C = (s32) temp_r0_9;
                    arg0->unk608 = (s8) ((u32) (temp_r0_9 << 0x10) >> 0x18);
                } else if (sp14 == 0x96) {
                    sp1C = 0x8500;
                    arg0->unk608 = 0x85;
                    arg0->unk611 = 0U;
                    arg0->unk5AC = 0;
                    arg0->unk60E = 1;
                    sp14 = 0;
                    sp18 = 1;
                    func_08050DE4(arg0->unk418);
                }
                break;
            }
            sp14 += 1;
            break;
        }
        func_080BDF40(arg0);
        goto loop_93;
    }
}
