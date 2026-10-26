#include "common.h"
void func_080522D8(s32 arg0, void *arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = arg0 + (arg2 * 4);
    arg1->unk0 = (u8) temp_r0->unk0;
    arg1->unk2 = (u16) temp_r0->unk2;
}

