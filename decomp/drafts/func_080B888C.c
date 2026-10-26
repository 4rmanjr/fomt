s32 __builtin_new(s32);                             /* extern */
s32 func_08007128(s32 *);                               /* extern */
s32 func_08007184(s32 *, s32);                          /* extern */
s32 func_0800736C(s32 *);                             /* extern */
s32 func_080073E0(s32 *, s32);                          /* extern */
s32 func_0800745C(s32 *, s32);                        /* extern */
s32 func_0800770C(s32 *);                             /* extern */
s32 func_08007714(s32 *, s32);                        /* extern */
s32 func_08007874(s32 *);                               /* extern */
s32 func_080079E8(s32 *, s32);                          /* extern */
s32 func_08007B54(s32 *, s32);                        /* extern */
s32 func_08007C28(s32 *, s32);                          /* extern */
s32 func_08007D4C(s32 *);                             /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008BB0(void *, s32);                       /* extern */
s32 func_08008BE0(void *);                            /* extern */
s32 func_08009378(s32 *, s32, s32, s32);              /* extern */
s32 func_08050CC0(s32, s32, s32, s32, s32, ? *, s32 *); /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
s32 func_08050D34(s32);                             /* extern */
s32 func_08050D3C(s32, s32, s32, s32, void *, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050D8C(s32, ? *);                          /* extern */
s32 func_08050DD8(s32);                               /* extern */
s32 func_08050DE4(s32);                               /* extern */
s32 func_08050E50(s32, s32);                          /* extern */
s32 func_0805E99C(s32, s32, u16, s32);                /* extern */
s32 func_080B87C4(void *);                            /* extern */
s32 func_080B8EBC(void *, u8, s32);                   /* extern */
s32 func_080BAC9C(void *, s32);                       /* extern */
s32 func_080BB8EC(void *, s32);                       /* extern */
s32 func_080BC288(void *, ? *);                       /* extern */
s32 memcpy(void *, ? *, u32);                         /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_08107ABC;
extern ? gUnk_08107AC4;

void func_080B888C(void *arg0) {
s32 spC;
    s32 sp10;
s32 sp14;
    s32 sp18;
s32 sp1C;
    s32 sp20;
s32 sp24;
s32 sp2C;
s32 sp34;
    s32 sp38;
s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 **sp5C;
    s32 *sp60;
    ? *sp64;
    ? *temp_r2;
    ? *var_r0;
    ? *var_r8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r0_9;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_3;
    s32 temp_r6_2;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_r8_2;
    s32 var_sb;
    u16 var_r2;
    u16 var_r2_2;
    u32 temp_r0_4;
    u32 temp_r0_8;
    u32 temp_r1_2;
    u32 temp_r5_2;
    u32 temp_r5_4;
    u32 var_r4;
    u32 var_r4_2;
    u8 var_r4_3;
    void *temp_r0_6;
    void *temp_r4;
    void *temp_r6;
    void *temp_r6_3;
    void *var_r5;

    temp_r0 = arg0->unk718;
    if ((temp_r0 != 0) && (temp_r0 != 0)) {
        func_08050D0C(temp_r0, 3);
    }
    arg0->unk718 = 0;
    temp_r5 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    temp_r0_2 = func_08050CC0(temp_r5, 0, 0xF, 0, 0, &spC, &sp10);
    temp_r0_3 = arg0->unk718;
    if ((temp_r0_2 != temp_r0_3) && (temp_r0_3 != 0)) {
        func_08050D0C(temp_r0_3, 3);
    }
    arg0->unk718 = temp_r0_2;
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08050E50(arg0->unk718, 0);
    func_08007874(&spC);
    sp10 = 0;
    func_08007874(&sp14);
    sp14.unk4 = 0;
    func_08007874(&sp1C);
    sp1C.unk4 = 0;
    func_08007874(&sp24);
    sp24.unk4 = 0;
    func_08007874(&sp2C);
    sp2C.unk4 = 0;
    func_08007C28(&spC, sp10);
    sp10 = func_08007B54(&spC, 3);
    sp44 = func_08007D4C(&spC);
    func_08007C28(&sp14, sp18);
    sp18 = func_08007B54(&sp14, 7);
    sp48 = func_08007D4C(&sp14);
    func_08007C28(&sp1C, sp20);
    sp20 = func_08007B54(&sp1C, 5);
    func_08007128(&sp34);
    sp38 = func_0800736C(&sp34);
    arg0->unk8 = 0;
    temp_r2 = arg0 + 8;
    sp64 = temp_r2;
    sp60 = arg0 + 0xC4;
    if ((s32) arg0->unkC4 < 0) {
        var_r8 = arg0 + 0x9E;
        var_r0 = temp_r2;
    } else {
        var_r8 = arg0 + 0xDE;
        var_r0 = sp64;
    }
    temp_r0_4 = strlen(var_r0);
    temp_r6 = sp64 + temp_r0_4;
    temp_r5_2 = 0x63 - temp_r0_4;
    if (temp_r5_2 != 0) {
        var_r4 = strlen(var_r8);
        if (var_r4 > temp_r5_2) {
            var_r4 = temp_r5_2;
        }
        memcpy(temp_r6, var_r8, var_r4);
        *(temp_r6 + var_r4) = 0;
    }
    sp4C = 0xB5;
    sp50 = 0;
    func_080B87C4(arg0);
    func_08007128(&sp3C);
    sp40 = func_0800745C(&sp3C, sp38);
    func_080BC288(arg0, &sp3C);
    func_080B8EBC(arg0, 0U, sp44);
    func_080B8EBC(arg0, 1U, sp44);
    func_080BAC9C(arg0, sp48);
    func_08008BB0(arg0 + 0x710, 0xB4);
    sp54 = 0;
    if (arg0->unkB14 != 3) {

    } else {
        sp5C = arg0 + 0x7A0;
loop_16:
        func_080087C8(arg0);
        func_080088B8(arg0);
        sp58 = func_08050D34(arg0->unk718);
        temp_sb = arg0->unk718;
        temp_r8 = func_080088DC(arg0);
        temp_r6_2 = func_08008920(arg0);
        temp_r5_3 = func_08008918(arg0);
        temp_r4 = func_08008940(arg0);
        temp_r0_5 = func_08050D3C(temp_sb, temp_r8, temp_r6_2, temp_r5_3, temp_r4, func_0800894C(arg0), arg0 + 0x708);
        if (sp54 != 0) {
            temp_r1 = **sp5C;
            temp_r1_2 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
            if (temp_r1_2 != 0) {

            } else {
                arg0->unkB14 = temp_r1_2;
            }
        } else {
            switch (temp_r0_5) {                    /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                if (sp50 > 1) {
                    sp54 = 1;
                    func_08009378(*sp5C + 0xC, 0x889, 1, 1);
                    temp_r0_6 = func_08008940(arg0);
                    temp_r0_6->unk8->unk10(temp_r0_6, *sp5C);
                    if ((s32) *sp60 < 0) {
                        temp_r0_7 = arg0->unkB18;
                        if (temp_r0_7 <= 1) {
                            arg0->unkB18 = (s32) (temp_r0_7 + 1);
                        } else {
                            arg0->unkB32 = (u8) sp54;
                            arg0->unkB30 = (u8) sp54;
                        }
                    } else {
                        arg0->unkB32 = (u8) sp54;
                    }
                } else {
                    func_08050D5C(arg0->unk718);
                }
                break;
            case 3:                                 /* switch 1 */
                if (sp58 != 1) {
                    func_08050D74(arg0->unk718);
                } else {
                    switch (sp50) {                 /* switch 2; irregular */
                    case 0:                         /* switch 2 */
                        func_08050D8C(arg0->unk718, &gUnk_08107ABC);
                        sp50 = 1;
                        break;
                    case 1:                         /* switch 2 */
                        func_08008BE0(arg0 + 0x710);
                        arg0->unkB40 = sp54;
                        arg0->unkB44 = sp50;
                        arg0->unkB50 = sp54;
                        temp_r0_8 = strlen(sp64);
                        temp_r6_3 = sp64 + temp_r0_8;
                        temp_r5_4 = 0x63 - temp_r0_8;
                        if (temp_r5_4 != 0) {
                            var_r4_2 = strlen(&gUnk_08107AC4);
                            if (var_r4_2 > temp_r5_4) {
                                var_r4_2 = temp_r5_4;
                            }
                            memcpy(temp_r6_3, &gUnk_08107AC4, var_r4_2);
                            *(temp_r6_3 + var_r4_2) = sp54;
                        }
                        func_08050D8C(arg0->unk718, sp64);
                        func_08050DD8(arg0->unk718);
                        sp4C = 0;
                        sp50 += 1;
                        break;
                    }
                }
                break;
            }
        }
        if (sp4C <= 0xB3) {
            sp4C += 1;
        }
        if (sp4C == 0xB4) {
            func_08050DE4(arg0->unk718);
        }
        var_r4_3 = 0;
        do {
            if ((s32) arg0->unk84 < 0) {
                func_080B8EBC(arg0, (u8) (1 - var_r4_3), sp44);
            } else {
                func_080B8EBC(arg0, var_r4_3, sp44);
            }
            var_r4_3 += 1;
        } while ((s32) var_r4_3 <= 1);
        func_080BB8EC(arg0, sp48);
        var_sb = 0;
        var_r5 = arg0 + 0xFFFFFE8A;
        var_r8_2 = 0;
        do {
            if (var_sb <= 7) {
                temp_r4_2 = func_08008920(arg0);
                temp_r0_9 = arg0->unkACC;
                var_r2 = 0;
                if (temp_r0_9 != 0) {
                    var_r2 = (arg0 + 0xACC)->unk4;
                }
                func_0805E99C(temp_r4_2, temp_r0_9, var_r2, (var_r8_2 + arg0)->unkAEC);
            } else {
                *(var_r8_2 + arg0)->unkAEC = (s16) ((u16) var_r5->unk0 >> 8);
                (var_r8_2 + arg0)->unkAEC->unk2 = (s16) ((u16) var_r5->unk2 >> 8);
                (var_r8_2 + arg0)->unkAEC->unk8 = (s16) var_r5->unkB;
                temp_r4_3 = func_08008920(arg0);
                temp_r1_3 = arg0->unkAA8;
                var_r2_2 = 0;
                if (temp_r1_3 != 0) {
                    var_r2_2 = (arg0 + 0xAA8)->unk4;
                }
                func_0805E99C(temp_r4_3, temp_r1_3, var_r2_2, (var_r8_2 + arg0)->unkAEC);
            }
            var_r5 += 0x40;
            var_r8_2 += 4;
            var_sb += 1;
        } while (var_sb <= 9);
        if (arg0->unkB14 == 3) {
            goto loop_16;
        }
    }
    func_080073E0(&sp34, sp38);
    func_08007184(&sp34, 2);
    func_08007C28(&sp2C, sp30);
    func_080079E8(&sp2C, 2);
    func_08007C28(&sp24, sp28);
    func_080079E8(&sp24, 2);
    func_08007C28(&sp1C, sp20);
    func_080079E8(&sp1C, 2);
    func_08007C28(&sp14, sp18);
    func_080079E8(&sp14, 2);
    func_08007C28(&spC, sp10);
    func_080079E8(&spC, 2);
}
