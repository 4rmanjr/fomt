#include "common.h"
extern ? func_080D3840;

void func_080D3870(s32 arg0, s32 arg1, s32 arg2) {
    u16 sp0;
    s32 var_r3;
    u16 *var_r2;
    u32 temp_r1;
    u32 var_r0;

    *(u16 *)0x04000204 = (*(u16 *)0x04000204 & 0xFFFC) | 3;
    var_r3 = (s32) &func_080D3840 & ~1;
    var_r2 = &sp0;
    var_r0 = (func_080D3870 - &func_080D3840) << 0xF;
loop_2:
    temp_r1 = var_r0 >> 0x10;
    if (temp_r1 != 0) {
        *var_r2 = *var_r3;
        var_r3 += 2;
        var_r2 += 2;
        var_r0 = (temp_r1 - 1) << 0x10;
        goto loop_2;
    }
    (&sp0 + 1)(arg0, arg1, arg2);
}

