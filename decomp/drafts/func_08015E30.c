s32 func_0809CF34(s32 *, s32, s32, s32);              /* extern */
u32 func_0809D8A0(s32);                             /* extern */
s32 func_080D7F08(void *);                            /* extern */
s32 func_080D7F9C(void *, s32, s32, u16);             /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
    u8 _padA[2];
    s32 unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    u8 _pad18[116];
    s32 unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
    u8 _padAC[8];
    s32 unkB4;
} GenObj;
void func_08015E30(GenObj *arg0) {
    s32 *sp0;
    u32 sp4;
    GenObj *sp8;
s32 spC;
    GenObj *sp3C;
GenObj sp40;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
GenObj sp58;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
GenObj sp70;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
GenObj sp8C;
s32 sp94;
s32 sp98;
s32 sp9C;
s32 spA0;
GenObj spA4;
s32 spAC;
s32 spB0;
s32 spB4;
s32 spB8;
GenObj spBC;
s32 spC4;
s32 spC8;
s32 spCC;
s32 spD0;
    s32 spD4;
    GenObj *spD8;
    void *spDC;
    void ***spE0;
    s32 spE4;
    s32 *var_r1;
    s32 *var_r1_14;
    s32 *var_r2_4;
    s32 *var_r2_8;
    s16 var_r0;
    s16 var_r0_10;
    s16 var_r0_11;
    s16 var_r0_12;
    s16 var_r0_13;
    s16 var_r0_14;
    s16 var_r0_15;
    s16 var_r0_16;
    s16 var_r0_17;
    s16 var_r0_18;
    s16 var_r0_19;
    s16 var_r0_20;
    s16 var_r0_21;
    s16 var_r0_22;
    s16 var_r0_23;
    s16 var_r0_24;
    s16 var_r0_26;
    s16 var_r0_27;
    s16 var_r0_28;
    s16 var_r0_29;
    s16 var_r0_2;
    s16 var_r0_30;
    s16 var_r0_31;
    s16 var_r0_32;
    s16 var_r0_33;
    s16 var_r0_34;
    s16 var_r0_35;
    s16 var_r0_36;
    s16 var_r0_37;
    s16 var_r0_3;
    s16 var_r0_4;
    s16 var_r0_5;
    s16 var_r0_6;
    s16 var_r0_7;
    s16 var_r0_8;
    s16 var_r0_9;
    s16 var_r1_10;
    s16 var_r1_11;
    s16 var_r1_12;
    s16 var_r1_13;
    s16 var_r1_2;
    s16 var_r1_3;
    s16 var_r1_4;
    s16 var_r1_5;
    s16 var_r1_6;
    s16 var_r1_7;
    s16 var_r1_8;
    s16 var_r1_9;
    s32 *var_r0_25;
    s32 *var_r4;
    s32 temp_r2;
    s32 temp_r2_5;
    s32 temp_r2_6;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_5;
    s32 var_r2_6;
    s32 var_r2_7;
    s32 var_r8;
    u16 temp_r1;
    u16 temp_r1_2;
    u16 temp_r1_3;
    u16 temp_r1_4;
    u16 temp_r1_5;
    u16 temp_r1_6;
    u16 temp_r7;
    u16 temp_sl;
    u32 temp_r0_12;
    void **temp_r0_10;
    void **temp_r0_13;
    void **temp_r0_2;
    void **temp_r0_4;
    void **temp_r0_5;
    void **temp_r0_7;
    void **temp_r0_9;
    GenObj *temp_r0;
    void *temp_r0_11;
    void *temp_r0_3;
    void *temp_r0_6;
    void *temp_r0_8;
    void *temp_r2_2;
    void *temp_r2_3;
    GenObj *temp_r2_4;
    void *temp_r3;
    void *temp_r3_2;

    temp_r0 = arg0->unk4;
    spD8 = temp_r0;
    temp_r2 = (*temp_r0->unkA8)->unk14();
    sp3C.unk0 = 0U;
    sp3C.unk1 = 0U;
    if ((u32) (temp_r2 - 0x34) > 0xFFU) {
        if ((u32) (temp_r2 + 0xFFFFFECC) > 0xFFU) {
            return;
        }
        var_r8 = temp_r2 + 1;
        temp_r6 = temp_r2 + 0xFFFFFECD;
        sp8 = 0;
        temp_r0_2 = temp_r0->unkA8;
        temp_r0_3 = (*temp_r0_2)->unk40(temp_r0_2, 0x4A);
        if (temp_r0_3 == 0) {

        } else {
            temp_r1 = temp_r0_3->unk4;
            var_r2 = 0;
            if (((s32) temp_r1 > 0x133) && ((s32) temp_r1 <= 0x233) && (temp_r6 == (temp_r1 + 0xFFFFFECC))) {
                var_r2 = 1;
            }
            if (var_r2 != 0) {
                ((void (*)(void *,...))(temp_r0_3->unk14->unkC))(&sp8C, temp_r0_3);
                var_r0 = sp8C;
                if ((s32) var_r0 < 0) {
                    var_r0 += 7;
                }
                var_r0_2 = sp8C.unk2;
                if ((s32) var_r0_2 < 0) {
                    var_r0_2 += 7;
                }
                sp94 = (s8) (var_r0 >> 3);
                sp94.unk1 = (s8) (var_r0_2 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) sp94;
                    }
                    sp8 += 1;
                }
                var_r0_3 = sp8C.unk4;
                if ((s32) var_r0_3 < 0) {
                    var_r0_3 += 7;
                }
                var_r0_4 = sp8C.unk2;
                if ((s32) var_r0_4 < 0) {
                    var_r0_4 += 7;
                }
                sp98 = (s8) (var_r0_3 >> 3);
                sp98.unk1 = (s8) (var_r0_4 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) sp98;
                    }
                    sp8 += 1;
                }
                var_r0_5 = sp8C;
                if ((s32) var_r0_5 < 0) {
                    var_r0_5 += 7;
                }
                var_r0_6 = sp8C.unk6;
                if ((s32) var_r0_6 < 0) {
                    var_r0_6 += 7;
                }
                sp9C = (s8) (var_r0_5 >> 3);
                sp9C.unk1 = (s8) (var_r0_6 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) sp9C;
                    }
                    sp8 += 1;
                }
                var_r0_7 = sp8C.unk4;
                if ((s32) var_r0_7 < 0) {
                    var_r0_7 += 7;
                }
                var_r0_8 = sp8C.unk6;
                if ((s32) var_r0_8 < 0) {
                    var_r0_8 += 7;
                }
                spA0 = (s8) (var_r0_7 >> 3);
                spA0.unk1 = (s8) (var_r0_8 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spA0;
                    }
                    sp8 += 1;
                }
            }
        }
        temp_r0_4 = spD8->unkA8;
        temp_r3 = (*temp_r0_4)->unk40(temp_r0_4, 0x2B);
        spE0 = (GenObj *)((u8 *)spD8 + 0xA8);
        if (temp_r3 == 0) {

        } else {
            temp_r1_2 = temp_r3->unk4;
            var_r2_2 = 0;
            if (((s32) temp_r1_2 > 0x133) && ((s32) temp_r1_2 <= 0x233) && (temp_r6 == (temp_r1_2 + 0xFFFFFECC))) {
                var_r2_2 = 1;
            }
            if (var_r2_2 != 0) {
                ((void (*)(void *,...))(temp_r3->unk14->unkC))(&spA4, temp_r3);
                var_r0_9 = spA4;
                if ((s32) var_r0_9 < 0) {
                    var_r0_9 += 7;
                }
                var_r0_10 = spA4.unk2;
                if ((s32) var_r0_10 < 0) {
                    var_r0_10 += 7;
                }
                spAC = (s8) (var_r0_9 >> 3);
                spAC.unk1 = (s8) (var_r0_10 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spAC;
                    }
                    sp8 += 1;
                }
                var_r0_11 = spA4.unk4;
                if ((s32) var_r0_11 < 0) {
                    var_r0_11 += 7;
                }
                var_r0_12 = spA4.unk2;
                if ((s32) var_r0_12 < 0) {
                    var_r0_12 += 7;
                }
                spB0 = (s8) (var_r0_11 >> 3);
                spB0.unk1 = (s8) (var_r0_12 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spB0;
                    }
                    sp8 += 1;
                }
                var_r0_13 = spA4;
                if ((s32) var_r0_13 < 0) {
                    var_r0_13 += 7;
                }
                var_r0_14 = spA4.unk6;
                if ((s32) var_r0_14 < 0) {
                    var_r0_14 += 7;
                }
                spB4 = (s8) (var_r0_13 >> 3);
                spB4.unk1 = (s8) (var_r0_14 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spB4;
                    }
                    sp8 += 1;
                }
                var_r0_15 = spA4.unk4;
                if ((s32) var_r0_15 < 0) {
                    var_r0_15 += 7;
                }
                var_r0_16 = spA4.unk6;
                if ((s32) var_r0_16 < 0) {
                    var_r0_16 += 7;
                }
                spB8 = (s8) (var_r0_15 >> 3);
                spB8.unk1 = (s8) (var_r0_16 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spB8;
                    }
                    sp8 += 1;
                }
            }
        }
        temp_r0_5 = *spE0;
        temp_r0_6 = (*temp_r0_5)->unk40(temp_r0_5, 0x4B);
        if (temp_r0_6 == 0) {

        } else {
            temp_r1_3 = temp_r0_6->unk4;
            var_r2_3 = 0;
            if (((s32) temp_r1_3 > 0x133) && ((s32) temp_r1_3 <= 0x233) && (temp_r6 == (temp_r1_3 + 0xFFFFFECC))) {
                var_r2_3 = 1;
            }
            if (var_r2_3 == 0) {

            } else {
                ((void (*)(void *,...))(temp_r0_6->unk14->unkC))(&spBC, temp_r0_6);
                var_r0_17 = spBC;
                if ((s32) var_r0_17 < 0) {
                    var_r0_17 += 7;
                }
                var_r0_18 = spBC.unk2;
                if ((s32) var_r0_18 < 0) {
                    var_r0_18 += 7;
                }
                spC4 = (s8) (var_r0_17 >> 3);
                spC4.unk1 = (s8) (var_r0_18 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spC4;
                    }
                    sp8 += 1;
                }
                var_r0_19 = spBC.unk4;
                if ((s32) var_r0_19 < 0) {
                    var_r0_19 += 7;
                }
                var_r0_20 = spBC.unk2;
                if ((s32) var_r0_20 < 0) {
                    var_r0_20 += 7;
                }
                spC8 = (s8) (var_r0_19 >> 3);
                spC8.unk1 = (s8) (var_r0_20 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spC8;
                    }
                    sp8 += 1;
                }
                var_r0_21 = spBC;
                if ((s32) var_r0_21 < 0) {
                    var_r0_21 += 7;
                }
                var_r0_22 = spBC.unk6;
                if ((s32) var_r0_22 < 0) {
                    var_r0_22 += 7;
                }
                spCC = (s8) (var_r0_21 >> 3);
                spCC.unk1 = (s8) (var_r0_22 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spCC;
                    }
                    sp8 += 1;
                }
                var_r0_23 = spBC.unk4;
                if ((s32) var_r0_23 < 0) {
                    var_r0_23 += 7;
                }
                var_r0_24 = spBC.unk6;
                if ((s32) var_r0_24 < 0) {
                    var_r0_24 += 7;
                }
                spD0 = (s8) (var_r0_23 >> 3);
                spD0.unk1 = (s8) (var_r0_24 >> 3);
                if (sp8 <= 0xBU) {
                    if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                        (&sp0)[sp8].unkC = (s32) spD0;
                    }
                    sp8 += 1;
                }
            }
        }
        var_r2_4 = 0;
        if (sp8 != 0) {
            var_r2_4 = &spC;
        }
        var_r4 = (GenObj *)((u8 *)spD8 + 0x8C);
        sp0 = var_r2_4;
        sp4 = sp8;
        func_0809CF34(&spD4, spD8->unk8C + 0x2E58, 1, temp_r6);
        temp_r2_2 = &(&sp0)[sp8].unk4 + 8;
        var_r1 = &spC;
        var_r0_25 = &spD4;
        if (var_r1 != temp_r2_2) {
            do {
                var_r1 += 4;
            } while (var_r1 != temp_r2_2);
        }
        goto block_252;
    }
    var_r8 = temp_r2 + 1;
    temp_r6_2 = temp_r2 - 0x33;
    sp8 = 0;
    temp_r0_7 = temp_r0->unkA8;
    temp_r0_8 = (*temp_r0_7)->unk40(temp_r0_7, 0x4A);
    if (temp_r0_8 == 0) {

    } else {
        temp_r1_4 = temp_r0_8->unk4;
        var_r2_5 = 0;
        if (((s32) temp_r1_4 > 0x33) && ((s32) temp_r1_4 <= 0x133) && (temp_r6_2 == (temp_r1_4 - 0x34))) {
            var_r2_5 = 1;
        }
        if (var_r2_5 != 0) {
            ((void (*)(void *,...))(temp_r0_8->unk14->unkC))(&sp40, temp_r0_8);
            var_r0_26 = sp40;
            if ((s32) var_r0_26 < 0) {
                var_r0_26 += 7;
            }
            var_r1_2 = sp40.unk2;
            if ((s32) var_r1_2 < 0) {
                var_r1_2 += 7;
            }
            sp48 = (s8) (var_r0_26 >> 3);
            sp48.unk1 = (s8) (var_r1_2 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp48;
                }
                sp8 += 1;
            }
            var_r0_27 = sp40.unk4;
            if ((s32) var_r0_27 < 0) {
                var_r0_27 += 7;
            }
            var_r1_3 = sp40.unk2;
            if ((s32) var_r1_3 < 0) {
                var_r1_3 += 7;
            }
            sp4C = (s8) (var_r0_27 >> 3);
            sp4C.unk1 = (s8) (var_r1_3 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp4C;
                }
                sp8 += 1;
            }
            var_r0_28 = sp40;
            if ((s32) var_r0_28 < 0) {
                var_r0_28 += 7;
            }
            var_r1_4 = sp40.unk6;
            if ((s32) var_r1_4 < 0) {
                var_r1_4 += 7;
            }
            sp50 = (s8) (var_r0_28 >> 3);
            sp50.unk1 = (s8) (var_r1_4 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp50;
                }
                sp8 += 1;
            }
            var_r0_29 = sp40.unk4;
            if ((s32) var_r0_29 < 0) {
                var_r0_29 += 7;
            }
            var_r1_5 = sp40.unk6;
            if ((s32) var_r1_5 < 0) {
                var_r1_5 += 7;
            }
            sp54 = (s8) (var_r0_29 >> 3);
            sp54.unk1 = (s8) (var_r1_5 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp54;
                }
                sp8 += 1;
            }
        }
    }
    temp_r0_9 = spD8->unkA8;
    temp_r3_2 = (*temp_r0_9)->unk40(temp_r0_9, 0x2B);
    spE0 = (GenObj *)((u8 *)spD8 + 0xA8);
    if (temp_r3_2 == 0) {

    } else {
        temp_r1_5 = temp_r3_2->unk4;
        var_r2_6 = 0;
        if (((s32) temp_r1_5 > 0x33) && ((s32) temp_r1_5 <= 0x133) && (temp_r6_2 == (temp_r1_5 - 0x34))) {
            var_r2_6 = 1;
        }
        if (var_r2_6 != 0) {
            ((void (*)(void *,...))(temp_r3_2->unk14->unkC))(&sp58, temp_r3_2);
            var_r0_30 = sp58;
            if ((s32) var_r0_30 < 0) {
                var_r0_30 += 7;
            }
            var_r1_6 = sp58.unk2;
            if ((s32) var_r1_6 < 0) {
                var_r1_6 += 7;
            }
            sp60 = (s8) (var_r0_30 >> 3);
            sp60.unk1 = (s8) (var_r1_6 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp60;
                }
                sp8 += 1;
            }
            var_r0_31 = sp58.unk4;
            if ((s32) var_r0_31 < 0) {
                var_r0_31 += 7;
            }
            var_r1_7 = sp58.unk2;
            if ((s32) var_r1_7 < 0) {
                var_r1_7 += 7;
            }
            sp64 = (s8) (var_r0_31 >> 3);
            sp64.unk1 = (s8) (var_r1_7 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp64;
                }
                sp8 += 1;
            }
            var_r0_32 = sp58;
            if ((s32) var_r0_32 < 0) {
                var_r0_32 += 7;
            }
            var_r1_8 = sp58.unk6;
            if ((s32) var_r1_8 < 0) {
                var_r1_8 += 7;
            }
            sp68 = (s8) (var_r0_32 >> 3);
            sp68.unk1 = (s8) (var_r1_8 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp68;
                }
                sp8 += 1;
            }
            var_r0_33 = sp58.unk4;
            if ((s32) var_r0_33 < 0) {
                var_r0_33 += 7;
            }
            var_r1_9 = sp58.unk6;
            if ((s32) var_r1_9 < 0) {
                var_r1_9 += 7;
            }
            sp6C = (s8) (var_r0_33 >> 3);
            sp6C.unk1 = (s8) (var_r1_9 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp6C;
                }
                sp8 += 1;
            }
        }
    }
    temp_r0_10 = *spE0;
    temp_r0_11 = (*temp_r0_10)->unk40(temp_r0_10, 0x4B);
    if (temp_r0_11 == 0) {

    } else {
        temp_r1_6 = temp_r0_11->unk4;
        var_r2_7 = 0;
        if (((s32) temp_r1_6 > 0x33) && ((s32) temp_r1_6 <= 0x133) && (temp_r6_2 == (temp_r1_6 - 0x34))) {
            var_r2_7 = 1;
        }
        if (var_r2_7 == 0) {

        } else {
            ((void (*)(void *,...))(temp_r0_11->unk14->unkC))(&sp70, temp_r0_11);
            var_r0_34 = sp70;
            if ((s32) var_r0_34 < 0) {
                var_r0_34 += 7;
            }
            var_r1_10 = sp70.unk2;
            if ((s32) var_r1_10 < 0) {
                var_r1_10 += 7;
            }
            sp78 = (s8) (var_r0_34 >> 3);
            sp78.unk1 = (s8) (var_r1_10 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp78;
                }
                sp8 += 1;
            }
            var_r0_35 = sp70.unk4;
            if ((s32) var_r0_35 < 0) {
                var_r0_35 += 7;
            }
            var_r1_11 = sp70.unk2;
            if ((s32) var_r1_11 < 0) {
                var_r1_11 += 7;
            }
            sp7C = (s8) (var_r0_35 >> 3);
            sp7C.unk1 = (s8) (var_r1_11 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp7C;
                }
                sp8 += 1;
            }
            var_r0_36 = sp70;
            if ((s32) var_r0_36 < 0) {
                var_r0_36 += 7;
            }
            var_r1_12 = sp70.unk6;
            if ((s32) var_r1_12 < 0) {
                var_r1_12 += 7;
            }
            sp80 = (s8) (var_r0_36 >> 3);
            sp80.unk1 = (s8) (var_r1_12 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp80;
                }
                sp8 += 1;
            }
            var_r0_37 = sp70.unk4;
            if ((s32) var_r0_37 < 0) {
                var_r0_37 += 7;
            }
            var_r1_13 = sp70.unk6;
            if ((s32) var_r1_13 < 0) {
                var_r1_13 += 7;
            }
            sp84 = (s8) (var_r0_37 >> 3);
            sp84.unk1 = (s8) (var_r1_13 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp84;
                }
                sp8 += 1;
            }
        }
    }
    var_r2_8 = 0;
    if (sp8 != 0) {
        var_r2_8 = &spC;
    }
    var_r4 = (GenObj *)((u8 *)spD8 + 0x8C);
    sp0 = var_r2_8;
    sp4 = sp8;
    func_0809CF34(&sp88, spD8->unk8C + 0x2E58, 0, temp_r6_2);
    temp_r2_3 = &(&sp0)[sp8].unk4 + 8;
    var_r1_14 = &spC;
    var_r0_25 = &sp88;
    if (var_r1_14 == temp_r2_3) {

    } else {
        do {
            var_r1_14 += 4;
        } while (var_r1_14 != temp_r2_3);
    }
block_252:
    sp3C = *var_r0_25;
    temp_r0_12 = func_0809D8A0(*var_r4 + 0x2E58);
    switch (temp_r0_12) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        temp_sl = (sp3C.unk0 * 0x10) + 0x10 + 8;
        temp_r7 = (sp3C.unk1 * 0x10) + 0x38 + 8;
        temp_r0_13 = *spE0;
        temp_r2_4 = *temp_r0_13;
        spDC = (GenObj *)((u8 *)temp_r2_4 + 0xB4);
        sp8.unk0 = (u16) ((0xFFFFFC00 & sp8.unk0) | (var_r8 & 0x3FF));
        temp_r2_5 = (temp_sl & 0x3F) * 4;
        spE4 = temp_r2_5;
        sp8.unk1 = (u8) ((3 & sp8.unk1) | temp_r2_5);
        sp8.unk2 = (u16) ((0xFFFFFC00 & sp8.unk2) | (((u32) (temp_sl << 0x10) >> 0x16) & 0x3FF));
        sp8.unk3 = (u8) ((3 & sp8.unk3) | ((temp_r7 & 0x3F) * 4));
        sp8.unk4 = (u16) ((0xFFFFFC00 & sp8.unk4) | (((u32) (temp_r7 << 0x10) >> 0x16) & 0x3FF));
        temp_r2_4->unkB4(temp_r0_13, &sp8, 1);
        func_080D7F08(spD8);
        temp_r2_6 = (**spE0)->unk14();
        sp0 = (s32 *) temp_r7;
        sp4 = 0;
        func_080D7F9C(spD8, 0, temp_r2_6, temp_sl);
        break;
    }
}
