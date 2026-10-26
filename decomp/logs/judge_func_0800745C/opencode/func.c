#include "common.h"
extern void *gUnk_03000404;

s32 func_0800745C(s32 arg1) {
    s32 temp_r1_2;
    s32 var_r2;
    u16 temp_r0;
    u16 temp_r2;
    u32 temp_r1;
    u32 var_r0;
    void *temp_r1_3;

    if (arg1 != 0) {
        temp_r1 = (u32) (arg1 << 0x1C) >> 0x1C;
        var_r0 = 0;
        if (temp_r1 <= 0xFU) {
            temp_r1_2 = gUnk_03000404->unk44 & (1 << temp_r1);
            var_r0 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
        }
        if (var_r0 != 0) {
            temp_r1_3 = gUnk_03000404 + ((temp_r1 * 4) + 4);
            var_r2 = 0;
            if (((u32) (arg1 << 0xC) >> 0x10) == temp_r1_3->unk2) {
                var_r2 = 1;
            }
            if (var_r2 != 0) {
                temp_r2 = temp_r1_3->unk0;
                temp_r0 = temp_r2 + 1;
                temp_r1_3->unk0 = temp_r0;
                if ((temp_r0 << 0x10) != 0) {
                    return arg1;
                }
                temp_r1_3->unk0 = temp_r2;
                goto block_10;
            }
            goto block_10;
        }
        goto block_10;
    }
block_10:
    return 0;
}

