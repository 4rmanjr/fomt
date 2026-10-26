#include "common.h"
u8 func_08024020(void *arg0) {
    s32 temp_r1;
    u8 var_r1;
    void *temp_r0;

    temp_r0 = arg0->unk34;
    temp_r1 = temp_r0->unk28;
    if (temp_r1 != 1) {
        if (temp_r1 <= 1) {
            if (temp_r1 != 0) {
                goto block_5;
            }
            return temp_r0->unk2E;
        }
        if (temp_r1 > 3) {
block_5:
            return 0U;
        }
        return 1U;
    }
    var_r1 = 1;
    if (0x7F & temp_r0->unk2E) {
        var_r1 = 6;
    }
    return var_r1;
}

