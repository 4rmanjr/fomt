#include "common.h"
s32 func_080378FC(u32 arg1) {
    switch (arg1) {
    default:
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
        return 0;
    case 1:
        return 0x8000;
    case 2:
    case 11:
        return 0x10000;
    }
}

