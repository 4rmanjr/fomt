#include "common.h"
s32 __builtin_delete(void *);                         /* extern */

void func_080D6B00(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r2;
    void *var_r0;
    void *var_r2;

    temp_r0 = (arg0->unk24 * 2) + arg0 + 0x28;
    var_r2 = arg0 + 0x28;
    if (var_r2 != temp_r0) {
        do {
            var_r2 += 2;
        } while (var_r2 != temp_r0);
    }
    temp_r2 = arg0 + ((arg0->unk0 * 4) + 4);
    var_r0 = arg0 + 4;
    if (var_r0 != temp_r2) {
        do {
            var_r0 += 4;
        } while (var_r0 != temp_r2);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

