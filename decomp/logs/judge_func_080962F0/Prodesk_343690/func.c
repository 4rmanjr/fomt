#include "common.h"
s32 CanBeDiscarded__C7Article();                    /* extern */
s8 GetArticle__C12RucksackItem(s32 *);              /* extern */
u8 *GetDesc__C4Food(s32 *);                         /* extern */
u8 *GetDesc__C7Article();                           /* extern */
s32 GetFood__C12RucksackItem(s32 *, s32 *);           /* extern */
u16 GetIconId__C4Food(s32 *);                       /* extern */
u16 GetIconId__C7Article();                         /* extern */
s32 GetId__C4Food(s32 *);                           /* extern */
s32 GetId__C7Article();                             /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
u8 *GetName__C4Food(s32 *);                         /* extern */
u8 *GetName__C7Article();                           /* extern */
u8 IsEmpty__C12RucksackItem(s32 *);                 /* extern */
s32 IsWrapped__C12RucksackItem(s32 *);              /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
u32 func_080088D4(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08050D8C(void *, ? *);                       /* extern */
s32 func_08050DC8(void *, u8 *, s32, s32);            /* extern */
s32 func_08050E98(void *, s32);                       /* extern */
s32 func_08096B88(void *);                            /* extern */
s32 func_08096EE8(void *, s32 *, u8, s32);            /* extern */
s32 func_08096FB4(void *, s32 *);                     /* extern */
s32 func_08097114(void *, s32 *);                     /* extern */
s32 func_08097D38(void *);                            /* extern */
s32 func_0809964C(void *);                            /* extern */
s32 func_08099ACC(void *);                            /* extern */
s32 func_080CB304(s32, s32, ? *, u16);                /* extern */
s32 func_080CD8A0(void *);                            /* extern */
s32 memcpy(u8 *, u8 *, u32);                          /* extern */
u32 strlen(u8 *);                                   /* extern */
extern ? gUnk_08100AC0;
extern u8 gUnk_08100E28;
extern ? gUnk_08117838;
extern ? gUnk_086678A0;
extern ? vtable_unk_080E5B80;

s32 func_080962F0(void *arg0) {
    s32 sp0;
    u8 sp4;
    u8 sp84;
    s16 sp8C;
    void *sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s8 spA0;
    s8 spA4;
    s32 spA8;
    u32 spAC;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s16 *var_r0_7;
    s16 *var_r1;
    s16 var_r0_6;
    s32 *temp_r4_7;
    s32 *var_r4_5;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 temp_r3;
    s32 temp_r4_5;
    s32 temp_r4_8;
    s32 temp_r6_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s32 var_r5_2;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_sl;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u32 temp_r0_5;
    u32 temp_r5;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u8 *temp_r6_2;
    u8 *var_r0_5;
    u8 *var_r5;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r6;
    u8 var_r0_3;
    u8 var_r0_4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_6;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_6;
    void *temp_r4_9;
    void *var_r0_8;
    void *var_r0_9;
    void *var_sb;

    spA8 = 0;
    spAC = 0;
    sp4 = spA8;
    sp84 = spA8;
    func_08008724(arg0);
    temp_r4 = arg0 + 0x2E8;
    func_080073E0(temp_r4, temp_r4->unk4);
    temp_r4->unk4 = func_0800736C(temp_r4);
    temp_r4_2 = arg0 + 0x320;
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    temp_r4_2->unk4 = func_0800736C(temp_r4_2);
    temp_r4_3 = arg0 + 0x308;
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    func_0809964C(arg0);
    temp_r0 = func_08008918(arg0);
    sp8C = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4_4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4_4->unk0 = 0;
    temp_r4_4->unk4 = 0;
    temp_r4_4->unk8 = &vtable_unk_080E5B80;
    func_08009300(temp_r4_4 + 0xC, temp_r1);
    sp90 = temp_r4_4;
    arg0->unk2B90 = (u8) spA8;
    func_08096B88(arg0);
    spB0 = 0;
    spB4 = 1;
    spB8 = 0;
    spBC = -1;
    arg0->unk362 = 0xC8;
    func_0800934C(sp90 + 0xC, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    temp_r0_2->unk8->unk10(temp_r0_2, sp90);
    arg0->unk33D2 = 2U;
    spC0 = 0;
loop_1:
    func_080087C8(arg0);
    func_080088B8(arg0);
    switch (spAC) {                                 /* irregular */
    case 0:
        temp_r1_2 = sp90->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            spAC = 1;
        }
        break;
    case 1:
        var_r6 = 0;
loop_8:
        var_r4 = 0;
        if ((2 & (func_080088D4(arg0) >> 8)) || (1 & (func_080088D4(arg0) >> 8))) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            var_r0 = 0;
            if (spB0 <= 3) {
                var_r0 = 4;
            }
            spB0 = var_r0;
            spB4 = 1;
            goto block_37;
        }
        if (func_080088D4(arg0) & 0x10) {
            if (spB0 <= 6) {
                var_r0_2 = spB0 + 1;
            } else {
                var_r0_2 = 0;
            }
            goto block_19;
        }
        if (func_080088D4(arg0) & 0x20) {
            if (spB0 > 0) {
                var_r0_2 = spB0 - 1;
            } else {
                var_r0_2 = 7;
            }
block_19:
            spB0 = var_r0_2;
            spB8 = var_r0_2;
            goto block_37;
        }
        if (func_080088D4(arg0) & 0x80) {
            temp_r1_3 = spB4 + 1;
            spB4 = temp_r1_3;
            if (temp_r1_3 > 2) {
                spB4 = 0;
                if (spB0 > 3) {
                    temp_r0_3 = arg0->unk2B90;
                    if ((u32) temp_r0_3 <= 7U) {
                        var_r0_3 = temp_r0_3 + 1;
                        arg0->unk2B90 = var_r0_3;
                    } else {
                        var_r0_3 = 0;
                    }
                    arg0->unk2B90 = var_r0_3;
                    func_08096B88(arg0);
                    if (arg0->unk2B90 == 0) {
                        spB8 = spB0;
                        spB0 = 4;
                    }
                }
            } else if ((arg0->unk2B90 == 0) && (spB4 == 1)) {
                temp_r1_4 = arg0->unk2BA0;
                spB0 = spB8;
                if ((temp_r1_4 <= 3) && (temp_r1_4 <= (s32) (spB8 - 4))) {
                    spB0 = temp_r1_4 + 3;
                }
            }
block_37:
            func_08008B6C(arg0 + 0x94, 0xCB);
        } else if (func_080088D4(arg0) & 0x40) {
            temp_r4_5 = spB4 - 1;
            spB4 = temp_r4_5;
            if (temp_r4_5 < 0) {
                spB4 = 2;
                if (spB0 > 3) {
                    temp_r0_4 = arg0->unk2B90;
                    if (temp_r0_4 != 0) {
                        var_r0_4 = temp_r0_4 - 1;
                        arg0->unk2B90 = var_r0_4;
                    } else {
                        var_r0_4 = 8;
                    }
                    arg0->unk2B90 = var_r0_4;
                    func_08096B88(arg0);
                    if (arg0->unk2B90 == 0) {
                        temp_r1_5 = arg0->unk2BA0;
                        spB0 = spB8;
                        if ((temp_r1_5 <= 3) && (temp_r1_5 <= (s32) (spB8 - 4))) {
                            spB0 = temp_r1_5 + 3;
                        }
                    } else {
                        spB0 = spB8;
                    }
                }
            } else if ((spB0 > 3) && (arg0->unk2B90 == 0) && (spB4 == 0)) {
                spB8 = spB0;
                spB0 = 4;
            }
            func_08008B6C(arg0 + 0x94, 0xCB);
        }
        if (((s32) *(arg0 + 0x2BA4 + spB4) >> (7 - spB0)) & 1) {
            var_r6 = 1;
        }
        if (var_r6 == 0) {
            goto loop_8;
        }
        if (spB4 != 0) {
            var_r6_2 = ((spB4 - 1) * 4) + (3 & spB0) + 1;
        } else {
            var_r6_2 = 0;
        }
        temp_r3 = var_r6_2 * 4;
        temp_r2 = temp_r3 + &gUnk_08117838;
        arg0->unk360 = (s16) ((((s32) (4 & spB0) >> 2) * 0x78) + temp_r2->unk0);
        arg0->unk362 = (s16) temp_r2->unk1;
        temp_r1_6 = (arg0->unk2B90 * 8) + (spB4 * 3) + spB0;
        if (spBC == temp_r1_6) {

        } else {
            spBC = temp_r1_6;
            if (spB4 == 0) {
                goto block_88;
            }
            spC8 = temp_r3;
            __12RucksackItem(&sp94);
            if (spB0 > 3) {
                func_08096EE8(arg0, &sp94, arg0->unk2B90, var_r6_2 - 1);
            } else {
                sp94 = (spC8 + arg0)->unk2BAC;
            }
            temp_r6 = IsEmpty__C12RucksackItem(&sp94);
            if (temp_r6 == 0) {
                if ((IsWrapped__C12RucksackItem(&sp94) << 0x18) != 0) {
                    var_r4_2 = strlen(&gUnk_08100E28);
                    if (var_r4_2 > 7U) {
                        var_r4_2 = 7;
                    }
                    memcpy(&sp84, &gUnk_08100E28, var_r4_2);
                    (&sp0 + var_r4_2)->unk84 = temp_r6;
                    if (GetKind__C12RucksackItem(&sp94) == 0) {
                        GetFood__C12RucksackItem(&sp98, &sp94);
                        var_r0_5 = GetName__C4Food(&sp98);
                    } else {
                        spA0 = GetArticle__C12RucksackItem(&sp94);
                        var_r0_5 = GetName__C7Article();
                    }
                    var_r4_3 = strlen();
                    if (var_r4_3 > 0x7FU) {
                        var_r4_3 = 0x7F;
                    }
                    memcpy(&sp4, var_r0_5, var_r4_3);
                    (&sp0 + var_r4_3)->unk4 = temp_r6;
                    temp_r0_5 = strlen(&sp84);
                    temp_r6_2 = &sp0 + temp_r0_5 + 0x84;
                    temp_r5 = 7 - temp_r0_5;
                    if (temp_r5 != 0) {
                        var_r4_4 = strlen(&sp4);
                        if (var_r4_4 > temp_r5) {
                            var_r4_4 = temp_r5;
                        }
                        memcpy(temp_r6_2, &sp4, var_r4_4);
                        temp_r6_2[var_r4_4] = 0;
                    }
                    var_r5 = &sp4;
                } else if (GetKind__C12RucksackItem(&sp94) == 0) {
                    GetFood__C12RucksackItem(&sp98, &sp94);
                    var_r5 = GetDesc__C4Food(&sp98);
                } else {
                    sp0.unkA1 = GetArticle__C12RucksackItem(&sp94);
                    var_r5 = GetDesc__C7Article();
                }
            } else {
                var_r5 = 0;
            }
            if (var_r5 != 0) {
                temp_r4_6 = arg0 + 0x80;
                func_08050E98(temp_r4_6, 4);
                func_08050DC8(temp_r4_6, var_r5, 0, 0);
            } else {
block_88:
                func_08050D8C(arg0 + 0x80, &gUnk_08100AC0);
            }
        }
        if (!(func_080088CC(arg0) & 1)) {
            if (func_080088CC(arg0) & 2) {
                spA8 = 2;
                spAC = 3;
                func_08050D8C(arg0 + 0x80, &gUnk_08100AC0);
                func_08008B6C(arg0 + 0x94, 0xC6);
            } else if (!(func_080088CC(arg0) & 8)) {

            } else {
                var_r5_2 = 0;
                arg0->unk35C = 0U;
                var_sb = arg0 + 0x94;
                var_r4_5 = arg0 + 0x2BB0;
                var_sl = 0;
                spC4 = 7;
                do {
                    if ((IsEmpty__C12RucksackItem(var_r4_5) << 0x18) == 0) {
                        if (GetKind__C12RucksackItem(var_r4_5) == 0) {
                            GetFood__C12RucksackItem(&sp94, var_r4_5);
                            var_r1 = arg0 + 0x34A + var_sl;
                            var_r0_6 = GetId__C4Food(&sp94) + 1;
                        } else {
                            spA4 = GetArticle__C12RucksackItem(var_r4_5);
                            var_r1 = arg0 + 0x34A + var_sl;
                            var_r0_6 = GetId__C7Article() + 0xAC;
                        }
                        *var_r1 = var_r0_6;
                        arg0->unk35C = (u8) ((1 << var_r5_2) | arg0->unk35C);
                        var_sl += 2;
                        var_r5_2 += 1;
                    }
                    var_r4_5 += 4;
                    temp_r1_7 = spC4 - 1;
                    spC4 = temp_r1_7;
                } while (temp_r1_7 >= 0);
                if (var_r5_2 != 0) {
                    if (var_r5_2 <= 7) {
                        var_r0_7 = (var_r5_2 * 2) + 0x34A + arg0;
                        do {
                            *var_r0_7 = 0;
                            var_r0_7 += 2;
                            var_r5_2 += 1;
                        } while (var_r5_2 <= 7);
                    }
                    func_08050D8C(arg0 + 0x80, &gUnk_08100AC0);
                    spA8 = 1;
                    spAC = 3;
                    goto block_132;
                }
                arg0->unk33D4 = 0xA;
                arg0->unk33D2 = 0U;
                func_08008B6C(var_sb, 0xC7);
                spAC = 2;
            }
        } else {
            if (spB4 == 0) {
                goto block_114;
            }
            temp_r6_3 = ((spB4 - 1) * 4) + (3 & spB0);
            if (spB0 <= 3) {
                temp_r4_7 = arg0 + ((temp_r6_3 * 4) + 0x2BB0);
                if ((IsEmpty__C12RucksackItem(temp_r4_7) << 0x18) == 0) {
                    func_08097114(arg0, temp_r4_7);
                    func_08050D8C(arg0 + 0x80, &gUnk_08100AC0);
                    var_r0_8 = arg0 + 0x94;
                    goto block_133;
                }
block_114:
                var_r0_9 = arg0 + 0x94;
                goto block_115;
            }
            __12RucksackItem(&sp94);
            func_08096EE8(arg0, &sp94, arg0->unk2B90, temp_r6_3);
            if (((s32) *(arg0 + 0x2BA7 + arg0->unk2B90) >> temp_r6_3) & 1) {
                func_08097114(arg0, &sp94);
                var_r0_8 = arg0 + 0x94;
                goto block_133;
            }
            var_r6_3 = 0;
            var_sb = arg0 + 0x94;
loop_99:
            if (var_r6_3 <= 7) {
                temp_r4_8 = var_r6_3 * 4;
                if ((IsEmpty__C12RucksackItem(arg0 + (temp_r4_8 + 0x2BB0)) << 0x18) != 0) {
                    if ((IsEmpty__C12RucksackItem(&sp94) << 0x18) == 0) {
                        if ((IsWrapped__C12RucksackItem(&sp94) << 0x18) == 0) {
                            if (GetKind__C12RucksackItem(&sp94) == 0) {
                                GetFood__C12RucksackItem(&sp9C, &sp94);
                                temp_r3_2 = GetIconId__C4Food(&sp9C);
                                (temp_r4_8 + arg0)->unk2BB0 = (s32) sp94;
                                sp0 = 1;
                                func_080CB304(arg0->unk78, var_r6_3, &gUnk_086678A0, temp_r3_2);
                                func_08096FB4(arg0, &sp94);
                                goto block_132;
                            }
                            sp0.unkA2 = GetArticle__C12RucksackItem(&sp94);
                            if ((CanBeDiscarded__C7Article() << 0x18) != 0) {
                                sp0.unkA3 = GetArticle__C12RucksackItem(&sp94);
                                temp_r3_3 = GetIconId__C7Article();
                                (temp_r4_8 + arg0)->unk2BB0 = (s32) sp94;
                                sp0 = 1;
                                func_080CB304(arg0->unk78, var_r6_3, &gUnk_086678A0, temp_r3_3);
                                func_08096FB4(arg0, &sp94);
block_132:
                                var_r0_8 = var_sb;
block_133:
                                func_08008B6C(var_r0_8, 0xC5);
                            } else {
                                var_r0_9 = var_sb;
                                goto block_115;
                            }
                        } else {
                            var_r0_9 = var_sb;
                            goto block_115;
                        }
                    } else {
                        var_r0_9 = var_sb;
                        goto block_115;
                    }
                } else {
                    var_r6_3 += 1;
                    goto loop_99;
                }
            } else {
                var_r0_9 = var_sb;
block_115:
                func_08008B6C(var_r0_9, 0xC7);
            }
        }
        break;
    case 2:
        if ((s8) arg0->unk33D2 == 2) {
            spBC = -1;
            spAC = 1;
        }
        break;
    case 3:
        func_08009378(sp90 + 0xC, 0x889, 1, 1);
        temp_r0_6 = func_08008940(arg0);
        temp_r0_6->unk8->unk10(temp_r0_6, sp90);
        spAC = 4;
        break;
    case 4:
        temp_r1_8 = sp90->unk0;
        if ((s32) ((0 - temp_r1_8) | temp_r1_8) >= 0) {
            spC0 = 1;
        }
        break;
    }
    func_08099ACC(arg0);
    func_080CD8A0(arg0);
    func_08097D38(arg0);
    if (spC0 == 0) {
        goto loop_1;
    }
    temp_r4_9 = arg0 + 0x2E8;
    func_080073E0(temp_r4_9, temp_r4_9->unk4);
    temp_r4_9->unk4 = 0;
    temp_r4_10 = arg0 + 0x320;
    func_080073E0(temp_r4_10, temp_r4_10->unk4);
    temp_r4_10->unk4 = 0;
    temp_r4_11 = arg0 + 0x308;
    func_080073E0(temp_r4_11, temp_r4_11->unk4);
    temp_r4_11->unk4 = 0;
    if (sp90 != 0) {
        sp90->unk8->unkC(sp90, 3);
    }
    return spA8;
}

