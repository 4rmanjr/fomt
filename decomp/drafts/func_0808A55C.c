s32 GetSize__C8Rucksack(s32);                       /* extern */
s32 __builtin_delete(void *);                         /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_08008724();                                  /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
u32 func_080088D4(void *);                          /* extern */
s32 func_08008910(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08050DF0(void *);                          /* extern */
s32 func_08050E0C(void *, s32 *, s32 *, s32);             /* extern */
s32 func_08088318(void *, s32);                       /* extern */
s32 func_080884F4(void *, s32);                       /* extern */
s32 func_08088574(void *);                            /* extern */
s32 func_08088590(void *);                            /* extern */
s32 func_080885AC(void *, s32);                       /* extern */
s32 func_08088688(void *, s32, s32);                /* extern */
s32 func_08088BA0(void *, s32, s32);                /* extern */
s32 func_08089AD8(void *, s32, s32);                  /* extern */
s32 func_0808A2F4(void *, s32);                       /* extern */
s32 func_0808A4C0(void *, s32);                       /* extern */
void *func_080CAFC4(void *, s32, void *, s32, s32 *); /* extern */
s32 func_080CB090(void *);                            /* extern */
void *func_080CC15C(void *, s32, void *, s32, s32 *); /* extern */
s32 func_080CC310(void *);                            /* extern */
void *func_080CD9B0(void *, void *, s32);           /* extern */
s32 func_080CDA44(void *);                            /* extern */
s32 func_080CDB08(void *);                            /* extern */
s32 func_080CDC00(void *);                            /* extern */
s32 func_080CDCD0(void *);                            /* extern */
s32 func_080CDD7C(void *);                            /* extern */
s32 func_080CE294(void *);                            /* extern */
s32 func_080CE2C4(void *);                            /* extern */
s32 func_080CE2FC(void *, void *);                  /* extern */
s32 func_080CE3DC(s32, s32);                          /* extern */
s32 func_080CE598(void *);                            /* extern */
void *func_080CEC00(void *, void *);                /* extern */
s32 func_080CEC84(void *, s32, s32);                  /* extern */
s32 func_080CECD0(void *);                            /* extern */
s32 func_080CF050(void *);                          /* extern */
s32 func_080CF054(void *);                          /* extern */
extern s32 gUnk_08100084;
extern s32 gUnk_08100088;
extern s32 gUnk_0810008C;
extern s32 gUnk_08100094;
extern s32 vtable_unk_080E5A28;
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[16];
    struct GenObj *unk24;
    u8 _pad28[40];
    s32 unk50;
    u8 _pad54[36];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[4];
    struct GenObj *unk84;
    s32 unk88;
    void *unk8C;
    s32 unk90;
    s32 unk94;
    u8 _pad98[104];
    s32 unk100;
    u8 _pad104[4];
    s32 unk108;
    u8 _pad10C[260];
    struct GenObj *unk210;
} GenObj;
void func_0808A55C(GenObj *arg0) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s16 sp10;
    GenObj *sp14;
    void **sp18;
    s32 *var_r0;
    s32 *var_r1;
    s32 temp_r0_11;
    s32 temp_r0_3;
    s32 temp_r0_9;
    s32 temp_r1_4;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r4;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_3;
    s32 temp_r5_7;
    s32 temp_r8;
    s32 var_r4;
    s32 var_r8;
    u32 temp_r0_8;
    void *temp_r0;
    GenObj *temp_r0_10;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    GenObj *temp_r0_6;
    GenObj *temp_r0_7;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    void *temp_r1_3;
    GenObj *temp_r1_5;
    void *temp_r2;
    void *temp_r2_2;
    GenObj *temp_r3;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    GenObj *temp_r4_6;
    void *temp_r5_2;
    GenObj *temp_r5_4;
    GenObj *temp_r5_5;
    void *temp_r5_6;
    void *temp_r6;

    func_08008724();
    func_080CE294(arg0);
    temp_r8 = GetSize__C8Rucksack(arg0->unk100);
    temp_r6 = __builtin_new(0x29C);
    temp_r5 = func_08008910(arg0);
    temp_r2 = func_08008940(arg0);
    sp4 = 1;
    temp_r0 = func_080CAFC4(temp_r6, temp_r5, temp_r2, temp_r8, &gUnk_0810008C);
    temp_r1 = arg0->unk78;
    if ((temp_r0 != temp_r1) && (temp_r1 != 0)) {
        ((void (*)(void *,...))(temp_r1->unk210->unk8))(temp_r1, 3);
    }
    arg0->unk78 = temp_r0;
    func_080CB090(arg0->unk78);
    func_08088318(arg0, temp_r8);
    temp_r5_2 = __builtin_new(0x32C);
    temp_r4 = func_08008910(arg0);
    temp_r2_2 = func_08008940(arg0);
    sp4 = 0;
    temp_r0_2 = func_080CC15C(temp_r5_2, temp_r4, temp_r2_2, 8, &gUnk_08100094);
    temp_r1_2 = arg0->unk7C;
    if ((temp_r0_2 != temp_r1_2) && (temp_r1_2 != 0)) {
        ((void (*)(void *,...))(temp_r1_2->unk210->unk8))(temp_r1_2, 3);
    }
    arg0->unk7C = temp_r0_2;
    func_080CC310(arg0->unk7C);
    temp_r5_3 = func_080CE2FC(__builtin_new(0xC8), arg0);
    temp_r0_3 = arg0->unk94;
    sp18 = (GenObj *)((u8 *)arg0 + 0x94);
    if ((temp_r5_3 != temp_r0_3) && (temp_r0_3 != 0)) {
        func_080CE3DC(temp_r0_3, 3);
    }
    arg0->unk94 = temp_r5_3;
    func_080884F4(arg0, (*sp18)->unkBC);
    func_080CE598(*sp18);
    temp_r0_4 = func_080CD9B0(__builtin_new(0x8C), arg0, 1);
    temp_r5_4 = arg0->unk8C;
    if ((temp_r0_4 != temp_r5_4) && (temp_r5_4 != 0)) {
        temp_r5_4->unk24 = &vtable_unk_080E5A28;
        temp_r4_2 = (GenObj *)((u8 *)temp_r5_4 + 0x1C);
        func_080073E0(temp_r4_2, temp_r4_2->unk4);
        func_08007184(temp_r4_2, 2);
        temp_r4_3 = temp_r4_2 - 8;
        func_08007C28(temp_r4_3, temp_r4_3->unk4);
        func_080079E8(temp_r4_3, 2);
        __builtin_delete(temp_r5_4);
    }
    arg0->unk8C = temp_r0_4;
    temp_r0_5 = func_080CEC00(__builtin_new(0x88), arg0);
    temp_r5_5 = arg0->unk90;
    if ((temp_r0_5 != temp_r5_5) && (temp_r5_5 != 0)) {
        temp_r4_4 = (GenObj *)((u8 *)temp_r5_5 + 0x74);
        func_080073E0(temp_r4_4, temp_r4_4->unk4);
        func_08007184(temp_r4_4, 2);
        temp_r4_5 = temp_r4_4 - 8;
        func_08007C28(temp_r4_5, temp_r4_5->unk4);
        func_080079E8(temp_r4_5, 2);
        temp_r5_5->unk4 = &vtable_unk_080E5A28;
        __builtin_delete(temp_r5_5);
    }
    arg0->unk90 = temp_r0_5;
    func_080885AC(arg0, arg0->unk8C->unk4);
    temp_r0_6 = func_08008918(arg0);
    sp10 = 0x3F;
    temp_r0_6->unk50 = 0x3F;
    temp_r4_6 = __builtin_new(0x10);
    temp_r1_3 = func_08008918(arg0);
    temp_r4_6->unk0 = 0;
    temp_r4_6->unk4 = 0;
    temp_r4_6->unk8 = &vtable_unk_080E5B80;
    temp_r5_6 = (GenObj *)((u8 *)temp_r4_6 + 0xC);
    func_08009300(temp_r5_6, temp_r1_3);
    sp14 = temp_r4_6;
    func_0800934C(temp_r5_6, 0x889, 1, 1);
    temp_r0_7 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_7->unk8->unk10))(temp_r0_7, sp14);
    var_r8 = 0;
loop_16:
    func_080087C8(arg0);
    func_080088B8(arg0);
    func_080CE2C4(arg0);
    temp_r1_4 = sp14->unk0;
    if ((s32) ((0 - temp_r1_4) | temp_r1_4) < 0) {
        goto loop_16;
    }
    if (var_r8 == 0) {
        temp_r5_7 = arg0->unk8C->unk4;
        temp_r0_8 = arg0->unk108;
        switch (temp_r0_8) {                        /* switch 1 */
        case 0:                                     /* switch 1 */
            if (func_080088D4(arg0) & 0x40) {
                temp_r0_9 = arg0->unk8C->unk4;
                if ((temp_r0_9 > 9) && (temp_r0_9 <= 0xD)) {
                    func_08088590(arg0);
                }
                func_080CDA44(arg0->unk8C);
                goto block_39;
            }
            if (func_080088D4(arg0) & 0x80) {
                if ((s32) arg0->unk8C->unk4 > 0xD) {
                    func_08088574(arg0);
                }
                func_080CDB08(arg0->unk8C);
                goto block_39;
            }
            if (func_080088D4(arg0) & 0x10) {
                func_080CDCD0(arg0->unk8C);
                goto block_39;
            }
            if (func_080088D4(arg0) & 0x20) {
                func_080CDC00(arg0->unk8C);
                goto block_39;
            }
            var_r4 = 0;
            if ((1 & (func_080088D4(arg0) >> 8)) || (2 & (func_080088D4(arg0) >> 8))) {
                var_r4 = 1;
            }
            if (var_r4 != 0) {
                func_080CDD7C(arg0->unk8C);
block_39:
                func_08008B6C((GenObj *)((u8 *)arg0 + 0xC), 0xCB);
            } else if (!(func_080088CC(arg0) & 1)) {
                if (func_080088CC(arg0) & 2) {
                    temp_r1_5 = arg0->unk90;
                    if (temp_r1_5->unk84 != 0) {
                        func_080CECD0(temp_r1_5);
                    } else {
                        temp_r1_6 = sp14->unk0;
                        if ((s32) ((0 - temp_r1_6) | temp_r1_6) >= 0) {
                            var_r8 = 1;
                            func_08009378((GenObj *)((u8 *)sp14 + 0xC), 0x889, 1, 1);
                            temp_r0_10 = func_08008940(arg0);
                            ((void (*)(void *,...))(temp_r0_10->unk8->unk10))(temp_r0_10, sp14);
                        }
                    }
                } else if (func_080088CC(arg0) & 8) {
                    func_0808A2F4(arg0, arg0->unk8C->unk4);
                }
            } else {
                temp_r3 = arg0->unk90;
                if (temp_r3->unk84 == 0) {
                    temp_r1_7 = arg0->unk8C->unk4;
                    if (temp_r1_7 <= 8) {
                        func_080CEC84(temp_r3, temp_r1_7, 0);
                    } else {
                        func_080CEC84(temp_r3, temp_r1_7, (*sp18)->unkBC);
                    }
                } else {
                    temp_r4_7 = arg0->unk8C->unk4;
                    if (temp_r4_7 == func_080CF050(temp_r3)) {
                        if (func_080CF050(arg0->unk90) > 9) {
                            temp_r4_8 = (*sp18)->unkBC;
                            if (temp_r4_8 != func_080CF054(arg0->unk90)) {
                                if ((func_08088BA0(arg0, func_080CF050(arg0->unk90), arg0->unk8C->unk4) << 0x18) == 0) {
                                    var_r0 = (GenObj *)((u8 *)arg0 + 0x108);
                                    goto block_57;
                                }
                                goto block_52;
                            }
                        }
                        temp_r4_9 = func_080CF050(arg0->unk90);
                        if ((func_08088688(arg0, temp_r4_9, func_080CF054(arg0->unk90)) << 0x18) != 0) {
block_52:
                            func_080885AC(arg0, arg0->unk8C->unk4);
                            func_08008B6C((GenObj *)((u8 *)arg0 + 0xC), 0xC5);
                            func_080CECD0(arg0->unk90);
                        } else {
                            var_r0 = (GenObj *)((u8 *)arg0 + 0x108);
                            goto block_57;
                        }
                    } else if ((func_08088BA0(arg0, func_080CF050(arg0->unk90), arg0->unk8C->unk4) << 0x18) != 0) {
                        func_080885AC(arg0, arg0->unk8C->unk4);
                        func_08008B6C((GenObj *)((u8 *)arg0 + 0xC), 0xC5);
                        func_080CECD0(arg0->unk90);
                    } else {
                        var_r0 = (GenObj *)((u8 *)arg0 + 0x108);
block_57:
                        if (*var_r0 != 1) {
                            func_08008B6C((GenObj *)((u8 *)arg0 + 0xC), 0xC7);
                        }
                    }
                }
            }
            if (temp_r5_7 == arg0->unk8C->unk4) {

            } else {
                func_080885AC(arg0);
            }
            break;
        case 1:                                     /* switch 1 */
            if (arg0->unk88 != 3) {

            } else {
                sp4 = 0;
                sp8 = 0;
                spC = 0;
                func_08050E0C((GenObj *)((u8 *)arg0 + 0x80), &gUnk_08100084, &gUnk_08100088, 0);
                arg0->unk108 = 2U;
            }
            break;
        case 2:                                     /* switch 1 */
            if (arg0->unk88 != 3) {

            } else {
                temp_r0_11 = func_08050DF0((GenObj *)((u8 *)arg0 + 0x80));
                switch (temp_r0_11) {               /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    func_08089AD8(arg0, func_080CF050(arg0->unk90), arg0->unk8C->unk4);
                    break;
                case 2:                             /* switch 2 */
                    func_080CECD0(arg0->unk90);
                    break;
                }
block_86:
                func_080885AC(arg0, arg0->unk8C->unk4);
                var_r1 = (GenObj *)((u8 *)arg0 + 0x108);
block_87:
                *var_r1 = 0;
            }
            break;
        case 3:                                     /* switch 1 */
            if (arg0->unk88 != 3) {

            } else {
                if (func_08050DF0((GenObj *)((u8 *)arg0 + 0x80)) == 1) {
                    func_0808A4C0(arg0, arg0->unk8C->unk4);
                }
                func_080885AC(arg0, arg0->unk8C->unk4);
                var_r1 = (GenObj *)((u8 *)arg0 + 0x108);
                goto block_87;
            }
            break;
        case 4:                                     /* switch 1 */
            if (arg0->unk88 != 3) {

            } else {
                goto block_86;
            }
            break;
        }
        goto loop_16;
    }
    ((void (*)(void *,...))(sp14->unk8->unkC))(sp14, 3);
}
