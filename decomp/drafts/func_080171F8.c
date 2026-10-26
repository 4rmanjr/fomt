void *GetMapData(u32);                              /* extern */
s32 GetUpgradeLevel__C4Barn(s32);                   /* extern */
s32 GetUpgradeLevel__C4Coop(s32);                   /* extern */
u32 GetUpgradeLevel__C9FarmHouse(s32);              /* extern */
s32 func_08017180(s32 *, u16, ? *, s32, u32);         /* extern */
s32 method_0800A07C__C9FieldPlot(s32);              /* extern */
extern ? gUnk_0810692C;
extern ? gUnk_08106944;
extern ? gUnk_0810695C;
extern ? gUnk_08106974;
extern ? gUnk_0810698C;
extern ? gUnk_081069A4;
extern ? gUnk_081069BC;
extern ? gUnk_081069D4;
extern ? gUnk_081069EC;
extern ? gUnk_08106A04;
extern ? gUnk_08106A1C;
extern ? gUnk_08106A34;
extern ? gUnk_08106A4C;
extern ? gUnk_08106A64;

void func_080171F8(s32 *arg0, s32 arg1, u8 arg2) {
    s32 *sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    u32 sp14;
    ? *var_r2_2;
    ? *var_r2_3;
    ? *var_r2_4;
    ? *var_r2_5;
    ? *var_r2_6;
    ? *var_r2_7;
    ? *var_r2_8;
    s32 *temp_r3;
    s32 *temp_r4_3;
    s32 *var_r5;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r2_2;
    s32 temp_r4_2;
    s32 var_r5_2;
    s32 var_r6;
    u16 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r4;
    u32 var_r1;
    u32 var_r2;
    u32 var_r7;
    u8 temp_r2;
    void *temp_r0;

    sp4 = arg0;
    sp8 = arg1;
    temp_r2 = arg2;
    spC = (s32) temp_r2;
    temp_r0 = GetMapData((u32) ((0 - temp_r2) | temp_r2) >> 0x1F);
    temp_r0_2 = temp_r0->unk20;
    var_r2 = 0;
    temp_r4 = temp_r0->unk22 * temp_r0_2;
    if (temp_r4 > 0U) {
        var_r5 = sp4;
        do {
            *var_r5 = *((*(temp_r0->unk1C + var_r2) * 4) + temp_r0->unk18);
            var_r5 += 4;
            var_r2 += 1;
        } while (var_r2 < temp_r4);
    }
    var_r1 = 0;
    sp10 = sp8 + 0x9C8;
    do {
        var_r7 = 0;
        sp14 = var_r1 + 1;
        var_r6 = 0x22;
        var_r5_2 = (var_r1 * 0xAC) + sp10;
loop_5:
        temp_r4_2 = var_r6 + (temp_r0_2 * ((var_r1 * 2) + 0x16));
        temp_r3 = &sp4[temp_r4_2];
        temp_r4_3 = &sp4[temp_r4_2 + temp_r0_2];
        temp_r2_2 = 1 & method_0800A07C__C9FieldPlot(var_r5_2);
        temp_r4_3->unk4 = (u8) ((-2 & temp_r4_3->unk4) | temp_r2_2);
        temp_r4_3->unk0 = (u8) ((-2 & temp_r4_3->unk0) | temp_r2_2);
        temp_r3->unk4 = (u8) ((-2 & temp_r3->unk4) | temp_r2_2);
        temp_r3->unk0 = (u8) ((-2 & temp_r3->unk0) | temp_r2_2);
        var_r6 += 2;
        var_r5_2 += 4;
        var_r7 += 1;
        if (var_r7 <= 0x2AU) {
            goto loop_5;
        }
        var_r1 = sp14;
    } while (var_r1 <= 0x18U);
    temp_r0_3 = GetUpgradeLevel__C9FarmHouse(sp8 + 0x1E0);
    switch (temp_r0_3) {                            /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_r2_2 = &gUnk_0810692C;
        if (spC != 0) {
            var_r2_2 = &gUnk_08106944;
        }
        func_08017180(sp4, temp_r0_2, var_r2_2, 0x1A, 3U);
        break;
    case 1:                                         /* switch 1 */
        var_r2_3 = &gUnk_0810695C;
        if (spC != 0) {
            var_r2_3 = &gUnk_08106974;
        }
        func_08017180(sp4, temp_r0_2, var_r2_3, 0x12, 3U);
        break;
    case 2:                                         /* switch 1 */
        var_r2_4 = &gUnk_0810698C;
        if (spC != 0) {
            var_r2_4 = &gUnk_081069A4;
        }
        func_08017180(sp4, temp_r0_2, var_r2_4, 0xA, temp_r0_3);
        break;
    }
    temp_r0_4 = GetUpgradeLevel__C4Barn(sp8 + 0x5DC);
    switch (temp_r0_4) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_r2_5 = &gUnk_081069BC;
        if (spC != 0) {
            var_r2_5 = &gUnk_081069D4;
        }
        func_08017180(sp4, temp_r0_2, var_r2_5, 0x3A, 2U);
        break;
    case 1:                                         /* switch 2 */
        var_r2_6 = &gUnk_081069EC;
        if (spC != 0) {
            var_r2_6 = &gUnk_08106A04;
        }
        func_08017180(sp4, temp_r0_2, var_r2_6, 0x3A, 2U);
        break;
    }
    temp_r0_5 = GetUpgradeLevel__C4Coop(sp8 + 0x3FC);
    switch (temp_r0_5) {                            /* switch 3; irregular */
    case 0:                                         /* switch 3 */
        var_r2_7 = &gUnk_08106A1C;
        if (spC != 0) {
            var_r2_7 = &gUnk_08106A34;
        }
        func_08017180(sp4, temp_r0_2, var_r2_7, 0xE, 0x34U);
        return;
    case 1:                                         /* switch 3 */
        var_r2_8 = &gUnk_08106A4C;
        if (spC != 0) {
            var_r2_8 = &gUnk_08106A64;
        }
        func_08017180(sp4, temp_r0_2, var_r2_8, 0xE, 0x34U);
        return;
    }
}
