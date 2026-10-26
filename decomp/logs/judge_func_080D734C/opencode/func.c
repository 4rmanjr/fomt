#include "common.h"
s32 func_080D6F5C(void *);                            /* extern */
s32 func_080D72C4(void *, u32, u32);                  /* extern */

void func_080D734C(void *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 temp_r0;
    u32 temp_r2;
    u32 var_r1;
    u32 var_r1_2;
    void *temp_r6;

    sp0 = arg2;
    if ((arg1 <= 0x1FFU) && (arg2 != 0)) {
        if ((arg1 == 0) && (arg2 > 0x1FFU)) {
            func_080D6F5C(arg0);
            return;
        }
        temp_r6 = arg0 + 4;
        if (arg1 <= 0xFFU) {
            temp_r0 = 0x100 - arg1;
            sp4 = temp_r0;
            var_r2 = &sp0;
            if (sp0 > temp_r0) {
                var_r2 = &sp4;
            }
            func_080D72C4(temp_r6, arg1, *var_r2);
        }
        temp_r2 = arg1 + sp0;
        if (temp_r2 > 0x100U) {
            var_r1 = 0;
            if (arg1 > 0xFFU) {
                var_r1 = arg1 + 0xFFFFFF00;
            }
            func_080D72C4(arg0 + 0x40, var_r1, (temp_r2 - 0x100) - var_r1);
        }
        arg0->unk0 = 0;
        var_r1_2 = 0;
        if (temp_r6->unk1 != 0) {
            var_r1_2 = (u32) (0 - (arg0 + 0x40)->unk1) >> 0x1F;
        }
        arg0->unk1 = (s8) var_r1_2;
    }
}

