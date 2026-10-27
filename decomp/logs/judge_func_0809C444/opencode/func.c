#include "common.h"
s32 func_0809C22C();                                /* extern */
u8 func_0809C3E0(s32);                              /* extern */

u8 func_0809C444(s32 arg0) {
    s32 temp_r0;
    u8 var_r5;

    var_r5 = 0;
    temp_r0 = func_0809C22C();
    if ((*((u8 *)arg0 + temp_r0) != 0) && ((temp_r0 == 0) || (temp_r0 == 3))) {
        var_r5 = func_0809C3E0(arg0);
    }
    return var_r5;
}

