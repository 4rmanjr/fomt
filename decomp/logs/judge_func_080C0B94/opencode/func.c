#include "common.h"
s32 func_080088CC();                                /* extern */
s32 func_080C0910(void *);                            /* extern */

void func_080C0B94(void *arg0) {
    s32 *var_r1;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 var_r0;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r2;

    temp_r2 = func_080088CC() & 1;
    if (temp_r2 == 0) {
        if (arg0->unk609 != 0) {
            temp_r0 = arg0->unk5FC + 1;
            arg0->unk5FC = temp_r0;
            if (temp_r0 == 0x1E) {
                arg0->unk609 = temp_r2;
                arg0->unk60E = 1;
                arg0->unk5FC = temp_r2;
            }
        }
    } else {
        if (arg0->unk609 == 0) {
            arg0->unk60E = 1;
        }
        arg0->unk609 = 1U;
        arg0->unk5FC = 0U;
        temp_r0_2 = arg0->unk5FA + 1;
        arg0->unk5FA = temp_r0_2;
        temp_r0_3 = temp_r0_2;
        if (((u32) temp_r0_3 > 1U) && ((u32) temp_r0_3 <= 0x14U)) {
            if ((u32) arg0->unk5FB <= 0xCU) {
                arg0->unk5F8 = (u8) (arg0->unk5F8 + 1);
                arg0->unk5F9 = 0U;
                if ((u32) arg0->unk5F8 > 4U) {
                    arg0->unk5F8 = 0U;
                    var_r1 = arg0 + 0x5AC;
                    temp_r0_4 = arg0->unk5AC;
                    if (temp_r0_4 <= 2) {
                        var_r0 = temp_r0_4 + 1;
                        goto block_15;
                    }
                }
            } else {
                arg0->unk5F9 = (u8) (arg0->unk5F9 + 1);
                arg0->unk5F8 = 0U;
                if ((u32) arg0->unk5F9 > 2U) {
                    arg0->unk5F9 = 0U;
                    var_r1 = arg0 + 0x5AC;
                    temp_r0_5 = arg0->unk5AC;
                    if (temp_r0_5 > 0) {
                        var_r0 = temp_r0_5 - 1;
block_15:
                        *var_r1 = var_r0;
                        arg0->unk60E = 1;
                    }
                }
            }
            arg0->unk5FB = 0U;
        }
        func_080C0910(arg0);
    }
}

