void *__builtin_new(s32);                           /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
s32 func_080088D4(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08050D8C(void *, s32 *);                       /* extern */
s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
s32 func_08050E98(void *, s32);                       /* extern */
s32 func_08098CE8(void *, void *);                    /* extern */
s32 func_08099000(void *, s32);                       /* extern */
s32 func_08099144(void *, u32, s32, s32);             /* extern */
s32 func_080CD8A0(void *);                            /* extern */
extern s32 gUnk_08100AC0;
extern s32 gUnk_08100DE4;
extern s32 gUnk_08100DF4;
extern s32 gUnk_08101064;
extern s32 gUnk_08117838;
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    struct GenObj *unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[60];
    s32 unk50;
    u8 _pad54[732];
    s32 unk330;
    u8 _pad334[38];
    s32 unk35A;
    u8 _pad35E[2];
    s32 unk360;
    s32 unk362;
} GenObj;
s32 func_08095D80(GenObj *arg0) {
    s16 sp0;
    GenObj *sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *var_r1;
    s32 temp_r1_2;
    s32 temp_r1_5;
    s32 temp_r2_2;
    s32 temp_r4_5;
    s32 temp_r5_2;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r0_4;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r8;
    s32 var_sb;
    u16 temp_r2;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 var_r0_3;
    u32 temp_r1_4;
    u32 var_sl;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r1;
    void *temp_r1_3;
    GenObj *temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_6;
    GenObj *temp_r4_7;
    GenObj *temp_r4_8;
    void *temp_r5;
    void *temp_r5_3;
    void *var_r0_2;

    sp8 = 0;
    var_sl = 0;
    func_08008724(arg0);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x320);
    func_080073E0(temp_r4, temp_r4->unk4);
    temp_r4->unk4 = func_0800736C(temp_r4);
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x308);
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    temp_r4_2->unk4 = func_0800736C(temp_r4_2);
    func_08098CE8(arg0, (GenObj *)((u8 *)arg0 + 0x348));
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4_3 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4_3->unk0 = 0;
    temp_r4_3->unk4 = 0;
    temp_r4_3->unk8 = &vtable_unk_080E5B80;
    temp_r5 = (GenObj *)((u8 *)temp_r4_3 + 0xC);
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4_3;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    var_sb = 0;
    spC = 0;
    var_r8 = 0;
    sp10 = 0;
    sp14 = -1;
    arg0->unk362 = 0xC8;
    sp18 = 0;
loop_1:
    func_080087C8(arg0);
    func_080088B8(arg0);
    switch (var_sl) {                               /* irregular */
    case 0:
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            var_sl = 1;
        }
        break;
    case 1:
        temp_r5_2 = var_sb;
        if (func_080088D4(arg0) & 0x10) {
            if (temp_r5_2 <= 2) {
                var_r0 = var_sb + 1;
            } else {
                var_r0 = 0;
            }
            goto block_15;
        }
        if (func_080088D4(arg0) & 0x20) {
            if (var_sb > 0) {
                var_r0 = var_sb - 1;
            } else {
                var_r0 = 3;
            }
block_15:
            var_sb = var_r0;
        } else {
            var_r4 = 0;
            if ((func_080088D4(arg0) & 0x80) || (func_080088D4(arg0) & 0x40)) {
                var_r4 = 1;
            }
            if (var_r4 != 0) {
                spC ^= 1;
            }
        }
        if ((temp_r5_2 != var_sb) || (spC != spC)) {
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xCB);
        }
        temp_r7 = (spC * 4) + var_sb;
        temp_r1_3 = ((temp_r7 + 1) * 4) + &gUnk_08117838;
        arg0->unk360 = (s16) temp_r1_3->unk0;
        arg0->unk362 = (s16) temp_r1_3->unk1;
        if (sp14 != temp_r7) {
            sp14 = temp_r7;
            if (((s32) arg0->unk330 >> temp_r7) & 1) {
                if (temp_r7 != 7) {
                    temp_r5_3 = (GenObj *)((u8 *)arg0 + 0x80);
                    func_08050E98(temp_r5_3, 4);
                    var_r0_2 = temp_r5_3;
                    var_r1 = (0xB * temp_r7) + &gUnk_08101064;
                } else {
                    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x80);
                    func_08050E98(temp_r4_4, 4);
                    var_r0_2 = temp_r4_4;
                    var_r1 = &gUnk_08100DE4;
                }
                func_08050DC8(var_r0_2, var_r1, 0, 0);
            } else {
                func_08050D8C((GenObj *)((u8 *)arg0 + 0x80), &gUnk_08100AC0);
            }
        }
        if (func_080088CC(arg0) & 1) {
            if (((s32) arg0->unk330 >> temp_r7) & 1) {
                if (temp_r7 != 7) {
                    temp_r2 = arg0->unk35A;
                    arg0->unk35A = (u16) ((0xFFFFF000 & temp_r2) | ((((u32) (temp_r2 << 0x14) >> 0x14) ^ (1 << temp_r7)) & 0xFFF));
                } else {
                    sp10 = 1;
                    var_sl = 2;
                }
                goto block_43;
            }
            goto block_44;
        }
        if (func_080088CC(arg0) & 2) {
            temp_r3 = arg0->unk35A;
            if (0xFFF & temp_r3) {
                if (temp_r7 != 7) {
                    temp_r1_4 = (u32) (temp_r3 << 0x14) >> 0x14;
                    temp_r2_2 = 1 << temp_r7;
                    if (temp_r1_4 & temp_r2_2) {
                        var_r0_3 = (0xFFFFF000 & temp_r3) | (temp_r1_4 & ~temp_r2_2 & 0xFFF);
                    } else {
                        var_r0_3 = 0xFFFFF000 & temp_r3;
                    }
                    arg0->unk35A = var_r0_3;
block_43:
                    func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xC5);
                } else {
block_44:
                    func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xC7);
                }
            } else {
                func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xC6);
                sp8 = 2;
                var_sl = 5;
                func_08050D8C((GenObj *)((u8 *)arg0 + 0x80), &gUnk_08100AC0);
            }
        } else if (!(func_080088CC(arg0) & 8)) {

        } else {
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xC5);
            var_sl = 3;
        }
        break;
    case 2:
        temp_r4_5 = var_r8;
        if (func_080088D4(arg0) & 0x80) {
            if (temp_r4_5 <= 3) {
                var_r0_4 = var_r8 + 1;
            } else {
                var_r0_4 = 0;
            }
            goto block_57;
        }
        if (func_080088D4(arg0) & 0x40) {
            if (var_r8 > 0) {
                var_r0_4 = var_r8 - 1;
            } else {
                var_r0_4 = 4;
            }
block_57:
            var_r8 = var_r0_4;
        } else if (func_080088D4(arg0) & 0x10) {
            var_r8 += 2;
            if (var_r8 > 4) {
                var_r8 -= 5;
            }
        } else if (func_080088D4(arg0) & 0x20) {
            var_r8 -= 2;
            if (var_r8 < 0) {
                var_r8 += 5;
            }
        }
        if (temp_r4_5 != var_r8) {
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xCB);
        }
        arg0->unk360 = 0x90;
        arg0->unk362 = (s16) ((var_r8 * 0x10) + 0x18);
        if (func_080088CC(arg0) & 1) {
            temp_r3_2 = arg0->unk35A;
            arg0->unk35A = (u16) ((0xFFFFF000 & temp_r3_2) | ((((u32) (temp_r3_2 << 0x14) >> 0x14) ^ (1 << (var_r8 + 7))) & 0xFFF));
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xC5);
        }
        if (func_080088CC(arg0) & 2) {
            sp10 = 0;
            var_sl = 1;
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xC6);
        }
        break;
    case 3:
        temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x80);
        func_08050E98(temp_r4_6, 4);
        func_08050DC8(temp_r4_6, &gUnk_08100DF4, 0, 0);
        var_sl = 4;
        break;
    case 4:
        var_r4_2 = 0;
        if ((func_080088CC(arg0) & 1) || (func_080088CC(arg0) & 2)) {
            var_r4_2 = 1;
        }
        if (var_r4_2 != 0) {
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x94), 0xC5);
            func_08050D8C((GenObj *)((u8 *)arg0 + 0x80), &gUnk_08100AC0);
            sp8 = 1;
            var_sl = 5;
        }
        break;
    case 5:
        func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
        temp_r0_3 = func_08008940(arg0);
        ((void (*)(void *,...))(temp_r0_3->unk8->unk10))(temp_r0_3, sp4);
        var_sl = 6;
        break;
    case 6:
        temp_r1_5 = sp4->unk0;
        if ((s32) ((0 - temp_r1_5) | temp_r1_5) >= 0) {
            sp18 = 1;
        }
        break;
    }
    func_08099000(arg0, sp10);
    func_08099144(arg0, (u32) (arg0->unk35A << 0x14) >> 0x14, 0, sp10);
    func_080CD8A0(arg0);
    if (sp18 == 0) {
        goto loop_1;
    }
    temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x320);
    func_080073E0(temp_r4_7, temp_r4_7->unk4);
    temp_r4_7->unk4 = 0;
    temp_r4_8 = (GenObj *)((u8 *)arg0 + 0x308);
    func_080073E0(temp_r4_8, temp_r4_8->unk4);
    temp_r4_8->unk4 = 0;
    if (sp4 != 0) {
        ((void (*)(void *,...))(sp4->unk8->unkC))(sp4, 3);
    }
    return sp8;
}
