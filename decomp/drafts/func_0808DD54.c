s32 AddAmount__12ArticleStackUi(s32 *, s32);          /* extern */
s32 GetAmount__C12ArticleStack();                   /* extern */
s32 *GetArticleStackAt__5ShelfUi(s32, s32);         /* extern */
u8 GetArticle__C12ArticleStack(s32 *);              /* extern */
u8 GetArticle__C12RucksackItem();                   /* extern */
u16 GetIconId__C7Article(u8 *);                     /* extern */
s32 GetId__C7Article(u8 *);                         /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 IsEmpty__C12ArticleStack(s32 *);                /* extern */
s32 __12ArticleStackG7ArticleUi(s32 *, u8, s32);      /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 __12RucksackItemG7Article(s32 *, u8);             /* extern */
u8 func_0800F258(s32);                              /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_0800F3E8(s32, u8);                           /* extern */
s32 func_080CB304(s32, s32, ? *, u16);                /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CBAF0(s32, ? *, u16, s32);                /* extern */
s32 func_080CC0B4(s32);                               /* extern */
s32 func_080CC728(s32, s32, ? *, u16);                /* extern */
s32 func_080CCD48(s32, s32, s32);                     /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 func_080CECD0(s32);                               /* extern */
s32 func_080CF054(s32);                             /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
extern ? gUnk_086678A0;

void func_0808DD54(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    u8 sp10;
    u8 sp11;
    u8 sp12;
    u8 sp13;
    u8 sp14;
    s32 sp18;
    s32 sp1C;
    s32 *sp20;
    s32 *temp_r4_18;
    s32 *temp_r4_20;
    s32 *temp_r4_24;
    s32 *temp_r4_6;
    s32 *temp_r4_8;
    s32 *temp_r5;
    s32 *temp_r5_11;
    s32 *temp_r5_13;
    s32 *temp_r5_15;
    s32 *temp_r5_2;
    s32 *temp_r5_5;
    s32 *temp_r5_6;
    s32 *temp_r5_9;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_19;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_29;
    s32 temp_r4_2;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_33;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_7;
    s32 temp_r4_9;
    s32 temp_r5_10;
    s32 temp_r5_12;
    s32 temp_r5_14;
    s32 temp_r5_16;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_7;
    s32 temp_r5_8;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;
    s32 var_r5;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 var_r3;
    u16 var_r3_2;
    u8 *temp_r6;
    u8 *var_r8;

    sp18 = arg1;
    sp1C = arg2;
    if (arg1 != 0) {
        if (sp18 > 8) {
            if (sp18 == sp1C) {
                sp1C = 0;
            }
            temp_r0 = func_080CE184(arg0, sp18, func_080CF054(arg0->unk90));
            memcpy(&sp4, GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0), 2);
            sp20 = arg0 + 0x90;
            if (sp1C != 0) {
                temp_r4 = arg0->unk100;
                GetItemAt__8RucksackUi(temp_r4, func_080CE184(arg0, sp1C, 0));
                sp0.unk17 = GetArticle__C12RucksackItem();
                if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) == 0) {
                    GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                    temp_r6 = &sp0 + 0x16;
                    sp0.unk16 = GetArticle__C12ArticleStack();
                    temp_r4_2 = GetId__C7Article(temp_r6);
                    if (temp_r4_2 == GetId__C7Article(&sp0 + 0x17)) {

                    } else {
                        temp_r4_3 = arg0->unk100;
                        temp_r5 = GetItemAt__8RucksackUi(temp_r4_3, func_080CE184(arg0, sp1C, 0));
                        __12RucksackItemG7Article(&sp8, sp0.unk16);
                        *temp_r5 = sp8;
                        temp_r5_2 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                        __12ArticleStackG7ArticleUi(&sp8, sp0.unk17, 1);
                        memcpy(temp_r5_2, &sp8, 2);
                        temp_r5_3 = arg0->unk78;
                        temp_r4_4 = func_080CE184(arg0, sp1C, 0);
                        temp_r3 = GetIconId__C7Article(temp_r6);
                        sp0 = 1;
                        func_080CB304(temp_r5_3, temp_r4_4, &gUnk_086678A0, temp_r3);
                        temp_r4_5 = arg0->unk94->unkBC;
                        if (temp_r4_5 == func_080CF054(*sp20)) {
                            var_r5 = arg0->unk7C;
                            var_r4 = func_080CE184(arg0, sp18, 0);
                            var_r3 = GetIconId__C7Article(&sp0 + 0x17);
                            sp0 = 1;
                            goto block_36;
                        }
                    }
                } else {
                    temp_r4_6 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                    __12ArticleStackG7ArticleUi(&sp8, sp0.unk17, 1);
                    memcpy(temp_r4_6, &sp8, 2);
                    temp_r4_7 = arg0->unk100;
                    temp_r4_8 = GetItemAt__8RucksackUi(temp_r4_7, func_080CE184(arg0, sp1C, 0));
                    __12RucksackItem(&sp8);
                    *temp_r4_8 = sp8;
                    temp_r4_9 = arg0->unk78;
                    func_080CBA60(temp_r4_9, func_080CE184(arg0, sp1C, 0));
                    temp_r4_10 = arg0->unk94->unkBC;
                    if (temp_r4_10 == func_080CF054(*sp20)) {
                        temp_r5_4 = arg0->unk7C;
                        temp_r4_11 = func_080CE184(arg0, sp18, 0);
                        temp_r3_2 = GetIconId__C7Article(&sp0 + 0x17);
                        sp0 = 1;
                        func_080CC728(temp_r5_4, temp_r4_11, &gUnk_086678A0, temp_r3_2);
                    }
                }
            } else {
                sp0.unk15 = func_0800F258(arg0->unkFC);
                if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) == 0) {
                    GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                    sp14 = GetArticle__C12ArticleStack();
                    temp_r4_12 = GetId__C7Article(&sp14);
                    if (temp_r4_12 == GetId__C7Article(&sp0 + 0x15)) {

                    } else {
                        func_0800F390(arg0->unkFC);
                        func_0800F3E8(arg0->unkFC, sp14);
                        temp_r5_5 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                        __12ArticleStackG7ArticleUi(&sp8, sp0.unk15, 1);
                        memcpy(temp_r5_5, &sp8, 2);
                        temp_r4_13 = arg0->unk78;
                        func_080CBAF0(temp_r4_13, &gUnk_086678A0, GetIconId__C7Article(&sp14), 1);
                        temp_r4_14 = arg0->unk94->unkBC;
                        if (temp_r4_14 != func_080CF054(*sp20)) {

                        } else {
                            var_r5 = arg0->unk7C;
                            var_r4 = func_080CE184(arg0, sp18, 0);
                            var_r3 = GetIconId__C7Article(&sp0 + 0x15);
                            sp0 = 1;
block_36:
                            func_080CC728(var_r5, var_r4, &gUnk_086678A0, var_r3);
                        }
                    }
                } else {
                    temp_r5_6 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                    __12ArticleStackG7ArticleUi(&sp8, sp0.unk15, 1);
                    memcpy(temp_r5_6, &sp8, 2);
                    func_0800F390(arg0->unkFC);
                    func_080CC0B4(arg0->unk78);
                    temp_r4_15 = arg0->unk94->unkBC;
                    if (temp_r4_15 != func_080CF054(*sp20)) {

                    } else {
                        temp_r5_7 = arg0->unk7C;
                        temp_r4_16 = func_080CE184(arg0, sp18, 0);
                        temp_r3_3 = GetIconId__C7Article(&sp0 + 0x15);
                        sp0 = 1;
                        func_080CC728(temp_r5_7, temp_r4_16, &gUnk_086678A0, temp_r3_3);
                    }
                }
            }
        } else {
            temp_r4_17 = arg0->unk100;
            GetItemAt__8RucksackUi(temp_r4_17, func_080CE184(arg0, sp18, 0));
            var_r8 = &sp12;
            sp12 = GetArticle__C12RucksackItem();
            temp_r0_2 = func_080CE184(arg0, sp1C, arg0->unk94->unkBC);
            memcpy(&sp4, GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2), 2);
            if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) != 0) {
                temp_r4_18 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2);
                __12ArticleStackG7ArticleUi(&spC, *var_r8, 1);
                memcpy(temp_r4_18, &spC, 2);
                temp_r4_19 = arg0->unk100;
                temp_r4_20 = GetItemAt__8RucksackUi(temp_r4_19, func_080CE184(arg0, sp18, 0));
                __12RucksackItem(&spC);
                *temp_r4_20 = spC;
                temp_r4_21 = arg0->unk78;
                func_080CBA60(temp_r4_21, func_080CE184(arg0, sp18, 0));
                goto block_15;
            }
            sp13 = GetArticle__C12ArticleStack(&sp4);
            temp_r4_22 = GetId__C7Article(&sp0 + 0x12);
            if (temp_r4_22 == GetId__C7Article(&sp13)) {
                AddAmount__12ArticleStackUi(GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2), 1);
                temp_r4_23 = arg0->unk100;
                temp_r4_24 = GetItemAt__8RucksackUi(temp_r4_23, func_080CE184(arg0, sp18, 0));
                __12RucksackItem(&spC);
                *temp_r4_24 = spC;
                temp_r4_25 = arg0->unk78;
                func_080CBA60(temp_r4_25, func_080CE184(arg0, sp18, 0));
                temp_r5_8 = arg0->unk7C;
                temp_r4_26 = func_080CE184(arg0, sp1C, 0);
                GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2);
                func_080CCD48(temp_r5_8, temp_r4_26, GetAmount__C12ArticleStack());
            } else {
                temp_r5_9 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2);
                __12ArticleStackG7ArticleUi(&spC, sp0.unk12, 1);
                memcpy(temp_r5_9, &spC, 2);
                temp_r5_10 = arg0->unk100;
                temp_r5_11 = GetItemAt__8RucksackUi(temp_r5_10, func_080CE184(arg0, sp18, 0));
                __12RucksackItemG7Article(&spC, sp13);
                *temp_r5_11 = spC;
                temp_r6_2 = arg0->unk78;
                temp_r4_27 = func_080CE184(arg0, sp18, 0);
                temp_r3_4 = GetIconId__C7Article(&sp13);
                sp0 = 1;
                func_080CB304(temp_r6_2, temp_r4_27, &gUnk_086678A0, temp_r3_4);
                temp_r6_3 = arg0->unk7C;
                temp_r4_28 = func_080CE184(arg0, sp1C, 0);
                var_r3_2 = GetIconId__C7Article(&sp0 + 0x12);
                sp0 = 1;
                var_r0 = temp_r6_3;
                var_r1 = temp_r4_28;
                goto block_16;
            }
            goto block_17;
        }
    } else {
        var_r8 = &sp10;
        sp10 = func_0800F258(arg0->unkFC);
        temp_r0_3 = func_080CE184(arg0, sp1C, arg0->unk94->unkBC);
        memcpy(&sp4, GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_3), 2);
        if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) == 0) {
            sp11 = GetArticle__C12ArticleStack(&sp4);
            temp_r4_29 = GetId__C7Article(&sp10);
            if (temp_r4_29 == GetId__C7Article(&sp11)) {
                AddAmount__12ArticleStackUi(GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_3), 1);
                func_0800F390(arg0->unkFC);
                func_080CC0B4(arg0->unk78);
                temp_r5_12 = arg0->unk7C;
                temp_r4_30 = func_080CE184(arg0, sp1C, 0);
                GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_3);
                func_080CCD48(temp_r5_12, temp_r4_30, GetAmount__C12ArticleStack());
            } else {
                temp_r5_13 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_3);
                __12ArticleStackG7ArticleUi(&sp8, sp0.unk10, 1);
                memcpy(temp_r5_13, &sp8, 2);
                func_0800F390(arg0->unkFC);
                func_0800F3E8(arg0->unkFC, sp11);
                temp_r4_31 = arg0->unk78;
                func_080CBAF0(temp_r4_31, &gUnk_086678A0, GetIconId__C7Article(&sp11), 1);
                temp_r5_14 = arg0->unk7C;
                temp_r4_32 = func_080CE184(arg0, sp1C, 0);
                var_r3_2 = GetIconId__C7Article(&sp10);
                sp0 = 1;
                var_r0 = temp_r5_14;
                var_r1 = temp_r4_32;
                goto block_16;
            }
        } else {
            temp_r5_15 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_3);
            __12ArticleStackG7ArticleUi(&sp8, *var_r8, 1);
            memcpy(temp_r5_15, &sp8, 2);
            func_0800F390(arg0->unkFC);
            func_080CC0B4(arg0->unk78);
block_15:
            temp_r5_16 = arg0->unk7C;
            temp_r4_33 = func_080CE184(arg0, sp1C, 0);
            var_r3_2 = GetIconId__C7Article(var_r8);
            sp0 = 1;
            var_r0 = temp_r5_16;
            var_r1 = temp_r4_33;
block_16:
            func_080CC728(var_r0, var_r1, &gUnk_086678A0, var_r3_2);
        }
block_17:
        sp20 = arg0 + 0x90;
    }
    func_080CECD0(*sp20);
}
