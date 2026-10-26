#include "common.h"
u32 AddAmountOfFood__8RucksackUiUi(s32, s32, u32);  /* extern */
s32 AddAmountOf__6FridgeUiUi(s32, s32, u32);          /* extern */
s32 GetAmountOfFood__C8RucksackUi(s32, s32);        /* extern */
s32 GetAmountOf__C6FridgeUi(s32, s32);              /* extern */
s32 GetAvailableSpaceFor__C6FridgeUi(s32, s32);     /* extern */
s32 GetEmptyItemSlotCount__C8Rucksack(s32);         /* extern */
s32 GetFridge__9FarmHouse(s32);                     /* extern */
u16 GetIconId__C4Food(void **);                     /* extern */
s32 GetId__C4Food(s32 *);                             /* extern */
? *GetName__C4Food(void **);                        /* extern */
s32 __4FoodUi(void **, s32);                          /* extern */
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
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s32 func_0800F20C(s32 *, s32);                          /* extern */
s32 func_0800F3B0(s32, s32);                          /* extern */
s32 func_0804E9F4(s32, s32, s32, s32);                /* extern */
s32 func_0804EC84(s32, ? *, s32);                     /* extern */
s32 func_0804EDB4(s32, s32, s32, s32);                /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_0805E6CC(s32 **, ? *);                         /* extern */
s32 func_0805E824(void ***, ? **, s32, s32);          /* extern */
s32 func_0805E860(void ***, u16);                     /* extern */
s32 func_0809ACC0(s32, s32);                          /* extern */
s32 func_080A0A54(s32, u32);                          /* extern */
s32 func_080C8550(void *);                            /* extern */
s32 func_080C85A0(void *);                            /* extern */
s32 func_080C96C4(void *);                            /* extern */
s32 func_080CA8B4(void *, s32, s32, s32);             /* extern */
s32 func_080CA98C(void *);                            /* extern */
s32 func_080CABA0(void *, ? *);                       /* extern */
s32 func_080CABEC(void *, void *);                    /* extern */
s32 memcpy(s32 *, ? *, u32);                            /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_080FDE70;
extern ? gUnk_080FDEAC;
extern ? gUnk_080FDF50;
extern ? gUnk_080FDFA4;
extern ? gUnk_080FDFE4;
extern ? gUnk_080FE034;
extern ? *gUnk_08117814;
extern ? *gUnk_08117828;
extern ? gUnk_086678A0;
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E5B80;

void func_0807DE3C(void *arg0) {
    void *sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    ? *sp18;
s32 sp48;
    void **sp4C;
s32 sp60;
    s8 sp7C;
    s32 sp80;
s32 sp88;
s32 sp90;
s32 sp98;
    void *spA0;
s32 spA4;
    void *spB4;
    void *spB8;
s32 spC4;
    s32 spCC;
    s32 spD0;
    void **spD4;
    ? *temp_r1_2;
    ? *temp_r1_3;
    ? *temp_r1_4;
    ? *temp_r3;
    ? *temp_r4_2;
    ? *temp_r5_3;
    ? *temp_r6_7;
    ? *temp_r8;
    ? *temp_sb_2;
    ? *temp_sb_3;
    s32 temp_r0_13;
    s32 temp_r1_5;
    s32 temp_r5_5;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_sb;
    s32 var_r2;
    s32 var_r5_5;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sb;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_12;
    u32 temp_r0_15;
    u32 temp_r0_3;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r5_4;
    u32 temp_r6_3;
    u32 temp_r6_4;
    u32 temp_r6_5;
    u32 temp_r6_6;
    u32 var_r4;
    u32 var_r5;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r6;
    void *temp_r0;
    void *temp_r0_14;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r1_6;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;

    func_08008724();
    func_080C85A0(arg0);
    spC = 0x10;
    func_0805E6CC(&sp18, &gUnk_086678A0);
    sp48.unk0 = 0;
    sp48.unk2 = 0;
    func_0805E824(&sp4C, &sp18, 0, 0x100);
    sp60.unk0 = 0;
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
    sp88.unk0 = 0;
    sp88.unk4 = 0;
    sp90.unk0 = 0;
    sp90.unk4 = 0;
    sp98.unk0 = 0;
    sp98.unk4 = 0;
    sp8.unk0 = 0x20;
    temp_r0 = (arg0->unk6A4 * 8) + &gUnk_080FDFA4;
    spC4.unk0 = (s32) temp_r0->unk0;
    spC4.unk4 = (s32) temp_r0->unk4;
    __4FoodUi(&spA0, spC4.unk0);
    func_0805E860(&sp4C, GetIconId__C4Food(&spA0));
    (*sp4C)->unk10(&spA4, sp4C, *(sp50 + (sp4C.unkC * 4)));
    memcpy(&spA4, &spA4, 0x20U);
    temp_r0_2 = &spA4 + 0xC;
    sp80.unk0 = spA4.unk0;
    sp80.unk4 = (s32) spA4.unk4;
    sp80.unk8 = (s32) spA4.unk8;
    temp_r5 = &sp80 + 0xC;
    sp80.unkC = (s32) spA4.unkC;
    temp_r5->unk4 = (s32) temp_r0_2->unk4;
    temp_r5->unk8 = (s32) temp_r0_2->unk8;
    temp_r5->unkC = (s32) temp_r0_2->unkC;
    (temp_r5 + 0xC)->unk4 = (s32) (temp_r0_2 + 0xC)->unk4;
    sp10 = sp88.unk0;
    sp14 = sp90.unk0;
    temp_r0_3 = arg0->unk20;
    if (temp_r0_3 <= 0x27U) {
        temp_r0_4 = arg0 + 0x20 + ((temp_r0_3 * 0x10) + 4);
        if (temp_r0_4 != 0) {
            temp_r0_4->unk0 = (s32) sp8.unk0;
            temp_r0_4->unk4 = (s32) sp8.unk4;
            temp_r0_4->unk8 = (s32) sp8.unk8;
            temp_r0_4->unkC = (s32) sp8.unkC;
        }
        arg0->unk20 = (u32) (arg0->unk20 + 1);
    }
    sp0 = (void *)0x20;
    func_0804EDB4(spC4.unk4, arg0->unk1C->unk18 + 0x100 + 0x32, 0xA0, 0);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(arg0->unk1C->unk18 + 0x100 + 0x34, 0x20, 2, 2);
    temp_r0_5 = func_08008918(arg0);
    spA0 = 0x3F;
    temp_r0_5->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    temp_r5_2 = temp_r4 + 0xC;
    func_08009300(temp_r5_2, temp_r1);
    spA0 = temp_r4;
    func_0800934C(temp_r5_2, 0x889, 1, 1);
    temp_r0_6 = func_08008940(arg0);
    temp_r0_6->unk8->unk10(temp_r0_6, spA0);
    spCC = 0;
    temp_r0_7 = (arg0->unk6A4 * 8) + &gUnk_080FDFA4;
    spC4.unk0 = (s32) temp_r0_7->unk0;
    spC4.unk4 = (s32) temp_r0_7->unk4;
    temp_sb = spC4.unk4;
    spD0 = 0;
    var_r8 = 0;
    temp_r6 = GetEmptyItemSlotCount__C8Rucksack(arg0->unk8 + 0x1C38);
    if (GetFridge__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
        var_r8 = GetAvailableSpaceFor__C6FridgeUi(GetFridge__9FarmHouse(arg0->unk8 + 0x1F4), spC4.unk0);
    }
    if ((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) != 0) {
        spD0 = 1;
    }
    func_080CA8B4(arg0 + 0x684, temp_sb, temp_r6 + spD0 + var_r8, 5);
    var_sb = 0;
    var_r8_2 = 0;
    temp_r6_2 = GetAmountOfFood__C8RucksackUi(arg0->unk8 + 0x1C38, spC4.unk0);
    if (GetFridge__9FarmHouse(arg0->unk8 + 0x1F4) != 0) {
        var_r8_2 = GetAmountOf__C6FridgeUi(GetFridge__9FarmHouse(arg0->unk8 + 0x1F4), spC4.unk0);
    }
    if (((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) == 0) && (func_0800F204(arg0->unk8 + 0x1C2C) == 0)) {
        func_0800F20C(&spA4, arg0->unk8 + 0x1C2C);
        var_r2 = 0;
        if (GetId__C4Food(&spA4) == spC4.unk0) {
            var_r2 = 1;
        }
        if (var_r2 != 0) {
            var_sb = 1;
        }
    }
    func_0804EC84(temp_r6_2 + var_sb + var_r8_2, &spA4, 7);
    __4FoodUi(&spB4, spC4.unk0);
    temp_r4_2 = arg0 + 0x6A8;
    arg0->unk6A8 = 0;
    temp_sb_2 = GetName__C4Food(&spB4);
    temp_r5_3 = temp_sb_2;
    temp_r0_8 = strlen(temp_r4_2);
    temp_r1_2 = temp_r4_2 + temp_r0_8;
    temp_r6_3 = 0x63 - temp_r0_8;
    if (temp_r6_3 != 0) {
        var_r5 = strlen(temp_r5_3);
        if (var_r5 > temp_r6_3) {
            var_r5 = temp_r6_3;
        }
        memcpy(temp_r1_2, temp_sb_2, var_r5);
        *(temp_r1_2 + var_r5) = 0;
    }
    temp_r0_9 = strlen(temp_r4_2);
    temp_r1_3 = temp_r4_2 + temp_r0_9;
    temp_r6_4 = 0x63 - temp_r0_9;
    if (temp_r6_4 != 0) {
        var_r5_2 = strlen(&gUnk_080FDE70);
        if (var_r5_2 > temp_r6_4) {
            var_r5_2 = temp_r6_4;
        }
        memcpy(temp_r1_3, &gUnk_080FDE70, var_r5_2);
        *(temp_r1_3 + var_r5_2) = 0;
    }
    temp_sb_3 = gUnk_08117828;
    temp_r0_10 = strlen(temp_r4_2);
    temp_r3 = temp_r4_2 + temp_r0_10;
    temp_r6_5 = 0x63 - temp_r0_10;
    if (temp_r6_5 != 0) {
        var_r5_3 = strlen(temp_sb_3);
        if (var_r5_3 > temp_r6_5) {
            var_r5_3 = temp_r6_5;
        }
        memcpy(temp_r3, temp_sb_3, var_r5_3);
        *(temp_r3 + var_r5_3) = 0;
    }
    temp_r0_11 = strlen(temp_r4_2);
    temp_r1_4 = temp_r4_2 + temp_r0_11;
    temp_r6_6 = 0x63 - temp_r0_11;
    if (temp_r6_6 != 0) {
        var_r5_4 = strlen(&spA4);
        if (var_r5_4 > temp_r6_6) {
            var_r5_4 = temp_r6_6;
        }
        memcpy(temp_r1_4, &spA4, var_r5_4);
        *(temp_r1_4 + var_r5_4) = 0;
    }
    temp_r8 = gUnk_08117814;
    temp_r0_12 = strlen(temp_r4_2);
    temp_r6_7 = temp_r4_2 + temp_r0_12;
    temp_r5_4 = 0x63 - temp_r0_12;
    if (temp_r5_4 != 0) {
        var_r4 = strlen(temp_r8);
        if (var_r4 > temp_r5_4) {
            var_r4 = temp_r5_4;
        }
        memcpy(temp_r6_7, temp_r8, var_r4);
        *(temp_r6_7 + var_r4) = 0;
    }
    func_080CABEC(arg0, arg0 + 0x6A8);
    spD4 = &sp0 + 0xA0;
loop_38:
    func_080087C8(arg0);
    func_080088B8(arg0);
    temp_r3_2 = *spD4;
    temp_r1_5 = temp_r3_2->unk0;
    if ((s32) ((0 - temp_r1_5) | temp_r1_5) < 0) {
block_67:
        func_080C96C4(arg0);
        goto loop_38;
    }
    if (spCC == 0) {
        temp_r0_13 = arg0->unk70C;
        switch (temp_r0_13) {                       /* irregular */
        case 1:
            if (arg0->unk350 == 3) {
                arg0->unk70C = 2;
                spCC = 1;
                func_08009378(temp_r3_2 + 0xC, 0x889, 1, 1);
                temp_r0_14 = func_08008940(arg0);
                temp_r0_14->unk8->unk10(temp_r0_14, *spD4);
            }
            break;
        case 0:
            if (!(func_080088CC(arg0) & 1)) {
                if (func_080088CC(arg0) & 2) {
                    func_080CABA0(arg0, &gUnk_080FE034);
                    func_08050E50(arg0 + 0x348, 0x46);
                    arg0->unk70C = 1;
                } else {
                    temp_r1_6 = arg0 + 0x684;
                    if (temp_r1_6->unk8 != 0) {
                        func_080CA98C(temp_r1_6);
                    }
                }
            } else {
                var_r6 = (arg0 + 0x684)->unk14;
                var_r5_5 = 1;
                func_080A0A54(arg0->unk8 + 0x1CD4, var_r6);
                func_0809ACC0(arg0->unk8 + 0x1AA8, var_r6 * spC4.unk4);
                func_080C8550(arg0);
                if (spD0 != 0) {
                    var_r6 -= spD0;
                    temp_r5_5 = arg0->unk8 + 0x1C2C;
                    __4FoodUi(&spB8, spC4.unk0);
                    func_0800F3B0(temp_r5_5, (spB8.unk2 << 0x10) | ((spB8.unk1 << 8) | spB8.unk0));
                    var_r5_5 = 0;
                }
                if (var_r6 != 0) {
                    temp_r0_15 = AddAmountOfFood__8RucksackUiUi(arg0->unk8 + 0x1C38, spC4.unk0, var_r6);
                    if (var_r6 > temp_r0_15) {
                        var_r5_5 = 0;
                    }
                    if (temp_r0_15 == 0) {
                        goto block_56;
                    }
                    AddAmountOf__6FridgeUiUi(GetFridge__9FarmHouse(arg0->unk8 + 0x1F4), spC4.unk0, temp_r0_15);
                    if (var_r5_5 != 0) {
                        func_080CABA0(arg0, &gUnk_080FDF50);
                    } else {
                        func_080CABA0(arg0, &gUnk_080FDFE4);
                    }
                    func_08050E50(arg0 + 0x348, 0x44);
                    arg0->unk70C = 1;
                } else {
block_56:
                    func_080CABA0(arg0, &gUnk_080FDEAC);
                    func_08050E50(arg0 + 0x348, 0x44);
                    arg0->unk70C = 1;
                }
            }
            break;
        }
        goto block_67;
    }
    temp_r3_2->unk8->unkC(temp_r3_2, 3);
    sp18 = &vtable_unk_080E5A28;
}

