#include "common.h"
extern void *gUnk_03000404;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
} GenObj;
s32 func_0800736C(void) {
    s32 temp_r4;
    s32 var_r2;
    u32 var_r0;
    GenObj *temp_r1;
    GenObj *temp_r3;

    temp_r3 = gUnk_03000404->unk0;
    if ((temp_r3 != 0) && (gUnk_03000404->unk0 = (void *) temp_r3->unk0, (temp_r3 != 0))) {
        temp_r4 = (s32) ((temp_r3 - 4) - gUnk_03000404) >> 2;
        if ((u32) temp_r4 <= 0xFU) {
            gUnk_03000404->unk44 = (s32) (gUnk_03000404->unk44 | (1 << (0x1F & temp_r4)));
        }
        temp_r1 = gUnk_03000404 + 0x48;
        gUnk_03000404->unk48 = (u16) (gUnk_03000404->unk48 + 1);
        temp_r3->unk0 = 1;
        var_r0 = temp_r1->unk2 + 1;
        if (var_r0 > 0xFFFFU) {
            var_r0 = 1;
        }
        temp_r3->unk2 = (u16) var_r0;
        temp_r1->unk2 = (u16) var_r0;
        var_r2 = (temp_r4 & 0xF) | ((u16) temp_r3->unk2 * 0x10);
    } else {
        var_r2 = 0;
    }
    return var_r2;
}

