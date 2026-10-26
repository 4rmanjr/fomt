#include "common.h"
s32 func_08007C28(void *, s32);                       /* extern */

void func_080AB380(s32 *arg0) {
    s32 sp0;
    s32 *var_r4_2;
    s32 temp_r0;
    s32 var_r2_2;
    s32 var_r3;
    s32 var_r4;
    u32 var_r1_2;
    u32 var_r2;
    u32 var_r6;
    u8 temp_r0_2;
    void *temp_r5;
    void *var_r1;

    temp_r0 = *arg0;
    var_r3 = 0;
    var_r4 = 0;
    var_r2 = 0;
    var_r1 = temp_r0 + 0x368;
    do {
        if (var_r1->unk4 != 0) {
            var_r3 += 1;
            temp_r0_2 = var_r1->unk5;
            if ((u32) temp_r0_2 > 1U) {
                var_r1->unk5 = (u8) (temp_r0_2 - 1);
            } else {
                var_r1->unk4 = 0U;
                var_r4 += 1;
            }
        }
        var_r1 += 8;
        var_r2 += 1;
    } while (var_r2 <= 0xFU);
    if ((var_r3 != 0) && (var_r4 == var_r3)) {
        var_r1_2 = 0;
        do {
            temp_r5 = temp_r0 + ((var_r1_2 * 0x54) + 8);
            if (temp_r5->unk0 != 0) {
                var_r6 = 0;
                var_r2_2 = 0;
                var_r4_2 = temp_r5 + 0x48;
                do {
                    sp0 = var_r2_2;
                    func_08007C28((var_r6 * 8) + temp_r5 + 0x44, *var_r4_2);
                    *var_r4_2 = var_r2_2;
                    var_r4_2 += 8;
                    var_r6 += 1;
                } while (var_r6 <= 1U);
                temp_r5->unk0 = 0U;
                temp_r5->unk1 = 0;
            }
            var_r1_2 += 1;
        } while (var_r1_2 <= 9U);
    }
}

