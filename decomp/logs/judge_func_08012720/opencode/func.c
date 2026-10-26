#include "common.h"
s32 func_08050E68(s32);                               /* extern */

void func_08012720(void *arg0) {
    s32 temp_r3;
    void *temp_r2;

    temp_r2 = arg0->unk4;
    temp_r3 = temp_r2->unkAC;
    if ((temp_r3 != 0) && ((s32) ((*((temp_r2 + 0xAC) - 0x20))->unk2210 << 0x1C) < 0)) {
        func_08050E68(temp_r3);
    }
}

