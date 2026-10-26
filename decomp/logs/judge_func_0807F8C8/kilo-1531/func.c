#include "common.h"
u32 AddAmountOfArticle__8RucksackUiUi(void *, s32, u32); /* extern */
u32 AddAmountOfTool__8RucksackUiUi(void *, s32, u32); /* extern */
s32 AddAmountOf__5ShelfUiUi(s32, s32, u32);           /* extern */
s32 AddAmountOf__9ToolChestUiUi(void *, s32);         /* extern */
s32 AddAmount__9ToolStackUi(void *, u32);             /* extern */
s32 GetAmountOfTool__C8RucksackUi(void *, s32);     /* extern */
s32 GetAmountOf__C9ToolChestUi(void *, s32);        /* extern */
s32 GetAmount__C9ToolStack(void *);                 /* extern */
s32 GetAvailableSpaceForTool__C8RucksackUi(void *, s32); /* extern */
s32 GetAvailableSpaceFor__C5ShelfUi(s32, s32);      /* extern */
s32 GetAvailableSpaceFor__C9ToolChestUi(void *, s32); /* extern */
s32 GetEmptyItemSlotCount__C8Rucksack();            /* extern */
s32 GetFirstSlotWithArticle__C8RucksackUi(void *, s32); /* extern */
s32 GetFirstSlotWith__C5ShelfUi(s32, s32);          /* extern */
s32 GetId__C4Tool();                                /* extern */
s32 GetId__C7Article();                             /* extern */
? *GetName__C4Tool(u8 *);                           /* extern */
s32 GetShelf__9FarmHouse(void *);                   /* extern */
s8 GetTool__C9ToolStack(void *);                    /* extern */
s32 IsEmpty__C9ToolStack(void *);                   /* extern */
s32 __4ToolUi(u8 *, s32);                             /* extern */
s32 __7ArticleUi(void *, s32);                        /* extern */
s32 __9ToolStackG4ToolUi(s32 *, u8, u32);               /* extern */
s32 *__builtin_new(s32);                            /* extern */
s32 func_08008724();                                  /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08009300(s32 *, void *);                     /* extern */
s32 func_0800934C(s32 *, s32, s32, s32);              /* extern */
s32 func_08009378(s32 *, s32, s32, s32);              /* extern */
s32 func_0800E940(void *);                          /* extern */
s32 func_0800ED20(void *);                            /* extern */
s32 func_0800F190(void *);                          /* extern */
s32 func_0800F204(void *);                          /* extern */
s8 func_0800F258(void *);                           /* extern */
s32 func_0800F3E8(void *, u8);                        /* extern */
s32 func_0804EC84(s32, ? *, s32);                     /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_08050E5C(void *);                            /* extern */
s32 func_08075BC8(void *, s32, s32);                  /* extern */
s32 func_08075C88(void *, s16);                       /* extern */
s32 func_08075E24(void *, s16);                       /* extern */
s32 func_0807F684(void *, s32);                       /* extern */
s32 func_0807F6E8(void *);                          /* extern */
s32 func_0809ACC0(void *, s32);                       /* extern */
s32 func_080C8550(void *);                            /* extern */
s32 func_080C85A0(void *);                            /* extern */
s32 func_080C9020(void *, u32);                       /* extern */
s32 func_080C96C4(void *);                            /* extern */
s32 func_080CA8B4(void *, u32, s32, s32);             /* extern */
s32 func_080CA98C(void *);                            /* extern */
s32 func_080CAAF4(void *);                            /* extern */
s32 func_080CABA0(void *, ? *);                       /* extern */
s32 func_080CABEC(void *, void *);                    /* extern */
s32 memcpy(void *, ? *, u32);                         /* extern */
s32 memmove(u32 *, void *, s32);                      /* extern */
u32 strlen(s32 *);                                    /* extern */
s32 sub_08080440();                                   /* extern */
extern ? gUnk_080FE484;
extern ? gUnk_080FE4D4;
extern ? gUnk_080FE50C;
extern ? gUnk_080FE540;
extern ? gUnk_080FE548;
extern ? gUnk_080FE5C8;
extern ? gUnk_080FE63C;
extern ? gUnk_080FE66C;
extern ? gUnk_080FE6B0;
extern ? gUnk_080FE6E4;
extern ? gUnk_080FE708;
extern ? *gUnk_08117814;
extern ? *gUnk_08117828;
extern ? vtable_unk_080E5B80;

void func_0807F8C8(void *arg0) {
s32 sp0;
    s32 *sp4;
s32 sp8;
    u32 sp18;
    u32 sp1C;
    u32 sp20;
    u32 sp24;
    s8 sp28;
    s32 sp2C;
    s32 sp30;
    s8 sp34;
    u8 sp38;
    s32 sp3C;
    u32 sp40;
    ? *temp_r4_9;
    ? *temp_r5_4;
    ? *temp_r8_3;
    ? *temp_sb;
    ? *temp_sb_2;
    ? *var_r1_2;
    ? *var_r1_4;
    s16 temp_r3_3;
    s16 var_r1_3;
    s32 *temp_r2;
    s32 *temp_r2_10;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *temp_r2_6;
    s32 *temp_r2_7;
    s32 *temp_r2_8;
    s32 *temp_r2_9;
    s32 *temp_r4_4;
    s32 *temp_r5;
    s32 *var_r1;
    s32 temp_r0_5;
    s32 temp_r1_4;
    s32 temp_r1_8;
    s32 temp_r1_9;
    s32 temp_r2_11;
    s32 temp_r3;
    s32 temp_r4_3;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r5_2;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 var_r0_3;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r2_5;
    s32 var_r2_6;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    s32 var_r7;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sb;
    s8 var_sl;
    u32 *temp_r3_2;
    u32 *var_r0;
    u32 *var_r0_2;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_16;
    u32 temp_r0_19;
    u32 temp_r0_20;
    u32 temp_r0_23;
    u32 temp_r0_24;
    u32 temp_r0_25;
    u32 temp_r0_26;
    u32 temp_r0_27;
    u32 temp_r0_29;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r1;
    u32 temp_r1_10;
    u32 temp_r1_2;
    u32 temp_r4_10;
    u32 temp_r4_11;
    u32 temp_r4_12;
    u32 temp_r4_13;
    u32 temp_r4_14;
    u32 temp_r4_15;
    u32 temp_r5_6;
    u32 var_r2;
    u32 var_r4_2;
    u32 var_r5_5;
    u32 var_r5_6;
    u32 var_r5_7;
    u32 var_r5_8;
    u32 var_r7_2;
    u32 var_r7_3;
    u8 *temp_r5_3;
    u8 temp_r0;
    u8 temp_r0_3;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_28;
    void *temp_r0_30;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r2_12;
    void *temp_r2_13;
    void *temp_r2_14;
    void *temp_r3_4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r5_5;
    void *temp_r5_7;
    void *temp_r7;

    func_08008724();
    func_080C85A0(arg0);
    var_r5 = 1;
    temp_r4 = arg0->unk8;
    sp18 = 0xC8;
    temp_r0 = temp_r4->unk10;
    temp_r1 = ((temp_r0 >> 3) * 7) + ((u32) (temp_r0 << 0x1D) >> 0x1D);
    sp1C = temp_r1;
    var_r0 = &sp18;
    if (temp_r1 < 0xC8U) {
        var_r0 = &sp1C;
    }
    if ((*var_r0 == 1) && ((s32) ((u32) (temp_r4->unk11 << 0x1E) >> 0x1E) <= 1)) {
        var_r5 = 0;
    }
    if ((func_0800E940(arg0->unk8 + 0x1BD8) << 0x18) != 0) {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        temp_r0_2 = arg0->unk2A4;
        if (temp_r0_2 <= 0x27U) {
            temp_r2 = arg0 + 0x2A4 + ((temp_r0_2 * 4) + 4);
            if (temp_r2 != 0) {
                *temp_r2 = 0;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    var_r5_2 = 1;
    temp_r4_2 = arg0->unk8;
    sp20 = 0xC8;
    temp_r0_3 = temp_r4_2->unk10;
    temp_r1_2 = ((temp_r0_3 >> 3) * 7) + ((u32) (temp_r0_3 << 0x1D) >> 0x1D);
    sp24 = temp_r1_2;
    var_r0_2 = &sp20;
    if (temp_r1_2 < 0xC8U) {
        var_r0_2 = &sp24;
    }
    if ((*var_r0_2 == 1) && ((s32) ((u32) (temp_r4_2->unk11 << 0x1E) >> 0x1E) <= 1)) {
        var_r5_2 = 0;
    }
    if (((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) == 0) && (func_0800F204(arg0->unk8 + 0x1C2C) == 1)) {
        sp28 = func_0800F258(arg0->unk8 + 0x1C2C);
        if (GetId__C7Article() == 0x5E) {
            var_r5_2 = 0;
        }
    }
    if (GetFirstSlotWithArticle__C8RucksackUi(arg0->unk8 + 0x1C38, 0x5E) != -1) {
        var_r5_2 = 0;
    }
    if ((GetShelf__9FarmHouse(arg0->unk8 + 0x1F4) != 0) && (GetFirstSlotWith__C5ShelfUi(GetShelf__9FarmHouse(arg0->unk8 + 0x1F4), 0x5E) != -1)) {
        var_r5_2 = 0;
    }
    if (var_r5_2 != 0) {
        temp_r0_4 = arg0->unk2A4;
        if (temp_r0_4 <= 0x27U) {
            temp_r2_2 = arg0 + 0x2A4 + ((temp_r0_4 * 4) + 4);
            if (temp_r2_2 != 0) {
                *temp_r2_2 = 1;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    temp_r0_5 = GetShelf__9FarmHouse(arg0->unk8 + 0x1F4);
    var_r2 = (u32) ((0 - temp_r0_5) | temp_r0_5) >> 0x1F;
    if (8 & arg0->unk8->unk21C7) {
        var_r2 = 0;
    }
    if (var_r2 != 0) {
        temp_r0_6 = arg0->unk2A4;
        if (temp_r0_6 <= 0x27U) {
            temp_r2_3 = arg0 + 0x2A4 + ((temp_r0_6 * 4) + 4);
            if (temp_r2_3 != 0) {
                *temp_r2_3 = 2;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    temp_r0_7 = arg0->unk2A4;
    if (temp_r0_7 <= 0x27U) {
        temp_r2_4 = arg0 + 0x2A4 + ((temp_r0_7 * 4) + 4);
        if (temp_r2_4 != 0) {
            *temp_r2_4 = 3;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_8 = arg0->unk2A4;
    if (temp_r0_8 <= 0x27U) {
        temp_r2_5 = arg0 + 0x2A4 + ((temp_r0_8 * 4) + 4);
        if (temp_r2_5 != 0) {
            *temp_r2_5 = 4;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_9 = arg0->unk2A4;
    if (temp_r0_9 <= 0x27U) {
        temp_r2_6 = arg0 + 0x2A4 + ((temp_r0_9 * 4) + 4);
        if (temp_r2_6 != 0) {
            *temp_r2_6 = 5;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_10 = arg0->unk2A4;
    if (temp_r0_10 <= 0x27U) {
        temp_r2_7 = arg0 + 0x2A4 + ((temp_r0_10 * 4) + 4);
        if (temp_r2_7 != 0) {
            *temp_r2_7 = 6;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_11 = arg0->unk2A4;
    if (temp_r0_11 <= 0x27U) {
        temp_r2_8 = arg0 + 0x2A4 + ((temp_r0_11 * 4) + 4);
        if (temp_r2_8 != 0) {
            *temp_r2_8 = 7;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_12 = arg0->unk2A4;
    if (temp_r0_12 <= 0x27U) {
        temp_r2_9 = arg0 + 0x2A4 + ((temp_r0_12 * 4) + 4);
        if (temp_r2_9 != 0) {
            *temp_r2_9 = 8;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_13 = arg0->unk2A4;
    if (temp_r0_13 <= 0x27U) {
        temp_r2_10 = arg0 + 0x2A4 + ((temp_r0_13 * 4) + 4);
        if (temp_r2_10 != 0) {
            *temp_r2_10 = 9;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r4_3 = func_0807F6E8(arg0);
    func_08075C88(arg0->unk1C, arg0->unkC);
    func_08075E24(arg0->unk1C, (s16) ((temp_r4_3 + 8) * 8));
    func_0807F684(arg0, arg0->unk10);
    temp_r0_14 = func_08008918(arg0);
    sp0.unk0 = 0x3F;
    temp_r0_14->unk50 = 0x3F;
    temp_r4_4 = __builtin_new(0x10);
    temp_r1_3 = func_08008918(arg0);
    temp_r4_4->unk0 = 0;
    temp_r4_4->unk4 = 0;
    temp_r4_4->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4_4 + 0xC;
    func_08009300(temp_r5, temp_r1_3);
    sp4 = temp_r4_4;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_15 = func_08008940(arg0);
    temp_r0_15->unk8->unk10(temp_r0_15, sp4);
    sp3C = 0;
loop_67:
    func_080087C8(arg0);
    func_080088B8(arg0);
    temp_r1_4 = *sp4;
    if ((s32) ((0 - temp_r1_4) | temp_r1_4) >= 0) {
        if (sp3C != 0) {
            sub_08080440();
        }
        temp_r0_16 = arg0->unk708;
        switch (temp_r0_16) {
        case 0:
            if (arg0->unk14 != arg0->unk10) {
                func_0807F684(arg0);
            }
            if (arg0->unk6A1 == 0) {
                if (func_080088CC(arg0) & 2) {
                    if (arg0->unk70C != 0) {
                        func_080CABA0(arg0, &gUnk_080FE6B0);
                        func_08050E50(arg0 + 0x348, 0x73);
                    } else {
                        func_080CABA0(arg0, &gUnk_080FE6E4);
                        func_08050E50(arg0 + 0x348, 0x74);
                    }
                    var_r1 = arg0 + 0x708;
                    var_r0_3 = 4;
                    goto block_164;
                }
            } else {
                temp_r2_11 = ((arg0->unk10 * 4) + arg0)->unk2A8;
                temp_r0_17 = (temp_r2_11 * 8) + &gUnk_080FE484;
                sp2C = temp_r0_17->unk0;
                sp30 = temp_r0_17->unk4;
                sp40 = sp2C.unk4;
                var_r7 = 0;
                var_r8 = 0;
                var_r5_3 = 0;
                var_sb = 0;
                var_r3 = 0;
                if (temp_r2_11 <= 2) {
                    var_r3 = 1;
                }
                if (var_r3 != 0) {
                    temp_r4_5 = GetEmptyItemSlotCount__C8Rucksack();
                    if (GetShelf__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
                        var_r5_3 = GetAvailableSpaceFor__C5ShelfUi(GetShelf__9FarmHouse(arg0->unk8 + 0x1F4), sp2C);
                    }
                    if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
                        var_r8 = 1;
                    }
                    var_r4 = temp_r4_5 + var_r5_3 + var_r8;
                    if (var_r4 == 0) {
                        func_080CABA0(arg0, &gUnk_080FE50C);
                        func_08050E50(arg0 + 0x348, 0x74);
                        arg0->unk708 = 2U;
                    }
                } else {
                    temp_r8 = GetAvailableSpaceForTool__C8RucksackUi(arg0->unk8 + 0x1C38, sp2C);
                    temp_r4_6 = GetAvailableSpaceFor__C9ToolChestUi(arg0->unk8 + 0x380, sp2C);
                    if ((IsEmpty__C9ToolStack(arg0->unk8 + 0x1C34) << 0x18) != 0) {
                        var_r7 = 0x63;
                    } else {
                        sp34 = GetTool__C9ToolStack(arg0->unk8 + 0x1C34);
                        var_r2_2 = 0;
                        if (GetId__C4Tool() == sp2C) {
                            var_r2_2 = 1;
                        }
                        if (var_r2_2 != 0) {
                            var_r7 = 0x63 - GetAmount__C9ToolStack(arg0->unk8 + 0x1C34);
                        }
                    }
                    var_r4 = temp_r8 + temp_r4_6 + var_r7;
                    if (var_r4 == 0) {
                        func_080CABA0(arg0, &gUnk_080FE4D4);
                        func_08050E50(arg0 + 0x348, 0x74);
                        arg0->unk708 = 2U;
                    }
                    temp_r8_2 = GetAmountOfTool__C8RucksackUi(arg0->unk8 + 0x1C38, sp2C);
                    temp_r5_2 = GetAmountOf__C9ToolChestUi(arg0->unk8 + 0x380, sp2C);
                    if ((IsEmpty__C9ToolStack(arg0->unk8 + 0x1C34) << 0x18) == 0) {
                        sp0.unk35 = GetTool__C9ToolStack(arg0->unk8 + 0x1C34);
                        var_r2_3 = 0;
                        if (GetId__C4Tool() == sp2C) {
                            var_r2_3 = 1;
                        }
                        if (var_r2_3 != 0) {
                            var_sb = GetAmount__C9ToolStack(arg0->unk8 + 0x1C34);
                        }
                    }
                    func_0804EC84(temp_r8_2 + var_sb + temp_r5_2, &sp8, 7);
                }
                temp_r0_18 = arg0->unk8;
                var_r2_4 = 0;
                if ((u32) temp_r0_18->unk1AA8 >= (u32) sp2C.unk4) {
                    var_r2_4 = 1;
                }
                if (var_r2_4 == 0) {
                    func_080CABA0(arg0, &gUnk_080FE66C);
                    func_08050E50(arg0 + 0x348, 0x74);
                    var_r1 = arg0 + 0x708;
                    var_r0_3 = 2;
block_164:
                    *var_r1 = var_r0_3;
                } else if (var_r4 == 0) {

                } else {
                    var_sl = 0;
                    if ((s32) ((arg0->unk10 * 4) + arg0)->unk2A8 <= 2) {
                        var_sl = 1;
                    }
                    if (var_sl != 0) {
                        var_r7_2 = 1;
                        var_r5_4 = 1;
                        func_0809ACC0(temp_r0_18 + 0x1AA8);
                        func_080C8550(arg0);
                        if (sp2C == 0x35) {
                            func_0800ED20(arg0->unk8 + 0x1BD8);
                        }
                        if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
                            var_r7_2 = 0;
                            temp_r4_7 = arg0->unk8 + 0x1C2C;
                            __7ArticleUi(&sp0 + 0x37, sp2C);
                            func_0800F3E8(temp_r4_7, sp0.unk37);
                            var_r5_4 = 0;
                        }
                        if (var_r7_2 != 0) {
                            temp_r0_19 = AddAmountOfArticle__8RucksackUiUi(arg0->unk8 + 0x1C38, sp2C, var_r7_2);
                            if (var_r7_2 > temp_r0_19) {
                                var_r5_4 = 0;
                            }
                            if (temp_r0_19 != 0) {
                                AddAmountOf__5ShelfUiUi(GetShelf__9FarmHouse(arg0->unk8 + 0x1F4), sp2C, temp_r0_19);
                                if (var_r5_4 != 0) {
                                    var_r1_2 = &gUnk_080FE548;
                                } else {
                                    var_r1_2 = &gUnk_080FE5C8;
                                }
                                func_080CABA0(arg0, var_r1_2);
                            } else {
                                goto block_143;
                            }
                        } else {
block_143:
                            func_080CABA0(arg0, &gUnk_080FE63C);
                        }
                        func_08050E50(arg0 + 0x348, 0x73);
                        arg0->unk708 = 1U;
                        temp_r4_8 = arg0 + 0x2A4;
                        if (*(temp_r4_8 + ((arg0->unk10 * 4) + 4)) == 2) {
                            temp_r2_12 = arg0->unk8;
                            temp_r3 = temp_r2_12->unk218C;
                            temp_r2_12->unk218C = (s32) ((0xFFFE1FFF & temp_r3) | (((((u32) (temp_r3 << 0xF) >> 0x1C) + 1) & 0xF) << 0xD));
                            temp_r2_13 = arg0->unk8;
                            temp_r2_13->unk21C7 = (u8) (temp_r2_13->unk21C7 | 8);
                        }
                        temp_r3_2 = temp_r4_8 + ((arg0->unk10 * 4) + 4);
                        if ((u32) *temp_r3_2 <= 2U) {
                            temp_r0_20 = arg0->unk2A4;
                            if (temp_r0_20 != 0) {
                                temp_r0_21 = temp_r4_8 + ((temp_r0_20 * 4) + 4);
                                temp_r1_5 = temp_r3_2 + 4;
                                if ((temp_r1_5 != temp_r0_21) && (temp_r0_21 != temp_r1_5)) {
                                    memmove(temp_r3_2, temp_r1_5, temp_r0_21 - temp_r1_5);
                                }
                                arg0->unk2A4 = (u32) (arg0->unk2A4 - 1);
                            }
                            func_08075E24(arg0->unk1C, (s16) ((func_0807F6E8(arg0) + 8) * 8));
                            temp_r0_22 = arg0->unk1C;
                            temp_r3_3 = temp_r0_22->unkC;
                            var_r1_3 = temp_r3_3;
                            if ((s32) temp_r3_3 < 0) {
                                var_r1_3 = temp_r3_3 + 7;
                            }
                            var_r2_5 = temp_r3_3 + 0x100;
                            if (var_r2_5 < 0) {
                                var_r2_5 = temp_r3_3 + 0x107;
                            }
                            func_08075BC8(temp_r0_22, var_r1_3 >> 3, var_r2_5 >> 3);
                        }
                        arg0->unk70C = 1U;
                    } else {
                        func_080CA8B4(arg0 + 0x684, sp40, var_r4, 5);
                        arg0->unk708 = 3U;
                        temp_r5_3 = &sp0 + 0x36;
                        __4ToolUi(temp_r5_3, sp2C);
                        temp_r4_9 = arg0 + 0x6A4;
                        arg0->unk6A4 = var_sl;
                        temp_sb = GetName__C4Tool(temp_r5_3);
                        temp_r5_4 = temp_sb;
                        temp_r0_23 = strlen(temp_r4_9);
                        temp_r2_14 = temp_r4_9 + temp_r0_23;
                        temp_r4_10 = 0x63 - temp_r0_23;
                        if (temp_r4_10 != 0) {
                            var_r5_5 = strlen(temp_r5_4);
                            if (var_r5_5 > temp_r4_10) {
                                var_r5_5 = temp_r4_10;
                            }
                            memcpy(temp_r2_14, temp_sb, var_r5_5);
                            *(temp_r2_14 + var_r5_5) = var_sl;
                        }
                        temp_r0_24 = strlen(temp_r4_9);
                        temp_r1_6 = temp_r4_9 + temp_r0_24;
                        temp_r4_11 = 0x63 - temp_r0_24;
                        if (temp_r4_11 != 0) {
                            var_r5_6 = strlen(&gUnk_080FE540);
                            if (var_r5_6 > temp_r4_11) {
                                var_r5_6 = temp_r4_11;
                            }
                            memcpy(temp_r1_6, &gUnk_080FE540, var_r5_6);
                            *(temp_r1_6 + var_r5_6) = 0;
                        }
                        temp_sb_2 = gUnk_08117828;
                        temp_r0_25 = strlen(temp_r4_9);
                        temp_r3_4 = temp_r4_9 + temp_r0_25;
                        temp_r4_12 = 0x63 - temp_r0_25;
                        if (temp_r4_12 != 0) {
                            var_r5_7 = strlen(temp_sb_2);
                            if (var_r5_7 > temp_r4_12) {
                                var_r5_7 = temp_r4_12;
                            }
                            memcpy(temp_r3_4, temp_sb_2, var_r5_7);
                            *(temp_r3_4 + var_r5_7) = 0;
                        }
                        temp_r0_26 = strlen(temp_r4_9);
                        temp_r5_5 = temp_r4_9 + temp_r0_26;
                        temp_r4_13 = 0x63 - temp_r0_26;
                        if (temp_r4_13 != 0) {
                            var_r5_8 = strlen(&sp8);
                            if (var_r5_8 > temp_r4_13) {
                                var_r5_8 = temp_r4_13;
                            }
                            memcpy(temp_r5_5, &sp8, var_r5_8);
                            *(temp_r5_5 + var_r5_8) = 0;
                        }
                        temp_r8_3 = gUnk_08117814;
                        temp_r0_27 = strlen(temp_r4_9);
                        temp_r7 = temp_r4_9 + temp_r0_27;
                        temp_r5_6 = 0x63 - temp_r0_27;
                        if (temp_r5_6 != 0) {
                            var_r4_2 = strlen(temp_r8_3);
                            if (var_r4_2 > temp_r5_6) {
                                var_r4_2 = temp_r5_6;
                            }
                            memcpy(temp_r7, temp_r8_3, var_r4_2);
                            *(temp_r7 + var_r4_2) = 0;
                        }
                        func_080CABEC(arg0, arg0 + 0x6A4);
                    }
                }
            }
            arg0->unk14 = (s32) arg0->unk10;
            func_080C9020(arg0, arg0->unk2A4);
            break;
        case 1:
            if (arg0->unk350 != 3) {

            } else {
                func_080CABA0(arg0, &gUnk_080FE708);
                func_08050E50(arg0 + 0x348, 0x72);
                arg0->unk708 = 2U;
            }
            break;
        case 2:
            if (arg0->unk350 != 3) {

            } else {
                func_08050E5C(arg0 + 0x348);
                arg0->unk708 = 0U;
                arg0->unk14 = -1;
            }
            break;
        case 3:
            temp_r4_14 = func_080088CC(arg0) & 1;
            if (temp_r4_14 == 0) {
                if (func_080088CC(arg0) & 2) {
                    func_080CAAF4(arg0 + 0x684);
                    arg0->unk708 = temp_r4_14;
                    func_0807F684(arg0, arg0->unk10);
                } else {
                    temp_r1_7 = arg0 + 0x684;
                    if (temp_r1_7->unk8 != 0) {
                        func_080CA98C(temp_r1_7);
                    }
                }
            } else {
                var_r7_3 = (arg0 + 0x684)->unk14;
                var_r8_2 = 1;
                func_080CAAF4();
                func_0807F684(arg0, arg0->unk10);
                temp_r0_28 = (((arg0->unk10 * 4) + arg0)->unk2A8 * 8) + &gUnk_080FE484;
                temp_r1_8 = temp_r0_28->unk4;
                sp2C = temp_r0_28->unk0;
                sp30 = temp_r1_8;
                func_0809ACC0(arg0->unk8 + 0x1AA8, var_r7_3 * temp_r1_8);
                func_080C8550(arg0);
                if ((IsEmpty__C9ToolStack(arg0->unk8 + 0x1C34) << 0x18) != 0) {
                    temp_r5_7 = arg0->unk8 + 0x1C34;
                    __4ToolUi(&sp38, sp2C);
                    __9ToolStackG4ToolUi(&sp0, sp38, var_r7_3);
                    memcpy(temp_r5_7, &sp0, 2U);
                    goto block_191;
                }
                sp0.unk39 = GetTool__C9ToolStack(arg0->unk8 + 0x1C34);
                var_r2_6 = 0;
                if (GetId__C4Tool() == sp2C) {
                    var_r2_6 = 1;
                }
                if (var_r2_6 != 0) {
                    temp_r4_15 = 0x63 - GetAmount__C9ToolStack(arg0->unk8 + 0x1C34);
                    if (var_r7_3 > temp_r4_15) {
                        AddAmount__9ToolStackUi(arg0->unk8 + 0x1C34, temp_r4_15);
                        var_r7_3 -= temp_r4_15;
                        if (temp_r4_15 != 0) {
                            var_r8_2 = 0;
                        }
                    } else {
                        AddAmount__9ToolStackUi(arg0->unk8 + 0x1C34, var_r7_3);
                        var_r7_3 = 0;
                    }
                }
                if (var_r7_3 != 0) {
                    temp_r0_29 = AddAmountOfTool__8RucksackUiUi(arg0->unk8 + 0x1C38, sp2C, var_r7_3);
                    if (var_r7_3 > temp_r0_29) {
                        var_r8_2 = 0;
                    }
                    if (temp_r0_29 != 0) {
                        AddAmountOf__9ToolChestUiUi(arg0->unk8 + 0x380, sp2C);
                        if (var_r8_2 != 0) {
                            var_r1_4 = &gUnk_080FE548;
                        } else {
                            var_r1_4 = &gUnk_080FE5C8;
                        }
                        func_080CABA0(arg0, var_r1_4);
                    } else {
                        goto block_191;
                    }
                } else {
block_191:
                    func_080CABA0(arg0, &gUnk_080FE63C);
                }
                func_08050E50(arg0 + 0x348, 0x73);
                arg0->unk708 = 1U;
                arg0->unk70C = 1U;
            }
            break;
        case 4:
            if (arg0->unk350 == 3) {
                temp_r1_9 = *sp4;
                temp_r1_10 = (u32) ((0 - temp_r1_9) | temp_r1_9) >> 0x1F;
                if (temp_r1_10 == 0) {
                    arg0->unk708 = temp_r1_10;
                    sp3C = 1;
                    func_08009378(sp4 + 0xC, 0x889, 1, 1);
                    temp_r0_30 = func_08008940(arg0);
                    temp_r0_30->unk8->unk10(temp_r0_30, sp4);
                }
            }
            break;
        }
    }
    func_080C96C4(arg0);
    goto loop_67;
}

