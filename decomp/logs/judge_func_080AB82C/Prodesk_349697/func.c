#include "common.h"
u32 func_080AB788(s32);                             /* extern */

u32 func_080AB82C(u8 *arg0, u32 arg1) {
    u32 temp_r3;
    u32 var_r1;
    u8 var_r2;

    temp_r3 = func_080AB788(0x64);
    var_r1 = 0;
    var_r2 = *arg0;
loop_1:
    if (temp_r3 >= (u32) var_r2) {
        var_r1 += 1;
        if (var_r1 < arg1) {
            var_r2 += *((var_r1 * 4) + arg0);
            goto loop_1;
        }
        var_r1 = 0;
    }
    return var_r1;
}

