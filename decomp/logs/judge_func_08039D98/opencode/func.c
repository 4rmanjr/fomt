#include "common.h"
u32 func_08039D98(void *arg0) {
    s32 temp_r1;

    temp_r1 = arg0->unk34->unkC ^ 4;
    return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
}

