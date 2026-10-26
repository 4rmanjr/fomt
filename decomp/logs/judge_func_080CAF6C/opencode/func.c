#include "common.h"
s32 free();                                           /* extern */

void func_080CAF6C(void *arg0) {
    void *sp0;
    void **sp4;
    void *sp8;
    void *spC;
    s32 temp_r1;
    s32 temp_r1_2;
    void **temp_r1_3;
    void **var_r0;
    void *temp_r3;
    void *temp_r4;
    void *var_r1;

    var_r0 = arg0->unk8;
    var_r1 = *var_r0;
    sp0 = var_r1;
    sp4 = var_r0;
loop_5:
    temp_r1 = (s32) var_r1 ^ (s32) var_r0;
    if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
        temp_r3 = sp0->unk8;
        temp_r1_2 = temp_r3->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
            temp_r3->unk8->unkC(temp_r3, 3);
            spC = sp0;
            temp_r4 = sp0->unk0;
            temp_r1_3 = sp0->unk4;
            *temp_r1_3 = temp_r4;
            temp_r4->unk4 = temp_r1_3;
            free();
            sp8 = temp_r4;
            sp0 = temp_r4;
        } else {
            sp0 = sp0->unk0;
        }
        var_r1 = sp0;
        var_r0 = sp4;
        goto loop_5;
    }
}

