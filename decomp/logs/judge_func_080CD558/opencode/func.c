#include "common.h"
extern s32 gUnk_08117838;

void func_080CD558(s32 *arg0) {
    *arg0 = (gUnk_08117838 & 0xFFFFFF00) | (u8) (gUnk_08117838 + 0x78);
}

