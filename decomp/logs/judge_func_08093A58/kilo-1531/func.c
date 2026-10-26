#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0809323C(s32, s32);                        /* extern */
extern ? vtable_unk_080E8018;

void *func_08093A58(void *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r1;

    arg0->unk0 = &vtable_unk_080E8018;
    arg0->unk4 = func_0809323C(__builtin_new(0x3F0), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}

