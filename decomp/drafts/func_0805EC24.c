void func_0805EC24(s32 *arg0, s32 *arg1, u32 arg2, u32 arg3, void *arg4) {
    s16 temp_r2;
    s16 temp_r3;
    s16 temp_r6;
    s32 temp_r0;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r1;
    s32 var_r2;
    s32 var_r6;

    temp_r7 = (*arg0 + (arg2 >> 1)) << 8;
    temp_r0 = (*arg1 + (arg3 >> 1)) << 8;
    var_r0 = arg4->unk0 * 0x110;
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    var_r0_2 = arg4->unk2 * 0x110;
    if (var_r0_2 < 0) {
        var_r0_2 += 0xFF;
    }
    var_r0_3 = arg4->unk4 * 0x110;
    if (var_r0_3 < 0) {
        var_r0_3 += 0xFF;
    }
    var_r0_4 = arg4->unk6 * 0x110;
    if (var_r0_4 < 0) {
        var_r0_4 += 0xFF;
    }
    temp_r6 = (s16) ((u32) (var_r0 << 8) >> 0x10);
    temp_r4 = (s32) (var_r0_4 << 8) >> 0x10;
    temp_r2 = (s16) ((u32) (var_r0_2 << 8) >> 0x10);
    temp_r3 = (s16) ((u32) (var_r0_3 << 8) >> 0x10);
    var_r1 = (temp_r4 * temp_r6) - (temp_r3 * temp_r2);
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    temp_r5 = var_r1 >> 8;
    if (temp_r5 != 0) {
        temp_r2_2 = (temp_r7 * temp_r4) - (temp_r2 * temp_r0);
        temp_r4_2 = (temp_r6 * temp_r0) - (temp_r7 * temp_r3);
        if (temp_r5 == 0x100) {
            var_r0_5 = temp_r2_2;
            if (temp_r2_2 < 0) {
                var_r0_5 += 0xFF;
            }
            var_r6 = var_r0_5 >> 8;
            var_r0_6 = temp_r4_2;
            if (temp_r4_2 < 0) {
                var_r0_6 += 0xFF;
            }
            var_r2 = var_r0_6 >> 8;
        } else if (temp_r5 == -0x100) {
            var_r0_7 = temp_r2_2;
            if (temp_r2_2 < 0) {
                var_r0_7 += 0xFF;
            }
            var_r6 = 0 - (var_r0_7 >> 8);
            var_r0_8 = temp_r4_2;
            if (temp_r4_2 < 0) {
                var_r0_8 += 0xFF;
            }
            var_r2 = 0 - (var_r0_8 >> 8);
        } else {
            var_r6 = temp_r2_2 / temp_r5;
            var_r2 = temp_r4_2 / temp_r5;
        }
        *arg0 += (s32) (var_r6 - temp_r7) >> 8;
        *arg1 += (s32) (var_r2 - temp_r0) >> 8;
    }
}
