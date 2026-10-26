#include "common.h"
void func_080D1564(void *arg0) {
    u16 var_r4;
    void *var_r0;

    var_r0 = arg0;
    var_r4 = 0;
    do {
        var_r4 += var_r0->unk2;
        var_r0->unk2 = var_r4;
        var_r0 += 2;
    } while ((u32) var_r0 < (u32) saved_reg_r8);
}

