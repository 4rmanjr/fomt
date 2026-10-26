#include "common.h"
s32 memcpy(void *, s32, s32);                           /* extern */

void func_080ADACC(s32 arg0, ? arg1, s32 arg2, u8 arg3) {
    void *temp_r4;

    temp_r4 = arg0 + 0x1BC + (arg2 * 0x84);
    memcpy(temp_r4, arg1, 0x20);
    temp_r4->unk82 = 1;
    temp_r4->unk83 = arg3;
}

