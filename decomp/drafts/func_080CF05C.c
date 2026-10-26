u8 *GetDesc__C4Tool(u8 *);                          /* extern */
s32 GetId__C4Tool(u8 *);                            /* extern */
s32 func_0800E4F0(s32);                             /* extern */
s32 func_0800E4FC(s32);                             /* extern */
s32 func_0800E51C(s32);                             /* extern */
s8 func_0800E550(s32, u8);                          /* extern */
s32 func_0800E94C(s32);                             /* extern */
s32 func_0800E958(s32);                             /* extern */
s32 func_0804EC84(s32, u8 *, s32);                    /* extern */
s32 memcpy(u8 *, u8 *, u32);                          /* extern */
u32 strlen(u8 *);                                   /* extern */
extern u8 gUnk_081179AC;
extern u8 gUnk_081179BC;
extern u8 gUnk_081179C4;
extern u8 gUnk_081179C8;
extern u8 gUnk_081179CC;
extern u8 gUnk_081179D8;
extern u8 gUnk_081179E0;
extern u8 gUnk_081179F0;
extern u8 gUnk_081179F8;
extern u8 gUnk_081179FC;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
u8 *func_080CF05C(GenObj *arg0, u8 *arg1, u8 *arg2, u8 arg3) {
    u8 sp0;
    u8 sp8;
    u8 sp10;
    s8 sp18;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_17;
    u32 temp_r0_18;
    u32 temp_r0_19;
    u32 temp_r0_20;
    u32 temp_r0_21;
    u32 temp_r0_22;
    u32 temp_r0_23;
    u32 temp_r0_24;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r5_10;
    u32 temp_r5_11;
    u32 temp_r5_12;
    u32 temp_r5_13;
    u32 temp_r5_14;
    u32 temp_r5_15;
    u32 temp_r5_16;
    u32 temp_r5_17;
    u32 temp_r5_18;
    u32 temp_r5_19;
    u32 temp_r5_20;
    u32 temp_r5_21;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r5_4;
    u32 temp_r5_5;
    u32 temp_r5_6;
    u32 temp_r5_7;
    u32 temp_r5_8;
    u32 temp_r5_9;
    u32 var_r4;
    u32 var_r4_10;
    u32 var_r4_11;
    u32 var_r4_12;
    u32 var_r4_13;
    u32 var_r4_14;
    u32 var_r4_15;
    u32 var_r4_16;
    u32 var_r4_17;
    u32 var_r4_18;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r4_8;
    u32 var_r4_9;
    u8 *temp_r1_10;
    u8 *temp_r1_11;
    u8 *temp_r1_2;
    u8 *temp_r1_3;
    u8 *temp_r1_4;
    u8 *temp_r1_5;
    u8 *temp_r1_6;
    u8 *temp_r1_7;
    u8 *temp_r1_8;
    u8 *temp_r1_9;
    u8 *temp_r4_6;
    u8 *temp_r6_2;
    u8 *temp_r6_3;
    u8 *temp_r6_4;
    u8 *temp_r6_5;
    u8 *temp_r6_6;
    u8 *temp_r6_7;
    u8 *temp_r6_8;
    u8 *temp_r8;
    u8 *var_r0;
    u8 *var_r0_2;
    u8 *var_r1;
    u8 *var_r6;
    u8 *var_r6_2;
    u8 *var_r6_3;
    u8 *var_sl;
    u8 temp_r4_2;
    u8 temp_r4_3;
    u8 temp_r4_4;
    u8 temp_r4_5;

    temp_r1 = GetId__C4Tool(arg2);
    *arg1 = 0;
    switch (temp_r1) {                              /* irregular */
    case 0x50:
        if (arg3 == 0) {
block_126:
            var_sl = GetDesc__C4Tool(arg2);
        } else {
            temp_r5 = func_0800E4F0(arg0->unk8 + 0x1BD8);
            temp_r6 = func_0800E4FC(arg0->unk8 + 0x1BD8);
            temp_r4 = func_0800E51C(arg0->unk8 + 0x1BD8);
            func_0804EC84(temp_r5, &sp0, 3);
            func_0804EC84(temp_r6, &sp8, 3);
            func_0804EC84(temp_r4, &sp10, 3);
            temp_r0 = strlen(arg1);
            temp_r6_2 = &arg1[temp_r0];
            temp_r5_2 = 0x63 - temp_r0;
            if (temp_r5_2 != 0) {
                var_r4 = strlen(&gUnk_081179AC);
                if (var_r4 > temp_r5_2) {
                    var_r4 = temp_r5_2;
                }
                memcpy(temp_r6_2, &gUnk_081179AC, var_r4);
                temp_r6_2[var_r4] = 0;
            }
            temp_r0_2 = strlen(arg1);
            temp_r6_3 = &arg1[temp_r0_2];
            temp_r5_3 = 0x63 - temp_r0_2;
            if (temp_r5_3 != 0) {
                var_r4_2 = strlen(&gUnk_081179BC);
                if (var_r4_2 > temp_r5_3) {
                    var_r4_2 = temp_r5_3;
                }
                memcpy(temp_r6_3, &gUnk_081179BC, var_r4_2);
                temp_r6_3[var_r4_2] = 0;
            }
            temp_r0_3 = strlen(arg1);
            temp_r1_2 = &arg1[temp_r0_3];
            temp_r5_4 = 0x63 - temp_r0_3;
            if (temp_r5_4 != 0) {
                var_r4_3 = strlen(&sp0);
                if (var_r4_3 > temp_r5_4) {
                    var_r4_3 = temp_r5_4;
                }
                memcpy(temp_r1_2, &sp0, var_r4_3);
                temp_r1_2[var_r4_3] = 0;
            }
            temp_r0_4 = strlen(arg1);
            temp_r1_3 = &arg1[temp_r0_4];
            temp_r5_5 = 0x63 - temp_r0_4;
            if (temp_r5_5 != 0) {
                var_r4_4 = strlen(&gUnk_081179C4);
                if (var_r4_4 > temp_r5_5) {
                    var_r4_4 = temp_r5_5;
                }
                memcpy(temp_r1_3, &gUnk_081179C4, var_r4_4);
                temp_r1_3[var_r4_4] = 0;
            }
            temp_r0_5 = strlen(arg1);
            temp_r1_4 = &arg1[temp_r0_5];
            temp_r5_6 = 0x63 - temp_r0_5;
            if (temp_r5_6 != 0) {
                var_r4_5 = strlen(&sp10);
                if (var_r4_5 > temp_r5_6) {
                    var_r4_5 = temp_r5_6;
                }
                memcpy(temp_r1_4, &sp10, var_r4_5);
                temp_r1_4[var_r4_5] = 0;
            }
            temp_r0_6 = strlen(arg1);
            temp_r1_5 = &arg1[temp_r0_6];
            temp_r5_7 = 0x63 - temp_r0_6;
            if (temp_r5_7 != 0) {
                var_r4_6 = strlen(&gUnk_081179C8);
                if (var_r4_6 > temp_r5_7) {
                    var_r4_6 = temp_r5_7;
                }
                memcpy(temp_r1_5, &gUnk_081179C8, var_r4_6);
                temp_r1_5[var_r4_6] = 0;
            }
            temp_r0_7 = strlen(arg1);
            temp_r1_6 = &arg1[temp_r0_7];
            temp_r5_8 = 0x63 - temp_r0_7;
            if (temp_r5_8 != 0) {
                var_r4_7 = strlen(&gUnk_081179CC);
                if (var_r4_7 > temp_r5_8) {
                    var_r4_7 = temp_r5_8;
                }
                memcpy(temp_r1_6, &gUnk_081179CC, var_r4_7);
                temp_r1_6[var_r4_7] = 0;
            }
            temp_r0_8 = strlen(arg1);
            temp_r1_7 = &arg1[temp_r0_8];
            temp_r5_9 = 0x63 - temp_r0_8;
            if (temp_r5_9 != 0) {
                var_r4_8 = strlen(&sp8);
                if (var_r4_8 > temp_r5_9) {
                    var_r4_8 = temp_r5_9;
                }
                memcpy(temp_r1_7, &sp8, var_r4_8);
                temp_r1_7[var_r4_8] = 0;
            }
            temp_r0_9 = strlen(arg1);
            var_r6 = &arg1[temp_r0_9];
            temp_r5_10 = 0x63 - temp_r0_9;
            if (temp_r5_10 == 0) {

            } else {
                var_r4_9 = strlen(&gUnk_081179D8);
                if (var_r4_9 > temp_r5_10) {
                    var_r4_9 = temp_r5_10;
                }
                var_r0 = var_r6;
                var_r1 = &gUnk_081179D8;
block_124:
                memcpy(var_r0, var_r1, var_r4_9);
                var_r6[var_r4_9] = 0;
            }
block_125:
            var_sl = arg1;
        }
        break;
    case 0x4C:
        func_0804EC84(func_0800E958(arg0->unk8 + 0x1BD8), &sp0, 0xA);
        temp_r0_10 = strlen(arg1);
        temp_r6_4 = &arg1[temp_r0_10];
        temp_r5_11 = 0x63 - temp_r0_10;
        if (temp_r5_11 != 0) {
            var_r4_10 = strlen(&gUnk_081179E0);
            if (var_r4_10 > temp_r5_11) {
                var_r4_10 = temp_r5_11;
            }
            memcpy(temp_r6_4, &gUnk_081179E0, var_r4_10);
            temp_r6_4[var_r4_10] = 0;
        }
        temp_r0_11 = strlen(arg1);
        temp_r6_5 = &arg1[temp_r0_11];
        temp_r5_12 = 0x63 - temp_r0_11;
        if (temp_r5_12 != 0) {
            var_r4_11 = strlen(&sp0);
            if (var_r4_11 > temp_r5_12) {
                var_r4_11 = temp_r5_12;
            }
            memcpy(temp_r6_5, &sp0, var_r4_11);
            temp_r6_5[var_r4_11] = 0;
        }
        var_r0_2 = &gUnk_081179F0;
block_120:
        temp_r0_12 = strlen(arg1);
        var_r6 = &arg1[temp_r0_12];
        temp_r5_13 = 0x63 - temp_r0_12;
        if (temp_r5_13 != 0) {
            var_r4_9 = strlen(var_r0_2);
            if (var_r4_9 > temp_r5_13) {
                var_r4_9 = temp_r5_13;
            }
            var_r0 = var_r6;
            var_r1 = var_r0_2;
            goto block_124;
        }
        goto block_125;
    case 0x0:
    case 0x8:
    case 0x10:
    case 0x18:
    case 0x28:
        sp18 = func_0800E550(arg0->unk8 + 0x1BD8, *arg2);
        var_r6_2 = GetDesc__C4Tool();
        temp_r0_13 = strlen(arg1);
        temp_r1_8 = &arg1[temp_r0_13];
        temp_r5_14 = 0x63 - temp_r0_13;
        if (temp_r5_14 != 0) {
            var_r4_12 = strlen(&gUnk_081179F8);
            if (var_r4_12 > temp_r5_14) {
                var_r4_12 = temp_r5_14;
            }
            memcpy(temp_r1_8, &gUnk_081179F8, var_r4_12);
            temp_r1_8[var_r4_12] = 0;
        }
        if (*var_r6_2 != 0xD) {
            do {
                temp_r4_2 = *var_r6_2;
                var_r6_2 += 1;
                if (temp_r4_2 != 0) {
                    temp_r0_14 = strlen(arg1);
                    if ((u32) (temp_r0_14 + 1) <= 0x63U) {
                        arg1[temp_r0_14].unk0 = temp_r4_2;
                        arg1[temp_r0_14].unk1 = 0;
                    }
                }
            } while (*var_r6_2 != 0xD);
        }
        temp_r0_15 = strlen(arg1);
        temp_r1_9 = &arg1[temp_r0_15];
        temp_r5_15 = 0x63 - temp_r0_15;
        if (temp_r5_15 != 0) {
            var_r4_13 = strlen(&gUnk_081179F8);
            if (var_r4_13 > temp_r5_15) {
                var_r4_13 = temp_r5_15;
            }
            memcpy(temp_r1_9, &gUnk_081179F8, var_r4_13);
            temp_r1_9[var_r4_13] = 0;
        }
        if (*var_r6_2 == 0) {

        } else {
            do {
                temp_r4_3 = *var_r6_2;
                var_r6_2 += 1;
                if (temp_r4_3 != 0) {
                    temp_r0_16 = strlen(arg1);
                    if ((u32) (temp_r0_16 + 1) <= 0x63U) {
                        arg1[temp_r0_16].unk0 = temp_r4_3;
                        arg1[temp_r0_16].unk1 = 0;
                    }
                }
            } while (*var_r6_2 != 0);
        }
        goto block_125;
    case 0x20:
        sp0.unk19 = func_0800E550(arg0->unk8 + 0x1BD8, *arg2);
        var_r6_3 = GetDesc__C4Tool();
        temp_r0_17 = strlen(arg1);
        temp_r1_10 = &arg1[temp_r0_17];
        temp_r5_16 = 0x63 - temp_r0_17;
        if (temp_r5_16 != 0) {
            var_r4_14 = strlen(&gUnk_081179F8);
            if (var_r4_14 > temp_r5_16) {
                var_r4_14 = temp_r5_16;
            }
            memcpy(temp_r1_10, &gUnk_081179F8, var_r4_14);
            temp_r1_10[var_r4_14] = 0;
        }
        if (*var_r6_3 != 0xD) {
            do {
                temp_r4_4 = *var_r6_3;
                var_r6_3 += 1;
                if (temp_r4_4 != 0) {
                    temp_r0_18 = strlen(arg1);
                    if ((u32) (temp_r0_18 + 1) <= 0x63U) {
                        arg1[temp_r0_18].unk0 = temp_r4_4;
                        arg1[temp_r0_18].unk1 = 0;
                    }
                }
            } while (*var_r6_3 != 0xD);
        }
        temp_r0_19 = strlen(arg1);
        temp_r1_11 = &arg1[temp_r0_19];
        temp_r5_17 = 0x63 - temp_r0_19;
        if (temp_r5_17 != 0) {
            var_r4_15 = strlen(&gUnk_081179F8);
            if (var_r4_15 > temp_r5_17) {
                var_r4_15 = temp_r5_17;
            }
            memcpy(temp_r1_11, &gUnk_081179F8, var_r4_15);
            temp_r1_11[var_r4_15] = 0;
        }
        if (*var_r6_3 != 0) {
            do {
                temp_r4_5 = *var_r6_3;
                var_r6_3 += 1;
                if (temp_r4_5 != 0) {
                    temp_r0_20 = strlen(arg1);
                    if ((u32) (temp_r0_20 + 1) <= 0x63U) {
                        arg1[temp_r0_20].unk0 = temp_r4_5;
                        arg1[temp_r0_20].unk1 = 0;
                    }
                }
            } while (*var_r6_3 != 0);
        }
        func_0804EC84(func_0800E94C(arg0->unk8 + 0x1BD8), &sp0, 3);
        temp_r0_21 = strlen(arg1);
        temp_r6_6 = &arg1[temp_r0_21];
        temp_r5_18 = 0x63 - temp_r0_21;
        if (temp_r5_18 != 0) {
            var_r4_16 = strlen(&sp0);
            if (var_r4_16 > temp_r5_18) {
                var_r4_16 = temp_r5_18;
            }
            memcpy(temp_r6_6, &sp0, var_r4_16);
            temp_r6_6[var_r4_16] = 0;
        }
        temp_r0_22 = strlen(arg1);
        var_r6 = &arg1[temp_r0_22];
        temp_r5_19 = 0x63 - temp_r0_22;
        if (temp_r5_19 != 0) {
            var_r4_9 = strlen(&gUnk_081179FC);
            if (var_r4_9 > temp_r5_19) {
                var_r4_9 = temp_r5_19;
            }
            var_r0 = var_r6;
            var_r1 = &gUnk_081179FC;
            goto block_124;
        }
        goto block_125;
    default:
        if (((u32) (temp_r1 - 0x21) <= 3U) || (temp_r1 == 0x26) || (temp_r1 == 0x27)) {
            func_0804EC84(func_0800E94C(arg0->unk8 + 0x1BD8), &sp0, 3);
            temp_r8 = GetDesc__C4Tool(arg2);
            temp_r4_6 = temp_r8;
            temp_r0_23 = strlen(arg1);
            temp_r6_7 = &arg1[temp_r0_23];
            temp_r5_20 = 0x63 - temp_r0_23;
            if (temp_r5_20 != 0) {
                var_r4_17 = strlen(temp_r4_6);
                if (var_r4_17 > temp_r5_20) {
                    var_r4_17 = temp_r5_20;
                }
                memcpy(temp_r6_7, temp_r8, var_r4_17);
                temp_r6_7[var_r4_17] = 0;
            }
            temp_r0_24 = strlen(arg1);
            temp_r6_8 = &arg1[temp_r0_24];
            temp_r5_21 = 0x63 - temp_r0_24;
            if (temp_r5_21 != 0) {
                var_r4_18 = strlen(&sp0);
                if (var_r4_18 > temp_r5_21) {
                    var_r4_18 = temp_r5_21;
                }
                memcpy(temp_r6_8, &sp0, var_r4_18);
                temp_r6_8[var_r4_18] = 0;
            }
            var_r0_2 = &gUnk_081179FC;
            goto block_120;
        }
        goto block_126;
    }
    return var_sl;
}
