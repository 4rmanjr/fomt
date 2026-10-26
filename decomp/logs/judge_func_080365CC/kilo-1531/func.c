#include "common.h"
s32 func_08034C64(void *, s32);                     /* extern */
s32 func_08035908(void *, s32);                       /* extern */
s32 func_08035940(void *, s32);                       /* extern */
s32 func_08035AE0(void *);                          /* extern */
u32 func_0809EAD8();                                /* extern */
s32 func_080A0384(s32);                             /* extern */
s32 func_080A0490(s32);                             /* extern */

void func_080365CC(void *arg0) {
    s32 temp_r6;
    s32 var_r7;
    s32 var_r8;
    void *temp_r5;

    var_r7 = 0x884;
    var_r8 = 0x888;
    temp_r5 = arg0->unk34;
    temp_r6 = temp_r5 + 0x1CD4;
    if ((func_080A0490(temp_r6) == 0x15) && (arg0->unk4 == 0x1D)) {
        if (((func_08035AE0(arg0) << 0x18) != 0) || (((u32) (temp_r5->unk216C << 0x1D) >> 0x1E) == 1)) {
            var_r7 = 0x89C;
        } else if ((func_080A0384(temp_r6) != 0) && (func_0809EAD8() <= 0x3BU) && ((func_08034C64(temp_r5, (*arg0->unk0)->unk144() + 0xA) << 0x18) != 0)) {
            var_r7 = 0x894;
            var_r8 = 0x898;
        }
    }
    func_08035908(arg0, var_r7);
    func_08035940(arg0, var_r8);
}

