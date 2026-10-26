s32 AddAffection__6Animali(void *, s32);              /* extern */
s32 __3DogPCc(void *, s32);                           /* extern */
s32 __4FarmPCc(void *);                               /* extern */
s32 __6FarmerPCcRC8GameDate(void *, s32, s8 *);         /* extern */
s32 func_0800FF8C(void *);                            /* extern */
s32 func_08010348();                                /* extern */
s32 func_080114F8(void *);                            /* extern */
s32 func_08011510(void *);                            /* extern */
s32 func_0809A8AC(void *);                            /* extern */
s32 func_0809AB8C(void *);                            /* extern */
s32 func_0809BFE8(void *);                            /* extern */
s32 func_0809C144(void *);                            /* extern */
s32 func_0809C4E4(void *);                            /* extern */
s32 func_0809C6BC(void *);                            /* extern */
s32 func_0809CD78(void *);                            /* extern */
s32 func_0809CE8C(void *);                            /* extern */
s32 func_0809EEE8(void *);                            /* extern */
s32 func_080A1A48(void *);                            /* extern */
s32 method_0800A134__9FieldPlotii(void *, s32, s32);  /* extern */
s32 method_0800A78C__C9FieldPlot(void *);           /* extern */
u32 rand();                                         /* extern */

void *func_08010358(void *arg0, ? arg2, s8 arg3, s32 arg4) {
    u32 sp0;
    s32 sp4;
    s32 sp8;
    s8 spC;
    s32 sp10;
    s32 sp14;
    u32 sp18;
    void *sp48;
    u32 *sp4C;
    u32 sp50;
    u32 *sp54;
    u32 sp58;
    u32 *sp5C;
    u32 sp60;
    u32 *sp64;
    u32 sp68;
    u32 *sp6C;
    u32 sp70;
    u32 *sp74;
    u32 sp78;
    u32 sp7C;
    u32 sp80;
    u32 sp84;
    u32 sp88;
    u32 *sp8C;
    u32 *sp90;
    u32 *sp94;
    u32 *sp98;
    u32 *sp9C;
    u32 spA0;
    u32 spA4;
    s32 temp_r0_11;
    s32 temp_r0_13;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r0_9;
    s32 temp_r1_10;
    s32 temp_r1_12;
    s32 temp_r1_14;
    s32 temp_r1_2;
    s32 temp_r1_5;
    s32 temp_r1_8;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 temp_r2_6;
    s32 temp_r2_7;
    s32 temp_r2_8;
    s32 temp_r2_9;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 var_r0_12;
    s32 var_r0_14;
    s32 var_r0_17;
    s32 var_r0_20;
    s32 var_r0_6;
    s32 var_r0_9;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r3;
    s8 *var_r0;
    s8 *var_r0_2;
    u32 *temp_r3;
    u32 *temp_r3_2;
    u32 *temp_r3_3;
    u32 *temp_r3_4;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_12;
    u32 temp_r0_3;
    u32 temp_r0_5;
    u32 temp_r0_8;
    u32 temp_r1_11;
    u32 temp_r1_13;
    u32 temp_r1_15;
    u32 temp_r1_3;
    u32 temp_r1_6;
    u32 temp_r1_9;
    u32 var_r0_10;
    u32 var_r0_11;
    u32 var_r0_13;
    u32 var_r0_15;
    u32 var_r0_16;
    u32 var_r0_18;
    u32 var_r0_19;
    u32 var_r0_4;
    u32 var_r0_5;
    u32 var_r0_7;
    u32 var_r0_8;
    u32 var_r1_10;
    u32 var_r1_4;
    u32 var_r1_5;
    u32 var_r1_6;
    u32 var_r1_7;
    u32 var_r1_8;
    u32 var_r1_9;
    u32 var_r6;
    u32 var_r6_2;
    u32 var_r6_3;
    u32 var_r6_4;
    u32 var_r6_5;
    u32 var_r6_6;
    u8 *var_r2;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r1_4;
    void *temp_r1_7;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r6_3;
    void *var_r0_3;

    sp48 = arg0;
    spC = arg3;
    sp48->unk0 = (u8) (-2 & sp48->unk0 & ~2 & ~4 & ~8 & ~0x10);
    sp48->unk0 = (s32) ((s32) sp48->unk0 & 0xFFFC1FFF);
    sp48->unk2 = (u16) (0xFFFFFE03 & sp48->unk2);
    sp48->unk3 = (u8) (-0x7F & sp48->unk3 & 0x7F);
    sp48->unk4 = (u8) (-2 & sp48->unk4);
    sp0 = 0x1D;
    sp4 = 0;
    sp8.unk0 = 1;
    sp8.unk1 = (s8) ((-4 & saved_reg_r4 & ~0x7C) | 4);
    sp8.unk2 = (s16) (((0xFFFFFF00 & saved_reg_r9) | (u8) ((-0x20 & saved_reg_r9) | 6)) & 0xFFFFF81F);
    temp_r2 = sp48 + 8;
    sp48->unk8 = 0;
    temp_r2->unk4 = 0;
    temp_r2->unk8 = sp8;
    __4FarmPCc(sp48 + 0x14);
    func_0809AB8C(sp48 + 0x1AA8);
    __6FarmerPCcRC8GameDate(sp48 + 0x1BD8, arg2, &spC);
    __3DogPCc(sp48 + 0x1C70, arg4);
    func_0800FF8C(sp48 + 0x1CA0);
    temp_r1 = sp48 + 0x1CCC;
    sp48->unk1CCC = (u16) ((0xFFFFFC00 & sp48->unk1CCC) | 0x234);
    temp_r1->unk1 = (u8) (3 & temp_r1->unk1);
    temp_r1->unk2 = (u16) (0xFFFFFC00 & temp_r1->unk2);
    temp_r1->unk3 = (u8) (3 & temp_r1->unk3);
    temp_r1->unk4 = (u16) (0xFFFFFC00 & temp_r1->unk4);
    func_0809EEE8(sp48 + 0x1CD4);
    func_0809C6BC(sp48 + 0x214C);
    temp_r2_2 = sp48 + 0x21CC;
    sp48->unk21CC = func_08010348();
    temp_r2_2->unk4 = 0;
    sp48->unk21E0 = 0;
    sp48->unk21F0 = 0;
    sp48->unk2200 = 0;
    sp10 = 0;
    var_r0 = sp48 + 0x21D4;
    var_r1 = 8;
    temp_r3 = &sp0 + 0x20;
    sp8C = temp_r3;
    temp_r3_2 = temp_r3 + 8;
    sp90 = temp_r3_2;
    temp_r3_3 = temp_r3_2 + 8;
    sp94 = temp_r3_3;
    temp_r3_4 = temp_r3_3 + 8;
    sp98 = temp_r3_4;
    sp9C = temp_r3_4 + 8;
    do {
        *var_r0 = 0;
        var_r1 -= 1;
        var_r0 += 1;
    } while (var_r1 > 0);
    sp14 = 0;
    var_r0_2 = temp_r2_2 + 0x10;
    var_r1_2 = 4;
    do {
        *var_r0_2 = (s8) sp14;
        var_r1_2 -= 1;
        var_r0_2 += 1;
    } while (var_r1_2 > 0);
    func_080114F8(sp48 + 0x2210);
    func_0809A8AC(sp48 + 0x2214);
    temp_r2_3 = sp48 + 0x2C1C;
    sp48->unk2C48 = (u8) (sp48->unk2C48 | 3);
    temp_r2_3->unk2C = (s32) (temp_r2_3->unk2C & 0xFFF80003);
    sp48->unk2C4A = (u8) (-9 & sp48->unk2C4A & ~0x10 & ~0x20 & ~0x40 & 0x7F);
    var_r0_3 = sp48 + 0x2C4C;
    var_r1_3 = 9;
    do {
        var_r0_3->unk0 = 0;
        var_r0_3->unk2 = 0;
        var_r0_3 += 4;
        var_r1_3 -= 1;
    } while (var_r1_3 != -1);
    func_08011510(sp48 + 0x2C74);
    func_0809CD78(sp48 + 0x2C80);
    func_0809CE8C(sp48 + 0x2E58);
    func_0809C144(sp48 + 0x3480);
    var_r2 = sp48 + 0x3494;
    var_r3 = 2;
    do {
        *var_r2 &= -0x10;
        var_r2 += 0x10;
        var_r3 -= 1;
    } while (var_r3 != -1);
    sp48->unk34C4 = 0;
    sp48->unk34C5 = 0;
    func_080A1A48(sp48 + 0x34C8);
    func_0809C4E4(sp48 + 0x34D8);
    func_0809BFE8(sp48 + 0x34DC);
    AddAffection__6Animali(sp48 + 0x1C70, 0x32);
    var_r0_4 = 0;
    temp_r6 = sp48 + 0x9DC;
    sp4C = &sp18;
loop_9:
    sp50 = 0;
    sp80 = var_r0_4 + 1;
loop_10:
    if (1 != 0) {
        var_r6 = rand() % 42U;
        var_r0_5 = rand();
        var_r1_4 = 0x18;
    } else {
        var_r6 = rand() % 43U;
        var_r0_5 = rand();
        var_r1_4 = 0x19;
    }
    temp_r0 = var_r0_5 % var_r1_4;
    temp_r0_2 = 0x2B * temp_r0;
    if (((method_0800A78C__C9FieldPlot() << 0x18) == 0) && ((1 == 0) || ((temp_r5 = var_r6 + 1, ((method_0800A78C__C9FieldPlot(((temp_r5 + temp_r0_2) * 4) + temp_r6) << 0x18) == 0)) && (temp_r4 = 0x2B * (temp_r0 + 1), ((method_0800A78C__C9FieldPlot(((var_r6 + temp_r4) * 4) + temp_r6) << 0x18) == 0)) && ((method_0800A78C__C9FieldPlot(((temp_r5 + temp_r4) * 4) + temp_r6) << 0x18) == 0))) && (((u32) (*(((var_r6 + temp_r0_2) * 4) + temp_r6) << 0x14) >> 0x1C) == 0) && ((1 == 0) || ((temp_r2_4 = var_r6 + 1, (((u32) (*(((temp_r2_4 + temp_r0_2) * 4) + temp_r6) << 0x14) >> 0x1C) == 0)) && (temp_r1_2 = 0x2B * (temp_r0 + 1), (((u32) (*(((var_r6 + temp_r1_2) * 4) + temp_r6) << 0x14) >> 0x1C) == 0)) && (((u32) (*(((temp_r2_4 + temp_r1_2) * 4) + temp_r6) << 0x14) >> 0x1C) == 0)))) {
        sp4C->unk0 = var_r6;
        sp4C->unk4 = temp_r0;
        var_r0_6 = 1;
    } else {
        temp_r1_3 = sp50 + 1;
        sp50 = temp_r1_3;
        if (temp_r1_3 <= 0x63U) {
            goto loop_10;
        }
        var_r0_6 = 0;
    }
    if (var_r0_6 != 0) {
        method_0800A134__9FieldPlotii(((sp18 + (0x2B * sp4C->unk4)) * 4) + temp_r6, 0x1F, 8);
        method_0800A134__9FieldPlotii(((sp18 + 1 + (0x2B * sp4C->unk4)) * 4) + temp_r6, 0x20, 8);
        method_0800A134__9FieldPlotii(((sp18 + (0x2B * (sp4C->unk4 + 1))) * 4) + temp_r6, 0x21, 8);
        method_0800A134__9FieldPlotii(((sp18 + 1 + (0x2B * (sp4C->unk4 + 1))) * 4) + temp_r6, 0x22, 8);
    }
    var_r0_4 = sp80;
    if (var_r0_4 <= 9U) {
        goto loop_9;
    }
    var_r0_7 = 0;
    temp_r1_4 = sp48 + 0x9DC;
    sp54 = sp8C;
loop_32:
    sp58 = 0;
    sp88 = var_r0_7 + 1;
loop_33:
    if (1 != 0) {
        var_r6_2 = rand() % 42U;
        var_r0_8 = rand();
        var_r1_5 = 0x18;
    } else {
        var_r6_2 = rand() % 43U;
        var_r0_8 = rand();
        var_r1_5 = 0x19;
    }
    temp_r0_3 = var_r0_8 % var_r1_5;
    temp_r0_4 = 0x2B * temp_r0_3;
    if (((method_0800A78C__C9FieldPlot() << 0x18) == 0) && ((1 == 0) || ((temp_r5_2 = var_r6_2 + 1, ((method_0800A78C__C9FieldPlot(((temp_r5_2 + temp_r0_4) * 4) + temp_r1_4) << 0x18) == 0)) && (temp_r4_2 = 0x2B * (temp_r0_3 + 1), ((method_0800A78C__C9FieldPlot(((var_r6_2 + temp_r4_2) * 4) + temp_r1_4) << 0x18) == 0)) && ((method_0800A78C__C9FieldPlot(((temp_r5_2 + temp_r4_2) * 4) + temp_r1_4) << 0x18) == 0))) && (((u32) (*(((var_r6_2 + temp_r0_4) * 4) + temp_r1_4) << 0x14) >> 0x1C) == 0) && ((1 == 0) || ((temp_r2_5 = var_r6_2 + 1, (((u32) (*(((temp_r2_5 + temp_r0_4) * 4) + temp_r1_4) << 0x14) >> 0x1C) == 0)) && (temp_r1_5 = 0x2B * (temp_r0_3 + 1), (((u32) (*(((var_r6_2 + temp_r1_5) * 4) + temp_r1_4) << 0x14) >> 0x1C) == 0)) && (((u32) (*(((temp_r2_5 + temp_r1_5) * 4) + temp_r1_4) << 0x14) >> 0x1C) == 0)))) {
        sp54->unk0 = var_r6_2;
        sp54->unk4 = temp_r0_3;
        var_r0_9 = 1;
    } else {
        temp_r1_6 = sp58 + 1;
        sp58 = temp_r1_6;
        if (temp_r1_6 > 0x63U) {
            var_r0_9 = 0;
        } else {
            goto loop_33;
        }
    }
    if (var_r0_9 != 0) {
        method_0800A134__9FieldPlotii(((sp20 + (0x2B * sp54->unk4)) * 4) + temp_r1_4, 0x23, 8);
        method_0800A134__9FieldPlotii(((sp20 + 1 + (0x2B * sp54->unk4)) * 4) + temp_r1_4, 0x24, 8);
        method_0800A134__9FieldPlotii(((sp20 + (0x2B * (sp54->unk4 + 1))) * 4) + temp_r1_4, 0x25, 8);
        method_0800A134__9FieldPlotii(((sp20 + 1 + (0x2B * (sp54->unk4 + 1))) * 4) + temp_r1_4, 0x26, 8);
    }
    var_r0_7 = sp88;
    if (var_r0_7 <= 4U) {
        goto loop_32;
    }
    var_r0_10 = 0;
    temp_r1_7 = sp48 + 0x9DC;
    sp5C = sp90;
loop_54:
    sp60 = 0;
    spA4 = var_r0_10 + 1;
loop_55:
    if (1 != 0) {
        var_r6_3 = rand() % 42U;
        var_r0_11 = rand();
        var_r1_6 = 0x18;
    } else {
        var_r6_3 = rand() % 43U;
        var_r0_11 = rand();
        var_r1_6 = 0x19;
    }
    temp_r0_5 = var_r0_11 % var_r1_6;
    temp_r0_6 = 0x2B * temp_r0_5;
    if (((method_0800A78C__C9FieldPlot() << 0x18) == 0) && ((1 == 0) || ((temp_r5_3 = var_r6_3 + 1, ((method_0800A78C__C9FieldPlot(((temp_r5_3 + temp_r0_6) * 4) + temp_r1_7) << 0x18) == 0)) && (temp_r4_3 = 0x2B * (temp_r0_5 + 1), ((method_0800A78C__C9FieldPlot(((var_r6_3 + temp_r4_3) * 4) + temp_r1_7) << 0x18) == 0)) && ((method_0800A78C__C9FieldPlot(((temp_r5_3 + temp_r4_3) * 4) + temp_r1_7) << 0x18) == 0))) && (((u32) (*(((var_r6_3 + temp_r0_6) * 4) + temp_r1_7) << 0x14) >> 0x1C) == 0) && ((1 == 0) || ((temp_r2_6 = var_r6_3 + 1, (((u32) (*(((temp_r2_6 + temp_r0_6) * 4) + temp_r1_7) << 0x14) >> 0x1C) == 0)) && (temp_r1_8 = 0x2B * (temp_r0_5 + 1), (((u32) (*(((var_r6_3 + temp_r1_8) * 4) + temp_r1_7) << 0x14) >> 0x1C) == 0)) && (((u32) (*(((temp_r2_6 + temp_r1_8) * 4) + temp_r1_7) << 0x14) >> 0x1C) == 0)))) {
        sp5C->unk0 = var_r6_3;
        sp5C->unk4 = temp_r0_5;
        var_r0_12 = 1;
    } else {
        temp_r1_9 = sp60 + 1;
        sp60 = temp_r1_9;
        if (temp_r1_9 > 0x63U) {
            var_r0_12 = 0;
        } else {
            goto loop_55;
        }
    }
    if (var_r0_12 != 0) {
        method_0800A134__9FieldPlotii(((sp28 + (0x2B * sp5C->unk4)) * 4) + temp_r1_7, 0x1B, 8);
        method_0800A134__9FieldPlotii(((sp28 + 1 + (0x2B * sp5C->unk4)) * 4) + temp_r1_7, 0x1C, 8);
        method_0800A134__9FieldPlotii(((sp28 + (0x2B * (sp5C->unk4 + 1))) * 4) + temp_r1_7, 0x1D, 8);
        method_0800A134__9FieldPlotii(((sp28 + 1 + (0x2B * (sp5C->unk4 + 1))) * 4) + temp_r1_7, 0x1E, 8);
    }
    var_r0_10 = spA4;
    if (var_r0_10 <= 9U) {
        goto loop_54;
    }
    var_r1_7 = 0;
    temp_r0_7 = sp48 + 0x9DC;
    sp64 = sp94;
loop_76:
    sp68 = 0;
    sp7C = var_r1_7 + 1;
loop_77:
    if (0 != 0) {
        var_r6_4 = rand() % 42U;
        var_r0_13 = rand();
        var_r1_8 = 0x18;
    } else {
        var_r6_4 = rand() % 43U;
        var_r0_13 = rand();
        var_r1_8 = 0x19;
    }
    temp_r0_8 = var_r0_13 % var_r1_8;
    temp_r0_9 = 0x2B * temp_r0_8;
    if (((method_0800A78C__C9FieldPlot() << 0x18) == 0) && ((0 == 0) || ((temp_r5_4 = var_r6_4 + 1, ((method_0800A78C__C9FieldPlot(((temp_r5_4 + temp_r0_9) * 4) + temp_r0_7) << 0x18) == 0)) && (temp_r4_4 = 0x2B * (temp_r0_8 + 1), ((method_0800A78C__C9FieldPlot(((var_r6_4 + temp_r4_4) * 4) + temp_r0_7) << 0x18) == 0)) && ((method_0800A78C__C9FieldPlot(((temp_r5_4 + temp_r4_4) * 4) + temp_r0_7) << 0x18) == 0))) && (((u32) (*(((var_r6_4 + temp_r0_9) * 4) + temp_r0_7) << 0x14) >> 0x1C) == 0) && ((0 == 0) || ((temp_r2_7 = var_r6_4 + 1, (((u32) (*(((temp_r2_7 + temp_r0_9) * 4) + temp_r0_7) << 0x14) >> 0x1C) == 0)) && (temp_r1_10 = 0x2B * (temp_r0_8 + 1), (((u32) (*(((var_r6_4 + temp_r1_10) * 4) + temp_r0_7) << 0x14) >> 0x1C) == 0)) && (((u32) (*(((temp_r2_7 + temp_r1_10) * 4) + temp_r0_7) << 0x14) >> 0x1C) == 0)))) {
        sp64->unk0 = var_r6_4;
        sp64->unk4 = temp_r0_8;
        var_r0_14 = 1;
    } else {
        temp_r1_11 = sp68 + 1;
        sp68 = temp_r1_11;
        if (temp_r1_11 > 0x63U) {
            var_r0_14 = 0;
        } else {
            goto loop_77;
        }
    }
    if (var_r0_14 != 0) {
        method_0800A134__9FieldPlotii(((sp30 + (sp94->unk4 * 0x2B)) * 4) + temp_r0_7, 0x15, 8);
    }
    var_r1_7 = sp7C;
    if (var_r1_7 <= 0x12BU) {
        goto loop_76;
    }
    var_r0_15 = 0;
    temp_r6_2 = sp48 + 0x9DC;
    sp6C = sp98;
loop_98:
    sp70 = 0;
    sp84 = var_r0_15 + 1;
loop_99:
    if (0 != 0) {
        var_r6_5 = rand() % 42U;
        var_r0_16 = rand();
        var_r1_9 = 0x18;
    } else {
        var_r6_5 = rand() % 43U;
        var_r0_16 = rand();
        var_r1_9 = 0x19;
    }
    temp_r0_10 = var_r0_16 % var_r1_9;
    temp_r0_11 = 0x2B * temp_r0_10;
    if (((method_0800A78C__C9FieldPlot() << 0x18) == 0) && ((0 == 0) || ((temp_r5_5 = var_r6_5 + 1, ((method_0800A78C__C9FieldPlot(((temp_r5_5 + temp_r0_11) * 4) + temp_r6_2) << 0x18) == 0)) && (temp_r4_5 = 0x2B * (temp_r0_10 + 1), ((method_0800A78C__C9FieldPlot(((var_r6_5 + temp_r4_5) * 4) + temp_r6_2) << 0x18) == 0)) && ((method_0800A78C__C9FieldPlot(((temp_r5_5 + temp_r4_5) * 4) + temp_r6_2) << 0x18) == 0))) && (((u32) (*(((var_r6_5 + temp_r0_11) * 4) + temp_r6_2) << 0x14) >> 0x1C) == 0) && ((0 == 0) || ((temp_r2_8 = var_r6_5 + 1, (((u32) (*(((temp_r2_8 + temp_r0_11) * 4) + temp_r6_2) << 0x14) >> 0x1C) == 0)) && (temp_r1_12 = 0x2B * (temp_r0_10 + 1), (((u32) (*(((var_r6_5 + temp_r1_12) * 4) + temp_r6_2) << 0x14) >> 0x1C) == 0)) && (((u32) (*(((temp_r2_8 + temp_r1_12) * 4) + temp_r6_2) << 0x14) >> 0x1C) == 0)))) {
        sp6C->unk0 = var_r6_5;
        sp6C->unk4 = temp_r0_10;
        var_r0_17 = 1;
    } else {
        temp_r1_13 = sp70 + 1;
        sp70 = temp_r1_13;
        if (temp_r1_13 > 0x63U) {
            var_r0_17 = 0;
        } else {
            goto loop_99;
        }
    }
    if (var_r0_17 != 0) {
        method_0800A134__9FieldPlotii(((sp38 + (sp98->unk4 * 0x2B)) * 4) + temp_r6_2, 0x16, 8);
    }
    var_r0_15 = sp84;
    if (var_r0_15 <= 0x31U) {
        goto loop_98;
    }
    var_r0_18 = 0;
    temp_r6_3 = sp48 + 0x9DC;
    sp74 = sp9C;
loop_120:
    sp78 = 0;
    spA0 = var_r0_18 + 1;
loop_121:
    if (0 != 0) {
        var_r6_6 = rand() % 42U;
        var_r0_19 = rand();
        var_r1_10 = 0x18;
    } else {
        var_r6_6 = rand() % 43U;
        var_r0_19 = rand();
        var_r1_10 = 0x19;
    }
    temp_r0_12 = var_r0_19 % var_r1_10;
    temp_r0_13 = 0x2B * temp_r0_12;
    if (((method_0800A78C__C9FieldPlot() << 0x18) == 0) && ((0 == 0) || ((temp_r5_6 = var_r6_6 + 1, ((method_0800A78C__C9FieldPlot(((temp_r5_6 + temp_r0_13) * 4) + temp_r6_3) << 0x18) == 0)) && (temp_r4_6 = 0x2B * (temp_r0_12 + 1), ((method_0800A78C__C9FieldPlot(((var_r6_6 + temp_r4_6) * 4) + temp_r6_3) << 0x18) == 0)) && ((method_0800A78C__C9FieldPlot(((temp_r5_6 + temp_r4_6) * 4) + temp_r6_3) << 0x18) == 0))) && (((u32) (*(((var_r6_6 + temp_r0_13) * 4) + temp_r6_3) << 0x14) >> 0x1C) == 0) && ((0 == 0) || ((temp_r2_9 = var_r6_6 + 1, (((u32) (*(((temp_r2_9 + temp_r0_13) * 4) + temp_r6_3) << 0x14) >> 0x1C) == 0)) && (temp_r1_14 = 0x2B * (temp_r0_12 + 1), (((u32) (*(((var_r6_6 + temp_r1_14) * 4) + temp_r6_3) << 0x14) >> 0x1C) == 0)) && (((u32) (*(((temp_r2_9 + temp_r1_14) * 4) + temp_r6_3) << 0x14) >> 0x1C) == 0)))) {
        sp74->unk0 = var_r6_6;
        sp74->unk4 = temp_r0_12;
        var_r0_20 = 1;
    } else {
        temp_r1_15 = sp78 + 1;
        sp78 = temp_r1_15;
        if (temp_r1_15 > 0x63U) {
            var_r0_20 = 0;
        } else {
            goto loop_121;
        }
    }
    if (var_r0_20 != 0) {
        method_0800A134__9FieldPlotii(((sp40 + (sp9C->unk4 * 0x2B)) * 4) + temp_r6_3, 0x17, 8);
    }
    var_r0_18 = spA0;
    if (var_r0_18 <= 0x31U) {
        goto loop_120;
    }
    return sp48;
}
