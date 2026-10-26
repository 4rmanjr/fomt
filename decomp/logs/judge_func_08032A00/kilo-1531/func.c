#include "common.h"
s32 func_080324BC(void *, s32, s32, s32, s32, s32, s32); /* extern */
extern ? vtable_unk_080E6864;

void *func_08032A00(void *arg0, ? arg1) {
    s8 spC;

    spC = 0;
    func_080324BC(arg0, arg1, 6, 0x20, 1, 0, 0);
    arg0->unk4 = &vtable_unk_080E6864;
    return arg0;
}

