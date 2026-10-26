void func_080A1FC4(void *arg0, u32 arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r1;
    s32 var_r1_10;
    s32 var_r1_11;
    s32 var_r1_12;
    s32 var_r1_13;
    s32 var_r1_14;
    s32 var_r1_15;
    s32 var_r1_16;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r1_7;
    s32 var_r1_8;
    s32 var_r1_9;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    u16 temp_r4_3;
    u16 temp_r4_4;
    u32 temp_r0;
    u8 temp_r1;
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_5;
    u8 temp_r4_6;

    if (arg1 <= 0x5FU) {
        return;
    }
    temp_r0 = arg1 - 0x60;
    switch (temp_r0) {                              /* irregular */
    case 0:
        temp_r1 = arg0->unk7;
        var_r2 = ((u32) (temp_r1 << 0x1D) >> 0x1D) - arg2;
        if (var_r2 < 0) {
            var_r2 = 0;
        }
        arg0->unk7 = (u8) ((-8 & temp_r1) | (var_r2 & 7));
        return;
    case 1:
        temp_r4 = arg0->unk7;
        var_r1 = ((u32) (temp_r4 << 0x1A) >> 0x1D) - arg2;
        if (var_r1 < 0) {
            var_r1 = 0;
        }
        arg0->unk7 = (u8) ((-0x39 & temp_r4) | ((var_r1 & 7) * 8));
        return;
    case 2:
        temp_r4_2 = arg0->unk7;
        var_r2_2 = (((arg0->unk8 & 1) * 4) | (temp_r4_2 >> 6)) - arg2;
        if (var_r2_2 < 0) {
            var_r2_2 = 0;
        }
        arg0->unk7 = (u8) ((0x3F & temp_r4_2) | ((3 & var_r2_2) << 6));
        var_r1_2 = ((u32) var_r2_2 >> 2) & 1;
        var_r0 = -2 & arg0->unk8;
block_21:
        arg0->unk8 = (u8) (var_r0 | var_r1_2);
        return;
    case 3:
        var_r1_3 = ((u32) (arg0->unk8 << 0x1C) >> 0x1D) - arg2;
        if (var_r1_3 < 0) {
            var_r1_3 = 0;
        }
        var_r1_2 = (var_r1_3 & 7) * 2;
        var_r0_2 = -0xF;
block_20:
        var_r0 = var_r0_2 & arg0->unk8;
        goto block_21;
    case 4:
        var_r1_4 = ((u32) (arg0->unk8 << 0x19) >> 0x1D) - arg2;
        if (var_r1_4 < 0) {
            var_r1_4 = 0;
        }
        var_r1_2 = (var_r1_4 & 7) * 0x10;
        var_r0_2 = -0x71;
        goto block_20;
    case 5:
        temp_r4_3 = (u16) arg0->unk8;
        var_r1_5 = ((u32) (temp_r4_3 << 0x16) >> 0x1D) - arg2;
        if (var_r1_5 < 0) {
            var_r1_5 = 0;
        }
        arg0->unk8 = (s16) ((0xFFFFFC7F & temp_r4_3) | ((var_r1_5 & 7) << 7));
        return;
    case 6:
        var_r1_6 = ((u32) (arg0->unk9 << 0x1B) >> 0x1D) - arg2;
        if (var_r1_6 < 0) {
            var_r1_6 = 0;
        }
        var_r1_7 = (var_r1_6 & 7) * 4;
        var_r0_3 = -0x1D;
block_31:
        arg0->unk9 = (u8) ((var_r0_3 & arg0->unk9) | var_r1_7);
        return;
    case 7:
        var_r0_4 = ((u8) arg0->unk9 >> 5) - arg2;
        if (var_r0_4 < 0) {
            var_r0_4 = 0;
        }
        var_r1_7 = var_r0_4 << 5;
        var_r0_3 = 0x1F;
        goto block_31;
    case 8:
        var_r1_8 = ((u32) (arg0->unkA << 0x1D) >> 0x1D) - arg2;
        if (var_r1_8 < 0) {
            var_r1_8 = 0;
        }
        var_r1_9 = var_r1_8 & 7;
        var_r0_5 = -8;
block_38:
        arg0->unkA = (u8) ((var_r0_5 & arg0->unkA) | var_r1_9);
        return;
    case 9:
        var_r1_10 = ((u32) (arg0->unkA << 0x1A) >> 0x1D) - arg2;
        if (var_r1_10 < 0) {
            var_r1_10 = 0;
        }
        var_r1_9 = (var_r1_10 & 7) * 8;
        var_r0_5 = -0x39;
        goto block_38;
    case 10:
        temp_r4_4 = (u16) arg0->unkA;
        var_r1_11 = ((u32) (temp_r4_4 << 0x17) >> 0x1D) - arg2;
        if (var_r1_11 < 0) {
            var_r1_11 = 0;
        }
        arg0->unkA = (s16) ((0xFFFFFE3F & temp_r4_4) | ((var_r1_11 & 7) << 6));
        return;
    case 11:
        var_r1_12 = ((u32) (arg0->unkB << 0x1C) >> 0x1D) - arg2;
        if (var_r1_12 < 0) {
            var_r1_12 = 0;
        }
        var_r1_13 = (var_r1_12 & 7) * 2;
        var_r0_6 = -0xF;
block_48:
        arg0->unkB = (u8) ((var_r0_6 & arg0->unkB) | var_r1_13);
        return;
    case 12:
        var_r1_14 = ((u32) (arg0->unkB << 0x19) >> 0x1D) - arg2;
        if (var_r1_14 < 0) {
            var_r1_14 = 0;
        }
        var_r1_13 = (var_r1_14 & 7) * 0x10;
        var_r0_6 = -0x71;
        goto block_48;
    case 13:
        temp_r4_5 = arg0->unkB;
        var_r2_3 = (((arg0->unkC & 3) * 2) | (temp_r4_5 >> 7)) - arg2;
        if (var_r2_3 < 0) {
            var_r2_3 = 0;
        }
        arg0->unkB = (u8) ((0x7F & temp_r4_5) | ((1 & var_r2_3) << 7));
        var_r1_15 = ((u32) var_r2_3 >> 1) & 3;
        var_r0_7 = -4 & arg0->unkC;
block_55:
        arg0->unkC = (u8) (var_r0_7 | var_r1_15);
        return;
    case 14:
        temp_r4_6 = arg0->unkC;
        var_r1_16 = ((u32) (temp_r4_6 << 0x1B) >> 0x1D) - arg2;
        if (var_r1_16 < 0) {
            var_r1_16 = 0;
        }
        var_r1_15 = (var_r1_16 & 7) * 4;
        var_r0_7 = -0x1D & temp_r4_6;
        goto block_55;
    }
}
