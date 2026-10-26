#include "common.h"
void func_080092C8(void *arg0, u16 arg1) {
    u16 *var_r2;
    u16 temp_r6;
    u32 var_r3;

    temp_r6 = arg1;
    var_r3 = 0x200;
    var_r2 = arg0 + 0x20;
    do {
        if (arg0->unk0 & var_r3) {
            *var_r2 += temp_r6 - arg0->unkA;
        }
        var_r2 -= 2;
        var_r3 = var_r3 >> 1;
    } while (var_r3 != 0);
    arg0->unkA = temp_r6;
}

