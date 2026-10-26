typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
} GenObj;
void func_080AC124(GenObj *arg0, GenObj *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
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
    s32 sp30;
    s16 temp_r1;
    s32 *var_r0;
    s32 *var_r0_2;
    s32 *var_r0_3;
    s32 *var_r0_4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r7;
    s32 var_ip;
    s32 var_ip_2;
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
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r6_4;
    u16 temp_r2;
    u8 *var_r1;
    u8 *var_r1_2;
    u8 *var_r1_3;
    u8 *var_r2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    temp_r7 = (s32) (arg1->unk0 << 0x10) >> 0x13;
    spC = (s32) (arg1->unk4 + 7) >> 3;
    sp10 = (s32) (arg1->unk2 << 0x10) >> 0x13;
    temp_r1 = arg1->unk6;
    sp14 = (s32) (temp_r1 + 7) >> 3;
    temp_r0 = arg0->unk0;
    temp_r2 = arg0->unk8;
    temp_r3 = arg0->unk4;
    if (sp4 != 0) {
        temp_r2_2 = *sp4;
        sp18 = temp_r2_2;
        var_r6 = (sp14 * 8) - temp_r1;
        if (var_r6 < temp_r2_2) {
            temp_r0_2 = arg0->unkA - 1;
            sp1C = temp_r0_2;
            var_ip = sp14;
            if (sp14 <= temp_r0_2) {
                var_r5 = sp14 * temp_r2;
loop_4:
                var_r4 = temp_r7;
                if (temp_r7 < spC) {
                    var_r3 = (temp_r7 + var_r5) * 4;
                    var_r2 = temp_r7 + (var_r5 + temp_r3);
loop_6:
                    if (temp_r3 != 0) {
                        var_r0 = (*var_r2 * 4) + temp_r0;
                    } else {
                        var_r0 = temp_r0 + var_r3;
                    }
                    temp_r1_2 = *var_r0;
                    if (((temp_r1_2 << 0x1F) == 0) && ((s32) (temp_r1_2 << 0x1E) >= 0)) {
                        var_r3 += 4;
                        var_r2 += 1;
                        var_r4 += 1;
                        if (var_r4 >= spC) {
                            goto block_12;
                        }
                        goto loop_6;
                    }
                    goto block_14;
                }
block_12:
                var_r6 += 8;
                if (var_r6 < sp18) {
                    var_r5 += temp_r2;
                    var_ip += 1;
                    if (var_ip > sp1C) {
                        goto block_14;
                    }
                    goto loop_4;
                }
            } else {
block_14:
                *sp4 = var_r6;
            }
        }
    }
    if (sp8 != 0) {
        sp20 = *sp8;
        var_ip_2 = (sp10 * 8) - sp0->unk2;
        if (var_ip_2 > sp20) {
            var_r6_2 = sp10 - 1;
            if (var_r6_2 >= 0) {
                var_r5_2 = var_r6_2 * temp_r2;
                sp30 = 0 - temp_r2;
loop_19:
                var_r4_2 = temp_r7;
                if (temp_r7 < spC) {
                    var_r3_2 = (temp_r7 + var_r5_2) * 4;
                    var_r1 = temp_r7 + (var_r5_2 + temp_r3);
loop_21:
                    if (temp_r3 != 0) {
                        var_r0_2 = (*var_r1 * 4) + temp_r0;
                    } else {
                        var_r0_2 = temp_r0 + var_r3_2;
                    }
                    temp_r2_3 = *var_r0_2;
                    if (((temp_r2_3 << 0x1F) == 0) && ((s32) (temp_r2_3 << 0x1E) >= 0)) {
                        var_r3_2 += 4;
                        var_r1 += 1;
                        var_r4_2 += 1;
                        if (var_r4_2 >= spC) {
                            goto block_27;
                        }
                        goto loop_21;
                    }
                    goto block_29;
                }
block_27:
                var_ip_2 -= 8;
                if (var_ip_2 > sp20) {
                    var_r5_2 += sp30;
                    var_r6_2 -= 1;
                    if (var_r6_2 < 0) {
                        goto block_29;
                    }
                    goto loop_19;
                }
            } else {
block_29:
                *sp8 = var_ip_2;
            }
        }
    }
    if (arg4 != 0) {
        temp_r3_2 = *arg4;
        var_r6_3 = (temp_r7 * 8) - sp0->unk0;
        if (var_r6_3 > temp_r3_2) {
            var_r5_3 = temp_r7 - 1;
            if (var_r5_3 >= 0) {
                sp2C = sp10 * 4 * temp_r2;
loop_34:
                var_r4_3 = sp10;
                if (var_r4_3 < sp14) {
                    var_r3_3 = sp2C + (var_r5_3 * 4);
                    var_r1_2 = (var_r4_3 * temp_r2) + (var_r5_3 + temp_r3);
loop_36:
                    if (temp_r3 != 0) {
                        var_r0_3 = (*var_r1_2 * 4) + temp_r0;
                    } else {
                        var_r0_3 = temp_r0 + var_r3_3;
                    }
                    temp_r2_4 = *var_r0_3;
                    if (((temp_r2_4 << 0x1F) == 0) && ((s32) (temp_r2_4 << 0x1E) >= 0)) {
                        var_r3_3 += temp_r2 * 4;
                        var_r1_2 += temp_r2;
                        var_r4_3 += 1;
                        if (var_r4_3 >= sp14) {
                            goto block_42;
                        }
                        goto loop_36;
                    }
                    goto block_44;
                }
block_42:
                var_r6_3 -= 8;
                if (var_r6_3 > temp_r3_2) {
                    var_r5_3 -= 1;
                    if (var_r5_3 < 0) {
                        goto block_44;
                    }
                    goto loop_34;
                }
            } else {
block_44:
                *arg4 = var_r6_3;
            }
        }
    }
    if (arg5 != 0) {
        sp24 = *arg5;
        var_r6_4 = (spC * 8) - sp0->unk4;
        if (var_r6_4 < sp24) {
            temp_r1_3 = temp_r2 - 1;
            var_r5_4 = spC;
            if (var_r5_4 <= temp_r1_3) {
                sp28 = sp10 * 4 * temp_r2;
loop_49:
                var_r3_4 = sp10;
                if (var_r3_4 < sp14) {
                    var_r4_4 = sp28 + (var_r5_4 * 4);
                    var_r1_3 = (var_r3_4 * temp_r2) + (var_r5_4 + temp_r3);
loop_51:
                    if (temp_r3 != 0) {
                        var_r0_4 = (*var_r1_3 * 4) + temp_r0;
                    } else {
                        var_r0_4 = temp_r0 + var_r4_4;
                    }
                    temp_r2_5 = *var_r0_4;
                    if (((temp_r2_5 << 0x1F) == 0) && ((s32) (temp_r2_5 << 0x1E) >= 0)) {
                        var_r4_4 += temp_r2 * 4;
                        var_r1_3 += temp_r2;
                        var_r3_4 += 1;
                        if (var_r3_4 >= sp14) {
                            goto block_57;
                        }
                        goto loop_51;
                    }
                    goto block_59;
                }
block_57:
                var_r6_4 += 8;
                if (var_r6_4 < sp24) {
                    var_r5_4 += 1;
                    if (var_r5_4 > temp_r1_3) {
                        goto block_59;
                    }
                    goto loop_49;
                }
            } else {
block_59:
                *arg5 = var_r6_4;
            }
        }
    }
}
