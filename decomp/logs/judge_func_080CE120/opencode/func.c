#include "common.h"
s32 func_080CC134(s32 *, s32, s32);                   /* extern */
s32 func_080CC144(s32 *);                             /* extern */
s32 func_080CD534(s32 *, s32, s32);                   /* extern */
s32 func_080CD558(s32 *);                             /* extern */

s32 *func_080CE120(s32 *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r3;

    var_r3 = arg3;
    if (arg2 != 0) {
        if (arg2 != 9) {
            if (arg2 <= 8) {
                temp_r1 = arg1->unk78;
                if (temp_r1 != 0) {
                    func_080CC134(&sp8, temp_r1, arg2 - 1);
                    var_r3 = sp8;
                }
            } else {
                temp_r1_2 = arg1->unk7C;
                if (temp_r1_2 != 0) {
                    func_080CD534(&spC, temp_r1_2, arg2 - 0xA);
                    var_r3 = spC;
                }
            }
        } else if (arg1->unk7C != 0) {
            func_080CD558(&sp4);
            var_r3 = sp4;
        }
    } else if (arg1->unk78 != 0) {
        func_080CC144(&sp0);
        var_r3 = sp0;
    }
    *arg0 = var_r3;
    return arg0;
}

