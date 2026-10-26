#include "common.h"
u32 func_080AB788(s32);                             /* extern */

s32 func_080338F0(s32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (func_080AB788(0x200) < (u32) (arg0 + 0x100)) {
        var_r1 = 1;
    }
    return var_r1;
}

