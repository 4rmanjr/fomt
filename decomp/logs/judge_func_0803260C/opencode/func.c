#include "common.h"
s32 func_0805E8F0(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[71];
    s32 unk47;
    u8 _pad4B[57];
    s32 unk84;
    u8 _pad88[2];
    s32 unk8A;
} GenObj;
void func_0803260C(GenObj *arg0) {
    s32 temp_r0;
    s32 var_r0_2;
    s32 var_r7;
    s8 *var_r1;
    s8 var_r0;
    u32 temp_r5;
    u8 *temp_r1;

    var_r1 = arg0 + 0x47;
    if (arg0->unk47 == 0) {
        if ((s32) (func_0805E8F0(arg0 + 0x30) << 0x1E) < 0) {
            var_r1 = arg0 + 0x44;
            var_r0 = 1;
            goto block_4;
        }
    } else {
        var_r0 = 0;
block_4:
        *var_r1 = var_r0;
    }
    temp_r5 = (u32) (arg0->unk8A << 0x1E) >> 0x1E;
    if (temp_r5 != 0) {
        var_r7 = 0;
        temp_r1 = (arg0 + 0x8A) - 3;
        if (*temp_r1 == 0) {
            temp_r0 = func_0805E8F0(arg0 + 0x70);
            if ((s32) (temp_r0 << 0x1E) < 0) {
                arg0->unk84 = 1;
            }
            var_r0_2 = temp_r0;
        } else {
            *temp_r1 = 0;
            var_r0_2 = 2;
        }
        if (((s32) (var_r0_2 << 0x1D) < 0) && (temp_r5 != 2)) {
            var_r7 = 1;
        }
        if (var_r7 != 0) {
            arg0->unk8A = (u8) (-4 & arg0->unk8A);
        }
    }
}

