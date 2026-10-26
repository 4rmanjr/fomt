#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_08078E40(s32, s32, s32);                   /* extern */
extern ? vtable_unk_080E7BDC;

void *func_0807B038(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &vtable_unk_080E7BDC;
    arg0->unk4 = func_08078E40(__builtin_new(0xA74), arg2, arg3);
    *arg1 = 0;
    arg0->unk8 = (s32) *arg1;
    return arg0;
}

