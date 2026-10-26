#include "common.h"
s32 func_0800959C(void *, s32);                       /* extern */
s32 func_080D7944(void *, s32);                       /* extern */
extern ? vtable_unk_080E5B0C;
extern ? vtable_unk_080E5B18;

void func_080D7AD4(void *arg0, s32 arg1) {
    arg0->unk30 = &vtable_unk_080E5B0C;
    arg0->unk8 = &vtable_unk_080E5B18;
    func_080D7944(arg0 + 0x1C, 0);
    func_0800959C(arg0, arg1);
}

