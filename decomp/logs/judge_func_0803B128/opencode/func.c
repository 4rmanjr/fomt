#include "common.h"
s32 free(void *);                                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_0803B128(void *arg0, void *arg1) {
s32 sp0;
    s32 sp10;
    s32 sp14;
    void *sp18;
    void *sp1C;
    void *sp20;
    void *sp24;
    s32 *var_r0;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r3_2;
    s32 var_sb;
    u16 var_r6;
    void **temp_r0_4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r4;
    void *var_r5;

    sp18 = arg0;
    temp_r2 = arg0 + 4;
    var_r5 = temp_r2 + 4;
    temp_r2_2 = temp_r2 + ((arg0->unk4 * 0x28) + 4);
    sp1C = temp_r2_2;
    if (var_r5 == temp_r2_2) {

    } else {
loop_2:
        temp_r4 = var_r5->unk8;
        var_r6 = 0;
        if (temp_r4 != 0) {
            var_r6 = (var_r5 + 8)->unk4;
        }
        temp_r0 = var_r5 + 0x28;
        sp20 = temp_r0;
        if (var_r6 == 0) {

        } else {
            temp_r0_2 = temp_r0 - 8;
            func_08008F0C(&sp0, temp_r4, (func_08007D4C(temp_r0_2, temp_r0_2->unk4) << 5) + 0x06010000, var_r6);
            temp_r1 = arg1->unk4;
            if (temp_r1 != arg1->unkC) {
                if (temp_r1 != 0) {
                    temp_r1->unk0 = (s32) sp0.unk0;
                    temp_r1->unk4 = (s32) sp0.unk4;
                    temp_r1->unk8 = (s32) sp0.unk8;
                    temp_r1->unkC = (s32) sp0.unkC;
                }
                arg1->unk4 = (void *) (arg1->unk4 + 0x10);
            } else {
                sp24 = temp_r1;
                sp14 = 1;
                temp_r4_2 = (s32) (sp24 - arg1->unk0) >> 4;
                sp10 = temp_r4_2;
                var_r0 = &sp10;
                if ((u32) temp_r4_2 < 1U) {
                    var_r0 = &sp14;
                }
                temp_r0_3 = temp_r4_2 + *var_r0;
                if (temp_r0_3 != 0) {
                    temp_r4_3 = temp_r0_3 * 0x10;
                    var_r0_2 = malloc(temp_r4_3);
                    var_sb = temp_r4_3;
                    if (var_r0_2 == 0) {
                        var_r0_2 = func_080D3BC0(var_sb);
                    }
                } else {
                    var_r0_2 = 0;
                    var_sb = 0;
                }
                var_r2 = arg1->unk0;
                var_r3 = var_r0_2;
                sp20 = var_r5 + 0x28;
loop_21:
                if (var_r2 != sp24) {
                    if (var_r3 != 0) {
                        var_r3->unk0 = (s32) var_r2->unk0;
                        var_r3->unk4 = (s32) var_r2->unk4;
                        var_r3->unk8 = (s32) var_r2->unk8;
                        var_r3->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3 += 0x10;
                    goto loop_21;
                }
                if (sp14 == 1) {
                    if (var_r3 != 0) {
                        var_r3->unk0 = (s32) sp0.unk0;
                        var_r3->unk4 = (s32) sp0.unk4;
                        var_r3->unk8 = (s32) sp0.unk8;
                        var_r3->unkC = (s32) sp0.unkC;
                    }
                    var_r4 = var_r3 + 0x10;
                } else {
                    var_r3_2 = sp14;
                    var_r2_2 = var_r3;
                    if (var_r3_2 != 0) {
                        do {
                            if (var_r2_2 != 0) {
                                var_r2_2->unk0 = (s32) sp0.unk0;
                                var_r2_2->unk4 = (s32) sp0.unk4;
                                var_r2_2->unk8 = (s32) sp0.unk8;
                                var_r2_2->unkC = (s32) sp0.unkC;
                            }
                            var_r3_2 -= 1;
                            var_r2_2 += 0x10;
                        } while (var_r3_2 != 0);
                    }
                    var_r4 = var_r2_2;
                }
                temp_r2_3 = arg1->unk4;
                temp_r1_2 = arg1->unk0;
                var_r0_3 = temp_r1_2;
                if (temp_r1_2 != temp_r2_3) {
                    do {
                        var_r0_3 += 0x10;
                    } while (var_r0_3 != temp_r2_3);
                }
                if (temp_r1_2 != 0) {
                    free(temp_r1_2);
                }
                arg1->unk0 = var_r0_2;
                arg1->unk4 = var_r4;
                arg1->unkC = (void *) (var_sb + var_r0_2);
            }
        }
        var_r5 = sp20;
        if (var_r5 != sp1C) {
            goto loop_2;
        }
    }
    temp_r0_4 = sp18->unk0;
    (*temp_r0_4)->unk54(temp_r0_4, (sp18 + 4)->unk14, sp18->unkD4, 1);
}

