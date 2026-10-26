#include "common.h"
s32 __builtin_delete(void *);                         /* extern */

void func_080D7E64(void *arg0, s32 arg1) {
    s32 temp_r1;
    void *temp_r0;
    void *temp_r1_2;
    void *var_r0;
    void *var_r1;
    void *var_r2;

    temp_r1 = arg0 + 0x158 + ((arg0->unk158 * 8) + 4);
    var_r0 = arg0 + 0x15C;
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 8;
        } while (var_r0 != temp_r1);
    }
    temp_r1_2 = arg0 + 0x14 + ((arg0->unk14 * 8) + 4);
    var_r2 = arg0 + 0x18;
    if (var_r2 != temp_r1_2) {
        do {
            var_r2 += 8;
        } while (var_r2 != temp_r1_2);
    }
    temp_r0 = arg0 + ((arg0->unk0 * 8) + 4);
    var_r1 = arg0 + 4;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 8;
        } while (var_r1 != temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

