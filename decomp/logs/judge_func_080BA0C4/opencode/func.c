#include "common.h"
s32 rand();                                         /* extern */

void func_080BA0C4(void *arg0) {
    u32 temp_r1;
    u8 temp_r0;
    u8 var_r0;

    temp_r1 = (u32) (0x64 * (0xFFFF & rand())) >> 0x10;
    temp_r0 = arg0->unk22;
    if ((u32) temp_r0 <= 0x50U) {
        var_r0 = arg0->unk2F;
        if (var_r0 != 0) {
            if (temp_r1 <= 0x1DU) {
                var_r0 = 0;
            } else if (temp_r1 <= 0x2CU) {
                var_r0 = 1;
            } else if (temp_r1 <= 0x3BU) {
                var_r0 = 2;
            } else {
                goto block_39;
            }
        } else if (temp_r1 > 0x22U) {
            if (temp_r1 <= 0x36U) {
                var_r0 = 1;
            } else if (temp_r1 <= 0x4AU) {
                var_r0 = 2;
            } else {
                goto block_39;
            }
        }
        goto block_40;
    }
    if ((u32) (u8) (temp_r0 - 0x51) <= 0x9FU) {
        var_r0 = arg0->unk2F;
        if (var_r0 != 0) {
            if (temp_r1 <= 0x22U) {
                var_r0 = 0;
            } else if (temp_r1 <= 0x2CU) {
                var_r0 = 1;
            } else if (temp_r1 <= 0x36U) {
                var_r0 = 2;
            } else {
                goto block_39;
            }
        } else if (temp_r1 > 0x27U) {
            if (temp_r1 <= 0x36U) {
                var_r0 = 1;
            } else if (temp_r1 <= 0x45U) {
                var_r0 = 2;
            } else {
                goto block_39;
            }
        }
        goto block_40;
    }
    if ((u32) temp_r0 > 0xF0U) {
        var_r0 = arg0->unk2F;
        if (var_r0 != 0) {
            if (temp_r1 <= 0x27U) {
                var_r0 = 0;
            } else if (temp_r1 <= 0x2CU) {
                var_r0 = 1;
            } else if (temp_r1 <= 0x31U) {
                var_r0 = 2;
            } else {
                goto block_39;
            }
        } else if (temp_r1 > 0x2CU) {
            if (temp_r1 <= 0x36U) {
                var_r0 = 1;
            } else if (temp_r1 <= 0x40U) {
                var_r0 = 2;
            } else {
block_39:
                var_r0 = 3;
            }
        }
block_40:
        arg0->unk10 = (s32) var_r0;
    }
}

