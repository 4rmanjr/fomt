#include "common.h"
s32 __7AEntityP10GameObjectRC8Location(void *, s32, ? *); /* extern */
s32 func_0800FFE0(s32 *, s32);                          /* extern */
extern ? vtable_unk_080E73FC;

void *func_08037E18(void *arg0, s32 arg1, s32 arg2) {
s32 sp0;

    func_0800FFE0(&sp0, arg2);
    __7AEntityP10GameObjectRC8Location(arg0, arg1, &sp0);
    arg0->unk14 = &vtable_unk_080E73FC;
    arg0->unk18 = arg2;
    return arg0;
}

