#include "common.h"
s32 __builtin_new(s32);                             /* extern */
void **func_080AC9EC(s32, s32 *);                   /* extern */
s32 func_080CFB28();                                /* extern */

void ***func_080AD724(void ***arg0) {
    void **sp0;
    s32 sp4;
    void ***sp8;
    void **spC;
    void **temp_r0;

    __builtin_new(0x1E4);
    sp4 = func_080CFB28();
    temp_r0 = func_080AC9EC(__builtin_new(0x1038), &sp4);
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

