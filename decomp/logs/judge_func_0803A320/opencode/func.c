#include "common.h"
extern s32 gUnk_080F16D2;

s16 func_0803A320(s32 arg1) {
    return *(((s32) (arg1 << 0x10) >> 0xF) + &gUnk_080F16D2);
}

