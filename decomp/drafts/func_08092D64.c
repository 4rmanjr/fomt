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
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
s32 func_08050DF0(void *);                          /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_08050E5C(void *);                            /* extern */
s32 func_080926A4(void *, s32);                       /* extern */
s32 func_08092754(void *, s32);                       /* extern */
s32 func_08092940(void *, s32);                       /* extern */
s32 func_08092A70(void *, s32);                       /* extern */
s32 func_08092CD0(void *, s32);                       /* extern */
void *func_080CAFC4(void *, s32, void *, s32, ? *); /* extern */
s32 func_080CB090(void *);                            /* extern */
void *func_080CC15C(void *, s32, void *, s32, ? *); /* extern */
s32 func_080CC310(void *);                            /* extern */
void *func_080CD9B0(void *, void *, s32);           /* extern */
s32 func_080CDA44(void *);                            /* extern */
s32 func_080CDB08(void *);                            /* extern */
s32 func_080CDC00(void *);                            /* extern */
s32 func_080CDCD0(void *);                            /* extern */
s32 func_080CDD7C(void *);                            /* extern */
s32 func_080CE294(void *);                            /* extern */
s32 func_080CE2C4(void *);                            /* extern */
void *func_080CEC00(void *, void *);                /* extern */
extern ? gUnk_08100450;
extern ? gUnk_08100458;
extern ? gUnk_08100460;
extern ? gUnk_08100490;
extern ? gUnk_081004BC;
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E5B80;

void func_08092D64(void *arg0) {
    s8 sp4;
    s16 sp8;
    void *spC;
    s32 sp10;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_6;
    s32 temp_r8;
    s32 var_r4;
    s32 var_sl;
    u32 temp_r4_7;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r6;

    func_08008724();
    func_080CE294(arg0);
    temp_r8 = GetSize__C8Rucksack(arg0->unk104);
    temp_r6 = __builtin_new(0x29C);
    temp_r5 = func_08008910(arg0);
    temp_r2 = func_08008940(arg0);
    sp4 = 1;
    temp_r0 = func_080CAFC4(temp_r6, temp_r5, temp_r2, temp_r8, &gUnk_08100450);
    temp_r1 = arg0->unk78;
    if ((temp_r0 != temp_r1) && (temp_r1 != 0)) {
        temp_r1->unk210->unk8(temp_r1, 3);
    }
    arg0->unk78 = temp_r0;
    func_080CB090(arg0->unk78);
    func_080926A4(arg0, temp_r8);
    temp_r5_2 = __builtin_new(0x32C);
    temp_r4 = func_08008910(arg0);
    temp_r2_2 = func_08008940(arg0);
    sp4 = 1;
    temp_r0_2 = func_080CC15C(temp_r5_2, temp_r4, temp_r2_2, temp_r8, &gUnk_08100458);
    temp_r1_2 = arg0->unk7C;
    if ((temp_r0_2 != temp_r1_2) && (temp_r1_2 != 0)) {
        temp_r1_2->unk210->unk8(temp_r1_2, 3);
    }
    arg0->unk7C = temp_r0_2;
    func_080CC310(arg0->unk7C);
    func_08092754(arg0, temp_r8);
    temp_r0_3 = func_080CD9B0(__builtin_new(0x8C), arg0, 1);
    temp_r5_3 = arg0->unk8C;
    if ((temp_r0_3 != temp_r5_3) && (temp_r5_3 != 0)) {
        temp_r5_3->unk24 = &vtable_unk_080E5A28;
        temp_r4_2 = temp_r5_3 + 0x1C;
        func_080073E0(temp_r4_2, temp_r4_2->unk4);
        func_08007184(temp_r4_2, 2);
        temp_r4_3 = temp_r4_2 - 8;
        func_08007C28(temp_r4_3, temp_r4_3->unk4);
        func_080079E8(temp_r4_3, 2);
        __builtin_delete(temp_r5_3);
    }
    arg0->unk8C = temp_r0_3;
    temp_r0_4 = func_080CEC00(__builtin_new(0x88), arg0);
    temp_r5_4 = arg0->unk90;
    if ((temp_r0_4 != temp_r5_4) && (temp_r5_4 != 0)) {
        temp_r4_4 = temp_r5_4 + 0x74;
        func_080073E0(temp_r4_4, temp_r4_4->unk4);
        func_08007184(temp_r4_4, 2);
        temp_r4_5 = temp_r4_4 - 8;
        func_08007C28(temp_r4_5, temp_r4_5->unk4);
        func_080079E8(temp_r4_5, 2);
        temp_r5_4->unk4 = &vtable_unk_080E5A28;
        __builtin_delete(temp_r5_4);
    }
    arg0->unk90 = temp_r0_4;
    func_08092940(arg0, arg0->unk8C->unk4);
    temp_r0_5 = func_08008918(arg0);
    sp8 = 0x3F;
    temp_r0_5->unk50 = 0x3F;
    temp_r4_6 = __builtin_new(0x10);
    temp_r1_3 = func_08008918(arg0);
    temp_r4_6->unk0 = 0;
    temp_r4_6->unk4 = 0;
    temp_r4_6->unk8 = &vtable_unk_080E5B80;
    temp_r5_5 = temp_r4_6 + 0xC;
    func_08009300(temp_r5_5, temp_r1_3);
    spC = temp_r4_6;
    func_0800934C(temp_r5_5, 0x889, 1, 1);
    temp_r0_6 = func_08008940(arg0);
    temp_r0_6->unk8->unk10(temp_r0_6, spC);
    sp10 = 0;
    var_sl = 0;
loop_13:
    func_080087C8(arg0);
    func_080088B8(arg0);
    func_080CE2C4(arg0);
    temp_r1_4 = spC->unk0;
    temp_r4_7 = (u32) ((0 - temp_r1_4) | temp_r1_4) >> 0x1F;
    if (temp_r4_7 != 0) {
        goto loop_13;
    }
    if (sp10 == 0) {
        temp_r5_6 = arg0->unk8C->unk4;
        temp_r0_7 = arg0->unk108;
        switch (temp_r0_7) {                        /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            if (arg0->unk88 != 3) {

            } else {
                temp_r4_8 = arg0 + 0x80;
                temp_r0_8 = func_08050DF0(temp_r4_8);
                switch (temp_r0_8) {                /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    func_08050DC8(temp_r4_8, &gUnk_08100490, 0, 0);
                    func_08050E50(temp_r4_8, 0x43);
                    func_08092CD0(arg0, arg0->unk8C->unk4);
                    var_sl = 1;
                    arg0->unk108 = 2;
                    break;
                case 2:                             /* switch 2 */
                    func_08050DC8(temp_r4_8, &gUnk_081004BC, 0, 0);
                    func_08050E50(temp_r4_8, 0x43);
                    arg0->unk108 = temp_r0_8;
                    break;
                }
            }
            break;
        case 2:                                     /* switch 1 */
            if (arg0->unk88 != 3) {

            } else {
                func_08050E5C(arg0 + 0x80);
                if (var_sl != 0) {
                    temp_r1_5 = spC->unk0;
                    if ((s32) ((0 - temp_r1_5) | temp_r1_5) >= 0) {
                        sp10 = 1;
                        func_08009378(spC + 0xC, 0x889, 1, 1);
                        temp_r0_9 = func_08008940(arg0);
                        temp_r0_9->unk8->unk10(temp_r0_9, spC);
                    }
                    arg0->unk108 = (s32) temp_r4_7;
                } else {
                    func_08092940(arg0, arg0->unk8C->unk4);
                }
                arg0->unk108 = 0;
            }
            break;
        case 0:                                     /* switch 1 */
            if (func_080088D4(arg0) & 0x40) {
                func_080CDA44(arg0->unk8C);
                goto block_37;
            }
            if (func_080088D4(arg0) & 0x80) {
                func_080CDB08(arg0->unk8C);
                goto block_37;
            }
            if (func_080088D4(arg0) & 0x10) {
                func_080CDCD0(arg0->unk8C);
                goto block_37;
            }
            if (func_080088D4(arg0) & 0x20) {
                func_080CDC00(arg0->unk8C);
                goto block_37;
            }
            var_r4 = 0;
            if ((1 & (func_080088D4(arg0) >> 8)) || (2 & (func_080088D4(arg0) >> 8))) {
                var_r4 = 1;
            }
            if (var_r4 != 0) {
                func_080CDD7C(arg0->unk8C);
block_37:
                func_08008B6C(arg0 + 0xC, 0xCB);
            } else if (func_080088CC(arg0) & 1) {
                func_08092A70(arg0, arg0->unk8C->unk4);
            } else if (func_080088CC(arg0) & 2) {
                temp_r4_9 = arg0 + 0x80;
                func_08050DC8(temp_r4_9, &gUnk_08100460, 0, 0);
                func_08050E50(temp_r4_9, 0x43);
                var_sl = 1;
                arg0->unk108 = 2;
            }
            if (temp_r5_6 == arg0->unk8C->unk4) {

            } else {
                func_08092940(arg0);
            }
            break;
        }
        goto loop_13;
    }
    spC->unk8->unkC(spC, 3);
}
