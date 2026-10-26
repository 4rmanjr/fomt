#include "common.h"
s32 vfunc_2C__7AEntityUi(void *, s32);                  /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
    u8 _pad10[20];
    s32 unk24;
    s32 unk26;
    s32 unk28;
    s32 unk2C;
    s32 unk2E;
} GenObj;
void func_0803242C(GenObj *arg0, ? arg1) {
    s16 temp_r6;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r2;
    s32 var_r2_2;
    u16 temp_r0;
    u16 var_r0;

    temp_r0 = arg0->unk24;
    if (temp_r0 != 0) {
        var_r0 = temp_r0 - 1;
    } else {
        var_r0 = arg0->unk26;
    }
    arg0->unk24 = var_r0;
    temp_r4 = arg0->unk28;
    if (temp_r4 != 0) {
        var_r2 = 0;
        if (arg0->unk2E == 0) {
            var_r2 = 1;
        }
        if (var_r2 != 0) {
            var_r2_2 = arg0->unk8;
        } else {
            var_r2_2 = arg0->unkC;
        }
        temp_r5 = var_r2_2 >> 0x10;
        temp_r6 = arg0->unk2C;
        temp_r0_2 = temp_r6 - temp_r5;
        if (temp_r0_2 == 0) {
            arg0->unk28 = temp_r0_2;
        } else {
            var_r1 = var_r2_2 + temp_r4;
            if (temp_r0_2 <= 0) {
                var_r1 = var_r2_2 - temp_r4;
            }
            temp_r0_3 = var_r1 >> 0x10;
            if (temp_r0_3 != temp_r5) {
                temp_r0_4 = temp_r6 - temp_r0_3;
                if (temp_r0_2 > 0) {
                    if (temp_r0_4 > 0) {

                    } else {
                        goto block_18;
                    }
                } else if (temp_r0_4 >= 0) {
block_18:
                    arg0->unk28 = 0;
                }
            }
            if (var_r2 != 0) {
                arg0->unk8 = var_r1;
            } else {
                arg0->unkC = var_r1;
            }
        }
    }
    vfunc_2C__7AEntityUi(arg0, arg1);
}

