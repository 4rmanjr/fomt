#include "common.h"
s32 __builtin_new(s32);                             /* extern */
void **func_08080D94(s32, s32 *, s32);              /* extern */

void ***func_080DBDC8(void ***arg0, void *arg1) {
    void **sp0;
    s32 sp4;
    void ***sp8;
    void **spC;
    s32 temp_r0;
    void **temp_r0_2;

    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    sp4 = temp_r0;
    temp_r0_2 = func_08080D94(__builtin_new(0xC), &sp4, arg1->unk8);
    sp0 = temp_r0_2;
    sp8 = &sp0;
    spC = temp_r0_2;
    sp0 = 0;
    *arg0 = temp_r0_2;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}

