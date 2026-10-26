#include "common.h"
s32 func_08075E24(s32, s16);                          /* extern */
s32 sub_08065B14();                                   /* extern */

s32 sub_0806641E(s32 arg40, s32 arg41, u32 arg52) {
    arg42 = arg52;
    if (arg52 <= 6U) {
        sub_08065B14();
    }
    func_08075E24(arg41, (s16) ((saved_reg_r8 + 1) * 8));
    return arg40;
}

