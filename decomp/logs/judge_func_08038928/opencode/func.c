#include "common.h"
s32 __builtin_delete(s32 *);                          /* extern */
s32 func_0805E8F0(void *);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk3;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk17;
    u8 _pad1B[9];
    struct GenObj *unk24;
    u8 _pad28[36];
    struct GenObj *unk4C;
    struct GenObj *unk50;
} GenObj;
void func_08038928(GenObj *arg0) {
    s32 sp0;
    s32 *temp_r0_3;
    s32 *temp_r6;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r2;
    u32 *temp_r0;
    u32 var_r7;
    u32 var_r7_2;
    u8 *var_r5_2;
    u8 *var_r6;
    u8 temp_r1_3;
    GenObj *temp_r1_2;
    void *temp_r5;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;
    void *var_r5;

    temp_r0 = arg0->unk14;
    if (temp_r0 != 0) {
        var_r7 = 0;
        if ((u32) *temp_r0 > 0U) {
            var_r4 = temp_r0 + 0x40;
            var_r5 = temp_r0 + 0x2C;
            do {
                if (var_r4->unk3 == 0) {
                    if ((s32) (func_0805E8F0(var_r5) << 0x1E) < 0) {
                        var_r4->unk0 = 1;
                    }
                } else {
                    var_r4->unk3 = 0U;
                }
                temp_r1 = var_r4->unk4 - var_r4->unkC;
                var_r4->unk4 = temp_r1;
                if ((s64) (temp_r1 + (var_r4->unk10 << 0x10)) < 0) {
                    var_r4->unk4 = 0x01E00000;
                }
                var_r4 += 0x50;
                var_r5 += 0x50;
                var_r7 += 1;
            } while (var_r7 < (u32) *temp_r0);
        }
    }
    temp_r1_2 = arg0->unkC;
    if ((temp_r1_2 != 0) && (temp_r1_2->unk50 != 0)) {
        temp_r0_2 = temp_r1_2->unk4C + 0xFFFF8000;
        temp_r1_2->unk4C = temp_r0_2;
        if (temp_r0_2 <= 0xA80000) {
            temp_r1_2->unk4C = 0xA80000;
            temp_r1_2->unk50 = 0U;
        }
    }
    temp_r0_3 = arg0->unk10;
    if (temp_r0_3 != 0) {
        var_r2 = 0;
        var_r7_2 = 0;
        var_r5_2 = temp_r0_3 + 0x144;
        var_r4_2 = temp_r0_3 + 0x2C;
        var_r6 = temp_r0_3 + 0x43;
        do {
            temp_r1_3 = *var_r5_2;
            if (temp_r1_3 == 0) {
                if (var_r4_2->unk17 == 0) {
                    sp0 = var_r2;
                    temp_r0_4 = func_0805E8F0(var_r4_2);
                    if ((s32) (temp_r0_4 << 0x1E) < 0) {
                        var_r4_2->unk14 = 1;
                    }
                    var_r0 = temp_r0_4;
                } else {
                    *var_r6 = temp_r1_3;
                    var_r0 = 2;
                }
                if ((s32) (var_r0 << 0x1D) < 0) {
                    *var_r5_2 = 1;
                }
            } else {
                var_r2 += 1;
            }
            var_r5_2 += 1;
            var_r4_2 += 0x40;
            var_r6 += 0x40;
            var_r7_2 += 1;
        } while (var_r7_2 <= 4U);
        var_r0_2 = 0;
        if (var_r2 == 5) {
            var_r0_2 = 1;
        }
        if (var_r0_2 != 0) {
            temp_r6 = arg0->unk10;
            if ((temp_r6 != 0) && (temp_r6 != 0)) {
                temp_r5 = temp_r6 + ((*temp_r6 << 6) + 4);
                var_r4_3 = temp_r6 + 4;
                if (var_r4_3 != temp_r5) {
                    do {
                        ((void (*)(void *,...))(var_r4_3->unk24->unk8))(var_r4_3, 2);
                        var_r4_3 += 0x40;
                    } while (var_r4_3 != temp_r5);
                }
                __builtin_delete(temp_r6);
            }
            arg0->unk10 = 0;
        }
    }
}

