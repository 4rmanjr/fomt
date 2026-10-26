#include "common.h"
s32 func_0803240C(s32 *, void *);                     /* extern */

void *func_08024BFC(void *arg0, void *arg1) {
    s32 sp0;
    s32 sp8;
    s16 temp_r1;
    s16 temp_r2;
    s32 var_r0;
    s32 var_r1;

    if ((arg1->unk14->unk40(arg1) << 0x18) != 0) {
        temp_r1 = arg1->unkA;
        temp_r2 = arg1->unkE;
        sp0.unk0 = (s16) (temp_r1 - 7);
        sp0.unk2 = (s16) (temp_r2 - 9);
        sp0.unk4 = (s16) (temp_r1 + 7);
        sp0.unk6 = (s16) (temp_r2 + 5);
        var_r0 = sp0;
        var_r1 = sp4;
    } else {
        func_0803240C(&sp8, arg1);
        var_r0 = sp8;
        var_r1 = spC;
    }
    arg0->unk0 = var_r0;
    arg0->unk4 = var_r1;
    return arg0;
}

