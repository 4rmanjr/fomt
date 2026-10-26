#include "common.h"
extern void *gUnk_03000420;

s32 func_080D0C10(void) {
    s32 var_r2;

    var_r2 = 0;
    if (gUnk_03000420->unk34 == gUnk_03000420->unk38) {
        var_r2 = 1;
    }
    return var_r2;
}

