#include "common.h"
s32 func_080D06D0();                                /* extern */

s32 func_080E3994(void *arg0) {
    if (((arg0->unk1B8 != 0) && ((1 & (arg0->unk0->unk108(arg0) >> 8)) || (2 & (arg0->unk0->unk108(arg0) >> 8)))) || (func_080D06D0() != 0xB)) {
        return 0;
    }
    return 1;
}

