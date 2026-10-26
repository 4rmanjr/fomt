#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */

void func_0803B0A8(void *arg0, s32 arg1) {
    void **temp_r0;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r4;
    void *temp_r6;
    void *var_r0;
    void *var_r5;

    temp_r0 = arg0->unk0;
    (*temp_r0)->unk4C(temp_r0, arg0->unkD4);
    temp_r2 = arg0 + 0xE8 + ((arg0->unkE8 * 0x1C) + 4);
    var_r0 = arg0 + 0xEC;
    if (var_r0 != temp_r2) {
        do {
            var_r0 += 0x1C;
        } while (var_r0 != temp_r2);
    }
    temp_r2_2 = arg0 + 4;
    temp_r6 = temp_r2_2 + ((arg0->unk4 * 0x28) + 4);
    var_r5 = temp_r2_2 + 4;
    if (var_r5 != temp_r6) {
        do {
            temp_r4 = var_r5 + 0x20;
            func_08007C28(temp_r4, temp_r4->unk4);
            func_080079E8(temp_r4, 2);
            var_r5 += 0x28;
        } while (var_r5 != temp_r6);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

