#include "common.h"
s32 func_0800E4F0(s32);                             /* extern */
s32 func_08025944(void *);                          /* extern */
s32 func_08025AFC();                                /* extern */

s32 func_08025B10(void *arg0) {
    s32 var_r4;
    u32 temp_r1;

    var_r4 = 0;
    if (((func_08025AFC() << 0x18) != 0) && ((u32) (arg0->unk34->unk8 - 1) <= 1U)) {
        var_r4 = 1;
    }
    temp_r1 = arg0->unk34->unk12 << 0x1B;
    if ((u32) (temp_r1 >> 0x1B) > 0x15U) {
        var_r4 += 1;
    }
    if ((u32) (temp_r1 >> 0x1B) <= 5U) {
        var_r4 += 2;
    }
    if (func_0800E4F0(arg0->unk38) == 0) {
        var_r4 += 2;
    }
    if ((func_08025944(arg0) << 0x18) != 0) {
        var_r4 += 0xA;
    }
    return var_r4;
}

