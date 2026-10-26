#include "common.h"
s32 GetUpgradeLevel__C9FarmHouse(s32);              /* extern */
u8 IsFireplaceLighted__C9FarmHouse(s32);            /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 func_0800E324(void *);                          /* extern */
void *func_080A4A00(s32, s32, u32, void *, s32, s32); /* extern */

void func_0801F14C(void *arg0) {
    s8 sp8;
    s32 temp_r1_2;
    s32 temp_r4;
    u32 temp_r0;
    u32 var_r5;
    u8 temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r1_3;

    arg0->unk1060 = 0;
    temp_r1 = arg0->unk105C;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk24->unk8(temp_r1, 3);
    }
    arg0->unk105C = 0;
    temp_r0 = arg0->unk0->unk14(arg0) - 0xA;
    switch (temp_r0) {                              /* irregular */
    case 19:
        if (GetUpgradeLevel__C9FarmHouse(arg0->unk1038 + 0x1F4) == 2) {
            temp_r0_2 = IsFireplaceLighted__C9FarmHouse(arg0->unk1038 + 0x1F4);
            var_r5 = (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F;
block_12:
            temp_r4 = __builtin_new(0x40);
            temp_r1_2 = arg0->unk0->unk60(arg0);
            sp8 = 0;
            temp_r0_3 = func_080A4A00(temp_r4, temp_r1_2, var_r5, arg0, 2, 0x1B);
            temp_r1_3 = arg0->unk105C;
            if ((temp_r0_3 != temp_r1_3) && (temp_r1_3 != 0)) {
                temp_r1_3->unk24->unk8(temp_r1_3, 3);
            }
            arg0->unk105C = temp_r0_3;
        }
        return;
    case 8:
        var_r5 = (u8) arg0->unk1038->unk3 >> 7;
        goto block_12;
    case 29:
        var_r5 = (u32) (arg0->unk1038->unk4 << 0x1F) >> 0x1F;
        goto block_12;
    case 0:
    case 17:
        var_r5 = 0;
        if (func_0800E324(arg0->unk1038 + 0x10) == 3) {
            var_r5 = 1;
        }
        goto block_12;
    }
}

