#include "common.h"
s32 func_0803BCF8();                                  /* extern */

void func_0803BD60(void *arg0) {
    func_0803BCF8();
    arg0->unkB = (u8) (arg0->unkB | 0x80);
    arg0->unkC = (u8) ((-0x80 & arg0->unkC) | 1);
    arg0->unkD = 9;
}

