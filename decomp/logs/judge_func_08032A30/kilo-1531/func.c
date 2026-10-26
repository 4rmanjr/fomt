#include "common.h"
void func_08032A30(void *arg0) {
    u16 temp_r0;
    u16 var_r0;
    void *temp_r2;

    temp_r0 = arg0->unk24;
    if (temp_r0 != 0) {
        var_r0 = temp_r0 - 1;
    } else {
        var_r0 = arg0->unk26;
    }
    arg0->unk24 = var_r0;
    temp_r2 = arg0->unk10;
    if (temp_r2 != 0) {
        temp_r2->unk4->unkC(temp_r2);
    }
}

