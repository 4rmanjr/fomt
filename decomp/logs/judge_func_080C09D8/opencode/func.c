#include "common.h"
s32 rand();                                         /* extern */
extern ? gUnk_08107FB0;

u16 func_080C09D8(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    u16 *var_r1;
    u16 var_r0;

    temp_r0 = arg0->unk5A0;
    if (temp_r0 != 0) {
        if (temp_r0 != 3) {
            var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk6;
        } else {
            temp_r0_2 = arg0->unk5A4;
            if (temp_r0_2 != 0) {
                if (temp_r0_2 != 1) {
                    var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk6;
                } else if (arg0->unk60F != 0) {
                    arg0->unk60F = 0U;
                    var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk6;
                } else if (arg0->unk60A != 0) {
                    var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk0;
                } else {
                    var_r1 = ((((u32) (rand() << 0x10) >> 0x1F) + 1) * 2) + &gUnk_08107FB0;
                    goto block_17;
                }
            } else {
                var_r1 = (((arg0->unk609 * 4) + (arg0->unk5AC + 3)) * 2) + &gUnk_08107FB0;
                goto block_17;
            }
        }
    } else if (arg0->unk612 != 0) {
        var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk0;
    } else if (arg0->unk611 != 0) {
        var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk4;
    } else {
        var_r1 = (((arg0->unk609 * 4) + (arg0->unk5AC + 3)) * 2) + &gUnk_08107FB0;
block_17:
        var_r0 = (arg0->unk614 * 0x54) + *var_r1;
    }
    return var_r0;
}

