#include "common.h"
void func_08009984(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r3;
    void *var_r1;

    var_r1 = arg0->unkC;
    temp_r3 = arg0 + 0x10;
    if (var_r1 != temp_r3) {
        do {
            temp_r0 = var_r1;
            var_r1 = var_r1->unk4;
            temp_r0->unk0 = 0;
            temp_r0->unk4 = 0;
        } while (var_r1 != temp_r3);
    }
    temp_r0_2 = arg0 + 0x10;
    arg0->unkC = temp_r0_2;
    arg0->unk10 = (s32) (temp_r0_2 - 4);
}

