#include "common.h"
void func_080A03A4(void *arg0, s32 arg1) {
    arg0->unk3 = (u8) ((-0x1D & arg0->unk3) | ((arg1 & 7) * 4));
}

