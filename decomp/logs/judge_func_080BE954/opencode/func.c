#include "common.h"
extern ? gUnk_08107DBC;

void func_080BE954(void *arg0) {
s32 sp0;
    s8 *var_r1;
    s8 var_r0;
    u8 temp_r1_2;
    void *temp_r0;
    void *temp_r1;

    temp_r0 = &gUnk_08107DBC + 0xC;
    sp0.unk0 = (s32) gUnk_08107DBC.unk0;
    sp0.unk4 = (s32) gUnk_08107DBC.unk4;
    sp0.unk8 = (s32) gUnk_08107DBC.unk8;
    temp_r1 = &sp0 + 0xC;
    sp0.unkC = (s32) gUnk_08107DBC.unkC;
    temp_r1->unk4 = (s32) temp_r0->unk4;
    temp_r1->unk8 = (s32) temp_r0->unk8;
    temp_r1->unkC = (s32) temp_r0->unkC;
    arg0->unk618 = (s32) *((arg0->unk614 * 4) + sp);
    temp_r1_2 = arg0->unk61C;
    if ((u32) temp_r1_2 <= 2U) {
        var_r1 = arg0 + 0x600;
        var_r0 = 2;
    } else if ((u32) (u8) (temp_r1_2 - 3) <= 2U) {
        var_r1 = arg0 + 0x600;
        var_r0 = 3;
    } else if ((u32) (u8) (temp_r1_2 - 6) <= 2U) {
        var_r1 = arg0 + 0x600;
        var_r0 = 4;
    } else if ((u32) (u8) (temp_r1_2 - 9) <= 1U) {
        var_r1 = arg0 + 0x600;
        var_r0 = 5;
    } else if ((u32) (u8) (temp_r1_2 - 0xB) <= 2U) {
        var_r1 = arg0 + 0x600;
        var_r0 = 7;
    } else if ((u32) (u8) (temp_r1_2 - 0xE) <= 2U) {
        var_r1 = arg0 + 0x600;
        var_r0 = 9;
    } else if ((u32) (u8) (temp_r1_2 - 0x11) <= 2U) {
        var_r1 = arg0 + 0x600;
        var_r0 = 0xA;
    } else {
        var_r1 = arg0 + 0x600;
        var_r0 = 0xB;
    }
    *var_r1 = var_r0;
}

