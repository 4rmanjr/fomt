#include "common.h"
void func_08050EBC(void **arg0, s32 arg1) {
    u8 temp_r4;
    void *temp_r3;

    temp_r3 = *arg0;
    temp_r4 = temp_r3->unk550;
    temp_r3->unk550 = (u8) ((-0x40 & temp_r4) | ((arg1 | ((u32) (temp_r4 << 0x1A) >> 0x1A)) & 0x3F));
}

