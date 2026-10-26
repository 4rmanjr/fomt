typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
} GenObj;
void func_080AC388(GenObj *arg0, GenObj *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    GenObj *sp0;
    s32 *sp4;
    s32 *sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s16 temp_r1;
    s32 *var_r0;
    s32 *var_r0_2;
    s32 *var_r0_3;
    s32 *var_r0_4;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    u16 temp_r0_2;
    u8 *var_r1;
    u8 *var_r1_3;
    u8 *var_r1_4;
    u8 *var_r2_2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    temp_r6 = (s32) (arg1->unk0 << 0x10) >> 0x13;
    temp_r0 = (s32) (arg1->unk4 + 7) >> 3;
    spC = (s32) (arg1->unk2 << 0x10) >> 0x13;
    temp_r1 = arg1->unk6;
    sp10 = (s32) (temp_r1 + 7) >> 3;
    temp_r7 = arg0->unk0;
    temp_r0_2 = arg0->unk8;
    temp_r2 = arg0->unk4;
    if (sp4 != 0) {
        temp_r7_2 = *sp4;
        sp14 = temp_r7_2;
        var_r5 = (sp10 * 8) - temp_r1;
        if (var_r5 < temp_r7_2) {
            temp_r0_3 = arg0->unkA - 1;
            sp18 = temp_r0_3;
            sp2C = sp10;
            if (sp10 <= temp_r0_3) {
                var_r4 = sp10 * temp_r0_2;
loop_4:
                var_r3 = temp_r6;
                if (temp_r6 < temp_r0) {
                    var_r2 = (temp_r6 + var_r4) * 4;
                    var_r1 = temp_r6 + (var_r4 + temp_r2);
loop_6:
                    if (temp_r2 != 0) {
                        var_r0 = (*var_r1 * 4) + temp_r7;
                    } else {
                        var_r0 = temp_r7 + var_r2;
                    }
                    if ((*var_r0 << 0x1F) == 0) {
                        var_r2 += 4;
                        var_r1 += 1;
                        var_r3 += 1;
                        if (var_r3 >= temp_r0) {
                            goto block_11;
                        }
                        goto loop_6;
                    }
                    goto block_13;
                }
block_11:
                var_r5 += 8;
                if (var_r5 < sp14) {
                    var_r4 += temp_r0_2;
                    temp_r1_2 = sp2C + 1;
                    sp2C = temp_r1_2;
                    if (temp_r1_2 > sp18) {
                        goto block_13;
                    }
                    goto loop_4;
                }
            } else {
block_13:
                *sp4 = var_r5;
            }
        }
    }
    if (sp8 != 0) {
        temp_r0_4 = *sp8;
        sp1C = temp_r0_4;
        temp_r1_3 = (spC * 8) - sp0->unk2;
        sp2C = temp_r1_3;
        if (temp_r1_3 > temp_r0_4) {
            var_r5_2 = spC - 1;
            if (var_r5_2 >= 0) {
                var_r4_2 = var_r5_2 * temp_r0_2;
                sp28 = 0 - temp_r0_2;
loop_18:
                var_r3_2 = temp_r6;
                if (temp_r6 < temp_r0) {
                    var_r1_2 = (temp_r6 + var_r4_2) * 4;
                    var_r2_2 = temp_r6 + (var_r4_2 + temp_r2);
loop_20:
                    if (temp_r2 != 0) {
                        var_r0_2 = (*var_r2_2 * 4) + temp_r7;
                    } else {
                        var_r0_2 = temp_r7 + var_r1_2;
                    }
                    if ((*var_r0_2 << 0x1F) == 0) {
                        var_r1_2 += 4;
                        var_r2_2 += 1;
                        var_r3_2 += 1;
                        if (var_r3_2 >= temp_r0) {
                            goto block_25;
                        }
                        goto loop_20;
                    }
                    goto block_27;
                }
block_25:
                temp_r0_5 = sp2C - 8;
                sp2C = temp_r0_5;
                if (temp_r0_5 > sp1C) {
                    var_r4_2 += sp28;
                    var_r5_2 -= 1;
                    if (var_r5_2 < 0) {
                        goto block_27;
                    }
                    goto loop_18;
                }
            } else {
block_27:
                *sp8 = sp2C;
            }
        }
    }
    if (arg4 != 0) {
        sp2C = *arg4;
        var_r5_3 = (temp_r6 * 8) - sp0->unk0;
        if (var_r5_3 > sp2C) {
            var_r4_3 = temp_r6 - 1;
            if (var_r4_3 >= 0) {
                sp24 = spC * 4 * temp_r0_2;
loop_32:
                var_r3_3 = spC;
                if (var_r3_3 < sp10) {
                    var_r2_3 = sp24 + (var_r4_3 * 4);
                    var_r1_3 = (var_r3_3 * temp_r0_2) + (var_r4_3 + temp_r2);
loop_34:
                    if (temp_r2 != 0) {
                        var_r0_3 = (*var_r1_3 * 4) + temp_r7;
                    } else {
                        var_r0_3 = temp_r7 + var_r2_3;
                    }
                    if ((*var_r0_3 << 0x1F) == 0) {
                        var_r2_3 += temp_r0_2 * 4;
                        var_r1_3 += temp_r0_2;
                        var_r3_3 += 1;
                        if (var_r3_3 >= sp10) {
                            goto block_39;
                        }
                        goto loop_34;
                    }
                    goto block_41;
                }
block_39:
                var_r5_3 -= 8;
                if (var_r5_3 > sp2C) {
                    var_r4_3 -= 1;
                    if (var_r4_3 < 0) {
                        goto block_41;
                    }
                    goto loop_32;
                }
            } else {
block_41:
                *arg4 = var_r5_3;
            }
        }
    }
    if (arg5 != 0) {
        temp_r6_2 = *arg5;
        sp20 = temp_r6_2;
        var_r5_4 = (temp_r0 * 8) - sp0->unk4;
        if (var_r5_4 < temp_r6_2) {
            temp_r6_3 = temp_r0_2 - 1;
            sp2C = temp_r6_3;
            var_r4_4 = temp_r0;
            if (var_r4_4 <= temp_r6_3) {
loop_46:
                var_r2_4 = spC;
                if (var_r2_4 < sp10) {
                    var_r3_4 = (spC * 4 * temp_r0_2) + (var_r4_4 * 4);
                    var_r1_4 = (var_r2_4 * temp_r0_2) + (var_r4_4 + temp_r2);
loop_48:
                    if (temp_r2 != 0) {
                        var_r0_4 = (*var_r1_4 * 4) + temp_r7;
                    } else {
                        var_r0_4 = temp_r7 + var_r3_4;
                    }
                    if ((*var_r0_4 << 0x1F) == 0) {
                        var_r3_4 += temp_r0_2 * 4;
                        var_r1_4 += temp_r0_2;
                        var_r2_4 += 1;
                        if (var_r2_4 >= sp10) {
                            goto block_53;
                        }
                        goto loop_48;
                    }
                    goto block_55;
                }
block_53:
                var_r5_4 += 8;
                if (var_r5_4 < sp20) {
                    var_r4_4 += 1;
                    if (var_r4_4 > sp2C) {
                        goto block_55;
                    }
                    goto loop_46;
                }
            } else {
block_55:
                *arg5 = var_r5_4;
            }
        }
    }
}
