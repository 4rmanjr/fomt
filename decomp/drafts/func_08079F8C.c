s32 free(s32);                                        /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008E64(s32 **, s32, s32);                    /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804E5AC(s32, ? **, s32, s32);               /* extern */
s32 func_0804E7A0(s32, ? **, s32);                    /* extern */
s32 func_0804E958(s32, ? **, s32, s32);               /* extern */
s32 func_0807A2AC(void *, s32);                     /* extern */
s32 func_0807A708(void *, s32, ? *);                  /* extern */
s32 func_080D3BC0(s32);                             /* extern */
s32 malloc(s32);                                    /* extern */
s32 memmove(s32, s32, s32);                         /* extern */

void func_08079F8C(void *arg0) {
    ? *sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
s32 sp10;
    ? *sp34;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
s32 sp8C;
    ? **sp90;
    ? **sp94;
    s32 sp98;
    ? **sp9C;
    s32 spA0;
    s16 *temp_r0_8;
    s32 *temp_r4;
    s32 *var_r0_2;
    s32 *var_r1;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r0;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5_2;
    s32 var_r7;
    s32 var_r8;
    s32 var_r8_2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 var_r5;
    u8 temp_r4_5;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r5;

    var_r5 = 0;
    sp9C = &sp0 + 0x80;
    if (*arg0->unkA5C != 0) {
loop_2:
        temp_r1 = *(((s32) (var_r5 << 0x10) >> 0xE) + arg0->unkA5C);
        if ((temp_r1->unk0 == 0x3C) && ((u32) (u8) (temp_r1->unk1 - 0x30) <= 9U)) {
            var_r2 = 0;
            do {
                (&sp0 + var_r2)->unkC = (s8) ((var_r2 + temp_r1)->unk1 - 0x30);
                var_r2 += 1;
            } while (var_r2 <= 2);
            if (func_0807A2AC(arg0, (0x64 * spC.unk0) + (spC.unk1 * 0xA) + spC.unk2) != 1) {
                goto block_7;
            }
        } else {
block_7:
            temp_r0 = (var_r5 << 0x10) + 0x10000;
            var_r5 = temp_r0 >> 0x10;
            if (*(((s32) temp_r0 >> 0xE) + arg0->unkA5C) != 0) {
                goto loop_2;
            }
        }
    }
    temp_r0_2 = (var_r5 << 0x10) + 0xFFFF0000;
    temp_r0_3 = ((s32) temp_r0_2 >> 0x10) + 2;
    if (temp_r0_3 > 0xA) {
        var_r1 = arg0 + 0x848;
        var_r0 = (temp_r0_3 - 0xA) << 0x14;
    } else {
        var_r1 = arg0 + 0x848;
        var_r0 = 0;
    }
    *var_r1 = var_r0;
    (arg0 + 0xA60)->unk4 = (s32) arg0->unkA60;
    var_r3 = 0;
    sp98 = (temp_r0_2 >> 0x10) << 0x10;
    sp94 = arg0 + 0x14;
    if (sp98 > 0) {
        do {
            temp_r0_4 = ((var_r3 * 4) + arg0->unkA5C)->unk4;
            var_r7 = var_r3 + 1;
            if (((temp_r0_4->unk0 << 8) | temp_r0_4->unk1) == 0x819A) {
                sp74 = var_r3;
                temp_r5 = arg0 + 0xA60;
                temp_r4 = temp_r5->unk4;
                if (temp_r4 != temp_r5->unkC) {
                    if (temp_r4 != 0) {
                        *temp_r4 = var_r3;
                    }
                    temp_r5->unk4 = (s32 *) (temp_r5->unk4 + 4);
                } else {
                    sp7C = 1;
                    temp_r4_2 = (s32) (temp_r4 - arg0->unkA60) >> 2;
                    sp78 = temp_r4_2;
                    var_r0_2 = &sp78;
                    if ((u32) temp_r4_2 < 1U) {
                        var_r0_2 = &sp7C;
                    }
                    temp_r0_5 = temp_r4_2 + *var_r0_2;
                    if (temp_r0_5 != 0) {
                        temp_r4_3 = temp_r0_5 * 4;
                        spA0 = var_r3;
                        var_r0_3 = malloc(temp_r4_3);
                        var_r8 = temp_r4_3;
                        if (var_r0_3 == 0) {
                            var_r0_3 = func_080D3BC0(var_r8);
                            var_r3 = spA0;
                        }
                    } else {
                        var_r0_3 = 0;
                        var_r8 = 0;
                    }
                    temp_r1_2 = arg0->unkA60;
                    if (temp_r4 != temp_r1_2) {
                        temp_r4_4 = temp_r4 - temp_r1_2;
                        spA0 = var_r3;
                        var_r0_4 = memmove(var_r0_3, temp_r1_2, temp_r4_4) + temp_r4_4;
                    } else {
                        var_r0_4 = var_r0_3;
                    }
                    var_r4 = var_r0_4;
                    var_r1_2 = sp7C;
                    temp_r2 = arg0->unkA60;
                    var_r7 = var_r3 + 1;
                    if (var_r1_2 != 0) {
                        do {
                            *var_r4 = (s32) sp74;
                            var_r4 += 4;
                            var_r1_2 -= 1;
                        } while (var_r1_2 != 0);
                    }
                    if (temp_r2 != 0) {
                        free(temp_r2);
                    }
                    arg0->unkA60 = var_r0_3;
                    temp_r5->unk4 = (s32 *) var_r4;
                    temp_r5->unkC = (s32) (var_r8 + var_r0_3);
                }
            }
            var_r3 = var_r7;
        } while (var_r3 < (s32) (sp98 >> 0x10));
    }
    func_08008EB8(0, 0x06000C00, 0xE00);
    var_r4_2 = 0;
    var_r8_2 = 0x06001A00;
    do {
        sp80 = 0x1C;
        sp9C->unk2 = 2;
        func_0804E7A0(sp80, sp94, 0);
        if (var_r4_2 < (s32) (sp98 >> 0x10)) {
            temp_r1_3 = ((var_r4_2 * 4) + arg0->unkA5C)->unk4;
            if (temp_r1_3 != 0) {
                func_0807A708(arg0, temp_r1_3, &sp10);
                sp84.unk0 = 0x1C;
                sp84.unk2 = 2;
                sp0 = &sp10;
                sp4 = 0;
                sp8 = 1;
                func_0804E958(sp84, sp94, 0, 0);
            }
        }
        func_08008E64(sp94, var_r8_2, 0x700);
        var_r8_2 += 0x700;
        var_r4_2 += 1;
    } while (var_r4_2 <= 8);
    temp_r0_6 = arg0 + 0x820;
    func_08008EB8(0, (func_08007D4C(temp_r0_6, temp_r0_6->unk4) << 5) + 0x06010000, 0x700);
    temp_r1_4 = *arg0->unkA5C;
    if (temp_r1_4 != 0) {
        func_0807A708(arg0, temp_r1_4, &spC);
        var_r5_2 = 0;
        sp90 = &sp0 + 0x34;
loop_39:
        temp_r4_5 = (&sp0 + var_r5_2)->unkC;
        if (temp_r4_5 != 0) {
            sp88.unk0 = 1;
            sp88.unk2 = 2;
            func_0804E7A0(sp88, &sp34, 0);
            sp8C.unk0 = 1;
            sp8C.unk2 = 2;
            sp0 = (s32 *) temp_r4_5;
            sp4 = 0;
            sp8 = 1;
            func_0804E5AC((s32) sp8C.unk0, &sp34, 0, 0);
            temp_r0_7 = arg0 + 0x820;
            func_08008E64(sp90, ((func_08007D4C(temp_r0_7, temp_r0_7->unk4) + (var_r5_2 * 2)) << 5) + 0x06010000, 0x40);
            var_r5_2 += 1;
            if (var_r5_2 <= 0x1B) {
                goto loop_39;
            }
        }
    }
    temp_r0_8 = func_08008918(arg0);
    spC.unk0 = 0x1E40;
    *temp_r0_8 = 0x1E40;
}
