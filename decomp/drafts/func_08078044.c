u32 GetRivalEventCount__C12Bachelorette(void *);    /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08010E48(void *);                          /* extern */
s32 func_08010E50(void *);                          /* extern */
s32 func_08010E58(void *);                          /* extern */
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_08075AE8(void *, s32, ? *, s32, s32);        /* extern */
s32 func_080782C4(void *, s32, s32, ? *);           /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? gUnk_080FCE14;
extern ? gUnk_080FD080;
extern ? gUnk_080FD094;
extern ? gUnk_080FD0A8;
extern ? gUnk_080FD550;

void func_08078044(void *arg0, s32 arg1, s32 arg2) {
s32 sp4;
    s32 sp24;
    s32 *sp28;
    ? **var_r0_3;
    ? *var_r1_2;
    ? *var_r4_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_4;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    void **temp_r1;
    void *temp_r4;

    sp24 = arg2;
    var_r3 = arg0->unk8C + arg1;
    if (var_r3 > 0xE800) {
        var_r3 = 0xE800;
    } else if (var_r3 <= 0x7FF) {
        var_r3 = 0x800;
    }
    var_r2 = arg0->unk90 + sp24;
    if (var_r2 > 0x6000) {
        var_r2 = 0x6000;
    } else if (var_r2 <= 0x3FF) {
        var_r2 = 0x400;
    }
    arg0->unk8C = var_r3;
    arg0->unk90 = var_r2;
    var_r0 = var_r3;
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    temp_r0 = var_r0 >> 8;
    var_r0_2 = var_r2;
    if (var_r0_2 < 0) {
        var_r0_2 += 0xFF;
    }
    temp_r0_2 = var_r0_2 >> 8;
    if ((arg1 == 0) && (sp24 == 0)) {
        temp_r4 = arg0 + 0x78;
        func_0805E8F0(temp_r4);
        temp_r5 = func_08008920(arg0);
        temp_r1 = arg0->unk78;
        (*temp_r1)->unk10(&sp4, temp_r1, *(arg0->unk7C + (temp_r4->unkC * 4)));
        memcpy(&sp4, &sp4, 0x20);
        func_08075AE8(arg0 + 0x20, temp_r5, &sp4, temp_r0, temp_r0_2);
    } else {
        func_08075AE8(arg0 + 0x20, func_08008920(arg0), arg0 + 0x58, temp_r0, temp_r0_2);
    }
    var_r6 = arg0->unk94;
    sp28 = arg0 + 0x94;
    if ((arg1 != 0) || (sp24 != 0)) {
        var_r6 = 0x28;
        if (((func_08010E48(arg0->unk8) << 0x18) != 0) && ((func_080782C4(arg0, temp_r0, temp_r0_2, &gUnk_080FD080) << 0x18) != 0)) {
            var_r6 = 0;
        } else if (((func_08010E50(arg0->unk8) << 0x18) != 0) && ((func_080782C4(arg0, temp_r0, temp_r0_2, &gUnk_080FD0A8) << 0x18) != 0)) {
            var_r6 = 2;
        } else if (((func_08010E58(arg0->unk8) << 0x18) != 0) && ((func_080782C4(arg0, temp_r0, temp_r0_2, &gUnk_080FD094) << 0x18) != 0)) {
            var_r6 = 1;
        } else {
            var_r1 = 9;
            if ((s32) (arg0->unk8->unk2210 << 0x1E) < 0) {
                var_r1 = 3;
            }
            var_r4 = var_r1;
            var_r5 = var_r4 * 0x14;
loop_31:
            if (var_r4 <= 0x27) {
                if ((func_080782C4(arg0, temp_r0, temp_r0_2, var_r5 + &gUnk_080FD080) << 0x18) != 0) {
                    var_r6 = var_r4;
                } else {
                    var_r5 += 0x14;
                    var_r4 += 1;
                    goto loop_31;
                }
            }
        }
        *sp28 = var_r6;
    }
    switch (var_r6) {                               /* irregular */
    case 40:
        var_r4_2 = &gUnk_080FCE14;
        break;
    case 29:
        if (arg0->unk14 != 0) {
            var_r4_2 = arg0 + 0x118;
        } else {
            var_r4_2 = arg0 + 0x98;
        }
        break;
    case 10:
        if (arg0->unk14 != 0) {
            if (GetRivalEventCount__C12Bachelorette(arg0->unk8 + 0x1E28) > 4U) {
                var_r4_2 = &gUnk_080FD550;
            } else {
                if (arg0->unk14 != 0) {
                    var_r0_3 = &gUnk_080FD080 + 0xCC;
                } else {
                    goto block_49;
                }
                goto block_54;
            }
        } else {
block_49:
            var_r0_3 = &gUnk_080FD080 + 0xC8;
block_54:
            var_r4_2 = *var_r0_3;
        }
        break;
    default:
        if (arg0->unk14 != 0) {
            var_r0_4 = var_r6 * 0x14;
            var_r1_2 = &gUnk_080FD080 + 4;
        } else {
            var_r1_2 = &gUnk_080FD080;
            var_r0_4 = var_r6 * 0x14;
        }
        var_r0_3 = var_r0_4 + var_r1_2;
        goto block_54;
    }
    if (var_r4_2 == 0) {
        var_r4_2 = &gUnk_080FCE14;
    }
    if (var_r4_2 != arg0->unk198) {
        func_08050DC8(arg0 + 0x18, var_r4_2, 0, 0);
        arg0->unk198 = var_r4_2;
    }
}
