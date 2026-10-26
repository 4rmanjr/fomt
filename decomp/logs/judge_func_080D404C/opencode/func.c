#include "common.h"
s32 func_0800080C(void *, s32);                       /* extern */
s32 func_080D4480(s32, s32);                          /* extern */

void func_080D404C(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = arg0->unk4;
    if (temp_r0 != 0) {
        func_080D4480(temp_r0, 3);
    }
    func_0800080C(arg0, arg1);
}

