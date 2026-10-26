#include "common.h"
extern ? gUnk_081036D4;
extern ? gUnk_08107094;
extern ? gUnk_081070AC;

void *func_0809C510(void *arg0, s32 *arg1, u32 arg2, u8 arg3) {
    ? *var_r0_2;
    s32 temp_r0_2;
    s32 temp_r1;
    u32 var_r0;
    u8 temp_r3;
    u8 var_r1;
    u8 var_r2;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;

    temp_r3 = arg3;
    var_r0 = 0;
    if (arg2 <= 0xDU) {
        temp_r1 = *arg1 & (1 << (0x1F & arg2));
        var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
    }
    if (var_r0 != 0) {
        if ((arg2 == 0xD) && (temp_r3 != 0)) {
            temp_r0 = &gUnk_081036D4 + 0x9C;
            var_r1 = temp_r0->unk8;
            var_r2 = temp_r0->unk9;
            var_r0_2 = &gUnk_081070AC;
            goto block_11;
        }
        temp_r0_2 = arg2 * 0xC;
        temp_r0_3 = temp_r0_2 + &gUnk_081036D4;
        arg0->unk0 = (s32 *) *(temp_r0_2 + (&gUnk_081036D4 + 4));
        arg0->unk4 = (s32) temp_r0_3->unk8;
        arg0->unk8 = (s32) temp_r0_3->unk9;
    } else {
        if ((arg2 == 0xD) && (temp_r3 != 0)) {
            temp_r0_4 = &gUnk_081036D4 + 0x9C;
            var_r1 = temp_r0_4->unk8;
            var_r2 = temp_r0_4->unk9;
            var_r0_2 = &gUnk_08107094;
        } else {
            temp_r0_5 = (arg2 * 0xC) + &gUnk_081036D4;
            var_r1 = temp_r0_5->unk8;
            var_r2 = temp_r0_5->unk9;
            var_r0_2 = temp_r0_5->unk0;
        }
block_11:
        arg0->unk0 = var_r0_2;
        arg0->unk4 = (s32) var_r1;
        arg0->unk8 = (s32) var_r2;
    }
    return arg0;
}

