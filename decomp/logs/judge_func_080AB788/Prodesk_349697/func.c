#include "common.h"
s32 rand();                                         /* extern */

u32 func_080AB788(s32 arg0) {
    return (u32) (arg0 * (0xFFFF & rand())) >> 0x10;
}

