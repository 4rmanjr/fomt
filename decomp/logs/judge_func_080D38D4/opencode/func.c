#include "common.h"
s32 func_080D3800(s32, s32, s32);                     /* extern */
s32 func_080D3870(s32, s32, s32);                   /* extern */

s32 func_080D38D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r3;
    u32 var_r7;

    var_r3 = arg3;
    var_r7 = 0;
loop_2:
    if (var_r7 <= 2U) {
        func_080D3800(arg0, arg1, arg2);
        var_r3 = func_080D3870(arg0, arg1, arg2);
        if (var_r3 != 0) {
            var_r7 = (u32) (u8) (var_r7 + 1);
            goto loop_2;
        }
    }
    return var_r3;
}

