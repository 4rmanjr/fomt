#include "common.h"
s32 memcpy(void *, ? *, s32);                         /* extern */
s32 memset(s32 *, s32, s32);                            /* extern */
extern ? gUnk_0875A440;

void func_0803D240(void **arg0, u32 arg1) {
s32 sp0;
    ? *var_r1_2;
    s32 var_r1;
    u32 temp_r0;
    u32 var_r4;
    void *temp_r6;
    void *var_r0;

    temp_r6 = *arg0;
    var_r1 = 0x1E;
    if (arg1 <= 0xBU) {
        var_r1 = 0x1C;
    }
    memcpy(temp_r6 + 0x104, (var_r1 << 5) + &gUnk_0875A440, 0x20);
    temp_r6->unk18C = 1;
    var_r4 = 0xC;
    if (arg1 != 0xC) {
        var_r4 = arg1;
        if (var_r4 > 0xBU) {
            var_r4 -= 0xC;
        }
    }
    temp_r0 = var_r4 / 10U;
    if ((s32) temp_r0 > 0) {
        var_r1_2 = (temp_r0 << 5) + &gUnk_0875A440;
        var_r0 = temp_r6 + 0x144;
    } else {
        memset(&sp0, 0, 0x20);
        var_r0 = temp_r6 + 0x144;
        var_r1_2 = &sp0;
    }
    memcpy(var_r0, var_r1_2, 0x20);
    temp_r6->unk18C = 1;
    memcpy(temp_r6 + 0x164, ((var_r4 % 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r6->unk18C = 1;
}

