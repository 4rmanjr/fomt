#include "common.h"
s32 free();                                           /* extern */
s32 func_030004DC(s32, s32, s32, s32);              /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0803ACD8(void *, void *);                    /* extern */
s32 func_08094A3C(s32 *, u8 *);                         /* extern */
s32 func_080A480C(s32, void *, void *);               /* extern */
s32 func_080A4944(s32, void *, s32);                  /* extern */
s32 func_080AB410(s32, ? *, void *);                  /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_080ACC10(void **arg0, void *arg1, ? arg206, ? arg306, ? arg30A, s32 arg312, ? arg313, s32 arg314, u32 arg315, u32 arg316, void **arg317, u32 arg318, void *arg319, s32 arg31A, s32 arg31B, s32 arg31C, void *arg31D, u32 arg31E, u32 arg31F, void *arg320, u32 arg321, ? *arg322, u8 *arg323, u8 *arg324, void *arg325, void *arg326, s8 *arg327) {
    ? *var_r0_4;
    s16 temp_r0_5;
    s16 temp_r1_3;
    s16 temp_r1_6;
    s16 temp_r4_2;
    s32 *var_r0;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r1_2;
    s32 temp_r1_5;
    s32 temp_r1_8;
    s32 temp_r2_2;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r5_3;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_sl;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_sl;
    s8 *var_r1;
    u32 *var_r0_5;
    u32 temp_r0_4;
    u32 temp_r0_9;
    u32 temp_r2_4;
    u32 temp_r7_4;
    u32 var_r3;
    u32 var_r3_3;
    u32 var_r5;
    u8 *var_r1_4;
    u8 *var_r2_2;
    u8 temp_r3_4;
    u8 temp_r4_3;
    u8 var_r4_3;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r1_4;
    void **temp_r1_7;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r5;
    void **temp_r5_2;
    void **temp_r6;
    void **temp_r6_3;
    void **var_r4;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_9;
    void *temp_r2;
    void *temp_r2_3;
    void *temp_r3_3;
    void *temp_r4;
    void *temp_r6_2;
    void *temp_r6_4;
    void *temp_r7_3;
    void *temp_r7_5;
    void *var_r0_6;
    void *var_r1_3;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3_2;
    void *var_r4_2;

    arg317 = arg0;
    arg312 = 0;
    var_r1 = arg317 + 0x19C;
    var_r2 = 0x20;
    do {
        *var_r1 = (s8) arg312;
        var_r2 -= 1;
        var_r1 += 1;
    } while (var_r2 > 0);
    temp_r5 = arg317;
    temp_r0 = temp_r5->unk4;
    temp_r0->unk90->unk10(temp_r0, arg1->unk0, arg1->unk4, arg1->unkC);
    temp_r2 = temp_r5->unk1024;
    if (temp_r2->unk9C != 0) {
        func_0803ACD8(temp_r2, arg1->unk0);
        temp_r2->unk9C = 0U;
    }
    temp_r0_2 = arg317;
    temp_r4 = temp_r0_2 + 0x19C;
    temp_r3 = arg317;
    temp_r3->unkDB1 = (u8) temp_r0_2->unkDB0;
    var_r3 = 0;
    arg323 = temp_r0_2 + 0xDB0;
    arg324 = temp_r3 + 0xDB1;
    if ((u32) temp_r3->unkDB1 > 0U) {
        temp_r0_3 = arg317;
        var_r2_2 = temp_r0_3 + 0xD1D;
        do {
            if (((u8) *var_r2_2 >> 7) == 0) {
                (temp_r0_3 + 0x1BC + ((s8) *var_r2_2 * 0x84))->unk80 = 0xFF;
            }
            var_r2_2 += 0xC;
            var_r3 += 1;
        } while (var_r3 < (u32) temp_r4->unkC15);
    }
    temp_r4->unkC14 = 0;
    temp_r0_4 = 0x7C - *arg1->unk8;
    arg318 = temp_r0_4;
    if (temp_r0_4 > 0x80U) {

    } else {
        unksp14.unk0 = 0U;
        var_r0 = &unksp18;
        var_r1_2 = 3;
        temp_r5_2 = arg317;
        temp_r6 = temp_r5_2 + 8;
        arg325 = temp_r5_2 + 0x198;
        arg322 = &arg206;
        do {
            *var_r0 = 0;
            var_r0 += 0x204;
            var_r1_2 -= 1;
        } while (var_r1_2 != -1);
        temp_r4_2 = (*temp_r5_2)->unk18(arg317);
        temp_r0_5 = (*arg317)->unk1C(arg317);
        arg306.unk0 = (void *) arg1->unk0;
        arg306.unk4 = (s32) arg1->unk4;
        arg306.unk8 = &unksp14;
        arg306.unkC = temp_r4_2;
        arg306.unkE = temp_r0_5;
        arg319 = temp_r6 + 0x178;
        temp_r1 = temp_r6->unk178;
        if (temp_r1 != 0) {
            temp_r1->unk14->unk1C(temp_r1, &arg306);
        }
        temp_r0_6 = arg317->unk1028;
        if (temp_r0_6 != 0) {
            func_080AB410(temp_r0_6, &unksp14, arg306.unk0);
        }
        temp_r3_2 = arg317;
        temp_r6_2 = temp_r3_2 + 0x102C;
        temp_r1_2 = temp_r3_2->unk102C;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {

        } else {
            arg313.unk0 = (void *) arg306.unk0;
            arg313.unk4 = (s32 *) arg306.unk8;
            temp_r7 = temp_r3_2->unk0->unk18(arg317);
            temp_r2_2 = (*arg317)->unk1C(arg317);
            temp_r5_3 = temp_r3_2->unk102C;
            if ((s32) ((0 - temp_r5_3) | temp_r5_3) >= 0) {

            } else if (temp_r6_2->unk8 == 0) {
                arg31C = temp_r6_2->unk4 - temp_r7;
                temp_r1_3 = temp_r6_2->unk6;
                temp_sl = temp_r1_3 - temp_r2_2;
                temp_r7_2 = 0x8000 - temp_r1_3;
                temp_r1_4 = temp_r5_3->unk28;
                (*temp_r1_4)->unk10(&arg30A, temp_r1_4, *(temp_r5_3->unk2C + (temp_r5_3->unk34 * 4)));
                temp_r1_5 = (temp_r5_3 + 4)->unk4;
                if ((s32) ((0 - temp_r1_5) | temp_r1_5) < 0) {
                    unksp0 = temp_r7_2;
                    unksp4 = &arg30A;
                    unksp8 = temp_r5_3->unk0;
                    unkspC = (s32) temp_r5_3->unkC;
                    unksp10 = temp_r5_3 + 0x10;
                    var_r0_2 = func_030004DC(arg314, arg31C, temp_sl, 0xAA);
                } else {
                    var_r0_2 = 0;
                }
                if ((var_r0_2 != 0) && (temp_r5_3->unk3C != 0)) {
                    func_080A480C(temp_r5_3, arg313.unk0, &arg30A + 8);
                    if (temp_r5_3->unk3D != 0) {
                        func_080A4944(temp_r5_3, &arg30A + 0x10, 1);
                    } else if (temp_r5_3->unk3E == 0) {
                        func_080A4944(temp_r5_3, &arg30A + 0x10, 1);
                        temp_r5_3->unk3E = 1U;
                    }
                    temp_r5_3->unk3C = 0U;
                }
            } else if ((u32) temp_r6_2->unkA <= 2U) {

            } else {
                arg31A = temp_r6_2->unk4 - temp_r7;
                temp_r1_6 = temp_r6_2->unk6;
                arg31B = temp_r1_6 - temp_r2_2;
                temp_r1_7 = temp_r5_3->unk28;
                (*temp_r1_7)->unk10(&arg30A, temp_r1_7, *(temp_r5_3->unk2C + (temp_r5_3->unk34 * 4)));
                temp_r1_8 = (temp_r5_3 + 4)->unk4;
                if ((s32) ((0 - temp_r1_8) | temp_r1_8) < 0) {
                    unksp0 = 0x8000 - temp_r1_6;
                    unksp4 = &arg30A;
                    unksp8 = temp_r5_3->unk0;
                    unkspC = (s32) temp_r5_3->unkC;
                    unksp10 = temp_r5_3 + 0x10;
                    var_r0_3 = func_030004DC(arg314, arg31A, arg31B, 0xAA);
                } else {
                    var_r0_3 = 0;
                }
                if (var_r0_3 == 0) {

                } else if (temp_r5_3->unk3C == 0) {

                } else {
                    func_080A480C(temp_r5_3, arg313.unk0, &arg30A + 8);
                    if (temp_r5_3->unk3D != 0) {
                        func_080A4944(temp_r5_3, &arg30A + 0x10, 1);
                    } else if (temp_r5_3->unk3E == 0) {
                        func_080A4944(temp_r5_3, &arg30A + 0x10, 1);
                        temp_r5_3->unk3E = 1U;
                    }
                    temp_r5_3->unk3C = 0U;
                }
            }
        }
        var_r5 = arg317->unk198;
        if (var_r5 >= 0x64U) {
            var_r5 = 0;
        }
        temp_r6_3 = temp_r6 + (var_r5 * 4);
        temp_r7_3 = arg325;
        var_r4 = temp_r6_3;
loop_56:
        if ((u32) unksp14.unk0 >= (u32) arg318) {
            var_r5 = (u32) ((s32) (var_r4 - temp_r6) >> 2);
        } else {
            if (var_r4 != arg319) {
                temp_r3_3 = *var_r4;
                if (temp_r3_3 != 0) {
                    temp_r3_3->unk14->unk1C(temp_r3_3, &arg306);
                }
            }
            var_r4 += 4;
            if (var_r4 == temp_r7_3) {
                var_r4 = temp_r6;
            }
            if (var_r4 != temp_r6_3) {
                goto loop_56;
            }
        }
        arg317->unk198 = var_r5;
        func_08094A3C(&unksp14, arg1->unk8);
        var_r0_4 = arg322;
        if (&unksp18 != var_r0_4) {
            do {
                var_r0_4 += 0xFFFFFDFC;
            } while (&unksp18 != var_r0_4);
        }
    }
    arg31D = arg317 + 0x19C;
    temp_r6_4 = arg1->unk0;
    arg31E = 0;
    temp_r4_3 = *arg323;
    arg31F = (u32) temp_r4_3;
    if ((u32) temp_r4_3 <= 0U) {

    } else {
loop_63:
        temp_r7_4 = arg31E;
        temp_r0_7 = arg31D + 0xB78 + (temp_r7_4 * 0xC);
        arg321 = temp_r7_4 + 1;
        if (((u8) temp_r0_7->unk9 >> 7) != 0) {

        } else {
            temp_r7_5 = arg31D + 0x20 + ((s8) temp_r0_7->unk9 * 0x84);
            if ((temp_r7_5->unk82 == 0) && (temp_r0_7->unkA != 0)) {

            } else {
                func_08008F0C(&unksp14, temp_r7_5, (temp_r0_7->unk8 << 5) + 0x05000200, 0x20);
                arg320 = &unksp0 + 0x14;
                temp_r1_9 = temp_r6_4->unk4;
                if (temp_r1_9 != temp_r6_4->unkC) {
                    if (temp_r1_9 != 0) {
                        temp_r1_9->unk0 = (s32) unksp14.unk0;
                        temp_r1_9->unk4 = (s32) unksp14.unk4;
                        temp_r1_9->unk8 = (s32) unksp14.unk8;
                        temp_r1_9->unkC = (s32) unksp14.unkC;
                    }
                    temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
                    arg327 = temp_r7_5 + 0x82;
                    arg321 = arg31E + 1;
                } else {
                    arg326 = temp_r1_9;
                    arg316 = 1;
                    temp_r4_4 = (s32) (temp_r1_9 - temp_r6_4->unk0) >> 4;
                    var_r0_5 = &arg315;
                    *var_r0_5 = temp_r4_4;
                    if ((u32) temp_r4_4 < (u32) arg316) {
                        var_r0_5 = &arg316;
                    }
                    temp_r0_8 = temp_r4_4 + *var_r0_5;
                    if (temp_r0_8 != 0) {
                        temp_r4_5 = temp_r0_8 * 0x10;
                        var_r0_6 = malloc(temp_r4_5);
                        var_sl = temp_r4_5;
                        if (var_r0_6 == 0) {
                            var_r0_6 = func_080D3BC0(var_sl);
                        }
                    } else {
                        var_r0_6 = 0;
                        var_sl = 0;
                    }
                    var_r2_3 = temp_r6_4->unk0;
                    var_r3_2 = var_r0_6;
                    arg327 = temp_r7_5 + 0x82;
                    arg321 = arg31E + 1;
loop_82:
                    if (var_r2_3 != arg326) {
                        if (var_r3_2 != 0) {
                            var_r3_2->unk0 = (s32) var_r2_3->unk0;
                            var_r3_2->unk4 = (s32) var_r2_3->unk4;
                            var_r3_2->unk8 = (s32) var_r2_3->unk8;
                            var_r3_2->unkC = (s32) var_r2_3->unkC;
                        }
                        var_r2_3 += 0x10;
                        var_r3_2 += 0x10;
                        goto loop_82;
                    }
                    temp_r0_9 = arg316;
                    if (temp_r0_9 == 1) {
                        if (var_r3_2 != 0) {
                            temp_r1_10 = arg320;
                            var_r3_2->unk0 = (s32) temp_r1_10->unk0;
                            var_r3_2->unk4 = (s32) temp_r1_10->unk4;
                            var_r3_2->unk8 = (s32) temp_r1_10->unk8;
                            var_r3_2->unkC = (s32) temp_r1_10->unkC;
                        }
                        var_r4_2 = var_r3_2 + 0x10;
                    } else {
                        var_r3_3 = temp_r0_9;
                        var_r2_4 = var_r3_2;
                        if (var_r3_3 != 0) {
                            do {
                                if (var_r2_4 != 0) {
                                    temp_r1_11 = arg320;
                                    var_r2_4->unk0 = (s32) temp_r1_11->unk0;
                                    var_r2_4->unk4 = (s32) temp_r1_11->unk4;
                                    var_r2_4->unk8 = (s32) temp_r1_11->unk8;
                                    var_r2_4->unkC = (s32) temp_r1_11->unkC;
                                }
                                var_r3_3 -= 1;
                                var_r2_4 += 0x10;
                            } while (var_r3_3 != 0);
                        }
                        var_r4_2 = var_r2_4;
                    }
                    temp_r2_3 = temp_r6_4->unk4;
                    temp_r0_10 = temp_r6_4->unk0;
                    var_r1_3 = temp_r0_10;
                    if (temp_r0_10 != temp_r2_3) {
                        do {
                            var_r1_3 += 0x10;
                        } while (var_r1_3 != temp_r2_3);
                    }
                    if (temp_r0_10 != 0) {
                        free();
                    }
                    temp_r6_4->unk0 = var_r0_6;
                    temp_r6_4->unk4 = var_r4_2;
                    temp_r6_4->unkC = (void *) (var_sl + var_r0_6);
                }
                *arg327 = 0;
                if ((temp_r0_7->unkA == 0) && (((u8) temp_r0_7->unk9 >> 7) == 0)) {
                    temp_r0_7->unkA = 1U;
                }
            }
        }
        temp_r2_4 = arg321;
        arg31E = temp_r2_4;
        if (temp_r2_4 < (u32) arg31F) {
            goto loop_63;
        }
    }
    var_r4_3 = *arg323;
    if ((u32) var_r4_3 < (u32) *arg324) {
        var_r1_4 = (var_r4_3 * 0xC) + 0xB81 + (arg317 + 0x19C);
        do {
            temp_r3_4 = *var_r1_4;
            if ((temp_r3_4 >> 7) == 0) {
                *var_r1_4 = temp_r3_4 | 0xFF;
            }
            var_r1_4 += 0xC;
            var_r4_3 += 1;
        } while ((u32) var_r4_3 < (u32) arg317->unkDB1);
    }
}

