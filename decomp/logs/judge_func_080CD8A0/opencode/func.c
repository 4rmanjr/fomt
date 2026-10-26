#include "common.h"
s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08050D34();                                /* extern */
s32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_080CC58C(s32, s32);                          /* extern */

void func_080CD8A0(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_sb;
    void *temp_r2;

    arg0->unk84 = func_08050D34();
    temp_sb = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    arg0->unk88 = func_08050D3C(arg0 + 0x80, temp_sb, temp_r6, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0xC);
    temp_r2 = arg0->unk78;
    if (temp_r2 != 0) {
        temp_r2->unk210->unkC(temp_r2);
    }
    temp_r4_2 = arg0->unk7C;
    if (temp_r4_2 != 0) {
        func_080CC58C(temp_r4_2, func_08008920(arg0));
    }
}

