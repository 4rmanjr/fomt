#include "common.h"
void *GetMapData(u32);                              /* extern */
s32 free(void *);                                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, s32);                /* extern */
s32 func_080A5AB0(void *, ? *, u8, void *);           /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_08107114;
extern ? gUnk_08107120;
extern ? gUnk_0810712C;
extern ? gUnk_08107138;
extern ? gUnk_08107144;
extern ? gUnk_0810714C;
extern ? gUnk_08107154;
extern ? gUnk_0810715C;
extern ? gUnk_08107168;
extern ? gUnk_08107174;
extern ? gUnk_08107180;
extern ? gUnk_0810718C;
extern ? gUnk_08107198;
extern ? gUnk_081071A4;
extern ? gUnk_081071B0;
extern ? gUnk_081071BC;
extern ? gUnk_081071C8;
extern ? gUnk_081071D4;
extern ? gUnk_081071E0;
extern ? gUnk_081071EC;
extern ? gUnk_081071F8;
extern ? gUnk_08107388;
extern ? gUnk_08107394;
extern ? gUnk_081073A0;
extern ? gUnk_081073AC;
extern ? gUnk_081073B8;

void func_080A4F50(void *arg0, void *arg1, s32 arg2, void *arg3) {
    s16 sp0;
s32 sp4;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    void *sp20;
    s32 sp24;
    s32 sp28;
    u32 sp2C;
    s16 *sp30;
    void *sp34;
    s8 *sp38;
    s8 *sp3C;
    void *sp40;
    void *sp44;
    u16 *sp48;
    s32 sp4C;
    s32 sp50;
    void *sp54;
    void *sp58;
    ? *var_r5;
    s16 temp_r0_2;
    s16 temp_r1;
    s16 temp_r1_3;
    s16 temp_r2;
    s16 temp_r7;
    s16 var_r0;
    s16 var_r0_2;
    s16 var_r0_3;
    s16 var_r1;
    s32 *var_r0_4;
    s32 *var_r8;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 var_r2_10;
    s32 var_r2_11;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r2_5;
    s32 var_r2_6;
    s32 var_r2_7;
    s32 var_r2_8;
    s32 var_r2_9;
    s32 var_r3_2;
    s32 var_sb;
    u32 temp_r0_4;
    u32 temp_r1_2;
    u8 temp_r0_10;
    u8 temp_r0_11;
    u8 temp_r0_12;
    u8 temp_r0_13;
    u8 temp_r0_14;
    u8 temp_r0_15;
    u8 temp_r0_16;
    u8 temp_r0_17;
    u8 temp_r0_18;
    u8 temp_r0_19;
    u8 temp_r0_20;
    u8 temp_r0_21;
    u8 temp_r0_22;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;
    u8 temp_r0_9;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r2_2;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r1_2;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r4;
    void *var_r4_2;

    sp1C = arg2;
    sp20 = arg3;
    if (arg0->unk29 == 0) {

    } else {
        temp_r1 = arg0->unkA;
        temp_r7 = arg0->unkE;
        sp24 = (s32) GetMapData(arg0->unk4)->unk20;
        var_r0 = temp_r1;
        if ((s32) temp_r1 < 0) {
            var_r0 += 7;
        }
        var_r0_2 = temp_r7;
        if ((s32) temp_r7 < 0) {
            var_r0_2 = temp_r7 + 7;
        }
        sp28 = (var_r0 >> 3) + (sp24 * (var_r0_2 >> 3));
        sp2C = 0;
        sp38 = arg0 + 0x29;
        sp34 = arg0 + 0x10;
        sp48 = arg0 + 0x80;
        sp40 = sp20->unk8;
        sp44 = arg0 + 0x5C;
        sp30 = &sp0;
        var_r8 = arg0 + 0x68;
        sp4C = 0;
        do {
            temp_r4 = sp2C * 4;
            temp_r5 = *(sp34 + temp_r4);
            if (temp_r5 != 0) {
                sp50 = *(temp_r4 + &gUnk_081073A0);
                temp_r0 = *(temp_r4 + &gUnk_08107388);
                temp_r2 = *(temp_r4 + &gUnk_08107394) | (((temp_r0 << 8) & 0x1F00) | 0x40);
                *sp30 = temp_r2;
                *(sp1C + (sp50 + 0xFC000000)) = temp_r2;
                var_r0_3 = temp_r1;
                if ((s32) var_r0_3 < 0) {
                    var_r0_3 += 7;
                }
                temp_r0_2 = temp_r1 - ((var_r0_3 >> 3) * 8);
                sp0.unk0 = temp_r0_2;
                *(sp1C + (*(temp_r4 + &gUnk_081073AC) + 0xFC000000)) = temp_r0_2;
                var_r1 = temp_r7;
                if ((s32) temp_r7 < 0) {
                    var_r1 = temp_r7 + 7;
                }
                temp_r1_3 = temp_r7 - ((var_r1 >> 3) * 8);
                sp0.unk0 = temp_r1_3;
                *(sp1C + (*(temp_r4 + &gUnk_081073B8) + 0xFC000000)) = temp_r1_3;
                *var_r8 = temp_r5 + (sp28 * 2);
                *(arg0 + 0x6C + sp4C) = (temp_r0 << 0xB) + 0x06000000;
            } else {
                *var_r8 = temp_r5;
            }
            var_r8 += 8;
            sp4C += 8;
            temp_r1_2 = sp2C + 1;
            sp2C = temp_r1_2;
        } while (temp_r1_2 <= 2U);
        *sp48 = sp0.unk24;
        sp40->unk10(sp20, sp44);
        *sp38 = 0;
    }
    if (arg0->unk28 != 0) {
        arg0->unk90->unk1C(arg0, arg1);
        arg0->unk28 = 0U;
    }
    sp3C = arg0 + 0x2A;
    if (arg0->unk2A == 0) {

    } else {
        func_08008F0C(&sp4, arg0->unk24, 0x05000020, 0x1E0);
        temp_r1_4 = arg1->unk4;
        if (temp_r1_4 != arg1->unkC) {
            if (temp_r1_4 != 0) {
                temp_r1_4->unk0 = (s32) sp4.unk0;
                temp_r1_4->unk4 = (s32) sp4.unk4;
                temp_r1_4->unk8 = (s32) sp4.unk8;
                temp_r1_4->unkC = (s32) sp4.unkC;
            }
            arg1->unk4 = (void *) (arg1->unk4 + 0x10);
        } else {
            sp54 = temp_r1_4;
            sp18 = 1;
            var_r1_2 = arg1->unk0;
            temp_r4_2 = (s32) (sp54 - var_r1_2) >> 4;
            sp14 = temp_r4_2;
            var_r0_4 = &sp14;
            if ((u32) temp_r4_2 < 1U) {
                var_r0_4 = &sp18;
            }
            temp_r0_3 = temp_r4_2 + *var_r0_4;
            if (temp_r0_3 != 0) {
                temp_r4_3 = temp_r0_3 * 0x10;
                var_r0_5 = malloc(temp_r4_3);
                var_sb = temp_r4_3;
                if (var_r0_5 == 0) {
                    var_r0_5 = func_080D3BC0(var_sb);
                }
                var_r1_2 = arg1->unk0;
            } else {
                var_r0_5 = 0;
                var_sb = 0;
            }
            sp58 = var_r0_5;
            var_r2 = var_r1_2;
            var_r3 = var_r0_5;
            if (var_r2 != sp54) {
                do {
                    if (var_r3 != 0) {
                        var_r3->unk0 = (s32) var_r2->unk0;
                        var_r3->unk4 = (s32) var_r2->unk4;
                        var_r3->unk8 = (s32) var_r2->unk8;
                        var_r3->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3 += 0x10;
                } while (var_r2 != sp54);
            }
            if (sp18 == 1) {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) sp4.unk0;
                    var_r3->unk4 = (s32) sp4.unk4;
                    var_r3->unk8 = (s32) sp4.unk8;
                    var_r3->unkC = (s32) sp4.unkC;
                }
                var_r4 = var_r3 + 0x10;
            } else {
                var_r3_2 = sp18;
                var_r2_2 = var_r3;
                if (var_r3_2 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) sp4.unk0;
                            var_r2_2->unk4 = (s32) sp4.unk4;
                            var_r2_2->unk8 = (s32) sp4.unk8;
                            var_r2_2->unkC = (s32) sp4.unkC;
                        }
                        var_r3_2 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_r3_2 != 0);
                }
                var_r4 = var_r2_2;
            }
            temp_r2_2 = arg1->unk4;
            temp_r1_5 = arg1->unk0;
            var_r0_6 = temp_r1_5;
            if (temp_r1_5 != temp_r2_2) {
                do {
                    var_r0_6 += 0x10;
                } while (var_r0_6 != temp_r2_2);
            }
            if (temp_r1_5 != 0) {
                free(temp_r1_5);
            }
            arg1->unk0 = sp58;
            arg1->unk4 = var_r4;
            arg1->unkC = (void *) (sp58 + var_sb);
        }
        *sp3C = 0;
    }
    temp_r0_4 = arg0->unk4;
    switch (temp_r0_4) {                            /* switch 1; irregular */
    case 0xE:                                       /* switch 1 */
        temp_r4_4 = arg0 + 0x40;
        if (temp_r4_4->unk1 != 0) {
            temp_r4_4->unk1 = 0U;
            func_080A5AB0(arg0, &gUnk_0810718C, arg0->unk40, arg1);
            var_r2_3 = 0;
            temp_r0_5 = arg0->unk40 + 1;
            arg0->unk40 = temp_r0_5;
            if (temp_r0_5 == gUnk_0810718C.unk4->unk2) {
                var_r2_3 = 1;
            }
            if (var_r2_3 != 0) {
                arg0->unk40 = 0U;
            }
        }
        temp_r4_5 = arg0 + 0x44;
        if (temp_r4_5->unk1 != 0) {
            temp_r4_5->unk1 = 0U;
            func_080A5AB0(arg0, &gUnk_08107198, arg0->unk44, arg1);
            var_r2_4 = 0;
            temp_r0_6 = arg0->unk44 + 1;
            arg0->unk44 = temp_r0_6;
            if (temp_r0_6 == gUnk_08107198.unk4->unk2) {
                var_r2_4 = 1;
            }
            if (var_r2_4 != 0) {
                arg0->unk44 = 0U;
            }
        }
        var_r4_2 = arg0 + 0x48;
        var_r5 = &gUnk_081071A4;
block_113:
        if (var_r4_2->unk1 != 0) {
            var_r4_2->unk1 = 0U;
            func_080A5AB0(arg0, var_r5, var_r4_2->unk0, arg1);
            var_r2_5 = 0;
            temp_r0_7 = var_r4_2->unk0 + 1;
            var_r4_2->unk0 = temp_r0_7;
            if (temp_r0_7 == var_r5->unk4->unk2) {
                var_r2_5 = 1;
            }
            if (var_r2_5 != 0) {
                var_r4_2->unk0 = 0U;
                return;
            }
        } else {
            return;
        }
        break;
    case 0xF:                                       /* switch 1 */
        temp_r4_6 = arg0 + 0x40;
        if (temp_r4_6->unk1 != 0) {
            temp_r4_6->unk1 = 0U;
            func_080A5AB0(arg0, &gUnk_081071B0, arg0->unk40, arg1);
            var_r2_6 = 0;
            temp_r0_8 = arg0->unk40 + 1;
            arg0->unk40 = temp_r0_8;
            if (temp_r0_8 == gUnk_081071B0.unk4->unk2) {
                var_r2_6 = 1;
            }
            if (var_r2_6 != 0) {
                arg0->unk40 = 0U;
            }
        }
        temp_r4_7 = arg0 + 0x44;
        if (temp_r4_7->unk1 != 0) {
            temp_r4_7->unk1 = 0U;
            func_080A5AB0(arg0, &gUnk_081071BC, arg0->unk44, arg1);
            var_r2_7 = 0;
            temp_r0_9 = arg0->unk44 + 1;
            arg0->unk44 = temp_r0_9;
            if (temp_r0_9 == gUnk_081071BC.unk4->unk2) {
                var_r2_7 = 1;
            }
            if (var_r2_7 != 0) {
                arg0->unk44 = 0U;
            }
        }
        var_r4_2 = arg0 + 0x48;
        var_r5 = &gUnk_081071C8;
        goto block_113;
    case 0x3C:                                      /* switch 1 */
        var_r4_2 = arg0 + 0x50;
        var_r5 = &gUnk_081071F8;
        goto block_113;
    case 0x1F:                                      /* switch 1 */
        var_r4_2 = arg0 + 0x54;
        var_r5 = &gUnk_081071E0;
        goto block_113;
    case 0x8:                                       /* switch 1 */
        var_r4_2 = arg0 + 0x4C;
        var_r5 = &gUnk_081071D4;
        goto block_113;
    case 0x9:                                       /* switch 1 */
        var_r4_2 = arg0 + 0x4C;
        var_r5 = &gUnk_081071EC;
        goto block_113;
    case 0x6:                                       /* switch 1 */
        temp_r4_8 = arg0 + 0x38;
        if (temp_r4_8->unk1 != 0) {
            temp_r4_8->unk1 = 0U;
            func_080A5AB0(arg0, &gUnk_0810715C, arg0->unk38, arg1);
            var_r2_8 = 0;
            temp_r0_10 = arg0->unk38 + 1;
            arg0->unk38 = temp_r0_10;
            if (temp_r0_10 == gUnk_0810715C.unk4->unk2) {
                var_r2_8 = 1;
            }
            if (var_r2_8 != 0) {
                arg0->unk38 = 0U;
            }
        }
        var_r4_2 = arg0 + 0x3C;
        var_r5 = &gUnk_08107168;
        goto block_113;
    case 0x7:                                       /* switch 1 */
        temp_r4_9 = arg0 + 0x38;
        if (temp_r4_9->unk1 != 0) {
            temp_r4_9->unk1 = 0U;
            func_080A5AB0(arg0, &gUnk_08107174, arg0->unk38, arg1);
            var_r2_9 = 0;
            temp_r0_11 = arg0->unk38 + 1;
            arg0->unk38 = temp_r0_11;
            if (temp_r0_11 == gUnk_08107174.unk4->unk2) {
                var_r2_9 = 1;
            }
            if (var_r2_9 != 0) {
                arg0->unk38 = 0U;
            }
        }
        var_r4_2 = arg0 + 0x3C;
        var_r5 = &gUnk_08107180;
        goto block_113;
    case 0x0:                                       /* switch 1 */
    case 0x3E:                                      /* switch 1 */
    case 0x3F:                                      /* switch 1 */
        temp_r0_12 = arg0->unk58;
        if (temp_r0_12 != 0) {
            temp_r0_13 = temp_r0_12 - 1;
            arg0->unk58 = temp_r0_13;
            temp_r0_14 = temp_r0_13;
            if (temp_r0_14 == 0) {
                func_080A5AB0(arg0, &gUnk_08107144, 0U, arg1);
            } else if (temp_r0_14 == 0xA) {
                func_080A5AB0(arg0, &gUnk_08107144, 1U, arg1);
            }
        }
        temp_r4_10 = arg0 + 0x30;
        if (temp_r4_10->unk1 != 0) {
            temp_r4_10->unk1 = 0U;
            func_080A5AB0(arg0, &gUnk_08107114, arg0->unk30, arg1);
            var_r2_10 = 0;
            temp_r0_15 = arg0->unk30 + 1;
            arg0->unk30 = temp_r0_15;
            if (temp_r0_15 == gUnk_08107114.unk4->unk2) {
                var_r2_10 = 1;
            }
            if (var_r2_10 != 0) {
                arg0->unk30 = 0U;
            }
        }
        var_r4_2 = arg0 + 0x34;
        var_r5 = &gUnk_0810712C;
        goto block_113;
    case 0x1:                                       /* switch 1 */
        temp_r0_16 = arg0->unk58;
        if (temp_r0_16 != 0) {
            temp_r0_17 = temp_r0_16 - 1;
            arg0->unk58 = temp_r0_17;
            temp_r0_18 = temp_r0_17;
            if (temp_r0_18 == 0) {
                func_080A5AB0(arg0, &gUnk_0810714C, 0U, arg1);
            } else if (temp_r0_18 == 0xA) {
                func_080A5AB0(arg0, &gUnk_0810714C, 1U, arg1);
            }
        }
        temp_r4_11 = arg0 + 0x30;
        if (temp_r4_11->unk1 != 0) {
            temp_r4_11->unk1 = 0U;
            func_080A5AB0(arg0, &gUnk_08107120, arg0->unk30, arg1);
            var_r2_11 = 0;
            temp_r0_19 = arg0->unk30 + 1;
            arg0->unk30 = temp_r0_19;
            if (temp_r0_19 == gUnk_08107120.unk4->unk2) {
                var_r2_11 = 1;
            }
            if (var_r2_11 != 0) {
                arg0->unk30 = 0U;
            }
        }
        var_r4_2 = arg0 + 0x34;
        var_r5 = &gUnk_08107138;
        goto block_113;
    case 0x24:                                      /* switch 1 */
    case 0x25:                                      /* switch 1 */
    case 0x26:                                      /* switch 1 */
    case 0x27:                                      /* switch 1 */
    case 0x40:                                      /* switch 1 */
    case 0x41:                                      /* switch 1 */
        temp_r0_20 = arg0->unk58;
        if (temp_r0_20 != 0) {
            temp_r0_21 = temp_r0_20 - 1;
            arg0->unk58 = temp_r0_21;
            temp_r0_22 = temp_r0_21;
            switch (temp_r0_22) {                   /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                func_080A5AB0(arg0, &gUnk_08107154, 0U, arg1);
                return;
            case 10:                                /* switch 2 */
                func_080A5AB0(arg0, &gUnk_08107154, 1U, arg1);
                break;
            }
        }
        break;
    }
}

