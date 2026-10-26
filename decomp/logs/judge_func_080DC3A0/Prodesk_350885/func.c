#include "common.h"
s32 func_08093A58(s32 *, void ***, s32);                /* extern */
s32 func_08093A88(s32 *, s32);                          /* extern */
s32 func_08093AC8(s32 *);                             /* extern */
s32 func_08093AD4(void ***, ? *);                     /* extern */

void **func_080DC3A0(void **arg0, void *arg1) {
s32 sp0;
    void **spC;
    void ***sp10;
    void *sp14;
    void *temp_r0;
    void *temp_r4;

    spC = 0;
    func_08093A58(&sp0, &spC, arg1->unk8);
    func_08093AD4(&spC, &sp0);
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
    temp_r4 = arg1->unk4;
    temp_r4->unkC = func_08093AC8(&sp0);
    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    sp10 = &spC;
    sp14 = temp_r0;
    spC = 0;
    *arg0 = temp_r0;
    func_08093A88(&sp0, 2);
    return arg0;
}

