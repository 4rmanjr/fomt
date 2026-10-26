#include "common.h"
s32 memcpy(s32, s32 *, s32);                            /* extern */
s32 memset(s32 *, s32, s32);                            /* extern */
extern s32 gUnk_0875A440;

void func_0803D2E8(s32 *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r4;
    s8 *var_r1;

    temp_r4 = *arg0;
    if ((arg1 << 0x18) != 0) {
        memcpy(temp_r4 + 0x228, &gUnk_0875A440 + 0x140, 0x20);
        var_r1 = temp_r4 + 0x2B0;
    } else {
        memset(&sp0, 0, 0x20);
        memcpy(temp_r4 + 0x228, &sp0, 0x20);
        var_r1 = temp_r4 + 0x2B0;
    }
    *var_r1 = 1;
}

