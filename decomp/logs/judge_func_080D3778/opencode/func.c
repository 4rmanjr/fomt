#include "common.h"
void func_080D3778(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_r3;
    u8 *var_r1;
    u8 *var_r4;

    var_r1 = arg1;
    var_r4 = arg0;
    var_r3 = arg2 - 1;
    if (arg2 != 0) {
        do {
            *var_r1 = *var_r4;
            var_r4 += 1;
            var_r1 += 1;
            var_r3 -= 1;
        } while (var_r3 != -1);
    }
}

