#include "common.h"
s32 func_08032090(void **arg0, s32 arg1) {
    void *sp0;
    void *sp8;
    s32 spC;
    s32 var_r4;
    u16 var_r1;
    u32 var_r3;
    void *var_r1_2;

    (*arg0)->unkC(&sp0, arg0, arg1);
    sp8 = sp0;
    spC = sp4;
    var_r4 = 0;
    var_r3 = 0;
    var_r1 = 0;
    if (sp0 != 0) {
        var_r1 = sp8.unk4;
    }
    if ((u32) var_r1 > 0U) {
        var_r1_2 = sp0;
        do {
            var_r4 += var_r1_2->unk2;
            var_r1_2 += 4;
            var_r3 += 1;
        } while (var_r3 < (u32) var_r1);
    }
    return var_r4;
}

