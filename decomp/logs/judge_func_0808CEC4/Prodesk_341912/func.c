#include "common.h"
s32 AddAmount__12ArticleStackUi(s32 *, u32);          /* extern */
u32 GetAmount__C12ArticleStack(s32 *);              /* extern */
s32 *GetArticleStackAt__5ShelfUi(s32, s32);         /* extern */
u8 GetArticle__C12ArticleStack(s32 *);              /* extern */
u8 GetArticle__C12RucksackItem(s32 *);              /* extern */
u16 GetIconId__C7Article(u8 *);                     /* extern */
s32 GetId__C7Article(u8 *);                         /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
s32 IsEmpty__C12ArticleStack(s32 *);                /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 IsWrapped__C12RucksackItem(s32 *);              /* extern */
s32 SubtractAmount__12ArticleStackUi(s32 *, s32);     /* extern */
s32 __12ArticleStack(s32 *);                          /* extern */
s32 __12ArticleStackG7ArticleUi(s32 *, u8, s32);      /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 __12RucksackItemG7Article(s32 *, u8);             /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s32 func_0800F294(s32 *, s32);                        /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
u8 func_0808C9D0(void *, s32, s32);                 /* extern */
void *func_080CB2E8(s32, s32);                      /* extern */
s32 func_080CB304(s32, s32, ? *, u16);                /* extern */
s32 func_080CB63C(s32, s32, s32, s32);                /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CC0B4(s32);                               /* extern */
s32 func_080CC728(s32, s32, ? *, u16);                /* extern */
s32 func_080CCD48(s32, s32, u32);                     /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 func_080CF054(s32);                             /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
extern ? gUnk_081000D4;
extern ? gUnk_086678A0;

u8 func_0808CEC4(void *arg0, s32 arg1, s32 arg2) {
    u32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
s32 sp10;
s32 sp1C;
    s32 sp28;
    u8 sp2C;
    u8 sp30;
    u8 sp31;
    u8 sp34;
    u8 sp38;
    s32 sp3C;
    u32 sp40;
    void **sp44;
    s32 *sp48;
    s32 sp4C;
    s32 *sp50;
    void **sp54;
    s32 *sp58;
    s32 *temp_r4_10;
    s32 *temp_r4_11;
    s32 *temp_r4_23;
    s32 *temp_r4_25;
    s32 *temp_r4_27;
    s32 *temp_r4_33;
    s32 *temp_r4_39;
    s32 *temp_r4_43;
    s32 *temp_r4_8;
    s32 *temp_r5;
    s32 *temp_r5_10;
    s32 *temp_r5_12;
    s32 *temp_r5_13;
    s32 *temp_r5_15;
    s32 *temp_r5_17;
    s32 *temp_r5_20;
    s32 *temp_r5_22;
    s32 *temp_r5_27;
    s32 *temp_r5_3;
    s32 *temp_r5_7;
    s32 temp_r0_2;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r4;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_24;
    s32 temp_r4_26;
    s32 temp_r4_28;
    s32 temp_r4_29;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_38;
    s32 temp_r4_40;
    s32 temp_r4_41;
    s32 temp_r4_42;
    s32 temp_r4_44;
    s32 temp_r4_45;
    s32 temp_r4_46;
    s32 temp_r4_47;
    s32 temp_r4_48;
    s32 temp_r4_49;
    s32 temp_r4_4;
    s32 temp_r4_50;
    s32 temp_r4_9;
    s32 temp_r5_11;
    s32 temp_r5_16;
    s32 temp_r5_18;
    s32 temp_r5_19;
    s32 temp_r5_21;
    s32 temp_r5_23;
    s32 temp_r5_24;
    s32 temp_r5_25;
    s32 temp_r5_26;
    s32 temp_r5_2;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_8;
    s32 temp_r5_9;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 temp_r6_6;
    s32 temp_r6_7;
    s32 temp_sl;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r5_2;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 temp_r3_5;
    u16 temp_r3_6;
    u16 temp_r3_7;
    u16 temp_r4_2;
    u16 temp_r4_3;
    u16 temp_r4_5;
    u16 temp_r4_6;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 temp_r4_7;
    u8 *temp_r5_14;
    u8 *var_r0;
    void *temp_r0_4;
    void *temp_r0_5;

    sp3C = arg1;
    sp40 = 1;
    if (arg2 == 0) {
        var_r2 = func_080CF054(arg0->unk90);
        var_r1 = sp3C;
        goto block_16;
    }
    if (sp3C != 0) {
        if (sp3C > 8) {
            sp50 = arg0 + 0x90;
            sp4C = func_080CE184(arg0, sp3C, func_080CF054(arg0->unk90));
            sp58 = sp50;
            if (arg2 > 8) {
                sp54 = arg0 + 0x94;
                temp_sl = func_080CE184(arg0, arg2, arg0->unk94->unkBC);
                memcpy(&sp4, GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C), 2);
                memcpy(&sp8, GetArticleStackAt__5ShelfUi(arg0->unk104, temp_sl), 2);
                if (((IsEmpty__C12ArticleStack(&sp4) << 0x18) != 0) && ((IsEmpty__C12ArticleStack(&sp8) << 0x18) != 0)) {

                } else if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) != 0) {
                    memcpy(GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C), &sp8, 2);
                    temp_r5 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_sl);
                    __12ArticleStack(&spC);
                    memcpy(temp_r5, &spC, 2);
                    temp_r4 = arg0->unk7C;
                    func_080CCDEC(temp_r4, func_080CE184(arg0, arg2, 0));
                    if (func_080CF054(*sp50) != (*sp54)->unkBC) {

                    } else {
                        temp_r6 = arg0->unk7C;
                        temp_r5_2 = func_080CE184(arg0, sp3C, 0);
                        sp0.unk36 = GetArticle__C12ArticleStack(&sp8);
                        temp_r4_2 = GetIconId__C7Article();
                        sp0 = GetAmount__C12ArticleStack(&sp8);
                        func_080CC728(temp_r6, temp_r5_2, &gUnk_086678A0, temp_r4_2);
                    }
                } else {
                    if ((IsEmpty__C12ArticleStack(&sp8) << 0x18) != 0) {
                        temp_r5_3 = GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C);
                        __12ArticleStack(&spC);
                        memcpy(temp_r5_3, &spC, 2);
                        memcpy(GetArticleStackAt__5ShelfUi(arg0->unk104, temp_sl), &sp4, 2);
                        temp_r6_2 = arg0->unk7C;
                        temp_r5_4 = func_080CE184(arg0, arg2, 0);
                        sp0.unk37 = GetArticle__C12ArticleStack(&sp4);
                        temp_r4_3 = GetIconId__C7Article();
                        sp0 = GetAmount__C12ArticleStack(&sp4);
                        func_080CC728(temp_r6_2, temp_r5_4, &gUnk_086678A0, temp_r4_3);
                        goto block_108;
                    }
                    sp38 = GetArticle__C12ArticleStack(&sp4);
                    temp_r4_4 = GetId__C7Article();
                    sp0.unk39 = GetArticle__C12ArticleStack(&sp8);
                    var_r1_2 = 0;
                    if (temp_r4_4 == GetId__C7Article()) {
                        var_r1_2 = 1;
                    }
                    if (var_r1_2 == 0) {
                        memcpy(GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C), &sp8, 2);
                        memcpy(GetArticleStackAt__5ShelfUi(arg0->unk104, temp_sl), &sp4, 2);
                        temp_r6_3 = arg0->unk7C;
                        temp_r5_5 = func_080CE184(arg0, arg2, 0);
                        sp0.unk3A = GetArticle__C12ArticleStack(&sp4);
                        temp_r4_5 = GetIconId__C7Article();
                        sp0 = GetAmount__C12ArticleStack(&sp4);
                        func_080CC728(temp_r6_3, temp_r5_5, &gUnk_086678A0, temp_r4_5);
                        if (func_080CF054(*sp50) == (*sp54)->unkBC) {
                            temp_r6_4 = arg0->unk7C;
                            temp_r5_6 = func_080CE184(arg0, sp3C, 0);
                            sp0.unk3B = GetArticle__C12ArticleStack(&sp8);
                            temp_r4_6 = GetIconId__C7Article();
                            sp0 = GetAmount__C12ArticleStack(&sp8);
                            func_080CC728(temp_r6_4, temp_r5_6, &gUnk_086678A0, temp_r4_6);
                        }
                    } else {
                        temp_r4_7 = 0x63 - GetAmount__C12ArticleStack(&sp8);
                        if (temp_r4_7 >= GetAmount__C12ArticleStack(&sp4)) {
                            temp_r5_7 = GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C);
                            __12ArticleStack(&spC);
                            memcpy(temp_r5_7, &spC, 2);
                            temp_r4_8 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_sl);
                            AddAmount__12ArticleStackUi(temp_r4_8, GetAmount__C12ArticleStack(&sp4));
                            temp_r5_8 = arg0->unk7C;
                            temp_r4_9 = func_080CE184(arg0, arg2, 0);
                            GetArticleStackAt__5ShelfUi(arg0->unk104, temp_sl);
                            func_080CCD48(temp_r5_8, temp_r4_9, GetAmount__C12ArticleStack());
block_108:
                            if (func_080CF054(*sp50) != (*sp54)->unkBC) {

                            } else {
                                goto block_110;
                            }
                        } else {
                            temp_r4_10 = GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C);
                            SubtractAmount__12ArticleStackUi(temp_r4_10, 0x63 - GetAmount__C12ArticleStack(&sp8));
                            temp_r4_11 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_sl);
                            AddAmount__12ArticleStackUi(temp_r4_11, 0x63 - GetAmount__C12ArticleStack(&sp8));
                            temp_r5_9 = arg0->unk7C;
                            temp_r4_12 = func_080CE184(arg0, arg2, 0);
                            GetArticleStackAt__5ShelfUi(arg0->unk104, temp_sl);
                            func_080CCD48(temp_r5_9, temp_r4_12, GetAmount__C12ArticleStack());
                            if (func_080CF054(*sp50) == (*sp54)->unkBC) {
                                var_r5 = arg0->unk7C;
                                var_r4 = func_080CE184(arg0, sp3C, 0);
                                goto block_114;
                            }
                        }
                    }
                }
            } else {
                memcpy(&sp4, GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C), 2);
                temp_r4_13 = arg0->unk100;
                sp8 = *GetItemAt__8RucksackUi(temp_r4_13, func_080CE184(arg0, arg2, 0));
                if (((IsEmpty__C12ArticleStack(&sp4) << 0x18) != 0) && ((IsEmpty__C12RucksackItem(&sp8) << 0x18) != 0)) {

                } else if ((IsEmpty__C12RucksackItem(&sp8) << 0x18) != 0) {
                    temp_r4_14 = arg0->unk100;
                    temp_r5_10 = GetItemAt__8RucksackUi(temp_r4_14, func_080CE184(arg0, arg2, 0));
                    __12RucksackItemG7Article(&spC, GetArticle__C12ArticleStack(&sp4));
                    *temp_r5_10 = spC;
                    SubtractAmount__12ArticleStackUi(GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C), 1);
                    temp_r5_11 = arg0->unk78;
                    temp_r4_15 = func_080CE184(arg0, arg2, 0);
                    sp0.unk32 = GetArticle__C12ArticleStack(&sp4);
                    temp_r3 = GetIconId__C7Article();
                    sp0 = sp40;
                    func_080CB304(temp_r5_11, temp_r4_15, &gUnk_086678A0, temp_r3);
                    if (func_080CF054(*sp50) != arg0->unk94->unkBC) {

                    } else {
                        GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C);
                        if ((IsEmpty__C12ArticleStack() << 0x18) != 0) {
block_110:
                            var_r1_3 = sp3C;
                            goto block_111;
                        }
                        var_r5 = arg0->unk7C;
                        var_r4 = func_080CE184(arg0, sp3C, 0);
block_114:
                        var_r1_4 = sp4C;
                        goto block_115;
                    }
                } else if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) != 0) {
                    if (GetKind__C12RucksackItem(&sp8) == 1) {
                        if ((IsWrapped__C12RucksackItem(&sp8) << 0x18) != 0) {
                            func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                            arg0->unk108 = sp40;
                            goto block_82;
                        }
                        temp_r4_16 = arg0->unk100;
                        temp_r5_12 = GetItemAt__8RucksackUi(temp_r4_16, func_080CE184(arg0, arg2, 0));
                        __12RucksackItem(&spC);
                        *temp_r5_12 = spC;
                        temp_r5_13 = GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C);
                        __12ArticleStackG7ArticleUi(&spC, GetArticle__C12RucksackItem(&sp8), 1);
                        memcpy(temp_r5_13, &spC, 2);
                        temp_r4_17 = arg0->unk78;
                        func_080CBA60(temp_r4_17, func_080CE184(arg0, arg2, 0));
                        if (func_080CF054(*sp50) != arg0->unk94->unkBC) {

                        } else {
                            var_r5_2 = arg0->unk7C;
                            var_r4_2 = func_080CE184(arg0, sp3C, 0);
                            var_r0 = &sp0 + 0x33;
                            sp0.unk33 = GetArticle__C12RucksackItem(&sp8);
                            goto block_77;
                        }
                    } else {
                        goto block_78;
                    }
                } else if (GetKind__C12RucksackItem(&sp8) == 1) {
                    temp_r5_14 = &sp0 + 0x35;
                    sp0.unk35 = GetArticle__C12RucksackItem(&sp8);
                    sp34 = GetArticle__C12ArticleStack(&sp4);
                    temp_r6_5 = GetId__C7Article(&sp34);
                    if ((temp_r6_5 != GetId__C7Article(temp_r5_14)) && (GetAmount__C12ArticleStack(&sp4) != 1)) {
                        goto block_82;
                    }
                    temp_r4_18 = GetId__C7Article(&sp34);
                    if (temp_r4_18 == GetId__C7Article(temp_r5_14)) {

                    } else {
                        temp_r0 = GetAmount__C12ArticleStack(&sp4);
                        if (temp_r0 != 1) {

                        } else {
                            if ((IsWrapped__C12RucksackItem(&sp8) << 0x18) != 0) {
                                func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                                arg0->unk108 = temp_r0;
                                goto block_89;
                            }
                            temp_r5_15 = GetArticleStackAt__5ShelfUi(arg0->unk104, sp4C);
                            __12ArticleStackG7ArticleUi(&spC, sp0.unk35, 1);
                            memcpy(temp_r5_15, &spC, 2);
                            temp_r5_16 = arg0->unk100;
                            temp_r5_17 = GetItemAt__8RucksackUi(temp_r5_16, func_080CE184(arg0, arg2, 0));
                            __12RucksackItemG7Article(&spC, sp34);
                            *temp_r5_17 = spC;
                            temp_r5_18 = arg0->unk78;
                            temp_r4_19 = func_080CE184(arg0, arg2, 0);
                            temp_r3_2 = GetIconId__C7Article(&sp34);
                            sp0 = temp_r0;
                            func_080CB304(temp_r5_18, temp_r4_19, &gUnk_086678A0, temp_r3_2);
                            if (func_080CF054(*sp58) != arg0->unk94->unkBC) {

                            } else {
                                temp_r5_19 = arg0->unk7C;
                                temp_r4_20 = func_080CE184(arg0, sp3C, 0);
                                temp_r3_3 = GetIconId__C7Article(temp_r5_14);
                                sp0 = temp_r0;
                                func_080CC728(temp_r5_19, temp_r4_20, &gUnk_086678A0, temp_r3_3);
                            }
                        }
                    }
                } else {
                    goto block_89;
                }
            }
        } else if (arg2 > 8) {
            sp48 = arg0 + 0x100;
            temp_r4_21 = arg0->unk100;
            sp4 = *GetItemAt__8RucksackUi(temp_r4_21, func_080CE184(arg0, sp3C, 0));
            temp_r0_2 = func_080CE184(arg0, arg2, arg0->unk94->unkBC);
            memcpy(&sp8, GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2), 2);
            if ((IsEmpty__C12RucksackItem(&sp4) << 0x18) != 0) {
                if ((IsEmpty__C12ArticleStack(&sp8) << 0x18) == 0) {
                    sp0.unk2E = GetArticle__C12ArticleStack(&sp8);
                    temp_r4_22 = *sp48;
                    temp_r4_23 = GetItemAt__8RucksackUi(temp_r4_22, func_080CE184(arg0, sp3C, 0));
                    __12RucksackItemG7Article(&spC, sp0.unk2E);
                    *temp_r4_23 = spC;
                    SubtractAmount__12ArticleStackUi(GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2), 1);
                    temp_r6_6 = arg0->unk78;
                    temp_r4_24 = func_080CE184(arg0, sp3C, 0);
                    temp_r3_4 = GetIconId__C7Article(&sp0 + 0x2E);
                    sp0 = sp40;
                    func_080CB304(temp_r6_6, temp_r4_24, &gUnk_086678A0, temp_r3_4);
                    GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2);
                    if ((IsEmpty__C12ArticleStack() << 0x18) != 0) {
                        var_r1_3 = arg2;
block_111:
                        func_080CCDEC(arg0->unk7C, func_080CE184(arg0, var_r1_3, 0));
                    } else {
                        var_r5 = arg0->unk7C;
                        var_r4 = func_080CE184(arg0, arg2, 0);
                        var_r1_4 = temp_r0_2;
                        goto block_115;
                    }
                }
            } else {
                if ((IsEmpty__C12ArticleStack(&sp8) << 0x18) != 0) {
                    if (GetKind__C12RucksackItem(&sp4) != 1) {
                        goto block_82;
                    }
                    if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
                        func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                        arg0->unk108 = sp40;
                        goto block_82;
                    }
                    sp0.unk2F = GetArticle__C12RucksackItem(&sp4);
                    temp_r4_25 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2);
                    __12ArticleStackG7ArticleUi(&spC, sp0.unk2F, 1);
                    memcpy(temp_r4_25, &spC, 2);
                    temp_r4_26 = *sp48;
                    temp_r4_27 = GetItemAt__8RucksackUi(temp_r4_26, func_080CE184(arg0, sp3C, 0));
                    __12RucksackItem(&spC);
                    *temp_r4_27 = spC;
                    temp_r4_28 = arg0->unk78;
                    func_080CBA60(temp_r4_28, func_080CE184(arg0, sp3C, 0));
                    var_r5_2 = arg0->unk7C;
                    var_r4_2 = func_080CE184(arg0, arg2, 0);
                    var_r0 = &sp0 + 0x2F;
                    goto block_77;
                }
                if (GetKind__C12RucksackItem(&sp4) != 1) {
block_78:
                    sp40 = 0;
                } else {
                    sp30 = GetArticle__C12RucksackItem(&sp4);
                    sp0.unk31 = GetArticle__C12ArticleStack(&sp8);
                    temp_r6_7 = GetId__C7Article(&sp30);
                    if ((temp_r6_7 != GetId__C7Article(&sp0 + 0x31)) && (GetAmount__C12ArticleStack(&sp8) != 1)) {
                        goto block_89;
                    }
                    temp_r4_29 = GetId__C7Article(&sp30);
                    if ((temp_r4_29 != GetId__C7Article(&sp0 + 0x31)) && (temp_r0_3 = GetAmount__C12ArticleStack(&sp8), (temp_r0_3 == 1))) {
                        if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
                            func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                            arg0->unk108 = temp_r0_3;
                            goto block_89;
                        }
                        temp_r5_20 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2);
                        __12ArticleStackG7ArticleUi(&spC, sp30, 1);
                        memcpy(temp_r5_20, &spC, 2);
                        temp_r5_21 = arg0->unk100;
                        temp_r5_22 = GetItemAt__8RucksackUi(temp_r5_21, func_080CE184(arg0, sp3C, 0));
                        __12RucksackItemG7Article(&spC, sp31);
                        *temp_r5_22 = spC;
                        temp_r5_23 = arg0->unk78;
                        temp_r4_30 = func_080CE184(arg0, sp3C, 0);
                        temp_r3_5 = GetIconId__C7Article(&sp0 + 0x31);
                        sp0 = temp_r0_3;
                        func_080CB304(temp_r5_23, temp_r4_30, &gUnk_086678A0, temp_r3_5);
                        temp_r5_24 = arg0->unk7C;
                        temp_r4_31 = func_080CE184(arg0, arg2, 0);
                        temp_r3_6 = GetIconId__C7Article(&sp30);
                        sp0 = temp_r0_3;
                        func_080CC728(temp_r5_24, temp_r4_31, &gUnk_086678A0, temp_r3_6);
                    } else {
                        if (GetAmount__C12ArticleStack(&sp8) == 0x63) {
                            goto block_89;
                        }
                        if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
                            func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                            arg0->unk108 = 1U;
                            sp40 = 0;
                        } else {
                            AddAmount__12ArticleStackUi(GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_2), 1U);
                            temp_r4_32 = arg0->unk100;
                            temp_r4_33 = GetItemAt__8RucksackUi(temp_r4_32, func_080CE184(arg0, sp3C, 0));
                            __12RucksackItem(&spC);
                            *temp_r4_33 = spC;
                            temp_r4_34 = arg0->unk78;
                            func_080CBA60(temp_r4_34, func_080CE184(arg0, sp3C, 0));
                            var_r5 = arg0->unk7C;
                            var_r4 = func_080CE184(arg0, arg2, 0);
                            var_r1_4 = temp_r0_2;
                            goto block_115;
                        }
                    }
                }
            }
        } else {
            temp_r5_25 = arg0->unk78;
            temp_r0_4 = func_080CB2E8(temp_r5_25, func_080CE184(arg0, sp3C, 0));
            sp10.unk0 = (s32) temp_r0_4->unk0;
            sp10.unk4 = (s32) temp_r0_4->unk4;
            sp10.unk8 = (s32) temp_r0_4->unk8;
            temp_r5_26 = arg0->unk78;
            temp_r0_5 = func_080CB2E8(temp_r5_26, func_080CE184(arg0, arg2, 0));
            sp1C.unk0 = (s32) temp_r0_5->unk0;
            sp1C.unk4 = (s32) temp_r0_5->unk4;
            sp1C.unk8 = (s32) temp_r0_5->unk8;
            temp_r4_35 = arg0->unk100;
            sp4 = *GetItemAt__8RucksackUi(temp_r4_35, func_080CE184(arg0, sp3C, 0));
            temp_r4_36 = arg0->unk100;
            sp8 = *GetItemAt__8RucksackUi(temp_r4_36, func_080CE184(arg0, arg2, 0));
            if (((IsEmpty__C12RucksackItem(&sp4) << 0x18) == 0) || ((IsEmpty__C12RucksackItem(&sp8) << 0x18) == 0)) {
                if ((IsEmpty__C12RucksackItem(&sp4) << 0x18) != 0) {
                    temp_r4_37 = arg0->unk100;
                    *GetItemAt__8RucksackUi(temp_r4_37, func_080CE184(arg0, sp3C, 0)) = sp8;
                    temp_r4_38 = arg0->unk100;
                    temp_r4_39 = GetItemAt__8RucksackUi(temp_r4_38, func_080CE184(arg0, arg2, 0));
                    __12RucksackItem(&sp28);
                    *temp_r4_39 = sp28;
                    temp_r4_40 = arg0->unk78;
                    temp_r1 = func_080CE184(arg0, sp3C, 0);
                    sp0 = sp40;
                    func_080CB63C(temp_r4_40, temp_r1, sp20, sp24);
                    temp_r4_41 = arg0->unk78;
                    func_080CBA60(temp_r4_41, func_080CE184(arg0, arg2, 0));
                } else {
                    if ((IsEmpty__C12RucksackItem(&sp8) << 0x18) != 0) {
                        temp_r4_42 = arg0->unk100;
                        temp_r4_43 = GetItemAt__8RucksackUi(temp_r4_42, func_080CE184(arg0, sp3C, 0));
                        __12RucksackItem(&sp28);
                        *temp_r4_43 = sp28;
                        temp_r4_44 = arg0->unk100;
                        *GetItemAt__8RucksackUi(temp_r4_44, func_080CE184(arg0, arg2, 0)) = sp4;
                        temp_r4_45 = arg0->unk78;
                        func_080CBA60(temp_r4_45, func_080CE184(arg0, sp3C, 0));
                    } else {
                        temp_r4_46 = arg0->unk100;
                        *GetItemAt__8RucksackUi(temp_r4_46, func_080CE184(arg0, sp3C, 0)) = sp8;
                        temp_r4_47 = arg0->unk100;
                        *GetItemAt__8RucksackUi(temp_r4_47, func_080CE184(arg0, arg2, 0)) = sp4;
                        temp_r4_48 = arg0->unk78;
                        temp_r1_2 = func_080CE184(arg0, sp3C, 0);
                        sp0 = sp40;
                        func_080CB63C(temp_r4_48, temp_r1_2, sp20, sp24);
                    }
                    temp_r4_49 = arg0->unk78;
                    temp_r1_3 = func_080CE184(arg0, arg2, 0);
                    sp0 = sp40;
                    func_080CB63C(temp_r4_49, temp_r1_3, sp14, sp18);
                }
            }
        }
    } else if (arg2 <= 8) {
        func_0808C9D0(arg0, arg2, 0);
    } else if ((func_0800F190(arg0->unkFC) << 0x18) != 0) {
        func_0808C9D0(arg0, arg2, arg0->unk94->unkBC);
    } else if (func_0800F204(arg0->unkFC) == 1) {
        func_0800F294(&sp4, arg0->unkFC);
        sp2C = GetArticle__C12RucksackItem(&sp4);
        sp44 = arg0 + 0x94;
        temp_r0_6 = func_080CE184(arg0, arg2, arg0->unk94->unkBC);
        memcpy(&sp8, GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_6), 2);
        if ((IsEmpty__C12ArticleStack(&sp8) << 0x18) != 0) {
            if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) == 0) {
                func_0800F390(arg0->unkFC);
                temp_r5_27 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_6);
                __12ArticleStackG7ArticleUi(&spC, GetArticle__C12RucksackItem(&sp4), 1);
                memcpy(temp_r5_27, &spC, 2);
                func_080CC0B4(arg0->unk78);
                var_r5_2 = arg0->unk7C;
                var_r4_2 = func_080CE184(arg0, arg2, 0);
                var_r0 = &sp2C;
block_77:
                temp_r3_7 = GetIconId__C7Article(var_r0);
                sp0 = sp40;
                func_080CC728(var_r5_2, var_r4_2, &gUnk_086678A0, temp_r3_7);
            } else {
                func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                arg0->unk108 = sp40;
                goto block_82;
            }
        } else {
            temp_r4_50 = GetId__C7Article(&sp2C);
            sp0.unk2D = GetArticle__C12ArticleStack(&sp8);
            temp_r0_7 = GetId__C7Article() ^ temp_r4_50;
            if ((s32) ((0 - temp_r0_7) | temp_r0_7) < 0) {
                if (GetAmount__C12ArticleStack(&sp8) == 1) {
                    var_r2 = (*sp44)->unkBC;
                    var_r1 = arg2;
block_16:
                    sp40 = (u32) func_0808C9D0(arg0, var_r1, var_r2);
                } else {
                    goto block_89;
                }
            } else if (GetAmount__C12ArticleStack(&sp8) != 0x63) {
                if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) == 0) {
                    func_0800F390(arg0->unkFC);
                    AddAmount__12ArticleStackUi(GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0_6), 1U);
                    func_080CC0B4(arg0->unk78);
                    var_r5 = arg0->unk7C;
                    var_r4 = func_080CE184(arg0, arg2, 0);
                    var_r1_4 = temp_r0_6;
block_115:
                    GetArticleStackAt__5ShelfUi(arg0->unk104, var_r1_4);
                    func_080CCD48(var_r5, var_r4, GetAmount__C12ArticleStack());
                } else {
                    func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                    arg0->unk108 = sp40;
block_89:
                    sp40 = 0;
                }
            } else {
                goto block_82;
            }
        }
    } else {
block_82:
        sp40 = 0;
    }
    return sp40;
}

