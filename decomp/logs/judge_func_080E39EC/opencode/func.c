#include "common.h"
s32 func_080D06B4();                                /* extern */

u32 func_080E39EC(void *arg0) {
    s32 temp_r0;

    if ((arg0->unk1B8 != 0) && ((1 & (arg0->unk0->unk108(arg0) >> 8)) || (2 & (arg0->unk0->unk108(arg0) >> 8)))) {
        return 1U;
    }
    temp_r0 = func_080D06B4();
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}

