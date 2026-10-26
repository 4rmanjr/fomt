s32 func_080E2294(u32 **, void *, u32 *, u32 *, s32); /* extern */
u32 *func_080E2354(u32 *);                          /* extern */
s32 func_080E2390(u32 **, void *, u32 *);             /* extern */
u32 *func_080E2B28(u32 *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    struct GenObj *unk8;
    void *unkC;
    s32 unk10;
} GenObj;
u32 **func_080E2444(u32 **arg0, GenObj *arg1, u32 **arg2, u32 *arg3) {
    u32 *sp8;
    u32 *spC;
    u32 *sp10;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    u32 *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r2;
    u32 *var_r0;
    u32 *var_r2;
    GenObj *var_r3;
    GenObj *var_r5;
    u32 temp_r1_2;
    u32 temp_r1_3;
    u32 temp_r2_2;
    u32 temp_r2_3;
    GenObj *temp_r1;

    temp_r1 = arg1->unk4;
    temp_r2 = *arg2;
    if (temp_r2 == temp_r1->unk8) {
        if (arg1->unk8 == 0) {
            func_080E2390(&sp8, arg1, arg3);
            var_r0 = sp8;
            goto block_50;
        }
        var_r0_2 = 0;
        temp_r1_2 = temp_r2->unk10;
        var_r3 = temp_r2;
        temp_r2_2 = *arg3;
        if (temp_r2_2 < temp_r1_2) {
            var_r0_2 = 1;
        }
        if (var_r0_2 == 0) {
            var_r0_3 = 0;
            if (temp_r1_2 < temp_r2_2) {
                var_r0_3 = 1;
            }
            if (var_r0_3 == 0) {
                *arg0 = var_r3;
            } else {
                sp8 = var_r3;
                temp_r0 = func_080E2B28(var_r3);
                sp8 = temp_r0;
                if (temp_r0 == arg1->unk4) {
                    goto block_42;
                }
                var_r3_2 = 0;
                var_r5 = temp_r0;
                if ((u32) *arg3 < (u32) temp_r0->unk10) {
                    var_r3_2 = 1;
                }
                if (var_r3_2 == 0) {
                    goto block_49;
                }
                if ((*arg2)->unkC != 0) {
                    goto block_45;
                }
                goto block_42;
            }
        } else {
            goto block_32;
        }
    } else {
        if (temp_r2 == temp_r1) {
            var_r5_2 = 0;
            if ((u32) temp_r2->unkC->unk10 < (u32) *arg3) {
                var_r5_2 = 1;
            }
            if (var_r5_2 != 0) {
                goto block_43;
            }
            func_080E2390(&sp8, arg1, arg3);
            var_r0 = sp8;
            goto block_50;
        }
        sp8 = temp_r2;
        temp_r0_2 = func_080E2354(temp_r2);
        sp8 = temp_r0_2;
        var_r3 = *arg2;
        var_r5_3 = 0;
        temp_r1_3 = *arg3;
        if (temp_r1_3 < (u32) var_r3->unk10) {
            var_r5_3 = 1;
        }
        if (var_r5_3 != 0) {
            var_ip = 0;
            var_r5 = temp_r0_2;
            if ((u32) temp_r0_2->unk10 < temp_r1_3) {
                var_ip = 1;
            }
            if (var_ip != 0) {
                if (var_r5->unkC == 0) {
                    var_r2 = 0;
                    goto block_46;
                }
block_32:
                func_080E2294(arg0, arg1, var_r3, arg3, 0);
            } else {
                goto block_33;
            }
        } else {
block_33:
            spC = *arg2;
            temp_r0_3 = func_080E2B28();
            spC = temp_r0_3;
            var_r1 = var_r5_3 ^ 1;
            if (var_r5_3 == 0) {
                temp_r0_4 = *arg2;
                var_r5_4 = 0;
                temp_r2_3 = *arg3;
                if ((u32) temp_r0_4->unk10 < temp_r2_3) {
                    var_r5_4 = 1;
                }
                var_r1 = var_r5_4;
                if (var_r1 != 0) {
                    var_r5 = temp_r0_3;
                    if (var_r5 != arg1->unk4) {
                        var_ip_2 = 0;
                        if (temp_r2_3 < (u32) var_r5->unk10) {
                            var_ip_2 = 1;
                        }
                        if (var_ip_2 != 0) {
                            goto block_41;
                        }
                        goto block_47;
                    }
block_41:
                    if (temp_r0_4->unkC == 0) {
block_42:
block_43:
                        func_080E2294(arg0, arg1, 0);
                    } else {
block_45:
                        var_r2 = var_r5;
block_46:
                        func_080E2294(arg0, arg1, var_r2, var_r5);
                    }
                } else {
                    goto block_47;
                }
            } else {
block_47:
                if (var_r5_3 == var_r1) {
                    var_r0 = *arg2;
                } else {
block_49:
                    func_080E2390(&sp10, arg1, arg3);
                    var_r0 = sp10;
                }
block_50:
                *arg0 = var_r0;
            }
        }
    }
    return arg0;
}
