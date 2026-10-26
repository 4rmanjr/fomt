#include "common.h"
void *func_080DC96C(void *arg0, s32 arg1, u32 *arg2) {
    s32 temp_r3;
    s32 var_r1;
    s32 var_r2;
    u16 *temp_r0;
    void *var_r4;

    var_r4 = arg0;
    var_r1 = (s32) (arg1 - var_r4) >> 3;
    if (var_r1 > 0) {
        do {
            temp_r3 = var_r1 >> 1;
            temp_r0 = var_r4 + (temp_r3 * 8);
            var_r2 = 0;
            if ((u32) *arg2 < (u32) *temp_r0) {
                var_r2 = 1;
            }
            if (var_r2 != 0) {
                var_r1 = temp_r3;
            } else {
                var_r4 = temp_r0 + 8;
                var_r1 = (var_r1 - temp_r3) - 1;
            }
        } while (var_r1 > 0);
    }
    return var_r4;
}

