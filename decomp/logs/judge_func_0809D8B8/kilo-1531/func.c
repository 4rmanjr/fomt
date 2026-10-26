#include "common.h"
s32 func_0809D8B8(s32 *arg0) {
    s32 temp_r0;
    s32 var_r1;

    var_r1 = 6;
    temp_r0 = *arg0;
    if (temp_r0 == 1) {
        var_r1 = 0x1C;
    } else if (temp_r0 == 2) {
        var_r1 = 0xE;
    }
    return var_r1;
}

