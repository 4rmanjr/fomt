#include "common.h"
s32 __builtin_delete(s32 *);                            /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */

void func_080AB2E4(s32 *arg0, s32 arg1) {
    s32 sp0;
    ? *temp_r0;
    void **temp_r0_2;
    void *temp_r0_3;
    void *var_r4;
    void *var_r5;
    void *var_r6;

    sp0 = arg1;
    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        temp_r0_2 = temp_r0->unk0;
        (*temp_r0_2)->unk4C(temp_r0_2, temp_r0->unk354);
        temp_r0_3 = temp_r0 + 8;
        if (temp_r0_3 != 0) {
            var_r6 = temp_r0 + 0x350;
            if (temp_r0_3 != var_r6) {
                var_r5 = temp_r0 + 0x394;
                do {
                    var_r5 -= 0x54;
                    var_r6 -= 0x54;
                    if (var_r5 != 0) {
                        var_r4 = var_r6 + 0x54;
                        if (var_r5 != var_r4) {
                            do {
                                var_r4 -= 8;
                                func_08007C28(var_r4, var_r4->unk4);
                                func_080079E8(var_r4, 2);
                            } while (var_r5 != var_r4);
                        }
                    }
                } while ((temp_r0 + 8) != var_r6);
            }
        }
        __builtin_delete(temp_r0);
    }
    if (1 & sp0) {
        __builtin_delete(arg0);
    }
}

