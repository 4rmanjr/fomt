#include "common.h"
typedef struct GenObj {
    u8 _pad0[1094];
    s32 unk446;
} GenObj;
void func_0806E78C(GenObj *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    *(arg0 + 0x46 + (arg0->unk446 * 8)) = arg1;
    *(arg0 + 0x48 + (arg0->unk446 * 8)) = arg2;
    *(arg0 + 0x4A + (arg0->unk446 * 8)) = arg3;
    *(arg0 + 0x4C + (arg0->unk446 * 8)) = (s16) arg4;
    arg0->unk446 = (s16) ((u16) arg0->unk446 + 1);
}

