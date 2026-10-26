#include "common.h"
typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
u32 func_080390D0(GenObj *arg0) {
    s32 temp_r1;

    temp_r1 = arg0->unk10;
    return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
}

