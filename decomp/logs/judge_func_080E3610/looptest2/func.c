#include "common.h"
s32 func_080088CC(s32);                             /* extern */

u32 func_080E3610(s32 arg0) {
    return (u32) (0 - (u8) (func_080088CC(arg0 - 8) & 2)) >> 0x1F;
}

