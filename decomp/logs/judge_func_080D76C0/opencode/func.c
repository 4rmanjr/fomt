#include "common.h"
s32 func_080D6F5C(void *);                            /* extern */
s32 func_080D7678(void *);                            /* extern */

void func_080D76C0(void *arg0, s32 arg1, u32 arg2) {
    u32 var_r1;
    void *temp_r5;
    void *var_r3;

    if (arg2 <= 8U) {
        temp_r5 = arg0 + 4;
        var_r3 = temp_r5;
        if (0x100 & arg1) {
            var_r3 = arg0 + 0x40;
        }
        func_080D7678(var_r3);
        arg0->unk0 = 0;
        var_r1 = 0;
        if (temp_r5->unk1 != 0) {
            var_r1 = (u32) (0 - (arg0 + 0x40)->unk1) >> 0x1F;
        }
        arg0->unk1 = (s8) var_r1;
        return;
    }
    if (arg2 == 9) {
        func_080D6F5C(arg0);
    }
}

