s32 func_080AC070(s32 *, s32 *);                    /* extern */

s32 func_0802AEA4(void *arg0) {
    s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp18;
    s16 temp_r1_2;
    s16 temp_r1_4;
    s16 temp_r1_6;
    s16 temp_r1_7;
    s16 var_r0;
    s16 var_r0_10;
    s16 var_r0_2;
    s16 var_r0_5;
    s32 *var_r0_12;
    s32 *var_r0_15;
    s32 *var_r0_4;
    s32 *var_r0_8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r1_8;
    s32 temp_r2;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 var_r0_13;
    s32 var_r0_14;
    s32 var_r0_6;
    s32 var_r0_9;
    u16 temp_r3;
    u16 temp_r6;
    u8 var_r0_11;
    u8 var_r0_3;
    u8 var_r0_7;
    void **temp_r1;

    temp_r1 = arg0->unk0;
    temp_r6 = arg0->unk4;
    (*temp_r1)->unk34(&sp0, temp_r1, temp_r6);
    arg0->unk14->unkC(&spC, arg0);
    sp14 = spC;
    sp18 = sp10;
    if ((func_080AC070(&sp0, &sp14) << 0x18) != 0) {
        goto block_57;
    }
    if ((u32) (temp_r6 - 0x34) > 0x1FFU) {
        goto block_58;
    }
    var_r0 = sp14.unk0;
    if ((s32) var_r0 < 0) {
        var_r0 += 7;
    }
    temp_r6_2 = var_r0 >> 3;
    var_r0_2 = sp14.unk2;
    if ((s32) var_r0_2 < 0) {
        var_r0_2 += 7;
    }
    temp_r0 = var_r0_2 >> 3;
    temp_r3 = sp0.unk8;
    if ((sp0 != 0) && ((u32) temp_r6_2 <= (u32) temp_r3) && ((u32) temp_r0 <= (u32) sp0.unkA)) {
        var_r0_3 = (temp_r3 * temp_r0) + temp_r6_2;
        if (sp4 != 0) {
            var_r0_3 = *(sp4 + var_r0_3);
        }
        var_r0_4 = sp0 + (var_r0_3 * 4);
    } else {
        var_r0_4 = 0;
    }
    if ((var_r0_4 != 0) && (*var_r0_4 & 0x1FFFC)) {
        goto block_57;
    }
    var_r0_5 = sp14.unk0;
    if ((s32) var_r0_5 < 0) {
        var_r0_5 += 7;
    }
    temp_r6_3 = var_r0_5 >> 3;
    temp_r1_2 = sp14.unk6;
    var_r0_6 = temp_r1_2 - 1;
    if (var_r0_6 < 0) {
        var_r0_6 = temp_r1_2 + 6;
    }
    temp_r0_2 = var_r0_6 >> 3;
    temp_r2 = sp0.unk0;
    if ((temp_r2 != 0) && ((u32) temp_r6_3 <= (u32) temp_r3) && ((u32) temp_r0_2 <= (u32) sp0.unkA)) {
        temp_r1_3 = sp0.unk4;
        var_r0_7 = (temp_r3 * temp_r0_2) + temp_r6_3;
        if (temp_r1_3 != 0) {
            var_r0_7 = *(temp_r1_3 + var_r0_7);
        }
        var_r0_8 = temp_r2 + (var_r0_7 * 4);
    } else {
        var_r0_8 = 0;
    }
    if ((var_r0_8 == 0) || !(*var_r0_8 & 0x1FFFC)) {
        temp_r1_4 = sp14.unk4;
        var_r0_9 = temp_r1_4 - 1;
        if (var_r0_9 < 0) {
            var_r0_9 = temp_r1_4 + 6;
        }
        temp_r6_4 = var_r0_9 >> 3;
        var_r0_10 = sp14.unk2;
        if ((s32) var_r0_10 < 0) {
            var_r0_10 += 7;
        }
        temp_r0_3 = var_r0_10 >> 3;
        if ((temp_r2 != 0) && ((u32) temp_r6_4 <= (u32) temp_r3) && ((u32) temp_r0_3 <= (u32) sp0.unkA)) {
            temp_r1_5 = sp0.unk4;
            var_r0_11 = (temp_r3 * temp_r0_3) + temp_r6_4;
            if (temp_r1_5 != 0) {
                var_r0_11 = *(temp_r1_5 + var_r0_11);
            }
            var_r0_12 = temp_r2 + (var_r0_11 * 4);
        } else {
            var_r0_12 = 0;
        }
        if ((var_r0_12 == 0) || !(*var_r0_12 & 0x1FFFC)) {
            temp_r1_6 = sp14.unk4;
            var_r0_13 = temp_r1_6 - 1;
            if (var_r0_13 < 0) {
                var_r0_13 = temp_r1_6 + 6;
            }
            temp_r6_5 = var_r0_13 >> 3;
            temp_r1_7 = sp14.unk6;
            var_r0_14 = temp_r1_7 - 1;
            if (var_r0_14 < 0) {
                var_r0_14 = temp_r1_7 + 6;
            }
            temp_r0_4 = var_r0_14 >> 3;
            if ((temp_r2 != 0) && ((u32) temp_r6_5 <= (u32) temp_r3) && ((u32) temp_r0_4 <= (u32) sp0.unkA)) {
                temp_r1_8 = sp0.unk4;
                temp_r0_5 = (temp_r3 * temp_r0_4) + temp_r6_5;
                if (temp_r1_8 != 0) {
                    var_r0_15 = temp_r2 + (*(temp_r1_8 + temp_r0_5) * 4);
                } else {
                    var_r0_15 = temp_r2 + (temp_r0_5 * 4);
                }
            } else {
                var_r0_15 = 0;
            }
            if ((var_r0_15 != 0) && (*var_r0_15 & 0x1FFFC)) {
                goto block_57;
            }
block_58:
            return 0;
        }
        goto block_57;
    }
block_57:
    return 1;
}
