#include "common.h"
u16 func_08033784(void *arg0, void **arg2) {
    s32 var_r1;
    u32 temp_r0_2;
    void *temp_r0;

    temp_r0_2 = (u32) (arg0->unk0 << 0x1C) >> 0x1C;
    switch (temp_r0_2) {
    case 1:
    case 2:
        return 2U;
    case 3:
        return 0x11U;
    case 4:
    case 5:
        return 0x25U;
    case 6:
        var_r1 = arg0->unk1 + 0x36;
block_8:
        temp_r0 = (*arg2)->unk44(arg2, var_r1);
        if (temp_r0 == 0) {
        default:
            return 0x234U;
        }
        return temp_r0->unk4;
    case 7:
        var_r1 = arg0->unk1 + 0x2E;
        goto block_8;
    case 8:
        var_r1 = arg0->unk1 + 0x4C;
        goto block_8;
    }
}

