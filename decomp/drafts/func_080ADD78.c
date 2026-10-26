s32 func_080ADF40(void *);                          /* extern */
s32 strcpy(u8 *, ? *);                                /* extern */

u8 *func_080ADD78(void *arg0, void **arg1, void **arg2) {
    u8 sp0;
s32 sp4;
    s32 sp24;
    ? (*var_r1_2)(void **);
    s32 temp_r1;
    s32 var_r4;
    s32 var_r6;
    s32 var_sb;
    u8 *temp_r4;
    u8 *var_r5;
    u8 temp_r2;
    u8 var_r1;
    void **temp_r2_2;

    sp24 = 0;
    var_r6 = func_080ADF40(arg0);
    if (arg0->unk0 == (u8 *)2) {
        if (((*arg2)->unk14(arg2) << 0x18) == 0) {
            var_r6 = 0;
        } else {
            arg0->unk0 = (u8 *)1;
        }
    } else {
        var_r4 = 0;
        var_r1 = (*arg2)->unkC(arg2);
        if (arg0->unk4 == 0) {
            var_r1 |= 1;
        }
        if (var_r1 != 0) {
            var_r4 = 1;
        }
        sp24 = var_r4;
    }
    var_r5 = arg0->unk10;
    if (var_r5 == 0) {
        var_r5 = arg0->unk8;
    }
    var_sb = 0;
loop_35:
    if ((var_r5 != 0) && ((sp24 != 0) || (var_r6 != 0)) && (((*arg1)->unk1C(arg1) << 0x18) == 0)) {
        temp_r2 = *var_r5;
        var_r5 += 1;
        switch (temp_r2) {                          /* irregular */
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
        case 11:
            if ((u32) temp_r2 > 0x1FU) {
            default:
                temp_r1 = var_sb | temp_r2;
                if (((*arg1)->unkC(arg1, temp_r1) << 0x18) != 0) {
                    var_sb = 0;
block_31:
                    if (var_r6 != 0) {
                        var_r6 -= 1;
                    }
                } else {
                    temp_r2_2 = arg0->unkC;
                    if ((temp_r2_2 != 0) && (arg0->unk10 == 0)) {
                        (*temp_r2_2)->unkC(&sp0, temp_r2_2, temp_r1);
                        if (sp0 != 0) {
                            var_sb = 0;
                            temp_r4 = arg0 + 0x14;
                            strcpy(temp_r4, &sp4);
                            arg0->unk8 = var_r5;
                            arg0->unk10 = temp_r4;
                            var_r5 = temp_r4;
                        } else {
                            var_sb = temp_r1 << 8;
                        }
                    } else {
                        var_sb = temp_r1 << 8;
                    }
                }
            }
            goto loop_35;
        case 0:
            if (arg0->unk10 != 0) {
                arg0->unk10 = 0;
                var_r5 = arg0->unk8;
                goto loop_35;
            }
            var_r5 = 0;
            break;
        case 13:
            var_r1_2 = (*arg1)->unk10;
block_30:
            var_r1_2(arg1);
            goto block_31;
        case 10:
            var_r1_2 = (*arg1)->unk14;
            goto block_30;
        case 12:
            var_r1_2 = (*arg1)->unk18;
            goto block_30;
        case 5:
            if (((*arg2)->unk10(arg2) << 0x18) != 0) {
                arg0->unk0 = (u8 *)2;
            } else {
                goto loop_35;
            }
            break;
        }
    }
    if (arg0->unk10 != 0) {
        arg0->unk10 = var_r5;
    } else {
        arg0->unk8 = var_r5;
        if (var_r5 == 0) {
            arg0->unk0 = var_r5;
        }
    }
    return arg0->unk0;
}
