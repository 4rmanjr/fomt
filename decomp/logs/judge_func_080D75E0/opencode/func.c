#include "common.h"
s32 func_08007844(s32);                               /* extern */
s32 func_080D6F0C(void *);                            /* extern */

void func_080D75E0(void *arg0, s32 arg1, u32 arg2) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r3;
    s8 var_r2;

    if (arg2 <= 5U) {
        var_r3 = arg0 + 4;
        if (0x20 & arg1) {
            var_r3 += 4;
        }
        func_08007844(var_r3);
        arg0->unk0 = 0;
        var_r2 = 0;
        var_r1 = 0;
        if (arg0->unk4 == 0) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r1_2 = 0;
            if (arg0->unk8 == 0) {
                var_r1_2 = 1;
            }
            if (var_r1_2 != 0) {
                var_r2 = 1;
            }
        }
        arg0->unk1 = var_r2;
        return;
    }
    if (arg2 == 6) {
        func_080D6F0C(arg0);
    }
}

