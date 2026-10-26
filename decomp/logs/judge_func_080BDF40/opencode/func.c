#include "common.h"
s32 free();                                           /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
u8 *func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E860(void *, u16);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(u8 *, s32, u16, void *);            /* extern */
u16 func_080C09D8(void *);                          /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_080BDF40(void *arg0) {
s32 sp0;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    void *sp40;
    void *sp44;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_14;
    s32 temp_r0_15;
    s32 temp_r0_19;
    s32 temp_r0_21;
    s32 temp_r0_22;
    s32 temp_r0_24;
    s32 temp_r0_26;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_9;
    s32 temp_r1_10;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2_3;
    s32 temp_r2_6;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_ip_3;
    s32 var_ip_4;
    s32 var_r6;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    u16 var_r2;
    u16 var_r2_14;
    u16 var_r2_15;
    u16 var_r2_16;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r2_4;
    u16 var_r2_9;
    u16 var_r3;
    u16 var_r3_3;
    u16 var_r3_5;
    u16 var_r3_7;
    u8 *temp_r0;
    u8 *temp_r0_25;
    u8 *temp_r0_2;
    u8 *temp_r4;
    u8 *temp_r4_12;
    u8 *temp_r4_22;
    u8 *temp_r4_23;
    u8 *temp_r4_2;
    u8 *temp_r4_3;
    u8 *temp_r4_4;
    u8 temp_r2;
    u8 temp_r2_2;
    void **temp_r1_4;
    void **temp_r1_7;
    void *temp_r0_10;
    void *temp_r0_13;
    void *temp_r0_16;
    void *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_20;
    void *temp_r0_23;
    void *temp_r0_3;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r4_13;
    void *temp_r4_14;
    void *temp_r4_15;
    void *temp_r4_16;
    void *temp_r4_19;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_9;
    void *temp_r6;
    void *temp_r6_2;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r2_10;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r3_2;
    void *var_r3_4;
    void *var_r3_6;
    void *var_r3_8;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;
    void *var_r4_4;
    void *var_r4_5;

    if (arg0->unk60B != 0) {
        var_r4 = arg0 + 0x448;
        var_r6 = 2;
        do {
            temp_r0 = func_08008920(arg0);
            temp_r2 = *temp_r0;
            if ((u32) temp_r2 <= 0x7FU) {
                temp_r1 = temp_r0 + ((temp_r2 * 8) + 4);
                temp_r1->unk0 = (s32) var_r4->unk0;
                temp_r1->unk4 = (u16) var_r4->unk4;
                *temp_r0 = temp_r2 + 1;
            }
            var_r4 += 8;
            var_r6 -= 1;
        } while (var_r6 >= 0);
    }
    temp_r0_2 = func_08008920(arg0);
    temp_r2_2 = *temp_r0_2;
    if ((u32) temp_r2_2 <= 0x7FU) {
        temp_r0_3 = temp_r0_2 + ((temp_r2_2 * 8) + 4);
        temp_r0_3->unk0 = (s32) arg0->unk440;
        temp_r0_3->unk4 = (u16) arg0->unk444;
        *temp_r0_2 = temp_r2_2 + 1;
    }
    if (((u32) (arg0->unk5A4 - 2) <= 1U) || (arg0->unk5A0 == 2)) {
        temp_r4 = func_08008920(arg0);
        temp_r1_2 = arg0->unk468;
        var_r2 = 0;
        if (temp_r1_2 != 0) {
            var_r2 = (arg0 + 0x468)->unk4;
        }
        func_0805E99C(temp_r4, temp_r1_2, var_r2, arg0->unk464);
    }
    if (arg0->unk60B != 0) {
        temp_r4_2 = func_08008920(arg0);
        temp_r0_4 = arg0->unk490;
        var_r2_2 = 0;
        if (temp_r0_4 != 0) {
            var_r2_2 = (arg0 + 0x490)->unk4;
        }
        func_0805E99C(temp_r4_2, temp_r0_4, var_r2_2, arg0->unk48C);
    }
    temp_r4_3 = func_08008920(arg0);
    temp_r0_5 = arg0->unk4B8;
    var_r2_3 = 0;
    if (temp_r0_5 != 0) {
        var_r2_3 = (arg0 + 0x4B8)->unk4;
    }
    func_0805E99C(temp_r4_3, temp_r0_5, var_r2_3, arg0->unk4B4);
    if ((u32) (arg0->unk5A0 - 4) <= 1U) {
        if (arg0->unk60B != 0) {
            temp_r4_4 = func_08008920(arg0);
            temp_r1_3 = arg0->unk530;
            var_r2_4 = 0;
            if (temp_r1_3 != 0) {
                var_r2_4 = (arg0 + 0x530)->unk4;
            }
            func_0805E99C(temp_r4_4, temp_r1_3, var_r2_4, arg0->unk52C);
        }
    } else {
        if ((s32) (func_0805E8F0(arg0->unk528) << 0x1E) >= 0) {

        } else {
            temp_r4_5 = arg0 + 0x530;
            temp_r0_6 = arg0->unk528;
            temp_r1_4 = temp_r0_6->unk0;
            (*temp_r1_4)->unk10(&sp0, temp_r1_4, *(temp_r0_6->unk4 + (temp_r0_6->unkC * 4)));
            memcpy(&sp0, &sp0, 0x20);
            temp_r0_7 = &sp0 + 0xC;
            arg0->unk530 = (s32) sp0.unk0;
            temp_r4_5->unk4 = (s32) sp0.unk4;
            temp_r4_5->unk8 = (s32) sp0.unk8;
            temp_r4_6 = temp_r4_5 + 0xC;
            temp_r4_5->unkC = (s32) sp0.unkC;
            temp_r4_6->unk4 = (s32) temp_r0_7->unk4;
            temp_r4_6->unk8 = (s32) temp_r0_7->unk8;
            temp_r4_6->unkC = (s32) temp_r0_7->unkC;
            (temp_r4_6 + 0xC)->unk4 = (s32) (temp_r0_7 + 0xC)->unk4;
            temp_r6 = func_08008910(arg0);
            temp_r7 = arg0->unk538;
            temp_r0_8 = arg0 + 0x5D8;
            temp_r2_3 = func_08007D4C(temp_r0_8, temp_r0_8->unk4);
            var_r3 = 0;
            if (arg0->unk538 != 0) {
                var_r3 = (arg0 + 0x538)->unk4;
            }
            sp40 = temp_r6;
            func_08008F0C(&sp0, temp_r7, (temp_r2_3 << 5) + 0x06010000, var_r3);
            temp_r1_5 = temp_r6->unk4;
            if (temp_r1_5 != temp_r6->unkC) {
                if (temp_r1_5 != 0) {
                    temp_r1_5->unk0 = (s32) sp0.unk0;
                    temp_r1_5->unk4 = (s32) sp0.unk4;
                    temp_r1_5->unk8 = (s32) sp0.unk8;
                    temp_r1_5->unkC = (s32) sp0.unkC;
                }
                sp40->unk4 = (void *) (sp40->unk4 + 0x10);
            } else {
                sp44 = temp_r1_5;
                sp24 = 1;
                temp_r4_7 = (s32) (temp_r1_5 - sp40->unk0) >> 4;
                sp20 = temp_r4_7;
                var_r0 = &sp20;
                if ((u32) temp_r4_7 < 1U) {
                    var_r0 = &sp24;
                }
                temp_r0_9 = temp_r4_7 + *var_r0;
                if (temp_r0_9 != 0) {
                    temp_r4_8 = temp_r0_9 * 0x10;
                    var_r0_2 = malloc(temp_r4_8);
                    var_sb = temp_r4_8;
                    if (var_r0_2 == 0) {
                        var_r0_2 = func_080D3BC0(var_sb);
                    }
                } else {
                    var_r0_2 = 0;
                    var_sb = 0;
                }
                var_r2_5 = sp40->unk0;
                var_r3_2 = var_r0_2;
loop_38:
                if (var_r2_5 != sp44) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2_5->unk0;
                        var_r3_2->unk4 = (s32) var_r2_5->unk4;
                        var_r3_2->unk8 = (s32) var_r2_5->unk8;
                        var_r3_2->unkC = (s32) var_r2_5->unkC;
                    }
                    var_r2_5 += 0x10;
                    var_r3_2 += 0x10;
                    goto loop_38;
                }
                if (sp24 == 1) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) sp0.unk0;
                        var_r3_2->unk4 = (s32) sp0.unk4;
                        var_r3_2->unk8 = (s32) sp0.unk8;
                        var_r3_2->unkC = (s32) sp0.unkC;
                    }
                    var_r4_2 = var_r3_2 + 0x10;
                } else {
                    var_ip = sp24;
                    var_r2_6 = var_r3_2;
                    if (sp24 != 0) {
                        do {
                            if (var_r2_6 != 0) {
                                var_r2_6->unk0 = (s32) sp0.unk0;
                                var_r2_6->unk4 = (s32) sp0.unk4;
                                var_r2_6->unk8 = (s32) sp0.unk8;
                                var_r2_6->unkC = (s32) sp0.unkC;
                            }
                            var_ip -= 1;
                            var_r2_6 += 0x10;
                        } while (var_ip != 0);
                    }
                    var_r4_2 = var_r2_6;
                }
                temp_r2_4 = sp40->unk4;
                temp_r0_10 = sp40->unk0;
                var_r1 = temp_r0_10;
                if (temp_r0_10 != temp_r2_4) {
                    do {
                        var_r1 += 0x10;
                    } while (var_r1 != temp_r2_4);
                }
                if (temp_r0_10 != 0) {
                    free();
                }
                sp40->unk0 = var_r0_2;
                sp40->unk4 = var_r4_2;
                sp40->unkC = (void *) (var_sb + var_r0_2);
            }
            temp_r4_9 = func_08008910(arg0);
            temp_r0_11 = arg0->unk540;
            var_r3_3 = 0;
            if (temp_r0_11 != 0) {
                var_r3_3 = (arg0 + 0x540)->unk4;
            }
            sp40 = temp_r4_9;
            func_08008F0C(&sp0, temp_r0_11, 0x050002C0, var_r3_3);
            temp_r1_6 = temp_r4_9->unk4;
            if (temp_r1_6 != temp_r4_9->unkC) {
                if (temp_r1_6 != 0) {
                    temp_r1_6->unk0 = (s32) sp0.unk0;
                    temp_r1_6->unk4 = (s32) sp0.unk4;
                    temp_r1_6->unk8 = (s32) sp0.unk8;
                    temp_r1_6->unkC = (s32) sp0.unkC;
                }
                sp40->unk4 = (void *) (sp40->unk4 + 0x10);
            } else {
                sp44 = temp_r1_6;
                sp2C = 1;
                temp_r4_10 = (s32) (temp_r1_6 - sp40->unk0) >> 4;
                sp28 = temp_r4_10;
                var_r0_3 = &sp28;
                if ((u32) temp_r4_10 < 1U) {
                    var_r0_3 = &sp2C;
                }
                temp_r0_12 = temp_r4_10 + *var_r0_3;
                if (temp_r0_12 != 0) {
                    temp_r4_11 = temp_r0_12 * 0x10;
                    var_r0_4 = malloc(temp_r4_11);
                    var_sb_2 = temp_r4_11;
                    if (var_r0_4 == 0) {
                        var_r0_4 = func_080D3BC0(var_sb_2);
                    }
                } else {
                    var_r0_4 = 0;
                    var_sb_2 = 0;
                }
                var_r2_7 = sp40->unk0;
                var_r3_4 = var_r0_4;
                if (var_r2_7 != sp44) {
                    do {
                        if (var_r3_4 != 0) {
                            var_r3_4->unk0 = (s32) var_r2_7->unk0;
                            var_r3_4->unk4 = (s32) var_r2_7->unk4;
                            var_r3_4->unk8 = (s32) var_r2_7->unk8;
                            var_r3_4->unkC = (s32) var_r2_7->unkC;
                        }
                        var_r2_7 += 0x10;
                        var_r3_4 += 0x10;
                    } while (var_r2_7 != sp44);
                }
                if (sp2C == 1) {
                    if (var_r3_4 != 0) {
                        var_r3_4->unk0 = (s32) sp0.unk0;
                        var_r3_4->unk4 = (s32) sp0.unk4;
                        var_r3_4->unk8 = (s32) sp0.unk8;
                        var_r3_4->unkC = (s32) sp0.unkC;
                    }
                    var_r4_3 = var_r3_4 + 0x10;
                } else {
                    var_ip_2 = sp2C;
                    var_r2_8 = var_r3_4;
                    if (sp2C != 0) {
                        do {
                            if (var_r2_8 != 0) {
                                var_r2_8->unk0 = (s32) sp0.unk0;
                                var_r2_8->unk4 = (s32) sp0.unk4;
                                var_r2_8->unk8 = (s32) sp0.unk8;
                                var_r2_8->unkC = (s32) sp0.unkC;
                            }
                            var_ip_2 -= 1;
                            var_r2_8 += 0x10;
                        } while (var_ip_2 != 0);
                    }
                    var_r4_3 = var_r2_8;
                }
                temp_r2_5 = sp40->unk4;
                temp_r0_13 = sp40->unk0;
                var_r1_2 = temp_r0_13;
                if (temp_r0_13 != temp_r2_5) {
                    do {
                        var_r1_2 += 0x10;
                    } while (var_r1_2 != temp_r2_5);
                }
                if (temp_r0_13 != 0) {
                    free();
                }
                sp40->unk0 = var_r0_4;
                sp40->unk4 = var_r4_3;
                sp40->unkC = (void *) (var_sb_2 + var_r0_4);
            }
        }
        if (arg0->unk5AC == 3) {
            temp_r4_12 = func_08008920(arg0);
            temp_r0_14 = arg0->unk530;
            var_r2_9 = 0;
            if (temp_r0_14 != 0) {
                var_r2_9 = (arg0 + 0x530)->unk4;
            }
            func_0805E99C(temp_r4_12, temp_r0_14, var_r2_9, arg0->unk52C);
        }
    }
    temp_r0_15 = arg0->unk5A0;
    if ((temp_r0_15 != 3) && (temp_r0_15 != 0)) {
        temp_r4_13 = arg0->unk4D8;
        func_0805E860(temp_r4_13, func_080C09D8(arg0));
    } else if (arg0->unk60E != 0) {
        temp_r4_14 = arg0->unk4D8;
        func_0805E860(temp_r4_14, func_080C09D8(arg0));
        arg0->unk60E = 0U;
    }
    if ((s32) (func_0805E8F0(arg0->unk4D8) << 0x1E) >= 0) {

    } else {
        temp_r4_15 = arg0 + 0x4E0;
        temp_r0_16 = arg0->unk4D8;
        temp_r1_7 = temp_r0_16->unk0;
        (*temp_r1_7)->unk10(&sp0, temp_r1_7, *(temp_r0_16->unk4 + (temp_r0_16->unkC * 4)));
        memcpy(&sp0, &sp0, 0x20);
        temp_r0_17 = &sp0 + 0xC;
        arg0->unk4E0 = (s32) sp0.unk0;
        temp_r4_15->unk4 = (s32) sp0.unk4;
        temp_r4_15->unk8 = (s32) sp0.unk8;
        temp_r4_16 = temp_r4_15 + 0xC;
        temp_r4_15->unkC = (s32) sp0.unkC;
        temp_r4_16->unk4 = (s32) temp_r0_17->unk4;
        temp_r4_16->unk8 = (s32) temp_r0_17->unk8;
        temp_r4_16->unkC = (s32) temp_r0_17->unkC;
        (temp_r4_16 + 0xC)->unk4 = (s32) (temp_r0_17 + 0xC)->unk4;
        temp_r6_2 = func_08008910(arg0);
        temp_r7_2 = arg0->unk4E8;
        temp_r0_18 = arg0 + 0x5F0;
        temp_r2_6 = func_08007D4C(temp_r0_18, temp_r0_18->unk4);
        var_r3_5 = 0;
        if (arg0->unk4E8 != 0) {
            var_r3_5 = (arg0 + 0x4E8)->unk4;
        }
        sp40 = temp_r6_2;
        func_08008F0C(&sp0, temp_r7_2, (temp_r2_6 << 5) + 0x06010000, var_r3_5);
        temp_r1_8 = temp_r6_2->unk4;
        if (temp_r1_8 != temp_r6_2->unkC) {
            if (temp_r1_8 != 0) {
                temp_r1_8->unk0 = (s32) sp0.unk0;
                temp_r1_8->unk4 = (s32) sp0.unk4;
                temp_r1_8->unk8 = (s32) sp0.unk8;
                temp_r1_8->unkC = (s32) sp0.unkC;
            }
            sp40->unk4 = (void *) (sp40->unk4 + 0x10);
        } else {
            sp44 = temp_r1_8;
            sp34 = 1;
            temp_r4_17 = (s32) (temp_r1_8 - sp40->unk0) >> 4;
            sp30 = temp_r4_17;
            var_r0_5 = &sp30;
            if ((u32) temp_r4_17 < 1U) {
                var_r0_5 = &sp34;
            }
            temp_r0_19 = temp_r4_17 + *var_r0_5;
            if (temp_r0_19 != 0) {
                temp_r4_18 = temp_r0_19 * 0x10;
                var_r0_6 = malloc(temp_r4_18);
                var_sb_3 = temp_r4_18;
                if (var_r0_6 == 0) {
                    var_r0_6 = func_080D3BC0(var_sb_3);
                }
            } else {
                var_r0_6 = 0;
                var_sb_3 = 0;
            }
            var_r2_10 = sp40->unk0;
            var_r3_6 = var_r0_6;
loop_114:
            if (var_r2_10 != sp44) {
                if (var_r3_6 != 0) {
                    var_r3_6->unk0 = (s32) var_r2_10->unk0;
                    var_r3_6->unk4 = (s32) var_r2_10->unk4;
                    var_r3_6->unk8 = (s32) var_r2_10->unk8;
                    var_r3_6->unkC = (s32) var_r2_10->unkC;
                }
                var_r2_10 += 0x10;
                var_r3_6 += 0x10;
                goto loop_114;
            }
            if (sp34 == 1) {
                if (var_r3_6 != 0) {
                    var_r3_6->unk0 = (s32) sp0.unk0;
                    var_r3_6->unk4 = (s32) sp0.unk4;
                    var_r3_6->unk8 = (s32) sp0.unk8;
                    var_r3_6->unkC = (s32) sp0.unkC;
                }
                var_r4_4 = var_r3_6 + 0x10;
            } else {
                var_ip_3 = sp34;
                var_r2_11 = var_r3_6;
                if (sp34 != 0) {
                    do {
                        if (var_r2_11 != 0) {
                            var_r2_11->unk0 = (s32) sp0.unk0;
                            var_r2_11->unk4 = (s32) sp0.unk4;
                            var_r2_11->unk8 = (s32) sp0.unk8;
                            var_r2_11->unkC = (s32) sp0.unkC;
                        }
                        var_ip_3 -= 1;
                        var_r2_11 += 0x10;
                    } while (var_ip_3 != 0);
                }
                var_r4_4 = var_r2_11;
            }
            temp_r2_7 = sp40->unk4;
            temp_r0_20 = sp40->unk0;
            var_r1_3 = temp_r0_20;
            if (temp_r0_20 != temp_r2_7) {
                do {
                    var_r1_3 += 0x10;
                } while (var_r1_3 != temp_r2_7);
            }
            if (temp_r0_20 != 0) {
                free();
            }
            sp40->unk0 = var_r0_6;
            sp40->unk4 = var_r4_4;
            sp40->unkC = (void *) (var_sb_3 + var_r0_6);
        }
        temp_r4_19 = func_08008910(arg0);
        temp_r0_21 = arg0->unk4F0;
        var_r3_7 = 0;
        if (temp_r0_21 != 0) {
            var_r3_7 = (arg0 + 0x4F0)->unk4;
        }
        sp40 = temp_r4_19;
        func_08008F0C(&sp0, temp_r0_21, 0x05000340, var_r3_7);
        temp_r1_9 = temp_r4_19->unk4;
        if (temp_r1_9 != temp_r4_19->unkC) {
            if (temp_r1_9 != 0) {
                temp_r1_9->unk0 = (s32) sp0.unk0;
                temp_r1_9->unk4 = (s32) sp0.unk4;
                temp_r1_9->unk8 = (s32) sp0.unk8;
                temp_r1_9->unkC = (s32) sp0.unkC;
            }
            sp40->unk4 = (void *) (sp40->unk4 + 0x10);
        } else {
            sp44 = temp_r1_9;
            sp3C = 1;
            temp_r4_20 = (s32) (temp_r1_9 - sp40->unk0) >> 4;
            sp38 = temp_r4_20;
            var_r0_7 = &sp38;
            if ((u32) temp_r4_20 < 1U) {
                var_r0_7 = &sp3C;
            }
            temp_r0_22 = temp_r4_20 + *var_r0_7;
            if (temp_r0_22 != 0) {
                temp_r4_21 = temp_r0_22 * 0x10;
                var_r0_8 = malloc(temp_r4_21);
                var_sb_4 = temp_r4_21;
                if (var_r0_8 == 0) {
                    var_r0_8 = func_080D3BC0(var_sb_4);
                }
            } else {
                var_r0_8 = 0;
                var_sb_4 = 0;
            }
            var_r2_12 = sp40->unk0;
            var_r3_8 = var_r0_8;
            if (var_r2_12 != sp44) {
                do {
                    if (var_r3_8 != 0) {
                        var_r3_8->unk0 = (s32) var_r2_12->unk0;
                        var_r3_8->unk4 = (s32) var_r2_12->unk4;
                        var_r3_8->unk8 = (s32) var_r2_12->unk8;
                        var_r3_8->unkC = (s32) var_r2_12->unkC;
                    }
                    var_r2_12 += 0x10;
                    var_r3_8 += 0x10;
                } while (var_r2_12 != sp44);
            }
            if (sp3C == 1) {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) sp0.unk0;
                    var_r3_8->unk4 = (s32) sp0.unk4;
                    var_r3_8->unk8 = (s32) sp0.unk8;
                    var_r3_8->unkC = (s32) sp0.unkC;
                }
                var_r4_5 = var_r3_8 + 0x10;
            } else {
                var_ip_4 = sp3C;
                var_r2_13 = var_r3_8;
                if (sp3C != 0) {
                    do {
                        if (var_r2_13 != 0) {
                            var_r2_13->unk0 = (s32) sp0.unk0;
                            var_r2_13->unk4 = (s32) sp0.unk4;
                            var_r2_13->unk8 = (s32) sp0.unk8;
                            var_r2_13->unkC = (s32) sp0.unkC;
                        }
                        var_ip_4 -= 1;
                        var_r2_13 += 0x10;
                    } while (var_ip_4 != 0);
                }
                var_r4_5 = var_r2_13;
            }
            temp_r2_8 = sp40->unk4;
            temp_r0_23 = sp40->unk0;
            var_r1_4 = temp_r0_23;
            if (temp_r0_23 != temp_r2_8) {
                do {
                    var_r1_4 += 0x10;
                } while (var_r1_4 != temp_r2_8);
            }
            if (temp_r0_23 != 0) {
                free();
            }
            sp40->unk0 = var_r0_8;
            sp40->unk4 = var_r4_5;
            sp40->unkC = (void *) (var_sb_4 + var_r0_8);
        }
    }
    temp_r4_22 = func_08008920(arg0);
    temp_r0_24 = arg0->unk4E0;
    var_r2_14 = 0;
    if (temp_r0_24 != 0) {
        var_r2_14 = (arg0 + 0x4E0)->unk4;
    }
    func_0805E99C(temp_r4_22, temp_r0_24, var_r2_14, arg0->unk4DC);
    if (arg0->unk60D != 0) {
        arg0->unk504->unk0 = (s16) arg0->unk608;
        arg0->unk504->unk2 = 0x50;
        temp_r0_25 = func_08008920(arg0);
        temp_r1_10 = arg0->unk508;
        var_r2_15 = 0;
        if (temp_r1_10 != 0) {
            var_r2_15 = (arg0 + 0x508)->unk4;
        }
        func_0805E99C(temp_r0_25, temp_r1_10, var_r2_15, arg0->unk504);
    }
    if (arg0->unk60C != 0) {
        temp_r4_23 = func_08008920(arg0);
        temp_r0_26 = arg0->unk558;
        var_r2_16 = 0;
        if (temp_r0_26 != 0) {
            var_r2_16 = (arg0 + 0x558)->unk4;
        }
        func_0805E99C(temp_r4_23, temp_r0_26, var_r2_16, arg0->unk554);
    }
}

