#include "common.h"
u32 func_080390D0(void *arg0) {
    s32 temp_r1;

    temp_r1 = arg0->unk10;
    return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
}

