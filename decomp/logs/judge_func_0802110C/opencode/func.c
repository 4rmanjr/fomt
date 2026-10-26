#include "common.h"
s32 GetGrowthStage__C3Dog(s32);                     /* extern */
extern s32 gUnk_080F0908;

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
} GenObj;
u16 func_0802110C(GenObj *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1 * 2;
    if (GetGrowthStage__C3Dog(arg0->unk34) == 1) {
        var_r4 += 0x1A;
    }
    return *((u8 *)var_r4 + &gUnk_080F0908);
}

