#include "common.h"
s32 func_080088DC();                                /* extern */
s32 func_08008918(s32);                             /* extern */
s32 func_08008920(s32);                             /* extern */
s32 func_08008940(s32);                             /* extern */
s32 func_0800894C(s32);                             /* extern */
s32 func_08050D3C(s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_08003C28(s32 arg0) {
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;

    temp_sb = func_080088DC();
    temp_r8 = func_08008920(arg0);
    temp_r6 = func_08008918(arg0);
    temp_r5 = func_08008940(arg0);
    func_08050D3C(arg0 + 0x10, temp_sb, temp_r8, temp_r6, temp_r5, func_0800894C(arg0), arg0 + 0x14);
}

