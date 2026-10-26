s32 func_0800E324(s32);                             /* extern */
s32 func_080171F8(s32, s32, s32);                     /* extern */
s32 method_0800A4A4__9FieldPlot(s32 *);                 /* extern */

void func_0801E90C(void *arg0) {
s32 sp0;
    s32 sp4;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 *var_r2;
    s32 *var_r2_2;
    s32 *var_r3;
    s32 *var_r3_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r2;
    s32 temp_r5_2;
    s32 temp_r7;
    s32 var_r1;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r3_3;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    u8 temp_r2_2;
    void *temp_r0;
    void *temp_r5;

    sp34 = 0;
    var_r4 = 0;
loop_1:
    temp_r0 = arg0->unk0->unk40(arg0, var_r4);
    if ((temp_r0 != 0) && (temp_r0->unk4 == 2)) {
        temp_r0->unk14->unkC(&sp4, temp_r0);
        spC = sp4;
        sp10 = sp8;
        sp14 = 0;
        temp_r0_2 = (s32) (((s32) (spC.unk0 << 0x10) >> 0x13) - 0x22) >> 1;
        sp18 = temp_r0_2;
        var_r2 = &sp14;
        if (temp_r0_2 > 0) {
            var_r2 = &sp18;
        }
        temp_r2 = *var_r2;
        sp1C = 0x2A;
        temp_r0_3 = (s32) (((s32) (spC.unk4 - 1) >> 3) - 0x22) >> 1;
        sp20 = temp_r0_3;
        var_r3 = &sp1C;
        if (temp_r0_3 < 0x2A) {
            var_r3 = &sp20;
        }
        temp_r7 = *var_r3;
        sp24 = 0;
        temp_r0_4 = (s32) (((s32) (spC.unk2 << 0x10) >> 0x13) - 0x16) >> 1;
        sp28 = temp_r0_4;
        var_r2_2 = &sp24;
        if (temp_r0_4 > 0) {
            var_r2_2 = &sp28;
        }
        sp2C = 0x18;
        temp_r0_5 = (s32) (((s32) (spC.unk6 - 1) >> 3) - 0x16) >> 1;
        sp30 = temp_r0_5;
        var_r3_2 = &sp2C;
        if (temp_r0_5 < 0x18) {
            var_r3_2 = &sp30;
        }
        var_r2_3 = *var_r3_2;
        var_r1 = *var_r2_2;
        if (var_r1 <= var_r2_3) {
            var_r3_3 = temp_r2 * 4;
            do {
                var_r4_2 = temp_r2;
                if (var_r4_2 <= temp_r7) {
                    var_r5 = var_r3_3 + (var_r1 * 0xAC);
                    do {
                        if (((u32) (*(arg0->unk1038 + 0x9DC + var_r5) << 0x18) >> 0x1A) == 0x15) {
                            sp38 = var_r2_3;
                            sp3C = var_r3_3;
                            method_0800A4A4__9FieldPlot(&sp0);
                            sp34 = 1;
                            var_r3_3 = sp3C;
                            var_r2_3 = sp38;
                        }
                        var_r5 += 4;
                        var_r4_2 += 1;
                    } while (var_r4_2 <= temp_r7);
                }
                var_r1 += 1;
            } while (var_r1 <= var_r2_3);
        }
    }
    var_r4 += 1;
    if (var_r4 <= 0x63) {
        goto loop_1;
    }
    if (sp34 != 0) {
        temp_r5 = arg0->unk4;
        if (temp_r5->unk0 == 2) {
            temp_r2_2 = arg0->unk104C;
            temp_r5->unk90->unk14(temp_r5, arg0->unk1048, temp_r2_2, 0x1E - temp_r2_2);
            return;
        }
        temp_r5_2 = arg0->unk1050;
        temp_r0_6 = arg0->unk1038;
        var_r2_4 = 0;
        if (func_0800E324(temp_r0_6 + 0x10) == 3) {
            var_r2_4 = 1;
        }
        func_080171F8(temp_r5_2, temp_r0_6 + 0x14, var_r2_4);
    }
}
