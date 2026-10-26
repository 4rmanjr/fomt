#include "common.h"
typedef struct GenObj {
    u8 _pad0[1360];
    s32 unk550;
} GenObj;
void func_08050EBC(void **arg0, s32 arg1) {
    u8 temp_r4;
    GenObj *temp_r3;

    temp_r3 = *arg0;
    temp_r4 = temp_r3->unk550;
    temp_r3->unk550 = (u8) ((-0x40 & temp_r4) | ((arg1 | ((u32) (temp_r4 << 0x1A) >> 0x1A)) & 0x3F));
}

