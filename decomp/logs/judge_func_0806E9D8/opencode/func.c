#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0806D990(s32, s32);                        /* extern */
extern ? vtable_unk_080E7AD0;

void *func_0806E9D8(void *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E7AD0;
    arg0->unk4 = func_0806D990(__builtin_new(0x454), arg1);
    return arg0;
}

