#include "common.h"
/* Warning: missing "bx $lr" in last block of sub_080DA76C (.L080DB0BC). */

? .L080D8FE8();                                     /* extern */
u16 GetIconId__C4Tool(s8 *);                        /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s32 free();                                           /* extern */
s32 func_08008F60(s32 *, s32, s32, s32);                /* extern */
s32 func_080093AC(s32);                               /* extern */
s16 func_080094A4(s32);                             /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_08011CD8(void *, ? *);                       /* extern */
s32 func_0803D080(s32, u32);                          /* extern */
s32 func_0803D0F0(s32, s32, u32);                     /* extern */
s32 func_0803D240(s32, u32);                          /* extern */
s32 func_0803D2E8(s32, s32);                          /* extern */
s32 func_0803D340(s32, s32);                          /* extern */
s32 func_0803D3A0(s32, s32);                          /* extern */
s32 func_0803D404(s32, u16);                          /* extern */
s32 func_0803D440(s32);                               /* extern */
void *func_080D3BC0(s32);                           /* extern */
s32 func_080DC294(void *, u32, s32);                  /* extern */
void *malloc(s32);                                  /* extern */
extern void *gUnk_0300040C;

void sub_080DA76C(s32 arg0, ? arg8, ? arg11, ? arg112, ? *arg134, u32 arg135, u32 arg136, ? arg137, s8 arg138, ? arg139, s32 arg141, ? *arg14A, u8 arg14B, ? arg14C, ? arg14E, ? arg150, s32 arg155, void **arg158, s32 *arg15A, s32 *arg15B, void ***arg15D, u8 *arg161, void *arg166, void *arg167) {
    ? *temp_r1_2;
    ? *temp_r1_3;
    ? *temp_r1_4;
    s16 temp_r0_6;
    s32 *var_r6;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_14;
    s32 temp_r0_15;
    s32 temp_r0_17;
    s32 temp_r0_2;
    s32 temp_r0_9;
    s32 temp_r1_10;
    s32 temp_r1_12;
    s32 temp_r1_5;
    s32 temp_r1_8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r5_2;
    s32 var_r1;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r1_7;
    s32 var_r1_8;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r2_5;
    s32 var_r2_6;
    s32 var_r2_7;
    s32 var_r3_3;
    s32 var_r5_3;
    s32 var_sb;
    u32 *var_r1_2;
    u32 temp_r0_3;
    u32 temp_r0_5;
    u32 temp_r1_6;
    u32 temp_r2_2;
    u32 temp_r4_3;
    u32 temp_r5_3;
    u32 var_r1_4;
    u32 var_r3_2;
    u8 temp_r2_3;
    u8 temp_r3;
    void **temp_r0;
    void **temp_r0_7;
    void *temp_r0_10;
    void *temp_r0_13;
    void *temp_r0_16;
    void *temp_r0_4;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r1_11;
    void *temp_r1_7;
    void *temp_r1_9;
    void *temp_r2;
    void *temp_r4_6;
    void *temp_r5;
    void *temp_r5_4;
    void *var_r0;
    void *var_r1_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r4;
    void *var_r4_2;
    void *var_r5;
    void *var_r5_2;
    void *var_r6_2;
    void *var_r6_3;
    void *var_r6_4;

    *arg15A = arg0;
    if (arg141 == 0) {
        arg134 = &arg8;
        temp_r0 = *arg15D;
        (*temp_r0)->unkC(temp_r0, &arg134);
    }
    if (saved_reg_r10->unkE8 == 0) {
        arg112.unk0 = (void *) saved_reg_r10;
        arg112.unk4 = (s32) arg155;
        arg112.unk8 = &arg11;
        arg112.unkC = (void *) (saved_reg_r10 + 0x6C);
        (**arg15D)->unk10();
        var_r6 = saved_reg_r10 + 0xB4;
        arg161 = saved_reg_r10 + 0xEA;
    } else {
        var_r1 = 0xFFFF;
        if (saved_reg_r10->unkE9 != 0) {
            var_r1 = 0;
        }
        func_08008F60(&arg112, var_r1, 0x05000000, 2);
        arg14A = &arg112;
        temp_r1 = saved_reg_r10->unk4;
        if (temp_r1 != saved_reg_r10->unkC) {
            if (temp_r1 != 0) {
                temp_r1_2 = arg14A;
                temp_r1->unk0 = (s32) temp_r1_2->unk0;
                temp_r1->unk4 = (s32) temp_r1_2->unk4;
                temp_r1->unk8 = (s32) temp_r1_2->unk8;
                temp_r1->unkC = (s32) temp_r1_2->unkC;
            }
            saved_reg_r10->unk4 = (void *) (saved_reg_r10->unk4 + 0x10);
            var_r6 = saved_reg_r10 + 0xB4;
            arg161 = saved_reg_r10 + 0xEA;
        } else {
            arg166 = temp_r1;
            arg136 = 1;
            temp_r4 = (s32) (arg166 - saved_reg_r10->unk0) >> 4;
            arg135 = temp_r4;
            var_r1_2 = &arg135;
            if ((u32) temp_r4 < (u32) arg136) {
                var_r1_2 = &arg136;
            }
            temp_r0_2 = temp_r4 + *var_r1_2;
            if (temp_r0_2 != 0) {
                temp_r4_2 = temp_r0_2 * 0x10;
                var_r0 = malloc(temp_r4_2);
                var_sb = temp_r4_2;
                if (var_r0 == 0) {
                    var_r0 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0 = 0;
                var_sb = 0;
            }
            arg167 = var_r0;
            var_r2 = saved_reg_r10->unk0;
            var_r3 = var_r0;
            var_r6 = saved_reg_r10 + 0xB4;
            arg161 = saved_reg_r10 + 0xEA;
            if (var_r2 != arg166) {
                do {
                    if (var_r3 != 0) {
                        var_r3->unk0 = (s32) var_r2->unk0;
                        var_r3->unk4 = (s32) var_r2->unk4;
                        var_r3->unk8 = (s32) var_r2->unk8;
                        var_r3->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3 += 0x10;
                } while (var_r2 != arg166);
            }
            temp_r0_3 = arg136;
            if (temp_r0_3 == 1) {
                if (var_r3 != 0) {
                    temp_r1_3 = arg14A;
                    var_r3->unk0 = (s32) temp_r1_3->unk0;
                    var_r3->unk4 = (s32) temp_r1_3->unk4;
                    var_r3->unk8 = (s32) temp_r1_3->unk8;
                    var_r3->unkC = (s32) temp_r1_3->unkC;
                }
                var_r5 = var_r3 + 0x10;
            } else {
                var_r3_2 = temp_r0_3;
                var_r2_2 = var_r3;
                if (var_r3_2 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            temp_r1_4 = arg14A;
                            var_r2_2->unk0 = (s32) temp_r1_4->unk0;
                            var_r2_2->unk4 = (s32) temp_r1_4->unk4;
                            var_r2_2->unk8 = (s32) temp_r1_4->unk8;
                            var_r2_2->unkC = (s32) temp_r1_4->unkC;
                        }
                        var_r3_2 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_r3_2 != 0);
                }
                var_r5 = var_r2_2;
            }
            temp_r2 = saved_reg_r10->unk4;
            temp_r0_4 = saved_reg_r10->unk0;
            var_r1_3 = temp_r0_4;
            if (temp_r0_4 != temp_r2) {
                do {
                    var_r1_3 += 0x10;
                } while (var_r1_3 != temp_r2);
            }
            if (temp_r0_4 != 0) {
                free();
            }
            saved_reg_r10->unk0 = (void *) arg167;
            saved_reg_r10->unk4 = var_r5;
            saved_reg_r10->unkC = (void *) (arg167 + var_sb);
        }
    }
    temp_r1_5 = *var_r6;
    if (temp_r1_5 == 0) {

    } else {
        temp_r5 = *arg158;
        temp_r4_3 = temp_r5->unk10 << 5;
        temp_r1_6 = temp_r4_3 >> 0x1A;
        if (((u32) (arg137.unk0 << 5) >> 0x1A) != temp_r1_6) {
            if (((temp_r1_6 % 10U) << 0x18) == 0) {
                func_0803D340(temp_r1_5 + 8, (u8) ((u32) (temp_r4_3 >> 0x1A) / 10U) * 0xA);
                temp_r2_2 = temp_r5->unk10 << 0xB;
                if (((u32) (arg137.unk0 << 0xB) >> 0x1B) != (temp_r2_2 >> 0x1B)) {
                    func_0803D240(*var_r6 + 8, temp_r2_2 >> 0x1B);
                    temp_r3 = temp_r5->unk11;
                    temp_r4_4 = ((u32) (temp_r3 << 0x19) >> 0x1B) + 1;
                    if ((((u32) (arg137.unk1 << 0x19) >> 0x1B) + 1) != temp_r4_4) {
                        var_r1_4 = ((((u32) (temp_r3 << 0x1E) >> 0x1E) * 0x1E) + ((((u32) ((u8) temp_r5->unk10 << 0x1D) >> 0x1D) + 6) * 0x78) + temp_r4_4) - 1;
                        if (var_r1_4 > 6U) {
                            var_r1_4 = var_r1_4 % 7U;
                        }
                        temp_r2_3 = (-8 & arg14B) | (var_r1_4 & 7);
                        arg14B = temp_r2_3;
                        func_0803D0F0(*var_r6 + 8, temp_r4_4, (u32) (temp_r2_3 << 0x1D) >> 0x1D);
                        temp_r0_5 = temp_r5->unk11 << 0x1E;
                        if ((arg137.unk1 << 0x1E) != temp_r0_5) {
                            func_0803D080(*var_r6 + 8, temp_r0_5 >> 0x1E);
                        }
                    }
                }
            }
            func_0803D2E8(*var_r6 + 8, 1 & ((u32) (temp_r5->unk10 << 5) >> 0x1A));
        }
        func_0803D3A0(*var_r6 + 8, (*arg158)->unk8);
        temp_r5_2 = *arg158 + 0x1C34;
        if ((IsEmpty__C9ToolStack(temp_r5_2) << 0x18) != 0) {
            func_0803D440(*var_r6 + 8);
        } else {
            temp_r4_5 = *arg158 + 0x1BD8;
            arg138 = func_0800E550(temp_r4_5, GetTool__C9ToolStack(temp_r5_2));
            func_0803D404(*var_r6 + 8, GetIconId__C4Tool(&arg138));
        }
    }
    if (*arg161 == 0) {
        func_080093AC(*arg15B);
    }
    if (*arg15A != 0) {

    } else {
        temp_r4_6 = gUnk_0300040C + 0x378;
        var_r3_3 = 0;
        var_r2_3 = 0;
        if (gUnk_0300040C->unk378 == 0) {
            var_r2_3 = 1;
        }
        if (var_r2_3 != 0) {
            var_r2_4 = 0;
            if (gUnk_0300040C->unk38C == 0) {
                var_r2_4 = 1;
            }
            if (var_r2_4 != 0) {
                var_r1_5 = 0;
                if (gUnk_0300040C->unk4D0 == 0) {
                    var_r1_5 = 1;
                }
                if (var_r1_5 != 0) {
                    var_r3_3 = 1;
                }
            }
        }
        if (var_r3_3 != 0) {

        } else {
            temp_r0_6 = func_080094A4(*arg15B);
            temp_r5_3 = (u32) ((0 - temp_r0_6) | temp_r0_6) >> 0x1F;
            if (temp_r5_3 != 0) {

            } else {
                temp_r0_7 = *arg15D;
                temp_r0_8 = (*temp_r0_7)->unk40(temp_r0_7, 0);
                if ((temp_r0_8 != 0) && ((temp_r0_8->unk14->unk98(temp_r0_8) << 0x18) != 0)) {

                } else {
                    var_r1_6 = 0;
                    temp_r0_9 = temp_r4_6->unk0;
                    if (temp_r0_9 == 0) {
                        var_r1_6 = 1;
                    }
                    if (var_r1_6 == 0) {
                        var_r6_2 = temp_r4_6 + 4;
                        arg14C.unk0 = (s32) temp_r4_6->unk4;
                        arg14C.unk4 = (s32) temp_r4_6->unk8;
                        if (temp_r0_9 != 0) {
                            temp_r0_10 = temp_r4_6 + ((temp_r0_9 * 8) + 4);
                            temp_r1_7 = temp_r4_6 + 0xC;
                            if (temp_r1_7 != temp_r0_10) {
                                var_r5_2 = temp_r1_7;
                                var_r2_5 = (s32) (temp_r0_10 - var_r5_2) >> 3;
                                if (var_r2_5 > 0) {
                                    do {
                                        temp_r0_11 = var_r5_2->unk0;
                                        temp_r1_8 = var_r5_2->unk4;
                                        var_r5_2 += 8;
                                        var_r6_2->unk0 = temp_r0_11;
                                        var_r6_2->unk4 = temp_r1_8;
                                        var_r6_2 += 8;
                                        var_r2_5 -= 1;
                                    } while (var_r2_5 > 0);
                                }
                            }
                            temp_r4_6->unk0 = (s32) (temp_r4_6->unk0 - 1);
                        }
                        var_r5_3 = 0x520;
                        goto block_138;
                    }
                    var_r1_7 = 0;
                    temp_r0_12 = temp_r4_6->unk14;
                    if (temp_r0_12 == 0) {
                        var_r1_7 = 1;
                    }
                    if (var_r1_7 == 0) {
                        var_r6_3 = temp_r4_6 + 0x18;
                        arg14E.unk0 = (s32) temp_r4_6->unk18;
                        arg14E.unk4 = (s32) temp_r4_6->unk1C;
                        if (temp_r0_12 != 0) {
                            temp_r1_9 = temp_r4_6 + 0x14 + ((temp_r0_12 * 8) + 4);
                            temp_r0_13 = temp_r4_6 + 0x20;
                            if (temp_r0_13 != temp_r1_9) {
                                var_r4 = temp_r0_13;
                                var_r2_6 = (s32) (temp_r1_9 - var_r4) >> 3;
                                if (var_r2_6 > 0) {
                                    do {
                                        temp_r0_14 = var_r4->unk0;
                                        temp_r1_10 = var_r4->unk4;
                                        var_r4 += 8;
                                        var_r6_3->unk0 = temp_r0_14;
                                        var_r6_3->unk4 = temp_r1_10;
                                        var_r6_3 += 8;
                                        var_r2_6 -= 1;
                                    } while (var_r2_6 > 0);
                                }
                            }
                            temp_r4_6->unk14 = (s32) (temp_r4_6->unk14 - 1);
                        }
                        var_r5_3 = 0x528;
block_138:
                        temp_r5_4 = var_r5_3 + sp;
                        arg139.unk0 = (s32) temp_r5_4->unk0;
                        arg139.unk4 = (s32) temp_r5_4->unk4;
                    } else {
                        var_r1_8 = 0;
                        temp_r0_15 = temp_r4_6->unk158;
                        if (temp_r0_15 == 0) {
                            var_r1_8 = 1;
                        }
                        if (var_r1_8 == 0) {
                            var_r6_4 = temp_r4_6 + 0x15C;
                            arg150.unk0 = (u32) temp_r4_6->unk15C;
                            arg150.unk4 = (u32) var_r6_4->unk4;
                            if (temp_r0_15 != 0) {
                                temp_r1_11 = temp_r4_6 + 0x158 + ((temp_r0_15 * 8) + 4);
                                temp_r0_16 = temp_r4_6 + 0x164;
                                if (temp_r0_16 != temp_r1_11) {
                                    var_r4_2 = temp_r0_16;
                                    var_r2_7 = (s32) (temp_r1_11 - var_r4_2) >> 3;
                                    if (var_r2_7 > 0) {
                                        do {
                                            temp_r0_17 = var_r4_2->unk0;
                                            temp_r1_12 = var_r4_2->unk4;
                                            var_r4_2 += 8;
                                            var_r6_4->unk0 = temp_r0_17;
                                            var_r6_4->unk4 = temp_r1_12;
                                            var_r6_4 += 8;
                                            var_r2_7 -= 1;
                                        } while (var_r2_7 > 0);
                                    }
                                }
                                temp_r4_6->unk158 = (s32) (temp_r4_6->unk158 - 1);
                            }
                            arg139.unk0 = (u32) arg150.unk0;
                            arg139.unk4 = (u32) arg150.unk4;
                        } else {
                            arg139.unk0 = temp_r5_3;
                            arg139.unk4 = temp_r5_3;
                        }
                    }
                    func_080DC294(saved_reg_r10, arg139.unk0, arg139.unk4);
                }
            }
        }
    }
    func_08011CD8(saved_reg_r10, &arg11);
    .L080D8FE8();
}

