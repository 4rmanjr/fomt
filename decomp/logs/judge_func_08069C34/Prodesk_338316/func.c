#include "common.h"
s32 __builtin_new(s32);                             /* extern */
void *func_0805FF14(s32, void *, s32);              /* extern */
void *func_08064320(s32, void *, s32);              /* extern */
void *func_080643DC(s32, void *, s32);              /* extern */
void *func_080644F0(s32, void *, s32);              /* extern */
void *func_080645F0(s32, void *, s32);              /* extern */
void *func_0806644C(s32, void *, s32);              /* extern */
void *func_08068344(s32, void *, s32);              /* extern */
s32 func_08076B94(void *, void **);                   /* extern */

void func_08069C34(void *arg0, u32 arg1) {
    void *sp0;
    void *sp4;
    void *temp_r0;
    void *var_r0;

    sp0 = 0;
    switch (arg1) {                                 /* irregular */
    case 0:
        var_r0 = func_0805FF14(__builtin_new(0x1B6C), arg0, arg0->unk120);
block_10:
        if ((var_r0 != sp0) && (sp0 != 0)) {
            sp0->unk5B4->unk8(sp0, 3);
        }
        sp0 = var_r0;
        break;
    case 1:
        var_r0 = func_08064320(__builtin_new(0x431C), arg0, arg0->unk120);
        goto block_10;
    case 2:
        var_r0 = func_080643DC(__builtin_new(0x431C), arg0, arg0->unk120);
        goto block_10;
    case 3:
        var_r0 = func_080644F0(__builtin_new(0x431C), arg0, arg0->unk120);
        goto block_10;
    case 4:
        var_r0 = func_080645F0(__builtin_new(0x22B8), arg0, arg0->unk120);
        goto block_10;
    case 5:
        var_r0 = func_0806644C(__builtin_new(0x19FC), arg0, arg0->unk120);
        goto block_10;
    case 6:
        var_r0 = func_08068344(__builtin_new(0x9F4), arg0, arg0->unk120);
        goto block_10;
    }
    temp_r0 = sp0;
    sp0 = 0;
    sp4 = temp_r0;
    func_08076B94(arg0, &sp4);
    if (sp0 != 0) {
        sp0->unk5B4->unk8(sp0, 3);
    }
}

