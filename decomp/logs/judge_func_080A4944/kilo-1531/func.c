#include "common.h"
void func_080A4944(void ***arg0, void *arg1, u8 arg2) {
    s32 temp_r3;
    s32 var_r6;
    u16 var_r2;
    u32 temp_r2;
    u32 var_r7;
    u8 *var_r5;
    void **temp_r8;

    temp_r3 = arg1->unk0;
    var_r2 = 0;
    if (temp_r3 != 0) {
        var_r2 = arg1->unk4;
    }
    if (var_r2 != 0) {
        temp_r8 = *arg0;
        temp_r2 = var_r2 >> 5;
        var_r6 = temp_r3;
        var_r7 = 0;
        if (temp_r2 > 0U) {
            var_r5 = arg0 + 0x14;
            do {
                (*temp_r8)->unk54(temp_r8, var_r6, *var_r5, arg2);
                var_r5 += 1;
                var_r7 += 1;
                var_r6 += 0x20;
            } while (var_r7 < temp_r2);
        }
    }
}

