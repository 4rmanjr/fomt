#include "common.h"
u32 AddAmountOfFood__8RucksackUiUi(void *, s32, u32); /* extern */
s32 AddAmountOf__6FridgeUiUi(s32, s32, u32);          /* extern */
s32 GetAmountOfFood__C8RucksackUi(s32, s32);        /* extern */
s32 GetAmountOf__C6FridgeUi(s32, s32);              /* extern */
u32 GetAmountShipped__C11ShippingBini(s32, s32);    /* extern */
s32 GetAvailableSpaceFor__C6FridgeUi(s32, s32);     /* extern */
s32 GetEmptyItemSlotCount__C8Rucksack(s32);         /* extern */
s32 GetFridge__9FarmHouse(void *);                  /* extern */
u16 GetIconId__C4Food(s16 *);                       /* extern */
s32 GetId__C4Food(s16 *);                           /* extern */
s16 *GetName__C4Food(s16 *);                        /* extern */
s32 IsDisplayEnabled__C11ShippingBini(s32, s32);    /* extern */
s32 __4FoodUi(s16 *, s32);                            /* extern */
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
s32 func_0800F204(s32);                             /* extern */
s32 func_0800F20C(s16 *, s32);                        /* extern */
s32 func_0800F3B0(void *, s32);                       /* extern */
s32 func_0804E9F4(s32, s32, s32, s32, s32, s32);      /* extern */
s32 func_0804EC84(s32, s16 *, s32);                   /* extern */
s32 func_0804EDB4(u32, s32, s32, s32, s32);           /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_08050E5C(void *);                            /* extern */
s32 func_0805E6CC(s32 **, s32 *);                         /* extern */
s32 func_0805E824(void ***, s32 **, s32, s32);          /* extern */
s32 func_0805E860(void ***, u16);                     /* extern */
s32 func_08075C88(void *, s16);                       /* extern */
s32 func_08075E24(void *, s16);                       /* extern */
s32 func_0807E51C(void *, s32);                       /* extern */
s32 func_0809ACC0(void *, s32);                       /* extern */
s32 func_080C8550(void *);                            /* extern */
s32 func_080C85A0(void *);                            /* extern */
s32 func_080C9020(void *, u32);                       /* extern */
s32 func_080C96C4(void *);                            /* extern */
s32 func_080CA8B4(void *, u32, s32, s32);             /* extern */
s32 func_080CA98C(void *);                            /* extern */
s32 func_080CAAF4(void *);                            /* extern */
s32 func_080CABA0(void *, s32 *);                       /* extern */
s32 func_080CABEC(void *, void *);                    /* extern */
s32 memcpy(s16 *, s16 *, u32);                        /* extern */
u32 strlen(s16 *);                                  /* extern */
extern s32 gUnk_080FE050;
extern s32 gUnk_080FE070;
extern s16 gUnk_080FE0BC;
extern s32 gUnk_080FE0C4;
extern s32 gUnk_080FE10C;
extern s32 gUnk_080FE134;
extern s32 gUnk_080FE180;
extern s32 gUnk_080FE19C;
extern s32 gUnk_080FE1E8;
extern s32 gUnk_080FE238;
extern s16 *gUnk_08117814;
extern s16 *gUnk_08117828;
extern s32 gUnk_086678A0;
extern s32 vtable_unk_080E5A28;
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
    void *unk1C;
    s32 unk20;
    u8 _pad24[44];
    s32 unk50;
    u8 _pad54[592];
    s32 unk2A4;
    u8 _pad2A8[168];
    s32 unk350;
    u8 _pad354[845];
    s32 unk6A1;
    s32 unk6A4;
    u8 _pad6A8[96];
    s32 unk708;
    s32 unk70C;
    u8 _pad710[5016];
    s32 unk1AA8;
} GenObj;
void func_0807E558(GenObj *arg0) {
s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 *sp18;
s32 sp48;
    void **sp4C;
s32 sp60;
    s8 sp7C;
    GenObj *sp80;
    s32 sp88;
    s32 sp90;
s32 sp98;
    s16 spA4;
    s16 spB4;
s32 spC4;
    u32 *spCC;
    void *spD0;
    s32 spD4;
    u32 spD8;
    s32 spDC;
    s32 spE0;
    s32 spE4;
    s16 *spE8;
    s16 *temp_r1_3;
    s16 *temp_r1_4;
    s16 *temp_r1_5;
    s16 *temp_r3_2;
    s16 *temp_r4_4;
    s16 *temp_r5_2;
    s16 *temp_r6_7;
    s16 *temp_r8;
    s16 *temp_sb;
    s16 *temp_sb_2;
    s32 *temp_r2;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *var_r1;
    s32 *var_r5;
    s32 temp_r1_2;
    s32 temp_r1_7;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_sl;
    s32 var_r0;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r5_6;
    s32 var_sl;
    s32 var_sl_2;
    u32 temp_r0;
    u32 temp_r0_11;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_17;
    u32 temp_r0_19;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_7;
    u32 temp_r1_8;
    u32 temp_r4_5;
    u32 temp_r5_3;
    u32 temp_r6_3;
    u32 temp_r6_4;
    u32 temp_r6_5;
    u32 temp_r6_6;
    u32 var_r4;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r5_5;
    u32 var_r6;
    u32 var_r6_2;
    GenObj *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_18;
    GenObj *temp_r0_20;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_8;
    GenObj *temp_r0_9;
    void *temp_r1;
    GenObj *temp_r1_6;
    void *temp_r3;
    void *temp_r4;
    GenObj *temp_r4_3;
    void *temp_r5;
    void *temp_r5_4;

    func_08008724();
    func_080C85A0(arg0);
    temp_r0 = arg0->unk2A4;
    if (temp_r0 <= 0x27U) {
        temp_r2 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0 * 4) + 4);
        if (temp_r2 != 0) {
            *temp_r2 = 0;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_2 = arg0->unk2A4;
    if (temp_r0_2 <= 0x27U) {
        temp_r2_2 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_2 * 4) + 4);
        if (temp_r2_2 != 0) {
            *temp_r2_2 = 2;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    if (((IsDisplayEnabled__C11ShippingBini(arg0->unk8 + 0x54, 0x32) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(arg0->unk8 + 0x54, 0x32) > 0x31U)) {
        temp_r0_3 = arg0->unk2A4;
        if (temp_r0_3 <= 0x27U) {
            temp_r2_3 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_3 * 4) + 4);
            if (temp_r2_3 != 0) {
                *temp_r2_3 = 1;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if (((IsDisplayEnabled__C11ShippingBini(arg0->unk8 + 0x54, 0x33) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(arg0->unk8 + 0x54, 0x33) > 0x31U)) {
        temp_r0_4 = arg0->unk2A4;
        if (temp_r0_4 <= 0x27U) {
            temp_r2_4 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_4 * 4) + 4);
            if (temp_r2_4 != 0) {
                *temp_r2_4 = 3;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    spC = 0x10;
    var_sl = 4;
    func_0805E6CC(&sp18, &gUnk_086678A0);
    sp48 = 0;
    sp48.unk2 = 0;
    func_0805E824(&sp4C, &sp18, 0, 0x100);
    sp60 = 0;
    sp60.unk2 = 0;
    sp60.unk4 = 0;
    sp60.unk6 = 0;
    sp60.unk8 = 0;
    sp60.unkC = 0;
    sp60.unk10 = 0;
    sp60.unk11 = 0;
    sp60.unk14 = 0;
    sp60.unk18 = 0;
    sp7C = 0;
    sp80 = 0;
    sp80.unk4 = 0;
    sp88 = 0;
    sp88.unk4 = 0;
    sp90 = 0;
    sp90.unk4 = 0;
    sp98 = 0;
    sp98.unk4 = 0;
    var_r6 = 0;
    spE8 = (s16 *) (&(GenObj *)((u8 *)sp90 + 0x10));
    if ((u32) arg0->unk2A4 > 0U) {
        spCC = (GenObj *)((u8 *)arg0 + 0x2A4);
        spD0 = (GenObj *)((u8 *)arg0 + 0x20);
        var_r5 = (GenObj *)((u8 *)arg0 + 0x2A8);
        do {
            sp8 = (s16) (var_sl * 8);
            temp_r0_5 = (*var_r5 * 8) + &gUnk_080FE050;
            spC4 = (s32) temp_r0_5->unk0;
            spC4.unk4 = (u32) temp_r0_5->unk4;
            __4FoodUi(spE8, spC4);
            func_0805E860(&sp4C, GetIconId__C4Food(spE8));
            (*sp4C)->unk10(&spA4, sp4C, *((u8 *)sp50 + (sp4C.unkC * 4)));
            memcpy(&spA4, &spA4, 0x20U);
            temp_r4 = &spA4 + 0xC;
            sp80.unk0 = spA4;
            sp80.unk4 = (s32) spA4.unk4;
            sp80.unk8 = (s32) spA4.unk8;
            temp_r0_6 = &(GenObj *)((u8 *)sp80 + 0xC);
            sp80.unkC = (s32) spA4.unkC;
            temp_r0_6->unk4 = (s32) temp_r4->unk4;
            temp_r0_6->unk8 = (s32) temp_r4->unk8;
            temp_r0_6->unkC = (s32) temp_r4->unkC;
            ((GenObj *)((u8 *)temp_r0_6 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r4 + 0xC))->unk4;
            sp10 = sp88;
            sp14 = sp90;
            temp_r0_7 = arg0->unk20;
            if (temp_r0_7 <= 0x27U) {
                temp_r0_8 = spD0 + ((temp_r0_7 * 0x10) + 4);
                if (temp_r0_8 != 0) {
                    temp_r0_8->unk0 = (s32) sp8;
                    temp_r0_8->unk4 = (s32) sp8.unk4;
                    temp_r0_8->unk8 = (s32) sp8.unk8;
                    temp_r0_8->unkC = (s32) sp8.unkC;
                }
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
            temp_r4_2 = var_sl << 6;
            func_0804EDB4(spC4.unk4, arg0->unk1C->unk18 + temp_r4_2 + 0x32, 0xA0, 0, 0x20);
            func_0804E9F4(arg0->unk1C->unk18 + temp_r4_2 + 0x34, 0x20, 2, 2, 0, 0x20);
            var_sl += 2;
            var_r5 += 4;
            var_r6 += 1;
        } while (var_r6 < (u32) *spCC);
    }
    func_08075C88(arg0->unk1C, arg0->unkC);
    func_08075E24(arg0->unk1C, (s16) ((var_sl + 8) * 8));
    func_0807E51C(arg0, arg0->unk10);
    temp_r0_9 = func_08008918(arg0);
    *spE8 = 0x3F;
    temp_r0_9->unk50 = 0x3F;
    temp_r4_3 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4_3->unk0 = 0;
    temp_r4_3->unk4 = 0;
    temp_r4_3->unk8 = &vtable_unk_080E5B80;
    temp_r5 = (GenObj *)((u8 *)temp_r4_3 + 0xC);
    func_08009300(temp_r5, temp_r1);
    *spE8 = temp_r4_3;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_10 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_10->unk8->unk10))(temp_r0_10, (s32) *spE8);
    spD4 = 0;
loop_28:
    func_080087C8(arg0);
    func_080088B8(arg0);
    temp_r3 = (void *) *spE8;
    temp_r1_2 = temp_r3->unk0;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {
block_113:
        func_080C96C4(arg0);
        goto loop_28;
    }
    if (spD4 == 0) {
        temp_r0_11 = arg0->unk708;
        switch (temp_r0_11) {                       /* irregular */
        case 0:
            if (arg0->unk14 != arg0->unk10) {
                func_0807E51C(arg0);
            }
            if (arg0->unk6A1 == 0) {
                if (func_080088CC(arg0) & 2) {
                    if (arg0->unk70C != 0) {
                        func_080CABA0(arg0, &gUnk_080FE10C);
                    } else {
                        func_080CABA0(arg0, &gUnk_080FE134);
                    }
                    func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x79);
                    var_r1 = (GenObj *)((u8 *)arg0 + 0x708);
                    var_r0 = 4;
                    goto block_84;
                }
            } else {
                temp_r0_12 = (((arg0->unk10 * 4) + arg0)->unk2A8 * 8) + &gUnk_080FE050;
                spC4 = (s32) temp_r0_12->unk0;
                spC4.unk4 = (u32) temp_r0_12->unk4;
                spD8 = spC4.unk4;
                spDC = 0;
                var_sl_2 = 0;
                temp_r6 = GetEmptyItemSlotCount__C8Rucksack(arg0->unk8 + 0x1C38);
                if (GetFridge__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
                    var_sl_2 = GetAvailableSpaceFor__C6FridgeUi(GetFridge__9FarmHouse(arg0->unk8 + 0x1F4), spC4);
                }
                if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
                    spDC = 1;
                }
                temp_sl = var_sl_2 + (temp_r6 + spDC);
                spE0 = 0;
                spE4 = 0;
                temp_r6_2 = GetAmountOfFood__C8RucksackUi(arg0->unk8 + 0x1C38, spC4);
                if (GetFridge__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
                    spE4 = GetAmountOf__C6FridgeUi(GetFridge__9FarmHouse(arg0->unk8 + 0x1F4), spC4);
                }
                if (((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) == 0) && (func_0800F204(arg0->unk8 + 0x1C2C) == 0)) {
                    func_0800F20C(&spA4, arg0->unk8 + 0x1C2C);
                    var_r2 = 0;
                    if (GetId__C4Food(&spA4) == spC4) {
                        var_r2 = 1;
                    }
                    if (var_r2 != 0) {
                        spE0 = 1;
                    }
                }
                func_0804EC84(temp_r6_2 + spE0 + spE4, &spA4, 7);
                var_r2_2 = 0;
                if ((u32) arg0->unk8->unk1AA8 >= (u32) spC4.unk4) {
                    var_r2_2 = 1;
                }
                if (var_r2_2 == 0) {
                    func_080CABA0(arg0, &gUnk_080FE0C4);
                    func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x7D);
                    var_r1 = (GenObj *)((u8 *)arg0 + 0x708);
                    var_r0 = 1;
                    goto block_84;
                }
                if (temp_sl == 0) {
                    func_080CABA0(arg0, &gUnk_080FE070);
                    func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x79);
                    var_r1 = (GenObj *)((u8 *)arg0 + 0x708);
                    var_r0 = 1;
block_84:
                    *var_r1 = var_r0;
                } else {
                    func_080CA8B4((GenObj *)((u8 *)arg0 + 0x684), spD8, temp_sl, 5);
                    arg0->unk708 = 3U;
                    __4FoodUi(&spB4, spC4);
                    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x6A4);
                    arg0->unk6A4 = 0;
                    temp_sb = GetName__C4Food(&spB4);
                    temp_r5_2 = temp_sb;
                    temp_r0_13 = strlen(temp_r4_4);
                    temp_r1_3 = temp_r4_4 + temp_r0_13;
                    temp_r6_3 = 0x63 - temp_r0_13;
                    if (temp_r6_3 != 0) {
                        var_r5_2 = strlen(temp_r5_2);
                        if (var_r5_2 > temp_r6_3) {
                            var_r5_2 = temp_r6_3;
                        }
                        memcpy(temp_r1_3, temp_sb, var_r5_2);
                        *((u8 *)temp_r1_3 + var_r5_2) = 0;
                    }
                    temp_r0_14 = strlen(temp_r4_4);
                    temp_r1_4 = temp_r4_4 + temp_r0_14;
                    temp_r6_4 = 0x63 - temp_r0_14;
                    if (temp_r6_4 != 0) {
                        var_r5_3 = strlen(&gUnk_080FE0BC);
                        if (var_r5_3 > temp_r6_4) {
                            var_r5_3 = temp_r6_4;
                        }
                        memcpy(temp_r1_4, &gUnk_080FE0BC, var_r5_3);
                        *((u8 *)temp_r1_4 + var_r5_3) = 0;
                    }
                    temp_sb_2 = gUnk_08117828;
                    temp_r0_15 = strlen(temp_r4_4);
                    temp_r3_2 = temp_r4_4 + temp_r0_15;
                    temp_r6_5 = 0x63 - temp_r0_15;
                    if (temp_r6_5 != 0) {
                        var_r5_4 = strlen(temp_sb_2);
                        if (var_r5_4 > temp_r6_5) {
                            var_r5_4 = temp_r6_5;
                        }
                        memcpy(temp_r3_2, temp_sb_2, var_r5_4);
                        *((u8 *)temp_r3_2 + var_r5_4) = 0;
                    }
                    temp_r0_16 = strlen(temp_r4_4);
                    temp_r1_5 = temp_r4_4 + temp_r0_16;
                    temp_r6_6 = 0x63 - temp_r0_16;
                    if (temp_r6_6 != 0) {
                        var_r5_5 = strlen(&spA4);
                        if (var_r5_5 > temp_r6_6) {
                            var_r5_5 = temp_r6_6;
                        }
                        memcpy(temp_r1_5, &spA4, var_r5_5);
                        *((u8 *)temp_r1_5 + var_r5_5) = 0;
                    }
                    temp_r8 = gUnk_08117814;
                    temp_r0_17 = strlen(temp_r4_4);
                    temp_r6_7 = temp_r4_4 + temp_r0_17;
                    temp_r5_3 = 0x63 - temp_r0_17;
                    if (temp_r5_3 != 0) {
                        var_r4 = strlen(temp_r8);
                        if (var_r4 > temp_r5_3) {
                            var_r4 = temp_r5_3;
                        }
                        memcpy(temp_r6_7, temp_r8, var_r4);
                        *((u8 *)temp_r6_7 + var_r4) = 0;
                    }
                    func_080CABEC(arg0, (GenObj *)((u8 *)arg0 + 0x6A4));
                }
            }
            arg0->unk14 = (s32) arg0->unk10;
            func_080C9020(arg0, arg0->unk2A4);
            break;
        case 1:
            if (arg0->unk350 != 3) {

            } else {
                func_080CABA0(arg0, &gUnk_080FE180);
                func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x79);
                arg0->unk708 = 2U;
            }
            break;
        case 2:
            if (arg0->unk350 != 3) {

            } else {
                func_08050E5C((GenObj *)((u8 *)arg0 + 0x348));
                arg0->unk708 = 0U;
                arg0->unk14 = -1;
            }
            break;
        case 3:
            temp_r4_5 = func_080088CC(arg0) & 1;
            if (temp_r4_5 == 0) {
                if (func_080088CC(arg0) & 2) {
                    func_080CAAF4((GenObj *)((u8 *)arg0 + 0x684));
                    func_0807E51C(arg0, arg0->unk10);
                    arg0->unk708 = temp_r4_5;
                } else {
                    temp_r1_6 = (GenObj *)((u8 *)arg0 + 0x684);
                    if (temp_r1_6->unk8 != 0) {
                        func_080CA98C(temp_r1_6);
                    }
                }
            } else {
                var_r6_2 = ((GenObj *)((u8 *)arg0 + 0x684))->unk14;
                var_r5_6 = 1;
                func_080CAAF4();
                func_0807E51C(arg0, arg0->unk10);
                temp_r0_18 = (((arg0->unk10 * 4) + arg0)->unk2A8 * 8) + &gUnk_080FE050;
                spC4 = (s32) temp_r0_18->unk0;
                spC4.unk4 = (u32) temp_r0_18->unk4;
                func_0809ACC0(arg0->unk8 + 0x1AA8, var_r6_2 * spC4.unk4);
                func_080C8550(arg0);
                if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
                    var_r6_2 -= 1;
                    temp_r5_4 = arg0->unk8 + 0x1C2C;
                    __4FoodUi(&spA4, spC4);
                    func_0800F3B0(temp_r5_4, (spA4.unk2 << 0x10) | ((spA4.unk1 << 8) | (u8) spA4));
                    var_r5_6 = 0;
                }
                if (var_r6_2 != 0) {
                    temp_r0_19 = AddAmountOfFood__8RucksackUiUi(arg0->unk8 + 0x1C38, spC4, var_r6_2);
                    if (var_r6_2 > temp_r0_19) {
                        var_r5_6 = 0;
                    }
                    if (temp_r0_19 != 0) {
                        AddAmountOf__6FridgeUiUi(GetFridge__9FarmHouse(arg0->unk8 + 0x1F4), spC4, temp_r0_19);
                        if (var_r5_6 != 0) {
                            func_080CABA0(arg0, &gUnk_080FE19C);
                        } else {
                            func_080CABA0(arg0, &gUnk_080FE1E8);
                        }
                        func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x79);
                    } else {
                        goto block_104;
                    }
                } else {
block_104:
                    func_080CABA0(arg0, &gUnk_080FE238);
                    func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x7A);
                }
                arg0->unk708 = 1U;
                arg0->unk70C = 1U;
            }
            break;
        case 4:
            if (arg0->unk350 == 3) {
                temp_r2_5 = (s32 *) *spE8;
                temp_r1_7 = *temp_r2_5;
                temp_r1_8 = (u32) ((0 - temp_r1_7) | temp_r1_7) >> 0x1F;
                if (temp_r1_8 == 0) {
                    arg0->unk708 = temp_r1_8;
                    spD4 = 1;
                    func_08009378(temp_r2_5 + 0xC, 0x889, 1, 1);
                    temp_r0_20 = func_08008940(arg0);
                    ((void (*)(void *,...))(temp_r0_20->unk8->unk10))(temp_r0_20, (s32) *spE8);
                }
            }
            break;
        }
        goto block_113;
    }
    ((void (*)(void *,...))(temp_r3->unk8->unkC))(temp_r3, 3);
    sp18 = &vtable_unk_080E5A28;
}

