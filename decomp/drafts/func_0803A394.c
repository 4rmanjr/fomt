void *__builtin_new(s32);                           /* extern */
s32 func_08039E98(void *, s32, s32, s32);               /* extern */
s8 func_0803A144(void *, void *, s32);              /* extern */
u16 func_080AB788(s32);                             /* extern */
extern ? gUnk_080F18D2;
extern ? gUnk_080F1904;
extern ? vtable_unk_080E759C;
extern ? vtable_unk_080E75B4;
extern ? vtable_unk_080E75CC;
extern ? vtable_unk_080E75E4;
extern ? vtable_unk_080E75FC;
extern ? vtable_unk_080E7614;
extern ? vtable_unk_080E762C;
extern ? vtable_unk_080E7644;
extern ? vtable_unk_080E765C;
extern ? vtable_unk_080E7674;
extern ? vtable_unk_080E768C;
extern ? vtable_unk_080E76A4;

void func_0803A394(void *arg0, ? arg1, s32 arg2, u8 arg3) {
    s32 sp0;
    s32 sp4;
    ? *var_r0;
    ? *var_r7;
    s16 var_r7_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_ip;
    s32 var_r3;
    s32 var_sl;
    u16 var_r4;
    u32 temp_r0;
    u32 temp_r0_11;
    u32 temp_r0_3;
    u8 temp_r3;
    void **temp_r0_12;
    void **temp_r0_4;
    void *temp_r0_10;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_19;
    void *temp_r0_2;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r2;
    void *var_r4_2;
    void *var_r5;

    temp_r3 = arg3;
    var_r7 = &gUnk_080F1904;
    if (temp_r3 == 0) {
        var_r7 = &gUnk_080F18D2;
    }
    var_sl = 4;
    if (temp_r3 == 0) {
        var_sl = 0xA;
    }
    var_r4 = func_080AB788(0x63);
    sp0 = 0;
    sp4 = 0;
    var_ip = 0;
    switch (arg2) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_ip = 0;
        break;
    case 1:                                         /* switch 1 */
        var_ip = 1;
        break;
    case 2:                                         /* switch 1 */
        var_ip = 2;
        break;
    case 3:                                         /* switch 1 */
        var_ip = 3;
        break;
    }
    var_r3 = 0;
    if (var_sl > 0) {
        if ((s32) (s16) var_r4 < (s32) *(var_r7 + var_ip)) {
            sp0 = 0;
            sp4 = (s32) var_r7->unk4;
        } else {
loop_18:
            var_r4 -= *((var_r3 * 5) + var_r7 + var_ip);
            var_r3 += 1;
            if (var_r3 < var_sl) {
                temp_r2 = (var_r3 * 5) + var_r7;
                if ((s32) (s16) var_r4 < (s32) *(temp_r2 + var_ip)) {
                    sp0 = var_r3;
                    sp4 = (s32) temp_r2->unk4;
                } else {
                    goto loop_18;
                }
            }
        }
    }
    if ((sp0 != 0) && (temp_r3 != 0)) {
        sp0 += 9;
    }
    if (sp4 > 1) {
        sp4 = func_080AB788(sp4 - 1) + 1;
    }
    if (sp4 <= 0) {
        return;
    }
loop_28:
    temp_r5 = func_080AB788(0x188) + 0xB8;
    if (temp_r5 <= 0xEF) {
        var_r7_2 = func_080AB788(0x38) + 0x1F0;
    } else {
        var_r7_2 = func_080AB788(0x30) + 0x228;
    }
    temp_r0 = sp0 - 1;
    switch (temp_r0) {                              /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        temp_r0_2 = __builtin_new(0x64);
        var_r4_2 = temp_r0_2;
        func_08039E98(temp_r0_2, arg1, 0x9B6, 1);
        var_r0 = &vtable_unk_080E76A4;
block_35:
        var_r4_2->unk4C = var_r0;
        var_r4_2->unk50 = 0;
        var_r4_2->unk54 = (s16) temp_r5;
        var_r4_2->unk56 = var_r7_2;
        var_r4_2->unk60 = 0;
        (var_r4_2 + 0x60)->unk2 = 0;
        var_r4_2->unk58 = (s32) (var_r4_2->unk54 << 0x10);
        var_r4_2->unk5C = (s32) (var_r4_2->unk56 << 0x10);
block_36:
        temp_r0_3 = arg0->unk8;
        if (temp_r0_3 > 2U) {

        } else {
            temp_r0_4 = arg0 + 8 + ((temp_r0_3 * 4) + 4);
            if (temp_r0_4 == 0) {

            } else {
                *temp_r0_4 = var_r4_2;
            }
block_55:
            arg0->unk8 = (u32) (arg0->unk8 + 1);
        }
        break;
    case 1:                                         /* switch 2 */
        temp_r0_5 = __builtin_new(0x64);
        var_r4_2 = temp_r0_5;
        func_08039E98(temp_r0_5, arg1, 0x10, 1);
        var_r0 = &vtable_unk_080E768C;
        goto block_35;
    case 2:                                         /* switch 2 */
        temp_r0_6 = __builtin_new(0x64);
        var_r4_2 = temp_r0_6;
        func_08039E98(temp_r0_6, arg1, 0x3DB, 1);
        var_r0 = &vtable_unk_080E7674;
        goto block_35;
    case 3:                                         /* switch 2 */
        temp_r0_7 = __builtin_new(0x64);
        var_r4_2 = temp_r0_7;
        func_08039E98(temp_r0_7, arg1, 0x806, 1);
        var_r0 = &vtable_unk_080E765C;
        goto block_35;
    case 4:                                         /* switch 2 */
        temp_r0_8 = __builtin_new(0x6C);
        var_r4_2 = temp_r0_8;
        func_08039E98(temp_r0_8, arg1, 0x202, 1);
        var_r4_2->unk4C = &vtable_unk_080E7644;
        var_r4_2->unk50 = 0;
        var_r4_2->unk54 = (s16) temp_r5;
        var_r4_2->unk56 = var_r7_2;
        var_r4_2->unk60 = 0;
        (var_r4_2 + 0x60)->unk2 = 0;
        var_r4_2->unk58 = (s32) (var_r4_2->unk54 << 0x10);
        var_r4_2->unk5C = (s32) (var_r4_2->unk56 << 0x10);
        var_r4_2->unk68 = 0;
        goto block_36;
    case 5:                                         /* switch 2 */
        temp_r0_9 = __builtin_new(0x88);
        var_r5 = temp_r0_9;
        func_08039E98(temp_r0_9, arg1, 0x2A4, 1);
        var_r5->unk4C = &vtable_unk_080E762C;
        var_r5->unk50 = 0;
        var_r5->unk78 = func_0803A144(var_r5, var_r5 + 0x50, -1);
        (var_r5 + 0x78)->unk1 = 0xFF;
        temp_r0_10 = var_r5 + 0x60;
        var_r5->unk60 = 0;
        temp_r0_10->unk2 = 0;
        var_r5->unk58 = (s32) (*((temp_r0_10 + 2) - 0xE) << 0x10);
        var_r5->unk5C = (s32) (var_r5->unk56 << 0x10);
        var_r5->unk84 = 0xF8;
block_52:
        temp_r0_11 = arg0->unk8;
        if (temp_r0_11 <= 2U) {
            temp_r0_12 = arg0 + 8 + ((temp_r0_11 * 4) + 4);
            if (temp_r0_12 != 0) {
                *temp_r0_12 = var_r5;
            }
            goto block_55;
        }
        break;
    case 6:                                         /* switch 2 */
        temp_r0_13 = __builtin_new(0x64);
        var_r4_2 = temp_r0_13;
        func_08039E98(temp_r0_13, arg1, 0x87B, 1);
        var_r0 = &vtable_unk_080E7614;
        goto block_35;
    case 7:                                         /* switch 2 */
        temp_r0_14 = __builtin_new(0x64);
        var_r4_2 = temp_r0_14;
        func_08039E98(temp_r0_14, arg1, 0x65C, 1);
        var_r0 = &vtable_unk_080E75FC;
        goto block_35;
    case 8:                                         /* switch 2 */
        temp_r0_15 = __builtin_new(0x64);
        var_r4_2 = temp_r0_15;
        func_08039E98(temp_r0_15, arg1, 0x8F9, 1);
        var_r0 = &vtable_unk_080E75E4;
        goto block_35;
    case 9:                                         /* switch 2 */
        temp_r0_16 = __builtin_new(0x64);
        var_r4_2 = temp_r0_16;
        func_08039E98(temp_r0_16, arg1, 0x9A9, 1);
        var_r0 = &vtable_unk_080E75CC;
        goto block_35;
    case 10:                                        /* switch 2 */
        temp_r0_17 = __builtin_new(0x64);
        var_r4_2 = temp_r0_17;
        func_08039E98(temp_r0_17, arg1, 0x8FD, 1);
        var_r0 = &vtable_unk_080E75B4;
        goto block_35;
    case 11:                                        /* switch 2 */
        temp_r0_18 = __builtin_new(0x64);
        var_r5 = temp_r0_18;
        func_08039E98(temp_r0_18, arg1, 0x15, 0);
        var_r5->unk4C = &vtable_unk_080E759C;
        var_r5->unk50 = 0;
        func_0803A144(var_r5, var_r5 + 0x50, -1);
        temp_r0_19 = var_r5 + 0x60;
        var_r5->unk60 = 0;
        temp_r0_19->unk2 = 0;
        var_r5->unk58 = (s32) (*((temp_r0_19 + 2) - 0xE) << 0x10);
        var_r5->unk5C = (s32) (var_r5->unk56 << 0x10);
        goto block_52;
    }
    temp_r5_2 = sp4 - 1;
    sp4 = temp_r5_2;
    if (temp_r5_2 > 0) {
        goto loop_28;
    }
}
