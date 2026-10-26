#include "common.h"
s32 func_08033B84(void *, u8, s32, s32);              /* extern */

void func_0801223C(void *arg0, s32 arg2, s32 arg3) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        func_08033B84(temp_r0, temp_r0->unk30, temp_r0->unkA + arg2, temp_r0->unkE + arg3);
    }
}

