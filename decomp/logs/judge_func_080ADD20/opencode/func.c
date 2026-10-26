#include "common.h"
s32 func_0805E6CC(s32 **, ? *);                         /* extern */
extern ? gUnk_0852D984;
extern ? vtable_unk_080E5A28;

u16 func_080ADD20(void) {
    ? *sp0;

    func_0805E6CC(&sp0, &gUnk_0852D984);
    sp0 = &vtable_unk_080E5A28;
    return sp0.unk20;
}

