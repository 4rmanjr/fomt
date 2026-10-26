#include "common.h"
s32 func_08021130(void *arg0, u32 arg1) {
    s32 sp0;
    s32 sp8;
    s32 spC;
    s16 var_r0;
    s16 var_r1;
    s32 var_r2;
    u8 temp_r0;

    switch (arg1) {
    default:
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        return 0;
    case 1:
        return 0x8000;
    case 2:
        return 0x10000;
    case 12:
        arg0->unk14->unkC(&sp0, arg0);
        sp8 = sp0;
        spC = sp4;
        var_r2 = 0x10;
        temp_r0 = arg0->unk20;
        if ((s32) temp_r0 >= 0) {
            if ((s32) temp_r0 > 1) {
                if ((s32) temp_r0 > 3) {

                } else {
                    var_r0 = sp8.unk4;
                    var_r1 = sp8.unk0;
                    goto block_11;
                }
            } else {
                var_r0 = sp8.unk6;
                var_r1 = sp8.unk2;
block_11:
                var_r2 = (var_r0 - var_r1) + 0x10;
            }
        }
        return (s32) (var_r2 << 0x10) / 30;
    }
}

