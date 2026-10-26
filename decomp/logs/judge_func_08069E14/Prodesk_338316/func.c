#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0805FD78(s32, s32, u8);                    /* extern */
extern ? vtable_unk_080E7A98;

void *func_08069E14(void *arg0, s32 *arg1, s32 arg2, u8 arg3) {
    arg0->unk0 = &vtable_unk_080E7A98;
    arg0->unk4 = func_0805FD78(__builtin_new(0x164), arg2, arg3);
    *arg1 = 0;
    arg0->unk8 = (s32) *arg1;
    return arg0;
}

