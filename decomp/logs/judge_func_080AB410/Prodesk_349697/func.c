#include "common.h"
s32 free(void *);                                     /* extern */
s32 func_030004DC(s32, s32, s32, s32);                /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_080AB410(void ****arg0, s32 arg1, void *arg2) {
    s32 sp0;
    void *sp4;
    void **sp8;
    s32 spC;
    void ***sp10;
s32 sp14;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    void ***sp30;
    void **sp34;
    s32 *sp38;
    s32 sp3C;
    u32 sp40;
    s32 sp44;
    void *sp48;
    void *sp4C;
    s16 temp_r6;
    s32 *var_r0;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r2_2;
    s32 temp_r2_4;
    s32 temp_r4;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6_2;
    s32 temp_sl;
    s32 var_r1_2;
    s32 var_r3_3;
    s32 var_r8;
    u16 var_r3;
    u32 var_r1;
    u32 var_r8_2;
    u32 var_sb;
    void ***temp_r0;
    void ***var_r7;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r2_3;
    void *temp_r3;
    void *temp_r4_2;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r3_2;
    void *var_r5;

    sp2C = arg1;
    temp_r0 = *arg0;
    sp30 = temp_r0;
    sp34 = *temp_r0;
    if (sp30->unk5 == 0) {

    } else {
        var_r1 = 0;
loop_3:
        temp_r2 = sp30 + ((var_r1 * 0x54) + 8);
        sp40 = var_r1 + 1;
        if (temp_r2->unk0 == 0) {

        } else if (temp_r2->unk1 == 0) {

        } else {
            var_sb = 0;
loop_8:
            temp_r4 = var_sb << 5;
            temp_r5 = (temp_r4 + temp_r2)->unkC;
            temp_r0_2 = (var_sb * 8) + temp_r2 + 0x44;
            temp_r2_2 = func_08007D4C(temp_r0_2, temp_r0_2->unk4);
            temp_r4_2 = temp_r4 + temp_r2;
            var_r3 = 0;
            if (temp_r4_2->unkC != 0) {
                var_r3 = (temp_r4_2 + 0xC)->unk4;
            }
            func_08008F0C(&sp14, temp_r5, (temp_r2_2 << 5) + 0x06010000, var_r3);
            sp38 = &sp0 + 0x14;
            temp_r1 = arg2->unk4;
            if (temp_r1 != arg2->unkC) {
                if (temp_r1 != 0) {
                    temp_r1->unk0 = (s32) sp14.unk0;
                    temp_r1->unk4 = (s32) sp14.unk4;
                    temp_r1->unk8 = (s32) sp14.unk8;
                    temp_r1->unkC = (s32) sp14.unkC;
                }
                arg2->unk4 = (void *) (arg2->unk4 + 0x10);
                var_sb += 1;
            } else {
                sp48 = temp_r1;
                sp28 = 1;
                temp_r4_3 = (s32) (sp48 - arg2->unk0) >> 4;
                sp24 = temp_r4_3;
                var_r0 = &sp24;
                if ((u32) temp_r4_3 < 1U) {
                    var_r0 = &sp28;
                }
                temp_r0_3 = temp_r4_3 + *var_r0;
                if (temp_r0_3 != 0) {
                    temp_r4_4 = temp_r0_3 * 0x10;
                    var_r0_2 = malloc(temp_r4_4);
                    var_r8 = temp_r4_4;
                    if (var_r0_2 == 0) {
                        var_r0_2 = func_080D3BC0(var_r8);
                    }
                } else {
                    var_r0_2 = 0;
                    var_r8 = 0;
                }
                sp4C = var_r0_2;
                var_r2 = arg2->unk0;
                var_r3_2 = var_r0_2;
                var_sb += 1;
loop_25:
                if (var_r2 != sp48) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2->unk0;
                        var_r3_2->unk4 = (s32) var_r2->unk4;
                        var_r3_2->unk8 = (s32) var_r2->unk8;
                        var_r3_2->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3_2 += 0x10;
                    goto loop_25;
                }
                if (sp28 == 1) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) sp38->unk0;
                        var_r3_2->unk4 = (s32) sp38->unk4;
                        var_r3_2->unk8 = (s32) sp38->unk8;
                        var_r3_2->unkC = (s32) sp38->unkC;
                    }
                    var_r5 = var_r3_2 + 0x10;
                } else {
                    var_r3_3 = sp28;
                    var_r2_2 = var_r3_2;
                    if (var_r3_3 != 0) {
                        do {
                            if (var_r2_2 != 0) {
                                var_r2_2->unk0 = (s32) sp38->unk0;
                                var_r2_2->unk4 = (s32) sp38->unk4;
                                var_r2_2->unk8 = (s32) sp38->unk8;
                                var_r2_2->unkC = (s32) sp38->unkC;
                            }
                            var_r3_3 -= 1;
                            var_r2_2 += 0x10;
                        } while (var_r3_3 != 0);
                    }
                    var_r5 = var_r2_2;
                }
                temp_r2_3 = arg2->unk4;
                temp_r1_2 = arg2->unk0;
                var_r0_3 = temp_r1_2;
                if (temp_r1_2 != temp_r2_3) {
                    do {
                        var_r0_3 += 0x10;
                    } while (var_r0_3 != temp_r2_3);
                }
                if (temp_r1_2 != 0) {
                    free(temp_r1_2);
                }
                arg2->unk0 = sp4C;
                arg2->unk4 = var_r5;
                arg2->unkC = (void *) (sp4C + var_r8);
            }
            if (var_sb <= 1U) {
                goto loop_8;
            }
            temp_r2->unk1 = 0U;
        }
        var_r1 = sp40;
        if (var_r1 <= 9U) {
            goto loop_3;
        }
        sp30->unk5 = 0U;
    }
    if (sp30->unk6 != 0) {
        (*sp34)->unk54(sp34, ((sp30->unk364 * 0x54) + sp30)->unk1C, sp30->unk354, 1);
        sp30->unk6 = 0U;
    }
    sp3C = (*sp34)->unk18(sp34);
    temp_sl = (*sp34)->unk1C(sp34);
    var_r8_2 = 0;
    var_r7 = sp30 + 0x368;
    do {
        if (var_r7->unk4 != 0) {
            temp_r3 = sp30 + ((var_r7->unk6 * 0x54) + 8);
            var_r1_2 = 0;
            if ((u32) var_r7->unk5 <= 6U) {
                var_r1_2 = 1;
            }
            temp_r6 = var_r7->unk2;
            temp_r5_2 = 0x8000 - temp_r6;
            temp_r2_4 = var_r7->unk0 - sp3C;
            temp_r6_2 = temp_r6 - temp_sl;
            temp_r0_4 = temp_r3 + ((var_r1_2 * 8) + 0x44);
            sp44 = temp_r2_4;
            temp_r0_5 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
            sp0 = temp_r5_2;
            sp4 = temp_r3 + ((var_r1_2 << 5) + 4);
            sp8 = sp34;
            spC = temp_r0_5;
            sp10 = sp30 + 0x350;
            func_030004DC(sp2C, temp_r2_4, temp_r6_2, 0xAA);
        }
        var_r7 += 8;
        var_r8_2 += 1;
    } while (var_r8_2 <= 0xFU);
}

