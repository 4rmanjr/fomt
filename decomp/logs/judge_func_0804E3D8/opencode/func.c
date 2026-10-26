#include "common.h"
s32 GetCapacity__C4Barn(s32);                       /* extern */
s32 GetCapacity__C4Coop(s32);                       /* extern */
s32 GetChicken__4CoopUi(s32, s32);                  /* extern */
s32 GetCow__4BarnUi(s32, s32);                      /* extern */
s32 GetHorse__4Farm(s32);                           /* extern */
s32 GetSheep__4BarnUi(s32, s32);                    /* extern */

typedef struct GenObj {
    u8 _pad0[848];
    s32 unk350;
} GenObj;
s32 func_0804E3D8(GenObj *arg0, u32 arg1, s32 arg2) {
    s32 var_r6;

    var_r6 = 0;
    switch (arg1) {
    case 0:
        var_r6 = GetHorse__4Farm(arg0->unk350 + 0x14);
        break;
    case 1:
        if (arg2 < GetCapacity__C4Barn(arg0->unk350 + 0x5F0)) {
            var_r6 = GetCow__4BarnUi(arg0->unk350 + 0x5F0, arg2);
        }
        break;
    case 2:
        if (arg2 < GetCapacity__C4Barn(arg0->unk350 + 0x5F0)) {
            var_r6 = GetSheep__4BarnUi(arg0->unk350 + 0x5F0, arg2);
        }
        break;
    case 3:
        if (arg2 < GetCapacity__C4Coop(arg0->unk350 + 0x410)) {
            var_r6 = GetChicken__4CoopUi(arg0->unk350 + 0x410, arg2);
        }
        break;
    case 4:
        var_r6 = arg0->unk350 + 0x1C70;
        break;
    }
    return var_r6;
}

