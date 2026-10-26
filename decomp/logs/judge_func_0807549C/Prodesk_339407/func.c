#include "common.h"
s32 __builtin_new(s32);                             /* extern */
void *func_08070DE4(s32, void *, s32);              /* extern */
void *func_080713B8(s32, void *, s32);              /* extern */
void *func_080722DC(s32, void *, s32);              /* extern */
s32 func_08076B94(void *, void **);                   /* extern */

void func_0807549C(void *arg0, s32 arg1) {
    void *sp0;
    void *sp4;
    void *temp_r0;
    void *var_r0;

    sp0 = 0;
    switch (arg1) {                                 /* irregular */
    case 0:
        var_r0 = func_08070DE4(__builtin_new(0x42FC), arg0, arg0->unk120);
block_9:
        if ((var_r0 != sp0) && (sp0 != 0)) {
            sp0->unk5B4->unk8(sp0, 3);
        }
        sp0 = var_r0;
        break;
    case 1:
        var_r0 = func_080713B8(__builtin_new(0x4B94), arg0, arg0->unk120);
        goto block_9;
    case 2:
        var_r0 = func_080722DC(__builtin_new(0x8E6C), arg0, arg0->unk120);
        goto block_9;
    }
    temp_r0 = sp0;
    sp0 = 0;
    sp4 = temp_r0;
    func_08076B94(arg0, &sp4);
    if (sp0 != 0) {
        sp0->unk5B4->unk8(sp0, 3);
    }
}

