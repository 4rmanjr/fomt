#include "common.h"
u16 GetIconId__C4Food(s32 *);                       /* extern */
u16 GetIconId__C7Article(u8 *);                     /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 __12RucksackItemG4Food(s32 *, s32);               /* extern */
s32 __12RucksackItemG7Article(s32 *, u8);             /* extern */
s32 __4FoodUi(s32 *, s32);                            /* extern */
s32 __7ArticleUi(u8 *, s32);                          /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08008910(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_08008E64(s32, s32, u16);                     /* extern */
s16 func_08096FB4(void *, s32 *);                   /* extern */
void *func_080CAFC4(s32, s32, s32, s32);            /* extern */
s32 func_080CB090(void *);                            /* extern */
s32 func_080CB304(void *, s32, ? *, u16);             /* extern */
void *func_080CC15C(s32, s32, s32, s32);            /* extern */
s32 func_080CC310(void *);                            /* extern */
s32 func_080CC728(void *, s32, ? *, u16);             /* extern */
s32 func_080CD620();                                  /* extern */
s32 memcpy(s32 **, ? **, s32);                          /* extern */
extern u16 gUnk_08100AC2;
extern ? gUnk_08101020;
extern ? gUnk_0810102C;
extern ? gUnk_086678A0;

void func_080989DC(void *arg0, s32 arg1) {
    ? *sp0;
    s8 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
    s32 sp2C;
s32 sp34;
    u8 sp54;
    ? **sp60;
    void **sp64;
    s8 *sp68;
    ? **sp6C;
    u16 *sp70;
    ? **sp74;
    ? **sp78;
    ? **sp7C;
    ? **sp80;
    ? **temp_r0;
    ? **temp_r1_3;
    s32 *var_r6;
    s32 temp_r1_7;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 var_r4;
    s32 var_r8;
    u16 *var_r5;
    u16 *var_r5_2;
    u16 temp_r0_3;
    u16 var_r0;
    u16 var_r2;
    u8 *temp_r4_2;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r4_3;
    void *temp_r5_2;

    func_080CD620();
    temp_r1 = arg0->unk78;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk210->unk8(temp_r1, 3);
    }
    arg0->unk78 = 0;
    temp_r6 = __builtin_new(0x29C);
    temp_r5 = func_08008910(arg0);
    temp_r2 = func_08008940(arg0);
    sp0 = &gUnk_08101020;
    sp4 = 0;
    temp_r5_2 = func_080CAFC4(temp_r6, temp_r5, temp_r2, 8);
    temp_r1_2 = arg0->unk78;
    sp68 = &sp4;
    if ((temp_r5_2 != temp_r1_2) && (temp_r1_2 != 0)) {
        temp_r1_2->unk210->unk8(temp_r1_2, 3);
    }
    arg0->unk78 = temp_r5_2;
    func_080CB090(arg0->unk78);
    var_r4 = 0;
    sp70 = arg1 + 2;
    sp6C = &sp0 + 0x14;
    temp_r0 = &sp0 + 0x1C;
    sp74 = temp_r0;
    temp_r1_3 = &sp0 + 0x24;
    sp78 = temp_r1_3;
    sp7C = &sp0 + 0x2C;
    sp64 = arg0 + 0xF8;
    sp60 = temp_r0 + 0x3C;
    sp80 = temp_r1_3 + 0x10;
    var_r5 = &gUnk_08100AC2;
    do {
        if (((s32) arg0->unk330 >> var_r4) & 1) {
            sp0 = (s32 *)1;
            func_080CB304(arg0->unk78, var_r4, &gUnk_086678A0, *var_r5);
        }
        var_r5 += 2;
        var_r4 += 1;
    } while (var_r4 <= 7);
    temp_r1_4 = arg0->unk7C;
    if ((temp_r1_4 != 0) && (temp_r1_4 != 0)) {
        temp_r1_4->unk210->unk8(temp_r1_4, 3);
    }
    arg0->unk7C = 0;
    temp_r5_3 = __builtin_new(0x32C);
    temp_r4 = func_08008910(arg0);
    temp_r2_2 = func_08008940(arg0);
    sp0 = &gUnk_0810102C;
    *sp68 = 0;
    temp_r0_2 = func_080CC15C(temp_r5_3, temp_r4, temp_r2_2, 8);
    temp_r1_5 = arg0->unk7C;
    if ((temp_r0_2 != temp_r1_5) && (temp_r1_5 != 0)) {
        temp_r1_5->unk210->unk8(temp_r1_5, 3);
    }
    arg0->unk7C = temp_r0_2;
    func_080CC310(arg0->unk7C);
    __12RucksackItem(&sp8);
    arg0->unk35D = 0;
    arg0->unk35C = 0U;
    var_r8 = 0;
    var_r6 = arg0 + 0x2BB0;
    var_r5_2 = sp70;
    do {
        temp_r0_3 = *var_r5_2;
        if (temp_r0_3 != 0) {
            if ((u32) temp_r0_3 <= 0xABU) {
                __4FoodUi(&sp10, temp_r0_3 - 1);
                __12RucksackItemG4Food(&spC, ((&sp0 + 0x11)->unk1 << 0x10) | ((sp0.unk11 << 8) | sp10));
                sp8 = spC;
                __4FoodUi(&spC, *var_r5_2 - 1);
                var_r0 = GetIconId__C4Food(&spC);
            } else {
                __7ArticleUi(&sp54, *var_r5_2 - 0xAC);
                __12RucksackItemG7Article(&spC, sp54);
                sp8 = spC;
                temp_r4_2 = &sp0 + 0x55;
                __7ArticleUi(temp_r4_2, *var_r5_2 - 0xAC);
                var_r0 = GetIconId__C7Article(temp_r4_2);
            }
            sp0 = (s32 *)1;
            func_080CC728(arg0->unk7C, var_r8, &gUnk_086678A0, var_r0);
            *var_r6 = sp8;
            if (func_08096FB4(arg0, &sp8) != -1) {
                arg0->unk35C = (u8) ((1 << var_r8) | arg0->unk35C);
            } else {
                arg0->unk35D = 1;
            }
        } else {
            __12RucksackItem(&spC);
            *var_r6 = spC;
        }
        var_r6 += 4;
        var_r5_2 += 2;
        var_r8 += 1;
    } while (var_r8 <= 7);
    sp14 = 0;
    sp6C->unk4 = 0;
    sp1C = 0;
    sp74->unk4 = 0;
    sp24 = 0;
    sp78->unk4 = 0U;
    sp2C = 0;
    sp7C->unk4 = 0;
    temp_r4_3 = *sp64;
    temp_r4_3->unkC(sp60, sp64, 1);
    temp_r4_3->unk10(&sp34, sp64, *sp58);
    memcpy(sp80, sp80, 0x20);
    temp_r0_4 = sp80 + 0xC;
    sp6C->unk0 = sp80->unk0;
    sp6C->unk4 = (s32) sp80->unk4;
    sp6C->unk8 = (s32) sp80->unk8;
    temp_r1_6 = sp6C + 0xC;
    sp6C->unkC = (s32) sp80->unkC;
    temp_r1_6->unk4 = (s32) temp_r0_4->unk4;
    temp_r1_6->unk8 = (s32) temp_r0_4->unk8;
    temp_r1_6->unkC = (s32) temp_r0_4->unkC;
    (temp_r1_6 + 0xC)->unk4 = (s32) (temp_r0_4 + 0xC)->unk4;
    temp_r0_5 = arg0 + 0x320;
    temp_r1_7 = (func_080074C0(temp_r0_5, temp_r0_5->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (sp24 != 0) {
        var_r2 = sp78->unk4;
    }
    func_08008E64(sp24, temp_r1_7, var_r2);
}

