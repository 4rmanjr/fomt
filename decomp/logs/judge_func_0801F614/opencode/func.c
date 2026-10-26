#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0800E324(s32);                             /* extern */
void *func_080A4A00(s32, void *, s32, void *, s32, s32); /* extern */

void func_0801F614(void *arg0) {
    s8 sp8;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 var_r0;
    s32 var_r2;
    s8 temp_r0;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r1;

    temp_r1 = arg0->unk106C;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk24->unk8(temp_r1, 3);
    }
    arg0->unk106C = 0;
    temp_r1_2 = arg0->unk1070;
    if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
        temp_r1_2->unk24->unk8(temp_r1_2, 3);
    }
    arg0->unk1070 = 0;
    temp_r0 = arg0->unk0->unk14(arg0);
    if (temp_r0 == 0) {
        temp_r0_2 = func_0800E324(arg0->unk1038 + 0x10);
        if (temp_r0_2 != 3) {
            temp_r0_3 = __builtin_new(0x40);
            temp_r5 = arg0 + 0xF04;
            sp8 = temp_r0;
            temp_r0_4 = func_080A4A00(temp_r0_3, temp_r5, 0, arg0, 3, 0x1E);
            temp_r1_3 = arg0->unk106C;
            if ((temp_r0_4 != temp_r1_3) && (temp_r1_3 != 0)) {
                temp_r1_3->unk24->unk8(temp_r1_3, 3);
            }
            arg0->unk106C = temp_r0_4;
            var_r0 = __builtin_new(0x40);
            sp8 = 0;
            var_r1 = temp_r5;
            var_r2 = 0;
        } else {
            temp_r0_5 = __builtin_new(0x40);
            temp_r5_2 = arg0 + 0xF04;
            sp8 = temp_r0;
            temp_r0_6 = func_080A4A00(temp_r0_5, temp_r5_2, 1, arg0, temp_r0_2, 0x1E);
            temp_r1_4 = arg0->unk106C;
            if ((temp_r0_6 != temp_r1_4) && (temp_r1_4 != 0)) {
                temp_r1_4->unk24->unk8(temp_r1_4, 3);
            }
            arg0->unk106C = temp_r0_6;
            var_r0 = __builtin_new(0x40);
            sp8 = 0;
            var_r1 = temp_r5_2;
            var_r2 = 1;
        }
        temp_r0_7 = func_080A4A00(var_r0, var_r1, var_r2, arg0);
        temp_r1_5 = arg0->unk1070;
        if ((temp_r0_7 != temp_r1_5) && (temp_r1_5 != 0)) {
            temp_r1_5->unk24->unk8(temp_r1_5, 3);
        }
        arg0->unk1070 = temp_r0_7;
    }
}

