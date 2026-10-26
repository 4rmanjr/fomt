#include "common.h"
void func_0809ED64(void *arg0) {
    s32 var_r1;
    u32 temp_r0;

    temp_r0 = ((u32) (arg0->unk14 << 0x1A) >> 0x1A) - 4;
    switch (temp_r0) {
    case 0:
        var_r1 = 2;
block_8:
        arg0->unk15 = (u8) (arg0->unk15 | var_r1);
        break;
    case 5:
        var_r1 = 4;
        goto block_8;
    case 10:
        var_r1 = 8;
        goto block_8;
    case 15:
        var_r1 = 0x10;
        goto block_8;
    case 20:
        var_r1 = 0x20;
        goto block_8;
    case 25:
        var_r1 = 0x40;
        goto block_8;
    }
    arg0->unk14 = (u8) (-0x40 & arg0->unk14);
}

