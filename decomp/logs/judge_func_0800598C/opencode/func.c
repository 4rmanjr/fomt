#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_08004EFC(s32, s32, s32, ?, s32);             /* extern */
extern ? vtable_unk_080E5AA4;

void *func_0800598C(void *arg0, s32 arg1, ? arg2, ? arg3, s32 arg4) {
    arg0->unk0 = &vtable_unk_080E5AA4;
    arg0->unk4 = func_08004EFC(__builtin_new(0x1A78), arg1, arg2, arg3, arg4);
    return arg0;
}

