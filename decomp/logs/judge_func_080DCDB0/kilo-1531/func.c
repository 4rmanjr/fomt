#include "common.h"
s32 __builtin_delete(s32 *);                          /* extern */
s32 func_080A47B4(s32 *, s32);                        /* extern */
extern ? vtable_unk_080E65E0;

void func_080DCDB0(s32 *arg0, s32 arg1) {
    s32 *temp_r0;
    s32 *temp_r0_2;
    s32 *temp_r4;
    s32 *temp_r4_2;
    s32 *var_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r4_2;

    temp_r0 = arg0->unk14;
    if (temp_r0 != 0) {
        temp_r5 = temp_r0 + ((*temp_r0 * 0x50) + 4);
        var_r4 = temp_r0 + 4;
        if (var_r4 != temp_r5) {
            do {
                func_080A47B4(var_r4, 2);
                var_r4 += 0x50;
            } while (var_r4 != temp_r5);
        }
        __builtin_delete(temp_r0);
    }
    temp_r0_2 = arg0->unk10;
    if (temp_r0_2 != 0) {
        temp_r5_2 = temp_r0_2 + ((*temp_r0_2 << 6) + 4);
        var_r4_2 = temp_r0_2 + 4;
        if (var_r4_2 != temp_r5_2) {
            do {
                var_r4_2->unk24->unk8(var_r4_2, 2);
                var_r4_2 += 0x40;
            } while (var_r4_2 != temp_r5_2);
        }
        __builtin_delete(temp_r0_2);
    }
    temp_r4 = arg0->unkC;
    if (temp_r4 != 0) {
        func_080A47B4(temp_r4, 2);
        __builtin_delete(temp_r4);
    }
    temp_r4_2 = arg0->unk8;
    if (temp_r4_2 != 0) {
        func_080A47B4(temp_r4_2, 2);
        __builtin_delete(temp_r4_2);
    }
    arg0->unk4 = &vtable_unk_080E65E0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

