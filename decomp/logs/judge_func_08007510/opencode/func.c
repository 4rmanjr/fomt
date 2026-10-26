#include "common.h"
extern void *gUnk_03000404;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
} GenObj;
u16 func_08007510(s32 arg1) {
    s32 temp_r1_3;
    s32 var_r3;
    u32 temp_r1_2;
    u32 var_r0;
    void *temp_r1;

    if (arg1 != 0) {
        temp_r1_2 = (u32) (arg1 << 0x1C) >> 0x1C;
        var_r0 = 0;
        if (temp_r1_2 <= 0xFU) {
            temp_r1_3 = gUnk_03000404->unk44 & (1 << temp_r1_2);
            var_r0 = (u32) ((0 - temp_r1_3) | temp_r1_3) >> 0x1F;
        }
        if (var_r0 != 0) {
            temp_r1 = gUnk_03000404 + ((temp_r1_2 * 4) + 4);
            var_r3 = 0;
            if (((u32) (arg1 << 0xC) >> 0x10) == temp_r1->unk2) {
                var_r3 = 1;
            }
            if (var_r3 != 0) {
                return temp_r1->unk0;
            }
            goto block_8;
        }
        goto block_8;
    }
block_8:
    return 0U;
}

