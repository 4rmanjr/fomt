#include "common.h"
void *GetMapData(s32);                              /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0800E4FC(void *);                          /* extern */
s32 func_0800ED2C(s32);                               /* extern */
s32 func_08012464(s32, s32, s32);                     /* extern */
s32 func_080167CC(s32);                             /* extern */
s32 func_0801A13C(void *, u32, u32, s32);             /* extern */
s32 func_0801DB58(void *);                            /* extern */
s32 func_0803B2A8();                                  /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0809C5F4(void *);                          /* extern */
s32 func_080A1484(s32, void *, s32);                  /* extern */
s32 func_080A45A8(void *);                          /* extern */
void *func_080A4A00(s32, s32, s32, void *, s32, s32); /* extern */
s32 func_080A5960(s32 *, s16, s16);                   /* extern */
s32 func_080AB380();                                  /* extern */

void func_08017C30(void *arg0, s32 *arg1) {
    s8 sp8;
    s32 spC;
    s32 sp10;
    s32 sp18;
    s32 sp20;
    s32 *sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 *var_r4;
    s32 *var_sb;
    s32 temp_r0_10;
    s32 temp_r0_2;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r1_3;
    s32 temp_r5;
    s32 temp_r6_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r3;
    s8 *var_r1;
    s8 *var_r1_2;
    s8 var_r0_4;
    s8 var_r0_5;
    u32 temp_r0_4;
    u32 temp_r1_4;
    u32 temp_r1_5;
    u32 temp_r4_3;
    u32 temp_r5_5;
    u32 temp_r5_6;
    u32 temp_r7_2;
    u32 var_r3_2;
    u32 var_r6;
    u32 var_r6_2;
    u32 var_sl;
    u8 temp_r0_8;
    u8 temp_r1_6;
    u8 temp_r3;
    u8 temp_r5_4;
    u8 temp_r7_3;
    u8 temp_sl;
    void **var_r5;
    void **var_r5_2;
    void **var_r5_3;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_7;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_7;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_2;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r6;
    void *temp_r6_3;
    void *temp_r7;
    void *var_r6_3;

    sp28 = arg1;
    sp2C = func_0800E4FC(arg0->unk1038 + 0x1BD8);
    if (arg0->unk10C8 == 0) {

    } else {
        arg0->unk10C8 = 0U;
        arg0->unk0->unk3C(arg0, 0x4B);
        func_0800ED2C(arg0->unk1038 + 0x1BD8);
        temp_r6 = arg0->unk1038 + 0x1CCC;
        if (arg0->unk10C9 != 0) {

        } else {
            temp_r0 = arg0->unk0->unk14C(arg0);
            var_r4 = temp_r0->unk0;
            temp_r5 = temp_r0->unk4;
            if (var_r4 != temp_r5) {
loop_5:
                if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                    var_r4 += 4;
                    if (var_r4 == temp_r5) {
                        goto block_7;
                    }
                    goto loop_5;
                }
                var_r0 = *var_r4;
            } else {
block_7:
                var_r0 = *(temp_r5 - 4);
            }
            func_08008B6C(var_r0, 0x6D);
            if (func_080A45A8(temp_r6) != 2) {
                temp_r2 = arg0->unk1038;
                func_080A1484(temp_r2 + 0x1CD4, temp_r6, temp_r2 + 0x214C);
                spC.unk0 = (s16) (((temp_r6->unk2 & 0x3FF) << 6) | ((u8) temp_r6->unk1 >> 2));
                spC.unk2 = (s16) (((temp_r6->unk4 & 0x3FF) << 6) | ((u8) temp_r6->unk3 >> 2));
                temp_r5_2 = arg0 + 0x102C;
                temp_r6_2 = arg0->unk0->unk64(arg0);
                temp_r5_2->unk4 = spC;
                temp_r1 = arg0->unk102C;
                if ((temp_r1 != 0) && (temp_r1 != 0)) {
                    temp_r1->unk24->unk8(temp_r1, 3);
                }
                arg0->unk102C = 0;
                temp_r5_2->unk8 = 0;
                temp_r0_2 = __builtin_new(0x40);
                sp8 = 0;
                temp_r0_3 = func_080A4A00(temp_r0_2, temp_r6_2, 0x1A9, arg0, 2, 3);
                temp_r1_2 = arg0->unk102C;
                if ((temp_r0_3 != temp_r1_2) && (temp_r1_2 != 0)) {
                    temp_r1_2->unk24->unk8(temp_r1_2, 3);
                }
                arg0->unk102C = temp_r0_3;
            } else {
                sp10 = 0x23B;
                sp10.unk4 = 0;
                arg0->unk0->unk140(arg0, &sp10, 0);
            }
        }
    }
    temp_r6_3 = arg0->unk0->unk40(arg0, 0);
    arg0->unk4->unk90->unkC();
    temp_sl = GetMapData(arg0->unk4->unk4)->unk24;
    sp30 = *arg0->unk4;
    sp34 = 0;
    if (arg0->unk103C != 0) {

    } else if (arg0->unk1038->unk34C4 != 0) {

    } else if (temp_sl != 0) {

    } else if ((temp_r6_3->unk14->unk98(temp_r6_3) << 0x18) != 0) {

    } else {
        temp_r5_3 = arg0 + 0x1040;
        temp_r0_4 = temp_r5_3->unk4 + 1;
        if (temp_r0_4 < 0x19U) {
            temp_r5_3->unk4 = (u8) temp_r0_4;
            var_r0_2 = 0;
        } else {
            temp_r5_3->unk4 = temp_sl;
            temp_r4 = arg0->unk1040;
            temp_r1_3 = ((u32) (temp_r4->unk0 << 5) >> 0x1A) + 1;
            temp_r4->unk2 = (u16) ((0xFFFFF81F & temp_r4->unk2) | ((0x3F & temp_r1_3) << 5));
            if ((u32) (temp_r1_3 & 0x3F) > 0x3BU) {
                temp_r2_2 = arg0->unk1040;
                temp_r2_2->unk2 = (u16) (0xFFFFF81F & temp_r2_2->unk2);
                temp_r2_3 = arg0->unk1040;
                temp_r1_4 = (((u32) (temp_r2_3->unk0 << 0xB) >> 0x1B) + 1) & 0x1F;
                temp_r2_3->unk2 = (s8) ((-0x20 & (u8) temp_r2_3->unk2) | temp_r1_4);
                if (temp_r1_4 > 0x17U) {
                    temp_r2_4 = arg0->unk1040;
                    temp_r2_4->unk2 = (s8) (-0x20 & (u8) temp_r2_4->unk2);
                    temp_r4_2 = arg0->unk1040;
                    temp_r3 = temp_r4_2->unk1;
                    var_r0_3 = ((u32) (temp_r3 << 0x19) >> 0x1B) + 1;
                    if (var_r0_3 == 0x1E) {
                        temp_r4_2->unk1 = (u8) ((-4 & temp_r3) | ((((u32) (temp_r3 << 0x1E) >> 0x1E) + 1) & 3));
                        var_r0_3 = 0;
                    }
                    temp_r4_2->unk1 = (u8) ((-0x7D & temp_r4_2->unk1) | ((var_r0_3 & 0x1F) * 4));
                    temp_r2_5 = arg0->unk1040;
                    var_r3 = 0;
                    if (!(0x7F & temp_r2_5->unk1)) {
                        var_r3 = 1;
                    }
                    if (var_r3 != 0) {
                        temp_r5_4 = (u8) temp_r2_5->unk0;
                        var_r3_2 = ((u32) (temp_r5_4 << 0x1D) >> 0x1D) + 1;
                        if (var_r3_2 > 6U) {
                            var_r3_2 = 0;
                            temp_r1_5 = temp_r5_4 >> 3;
                            if (temp_r1_5 <= 0x1CU) {
                                temp_r2_5->unk0 = (s8) ((7 & temp_r5_4) | ((temp_r1_5 + 1) * 8));
                            }
                        }
                        temp_r2_5->unk0 = (s8) ((-8 & (u8) temp_r2_5->unk0) | (var_r3_2 & 7));
                    }
                }
            }
            var_r0_2 = 1;
        }
        if (var_r0_2 != 0) {
            temp_r0_5 = arg0->unk1040->unk0;
            temp_r5_5 = (u32) (temp_r0_5 << 0xB) >> 0x1B;
            temp_r4_3 = (u32) (temp_r0_5 << 5) >> 0x1A;
            if ((temp_r5_5 == 6) && (temp_r4_3 == 0)) {
                if ((temp_r6_3->unk14->unk64(temp_r6_3, 0, 0xA) << 0x18) == 0) {
                    sp18 = 0x3D5;
                    sp18.unk4 = temp_r4_3;
                    arg0->unk0->unk140(arg0, &sp18, 2);
                }
            } else {
                func_0801A13C(arg0, temp_r5_5, temp_r4_3, 0);
                switch (temp_r5_5) {                /* switch 1; irregular */
                case 20:                            /* switch 1 */
                    if (temp_r4_3 == 0) {
                        func_08012464(arg0->unk1054, 0, 0x9E);
                        func_0801DB58(arg0);
                    } else {
                        switch (temp_r5_5) {        /* switch 2; irregular */
                        case 0:                     /* switch 1 */
                        case 0:                     /* switch 2 */
                            if (temp_r4_3 == 0) {
                                temp_r6_3->unk14->unk64(temp_r6_3, 0, 3);
                            } else if ((temp_r5_5 == 2) && (temp_r4_3 == 0)) {
                                temp_r6_3->unk14->unk64(temp_r6_3, 0, 4);
                            } else if ((temp_r5_5 == 4) && (temp_r4_3 == 0)) {
                                temp_r6_3->unk14->unk64(temp_r6_3, 0, 5);
                            }
                            break;
                        }
                    }
                    break;
                }
            }
            sp34 = 1;
        }
    }
    var_r5 = arg0 + 8;
    temp_r7 = arg0 + 0x198;
    sp20 = *sp28;
    sp20.unk4 = (u8) sp34;
    if (var_r5 != temp_r7) {
        do {
            temp_r4_4 = *var_r5;
            if (temp_r4_4 != 0) {
                if ((temp_r4_4->unk14->unk28(temp_r4_4) << 0x18) != 0) {
                    temp_r4_4->unk14->unk2C(temp_r4_4, &sp20);
                } else if ((temp_sl == 0) || (sp30 == temp_r4_4->unk4)) {
                    temp_r4_4->unk14->unk18(temp_r4_4, &sp20);
                }
            }
            var_r5 += 4;
        } while (var_r5 != temp_r7);
    }
    if (arg0->unk107C != 0) {
        func_0803B2A8();
    }
    if (arg0->unk1028 != 0) {
        func_080AB380();
    }
    var_r6 = 0;
    var_r5_2 = arg0 + 0x106C;
    do {
        temp_r4_5 = *var_r5_2;
        if (temp_r4_5 != 0) {
            var_r1 = temp_r4_5 + 0x3F;
            if (temp_r4_5->unk3F == 0) {
                if ((s32) (func_0805E8F0(temp_r4_5 + 0x28) << 0x1E) < 0) {
                    var_r1 = temp_r4_5 + 0x3C;
                    var_r0_4 = 1;
                    goto block_76;
                }
            } else {
                var_r0_4 = 0;
block_76:
                *var_r1 = var_r0_4;
            }
        }
        var_r5_2 += 4;
        var_r6 += 1;
    } while (var_r6 <= 1U);
    var_r6_2 = 0;
    var_r5_3 = arg0 + 0x1074;
    do {
        temp_r4_6 = *var_r5_3;
        if (temp_r4_6 != 0) {
            var_r1_2 = temp_r4_6 + 0x3F;
            if (temp_r4_6->unk3F == 0) {
                if ((s32) (func_0805E8F0(temp_r4_6 + 0x28) << 0x1E) < 0) {
                    var_r1_2 = temp_r4_6 + 0x3C;
                    var_r0_5 = 1;
                    goto block_84;
                }
            } else {
                var_r0_5 = 0;
block_84:
                *var_r1_2 = var_r0_5;
            }
        }
        var_r5_3 += 4;
        var_r6_2 += 1;
    } while (var_r6_2 <= 1U);
    var_sl = 0;
    var_sb = arg0 + 0x1088;
    var_r6_3 = arg0 + 0x1080;
loop_87:
    temp_r1_6 = var_r6_3->unk1;
    temp_r7_2 = (u32) (temp_r1_6 << 0x1E) >> 0x1E;
    if (temp_r7_2 != 1) {

    } else {
        temp_r5_6 = (u32) (temp_r1_6 << 0x1C) >> 0x1E;
        switch (temp_r5_6) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            temp_r4_7 = var_r6_3->unk8;
            if (temp_r4_7->unk3F == 0) {
                temp_r0_6 = func_0805E8F0(temp_r4_7 + 0x28);
                if ((s32) (temp_r0_6 << 0x1E) < 0) {
                    temp_r4_7->unk3C = (s8) temp_r7_2;
                }
                var_r0_6 = temp_r0_6;
            } else {
                temp_r4_7->unk3F = (u8) temp_r5_6;
                var_r0_6 = 2;
            }
            if ((s32) (var_r0_6 << 0x1D) < 0) {
                var_r6_3->unk1 = (u8) ((var_r6_3->unk1 & ~0xC) | 4);
                temp_r4_8 = var_r6_3->unk8;
                func_0805E860(temp_r4_8 + 0x28, 0x86B);
                temp_r0_7 = temp_r4_8 + 0x3C;
                temp_r4_8->unk3C = 1;
                temp_r0_7->unk2 = 0;
                (temp_r0_7 + 2)->unk1 = 1;
                var_r6_3->unk0 = 0x78U;
            }
            break;
        case 1:                                     /* switch 3 */
            temp_r0_8 = var_r6_3->unk0 - 1;
            var_r6_3->unk0 = temp_r0_8;
            temp_r7_3 = temp_r0_8;
            if (temp_r7_3 == 0) {
                var_r6_3->unk1 = (u8) ((-0xD & temp_r1_6) | 8);
                temp_r4_9 = var_r6_3->unk8;
                func_0805E860(temp_r4_9 + 0x28, 0x873);
                temp_r0_9 = temp_r4_9 + 0x3C;
                temp_r4_9->unk3C = (s8) temp_r5_6;
                temp_r0_9->unk2 = temp_r7_3;
                (temp_r0_9 + 2)->unk1 = (s8) temp_r5_6;
            }
            break;
        case 2:                                     /* switch 3 */
            temp_r4_10 = var_r6_3->unk8;
            if (temp_r4_10->unk3F == 0) {
                temp_r0_10 = func_0805E8F0(temp_r4_10 + 0x28);
                if ((s32) (temp_r0_10 << 0x1E) < 0) {
                    temp_r4_10->unk3C = (s8) temp_r7_2;
                }
                var_r0_7 = temp_r0_10;
            } else {
                temp_r4_10->unk3F = 0U;
                var_r0_7 = 2;
            }
            if ((s32) (var_r0_7 << 0x1D) < 0) {
                var_r6_3->unk1 = (u8) (var_r6_3->unk1 & ~3);
                temp_r1_7 = var_r6_3->unk8;
                if ((temp_r1_7 != 0) && (temp_r1_7 != 0)) {
                    temp_r1_7->unk24->unk8(temp_r1_7, 3);
                }
                *var_sb = 0;
            }
            break;
        }
    }
    var_sb += 0xC;
    var_r6_3 += 0xC;
    var_sl += 1;
    if (var_sl <= 3U) {
        goto loop_87;
    }
    if (arg0->unk103C == 0) {
        temp_r2_6 = arg0->unk8;
        func_080A5960(arg0->unk4, temp_r2_6->unkA, temp_r2_6->unkE);
    }
    if ((func_0800E4FC(arg0->unk1038 + 0x1BD8) != sp2C) && ((func_080167CC(arg0->unk1054) << 0x18) != 0) && ((func_0809C5F4(arg0->unk1038 + 0x214C) << 0x18) == 0)) {
        func_0801DB58(arg0);
    }
}

