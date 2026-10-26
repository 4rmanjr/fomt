#include "common.h"
s32 func_0804F178(void *arg0) {
    s32 var_r2;
    u8 temp_r0;
    u8 var_r1;

    var_r2 = 0;
    if (arg0->unk8 != 0) {
        temp_r0 = arg0->unk4;
        var_r1 = temp_r0;
        if (temp_r0 != 0) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r2 = 1;
        }
    }
    return var_r2;
}

