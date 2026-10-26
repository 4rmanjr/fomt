#include "common.h"
s32 free(void *);                                     /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_08075334(void *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4) {
s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    void *sp18;
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r3_2;
    s32 var_r8;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r5;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r4;

    sp4 = arg1;
    sp0.unk0 = arg2;
    sp8 = arg3;
    spC = arg4;
    temp_r5 = arg0 + 0x594;
    temp_r1 = temp_r5->unk4;
    if (temp_r1 != temp_r5->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp0.unk0;
            temp_r1->unk4 = (s32) sp0.unk4;
            temp_r1->unk8 = (s32) sp0.unk8;
            temp_r1->unkC = (s32) sp0.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        return;
    }
    sp14 = 1;
    temp_r4 = (s32) (temp_r1 - arg0->unk594) >> 4;
    sp10 = temp_r4;
    var_r0 = &sp10;
    if ((u32) temp_r4 < 1U) {
        var_r0 = &sp14;
    }
    temp_r0 = temp_r4 + *var_r0;
    if (temp_r0 != 0) {
        temp_r4_2 = temp_r0 * 0x10;
        var_r0_2 = malloc(temp_r4_2);
        var_r8 = temp_r4_2;
        if (var_r0_2 == 0) {
            var_r0_2 = func_080D3BC0(var_r8);
        }
    } else {
        var_r0_2 = 0;
        var_r8 = 0;
    }
    sp18 = var_r0_2;
    var_r2 = arg0->unk594;
    var_r3 = var_r0_2;
    if (var_r2 != temp_r1) {
        do {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
        } while (var_r2 != temp_r1);
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
    temp_r2 = temp_r5->unk4;
    temp_r1_2 = arg0->unk594;
    var_r0_3 = temp_r1_2;
    if (temp_r1_2 != temp_r2) {
        do {
            var_r0_3 += 0x10;
        } while (var_r0_3 != temp_r2);
    }
    if (temp_r1_2 != 0) {
        free(temp_r1_2);
    }
    arg0->unk594 = sp18;
    temp_r5->unk4 = var_r4;
    temp_r5->unkC = (void *) (sp18 + var_r8);
}

