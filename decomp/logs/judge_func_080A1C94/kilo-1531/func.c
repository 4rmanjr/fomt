#include "common.h"
u32 func_080A1EA8();                                /* extern */

void func_080A1C94(s32 arg0) {
    u32 temp_r0;
    u32 temp_r0_2;
    u8 *temp_r2;

    temp_r0 = func_080A1EA8();
    temp_r0_2 = temp_r0 >> 3;
    if (temp_r0_2 <= 6U) {
        temp_r2 = arg0 + temp_r0_2;
        *temp_r2 &= ~(1 << (7 & temp_r0));
    }
}

