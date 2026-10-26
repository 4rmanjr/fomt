#include "common.h"
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unkE;
} GenObj;
s32 func_080093AC(void **arg0) {
    s16 *var_r0_2;
    s16 *var_r1;
    s16 temp_r7;
    s16 var_r0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r3;
    s32 var_r0_3;
    s32 var_r1_2;
    s32 var_r6;
    u16 *var_r2;
    u16 temp_r4;
    GenObj *temp_r5;

    temp_r5 = *arg0;
    temp_r7 = temp_r5->unk4;
    if (temp_r7 != 0) {
        temp_r4 = temp_r5->unkE;
        temp_r0 = temp_r5->unk8;
        if (temp_r0 != 0) {
            var_r6 = 0;
            if (temp_r0 != 1) {
                if (temp_r0 == 2) {
                    var_r6 = 0xC0;
                }
            } else {
                var_r6 = 0x80;
            }
            temp_r3 = temp_r5->unk0;
            if (temp_r3 != 0) {
                var_r2 = temp_r3 + 0x50;
            } else {
                var_r2 = (u16 *)0x04000050;
            }
            *var_r2 = (0xFF3F & *var_r2) | var_r6;
            if (temp_r3 != 0) {
                var_r1 = temp_r3 + 0x54;
            } else {
                var_r1 = (s16 *)0x04000054;
            }
            if ((u32) temp_r4 > 0xFFFEU) {
                var_r0 = 0x10;
            } else if (temp_r4 == 0) {
                var_r0 = 0;
            } else {
                var_r0 = ((u32) (temp_r4 * 0xF) >> 0x10) + 1;
            }
            *var_r1 = var_r0;
        }
        if (temp_r5->unkC != 0) {
            if ((u32) temp_r4 > 0xFFFEU) {
                var_r1_2 = 0xF;
            } else if (temp_r4 == 0) {
                var_r1_2 = 0;
            } else {
                var_r1_2 = ((u32) (temp_r4 * 0xE) >> 0x10) + 1;
            }
            temp_r1 = var_r1_2 | (var_r1_2 * 0x10);
            temp_r0_2 = temp_r5->unk0;
            if (temp_r0_2 != 0) {
                var_r0_2 = temp_r0_2 + 0x4C;
            } else {
                var_r0_2 = (s16 *)0x0400004C;
            }
            *var_r0_2 = temp_r1 | (temp_r1 << 8);
        }
        if ((s32) temp_r7 >= 0) {
            if (temp_r4 != 0xFFFF) {
                goto block_33;
            }
            goto block_32;
        }
        if (temp_r4 == 0) {
block_32:
            temp_r5->unk4 = 0;
            return 0;
        }
block_33:
        var_r0_3 = temp_r4 + temp_r7;
        if (var_r0_3 < 0) {
            var_r0_3 = 0;
        } else if (var_r0_3 > 0xFFFF) {
            var_r0_3 = 0xFFFF;
        }
        temp_r5->unkE = (u16) var_r0_3;
        return 1;
    }
    return 0;
}

