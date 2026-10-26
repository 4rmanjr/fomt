s32 func_080AB788();                                /* extern */
s32 func_080AB7A4(s32, s32);                        /* extern */
s32 func_080AB85C(void *);                            /* extern */
s32 func_080AB8D0(void *);                            /* extern */
s32 func_080AB948(void *);                            /* extern */
s32 func_080AB9C4(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk11;
    s32 unk12;
    s32 unk13;
    u8 _pad17[17];
    s32 unk28;
} GenObj;
s32 func_080ABC40(s32 arg0, s32 arg1, s32 arg2, s32 arg3, GenObj *arg4, s32 arg5) {
    s32 sp0;
    s32 sp10;
    u32 sp14;
    s32 sp18;
    u32 sp1C;
    s32 sp20;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_8;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r3;
    s32 var_r6;
    u32 var_r0_3;
    u32 var_r0_5;
    u32 var_r0_6;
    u32 var_r0_7;
    u32 var_r8;
    u32 var_sb;
    u8 var_r0_4;

    temp_r2 = arg2 - arg0;
    sp10 = temp_r2;
    temp_r3 = arg3 - arg1;
    var_r1 = temp_r2;
    if (temp_r2 < 0) {
        var_r1 = 0 - temp_r2;
    }
    var_r0_2 = temp_r3;
    if (var_r0_2 < 0) {
        var_r0_2 = 0 - var_r0_2;
    }
    sp14 = 0;
    if ((s32) (var_r1 * 2) > (s32) (var_r0_2 * 3)) {
        sp14 = 1;
    } else if ((s32) (var_r1 * 3) < (s32) (var_r0_2 * 2)) {
        sp14 = -1U;
    }
    sp18 = 0x7FFFFFFF;
    sp1C = 0;
    sp20 = 0;
loop_9:
    temp_r0 = func_080AB7A4(arg5, sp20);
    var_r8 = 1;
    var_sb = 0;
    var_r1_2 = 1;
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_r0_3 = 0;
        if (temp_r3 <= 0) {
            var_r0_3 = 1;
        }
        var_r8 = var_r0_3;
        var_sb = sp14 >> 0x1F;
        var_r6 = 0;
        if ((s32) arg4->unk0 > (s32) arg4->unk28) {
            func_080AB85C(arg4);
        }
        if (arg4->unk0 == 0) {
            if ((s32) arg4->unk0 > (s32) arg4->unk28) {
                func_080AB85C(arg4);
            }
            var_r0_4 = arg4->unk10;
block_52:
            if (var_r0_4 == 0) {
                var_r6 = 1;
            }
        }
block_54:
        var_r1_2 = var_r6;
        break;
    case 1:
        var_r8 = (u32) ~temp_r3 >> 0x1F;
        var_sb = sp14 >> 0x1F;
        var_r6 = 0;
        if ((s64) (arg4->unk4 + arg4->unk28) < 0) {
            func_080AB8D0(arg4);
        }
        if (arg4->unk4 == 0) {
            if ((s64) (arg4->unk4 + arg4->unk28) < 0) {
                func_080AB8D0(arg4);
            }
            var_r0_4 = arg4->unk11;
            goto block_52;
        }
        goto block_54;
    case 2:
        var_r8 = (u32) ~sp10 >> 0x1F;
        var_r0_5 = 0;
        if ((s32) sp14 > 0) {
            var_r0_5 = 1;
        }
        var_sb = var_r0_5;
        var_r6 = 0;
        if ((s64) (arg4->unk8 + arg4->unk28) < 0) {
            func_080AB948(arg4);
        }
        if (arg4->unk8 == 0) {
            if ((s64) (arg4->unk8 + arg4->unk28) < 0) {
                func_080AB948(arg4);
            }
            var_r0_4 = arg4->unk12;
            goto block_52;
        }
        goto block_54;
    case 3:
        var_r0_6 = 0;
        if (sp10 <= 0) {
            var_r0_6 = 1;
        }
        var_r8 = var_r0_6;
        var_r0_7 = 0;
        if ((s32) sp14 > 0) {
            var_r0_7 = 1;
        }
        var_sb = var_r0_7;
        var_r6 = 0;
        if ((s32) arg4->unkC > (s32) arg4->unk28) {
            func_080AB9C4(arg4);
        }
        if (arg4->unkC == 0) {
            if ((s32) arg4->unkC > (s32) arg4->unk28) {
                func_080AB9C4(arg4);
            }
            var_r0_4 = arg4->unk13;
            goto block_52;
        }
        goto block_54;
    }
    var_r3 = -1;
    if (var_r8 != 0) {
        var_r3 = 1;
    }
    temp_r1 = ((s32) ((0 - var_r1_2) | var_r1_2) >> 0x1F) & 8;
    if (sp20 <= 2) {
        if (sp20 < 1) {
            if (sp20 == 0) {
                var_r2 = 0;
            } else {
                goto block_62;
            }
        } else {
            var_r2 = 1;
        }
    } else {
block_62:
        var_r2 = 2;
    }
    if (var_sb != 0) {
        var_r0_8 = temp_r1 + (var_r3 * 2);
    } else {
        var_r0_8 = temp_r1 + var_r3;
    }
    temp_r0_2 = var_r0_8 + var_r2;
    if (temp_r0_2 == sp18) {
        *((sp1C * 4) + sp) = temp_r0;
        sp1C += 1;
    } else if (temp_r0_2 < sp18) {
        sp0 = temp_r0;
        sp1C = 1;
        sp18 = temp_r0_2;
    }
    temp_r5 = sp20 + 1;
    sp20 = temp_r5;
    if (temp_r5 <= 3) {
        goto loop_9;
    }
    if (sp1C > 1U) {
        var_r0 = func_080AB788() * 4;
    } else {
        var_r0 = 0;
    }
    return *(&sp0 + var_r0);
}
