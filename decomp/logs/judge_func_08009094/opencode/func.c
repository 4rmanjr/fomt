#include "common.h"
s32 CpuFastSet(s32 *, s32, s32);                        /* extern */
s32 CpuSet(s32 *, s32, s32);                            /* extern */

void func_08009094(void *arg0, s32 arg1) {
    ? *sp0;
    s32 sp4;
    ? *var_r4;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 var_r3;
    void *var_r7;

    var_r7 = arg0;
    if (var_r7 != arg1) {
        do {
            var_r4 = var_r7->unk4;
            if (var_r7->unk0 == 1) {
                sp0 = var_r4;
                var_r4 = &sp0;
            }
            temp_r6 = var_r7->unkC;
            var_r3 = var_r7->unk8;
            if (0x04000000 & temp_r6) {
                temp_r5 = 0xFFFF & temp_r6;
                temp_r0 = 7 & temp_r5;
                temp_r5_2 = temp_r5 - temp_r0;
                if ((temp_r5_2 != 0) || (temp_r0 == 0)) {
                    sp4 = var_r3;
                    CpuFastSet(var_r4, var_r3, temp_r6 - temp_r0);
                    var_r3 += temp_r5_2 * 4;
                    if (!(0x01000000 & temp_r6)) {
                        var_r4 = &var_r4[temp_r5_2];
                    }
                    if (temp_r0 != 0) {
                        goto block_9;
                    }
                } else {
block_9:
                    CpuSet(var_r4, var_r3, temp_r6 - temp_r5_2);
                }
            } else {
                CpuSet(var_r4, var_r3, temp_r6);
            }
            var_r7 += 0x10;
        } while (var_r7 != arg1);
    }
}

