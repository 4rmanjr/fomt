#include "common.h"
s32 func_08011588(u8 *arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r3;
    u8 *var_r2;

    var_r1 = arg1;
    var_r3 = 0;
    if ((arg0 != 0) && (var_r1 != 0)) {
        var_r2 = arg0;
        do {
            var_r3 += *var_r2;
            var_r2 += 1;
            var_r1 -= 1;
        } while (var_r1 != 0);
    }
    return var_r3;
}

