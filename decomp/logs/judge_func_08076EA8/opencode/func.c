#include "common.h"
s32 free();                                           /* extern */
void *func_08008910(s32);                           /* extern */
u8 *func_08008920(s32);                             /* extern */
s32 func_08008F0C(s32 *, s32, s32, s32);                /* extern */
s32 func_0804EA94(s32 *, s32, s32, s32);              /* extern */
s32 func_08075C88(s32, s16);                          /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[1408];
    s32 unk590;
    s32 unk594;
    u8 _pad598[12];
    s32 unk5A4;
} GenObj;
s32 func_08076EA8(GenObj *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
GenObj sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    GenObj *sp44;
    s32 sp48;
    s32 sp4C;
    s32 *sp50;
    GenObj *sp54;
    s32 *sp58;
    u32 sp5C;
    s32 sp60;
    s32 *sp64;
    s32 sp68;
    void *sp6C;
    void *sp70;
    s16 *var_r2;
    s16 *var_r2_6;
    s32 *var_r0_2;
    s32 *var_r0_4;
    s32 *var_r0_7;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_r0;
    s32 var_r0_6;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r3_6;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_sb;
    s32 var_sb_2;
    u32 var_r8;
    u32 var_r8_4;
    u8 *temp_r4_6;
    u8 temp_r2_3;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_6;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    GenObj *temp_r1_6;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r3;
    GenObj *temp_r5;
    GenObj *temp_r5_2;
    GenObj *temp_r5_3;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r3;
    GenObj *var_r3_3;
    GenObj *var_r3_5;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;

    var_r8 = 0;
    var_r2 = arg0->unk594;
    temp_r4 = (s32) (((GenObj *)((u8 *)arg0 + 0x594))->unk4 - var_r2) >> 4;
    if (temp_r4 != 0) {
        var_r0 = *var_r2 + 0x30;
loop_4:
        if (var_r0 < (s32) arg0->unk590) {
            var_r2 += 0x10;
            var_r8 += 1;
            if (temp_r4 != 0) {
                var_r0 = *var_r2 + 0x30;
                goto loop_4;
            }
        }
    }
    sp40 = 0;
    if (var_r8 >= (u32) ((s32) (((GenObj *)((u8 *)arg0 + 0x594))->unk4 - arg0->unk594) >> 4)) {

    } else {
        sp44 = (GenObj *)((u8 *)arg0 + 0x594);
loop_8:
        temp_r1 = var_r8 * 0x10;
        sp5C = var_r8 + 1;
        sp60 = temp_r1;
        if ((s32) *(sp44->unk0 + temp_r1) > (s32) (arg0->unk590 + 0xA0)) {

        } else {
            sp48 = (sp40 * 4) + 0x20;
            sp4C = sp40 + 2;
            temp_r5 = func_08008910(arg0->unk0);
            func_08008F0C(&sp10, (sp44->unk0 + sp60)->unk8, (sp48 << 5) + 0x06010000, 0x80);
            sp50 = &sp0 + 0x10;
            temp_r1_2 = temp_r5->unk4;
            if (temp_r1_2 != temp_r5->unkC) {
                if (temp_r1_2 != 0) {
                    temp_r1_2->unk0 = (s32) sp10;
                    temp_r1_2->unk4 = (s32) sp10.unk4;
                    temp_r1_2->unk8 = (s32) sp10.unk8;
                    temp_r1_2->unkC = (s32) sp10.unkC;
                }
                temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
                var_r8_2 = sp4C << 5;
                sp64 = &sp0 + 0x30;
                sp68 = sp40 + 1;
            } else {
                sp6C = temp_r1_2;
                sp24 = 1;
                temp_r4_2 = (s32) (temp_r1_2 - temp_r5->unk0) >> 4;
                sp20 = temp_r4_2;
                var_r0_2 = &sp20;
                if ((u32) temp_r4_2 < 1U) {
                    var_r0_2 = &sp24;
                }
                temp_r0 = temp_r4_2 + *var_r0_2;
                if (temp_r0 != 0) {
                    temp_r4_3 = temp_r0 * 0x10;
                    var_r0_3 = malloc(temp_r4_3);
                    var_sb = temp_r4_3;
                    if (var_r0_3 == 0) {
                        var_r0_3 = func_080D3BC0(var_sb);
                    }
                } else {
                    var_r0_3 = 0;
                    var_sb = 0;
                }
                sp70 = var_r0_3;
                var_r2_2 = temp_r5->unk0;
                var_r3 = var_r0_3;
                sp5C = var_r8 + 1;
                var_r8_2 = sp4C << 5;
                sp64 = &sp0 + 0x30;
                sp68 = sp40 + 1;
                if (var_r2_2 != sp6C) {
                    do {
                        if (var_r3 != 0) {
                            var_r3->unk0 = (s32) var_r2_2->unk0;
                            var_r3->unk4 = (s32) var_r2_2->unk4;
                            var_r3->unk8 = (s32) var_r2_2->unk8;
                            var_r3->unkC = (s32) var_r2_2->unkC;
                        }
                        var_r2_2 += 0x10;
                        var_r3 += 0x10;
                    } while (var_r2_2 != sp6C);
                }
                if (sp24 == 1) {
                    if (var_r3 != 0) {
                        var_r3->unk0 = (s32) sp50->unk0;
                        var_r3->unk4 = (s32) sp50->unk4;
                        var_r3->unk8 = (s32) sp50->unk8;
                        var_r3->unkC = (s32) sp50->unkC;
                    }
                    var_r4 = (GenObj *)((u8 *)var_r3 + 0x10);
                } else {
                    var_r3_2 = sp24;
                    var_r2_3 = var_r3;
                    if (var_r3_2 != 0) {
                        do {
                            if (var_r2_3 != 0) {
                                var_r2_3->unk0 = (s32) sp50->unk0;
                                var_r2_3->unk4 = (s32) sp50->unk4;
                                var_r2_3->unk8 = (s32) sp50->unk8;
                                var_r2_3->unkC = (s32) sp50->unkC;
                            }
                            var_r3_2 -= 1;
                            var_r2_3 += 0x10;
                        } while (var_r3_2 != 0);
                    }
                    var_r4 = var_r2_3;
                }
                temp_r2 = temp_r5->unk4;
                temp_r0_2 = temp_r5->unk0;
                var_r1 = temp_r0_2;
                if (temp_r0_2 != temp_r2) {
                    do {
                        var_r1 += 0x10;
                    } while (var_r1 != temp_r2);
                }
                if (temp_r0_2 != 0) {
                    free();
                }
                temp_r5->unk0 = sp70;
                temp_r5->unk4 = var_r4;
                temp_r5->unkC = (void *) (sp70 + var_sb);
            }
            temp_r5_2 = func_08008910(arg0->unk0);
            func_08008F0C(&sp10, (sp44->unk0 + sp60)->unkC, var_r8_2 + 0x05000200, 0x20);
            temp_r1_3 = temp_r5_2->unk4;
            if (temp_r1_3 != temp_r5_2->unkC) {
                if (temp_r1_3 != 0) {
                    temp_r1_3->unk0 = (s32) sp10;
                    temp_r1_3->unk4 = (s32) sp10.unk4;
                    temp_r1_3->unk8 = (s32) sp10.unk8;
                    temp_r1_3->unkC = (s32) sp10.unkC;
                }
                temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
            } else {
                sp6C = temp_r1_3;
                sp2C = 1;
                temp_r4_4 = (s32) (temp_r1_3 - temp_r5_2->unk0) >> 4;
                sp28 = temp_r4_4;
                var_r0_4 = &sp28;
                if ((u32) temp_r4_4 < 1U) {
                    var_r0_4 = &sp2C;
                }
                temp_r0_3 = temp_r4_4 + *var_r0_4;
                if (temp_r0_3 != 0) {
                    temp_r4_5 = temp_r0_3 * 0x10;
                    var_r0_5 = malloc(temp_r4_5);
                    var_r8_3 = temp_r4_5;
                    if (var_r0_5 == 0) {
                        var_r0_5 = func_080D3BC0(var_r8_3);
                    }
                } else {
                    var_r0_5 = 0;
                    var_r8_3 = 0;
                }
                sp70 = var_r0_5;
                var_r2_4 = temp_r5_2->unk0;
                var_r3_3 = var_r0_5;
                if (var_r2_4 != sp6C) {
                    do {
                        if (var_r3_3 != 0) {
                            var_r3_3->unk0 = (s32) var_r2_4->unk0;
                            var_r3_3->unk4 = (s32) var_r2_4->unk4;
                            var_r3_3->unk8 = (s32) var_r2_4->unk8;
                            var_r3_3->unkC = (s32) var_r2_4->unkC;
                        }
                        var_r2_4 += 0x10;
                        var_r3_3 += 0x10;
                    } while (var_r2_4 != sp6C);
                }
                if (sp2C == 1) {
                    if (var_r3_3 != 0) {
                        var_r3_3->unk0 = (s32) sp10;
                        var_r3_3->unk4 = (s32) sp10.unk4;
                        var_r3_3->unk8 = (s32) sp10.unk8;
                        var_r3_3->unkC = (s32) sp10.unkC;
                    }
                    var_r4_2 = (GenObj *)((u8 *)var_r3_3 + 0x10);
                } else {
                    var_r3_4 = sp2C;
                    var_r2_5 = var_r3_3;
                    if (var_r3_4 != 0) {
                        do {
                            if (var_r2_5 != 0) {
                                var_r2_5->unk0 = (s32) sp10;
                                var_r2_5->unk4 = (s32) sp10.unk4;
                                var_r2_5->unk8 = (s32) sp10.unk8;
                                var_r2_5->unkC = (s32) sp10.unkC;
                            }
                            var_r3_4 -= 1;
                            var_r2_5 += 0x10;
                        } while (var_r3_4 != 0);
                    }
                    var_r4_2 = var_r2_5;
                }
                temp_r2_2 = temp_r5_2->unk4;
                temp_r0_4 = temp_r5_2->unk0;
                var_r1_2 = temp_r0_4;
                if (temp_r0_4 != temp_r2_2) {
                    do {
                        var_r1_2 += 0x10;
                    } while (var_r1_2 != temp_r2_2);
                }
                if (temp_r0_4 != 0) {
                    free();
                }
                temp_r5_2->unk0 = sp70;
                temp_r5_2->unk4 = var_r4_2;
                temp_r5_2->unkC = (void *) (sp70 + var_r8_3);
            }
            temp_r4_6 = func_08008920(arg0->unk0);
            temp_r1_4 = sp44->unk0 + sp60;
            sp0 = sp4C;
            sp4 = 1;
            sp8 = 1;
            spC = 0;
            func_0804EA94(sp64, temp_r1_4->unk4, temp_r1_4->unk0 - arg0->unk590, sp48);
            temp_r2_3 = *temp_r4_6;
            if ((u32) temp_r2_3 <= 0x7FU) {
                temp_r1_5 = temp_r4_6 + ((temp_r2_3 * 8) + 4);
                temp_r1_5->unk0 = sp30;
                temp_r1_5->unk4 = (u16) sp64->unk4;
                *temp_r4_6 = temp_r2_3 + 1;
            }
            sp40 = sp68;
        }
        var_r8 = sp5C;
        if (var_r8 < (u32) ((s32) (sp44->unk4 - sp44->unk0) >> 4)) {
            goto loop_8;
        }
    }
    var_r8_4 = 0;
    var_r2_6 = arg0->unk5A4;
    temp_r4_7 = (s32) (((GenObj *)((u8 *)arg0 + 0x5A4))->unk4 - var_r2_6) >> 4;
    if ((u32) temp_r4_7 <= 0U) {

    } else {
        var_r0_6 = *var_r2_6 + 0x30;
loop_76:
        if (var_r0_6 < (s32) arg0->unk590) {
            var_r2_6 += 0x10;
            var_r8_4 += 1;
            if (var_r8_4 < (u32) temp_r4_7) {
                var_r0_6 = *var_r2_6 + 0x30;
                goto loop_76;
            }
        }
        if (var_r8_4 >= (u32) ((s32) (((GenObj *)((u8 *)arg0 + 0x5A4))->unk4 - arg0->unk5A4) >> 4)) {

        } else {
            sp54 = (GenObj *)((u8 *)arg0 + 0x5A4);
loop_80:
            temp_r4_8 = var_r8_4 * 0x10;
            sp5C = var_r8_4 + 1;
            if ((s32) *(sp54->unk0 + temp_r4_8) > (s32) (arg0->unk590 + 0xA0)) {

            } else {
                temp_r3 = sp54->unk0 + temp_r4_8;
                temp_r5_3 = func_08008910(arg0->unk0);
                func_08008F0C(&sp10, temp_r3->unk4, temp_r3->unk8, temp_r3->unkC);
                sp58 = &sp0 + 0x10;
                temp_r1_6 = temp_r5_3->unk4;
                if (temp_r1_6 != temp_r5_3->unkC) {
                    if (temp_r1_6 != 0) {
                        temp_r1_6->unk0 = (s32) sp10;
                        temp_r1_6->unk4 = (s32) sp10.unk4;
                        temp_r1_6->unk8 = (s32) sp10.unk8;
                        temp_r1_6->unkC = (s32) sp10.unkC;
                    }
                    temp_r5_3->unk4 = (void *) (temp_r5_3->unk4 + 0x10);
                } else {
                    sp6C = temp_r1_6;
                    sp3C = 1;
                    temp_r4_9 = (s32) (temp_r1_6 - temp_r5_3->unk0) >> 4;
                    sp38 = temp_r4_9;
                    var_r0_7 = &sp38;
                    if ((u32) temp_r4_9 < 1U) {
                        var_r0_7 = &sp3C;
                    }
                    temp_r0_5 = temp_r4_9 + *var_r0_7;
                    if (temp_r0_5 != 0) {
                        temp_r4_10 = temp_r0_5 * 0x10;
                        var_r0_8 = malloc(temp_r4_10);
                        var_sb_2 = temp_r4_10;
                        if (var_r0_8 == 0) {
                            var_r0_8 = func_080D3BC0(var_sb_2);
                        }
                    } else {
                        var_r0_8 = 0;
                        var_sb_2 = 0;
                    }
                    sp70 = var_r0_8;
                    var_r2_7 = temp_r5_3->unk0;
                    var_r3_5 = var_r0_8;
                    sp5C = var_r8_4 + 1;
loop_96:
                    if (var_r2_7 != sp6C) {
                        if (var_r3_5 != 0) {
                            var_r3_5->unk0 = (s32) var_r2_7->unk0;
                            var_r3_5->unk4 = (s32) var_r2_7->unk4;
                            var_r3_5->unk8 = (s32) var_r2_7->unk8;
                            var_r3_5->unkC = (s32) var_r2_7->unkC;
                        }
                        var_r2_7 += 0x10;
                        var_r3_5 += 0x10;
                        goto loop_96;
                    }
                    if (sp3C == 1) {
                        if (var_r3_5 != 0) {
                            var_r3_5->unk0 = (s32) sp58->unk0;
                            var_r3_5->unk4 = (s32) sp58->unk4;
                            var_r3_5->unk8 = (s32) sp58->unk8;
                            var_r3_5->unkC = (s32) sp58->unkC;
                        }
                        var_r4_3 = (GenObj *)((u8 *)var_r3_5 + 0x10);
                    } else {
                        var_r3_6 = sp3C;
                        var_r2_8 = var_r3_5;
                        if (var_r3_6 != 0) {
                            do {
                                if (var_r2_8 != 0) {
                                    var_r2_8->unk0 = (s32) sp58->unk0;
                                    var_r2_8->unk4 = (s32) sp58->unk4;
                                    var_r2_8->unk8 = (s32) sp58->unk8;
                                    var_r2_8->unkC = (s32) sp58->unkC;
                                }
                                var_r3_6 -= 1;
                                var_r2_8 += 0x10;
                            } while (var_r3_6 != 0);
                        }
                        var_r4_3 = var_r2_8;
                    }
                    temp_r2_4 = temp_r5_3->unk4;
                    temp_r0_6 = temp_r5_3->unk0;
                    var_r1_3 = temp_r0_6;
                    if (temp_r0_6 != temp_r2_4) {
                        do {
                            var_r1_3 += 0x10;
                        } while (var_r1_3 != temp_r2_4);
                    }
                    if (temp_r0_6 != 0) {
                        free();
                    }
                    temp_r5_3->unk0 = sp70;
                    temp_r5_3->unk4 = var_r4_3;
                    temp_r5_3->unkC = (void *) (sp70 + var_sb_2);
                }
            }
            var_r8_4 = sp5C;
            if (var_r8_4 < (u32) ((s32) (sp54->unk4 - sp54->unk0) >> 4)) {
                goto loop_80;
            }
        }
    }
    func_08075C88(arg0->unk4, arg0->unk590);
    return 1;
}

