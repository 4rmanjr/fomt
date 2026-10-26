void *func_080E2354(void *);                        /* extern */
void *func_080E2B28(void *);                        /* extern */
s32 func_080E2EA4(void **, void *, void *, void *);   /* extern */
s32 func_080E2F74(void **, void *, void *);           /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    void *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    u8 _pad14[4];
    s32 unk18;
    s32 unk1C;
} GenObj;
void **func_080E3054(void **arg0, GenObj *arg1, void **arg2, GenObj *arg3) {
    GenObj *sp0;
    void *sp4;
    GenObj *sp8;
    void *spC;
    void *sp10;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sb;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 temp_r0_7;
    u8 temp_r1_2;
    u8 temp_r1_3;
    u8 temp_r1_4;
    u8 temp_r1_5;
    u8 temp_r1_6;
    u8 temp_r1_7;
    u8 temp_r2_2;
    u8 temp_r2_3;
    u8 temp_r2_4;
    u8 temp_r3;
    u8 var_r1_2;
    GenObj *temp_r0_2;
    GenObj *temp_r0_4;
    GenObj *temp_r0_6;
    GenObj *temp_r0_8;
    GenObj *temp_r1;
    GenObj *temp_r2;
    void *var_r0;
    void *var_r2;
    GenObj *var_r3;
    GenObj *var_r3_4;
    GenObj *var_r5;

    temp_r1 = arg1->unk4;
    temp_r2 = *arg2;
    if (temp_r2 == temp_r1->unk8) {
        if (arg1->unk8 == 0) {
            func_080E2F74(&sp8, arg1, arg3);
            var_r0 = sp8;
            goto block_67;
        }
        var_sb = 0;
        temp_r0 = arg3->unk0;
        temp_r1_2 = temp_r2->unk10;
        var_r5 = temp_r2;
        if (((u32) temp_r0 < (u32) temp_r1_2) || (((u32) temp_r1_2 >= (u32) temp_r0) && ((u32) arg3->unk1 < (u32) ((GenObj *)((u8 *)temp_r2 + 0x10))->unk1))) {
            var_sb = 1;
        }
        if (var_sb != 0) {
            sp0 = arg3;
            sp4 = 0;
            var_r2 = var_r5;
            goto block_62;
        }
        var_r1 = 0;
        temp_r2_2 = var_r5->unk10;
        if (((u32) temp_r2_2 < (u32) temp_r0) || (((u32) temp_r0 >= (u32) temp_r2_2) && ((u32) ((GenObj *)((u8 *)var_r5 + 0x10))->unk1 < (u32) arg3->unk1))) {
            var_r1 = 1;
        }
        if (var_r1 == 0) {
            *arg0 = var_r5;
        } else {
            sp8 = var_r5;
            temp_r0_2 = func_080E2B28(var_r5);
            sp8 = temp_r0_2;
            if (temp_r0_2 == arg1->unk4) {
                var_r3 = *arg2;
                sp0 = arg3;
                sp4 = var_r3;
                goto block_33;
            }
            var_r8 = 0;
            temp_r1_3 = arg3->unk0;
            temp_r0_3 = temp_r0_2->unk10;
            var_r5 = temp_r0_2;
            if (((u32) temp_r1_3 < (u32) temp_r0_3) || (((u32) temp_r0_3 >= (u32) temp_r1_3) && ((u32) arg3->unk1 < (u32) ((GenObj *)((u8 *)temp_r0_2 + 0x10))->unk1))) {
                var_r8 = 1;
            }
            if (var_r8 == 0) {
                goto block_66;
            }
            var_r3 = *arg2;
            if (var_r3->unkC == 0) {
                sp0 = arg3;
                sp4 = var_r3;
                goto block_33;
            }
            sp0 = arg3;
            sp4 = 0;
            var_r2 = var_r5;
            goto block_62;
        }
    } else if (temp_r2 == temp_r1) {
        temp_r0_4 = temp_r2->unkC;
        var_r3_2 = 0;
        temp_r0_5 = temp_r0_4->unk10;
        temp_r1_4 = arg3->unk0;
        if (((u32) temp_r0_5 < (u32) temp_r1_4) || (((u32) temp_r1_4 >= (u32) temp_r0_5) && ((u32) ((GenObj *)((u8 *)temp_r0_4 + 0x10))->unk1 < (u32) arg3->unk1))) {
            var_r3_2 = 1;
        }
        if (var_r3_2 != 0) {
            var_r3 = arg1->unk4->unkC;
            sp0 = arg3;
            sp4 = *arg2;
block_33:
            func_080E2EA4(arg0, arg1, 0, var_r3);
        } else {
            func_080E2F74(&sp8, arg1, arg3);
            var_r0 = sp8;
            goto block_67;
        }
    } else {
        sp8 = temp_r2;
        sp8 = func_080E2354(temp_r2);
        temp_r0_6 = *arg2;
        var_r3_3 = 0;
        temp_r1_5 = arg3->unk0;
        temp_r0_7 = temp_r0_6->unk10;
        if (((u32) temp_r1_5 < (u32) temp_r0_7) || (((u32) temp_r0_7 >= (u32) temp_r1_5) && ((u32) arg3->unk1 < (u32) ((GenObj *)((u8 *)temp_r0_6 + 0x10))->unk1))) {
            var_r3_3 = 1;
        }
        if (var_r3_3 != 0) {
            var_r8_2 = 0;
            temp_r2_3 = sp8->unk10;
            temp_r1_6 = arg3->unk0;
            var_r5 = sp8;
            if (((u32) temp_r2_3 < (u32) temp_r1_6) || (((u32) temp_r1_6 >= (u32) temp_r2_3) && ((u32) ((GenObj *)((u8 *)sp8 + 0x10))->unk1 < (u32) arg3->unk1))) {
                var_r8_2 = 1;
            }
            if (var_r8_2 != 0) {
                if (var_r5->unkC != 0) {
                    var_r3_4 = *arg2;
                    goto block_63;
                }
                goto block_61;
            }
            goto block_47;
        }
block_47:
        spC = *arg2;
        spC = func_080E2B28();
        var_r1_2 = var_r3_3 ^ 1;
        if (var_r3_3 == 0) {
            temp_r0_8 = *arg2;
            sp0.unk18 = 0U;
            temp_r1_7 = arg3->unk0;
            temp_r3 = temp_r0_8->unk10;
            var_r5 = temp_r0_8;
            if (((u32) temp_r3 < (u32) temp_r1_7) || (((u32) temp_r1_7 >= (u32) temp_r3) && ((u32) ((GenObj *)((u8 *)temp_r0_8 + 0x10))->unk1 < (u32) arg3->unk1))) {
                sp0.unk18 = 1U;
            }
            var_r1_2 = sp0.unk18;
            if ((var_r3_3 == 0) && (var_r1_2 != 0)) {
                var_r3_4 = spC;
                if (var_r3_4 != arg1->unk4) {
                    sp0.unk1C = 0U;
                    temp_r2_4 = var_r3_4->unk10;
                    if (((u32) temp_r1_7 < (u32) temp_r2_4) || (((u32) temp_r2_4 >= (u32) temp_r1_7) && ((u32) arg3->unk1 < (u32) ((GenObj *)((u8 *)var_r3_4 + 0x10))->unk1))) {
                        sp0.unk1C = 1U;
                    }
                    if (sp0.unk1C != 0) {
                        goto block_60;
                    }
                    goto block_64;
                }
block_60:
                if (var_r5->unkC == 0) {
block_61:
                    sp0 = arg3;
                    sp4 = var_r5;
                    var_r2 = 0;
block_62:
                    func_080E2EA4(arg0, arg1, var_r2, var_r5);
                } else {
block_63:
                    sp0 = arg3;
                    sp4 = 0;
                    func_080E2EA4(arg0, arg1, var_r3_4);
                }
            } else {
                goto block_64;
            }
        } else {
block_64:
            if (var_r3_3 == var_r1_2) {
                var_r0 = *arg2;
            } else {
block_66:
                func_080E2F74(&sp10, arg1, arg3);
                var_r0 = sp10;
            }
block_67:
            *arg0 = var_r0;
        }
    }
    return arg0;
}
