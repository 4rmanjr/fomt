#include "common.h"
extern void *gUnk_03000404;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
} GenObj;
void func_080073E0(s32 arg1) {
    s32 temp_r1;
    s32 var_r2;
    u16 temp_r0;
    u16 temp_r0_2;
    u32 temp_r2;
    u32 var_r0;
    void *temp_r1_2;

    if (arg1 != 0) {
        temp_r2 = (u32) (arg1 << 0x1C) >> 0x1C;
        var_r0 = 0;
        if (temp_r2 <= 0xFU) {
            temp_r1 = gUnk_03000404->unk44 & (1 << temp_r2);
            var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if (var_r0 != 0) {
            temp_r1_2 = gUnk_03000404 + ((temp_r2 * 4) + 4);
            var_r2 = 0;
            if (((u32) (arg1 << 0xC) >> 0x10) == temp_r1_2->unk2) {
                var_r2 = 1;
            }
            if (var_r2 != 0) {
                temp_r0 = temp_r1_2->unk0 - 1;
                temp_r1_2->unk0 = temp_r0;
                temp_r0_2 = temp_r0;
                if (temp_r0_2 == 0) {
                    temp_r1_2->unk2 = temp_r0_2;
                    temp_r1_2->unk0 = (void *) gUnk_03000404->unk0;
                    gUnk_03000404->unk0 = temp_r1_2;
                    if (temp_r2 <= 0xFU) {
                        gUnk_03000404->unk44 = (s32) (gUnk_03000404->unk44 & ~(1 << temp_r2));
                    }
                    gUnk_03000404->unk48 = (u16) (gUnk_03000404->unk48 - 1);
                }
            }
        }
    }
}

