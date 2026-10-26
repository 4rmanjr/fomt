#include "common.h"
s32 func_080D06D0();                                /* extern */

s32 func_080E3938(void *arg0) {
    s32 temp_r0;

    if (arg0->unk1B8 != 0) {
        if (!(1 & (arg0->unk0->unk104(arg0) >> 8))) {
            if (!(2 & (arg0->unk0->unk104(arg0) >> 8))) {
                goto block_3;
            }
            goto block_6;
        }
        goto block_5;
    }
block_3:
    temp_r0 = func_080D06D0();
    if ((temp_r0 == 0) || (temp_r0 == 0xB)) {
block_5:
        return 0;
    }
block_6:
    return 1;
}

