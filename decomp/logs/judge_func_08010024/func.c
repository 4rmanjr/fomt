#include "common.h"
void func_08010024(s32 *arg0) {
    s32 temp_r4;
    s8 *temp_r5;
    s8 *var_r1;
    s8 *temp_r0;

    temp_r4 = *arg0;
    temp_r5 = (s8 *)arg0 + 4;
    temp_r0 = (s8 *)arg0 + (*arg0 + 4);
    var_r1 = (s8 *)((s32 *)temp_r5 - 1) + 4;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 1;
        } while (var_r1 != temp_r0);
    }
    *arg0 = temp_r4 - (temp_r0 - temp_r5);
}

