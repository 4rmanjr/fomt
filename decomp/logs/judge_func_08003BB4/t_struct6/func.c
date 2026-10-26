#include "common.h"
s32 func_080087C8(s32);                               /* extern */
void *func_08008918(s32);                           /* extern */
void *func_08008940(s32);                           /* extern */
s32 func_08009300(s32 *, void *);                       /* extern */
s32 func_08009378(s32 *, s32, s32, s32);                /* extern */
s32 func_080094B8(s32 *, s32);                        /* extern */
extern s32 vtable_unk_080E5B80;

void func_08003BB4(s32 arg0) {
    s16 sp0;
    s32 sp4;
    s32 *spC;
s32 sp10;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;

    temp_r0 = func_08008918();
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r1 = func_08008918(arg0);
    sp4 = 0;
    sp4.unk4 = 0;
    spC = &vtable_unk_080E5B80;
    func_08009300(&sp10, temp_r1);
    func_08009378(&sp10, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    temp_r0_2->unk8->unk10(temp_r0_2, &sp4);
loop_2:
    if ((s32) ((0 - sp4) | sp4) < 0) {
        func_080087C8(arg0);
        goto loop_2;
    }
    func_080094B8(&sp4, 2);
}

