#include "common.h"
s32 ExtractItemAt__8RucksackUi(s32 *, s32, s32);      /* extern */
u32 GetAmount__C12ArticleStack(s32 *);              /* extern */
s32 *GetArticleStackAt__5ShelfUi(s32, s32);         /* extern */
s8 GetArticle__C12ArticleStack(s32 *);              /* extern */
u16 GetIconId__C7Article(void *);                   /* extern */
s32 GetId__C7Article(void *);                       /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 IsEmpty__C12ArticleStack(s32 *);                /* extern */
s32 SubtractAmount__12ArticleStackUi(s32 *, s32);     /* extern */
s32 __12ArticleStackG7ArticleUi(s32 *, u8, s32);      /* extern */
s32 func_0800F190(s32);                             /* extern */
u32 func_0800F204(s32);                             /* extern */
u8 func_0800F258(s32);                              /* extern */
s32 func_0800F294(s32 *, s32);                        /* extern */
s32 func_0800F388(s32);                             /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_0800F3E8(s32, s8);                           /* extern */
s32 func_0800F418(s32);                               /* extern */
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
void *func_080CB2E8(s32, s32);                      /* extern */
void *func_080CB2FC(s32, s32);                      /* extern */
s32 func_080CB63C(s32, s32, s32, s32);                /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CBAF0(s32, ? *, u16, s32);                /* extern */
s32 func_080CBDD4(s32, s32, s32, s32);                /* extern */
s32 func_080CC0B4(s32);                               /* extern */
s32 func_080CC728(s32, s32, ? *, u16);                /* extern */
s32 func_080CCD48(s32, s32, u32);                     /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
extern ? gUnk_081000D4;
extern ? gUnk_086678A0;

u8 func_0808C9D0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 sp10;
    s32 sp14;
s32 sp18;
    s32 sp24;
    s8 sp28;
    u8 sp2A;
    s32 sp2C;
    s32 sp30;
    s32 *temp_r5_2;
    s32 *temp_r5_4;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_2;
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
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_3;
    s32 temp_r5_5;
    s32 var_r1;
    s32 var_r1_2;
    u16 temp_r3;
    u16 temp_r3_2;
    u32 temp_r0_2;
    u32 temp_r0_5;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;

    sp2C = arg2;
    sp30 = 1;
    if (arg1 == 0) {

    } else if (arg1 > 8) {
        temp_r0 = func_080CE184(arg0, arg1, sp2C);
        memcpy(&sp4, GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0), 2);
        if ((func_0800F190(arg0->unkFC) << 0x18) != 0) {
            if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) != 0) {

            } else {
                temp_r4 = arg0->unkFC;
                func_0800F3E8(temp_r4, GetArticle__C12ArticleStack(&sp4));
                SubtractAmount__12ArticleStackUi(GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0), 1);
                temp_r4_2 = arg0->unk78;
                sp28 = GetArticle__C12ArticleStack(&sp4);
                func_080CBAF0(temp_r4_2, &gUnk_086678A0, GetIconId__C7Article(), 1);
                if (arg0->unk94->unkBC != sp2C) {

                } else {
                    GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                    if ((IsEmpty__C12ArticleStack() << 0x18) != 0) {
                        temp_r4_3 = arg0->unk7C;
                        func_080CCDEC(temp_r4_3, func_080CE184(arg0, arg1, 0));
                    } else {
                        temp_r5 = arg0->unk7C;
                        temp_r4_4 = func_080CE184(arg0, arg1, 0);
                        GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                        func_080CCD48(temp_r5, temp_r4_4, GetAmount__C12ArticleStack());
                    }
                }
            }
        } else {
            temp_r0_2 = func_0800F204(arg0->unkFC);
            switch (temp_r0_2) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                sp0.unk2A = func_0800F258(arg0->unkFC);
                if ((IsEmpty__C12ArticleStack(&sp4) << 0x18) != 0) {
                    if ((func_0800F388(arg0->unkFC) << 0x18) == 0) {
                        func_0800F390(arg0->unkFC);
                        temp_r5_2 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                        __12ArticleStackG7ArticleUi(&sp8, sp0.unk2A, 1);
                        memcpy(temp_r5_2, &sp8, 2);
                        func_080CC0B4(arg0->unk78);
                        if (arg0->unk94->unkBC == sp2C) {
                            temp_r5_3 = arg0->unk7C;
                            temp_r4_5 = func_080CE184(arg0, arg1, 0);
                            temp_r3 = GetIconId__C7Article(&sp0 + 0x2A);
                            sp0 = 1;
                            func_080CC728(temp_r5_3, temp_r4_5, &gUnk_086678A0, temp_r3);
                        }
                    } else {
                        func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                        arg0->unk108 = 1;
                        sp30 = 0;
                    }
                } else if (GetAmount__C12ArticleStack(&sp4) > 1U) {
                    sp30 = 0;
                } else if ((func_0800F388(arg0->unkFC) << 0x18) == 0) {
                    func_0800F390(arg0->unkFC);
                    temp_r4_6 = arg0->unkFC;
                    func_0800F3E8(temp_r4_6, GetArticle__C12ArticleStack(&sp4));
                    temp_r5_4 = GetArticleStackAt__5ShelfUi(arg0->unk104, temp_r0);
                    __12ArticleStackG7ArticleUi(&sp8, sp2A, 1);
                    memcpy(temp_r5_4, &sp8, 2);
                    temp_r4_7 = arg0->unk78;
                    sp0.unk29 = GetArticle__C12ArticleStack(&sp4);
                    func_080CBAF0(temp_r4_7, &gUnk_086678A0, GetIconId__C7Article(), 1);
                    if (arg0->unk94->unkBC != sp2C) {

                    } else {
                        temp_r5_5 = arg0->unk7C;
                        temp_r4_8 = func_080CE184(arg0, arg1, 0);
                        temp_r3_2 = GetIconId__C7Article(&sp0 + 0x2A);
                        sp0 = 1;
                        func_080CC728(temp_r5_5, temp_r4_8, &gUnk_086678A0, temp_r3_2);
                    }
                } else {
                    temp_r4_9 = GetId__C7Article(&sp0 + 0x2A);
                    sp0.unk2B = GetArticle__C12ArticleStack(&sp4);
                    temp_r0_3 = GetId__C7Article() ^ temp_r4_9;
                    if ((s32) ((0 - temp_r0_3) | temp_r0_3) < 0) {
                        func_08050DC8(arg0 + 0x80, &gUnk_081000D4, 0, 0);
                        arg0->unk108 = 1;
                    }
                    goto block_41;
                }
                break;
            case 0:                                 /* switch 2 */
            case 2:                                 /* switch 2 */
            case 3:                                 /* switch 2 */
            case 4:                                 /* switch 2 */
                sp30 = 0;
                break;
            }
        }
    } else if ((func_0800F190(arg0->unkFC) << 0x18) != 0) {
        temp_r4_10 = arg0->unk78;
        temp_r0_4 = func_080CB2E8(temp_r4_10, func_080CE184(arg0, arg1, 0));
        sp4.unk0 = temp_r0_4->unk0;
        sp4.unk4 = (s32) temp_r0_4->unk4;
        sp4.unk8 = (s32) temp_r0_4->unk8;
        var_r1 = 0;
        if ((sp8 == 0) || (spC == 0)) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {

        } else {
            func_080CBDD4(arg0->unk78, sp8, spC, 1);
            temp_r4_11 = arg0->unk78;
            func_080CBA60(temp_r4_11, func_080CE184(arg0, arg1, 0));
            temp_r4_12 = arg0->unk100;
            ExtractItemAt__8RucksackUi(&sp10, temp_r4_12, func_080CE184(arg0, arg1, 0));
            sp14 = sp10;
            func_0800F418(arg0->unkFC);
        }
    } else {
        temp_r0_5 = func_0800F204(arg0->unkFC);
        switch (temp_r0_5) {                        /* switch 1; irregular */
        case 0:                                     /* switch 1 */
        case 1:                                     /* switch 1 */
            temp_r4_13 = arg0->unk78;
            temp_r0_6 = func_080CB2E8(temp_r4_13, func_080CE184(arg0, arg1, 0));
            sp4.unk0 = temp_r0_6->unk0;
            sp4.unk4 = (s32) temp_r0_6->unk4;
            sp4.unk8 = (s32) temp_r0_6->unk8;
            temp_r0_7 = func_080CB2FC(arg0->unk78, &sp4 + 0xC);
            sp18.unk0 = (s32) temp_r0_7->unk0;
            sp18.unk4 = (s32) temp_r0_7->unk4;
            sp18.unk8 = (s32) temp_r0_7->unk8;
            var_r1_2 = 0;
            if ((sp8 == 0) || (spC == 0)) {
                var_r1_2 = 1;
            }
            if (var_r1_2 == 0) {
                func_080CBDD4(arg0->unk78, sp8, spC, 1);
                temp_r4_14 = arg0->unk78;
                temp_r1 = func_080CE184(arg0, arg1, 0);
                sp0 = 1;
                func_080CB63C(temp_r4_14, temp_r1, sp1C, sp20);
                func_0800F294(&sp10, arg0->unkFC);
                func_0800F390(arg0->unkFC);
                temp_r4_15 = arg0->unk100;
                ExtractItemAt__8RucksackUi(&sp14, temp_r4_15, func_080CE184(arg0, arg1, 0));
                temp_r4_16 = arg0->unk100;
                *GetItemAt__8RucksackUi(temp_r4_16, func_080CE184(arg0, arg1, 0)) = sp10;
                sp24 = sp14;
                func_0800F418(arg0->unkFC);
            } else {
                func_080CC0B4(arg0->unk78);
                temp_r4_17 = arg0->unk78;
                temp_r1_2 = func_080CE184(arg0, arg1, 0);
                sp0 = 1;
                func_080CB63C(temp_r4_17, temp_r1_2, sp1C, sp20);
                func_0800F294(&sp24, arg0->unkFC);
                func_0800F390(arg0->unkFC);
                temp_r4_18 = arg0->unk100;
                *GetItemAt__8RucksackUi(temp_r4_18, func_080CE184(arg0, arg1, 0)) = sp24;
            }
            break;
        case 2:                                     /* switch 1 */
        case 3:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
block_41:
            sp30 = 0;
            break;
        }
    }
    return sp30;
}

