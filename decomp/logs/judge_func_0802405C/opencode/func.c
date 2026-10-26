#include "common.h"
s32 GetDaysPregnant__C10BarnAnimal(s32);            /* extern */
s32 GetGrowthStage__C5Sheep(s32);                   /* extern */
s32 IsPregnant__C10BarnAnimal(s32);                 /* extern */
s32 IsSheared__C5Sheep(s32);                        /* extern */
extern s32 gUnk_080F0E34;

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
} GenObj;
u16 func_0802405C(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    u32 var_r6;

    var_r6 = 0;
    if ((IsPregnant__C10BarnAnimal(arg0->unk34) << 0x18) != 0) {
        temp_r0 = GetDaysPregnant__C10BarnAnimal(arg0->unk34);
        var_r6 = (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
    }
    temp_r4 = arg1 * 2;
    if (var_r6 != 0) {
        var_r0 = temp_r4 + 0x2A;
    } else if ((IsSheared__C5Sheep(arg0->unk34) << 0x18) != 0) {
        var_r0 = temp_r4 + 0x1C;
    } else {
        var_r0 = temp_r4 + (GetGrowthStage__C5Sheep(arg0->unk34) * 0xE);
    }
    return *(&gUnk_080F0E34 + var_r0);
}

