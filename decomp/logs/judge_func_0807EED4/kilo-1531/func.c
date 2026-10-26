#include "common.h"
s32 __builtin_delete(s32);                            /* extern */
s32 func_080C8360(void *, s32);                       /* extern */
extern ? vtable_unk_080E7C5C;

void func_0807EED4(void *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E7C5C;
    __builtin_delete(arg0->unk6AC);
    func_080C8360(arg0, arg1);
}

