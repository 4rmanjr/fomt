#include "common.h"
s32 __builtin_delete(s32 **);                           /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
extern ? vtable_unk_080E7908;

void func_080E105C(s32 **arg0, s32 arg1) {
    ? ***var_r5;
    ? ***var_r7;
    ? **temp_r0_2;
    s32 temp_r0;
    void *temp_r4;

    temp_r0 = arg0 + 8;
    if (temp_r0 != 0) {
        var_r7 = arg0 + 0x14;
        if (temp_r0 != var_r7) {
            do {
                var_r7 -= 4;
                temp_r0_2 = *var_r7;
                if (temp_r0_2 != 0) {
                    var_r5 = temp_r0_2 + 0x70;
                    if (temp_r0_2 != var_r5) {
                        do {
                            var_r5 -= 0x10;
                            temp_r4 = var_r5 + 4;
                            func_08007C28(temp_r4, temp_r4->unk4);
                            func_080079E8(temp_r4, 2);
                            __builtin_delete(*var_r5);
                        } while (temp_r0_2 != var_r5);
                    }
                    __builtin_delete(temp_r0_2);
                }
            } while ((arg0 + 8) != var_r7);
        }
    }
    *arg0 = &vtable_unk_080E7908;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

