#include "common.h"
u8 func_080AB788(s32);                              /* extern */
extern s32 gUnk_080F16C2;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk6;
} GenObj;
void func_0803A144(GenObj *arg1, u8 arg2) {
    s8 temp_r0;
    u8 var_r0;

    var_r0 = arg2;
    if ((s32) (arg2 << 0x18) < 0) {
        var_r0 = func_080AB788(3);
    }
    temp_r0 = (s8) var_r0;
    arg1->unk4 = (u16) *((temp_r0 * 4) + &gUnk_080F16C2);
    arg1->unk6 = (u16) *((((temp_r0 * 2) + 1) * 2) + &gUnk_080F16C2);
}

