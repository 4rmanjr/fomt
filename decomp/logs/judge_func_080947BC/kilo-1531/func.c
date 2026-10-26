#include "common.h"
s32 __builtin_vec_new();                            /* extern */
s32 func_08094904();                                  /* extern */
s32 func_0809490C(void *);                            /* extern */

void *func_080947BC(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r2;
    s32 var_r3;

    arg0->unk0 = arg1;
    func_08094904();
    arg0->unk4 = __builtin_vec_new();
    func_0809490C(arg0);
    arg0->unk8 = __builtin_vec_new();
    var_r3 = 0;
    do {
        var_r2 = var_r3;
        if (var_r3 < 0) {
            var_r2 = var_r3 + 7;
        }
        temp_r2 = var_r2 >> 3;
        *(arg0 + 0x18 + var_r3) = ((s32) *(arg0->unk0 + 0x21D4 + temp_r2) >> (var_r3 - (temp_r2 * 8))) & 1;
        var_r3 += 1;
    } while (var_r3 <= 0x30);
    return arg0;
}

