extern u16 gUnk_0810110C;

void *func_0809A58C(void *arg0, void *arg1) {
s32 sp10;
    void *sp24;
    void *sp28;
    u16 *sp2C;
    s16 temp_r0_2;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 var_r1_3;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r4_3;
    u16 *temp_r0;
    u16 *temp_r0_3;
    u16 *var_r1;
    u16 *var_r1_4;
    u16 *var_r1_5;
    u16 *var_r1_6;
    u16 *var_r1_7;
    u16 *var_r2;
    u16 *var_r2_2;
    u16 *var_r2_5;
    u16 *var_r4_2;
    u16 *var_r8;
    u16 temp_r1;
    u16 temp_r1_3;
    u16 temp_r1_4;
    u16 var_r1_2;
    u16 var_r2_3;
    u16 var_r6;
    u32 var_ip;
    u32 var_r2_4;
    u32 var_r2_6;
    u32 var_r4;

    sp24 = arg0;
    sp28 = arg1;
    var_r8 = &gUnk_0810110C;
    sp10.unk0 = 0U;
    sp10.unk6 = (s16) ((u32) (sp28->unk12 << 0x14) >> 0x14);
    if (gUnk_0810110C == 0) {

    } else {
        sp2C = sp28 + 2;
loop_3:
        sp10.unk2 = 0U;
        sp10.unk4 = 0U;
        var_r4 = (u32) (sp28->unk12 << 0x14) >> 0x14;
        var_r2 = sp2C;
        var_r1 = &sp0[0];
        var_r3 = 7;
        do {
            *var_r1 = *var_r2;
            var_r2 += 2;
            var_r1 += 2;
            var_r3 -= 1;
        } while (var_r3 >= 0);
        var_ip = 0;
        temp_r1 = var_r8->unk6;
        if (0x1000 & temp_r1) {
            temp_r2 = 0x42 & var_r4;
            if (temp_r2 != 2) {
                temp_r1_2 = 0x40 ^ temp_r2;
                var_ip = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
            }
            var_r4 &= 0xFFBD;
        }
        var_r3_2 = 0;
loop_11:
        if (var_r3_2 <= 0xB) {
            temp_r2_2 = (1 << var_r3_2) & temp_r1;
            if (temp_r2_2 != 0) {
                if (var_r4 & temp_r2_2) {
                    var_r4 ^= temp_r2_2;
                    goto block_10;
                }
                var_ip = 1;
            } else {
block_10:
                var_r3_2 += 1;
                goto loop_11;
            }
        }
        if (var_r4 != 0) {
            temp_r0 = var_r8->unk10;
            if (temp_r0 != 0) {
                var_r2_2 = temp_r0;
                var_r1_2 = *var_r2_2;
                if (var_r1_2 != 0) {
                    do {
                        if (var_r4 & var_r1_2) {
                            var_r4 ^= var_r1_2;
                            sp10.unk2 = (u16) (sp10.unk2 + var_r2_2->unk2);
                            sp10.unk4 = (u16) (var_r2_2->unk3 + sp10.unk4);
                        }
                        var_r2_2 += 4;
                        var_r1_2 = *var_r2_2;
                    } while (var_r1_2 != 0);
                }
            }
            if (var_r4 != 0) {
                var_ip = 1;
            }
        }
        var_r4_2 = var_r8->unk8;
        if (*var_r4_2 == 0) {

        } else {
loop_28:
            var_r6 = 0xFFFF;
            temp_r1_3 = *var_r4_2;
            switch (temp_r1_3) {                    /* irregular */
            case 0x200:
                var_r1_3 = 0;
                if ((u32) (u16) (sp0[0] - 0x10) > 5U) {
loop_36:
                    var_r1_3 += 1;
                    if (var_r1_3 <= 7) {
                        if ((u32) (u16) (*((var_r1_3 * 2) + sp) - 0x10) <= 5U) {
block_51:
                            var_r6 = (u16) var_r1_3;
                        } else {
                            goto loop_36;
                        }
                    }
                } else {
block_48:
                    var_r6 = 0;
                }
                break;
            case 0x201:
                var_r1_3 = 0;
                if ((u32) (u16) (sp0[0] - 0x1D) > 5U) {
loop_40:
                    var_r1_3 += 1;
                    if (var_r1_3 <= 7) {
                        if ((u32) (u16) (*((var_r1_3 * 2) + sp) - 0x1D) <= 5U) {
                            goto block_51;
                        }
                        goto loop_40;
                    }
                } else {
                    goto block_48;
                }
                break;
            case 0x202:
                var_r1_3 = 0;
                if ((u32) (u16) (sp0[0] - 0x23) > 5U) {
loop_44:
                    var_r1_3 += 1;
                    if (var_r1_3 <= 7) {
                        if ((u32) (u16) (*((var_r1_3 * 2) + sp) - 0x23) <= 5U) {
                            goto block_51;
                        }
                        goto loop_44;
                    }
                } else {
                    goto block_48;
                }
                break;
            case 0x203:
                var_r1_3 = 0;
                if ((u32) (u16) (sp0[0] - 0x17) <= 5U) {
                    goto block_48;
                }
loop_49:
                var_r1_3 += 1;
                if (var_r1_3 <= 7) {
                    if ((u32) (u16) (*((var_r1_3 * 2) + sp) - 0x17) <= 5U) {
                        goto block_51;
                    }
                    goto loop_49;
                }
                break;
            default:
                var_r2_3 = 0;
                temp_r1_4 = *var_r4_2;
                var_r1_4 = &sp0[0];
loop_53:
                if (*var_r1_4 == (0xFFF & temp_r1_4)) {
                    var_r6 = var_r2_3;
                    if ((u16) (0x8000 & temp_r1_4) != 0) {
                        do {
                            var_r4_2 += 2;
                        } while (0x8000 & *var_r4_2);
                    }
                } else {
                    var_r1_4 += 2;
                    var_r2_3 += 1;
                    if ((s32) var_r2_3 <= 7) {
                        goto loop_53;
                    }
                }
                break;
            }
            temp_r0_2 = (s16) var_r6;
            if (temp_r0_2 == -1) {
                if (!(0x8000 & *var_r4_2)) {
                    var_ip = 1;
                } else {
                    goto block_63;
                }
            } else {
                (&sp0[0])[temp_r0_2] = 0;
block_63:
                var_r4_2 += 2;
                if (*var_r4_2 != 0) {
                    goto loop_28;
                }
            }
        }
        var_r2_4 = 0;
        var_r1_5 = &sp0[0];
        var_r3_3 = 7;
        do {
            if (*var_r1_5 != 0) {
                var_r2_4 = (u32) ((var_r2_4 << 0x10) + 0x10000) >> 0x10;
            }
            var_r1_5 += 2;
            var_r3_3 -= 1;
        } while (var_r3_3 >= 0);
        if (var_r2_4 != 0) {
            temp_r0_3 = var_r8->unkC;
            if (temp_r0_3 != 0) {
                var_r2_5 = temp_r0_3;
                if (*var_r2_5 != 0) {
                    do {
                        var_r4_3 = 0;
                        var_r1_6 = &sp0[0];
loop_74:
                        if (*var_r1_6 == var_r2_5->unk0) {
                            *var_r1_6 = 0;
                            sp10.unk2 = (u16) (sp10.unk2 + var_r2_5->unk2);
                            sp10.unk4 = (u16) (var_r2_5->unk3 + sp10.unk4);
                        } else {
                            var_r1_6 += 2;
                            var_r4_3 += 1;
                            if (var_r4_3 <= 7) {
                                goto loop_74;
                            }
                        }
                        var_r2_5 += 4;
                    } while (*var_r2_5 != 0);
                }
            }
        }
        var_r2_6 = 0;
        var_r1_7 = &sp0[0];
        var_r3_4 = 7;
        do {
            if (*var_r1_7 != 0) {
                var_r2_6 = (u32) ((var_r2_6 << 0x10) + 0x10000) >> 0x10;
            }
            var_r1_7 += 2;
            var_r3_4 -= 1;
        } while (var_r3_4 >= 0);
        if (var_r2_6 != 0) {
            var_ip = 1;
        }
        if (var_ip == 0) {
            sp10.unk0 = (u16) var_r8->unk0;
        } else {
            var_r8 += 0x14;
            if (*var_r8 != 0) {
                goto loop_3;
            }
        }
    }
    sp24->unk0 = (s32) sp10.unk0;
    sp24->unk4 = (s32) sp10.unk4;
    sp24->unk8 = (s32) sp10.unk8;
    sp24->unkC = (s32) sp10.unkC;
    (sp24 + 0xC)->unk4 = (s32) (&sp10 + 0xC)->unk4;
    return sp24;
}
