#include "common.h"
s32 __builtin_new(s32);                               /* extern */
s32 func_080773E8();                                /* extern */
extern ? vtable_unk_080E7BA4;

void *func_08077C40(void *arg0, s32 *arg1) {
    s32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7BA4;
    __builtin_new(0x730);
    arg0->unk4 = func_080773E8();
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}

