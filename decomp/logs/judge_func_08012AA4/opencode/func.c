#include "common.h"
s32 func_0803B6B8(s32, s32, ? *);                     /* extern */
s32 func_0804EC84(s32, ? *, s32);                     /* extern */

void func_08012AA4(void *arg0, s32 arg1, s32 arg2) {
s32 sp0;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    func_0804EC84(arg2, &sp0, 0);
    func_0803B6B8(temp_r4->unkB0, arg1, &sp0);
}

