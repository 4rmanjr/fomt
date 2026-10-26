#include "common.h"
s32 func_0809EEA4(void *arg0, u32 arg1) {
    if ((arg1 < (u32) arg0->unk16) && !(arg0->unk14 & (1 << arg1))) {
        return 1;
    }
    return 0;
}

