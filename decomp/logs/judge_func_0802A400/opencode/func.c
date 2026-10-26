#include "common.h"
s32 GetFatigueGain__C4Food(s32);                    /* extern */
u16 GetIconId__C4Food(s32);                         /* extern */
s32 GetStaminaGain__C4Food(s32);                    /* extern */
s32 IsDrink__C4Food(s32);                           /* extern */
s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */
s32 func_0805E850(void *, s32, u16);                  /* extern */

void func_0802A400(void *arg0, s32 arg1) {
    s32 temp_r4_2;
    s8 *var_r1;
    s8 var_r0;
    u16 temp_r4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r5;
    void *temp_r5_2;

    arg0->unkA4 = 1;
    temp_r0 = (arg0 + 0xA4) - 0x1C;
    temp_r0->unk0 = 1;
    temp_r0->unk1 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unk14 = 0x150000;
    temp_r5 = arg0->unk10;
    if (temp_r5 != 0) {
        temp_r4 = GetIconId__C4Food(arg1);
        func_0805E850(temp_r5 + 0xB4, (**temp_r5->unk0)->unk64(), temp_r4);
        temp_r0_2 = temp_r5 + 0xC8;
        temp_r5->unkC8 = 1;
        temp_r0_2->unk2 = 0;
        (temp_r0_2 + 2)->unk1 = 1;
    }
    temp_r5_2 = arg0->unk14;
    temp_r4_2 = GetStaminaGain__C4Food(arg1);
    temp_r5_2->unk64(arg0, temp_r4_2, GetFatigueGain__C4Food(arg1));
    if (IsDrink__C4Food(arg1) == 0) {
        var_r1 = arg0 + 0x3C;
        var_r0 = 0x36;
    } else {
        var_r1 = arg0 + 0x3C;
        var_r0 = 0x37;
    }
    *var_r1 = var_r0;
    arg0->unkC0 = 1;
    SetAnim__12AActorEntityUi(arg0, 0x146);
}

