s32 func_0809D79C(s32, s32);                        /* extern */
s32 func_0809D7D8(s32, s32);                        /* extern */
u32 func_0809D8A4();                                /* extern */
s32 func_0809D8B8(s32);                             /* extern */
s32 rand();                                         /* extern */
extern ? gUnk_08103B10;
extern ? gUnk_08103B38;
extern ? gUnk_08103C3C;
extern ? gUnk_08103C74;

void func_0809D500(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 sp0;
    s32 sp4;
    void *sp8;
    u32 spC;
    s32 sp10;
    s32 sp14;
    u32 sp18;
    u32 sp1C;
    s32 sp20;
    u32 sp24;
    s32 temp_r2;
    s32 temp_r4_3;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r4_2;
    s32 var_r5_2;
    s32 var_r7;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sb;
    s32 var_sb_2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r4;
    u32 temp_r4_2;
    u32 var_r4;
    u32 var_r5;
    u8 *var_r1;
    u8 *var_r1_2;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 var_r2;
    u8 var_r2_4;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r3;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    spC = func_0809D8A4();
    sp10 = func_0809D8B8(arg0);
    sp14 = func_0809D79C(arg0, arg1);
    temp_r4 = spC * sp10;
    sp18 = (u32) (rand() >> 4) % temp_r4;
    var_r5 = 0;
    if (temp_r4 <= 0U) {

    } else {
        sp1C = temp_r4;
loop_3:
        var_r4 = sp18 + var_r5;
        if (var_r4 >= sp1C) {
            var_r4 -= sp1C;
        }
        temp_r0 = var_r4 % spC;
        temp_r0_2 = var_r4 / spC;
        sp24 = var_r5 + 1;
        if ((s32) ((u32) (((temp_r0 * 2) + (temp_r0_2 * 0x38) + arg0)->unk4 << 0x1C) >> 0x1C) <= 1) {
            var_r2 = (u8) (rand() >> 4);
            var_r3 = 0;
            var_r1 = (sp14 * 0xA) + &gUnk_08103B38;
loop_7:
            temp_r0_3 = *var_r1;
            if (temp_r0_3 != 0) {
                if ((s32) var_r2 < (s32) temp_r0_3) {
                    var_r3_2 = *((var_r3 * 4) + &gUnk_08103B10);
                    var_sb = temp_r0 * 2;
                    var_r8 = temp_r0_2 * 8;
                    if (var_r3_2 == 1) {
                        if ((temp_r0_2 != 0) && (temp_r0_2 < (u32) (sp10 - 1)) && (temp_r0 != 0) && (temp_r0 < (u32) (spC - 1))) {
                            var_r4_2 = temp_r0_2 - 1;
                            temp_r2 = temp_r0_2 + 2;
                            if (var_r4_2 < temp_r2) {
                                var_r5_2 = var_r4_2 * 0x38;
loop_16:
                                if ((var_r4_2 >= 0) && (var_r4_2 < sp10)) {
                                    var_r2_2 = temp_r0 - 1;
loop_20:
                                    if (var_r2_2 < (s32) (temp_r0 + 2)) {
                                        if (((var_r2_2 >= 0) || (var_r2_2 < (s32) spC)) && (((u32) (((var_r2_2 * 2) + var_r5_2 + arg0)->unk4 << 0x1C) >> 0x1C) == 3)) {
                                            var_r3_2 = 0;
                                        } else {
                                            var_r2_2 += 1;
                                            goto loop_20;
                                        }
                                    }
                                    if (var_r3_2 != 0) {
                                        goto block_26;
                                    }
                                } else {
block_26:
                                    var_r5_2 += 0x38;
                                    var_r4_2 += 1;
                                    if (var_r4_2 >= temp_r2) {

                                    } else {
                                        goto loop_16;
                                    }
                                }
                            }
                        } else {
                            var_r3_2 = 0;
                            var_sb = temp_r0 * 2;
                            var_r8 = temp_r0_2 * 8;
                        }
                    }
                    temp_r1 = ((var_r8 - temp_r0_2) * 8) + var_sb + arg0;
                    temp_r1->unk5 = (u8) ((3 & temp_r1->unk5) | (var_r3_2 * 4));
                } else {
                    var_r2 -= temp_r0_3;
                    if ((s32) var_r2 >= 0) {
                        goto block_31;
                    }
                }
            } else {
block_31:
                var_r1 += 1;
                var_r3 += 1;
                if (var_r3 <= 9) {
                    goto loop_7;
                }
            }
        }
        var_r5 = sp24;
        if (var_r5 < sp1C) {
            goto loop_3;
        }
    }
    sp14 = func_0809D7D8(arg0, sp0);
    if (sp4 <= 0) {
        return;
    }
loop_36:
    var_r8_2 = 0;
    var_sb_2 = 1;
    sp20 = sp4 - 1;
loop_37:
    temp_r4_2 = (u32) (rand() >> 8) % spC;
    temp_r0_4 = (u32) (rand() >> 8) % (u32) sp10;
    if ((((temp_r4_2 * 2) + (temp_r0_4 * 0x38) + arg0)->unk4 << 0x1C) == 0) {
        var_r8_2 = 1;
        var_r2_3 = 0;
        if ((sp8->unk0 == temp_r4_2) && (sp8->unk1 == temp_r0_4)) {
            var_r8_2 = 0;
        } else {
loop_42:
            var_r2_3 += 1;
            if (var_r2_3 <= 0xB) {
                temp_r1_2 = (var_r2_3 * 4) + sp8;
                if ((temp_r1_2->unk0 == temp_r4_2) && (temp_r1_2->unk1 == temp_r0_4)) {
                    var_r8_2 = 0;
                } else {
                    goto loop_42;
                }
            }
        }
        if (var_r8_2 == 1) {
            temp_r4_3 = temp_r4_2 * 2;
            temp_r1_3 = temp_r4_3 + (temp_r0_4 * 0x38) + arg0;
            temp_r1_3->unk4 = (u8) ((temp_r1_3->unk4 & ~0xF) | 4);
            var_r2_4 = (u8) (rand() >> 8);
            var_r7 = 0;
            var_r1_2 = (sp14 * 0xE) + &gUnk_08103C74;
loop_48:
            temp_r0_5 = *var_r1_2;
            if (temp_r0_5 != 0) {
                if ((s32) var_r2_4 >= (s32) temp_r0_5) {
                    var_r2_4 -= temp_r0_5;
                    if ((s32) var_r2_4 >= 0) {
                        goto block_51;
                    }
                } else {
                    temp_r3 = temp_r4_3 + (temp_r0_4 * 0x38) + arg0;
                    temp_r3->unk4 = (u16) ((temp_r3->unk4 & 0xFFFFFC0F) | ((*((var_r7 * 4) + &gUnk_08103C3C) & 0x3F) * 0x10));
                }
            } else {
block_51:
                var_r1_2 += 1;
                var_r7 += 1;
                if (var_r7 <= 0xD) {
                    goto loop_48;
                }
            }
        }
    }
    if (var_r8_2 == 0) {
        var_sb_2 += 1;
        if (var_sb_2 <= 9) {
            goto loop_37;
        }
    }
    sp4 = sp20;
    if (sp20 > 0) {
        goto loop_36;
    }
}
