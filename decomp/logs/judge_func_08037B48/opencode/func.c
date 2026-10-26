#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_08037008(void *, s32, s32, s32, s32);        /* extern */
extern ? vtable_unk_080E725C;

void *func_08037B48(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = __builtin_new(0x44);
    func_08037008(temp_r0, arg0, arg1, 0x379, 0xC);
    temp_r0->unk14 = &vtable_unk_080E725C;
    return temp_r0;
}

