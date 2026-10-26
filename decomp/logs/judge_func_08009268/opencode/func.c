#include "common.h"
s32 func_08009190();                                /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[4];
    s32 unk8;
    s32 unkA;
    s32 unkC;
} GenObj;
s16 func_08009268(GenObj *arg0) {
    s16 *var_r1;
    s16 temp_r0;
    s16 var_r0;
    s16 var_r3;
    s32 temp_ip;
    u32 var_r2;

    temp_ip = func_08009190();
    var_r3 = 0;
    var_r2 = 0x200;
    var_r1 = arg0 + 0x20;
    do {
        if (arg0->unk0 & var_r2) {
            if (!(temp_ip & var_r2)) {
                temp_r0 = *var_r1;
                if (temp_r0 != arg0->unkA) {
                    var_r0 = temp_r0 + 1;
                } else {
                    var_r3 |= var_r2;
                    var_r0 = temp_r0 - arg0->unkC;
                }
            } else {
                var_r3 |= var_r2;
                var_r0 = 0;
            }
            *var_r1 = var_r0;
        }
        var_r1 -= 2;
        var_r2 = var_r2 >> 1;
    } while (var_r2 != 0);
    arg0->unk8 = var_r3;
    return var_r3;
}

