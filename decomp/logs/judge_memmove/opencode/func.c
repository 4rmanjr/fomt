#include "common.h"
u32 memmove(u32 arg0, u32 arg1, u32 arg2) {
    s32 temp_r0_2;
    s32 var_r2_2;
    s32 var_r2_3;
    u32 temp_r0;
    u32 var_r1;
    u32 var_r2;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r4;
    u8 *var_r4_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_2;

    var_r2 = arg2;
    var_r4 = arg0;
    var_r3 = arg1;
    if ((var_r3 < arg0) && (temp_r0 = var_r3 + var_r2, (arg0 < temp_r0))) {
        var_r3_2 = temp_r0;
        var_r4_2 = arg0 + var_r2;
        var_r2_2 = var_r2 - 1;
        if (var_r2_2 != -1) {
            do {
                var_r4_2 -= 1;
                var_r3_2 -= 1;
                *var_r4_2 = *var_r3_2;
                var_r2_2 -= 1;
            } while (var_r2_2 != -1);
        }
    } else {
        if ((var_r2 > 0xFU) && !((var_r3 | var_r4) & 3)) {
            var_r1 = var_r3;
            do {
                temp_r1 = var_r1 + 4;
                var_r4->unk0 = (s32) var_r1->unk0;
                temp_r4 = var_r4 + 4;
                temp_r1_2 = temp_r1 + 4;
                var_r4->unk4 = (s32) var_r1->unk4;
                temp_r4_2 = temp_r4 + 4;
                temp_r4->unk4 = (s32) temp_r1->unk4;
                var_r1 = temp_r1_2 + 4 + 4;
                temp_r4_2->unk4 = (s32) temp_r1_2->unk4;
                var_r4 = temp_r4_2 + 4 + 4;
                var_r2 -= 0x10;
            } while (var_r2 > 0xFU);
            if (var_r2 > 3U) {
                do {
                    temp_r0_2 = *var_r1;
                    var_r1 += 4;
                    *var_r4 = temp_r0_2;
                    var_r4 += 4;
                    var_r2 -= 4;
                } while (var_r2 > 3U);
            }
            var_r3 = var_r1;
        }
        var_r2_3 = var_r2 - 1;
        if (var_r2_3 != -1) {
            do {
                *var_r4 = (u8) *var_r3;
                var_r3 += 1;
                var_r4 += 1;
                var_r2_3 -= 1;
            } while (var_r2_3 != -1);
        }
    }
    return arg0;
}

