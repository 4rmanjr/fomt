#include "common.h"
s32 func_080D0EBC(s32 *, s32, s32, s32);                /* extern */

void func_08008FE4(void *arg0, s32 arg1) {
    ? *sp0;
    ? *var_r3;
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 != arg1) {
        do {
            var_r3 = var_r4->unk4;
            if (var_r4->unk0 == 1) {
                sp0 = var_r3;
                var_r3 = &sp0;
            }
            func_080D0EBC(var_r3, var_r4->unk8, var_r4->unkC, 0x040000D4);
            var_r4 += 0x10;
        } while (var_r4 != arg1);
    }
}

