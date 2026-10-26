#include "common.h"
s32 func_080E2170(u8 *, s8 **);                       /* extern */
s32 func_080E21A8(u8 *, s8 **);                       /* extern */

void func_080E21E0(u8 *arg0, s8 **arg1) {
    u8 *temp_r1_2;
    u8 *temp_r1_3;
    u8 *var_r0;
    u8 *var_r2;
    u8 *var_r4;
    u8 var_r1;
    void *temp_r1;

    var_r4 = arg0;
    var_r4->unk0 = 0;
    if (var_r4 != *arg1) {
        var_r2 = var_r4->unk4;
        if (*var_r2 == 0) {
loop_3:
            temp_r1 = var_r2->unk4;
            var_r0 = temp_r1->unk8;
            if (var_r2 == var_r0) {
                var_r0 = temp_r1->unkC;
                if ((var_r0 == 0) || (var_r1 = *var_r0, (var_r1 != 0))) {
                    temp_r1_2 = var_r4->unk4;
                    if (var_r4 == temp_r1_2->unkC) {
                        var_r4 = temp_r1_2;
                        func_080E2170(var_r4, arg1);
                    }
                    var_r4->unk4->unk0 = 1;
                    *var_r4->unk4->unk4 = 0;
                    func_080E21A8(var_r4->unk4->unk4, arg1);
                } else {
                    goto block_11;
                }
            } else if ((var_r0 != 0) && (var_r1 = *var_r0, (var_r1 == 0))) {
block_11:
                var_r2->unk0 = 1;
                *var_r0 = 1;
                *var_r4->unk4->unk4 = var_r1;
                var_r4 = var_r4->unk4->unk4;
            } else {
                temp_r1_3 = var_r4->unk4;
                if (var_r4 == temp_r1_3->unk8) {
                    var_r4 = temp_r1_3;
                    func_080E21A8(var_r4, arg1);
                }
                var_r4->unk4->unk0 = 1;
                *var_r4->unk4->unk4 = 0;
                func_080E2170(var_r4->unk4->unk4, arg1);
            }
            if (var_r4 != *arg1) {
                var_r2 = var_r4->unk4;
                if (*var_r2 == 0) {
                    goto loop_3;
                }
            }
        }
    }
    **arg1 = 1;
}

