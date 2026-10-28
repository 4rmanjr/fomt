s32 AddAmount__9FoodStackUi(s32 *, s32);              /* extern */
s32 GetAmount__C9FoodStack();                       /* extern */
s32 *GetFoodStackAt__6FridgeUi(s32, s32);           /* extern */
s32 GetFood__C12RucksackItem(s32 *, s32 *);           /* extern */
s32 GetFood__C9FoodStack(s32 *, s32 *);               /* extern */
u16 GetIconId__C4Food(s32 *);                       /* extern */
s32 GetId__C4Food(s32 *);                           /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 IsEmpty__C9FoodStack(s32 *);                    /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 __12RucksackItemG4Food(s32 *, s32);               /* extern */
s32 __9FoodStackG4FoodUi(s32 *, s32, s32);            /* extern */
s32 func_0800F20C(s32 *, s32);                        /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_0800F3B0(s32, s32);                          /* extern */
s32 func_080CB304(s32, s32, s32 *, u16);                /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CBAF0(s32, s32 *, u16, s32);                /* extern */
s32 func_080CC0B4(s32);                               /* extern */
s32 func_080CC728(s32, s32, s32 *, u16);                /* extern */
s32 func_080CCD48(s32, s32, s32);                     /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 func_080CECD0(s32);                               /* extern */
s32 func_080CF054(s32);                             /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
extern s32 gUnk_086678A0;

typedef struct GenObj {
    u8 _pad0[17];
    u8 unk11;
    u8 unk12;
    u8 _pad13[2];
    u8 unk15;
    u8 unk16;
    s32 unk19;
    s32 unk1A;
    u8 _pad1E[90];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[16];
    s32 unk90;
    void *unk94;
    u8 _pad98[36];
    s32 unkBC;
    u8 _padC0[60];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
} GenObj;
u8 func_08089AD8(GenObj *arg0, s32 arg1, s32 arg2) {
    GenObj sp0;
    s32 sp00;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 *sp28;
    s32 *sp2C;
    s32 *sp30;
    s32 sp34;
    s32 *temp_r0;
    s32 *temp_r0_2;
    s32 *temp_r4_21;
    s32 *temp_r4_25;
    s32 *temp_r4_3;
    s32 *temp_r5_7;
    s32 *temp_r5_8;
    s32 *temp_r6;
    s32 *temp_r6_2;
    s32 *temp_r6_3;
    s32 *temp_r6_4;
    s32 *temp_r6_7;
    s32 *temp_r6_8;
    s32 *temp_r8;
    s32 *temp_r8_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_29;
    s32 temp_r4_2;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_33;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_10;
    s32 temp_r5_11;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_9;
    s32 temp_r6_5;
    s32 temp_r6_6;
    s32 var_r0;
    s32 var_r1;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 temp_r3_5;
    u16 temp_r3_6;
    u16 var_r3;

    sp1C = arg1;
    sp20 = arg2;
    if (arg1 != 0) {
        if (sp1C > 8) {
            if (sp1C == sp20) {
                sp20 = 0;
            }
            sp24 = func_080CE184(arg0, sp1C, func_080CF054(arg0->unk90));
            sp4 = *GetFoodStackAt__6FridgeUi(arg0->unk104, sp24);
            sp34 = (GenObj *)((u8 *)arg0 + 0x90);
            if (sp20 != 0) {
                temp_r0 = (s32 *) ((s32) &sp0 + 8);
                sp2C = temp_r0;
                temp_r4 = arg0->unk100;
                GetFood__C12RucksackItem(temp_r0, GetItemAt__8RucksackUi(temp_r4, func_080CE184(arg0, sp20, 0)));
                if ((IsEmpty__C9FoodStack(&sp4) << 0x18) != 0) {
                    temp_r6 = GetFoodStackAt__6FridgeUi(arg0->unk104, sp24);
                    memcpy(&sp10, sp2C, 3);
                    __9FoodStackG4FoodUi(&spC, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10), 1);
                    *temp_r6 = spC;
                    temp_r4_2 = arg0->unk100;
                    temp_r4_3 = GetItemAt__8RucksackUi(temp_r4_2, func_080CE184(arg0, sp20, 0));
                    __12RucksackItem(&spC);
                    *temp_r4_3 = spC;
                    temp_r4_4 = arg0->unk78;
                    func_080CBA60(temp_r4_4, func_080CE184(arg0, sp20, 0));
                    temp_r4_5 = *(s32 *) (arg0->unk94 + 0xBC);
                    if (temp_r4_5 == func_080CF054(sp34)) {
                        temp_r5 = arg0->unk7C;
                        temp_r4_6 = func_080CE184(arg0, sp1C, 0);
                        temp_r3 = GetIconId__C4Food(sp2C);
                        sp00 = 1;
                        func_080CC728(temp_r5, temp_r4_6, &gUnk_086678A0, temp_r3);
                    }
                } else {
                                    temp_r0_2 = (s32 *) ((s32) &sp0 + 0xC);
                    sp30 = temp_r0_2;
                    GetFood__C9FoodStack(temp_r0_2, GetFoodStackAt__6FridgeUi(arg0->unk104, sp24));
                    temp_r4_7 = GetId__C4Food(temp_r0_2);
                    if (temp_r4_7 == GetId__C4Food(sp2C)) {

                    } else {
                        temp_r4_8 = arg0->unk100;
                        temp_r8 = GetItemAt__8RucksackUi(temp_r4_8, func_080CE184(arg0, sp20, 0));
                        memcpy(&sp14, sp30, 3);
                        __12RucksackItemG4Food(&sp10, (sp0.unk16 << 0x10) | ((sp0.unk15 << 8) | sp14));
                        *temp_r8 = sp10;
                        temp_r8_2 = GetFoodStackAt__6FridgeUi(arg0->unk104, sp24);
                        memcpy(&sp14, sp2C, 3);
                        __9FoodStackG4FoodUi(&sp10, (sp0.unk16 << 0x10) | ((sp0.unk15 << 8) | sp14), 1);
                        *temp_r8_2 = sp10;
                        temp_r5_2 = arg0->unk78;
                        temp_r4_9 = func_080CE184(arg0, sp20, 0);
                        temp_r3_2 = GetIconId__C4Food(sp30);
                        sp00 = 1;
                        func_080CB304(temp_r5_2, temp_r4_9, &gUnk_086678A0, temp_r3_2);
                        temp_r4_10 = *(s32 *) (arg0->unk94 + 0xBC);
                        if (temp_r4_10 == func_080CF054(sp34)) {
                            temp_r5_3 = arg0->unk7C;
                            temp_r4_11 = func_080CE184(arg0, sp1C, 0);
                            temp_r3_3 = GetIconId__C4Food(sp2C);
                            sp00 = 1;
                            func_080CC728(temp_r5_3, temp_r4_11, &gUnk_086678A0, temp_r3_3);
                        }
                    }
                }
            } else {
                sp28 = (s32 *) ((s32) &sp0 + 8);
                func_0800F20C(sp28, arg0->unkFC);
                if ((IsEmpty__C9FoodStack(&sp4) << 0x18) == 0) {
                    GetFood__C9FoodStack(&spC, GetFoodStackAt__6FridgeUi(arg0->unk104, sp24));
                    temp_r4_12 = GetId__C4Food(&spC);
                    if (temp_r4_12 == GetId__C4Food(sp28)) {

                    } else {
                        func_0800F390(arg0->unkFC);
                        temp_r4_13 = arg0->unkFC;
                        memcpy(&sp10, &spC, 3);
                        func_0800F3B0(temp_r4_13, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10));
                        temp_r6_2 = GetFoodStackAt__6FridgeUi(arg0->unk104, sp24);
                        memcpy(&sp14, sp28, 3);
                        __9FoodStackG4FoodUi(&sp10, (sp0.unk16 << 0x10) | ((sp0.unk15 << 8) | sp14), 1);
                        *temp_r6_2 = sp10;
                        temp_r4_14 = arg0->unk78;
                        func_080CBAF0(temp_r4_14, &gUnk_086678A0, GetIconId__C4Food(&spC), 1);
                        temp_r4_15 = *(s32 *) (arg0->unk94 + 0xBC);
                        if (temp_r4_15 != func_080CF054(sp34)) {

                        } else {
                            temp_r5_4 = arg0->unk7C;
                            temp_r4_16 = func_080CE184(arg0, sp1C, 0);
                            temp_r3_4 = GetIconId__C4Food(sp28);
                            sp00 = 1;
                            func_080CC728(temp_r5_4, temp_r4_16, &gUnk_086678A0, temp_r3_4);
                        }
                    }
                } else {
                    temp_r6_3 = GetFoodStackAt__6FridgeUi(arg0->unk104, sp24);
                    memcpy(&sp10, sp28, 3);
                    __9FoodStackG4FoodUi(&spC, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10), 1);
                    *temp_r6_3 = spC;
                    func_0800F390(arg0->unkFC);
                    func_080CC0B4(arg0->unk78);
                    temp_r4_17 = *(s32 *) (arg0->unk94 + 0xBC);
                    if (temp_r4_17 != func_080CF054(sp34)) {

                    } else {
                        temp_r5_5 = arg0->unk7C;
                        temp_r4_18 = func_080CE184(arg0, sp1C, 0);
                        temp_r3_5 = GetIconId__C4Food(sp28);
                        sp00 = 1;
                        func_080CC728(temp_r5_5, temp_r4_18, &gUnk_086678A0, temp_r3_5);
                    }
                }
            }
        } else {
            temp_r4_19 = arg0->unk100;
            GetFood__C12RucksackItem(&sp4, GetItemAt__8RucksackUi(temp_r4_19, func_080CE184(arg0, sp1C, 0)));
            temp_r0_3 = func_080CE184(arg0, sp20, *(s32 *) (arg0->unk94 + 0xBC));
            sp8 = *GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_3);
            if ((IsEmpty__C9FoodStack(&sp8) << 0x18) != 0) {
                temp_r6_4 = GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_3);
                memcpy(&sp10, &sp4, 3);
                __9FoodStackG4FoodUi(&spC, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10), 1);
                *temp_r6_4 = spC;
                temp_r4_20 = arg0->unk100;
                temp_r4_21 = GetItemAt__8RucksackUi(temp_r4_20, func_080CE184(arg0, sp1C, 0));
                __12RucksackItem(&spC);
                *temp_r4_21 = spC;
                temp_r4_22 = arg0->unk78;
                func_080CBA60(temp_r4_22, func_080CE184(arg0, sp1C, 0));
                goto block_16;
            }
            GetFood__C9FoodStack(&spC, &sp8);
            temp_r4_23 = GetId__C4Food(&sp4);
            if (temp_r4_23 == GetId__C4Food(&spC)) {
                AddAmount__9FoodStackUi(GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_3), 1);
                temp_r4_24 = arg0->unk100;
                temp_r4_25 = GetItemAt__8RucksackUi(temp_r4_24, func_080CE184(arg0, sp1C, 0));
                __12RucksackItem(&sp10);
                *temp_r4_25 = sp10;
                temp_r4_26 = arg0->unk78;
                func_080CBA60(temp_r4_26, func_080CE184(arg0, sp1C, 0));
                temp_r5_6 = arg0->unk7C;
                temp_r4_27 = func_080CE184(arg0, sp20, 0);
                GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_3);
                func_080CCD48(temp_r5_6, temp_r4_27, GetAmount__C9FoodStack());
            } else {
                temp_r5_7 = GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_3);
                memcpy(&sp18, &sp4, 3);
                __9FoodStackG4FoodUi(&sp10, (sp0.unk1A << 0x10) | ((sp0.unk19 << 8) | sp18), 1);
                *temp_r5_7 = sp10;
                temp_r4_28 = arg0->unk100;
                temp_r5_8 = GetItemAt__8RucksackUi(temp_r4_28, func_080CE184(arg0, sp1C, 0));
                memcpy(&sp14, &spC, 3);
                __12RucksackItemG4Food(&sp10, (sp0.unk16 << 0x10) | ((sp0.unk15 << 8) | sp14));
                *temp_r5_8 = sp10;
                temp_r6_5 = arg0->unk78;
                temp_r4_29 = func_080CE184(arg0, sp1C, 0);
                temp_r3_6 = GetIconId__C4Food(&spC);
                sp00 = 1;
                func_080CB304(temp_r6_5, temp_r4_29, &gUnk_086678A0, temp_r3_6);
                temp_r6_6 = arg0->unk7C;
                temp_r4_30 = func_080CE184(arg0, sp20, 0);
                var_r3 = GetIconId__C4Food(&sp4);
                sp00 = 1;
                var_r0 = temp_r6_6;
                var_r1 = temp_r4_30;
                goto block_17;
            }
            goto block_18;
        }
    } else {
        func_0800F20C(&sp4, arg0->unkFC);
        temp_r0_4 = func_080CE184(arg0, sp20, *(s32 *) (arg0->unk94 + 0xBC));
        sp8 = *GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_4);
        if ((IsEmpty__C9FoodStack(&sp8) << 0x18) != 0) {
            temp_r6_7 = GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_4);
            memcpy(&sp10, &sp4, 3);
            __9FoodStackG4FoodUi(&spC, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10), 1);
            *temp_r6_7 = spC;
            func_0800F390(arg0->unkFC);
            func_080CC0B4(arg0->unk78);
block_16:
            temp_r5_9 = arg0->unk7C;
            temp_r4_31 = func_080CE184(arg0, sp20, 0);
            var_r3 = GetIconId__C4Food(&sp4);
            sp00 = 1;
            var_r0 = temp_r5_9;
            var_r1 = temp_r4_31;
            goto block_17;
        }
        GetFood__C9FoodStack(&spC, &sp8);
        temp_r4_32 = GetId__C4Food(&sp4);
        if (temp_r4_32 == GetId__C4Food(&spC)) {
            AddAmount__9FoodStackUi(GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_4), 1);
            func_0800F390(arg0->unkFC);
            func_080CC0B4(arg0->unk78);
            temp_r5_10 = arg0->unk7C;
            temp_r4_33 = func_080CE184(arg0, sp20, 0);
            func_080CCD48(temp_r5_10, temp_r4_33, GetAmount__C9FoodStack(&spC));
        } else {
            temp_r6_8 = GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r0_4);
            memcpy(&sp14, &sp4, 3);
            __9FoodStackG4FoodUi(&sp10, (sp0.unk16 << 0x10) | ((sp0.unk15 << 8) | sp14), 1);
            *temp_r6_8 = sp10;
            func_0800F390(arg0->unkFC);
            temp_r4_34 = arg0->unkFC;
            memcpy(&sp10, &spC, 3);
            func_0800F3B0(temp_r4_34, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10));
            temp_r4_35 = arg0->unk78;
            func_080CBAF0(temp_r4_35, &gUnk_086678A0, GetIconId__C4Food(&spC), 1);
            temp_r5_11 = arg0->unk7C;
            temp_r4_36 = func_080CE184(arg0, sp20, 0);
            var_r3 = GetIconId__C4Food(&sp4);
            sp00 = 1;
            var_r0 = temp_r5_11;
            var_r1 = temp_r4_36;
block_17:
            func_080CC728(var_r0, var_r1, &gUnk_086678A0, var_r3);
        }
block_18:
        sp34 = (GenObj *)((u8 *)arg0 + 0x90);
    }
    func_080CECD0(sp34);
}

/* ATTEMPT-NOTE pi: byte +0xa: 0xd0 vs ref 0x8e (sub sp besar: kandidat sub sp,0x150? vs ref 0x38+str sp); ret u8? frame jauh; cek jumlah/tipe locals: kandidat simpan r1,r2 di sp+0x130; ref pakai sp+0x1c/0x20 — KURANGI locals agar frame kecil. */
