#include "common.h"
s32 func_0803B6B8(s32, s32, s32 *);                     /* extern */
s32 func_0804EC84(s32, s32 *, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[168];
    struct GenObj *unkB0;
} GenObj;
void func_08012ADC(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
s32 sp0;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    func_0804EC84(arg2, &sp0, arg3);
    func_0803B6B8(temp_r4->unkB0, arg1, &sp0);
}

