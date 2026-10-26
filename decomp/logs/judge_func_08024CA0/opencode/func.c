#include "common.h"
s32 func_08024CA0(void *arg0) {
    u8 temp_r0;

    if ((arg0->unk14->unk28(arg0) << 0x18) == 0) {
        temp_r0 = arg0->unk3C;
        if (((s32) temp_r0 <= 0x2A) && ((s32) temp_r0 >= 0x24)) {
            return 1;
        }
    }
    return 0;
}

