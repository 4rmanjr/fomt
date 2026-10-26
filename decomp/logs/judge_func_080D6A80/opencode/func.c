#include "common.h"
s32 memcpy(void *, void *, s32);                      /* extern */

void *func_080D6A80(void *arg0, void *arg1) {
    s32 *temp_r0;
    s32 *var_r2;
    s32 *var_r3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r5;
    void *temp_r1_3;
    void *temp_r6;
    void *var_r4;
    void *var_r5;

    arg0->unk0 = 0;
    var_r2 = arg0 + 4;
    temp_r5 = arg1->unk0;
    temp_r0 = arg1 + 4;
    temp_r1 = (temp_r5 * 4) + temp_r0;
    var_r3 = temp_r0;
    if (var_r3 != temp_r1) {
        do {
            if (var_r2 != 0) {
                *var_r2 = *var_r3;
            }
            var_r3 += 4;
            var_r2 += 4;
        } while (var_r3 != temp_r1);
    }
    arg0->unk0 = temp_r5;
    arg0->unk24 = 0;
    temp_r1_2 = arg1->unk24;
    temp_r1_3 = arg1 + 0x28;
    temp_r6 = (temp_r1_2 * 2) + temp_r1_3;
    var_r4 = temp_r1_3;
    var_r5 = arg0 + 0x28;
    if (var_r4 != temp_r6) {
        do {
            if (var_r5 != 0) {
                memcpy(var_r5, var_r4, 2);
            }
            var_r4 += 2;
            var_r5 += 2;
        } while (var_r4 != temp_r6);
    }
    arg0->unk24 = temp_r1_2;
    return arg0;
}

