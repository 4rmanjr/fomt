#include "common.h"
s32 func_0809C22C();                                /* extern */

void func_0809C3BC(s32 arg0) {
    s32 temp_r0;
    u8 *temp_r1;
    u8 temp_r2;

    temp_r0 = func_0809C22C();
    temp_r1 = arg0 + temp_r0;
    temp_r2 = *temp_r1;
    if (temp_r2 == 0) {
        *temp_r1 = 1;
        *(arg0 + 0xC + temp_r0) = temp_r2;
    }
}

