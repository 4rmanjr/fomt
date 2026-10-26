#include "common.h"
s32 func_080A0AF4(s32 arg0, u32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 1:
        return arg0 + 0x50;
    case 2:
        return arg0 + 0x58;
    default:
        return arg0 + 0x48;
    }
}

