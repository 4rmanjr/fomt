#include "common.h"
void func_08007844(s32 *arg0, s32 arg1, u32 arg2) {
    s32 var_r0;

    if (arg2 <= 4U) {
        var_r0 = *arg0 & ~(((1 << (1 << arg2)) - 1) << (0x1F & arg1));
        goto block_4;
    }
    if (arg2 == 5) {
        var_r0 = 0;
block_4:
        *arg0 = var_r0;
    }
}

