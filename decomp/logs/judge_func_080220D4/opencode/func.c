#include "common.h"
u8 func_080220D4(void *arg0) {
    s32 temp_r1;
    void *temp_r0;

    temp_r0 = arg0->unk34;
    temp_r1 = temp_r0->unk20;
    switch (temp_r1) {                              /* irregular */
    case 0:
        return temp_r0->unk26;
    case 1:
        return 2U;
    case 2:
        return 1U;
    default:
        return 0U;
    }
}

