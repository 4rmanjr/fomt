#include "common.h"
s32 func_080CDD7C(void *arg0) {
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r3;

    var_r3 = 0xA;
    temp_r2 = arg0->unk4;
    if (temp_r2 <= 8) {
        var_r0 = arg0->unk0->unk7C;
    } else {
        var_r0 = arg0->unk0->unk78;
        var_r3 = 1;
    }
    if (var_r0 == 0) {
        var_r3 = temp_r2;
    }
    temp_r0 = arg0->unk4;
    if (var_r3 != temp_r0) {
        arg0->unk8 = temp_r0;
        arg0->unk4 = var_r3;
    }
    return var_r3;
}

