#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_080C0DCC(s32, s32);                        /* extern */
extern ? vtable_unk_080E8560;

void *func_080C7EA8(void *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E8560;
    arg0->unk4 = func_080C0DCC(__builtin_new(0x98C), arg1);
    return arg0;
}

