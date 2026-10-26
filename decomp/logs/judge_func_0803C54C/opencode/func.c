#include "common.h"
s32 func_0803BDFC(void *, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_0803C5B0(void *);                            /* extern */
extern ? vtable_unk_080E77E0;

void *func_0803C54C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0803BDFC(arg0, 0x80, 0x88, 0x70, 0x18, arg1, arg2, arg3, arg4);
    arg0->unk4 = &vtable_unk_080E77E0;
    func_0803C5B0(arg0 + 8);
    return arg0;
}

