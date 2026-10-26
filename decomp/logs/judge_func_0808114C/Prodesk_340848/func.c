#include "common.h"
s32 AddAmountOfArticle__8RucksackUiUi(void *, s32, s32); /* extern */
s32 AddAmountOf__5ShelfUiUi(s32, s32, s32);           /* extern */
s32 AddRecordPlayer__9FarmHouse(void *);              /* extern */
s32 GetAmountOfArticles__C8RucksackUi(void *, s32); /* extern */
s32 GetAmountOf__C5ShelfUi(s32, s32);               /* extern */
s32 GetAvailableSpaceFor__C5ShelfUi(s32, s32);      /* extern */
s32 GetEmptyItemSlotCount__C8Rucksack(void *);      /* extern */
s32 GetId__C7Article();                             /* extern */
? *GetName__C7Article(void *);                      /* extern */
s32 GetRecordPlayer__9FarmHouse(s32);               /* extern */
s32 GetShelf__9FarmHouse(void *);                   /* extern */
s32 __7ArticleUi(void *, s32);                        /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_08008724();                                  /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_0800F190(void *);                          /* extern */
s32 func_0800F204(void *);                          /* extern */
s8 func_0800F258(void *);                           /* extern */
s32 func_0800F3E8(void *, u8);                        /* extern */
s32 func_0804EC84(s32, ? *, s32);                     /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_08050E5C(void *);                            /* extern */
s32 func_08080E68(void *);                            /* extern */
s32 func_08081108(void *, s32);                       /* extern */
s32 func_0809ACC0(void *, s32);                       /* extern */
s32 func_0809EEA4(s32, u32);                        /* extern */
s32 func_080C8550(void *);                            /* extern */
s32 func_080C85A0(void *);                            /* extern */
s32 func_080C9020(void *, u32);                       /* extern */
s32 func_080C96C4(void *);                            /* extern */
s32 func_080CA8B4(void *, s32, s32, s32);             /* extern */
s32 func_080CA98C(void *);                            /* extern */
s32 func_080CAAF4(void *);                            /* extern */
s32 func_080CABA0(void *, ? *);                       /* extern */
s32 func_080CABEC(void *, void *);                    /* extern */
s32 memcpy(void *, ? *, u32);                         /* extern */
s32 memmove(void *, void *, s32);                     /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_080FE8FC;
extern ? gUnk_080FE988;
extern ? gUnk_080FE9A8;
extern ? gUnk_080FE9CC;
extern ? gUnk_080FE9D4;
extern ? gUnk_080FEA00;
extern ? gUnk_080FEA4C;
extern ? gUnk_080FEA5C;
extern ? gUnk_080FEAC0;
extern ? *gUnk_08117814;
extern ? *gUnk_08117828;
extern ? vtable_unk_080E5B80;

void func_0808114C(void *arg0) {
s32 sp0;
    void *sp4;
s32 sp8;
    s32 sp18;
    s32 sp1C;
    s8 sp20;
    s32 sp24;
    s32 sp28;
    ? *temp_r4_3;
    ? *temp_r5_6;
    ? *temp_r8;
    ? *temp_sb;
    ? *temp_sb_2;
    s32 *temp_r2;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *var_r1_2;
    s32 temp_r0_12;
    s32 temp_r0_19;
    s32 temp_r0_23;
    s32 temp_r1_11;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_7;
    s32 temp_r1_9;
    s32 temp_r4_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 var_r0;
    s32 var_r2;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sb;
    s32 var_sb_2;
    u32 *temp_r0_2;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_17;
    u32 temp_r0_20;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r3;
    u32 temp_r4_10;
    u32 temp_r4_11;
    u32 temp_r4_4;
    u32 temp_r4_5;
    u32 temp_r4_6;
    u32 temp_r4_7;
    u32 temp_r5_7;
    u32 var_r1;
    u32 var_r4;
    u32 var_r4_3;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r5_5;
    void *temp_r0_11;
    void *temp_r0_18;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_24;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_10;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r2_6;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_12;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_5;
    void *temp_r7;

    func_08008724();
    func_080C85A0(arg0);
    var_r4 = 0;
    var_r1 = 0;
    do {
        if ((func_0809EEA4(arg0->unk8 + 0x1FE4, var_r1) << 0x18) != 0) {
            temp_r0 = arg0->unk2A4;
            if (temp_r0 <= 0x27U) {
                temp_r0_2 = arg0 + 0x2A4 + ((temp_r0 * 4) + 4);
                if (temp_r0_2 != 0) {
                    *temp_r0_2 = var_r4;
                }
                arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
            }
        }
        var_r4 += 1;
        var_r1 = var_r4;
    } while (var_r1 <= 9U);
    if (GetRecordPlayer__9FarmHouse(arg0->unk8 + 0x1F4) == 0) {
        temp_r0_3 = arg0->unk2A4;
        if (temp_r0_3 <= 0x27U) {
            temp_r2 = arg0 + 0x2A4 + ((temp_r0_3 * 4) + 4);
            if (temp_r2 != 0) {
                *temp_r2 = 0xA;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    temp_r0_4 = arg0->unk2A4;
    if (temp_r0_4 <= 0x27U) {
        temp_r2_2 = arg0 + 0x2A4 + ((temp_r0_4 * 4) + 4);
        if (temp_r2_2 != 0) {
            *temp_r2_2 = 0xB;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_5 = arg0->unk2A4;
    if (temp_r0_5 <= 0x27U) {
        temp_r2_3 = arg0 + 0x2A4 + ((temp_r0_5 * 4) + 4);
        if (temp_r2_3 != 0) {
            *temp_r2_3 = 0xC;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_6 = arg0->unk2A4;
    if (temp_r0_6 <= 0x27U) {
        temp_r2_4 = arg0 + 0x2A4 + ((temp_r0_6 * 4) + 4);
        if (temp_r2_4 != 0) {
            *temp_r2_4 = 0xD;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_7 = arg0->unk2A4;
    if (temp_r0_7 <= 0x27U) {
        temp_r2_5 = arg0 + 0x2A4 + ((temp_r0_7 * 4) + 4);
        if (temp_r2_5 != 0) {
            *temp_r2_5 = 0xE;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    func_08080E68(arg0);
    func_08081108(arg0, ((arg0->unk10 * 4) + arg0)->unk2A8);
    temp_r0_8 = func_08008918(arg0);
    sp0.unk0 = 0x3F;
    temp_r0_8->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_9 = func_08008940(arg0);
    temp_r0_9->unk8->unk10(temp_r0_9, sp4);
    sp24 = 0;
loop_29:
    func_080087C8(arg0);
    func_080088B8(arg0);
    temp_r1_2 = sp4->unk0;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {
block_135:
        func_080C96C4(arg0);
        goto loop_29;
    }
    if (sp24 == 0) {
        temp_r0_10 = arg0->unk6A4;
        switch (temp_r0_10) {                       /* irregular */
        case 0:
            temp_r1_3 = arg0->unk10;
            if (arg0->unk14 != temp_r1_3) {
                func_08081108(arg0, ((temp_r1_3 * 4) + arg0)->unk2A8);
            }
            if (arg0->unk6A1 == 0) {
                if (func_080088CC(arg0) & 2) {
                    if (arg0->unk6A8 != 0) {
                        func_080CABA0(arg0, &gUnk_080FE9D4);
                    } else {
                        func_080CABA0(arg0, &gUnk_080FE9D4);
                    }
                    func_08050E50(arg0 + 0x348, 0x8D);
                    var_r1_2 = arg0 + 0x6A4;
                    var_r0 = 5;
                    goto block_97;
                }
            } else {
                temp_r3 = ((arg0->unk10 * 4) + arg0)->unk2A8;
                temp_r0_11 = (temp_r3 * 8) + &gUnk_080FE8FC;
                sp18 = temp_r0_11->unk0;
                sp1C = temp_r0_11->unk4;
                temp_r5_2 = arg0->unk8;
                var_r4_2 = 0;
                if ((u32) sp18.unk4 > (u32) temp_r5_2->unk1AA8) {
                    var_r4_2 = 1;
                }
                if (var_r4_2 != 0) {
                    func_080CABA0(arg0, &gUnk_080FE988);
                    func_08050E50(arg0 + 0x348, 0x90);
                    var_r1_2 = arg0 + 0x6A4;
                    var_r0 = 3;
                } else if (temp_r3 == 0xA) {
                    var_r1_2 = arg0 + 0x6A4;
                    var_r0 = 1;
                } else {
                    if (temp_r3 < 0xAU) {
                        goto block_85;
                    }
                    if (temp_r3 > 0xEU) {
block_85:
                        var_r7 = 0;
                        var_r5 = 0;
                        temp_r4_2 = GetEmptyItemSlotCount__C8Rucksack(arg0->unk8 + 0x1C38);
                        if (GetShelf__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
                            var_r5 = GetAvailableSpaceFor__C5ShelfUi(GetShelf__9FarmHouse(arg0->unk8 + 0x1F4), sp18);
                        }
                        if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
                            var_r7 = 1;
                        }
                        if ((temp_r4_2 + var_r7 + var_r5) == 0) {
                            func_080CABA0(arg0, &gUnk_080FE9A8);
                            func_08050E50(arg0 + 0x348, 0x90);
                            var_r1_2 = arg0 + 0x6A4;
                            var_r0 = 3;
                        } else {
                            var_r1_2 = arg0 + 0x6A4;
                            var_r0 = 1;
                        }
                    } else {
                        var_sb = 0;
                        var_r8 = 0;
                        temp_r5_3 = GetEmptyItemSlotCount__C8Rucksack(temp_r5_2 + 0x1C38);
                        if (GetShelf__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
                            var_r8 = GetAvailableSpaceFor__C5ShelfUi(GetShelf__9FarmHouse(arg0->unk8 + 0x1F4), sp18);
                        }
                        if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
                            var_sb = 1;
                        }
                        temp_r0_12 = temp_r5_3 + var_sb + var_r8;
                        sp28 = temp_r0_12;
                        if (temp_r0_12 == 0) {
                            func_080CABA0(arg0, &gUnk_080FE9A8);
                            func_08050E50(arg0 + 0x348, 0x90);
                            var_r1_2 = arg0 + 0x6A4;
                            var_r0 = 3;
                        } else {
                            temp_r5_4 = GetAmountOfArticles__C8RucksackUi(arg0->unk8 + 0x1C38, sp18);
                            var_sb_2 = 0;
                            var_r8_2 = 0;
                            if (GetShelf__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
                                var_r8_2 = GetAmountOf__C5ShelfUi(GetShelf__9FarmHouse(arg0->unk8 + 0x1F4), sp18);
                            }
                            if (((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) == 0) && (func_0800F204(arg0->unk8 + 0x1C2C) == 1)) {
                                sp20 = func_0800F258(arg0->unk8 + 0x1C2C);
                                var_r2 = 0;
                                if (GetId__C7Article() == sp18) {
                                    var_r2 = 1;
                                }
                                if (var_r2 != 0) {
                                    var_sb_2 = 1;
                                }
                            }
                            func_0804EC84(temp_r5_4 + var_sb_2 + var_r8_2, &sp8, 7);
                            temp_r5_5 = &sp0 + 0x21;
                            __7ArticleUi(temp_r5_5, sp18);
                            temp_r4_3 = arg0 + 0x6AC;
                            arg0->unk6AC = 0;
                            temp_sb = GetName__C7Article(temp_r5_5);
                            temp_r5_6 = temp_sb;
                            temp_r0_13 = strlen(temp_r4_3);
                            temp_r2_6 = temp_r4_3 + temp_r0_13;
                            temp_r4_4 = 0x63 - temp_r0_13;
                            if (temp_r4_4 != 0) {
                                var_r5_2 = strlen(temp_r5_6);
                                if (var_r5_2 > temp_r4_4) {
                                    var_r5_2 = temp_r4_4;
                                }
                                memcpy(temp_r2_6, temp_sb, var_r5_2);
                                *(temp_r2_6 + var_r5_2) = 0;
                            }
                            temp_r0_14 = strlen(temp_r4_3);
                            temp_r1_4 = temp_r4_3 + temp_r0_14;
                            temp_r4_5 = 0x63 - temp_r0_14;
                            if (temp_r4_5 != 0) {
                                var_r5_3 = strlen(&gUnk_080FE9CC);
                                if (var_r5_3 > temp_r4_5) {
                                    var_r5_3 = temp_r4_5;
                                }
                                memcpy(temp_r1_4, &gUnk_080FE9CC, var_r5_3);
                                *(temp_r1_4 + var_r5_3) = 0;
                            }
                            temp_sb_2 = gUnk_08117828;
                            temp_r0_15 = strlen(temp_r4_3);
                            temp_r1_5 = temp_r4_3 + temp_r0_15;
                            temp_r4_6 = 0x63 - temp_r0_15;
                            if (temp_r4_6 != 0) {
                                var_r5_4 = strlen(temp_sb_2);
                                if (var_r5_4 > temp_r4_6) {
                                    var_r5_4 = temp_r4_6;
                                }
                                memcpy(temp_r1_5, temp_sb_2, var_r5_4);
                                *(temp_r1_5 + var_r5_4) = 0;
                            }
                            temp_r0_16 = strlen(temp_r4_3);
                            temp_r1_6 = temp_r4_3 + temp_r0_16;
                            temp_r4_7 = 0x63 - temp_r0_16;
                            if (temp_r4_7 != 0) {
                                var_r5_5 = strlen(&sp8);
                                if (var_r5_5 > temp_r4_7) {
                                    var_r5_5 = temp_r4_7;
                                }
                                memcpy(temp_r1_6, &sp8, var_r5_5);
                                *(temp_r1_6 + var_r5_5) = 0;
                            }
                            temp_r8 = gUnk_08117814;
                            temp_r0_17 = strlen(temp_r4_3);
                            temp_r7 = temp_r4_3 + temp_r0_17;
                            temp_r5_7 = 0x63 - temp_r0_17;
                            if (temp_r5_7 != 0) {
                                var_r4_3 = strlen(temp_r8);
                                if (var_r4_3 > temp_r5_7) {
                                    var_r4_3 = temp_r5_7;
                                }
                                memcpy(temp_r7, temp_r8, var_r4_3);
                                *(temp_r7 + var_r4_3) = 0;
                            }
                            func_080CABEC(arg0, arg0 + 0x6AC);
                            func_080CA8B4(arg0 + 0x684, sp1C, sp28, 5);
                            var_r1_2 = arg0 + 0x6A4;
                            var_r0 = 4;
                        }
                    }
                }
block_97:
                *var_r1_2 = var_r0;
            }
            arg0->unk14 = (s32) arg0->unk10;
            func_080C9020(arg0, arg0->unk2A4);
            break;
        case 1:
            temp_r4_8 = arg0 + 0x2A4;
            temp_r0_18 = (*(temp_r4_8 + ((arg0->unk10 * 4) + 4)) * 8) + &gUnk_080FE8FC;
            temp_r1_7 = temp_r0_18->unk4;
            temp_r0_19 = temp_r0_18->unk0;
            sp18 = temp_r0_19;
            sp1C = temp_r1_7;
            func_0809ACC0(arg0->unk8 + 0x1AA8, temp_r1_7);
            func_080C8550(arg0);
            if (temp_r0_19 == 0xA) {
                AddRecordPlayer__9FarmHouse(arg0->unk8 + 0x1F4);
                func_080CABA0(arg0, &gUnk_080FEA00);
                temp_r3_2 = temp_r4_8 + ((arg0->unk10 * 4) + 4);
                temp_r0_20 = arg0->unk2A4;
                if (temp_r0_20 != 0) {
                    temp_r0_21 = temp_r4_8 + ((temp_r0_20 * 4) + 4);
                    temp_r1_8 = temp_r3_2 + 4;
                    if ((temp_r1_8 != temp_r0_21) && (temp_r0_21 != temp_r1_8)) {
                        memmove(temp_r3_2, temp_r1_8, temp_r0_21 - temp_r1_8);
                    }
                    arg0->unk2A4 = (u32) (arg0->unk2A4 - 1);
                }
                func_08080E68(arg0);
                arg0->unk10 = 0;
                arg0->unk14 = -1;
            } else {
                if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
                    temp_r4_9 = arg0->unk8 + 0x1C2C;
                    __7ArticleUi(&sp0 + 0x22, sp18);
                    func_0800F3E8(temp_r4_9, sp0.unk22);
                    goto block_110;
                }
                if (GetEmptyItemSlotCount__C8Rucksack(arg0->unk8 + 0x1C38) != 0) {
                    if (AddAmountOfArticle__8RucksackUiUi(arg0->unk8 + 0x1C38, sp18, 1) == 0) {
block_110:
                        func_080CABA0(arg0, &gUnk_080FEA4C);
                    }
                } else if (GetShelf__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
                    AddAmountOf__5ShelfUiUi(GetShelf__9FarmHouse(arg0->unk8 + 0x1F4), sp18, 1);
                    func_080CABA0(arg0, &gUnk_080FEA5C);
                }
            }
            func_08050E50(arg0 + 0x348, 0x8E);
            arg0->unk6A4 = 2U;
            break;
        case 2:
            temp_r4_10 = arg0->unk350;
            if (temp_r4_10 != 3) {

            } else {
                func_080CABA0(arg0, &gUnk_080FEAC0);
                arg0->unk6A4 = temp_r4_10;
            }
            break;
        case 3:
            if (arg0->unk350 != 3) {

            } else {
                func_08050E5C(arg0 + 0x348);
                arg0->unk6A4 = 0U;
                arg0->unk14 = -1;
            }
            break;
        case 4:
            temp_r4_11 = func_080088CC(arg0) & 1;
            if (temp_r4_11 != 0) {
                var_r7_2 = (arg0 + 0x684)->unk14;
                func_080CAAF4();
                temp_r0_22 = (((arg0->unk10 * 4) + arg0)->unk2A8 * 8) + &gUnk_080FE8FC;
                temp_r1_9 = temp_r0_22->unk4;
                sp18 = temp_r0_22->unk0;
                sp1C = temp_r1_9;
                func_0809ACC0(arg0->unk8 + 0x1AA8, var_r7_2 * temp_r1_9);
                func_080C8550(arg0);
                if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
                    var_r7_2 -= 1;
                    temp_r4_12 = arg0->unk8 + 0x1C2C;
                    __7ArticleUi(&sp0 + 0x23, sp18);
                    func_0800F3E8(temp_r4_12, sp0.unk23);
                }
                if ((var_r7_2 != 0) && (temp_r0_23 = AddAmountOfArticle__8RucksackUiUi(arg0->unk8 + 0x1C38, sp18, var_r7_2), (temp_r0_23 != 0))) {
                    AddAmountOf__5ShelfUiUi(GetShelf__9FarmHouse(arg0->unk8 + 0x1F4), sp18, temp_r0_23);
                    func_080CABA0(arg0, &gUnk_080FEA5C);
                } else {
                    func_080CABA0(arg0, &gUnk_080FEA4C);
                }
                func_08050E50(arg0 + 0x348, 0x8E);
                arg0->unk6A4 = 2U;
                arg0->unk6A8 = 1U;
            } else if (func_080088CC(arg0) & 2) {
                func_080CAAF4(arg0 + 0x684);
                arg0->unk6A4 = temp_r4_11;
                arg0->unk14 = -1;
            } else {
                temp_r1_10 = arg0 + 0x684;
                if (temp_r1_10->unk8 != 0) {
                    func_080CA98C(temp_r1_10);
                }
            }
            break;
        case 5:
            if (arg0->unk350 == 3) {
                temp_r1_11 = sp4->unk0;
                if ((s32) ((0 - temp_r1_11) | temp_r1_11) >= 0) {
                    sp24 = 1;
                    func_08009378(sp4 + 0xC, 0x889, 1, 1);
                    temp_r0_24 = func_08008940(arg0);
                    temp_r0_24->unk8->unk10(temp_r0_24, sp4);
                }
            }
            break;
        }
        goto block_135;
    }
    sp4->unk8->unkC(sp4, 3);
}

