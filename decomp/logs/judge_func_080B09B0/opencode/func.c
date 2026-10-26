#include "common.h"
extern ? gUnk_0810756C;

void func_080B09B0(void *arg0) {
s32 sp0;
    s8 *var_r1;
    s8 var_r0;
    u8 temp_r1_2;
    void *temp_r0;
    void *temp_r1;

    temp_r0 = &gUnk_0810756C + 0xC;
    sp0.unk0 = (s32) gUnk_0810756C.unk0;
    sp0.unk4 = (s32) gUnk_0810756C.unk4;
    sp0.unk8 = (s32) gUnk_0810756C.unk8;
    temp_r1 = &sp0 + 0xC;
    sp0.unkC = (s32) gUnk_0810756C.unkC;
    temp_r1->unk4 = (s32) temp_r0->unk4;
    temp_r1->unk8 = (s32) temp_r0->unk8;
    temp_r1->unkC = (s32) temp_r0->unkC;
    arg0->unk934 = (s32) *((arg0->unk930 * 4) + sp);
    temp_r1_2 = arg0->unk938;
    if ((u32) temp_r1_2 <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0xA;
    } else if ((u32) (u8) (temp_r1_2 - 3) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0xF;
    } else if ((u32) (u8) (temp_r1_2 - 6) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x14;
    } else if ((u32) (u8) (temp_r1_2 - 9) <= 1U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x1E;
    } else if ((u32) (u8) (temp_r1_2 - 0xB) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x23;
    } else if ((u32) (u8) (temp_r1_2 - 0xE) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x2D;
    } else if ((u32) (u8) (temp_r1_2 - 0x11) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x37;
    } else {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x3C;
    }
    *var_r1 = var_r0;
}

