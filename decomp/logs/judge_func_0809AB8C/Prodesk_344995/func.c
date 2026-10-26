#include "common.h"
s32 func_0809AE6C(void *);                            /* extern */

void *func_0809AB8C(void *arg0) {
    arg0->unk0 = 0x1F4;
    arg0->unk4 = (u8) (-2 & arg0->unk4 & ~2);
    arg0->unk8 = 0;
    arg0->unkFC = 0;
    arg0->unk120 = 0;
    arg0->unk124 = 0;
    arg0->unk128 = 0;
    arg0->unk12C = 0;
    func_0809AE6C(arg0);
    return arg0;
}

