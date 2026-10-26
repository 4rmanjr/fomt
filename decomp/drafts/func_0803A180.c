s32 func_0805E8F0(void *);                          /* extern */
s16 func_080AB788(s32);                             /* extern */
s32 func_080AB7A4(s32);                             /* extern */
s32 func_080AB85C(s32 *);                             /* extern */
s32 func_080AB8D0(s32 *);                             /* extern */
s32 func_080AB948(s32 *);                             /* extern */
s32 func_080AB9C4(s32 *);                             /* extern */

s32 func_0803A180(void *arg0, void *arg1, s32 arg2) {
s32 sp0;
    s32 spC;
s32 sp20;
    s32 sp2C;
    s32 sp30;
    s32 sp40;
    s16 temp_r1_2;
    s16 temp_r3;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_sb;
    s8 *var_r1;
    s8 temp_r0;
    s8 var_r0;
    u16 temp_r0_4;
    void **temp_r1;

    var_sb = 0;
    temp_r1 = arg0->unk0;
    (*temp_r1)->unk34(&sp0, temp_r1, 0);
    temp_r1_2 = arg1->unk4;
    temp_r3 = arg1->unk6;
    sp40.unk0 = (s16) (temp_r1_2 - 8);
    sp40.unk2 = (s16) (temp_r3 - 8);
    sp40.unk4 = (s16) (temp_r1_2 + 8);
    sp40.unk6 = (s16) (temp_r3 + 8);
    spC = 0x21;
    spC.unk4 = -0x21;
    spC.unk8 = -0x21;
    spC.unkC = 0x21;
    sp20.unk0 = (s32) sp0.unk0;
    sp20.unk4 = (s32) sp0.unk4;
    sp20.unk8 = (s32) sp0.unk8;
    sp2C = sp40;
    sp30 = sp44;
    spC.unk28 = 0x20;
    spC.unk2C = 0;
    spC.unk30 = 0;
    temp_r0 = arg1->unk12;
    if ((temp_r0 != 0) && (temp_r0 == 1)) {
        temp_r0_2 = arg1->unk0;
        switch (temp_r0_2) {                        /* irregular */
        case 0:
            if (spC > sp34) {
                func_080AB85C(&spC);
            }
            if (spC > 1) {
                arg1->unkC = (s32) (arg1->unkC + arg2);
            } else {
            default:
block_28:
                arg1->unk10 = 0U;
            }
            break;
        case 1:
            if ((s64) (sp10 + sp34) < 0) {
                func_080AB8D0(&spC);
            }
            if (sp10 < -1) {
                arg1->unkC = (s32) (arg1->unkC - arg2);
            } else {
                goto block_28;
            }
            break;
        case 2:
            if ((s64) (sp14 + sp34) < 0) {
                func_080AB948(&spC);
            }
            if (sp14 < -1) {
                arg1->unk8 = (s32) (arg1->unk8 - arg2);
            } else {
                goto block_28;
            }
            break;
        case 3:
            if (sp18 > sp34) {
                func_080AB9C4(&spC);
            }
            if (sp18 > 1) {
                temp_r0_3 = arg1->unk8 + arg2;
                arg1->unk8 = temp_r0_3;
                if ((s32) (temp_r0_3 >> 0x10) > 0x244) {
                    arg1->unk8 = 0x02440000;
                    goto block_28;
                }
            } else {
                goto block_28;
            }
            break;
        }
    }
    arg1->unk4 = (s16) arg1->unkA;
    arg1->unk6 = (s16) arg1->unkE;
    var_r1 = arg0 + 0x47;
    if (arg0->unk47 == 0) {
        if ((s32) (func_0805E8F0(arg0 + 0x30) << 0x1E) < 0) {
            var_r1 = arg0 + 0x44;
            var_r0 = 1;
            goto block_33;
        }
    } else {
        var_r0 = 0;
block_33:
        *var_r1 = var_r0;
    }
    temp_r0_4 = arg1->unk10 - 1;
    arg1->unk10 = temp_r0_4;
    if ((s32) (temp_r0_4 << 0x10) < 0) {
        if (func_080AB788(3) == 3) {
            arg1->unk12 = 0;
        } else {
            arg1->unk12 = 1;
            arg1->unk0 = func_080AB7A4(arg1->unk0);
        }
        arg1->unk10 = (u16) (func_080AB788(0x1F) + 0x10);
        var_sb = 1;
    }
    return var_sb;
}
