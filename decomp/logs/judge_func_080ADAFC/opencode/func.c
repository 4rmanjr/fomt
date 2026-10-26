#include "common.h"
s32 func_080AC96C(s32);                             /* extern */

s32 func_080ADAFC(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r2;
    u8 *temp_r4;

    temp_r3 = arg0 + 0x19C;
    temp_r4 = temp_r3 + arg1;
    var_r2 = *temp_r4 - 0x10;
    if (var_r2 < 0) {
        temp_r0 = func_080AC96C(temp_r3);
        var_r2 = temp_r0;
        *temp_r4 = temp_r0 + 0x10;
    }
    return var_r2;
}

