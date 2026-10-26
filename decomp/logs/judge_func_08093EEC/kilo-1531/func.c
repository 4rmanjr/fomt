#include "common.h"
void func_08093EEC(void *arg0) {
    ? (*var_r1)(void *);
    s16 temp_r3;
    void *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r3 = temp_r0->unk22;
    if ((s32) temp_r3 > 0) {
        var_r1 = *(((temp_r3 * 4) + *(arg0 + temp_r0->unk24)) - 4);
    } else {
        var_r1 = (s32 (*)(void *)) temp_r0->unk24;
    }
    var_r1(arg0 + arg0->unk4->unk20);
}

