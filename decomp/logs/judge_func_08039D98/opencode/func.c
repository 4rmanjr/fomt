#include "common.h"
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    u8 _pad10[36];
    void *unk34;
} GenObj;
u32 func_08039D98(GenObj *arg0) {
    s32 temp_r1;

    temp_r1 = arg0->unk34->unkC ^ 4;
    return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
}

