#include "common.h"
void func_0809EE20(void *arg0, s32 arg1, s32 arg2) {
    arg0->unk14 = (u8) ((-0x40 & arg0->unk14) | (arg1 & 0x3F));
    arg0->unk14 = (s16) ((0xFFFFFE3F & (u16) arg0->unk14) | ((arg2 & 7) << 6));
}

