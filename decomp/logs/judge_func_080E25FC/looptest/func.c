#include "common.h"
s32 func_080E2170(u8 *, u8 **);                       /* extern */
s32 func_080E21A8(u8 *, u8 **);                       /* extern */

u8 *func_080E25FC(u8 *arg0, u8 **arg1, u8 **arg2, u8 **arg3) {
    s8 *temp_r0_3;
    s8 *temp_r0_4;
    u8 *temp_r0;
    u8 *temp_r0_2;
    u8 *temp_r1;
    u8 *temp_r1_2;
    u8 *temp_r1_4;
    u8 *temp_r1_6;
    u8 *temp_r1_8;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *var_r1;
    u8 *var_r1_2;
    u8 *var_r2;
    u8 *var_r4;
    u8 *var_r6;
    u8 *var_r7;
    u8 temp_r1_3;
    u8 temp_r1_5;
    u8 temp_r1_7;

    var_r7 = arg0;
    temp_r1 = var_r7->unk8;
    if (temp_r1 != 0) {
        temp_r0 = var_r7->unkC;
        if (temp_r0 == 0) {
            var_r6 = temp_r1;
        } else {
            var_r7 = temp_r0;
loop_5:
            if (var_r7->unk8 != 0) {
                var_r7 = var_r7->unk8;
                goto loop_5;
            }
            goto block_6;
        }
    } else {
block_6:
        var_r6 = var_r7->unkC;
    }
    if (var_r7 != arg0) {
        arg0->unk8->unk4 = var_r7;
        var_r7->unk8 = (u8 *) arg0->unk8;
        if (var_r7 != arg0->unkC) {
            var_r4 = var_r7->unk4;
            if (var_r6 != 0) {
                var_r6->unk4 = var_r4;
            }
            var_r7->unk4->unk8 = var_r6;
            var_r7->unkC = (u8 *) arg0->unkC;
            arg0->unkC->unk4 = var_r7;
        } else {
            var_r4 = var_r7;
        }
        if (*arg1 == arg0) {
            *arg1 = var_r7;
        } else {
            temp_r1_2 = arg0->unk4;
            if (temp_r1_2->unk8 == arg0) {
                temp_r1_2->unk8 = var_r7;
            } else {
                temp_r1_2->unkC = var_r7;
            }
        }
        var_r7->unk4 = (u8 *) arg0->unk4;
        temp_r1_3 = var_r7->unk0;
        var_r7->unk0 = arg0->unk0;
        arg0->unk0 = temp_r1_3;
        var_r7 = arg0;
    } else {
        var_r4 = var_r7->unk4;
        if (var_r6 != 0) {
            var_r6->unk4 = var_r4;
        }
        if (*arg1 == var_r7) {
            *arg1 = var_r6;
        } else {
            temp_r1_4 = var_r7->unk4;
            if (temp_r1_4->unk8 == var_r7) {
                temp_r1_4->unk8 = var_r6;
            } else {
                temp_r1_4->unkC = var_r6;
            }
        }
        if (*arg2 == arg0) {
            if (arg0->unkC == 0) {
                *arg2 = arg0->unk4;
            } else {
                var_r1 = var_r6;
                if (var_r6->unk8 != 0) {
                    do {
                        var_r1 = var_r1->unk8;
                    } while (var_r1->unk8 != 0);
                }
                *arg2 = var_r1;
            }
        }
        if (*arg3 == arg0) {
            if (arg0->unk8 == 0) {
                *arg3 = arg0->unk4;
            } else {
                var_r1_2 = var_r6;
                if (var_r6->unkC != 0) {
                    do {
                        var_r1_2 = var_r1_2->unkC;
                    } while (var_r1_2->unkC != 0);
                }
                *arg3 = var_r1_2;
            }
        }
    }
    if (*var_r7 == 0) {

    } else {
loop_71:
        if ((var_r6 != *arg1) && ((var_r6 == 0) || (*var_r6 == 1))) {
            temp_r0_2 = var_r4->unk8;
            if (var_r6 == temp_r0_2) {
                var_r2 = var_r4->unkC;
                temp_r1_5 = *var_r2;
                if (temp_r1_5 == 0) {
                    *var_r2 = 1;
                    var_r4->unk0 = temp_r1_5;
                    func_080E2170(var_r4, arg1);
                    var_r2 = var_r4->unkC;
                }
                temp_r3 = var_r2->unk8;
                if (((temp_r3 != 0) && (*temp_r3 != 1)) || ((temp_r1_6 = var_r2->unkC, (temp_r1_6 != 0)) && (*temp_r1_6 != 1))) {
                    if ((var_r2->unkC == 0) || (*var_r2->unkC == 1)) {
                        if (temp_r3 != 0) {
                            *temp_r3 = 1;
                        }
                        var_r2->unk0 = 0;
                        func_080E21A8(var_r2, arg1);
                    }
                    *var_r4->unkC = var_r4->unk0;
                    var_r4->unk0 = 1;
                    temp_r0_3 = var_r4->unkC->unkC;
                    if (temp_r0_3 != 0) {
                        *temp_r0_3 = 1;
                    }
                    func_080E2170(var_r4, arg1);
                } else {
                    goto block_62;
                }
            } else {
                var_r2 = temp_r0_2;
                temp_r1_7 = *var_r2;
                if (temp_r1_7 == 0) {
                    *var_r2 = 1;
                    var_r4->unk0 = temp_r1_7;
                    func_080E21A8(var_r4, arg1);
                    var_r2 = var_r4->unk8;
                }
                temp_r3_2 = var_r2->unkC;
                if (((temp_r3_2 == 0) || (*temp_r3_2 == 1)) && ((temp_r1_8 = var_r2->unk8, (temp_r1_8 == 0)) || (*temp_r1_8 == 1))) {
block_62:
                    *var_r2 = 0;
                    var_r6 = var_r4;
                    var_r4 = var_r6->unk4;
                    goto loop_71;
                }
                if ((var_r2->unk8 == 0) || (*var_r2->unk8 == 1)) {
                    if (temp_r3_2 != 0) {
                        *temp_r3_2 = 1;
                    }
                    var_r2->unk0 = 0;
                    func_080E2170(var_r2, arg1);
                }
                *var_r4->unk8 = var_r4->unk0;
                var_r4->unk0 = 1;
                temp_r0_4 = var_r4->unk8->unk8;
                if (temp_r0_4 != 0) {
                    *temp_r0_4 = 1;
                }
                func_080E21A8(var_r4, arg1);
            }
        }
        if (var_r6 != 0) {
            *var_r6 = 1;
        }
    }
    return var_r7;
}

