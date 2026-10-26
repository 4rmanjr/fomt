#include "common.h"
? **__builtin_new(s32);                             /* extern */
extern ? vtable_unk_080E5E84;

? ***func_080DB320(s32 ***arg0, void *arg1) {
    ? **sp0;
    s32 sp4;
    ? ***sp8;
    ? **spC;
    ? **temp_r0;
    s32 temp_r5;

    temp_r0 = __builtin_new(0xC);
    temp_r5 = arg1->unk4;
    arg1->unk4 = 0;
    temp_r0->unk0 = &vtable_unk_080E5E84;
    sp4 = 0;
    temp_r0->unk4 = temp_r5;
    temp_r0->unk8 = (s32) arg1->unk8;
    sp0 = temp_r0;
    sp8 = &sp0;
    spC = temp_r0;
    sp0 = 0;
    *arg0 = temp_r0;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}

