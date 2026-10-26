#include "common.h"
u8 func_080E38B0(void *arg0) {
    s32 temp_r2;

    if (arg0->unk1B8 != 0) {
        return arg0->unk1BA;
    }
    temp_r2 = arg0->unk14->unk4;
    if ((temp_r2 != 0) && (temp_r2 != arg0->unk18)) {
        return 1U;
    }
    return 0U;
}

