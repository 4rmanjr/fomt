#include "common.h"
u8 *GetName__C4Food(void *);                        /* extern */
u8 *GetName__C7Article(s32 *);                        /* extern */
s32 __4FoodUi(void *, s32);                           /* extern */
s32 __7ArticleUi(s32 *, s32);                           /* extern */
s32 free();                                           /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32);             /* extern */
s32 func_0809A970(s32, ? *);                          /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_08095580(void *arg0) {
    u8 *sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
    s16 sp1C;
s32 sp20;
    u8 sp24;
    s32 sp40;
s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    void *sp5C;
    u8 **sp60;
    s32 sp64;
    void *sp68;
    void *sp6C;
    s16 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r3_2;
    s32 var_r6;
    s32 var_r8;
    u8 *var_r0_2;
    u8 *var_r2;
    u8 temp_r2_2;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r2;
    void *temp_r5;
    void *var_r0_4;
    void *var_r1_3;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r3;
    void *var_r4;

    spC.unk0 = 0U;
    spC.unk12 = (u16) (0xFFFFF000 & spC.unk12);
    spC.unk13 = (u8) (-0x11 & spC.unk13);
    sp60 = &sp0 + 0x40;
    sp5C = &spC + 0x14;
    var_r1 = 7;
    var_r0 = &sp1C;
    do {
        *var_r0 = 0;
        var_r0 -= 2;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    sp58 = arg0->unk366 * 8;
    arg0->unk365 = 0U;
    var_r6 = 0;
loop_3:
    sp40 = 0x14;
    sp60->unk2 = 2;
    func_0804E7A0(sp40, (var_r6 * 0x504) + arg0 + 0x374, 0);
    sp64 = var_r6 + 1;
    if ((s32) (sp58 + var_r6) < (s32) arg0->unk368) {
        func_0809A970(arg0->unk8C + 0x2214, &spC);
        if ((u32) spC.unk0 <= 0xABU) {
            __4FoodUi(sp5C, spC.unk0 - 1);
            var_r0_2 = GetName__C4Food(sp5C);
        } else {
            __7ArticleUi(&sp44, spC.unk0 - 0xAC);
            var_r0_2 = GetName__C7Article(&sp44);
        }
        var_r2 = var_r0_2;
        if (0x10 & spC.unk13) {
            sp48.unk0 = 0x14;
            sp48.unk2 = 2;
            sp0 = var_r2;
            sp4 = 0;
            sp8 = 1;
            func_0804E958(sp48, (var_r6 * 0x504) + arg0 + 0x374, 0, 0);
            sp64 = var_r6 + 1;
        } else {
            var_r1_2 = 0;
            sp64 = var_r6 + 1;
            if (*var_r2 != 0) {
                do {
                    (&sp24)[var_r1_2] = 0x3F;
                    var_r2 += 1;
                    var_r1_2 += 1;
                } while (*var_r2 != 0);
            }
            (&sp24)[var_r1_2] = 0;
            sp4C.unk0 = 0x14;
            sp4C.unk2 = 2;
            sp0 = &sp24;
            sp4 = 0;
            sp8 = 1;
            func_0804E958(sp4C, (var_r6 * 0x504) + arg0 + 0x374, 0);
        }
        arg0->unk365 = (u8) (arg0->unk365 + 1);
    }
    temp_r5 = func_08008910(arg0);
    func_08008F0C(&sp20, (var_r6 * 0x504) + arg0 + 0x374, (var_r6 * 0x500) + 0x06002000, 0x500);
    temp_r1 = temp_r5->unk4;
    if (temp_r1 != temp_r5->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp5C->unk0;
            temp_r1->unk4 = (s32) sp5C->unk4;
            temp_r1->unk8 = (s32) sp5C->unk8;
            temp_r1->unkC = (s32) sp5C->unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
    } else {
        sp68 = temp_r1;
        sp54 = 1;
        temp_r4 = (s32) (temp_r1 - temp_r5->unk0) >> 4;
        sp50 = temp_r4;
        var_r0_3 = &sp50;
        if ((u32) temp_r4 < 1U) {
            var_r0_3 = &sp54;
        }
        temp_r0 = temp_r4 + *var_r0_3;
        if (temp_r0 != 0) {
            temp_r4_2 = temp_r0 * 0x10;
            var_r0_4 = malloc(temp_r4_2);
            var_r8 = temp_r4_2;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_4 = 0;
            var_r8 = 0;
        }
        sp6C = var_r0_4;
        var_r2_2 = temp_r5->unk0;
        var_r3 = var_r0_4;
        if (var_r2_2 != sp68) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2_2->unk0;
                    var_r3->unk4 = (s32) var_r2_2->unk4;
                    var_r3->unk8 = (s32) var_r2_2->unk8;
                    var_r3->unkC = (s32) var_r2_2->unkC;
                }
                var_r2_2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2_2 != sp68);
        }
        if (sp54 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp5C->unk0;
                var_r3->unk4 = (s32) sp5C->unk4;
                var_r3->unk8 = (s32) sp5C->unk8;
                var_r3->unkC = (s32) sp5C->unkC;
            }
            var_r4 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp54;
            var_r2_3 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_3 != 0) {
                        var_r2_3->unk0 = (s32) sp5C->unk0;
                        var_r2_3->unk4 = (s32) sp5C->unk4;
                        var_r2_3->unk8 = (s32) sp5C->unk8;
                        var_r2_3->unkC = (s32) sp5C->unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_3 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_3;
        }
        temp_r2 = temp_r5->unk4;
        temp_r0_2 = temp_r5->unk0;
        var_r1_3 = temp_r0_2;
        if (temp_r0_2 != temp_r2) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2);
        }
        if (temp_r0_2 != 0) {
            free();
        }
        temp_r5->unk0 = sp6C;
        temp_r5->unk4 = var_r4;
        temp_r5->unkC = (void *) (sp6C + var_r8);
    }
    var_r6 = sp64;
    if (var_r6 <= 7) {
        goto loop_3;
    }
    temp_r2_2 = arg0->unk365 - 1;
    arg0->unk365 = temp_r2_2;
    if ((u32) arg0->unk364 > (u32) temp_r2_2) {
        arg0->unk364 = temp_r2_2;
    }
    arg0->unk369 = (s8) ((s32) (arg0->unk366 + 1) / 10);
    arg0->unk36A = (s8) ((s32) (arg0->unk366 + 1) % 10);
    arg0->unk36B = 0xD;
    arg0->unk36C = (s8) ((s32) (arg0->unk367 + 1) / 10);
    arg0->unk36D = (s8) ((s32) (arg0->unk367 + 1) % 10);
}

