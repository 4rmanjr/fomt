#include "common.h"
s32 __builtin_new(s32);                               /* extern */
s32 func_080E2DC8();                                /* extern */
extern ? vtable_unk_080E7B5C;

void *func_080756B0(void *arg0) {
    arg0->unk4 = &vtable_unk_080E7B5C;
    __builtin_new(0x28);
    arg0->unk0 = func_080E2DC8();
    return arg0;
}

