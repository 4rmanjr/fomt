#include "common.h"
u32 GetCapacity__C4Barn(s32);                       /* extern */
s32 GetCow__4BarnUi(s32, u32);                      /* extern */
s32 GetSheep__4BarnUi(s32, u32);                    /* extern */
s32 IsPregnant__C10BarnAnimal();                    /* extern */

s32 func_080869A0(void *arg0) {
    s32 var_r6;
    u32 var_r5;

    var_r6 = 0;
    var_r5 = 0;
loop_8:
    if (var_r5 < GetCapacity__C4Barn(arg0->unk8 + 0x5F0)) {
        if (GetCow__4BarnUi(arg0->unk8 + 0x5F0, var_r5) != 0) {
            GetCow__4BarnUi(arg0->unk8 + 0x5F0, var_r5);
            goto block_5;
        }
        if (GetSheep__4BarnUi(arg0->unk8 + 0x5F0, var_r5) != 0) {
            GetSheep__4BarnUi(arg0->unk8 + 0x5F0, var_r5);
block_5:
            if ((IsPregnant__C10BarnAnimal() << 0x18) != 0) {
                var_r6 += 1;
            }
        }
        var_r5 += 1;
        goto loop_8;
    }
    return var_r6;
}

