s32 func_080AA6D0(s32, s32, s32, s32, s32);           /* extern */
s32 method_0800A3C8__9FieldPlot(s32);                 /* extern */
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(s32, s32, s32); /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    s32 unk4;
    u8 _pad8[12];
    s32 unk14;
    u8 _pad18[4128];
    s32 unk1038;
} GenObj;
s32 func_0801DEB4(GenObj *arg0, GenObj *arg1) {
    s32 sp4;
    u32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 *var_r2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r7;
    s32 var_ip;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2_2;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_sb;
    u32 var_r3;
    u32 var_r4;
    u32 var_r8;

    sp4 = 0;
    var_r8 = 0;
    sp8 = 0;
    var_ip = 0;
    var_r4 = 0;
    sp18 = arg0->unk1038 + 0x9DC;
    do {
        var_r3 = 0;
        var_r5 = 0x118;
        var_r2 = (var_r4 * 0xAC) + sp18;
        sp1C = (var_r4 * 0x10) + 0xB8;
loop_2:
        temp_r1 = *var_r2;
        if ((((u32) (temp_r1 << 0x18) >> 0x1A) == 0x14) && (((u32) (temp_r1 << 0x14) >> 0x1C) == 5) && ((temp_r1_2 = var_r5 - arg1->unk0, temp_r0 = sp1C - arg1->unk2, temp_r1_3 = (temp_r1_2 * temp_r1_2) + (temp_r0 * temp_r0), (var_ip == 0)) || (temp_r1_3 < sp4))) {
            var_ip = 1;
            var_r8 = var_r3;
            sp8 = var_r4;
            sp4 = temp_r1_3;
        }
        var_r5 += 0x10;
        var_r2 += 4;
        var_r3 += 1;
        if (var_r3 <= 0x2AU) {
            goto loop_2;
        }
        var_r4 += 1;
    } while (var_r4 <= 0x18U);
    if (var_ip == 0) {
        return 0;
    }
    temp_r4 = var_r8 + (sp8 * 0x2B);
    method_0800A3C8__9FieldPlot(arg0->unk1038 + 0x9DC + (temp_r4 * 4));
    if (((void (*)(void *,...))(arg0->unk0->unk14))(arg0) == 2) {
        spC = (var_r8 * 2) + 0x22;
        sp10 = arg0->unk4;
        var_sb = (sp8 * 2) + 0x14;
        var_r5_2 = temp_r4 - 0x2B;
        var_r4_2 = sp8 - 1;
        sp14 = 2;
        do {
            var_r0 = 0;
            if (((s32) var_r8 >= 0) && (var_r4_2 >= 0) && ((s32) var_r8 <= 0x2A) && (var_r4_2 <= 0x18)) {
                var_r0 = 1;
            }
            if (var_r0 != 0) {
                var_r3_2 = arg0->unk1038 + 0x9DC + (var_r5_2 * 4);
            } else {
                var_r3_2 = 0;
            }
            if (var_r3_2 != 0) {
                temp_r2 = arg0->unk1038 + 0x9DC;
                temp_r0_2 = var_r4_2 + 1;
                var_r1 = 0;
                if (((s32) var_r8 >= 0) && (temp_r0_2 >= 0) && ((s32) var_r8 <= 0x2A) && (temp_r0_2 <= 0x18)) {
                    var_r1 = 1;
                }
                if (var_r1 != 0) {
                    var_r1_2 = temp_r2 + (((0x2B * temp_r0_2) + var_r8) * 4);
                } else {
                    var_r1_2 = 0;
                }
                temp_r0_3 = var_r4_2 - 1;
                var_r3_3 = 0;
                if (((s32) var_r8 >= 0) && (temp_r0_3 >= 0) && ((s32) var_r8 <= 0x2A) && (temp_r0_3 <= 0x18)) {
                    var_r3_3 = 1;
                }
                if (var_r3_3 != 0) {
                    var_r2_2 = temp_r2 + (((0x2B * temp_r0_3) + var_r8) * 4);
                } else {
                    var_r2_2 = 0;
                }
                func_080AA6D0(sp10, spC, var_sb, var_r3_2, method_0800AF5C__C9FieldPlotPC9FieldPlotT1((var_r5_2 * 4) + temp_r2, var_r1_2, var_r2_2));
            }
            var_sb += 2;
            var_r5_2 += 0x2B;
            var_r4_2 += 1;
            temp_r7 = sp14 - 1;
            sp14 = temp_r7;
        } while (temp_r7 >= 0);
    }
    return 1;
}
