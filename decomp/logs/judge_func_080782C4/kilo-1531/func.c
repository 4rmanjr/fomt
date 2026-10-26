#include "common.h"
s32 func_080782C4(u32 arg1, u32 arg2, void *arg3) {
    s32 var_r4;

    var_r4 = 0;
    if (((u32) arg3->unk10 <= arg1) && (arg1 <= (u32) arg3->unk12) && ((u32) arg3->unk11 <= arg2) && (arg2 <= (u32) arg3->unk13)) {
        var_r4 = 1;
    }
    return var_r4;
}

