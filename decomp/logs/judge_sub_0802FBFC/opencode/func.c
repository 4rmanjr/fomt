#include "common.h"
/* Warning: missing "bx $lr" in last block of sub_0802FBFC (.L08030E00.1). */

? .L08030F4C();                                     /* extern */
u8 .L08031C7C();                                    /* extern */
? .L08031C7E(s32);                                  /* extern */
? .L08031D78();                                     /* extern */
? .L08031D92();                                     /* extern */
? .L08031E84(s32);                                  /* extern */
? .L08031F0A(s32);                                  /* extern */
? .L08031F0E();                                     /* extern */
s32 GetFreePregnancyStall__C4Barn(void *);          /* extern */
s32 GetId__C4Tool(void *);                          /* extern */
s32 GetLocation__C7AEntity(s32 *, void *);            /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 MoveToPregnancyStall__4BarnUiUi(void *, s32, u32); /* extern */
s32 SubtractAmount__9ToolStackUi(s32, s32);           /* extern */
s32 __12RucksackItem(s32 **);                           /* extern */
s32 __12RucksackItemG4Food(s32 *, s32);               /* extern */
s32 __12RucksackItemG7Article(s32 *, u8);             /* extern */
s32 __4FoodUi(s32 *, s32);                            /* extern */
s32 __4ToolUi(u8 *, s32);                             /* extern */
s32 __7ArticleUi(u8 *, s32);                          /* extern */
s32 __9ToolStackG4ToolUi(s32 *, u8, s32);             /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_0800EB2C(s32, s32);                        /* extern */
s32 func_0800EF88(s32, s32);                          /* extern */
s32 func_0800F190(void *);                          /* extern */
s32 func_080245E0();                                /* extern */
s32 func_08025B64(void *, s32);                       /* extern */
s32 func_0802A4C0(void *, s32, s32);                  /* extern */
s32 func_0802AC2C(void *, s32, s32);                  /* extern */
s32 func_0809C4B4(s32, s32);                        /* extern */
s32 func_080A3E90(s32 *, ? **, s32);                  /* extern */
s32 memcpy(s32, s32 *, s32);                          /* extern */
s32 rand();                                         /* extern */
s32 sub_08030E0A();                                   /* extern */
s32 sub_0803192E();                                   /* extern */
s32 sub_08031A5E(s32);                                /* extern */
extern ? gUnk_080F0E80;
extern ? gUnk_080F1170;
extern ? gUnk_080F1178;
extern ? gUnk_080F1230;

void sub_0802FBFC(s32 arg0, void *arg1, ? (**arg2)(?, void *, s32), s32 arg4, s32 arg5, ? *arg8, ? *argA, ? *argC, s8 arg1F, s32 arg20, u8 arg22, s32 arg23, s32 arg25, s32 arg26, ? arg27, ? arg29, ? arg2B, s8 arg2D, ? arg2E, ? arg30, ? arg32, u8 arg34, u8 (**arg44)(void **, s32 *, u8), u8 (**arg45)(void **, s32 *, s32 *), u8 (**arg46)(void **, s32 *, s32 *), s32 arg47, u8 (**arg48)(void **, s32 *, u8), s32 arg49, s32 arg4A, s32 arg4F, s32 arg50, s32 arg51, u8 *arg52, s8 *arg53, u8 *arg54, s16 *arg5A, void *arg5B, u8 *arg5C, s32 *arg5D, s8 *arg5E, u32 arg5F, u32 arg60, s32 arg61, s32 arg62, s32 arg63, s32 arg64, s32 arg65) {
    s16 var_r4_2;
    s16 var_r4_3;
    s16 var_r4_5;
    s16 var_r4_6;
    s16 var_r6_2;
    s16 var_r7;
    s16 var_r7_2;
    s16 var_r7_3;
    s16 var_r7_4;
    s16 var_r8;
    s32 *var_r0_7;
    s32 *var_r4_4;
    s32 *var_r4_7;
    s32 temp_r0_20;
    s32 temp_r0_24;
    s32 temp_r0_2;
    s32 temp_r0_34;
    s32 temp_r0_37;
    s32 temp_r1_23;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_6;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_8;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_4;
    s32 var_r0_10;
    s32 var_r0_5;
    s32 var_r0_8;
    s32 var_r0_9;
    s32 var_r1;
    s32 var_r1_11;
    s32 var_r1_12;
    s32 var_r1_13;
    s32 var_r1_14;
    s32 var_r1_15;
    s32 var_r1_16;
    s32 var_r1_17;
    s32 var_r1_2;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_8;
    s32 var_r1_9;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r5_3;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_sb;
    s8 *var_r1_3;
    s8 *var_r1_7;
    s8 var_r0_2;
    s8 var_r0_4;
    s8 var_r1_6;
    u16 temp_r0_26;
    u16 temp_r2;
    u16 temp_r3_2;
    u16 temp_r3_5;
    u16 temp_r4_7;
    u16 temp_r5_3;
    u16 temp_r5_5;
    u16 temp_r6;
    u16 var_r1_10;
    u32 temp_r0_43;
    u32 temp_r0_45;
    u32 temp_r4_10;
    u32 temp_r4_9;
    u32 var_r4_12;
    u8 (*var_r3_2)(void **, u16, u8);
    u8 temp_r0_11;
    u8 temp_r0_14;
    u8 temp_r0_18;
    u8 temp_r0_22;
    u8 temp_r0_23;
    u8 temp_r0_25;
    u8 temp_r0_5;
    u8 temp_r0_7;
    u8 temp_r0_9;
    u8 temp_r1;
    u8 temp_r1_20;
    u8 temp_r1_21;
    u8 temp_r1_22;
    u8 temp_r3;
    u8 temp_r3_10;
    u8 temp_r3_11;
    u8 temp_r3_6;
    u8 temp_r3_7;
    u8 temp_r3_8;
    u8 temp_r3_9;
    u8 var_r0;
    u8 var_r0_6;
    u8 var_r2;
    void **temp_r0;
    void **temp_r0_12;
    void **temp_r0_19;
    void **temp_r0_21;
    void **temp_r0_31;
    void **temp_r0_32;
    void **temp_r0_33;
    void **temp_r0_35;
    void **temp_r0_36;
    void **temp_r0_38;
    void **temp_r0_39;
    void **temp_r0_3;
    void **temp_r0_40;
    void **temp_r0_41;
    void **temp_r0_42;
    void **temp_r0_44;
    void **temp_r0_46;
    void **temp_r0_4;
    void **temp_r0_6;
    void **temp_r0_8;
    void **temp_r3_3;
    void *temp_r0_10;
    void *temp_r0_13;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_17;
    void *temp_r0_27;
    void *temp_r0_28;
    void *temp_r0_29;
    void *temp_r0_30;
    void *temp_r0_47;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_12;
    void *temp_r1_13;
    void *temp_r1_14;
    void *temp_r1_15;
    void *temp_r1_16;
    void *temp_r1_17;
    void *temp_r1_18;
    void *temp_r1_19;
    void *temp_r1_24;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_5;
    void *temp_r4_4;
    void *temp_r5_6;
    void *temp_r5_7;
    void *var_r0_3;
    void *var_r3;
    void *var_r4;
    void *var_r4_10;
    void *var_r4_11;
    void *var_r4_8;
    void *var_r4_9;
    void *var_r5;
    void *var_r5_2;
    void *var_r6;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    arg1->unk4 = (s32) saved_reg_r4;
    *arg2(arg0, arg1, 0);
    .L08031F0E();
    var_r1 = 0;
    if (saved_reg_r10->unk24 != 0) {
        goto block_2;
    }
    var_r1 = 1;
block_2:
    if (var_r1 != 0) {
        goto block_4;
    }
    sub_08030E0A();
block_4:
    saved_reg_r10->unk78 = 0;
    var_r3 = 0;
    temp_r2 = saved_reg_r10->unk4;
    arg5C = saved_reg_r10 + 0x78;
    if ((s32) temp_r2 <= 0x33) {
        goto block_7;
    }
    if ((s32) temp_r2 > 0x233) {
        goto block_7;
    }
    var_r3 = (void *)1;
block_7:
    var_r6 = var_r3;
    temp_r1 = saved_reg_r10->unk3F;
    if ((s32) temp_r1 < 0) {
        goto block_19;
    }
    if ((s32) temp_r1 <= 1) {
        goto block_11;
    }
    if ((s32) temp_r1 > 4) {
        goto block_19;
    }
    if ((s32) temp_r1 < 3) {
        goto block_19;
    }
block_11:
    func_0802AC2C(saved_reg_r10, gUnk_080F1170.unk0, gUnk_080F1170.unk4);
    temp_r3 = saved_reg_r10->unkB2;
    var_r1_2 = 0;
    if ((u32) (temp_r3 - 0x2B) > 0x1AU) {
        goto block_13;
    }
    var_r1_2 = 1;
block_13:
    if (var_r1_2 == 0) {
        goto block_15;
    }
    temp_r0 = saved_reg_r10->unk0;
    var_r4 = (*temp_r0)->unk40(temp_r0, temp_r3);
    goto block_16;
block_15:
    var_r4 = 0;
block_16:
    if (var_r4 == 0) {
        goto block_19;
    }
    if ((var_r4->unk14->unk44(var_r4) << 0x18) == 0) {
        goto block_19;
    }
    var_r4->unk14->unk64(var_r4);
block_19:
    temp_r4 = saved_reg_r10->unk38;
    arg1F = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
    temp_r0_2 = GetId__C4Tool();
    if (temp_r0_2 == 0x15) {
        goto block_22;
    }
    if (temp_r0_2 == 0x2D) {
        goto block_24;
    }
    goto block_26;
block_22:
    if ((func_0809C4B4(saved_reg_r10->unk34 + 0x3480, 0x15) << 0x18) == 0) {
        goto block_26;
    }
    temp_r5 = saved_reg_r10->unk38;
    __4ToolUi(&arg4 + 0x6D, 0x16);
    __9ToolStackG4ToolUi(&arg4, arg4.unk6D, 1);
    memcpy(temp_r5 + 0x5C, &arg4, 2);
    temp_r0_3 = saved_reg_r10->unk0;
    arg20 = 0x3DE;
    arg20.unk4 = 0;
    (*temp_r0_3)->unk140(temp_r0_3, &arg20, 0);
    goto block_26;
block_24:
    if ((func_0809C4B4(saved_reg_r10->unk34 + 0x3480, 0x2D) << 0x18) == 0) {
        goto block_26;
    }
    temp_r5_2 = saved_reg_r10->unk38;
    __4ToolUi(&arg22, 0x2E);
    __9ToolStackG4ToolUi(&arg4, arg22, 1);
    memcpy(temp_r5_2 + 0x5C, &arg4, 2);
    temp_r0_4 = saved_reg_r10->unk0;
    arg23 = 0x3DE;
    arg23.unk4 = 0;
    (*temp_r0_4)->unk140(temp_r0_4, &arg23, 0);
block_26:
    var_r0 = saved_reg_r10->unk3F;
    if ((u32) var_r0 <= 0xDU) {
        goto block_28;
    }
    var_r0 = .L08031C7C();
block_28:
    switch (var_r0);                                /* switch 1; jump table: .L0802FDB8 */
case 0:                                             /* switch 1 */
    saved_reg_r10->unk48 = &gUnk_080F1230;
    saved_reg_r10->unk4E = 1;
    temp_r0_5 = saved_reg_r10->unk40;
    if ((u32) temp_r0_5 > 6U) {
        goto block_39;
    }
    switch (temp_r0_5);                             /* switch 2; jump table: .L0802FE1C */
case 0:                                             /* switch 2 */
    saved_reg_r10->unk4C = 3;
    (saved_reg_r10 + 0x4C)->unk1 = 3;
    var_r1_3 = saved_reg_r10 + 0x4F;
    var_r0_2 = 1;
    goto block_38;
case 1:                                             /* switch 2 */
    temp_r1_2 = saved_reg_r10 + 0x4C;
    saved_reg_r10->unk4C = 2;
    temp_r1_2->unk1 = 4;
    var_r1_3 = temp_r1_2 + 1 + 2;
    var_r0_2 = 1;
    goto block_38;
case 2:                                             /* switch 2 */
    temp_r1_3 = saved_reg_r10 + 0x4C;
    saved_reg_r10->unk4C = 0;
    temp_r1_3->unk1 = 5;
    var_r1_3 = temp_r1_3 + 1 + 2;
    var_r0_2 = 1;
    goto block_38;
case 3:                                             /* switch 2 */
    temp_r1_4 = saved_reg_r10 + 0x4C;
    saved_reg_r10->unk4C = 0;
    temp_r1_4->unk1 = 8;
    var_r1_3 = temp_r1_4 + 1 + 2;
    var_r0_2 = 1;
    goto block_38;
case 4:                                             /* switch 2 */
    temp_r1_5 = saved_reg_r10 + 0x4C;
    saved_reg_r10->unk4C = 0;
    temp_r1_5->unk1 = 0x18;
    var_r1_3 = temp_r1_5 + 1 + 2;
    var_r0_2 = 2;
    goto block_38;
case 5:                                             /* switch 2 */
    temp_r1_6 = saved_reg_r10 + 0x4C;
    saved_reg_r10->unk4C = 0;
    temp_r1_6->unk1 = 0x50;
    var_r1_3 = temp_r1_6 + 1 + 2;
    var_r0_2 = 3;
    goto block_38;
case 6:                                             /* switch 2 */
    temp_r1_7 = saved_reg_r10 + 0x4C;
    saved_reg_r10->unk4C = 0;
    temp_r1_7->unk1 = 0xE0;
    var_r1_3 = temp_r1_7 + 1 + 2;
    var_r0_2 = 4;
block_38:
    *var_r1_3 = var_r0_2;
block_39:
    sub_08031A5E(0x1C);
case 1:                                             /* switch 1 */
    arg54 = saved_reg_r10 + 0x40;
    if ((u32) saved_reg_r10->unk40 <= 4U) {
        goto block_42;
    }
    temp_r0_6 = saved_reg_r10->unk0;
    *arg5C = (*temp_r0_6)->unkF0(temp_r0_6, saved_reg_r10->unk4, *arg54);
    goto block_54;
block_42:
    var_r4_2 = saved_reg_r10->unkA;
    var_r7 = saved_reg_r10->unkE;
    temp_r0_7 = saved_reg_r10->unk20;
    if (temp_r0_7 == 1) {
        goto block_49;
    }
    if ((s32) temp_r0_7 > 1) {
        goto block_46;
    }
    if (temp_r0_7 == 0) {
        goto block_50;
    }
    goto block_53;
block_46:
    if (temp_r0_7 == 2) {
        goto block_51;
    }
    if (temp_r0_7 == 3) {
        goto block_52;
    }
    goto block_53;
block_49:
    var_r7 -= 0x10;
    goto block_53;
block_50:
    var_r7 += 0x10;
    goto block_53;
block_51:
    var_r4_2 -= 0x10;
    goto block_53;
block_52:
    var_r4_2 += 0x10;
block_53:
    temp_r0_8 = saved_reg_r10->unk0;
    arg44 = *temp_r0_8 + 0xD0;
    arg4.unk0 = (u16) ((0xFFFFFC00 & arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
    arg65 = ((u16) var_r4_2 & 0x3F) * 4;
    arg4.unk1 = (u8) ((3 & arg4.unk1) | arg65);
    arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (var_r4_2 << 0x10) >> 0x16) & 0x3FF));
    arg4.unk3 = (u8) ((3 & arg4.unk3) | (((u16) var_r7 & 0x3F) * 4));
    arg4.unk4 = (u16) ((0xFFFFFC00 & arg4.unk4) | (((u32) (var_r7 << 0x10) >> 0x16) & 0x3FF));
    *arg5C = *arg44(temp_r0_8, &arg4, *arg54);
block_54:
    var_r6 = saved_reg_r10;
    if (saved_reg_r10->unk34->unk34C4 != 0) {
        goto block_59;
    }
    var_r1_4 = 2;
block_56:
    temp_r2_2 = func_0800EB2C(saved_reg_r10->unk38, var_r1_4);
    var_r1_5 = 0x32;
    if (*arg5C == 0) {
        goto block_58;
    }
    var_r1_5 = 0x64;
block_58:
    func_0800EF88(temp_r2_2, var_r1_5);
block_59:
    .L08031F0A(0);
case 2:                                             /* switch 1 */
    saved_reg_r10->unk4A = 0;
    (saved_reg_r10 + 0x4A)->unk1 = 0;
    temp_r0_9 = saved_reg_r10->unk40;
    if ((u32) temp_r0_9 > 6U) {
        goto block_71;
    }
    switch (temp_r0_9);                             /* switch 3; jump table: .L0803000C */
case 0:                                             /* switch 3 */
    temp_r0_10 = saved_reg_r10 + 0x48;
    var_r1_6 = 1;
    saved_reg_r10->unk48 = 1;
    temp_r0_10->unk1 = 0;
    var_r0_3 = temp_r0_10 + 1 + 3;
    goto block_66;
case 1:                                             /* switch 3 */
    saved_reg_r10->unk48 = 1;
    saved_reg_r10->unk49 = 0xFFU;
    saved_reg_r10->unk4C = 1;
    var_r1_7 = saved_reg_r10 + 0x4D;
    var_r0_4 = 3;
    goto block_70;
case 2:                                             /* switch 3 */
    temp_r1_8 = saved_reg_r10 + 0x48;
    saved_reg_r10->unk48 = 1;
    temp_r1_9 = temp_r1_8 + 1;
    temp_r1_8->unk1 = 0xFF;
    temp_r1_9->unk3 = 2;
    var_r1_7 = temp_r1_9 + 3 + 1;
    var_r0_4 = 3;
    goto block_70;
case 3:                                             /* switch 3 */
    saved_reg_r10->unk48 = 1;
    (saved_reg_r10 + 0x48)->unk1 = 0xFF;
    var_r0_3 = saved_reg_r10 + 0x4C;
    var_r1_6 = 3;
block_66:
    var_r0_3->unk0 = var_r1_6;
    var_r0_3->unk1 = var_r1_6;
    goto block_71;
case 4:                                             /* switch 3 */
    temp_r1_10 = saved_reg_r10 + 0x48;
    saved_reg_r10->unk48 = 1;
    temp_r1_11 = temp_r1_10 + 1;
    temp_r1_10->unk1 = 0xFE;
    temp_r1_11->unk3 = 3;
    var_r1_7 = temp_r1_11 + 3 + 1;
    var_r0_4 = 5;
    goto block_70;
case 5:                                             /* switch 3 */
    temp_r1_12 = saved_reg_r10 + 0x48;
    saved_reg_r10->unk48 = 1;
    temp_r1_13 = temp_r1_12 + 1;
    temp_r1_12->unk1 = 0xFA;
    temp_r1_13->unk3 = 6;
    var_r1_7 = temp_r1_13 + 3 + 1;
    var_r0_4 = 0xD;
    goto block_70;
case 6:                                             /* switch 3 */
    temp_r1_14 = saved_reg_r10 + 0x48;
    saved_reg_r10->unk48 = 1;
    temp_r1_15 = temp_r1_14 + 1;
    temp_r1_14->unk1 = 0xF6;
    temp_r1_15->unk3 = 0xC;
    var_r1_7 = temp_r1_15 + 3 + 1;
    var_r0_4 = 0x15;
block_70:
    *var_r1_7 = var_r0_4;
block_71:
    .L08031E84(0x1A);
case 3:                                             /* switch 1 */
    if (var_r6 == 0) {
        goto block_87;
    }
    var_r4_3 = saved_reg_r10->unkA;
    var_r7_2 = saved_reg_r10->unkE;
    temp_r0_11 = saved_reg_r10->unk20;
    if (temp_r0_11 == 1) {
        goto block_80;
    }
    if ((s32) temp_r0_11 > 1) {
        goto block_77;
    }
    if (temp_r0_11 == 0) {
        goto block_81;
    }
    goto block_84;
block_77:
    if (temp_r0_11 == 2) {
        goto block_82;
    }
    if (temp_r0_11 == 3) {
        goto block_83;
    }
    goto block_84;
block_80:
    var_r7_2 -= 0x10;
    goto block_84;
block_81:
    var_r7_2 += 0x10;
    goto block_84;
block_82:
    var_r4_3 -= 0x10;
    goto block_84;
block_83:
    var_r4_3 += 0x10;
block_84:
    temp_r0_12 = saved_reg_r10->unk0;
    arg45 = *temp_r0_12 + 0xC8;
    arg4.unk0 = (u16) ((0xFFFFFC00 & arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
    arg65 = ((u16) var_r4_3 & 0x3F) * 4;
    arg4.unk1 = (u8) ((3 & arg4.unk1) | arg65);
    arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (var_r4_3 << 0x10) >> 0x16) & 0x3FF));
    arg4.unk3 = (u8) ((3 & arg4.unk3) | (((u16) var_r7_2 & 0x3F) * 4));
    arg4.unk4 = (u16) ((0xFFFFFC00 & arg4.unk4) | (((u32) (var_r7_2 << 0x10) >> 0x16) & 0x3FF));
    var_r4_4 = &arg25;
    *arg5C = *arg45(temp_r0_12, &arg4, var_r4_4);
    if (saved_reg_r10->unk34->unk34C4 == 0) {
        goto block_86;
    }
    goto block_112;
block_86:
    var_r1_8 = 0;
    goto block_109;
block_87:
    temp_r0_13 = saved_reg_r10 + 0x48;
    saved_reg_r10->unk48 = (s8) var_r6;
    temp_r0_13->unk8 = (s16) var_r6;
    (temp_r0_13 + 8)->unk2 = 0;
    (*saved_reg_r10->unk0)->unkF4();
    saved_reg_r10->unk49 = (u8) *(saved_reg_r10->unk40 + &gUnk_080F1178);
    temp_r0_14 = saved_reg_r10->unk40;
    if ((u32) temp_r0_14 > 4U) {
        goto block_89;
    }
    temp_r0_15 = saved_reg_r10 + 0x4A;
    saved_reg_r10->unk4A = 0;
    temp_r0_16 = temp_r0_15 + 1;
    temp_r0_15->unk1 = 0;
    temp_r0_17 = temp_r0_16 + 1;
    temp_r0_16->unk1 = 1;
    temp_r0_17->unk1 = 0;
    (temp_r0_17 + 1)->unk1 = 0;
    goto block_93;
block_89:
    if ((u32) temp_r0_14 > 5U) {
        goto block_91;
    }
    saved_reg_r10->unk4A = 0;
    temp_r1_16 = saved_reg_r10 + 0x4B;
    saved_reg_r10->unk4B = 1;
    temp_r1_16->unk1 = 1;
    (temp_r1_16 + 1)->unk1 = 1;
    saved_reg_r10->unk4E = 0;
    goto block_93;
block_91:
    if ((u32) temp_r0_14 > 6U) {
        goto block_93;
    }
    temp_r1_17 = saved_reg_r10 + 0x4A;
    saved_reg_r10->unk4A = 1;
    temp_r1_18 = temp_r1_17 + 1;
    temp_r1_17->unk1 = 1;
    temp_r1_19 = temp_r1_18 + 1;
    temp_r1_18->unk1 = 1;
    temp_r1_19->unk1 = 1;
    (temp_r1_19 + 1)->unk1 = 1;
block_93:
    .L08031C7E(0x19);
case 4:                                             /* switch 1 */
    if (var_r6 != 0) {
        goto block_96;
    }
    goto block_113;
block_96:
    var_r4_5 = saved_reg_r10->unkA;
    var_r7_3 = saved_reg_r10->unkE;
    temp_r0_18 = saved_reg_r10->unk20;
    if (temp_r0_18 == 1) {
        goto block_103;
    }
    if ((s32) temp_r0_18 > 1) {
        goto block_100;
    }
    if (temp_r0_18 == 0) {
        goto block_104;
    }
    goto block_107;
block_100:
    if (temp_r0_18 == 2) {
        goto block_105;
    }
    if (temp_r0_18 == 3) {
        goto block_106;
    }
    goto block_107;
block_103:
    var_r7_3 -= 0x10;
    goto block_107;
block_104:
    var_r7_3 += 0x10;
    goto block_107;
block_105:
    var_r4_5 -= 0x10;
    goto block_107;
block_106:
    var_r4_5 += 0x10;
block_107:
    temp_r0_19 = saved_reg_r10->unk0;
    arg46 = *temp_r0_19 + 0xCC;
    arg4.unk0 = (u16) ((0xFFFFFC00 & arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
    arg65 = ((u16) var_r4_5 & 0x3F) * 4;
    arg4.unk1 = (u8) ((3 & arg4.unk1) | arg65);
    arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (var_r4_5 << 0x10) >> 0x16) & 0x3FF));
    arg4.unk3 = (u8) ((3 & arg4.unk3) | (((u16) var_r7_3 & 0x3F) * 4));
    arg4.unk4 = (u16) ((0xFFFFFC00 & arg4.unk4) | (((u32) (var_r7_3 << 0x10) >> 0x16) & 0x3FF));
    var_r4_4 = &arg26;
    *arg5C = *arg46(temp_r0_19, &arg4, var_r4_4);
    if (saved_reg_r10->unk34->unk34C4 != 0) {
        goto block_112;
    }
    var_r1_8 = 3;
block_109:
    temp_r2_3 = func_0800EB2C(saved_reg_r10->unk38, var_r1_8);
    var_r1_9 = 0x32;
    if (*arg5C == 0) {
        goto block_111;
    }
    var_r1_9 = 0x64;
block_111:
    func_0800EF88(temp_r2_3, var_r1_9);
block_112:
    func_08025B64(saved_reg_r10, *var_r4_4);
    .L08031F0E();
block_113:
    temp_r1_20 = saved_reg_r10->unk40;
    arg54 = saved_reg_r10 + 0x40;
    if (temp_r1_20 != 6) {
        goto block_115;
    }
    var_r1_10 = saved_reg_r10->unk4;
    var_r2 = *arg54;
    var_r3_2 = (*saved_reg_r10->unk0)->unkEC;
    goto block_144;
block_115:
    if (temp_r1_20 == 5) {
        goto block_117;
    }
    goto block_132;
block_117:
    var_r1_11 = 0;
    arg52 = saved_reg_r10 + 0x20;
loop_118:
    var_r0_5 = 0;
    temp_r2_4 = var_r1_11 - 4;
    arg4F = temp_r2_4;
    arg50 = var_r1_11 + 1;
    arg47 = temp_r2_4;
loop_119:
    temp_r0_20 = var_r0_5 + 1;
    arg27.unk0 = temp_r0_20;
    arg27.unk4 = arg47;
    temp_r1_21 = *arg52;
    arg51 = temp_r0_20;
    if (temp_r1_21 == 1) {
        goto block_126;
    }
    if ((s32) temp_r1_21 > 1) {
        goto block_123;
    }
    if (temp_r1_21 == 0) {
        goto block_125;
    }
    goto block_128;
block_123:
    if (temp_r1_21 == 2) {
        goto block_127;
    }
    goto block_128;
block_125:
    arg27.unk0 = arg47;
    arg27.unk4 = (s32) arg27.unk0;
    goto block_128;
block_126:
    arg27.unk0 = (s32) (0 - arg4F);
    arg27.unk4 = (s32) (0 - arg27.unk0);
    goto block_128;
block_127:
    arg27.unk0 = (s32) (0 - arg27.unk0);
block_128:
    temp_r0_21 = saved_reg_r10->unk0;
    temp_r3_2 = (arg27.unk0 * 0x10) + saved_reg_r10->unkA;
    temp_r5_3 = (arg27.unk4 * 0x10) + saved_reg_r10->unkE;
    arg4.unk0 = (u16) ((0xFFFFFC00 & arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
    arg4.unk1 = (u8) ((3 & arg4.unk1) | ((temp_r3_2 & 0x3F) * 4));
    arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (temp_r3_2 << 0x10) >> 0x16) & 0x3FF));
    arg4.unk3 = (u8) ((3 & arg4.unk3) | ((temp_r5_3 & 0x3F) * 4));
    arg4.unk4 = (u16) ((0xFFFFFC00 & arg4.unk4) | (((u32) (temp_r5_3 << 0x10) >> 0x16) & 0x3FF));
    temp_r1_22 = *arg5C;
    temp_r0_22 = (*temp_r0_21)->unkC4(temp_r0_21, &arg4, *arg54);
    *arg5C = (u8) ((u32) ((0 - temp_r0_22) | temp_r0_22 | ((0 - temp_r1_22) | temp_r1_22)) >> 0x1F);
    var_r0_5 = arg51;
    if (var_r0_5 <= 8) {
        goto loop_119;
    }
    var_r1_11 = arg50;
    if (var_r1_11 > 8) {
        goto block_131;
    }
    goto loop_118;
block_131:
    goto block_145;
block_132:
    var_r4_6 = saved_reg_r10->unkA;
    var_r7_4 = saved_reg_r10->unkE;
    temp_r0_23 = saved_reg_r10->unk20;
    if (temp_r0_23 == 1) {
        goto block_139;
    }
    if ((s32) temp_r0_23 > 1) {
        goto block_136;
    }
    if (temp_r0_23 == 0) {
        goto block_140;
    }
    goto block_143;
block_136:
    if (temp_r0_23 == 2) {
        goto block_141;
    }
    if (temp_r0_23 == 3) {
        goto block_142;
    }
    goto block_143;
block_139:
    var_r7_4 -= 0x10;
    goto block_143;
block_140:
    var_r7_4 += 0x10;
    goto block_143;
block_141:
    var_r4_6 -= 0x10;
    goto block_143;
block_142:
    var_r4_6 += 0x10;
block_143:
    arg48 = *saved_reg_r10->unk0 + 0xC4;
    arg4.unk0 = (u16) ((0xFFFFFC00 & arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
    arg65 = ((u16) var_r4_6 & 0x3F) * 4;
    arg4.unk1 = (u8) ((3 & arg4.unk1) | arg65);
    arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (var_r4_6 << 0x10) >> 0x16) & 0x3FF));
    arg4.unk3 = (u8) ((3 & arg4.unk3) | (((u16) var_r7_4 & 0x3F) * 4));
    arg4.unk4 = (u16) ((0xFFFFFC00 & arg4.unk4) | (((u32) (var_r7_4 << 0x10) >> 0x16) & 0x3FF));
    var_r2 = *arg54;
    var_r3_2 = *arg48;
    var_r1_10 = (u16) &arg4;
block_144:
    *arg5C = var_r3_2(saved_reg_r10->unk0, var_r1_10, var_r2);
block_145:
    var_r6 = saved_reg_r10;
    if (saved_reg_r10->unk34->unk34C4 == 0) {
        goto block_147;
    }
    goto block_59;
block_147:
    var_r1_4 = 3;
    goto block_56;
case 5:                                             /* switch 1 */
    temp_r2_5 = saved_reg_r10 + 0x88;
    temp_r2_5->unk4 = (s32) (temp_r2_5->unk4 + temp_r2_5->unkC);
    temp_r2_5->unk8 = (s32) (temp_r2_5->unk8 + temp_r2_5->unk10);
    temp_r0_24 = temp_r2_5->unk18 + 0xFFFFC7D7;
    temp_r2_5->unk18 = temp_r0_24;
    temp_r1_23 = temp_r2_5->unk14 + temp_r0_24;
    if (temp_r1_23 <= 0) {
        goto block_150;
    }
    temp_r2_5->unk14 = temp_r1_23;
    goto block_151;
block_150:
    temp_r2_5->unk14 = 0;
    temp_r2_5->unk18 = 0;
block_151:
    arg49 = (s32) saved_reg_r10->unk4;
    var_r8 = saved_reg_r10->unkA;
    var_r6_2 = saved_reg_r10->unkE;
    temp_r0_25 = saved_reg_r10->unk20;
    if (temp_r0_25 == 1) {
        goto block_159;
    }
    if ((s32) temp_r0_25 > 1) {
        goto block_155;
    }
    if (temp_r0_25 == 0) {
        goto block_158;
    }
    goto block_162;
block_155:
    if (temp_r0_25 == 2) {
        goto block_160;
    }
    if (temp_r0_25 == 3) {
        goto block_161;
    }
    goto block_162;
block_158:
    var_r6_2 += 0x30;
    goto block_162;
block_159:
    var_r6_2 -= 0x30;
    goto block_162;
block_160:
    var_r8 -= 0x30;
    goto block_162;
block_161:
    var_r8 += 0x30;
block_162:
    temp_r3_3 = saved_reg_r10->unk0;
    (*temp_r3_3)->unk34(&arg4, temp_r3_3, arg49);
    temp_r4_2 = var_r8 >> 3;
    temp_r3_4 = var_r6_2 >> 3;
    temp_r0_26 = arg4.unk8;
    if (arg4 == 0) {
        goto block_169;
    }
    if ((u32) temp_r4_2 > (u32) temp_r0_26) {
        goto block_169;
    }
    if ((u32) temp_r3_4 > (u32) arg4.unkA) {
        goto block_169;
    }
    var_r0_6 = (temp_r3_4 * temp_r0_26) + temp_r4_2;
    if (arg5 == 0) {
        goto block_167;
    }
    var_r0_6 = *(arg5 + var_r0_6);
block_167:
    var_r0_7 = arg4 + (var_r0_6 * 4);
    goto block_170;
block_168:
    var_r0_8 = *var_r4_7;
    goto block_178;
block_169:
    var_r0_7 = 0;
block_170:
    if (var_r0_7 != 0) {
        goto block_172;
    }
    goto block_183;
block_172:
    if ((s32) (*var_r0_7 << 0x1E) < 0) {
        goto block_174;
    }
    goto block_183;
block_174:
    temp_r0_27 = (*temp_r3_3)->unk14C(temp_r3_3);
    var_r4_7 = temp_r0_27->unk0;
    temp_r5_4 = temp_r0_27->unk4;
    arg5A = saved_reg_r10 + 0x54;
    arg5F = var_r8 << 0x10;
    arg60 = var_r6_2 << 0x10;
    arg5D = &arg4 + 0x94;
    arg5B = saved_reg_r10 + 0x60;
    if (var_r4_7 == temp_r5_4) {
        goto block_177;
    }
loop_175:
    if ((func_08008CD0(*var_r4_7) << 0x18) == 0) {
        goto block_168;
    }
    var_r4_7 += 4;
    if (var_r4_7 != temp_r5_4) {
        goto loop_175;
    }
block_177:
    var_r0_8 = *(temp_r5_4 - 4);
block_178:
    func_08008B6C(var_r0_8, 0x6D);
    *arg5A = 0;
    arg8.unk0 = (u16) ((0xFFFFFC00 & arg8.unk0) | (arg49 & 0x3FF));
    arg8.unk1 = (u8) ((3 & arg8.unk1) | (((arg5F >> 0x10) & 0x3F) * 4));
    arg8.unk2 = (u16) ((0xFFFFFC00 & arg8.unk2) | ((arg5F >> 0x16) & 0x3FF));
    arg8.unk3 = (u8) ((3 & arg8.unk3) | (((arg60 >> 0x10) & 0x3F) * 4));
    arg8.unk4 = (u16) ((0xFFFFFC00 & arg8.unk4) | ((arg60 >> 0x16) & 0x3FF));
    func_080A3E90(arg5D, &arg8, (*temp_r3_3)->unk144(temp_r3_3) + 0xA);
    saved_reg_r10->unk58 = (s32) arg29.unk0;
    saved_reg_r10->unk5C = (s32) arg29.unk4;
    argA = &gUnk_080F0E80;
    argA.unk4 = 0;
    __12RucksackItem(&argC);
    argA.unkC = 0;
    argA.unkD = 0;
    argA.unk10 = 0x3B;
    argA.unk14 = 0;
    temp_r0_28 = &argA + 0xC;
    arg5B->unk0 = (s32 *) argA.unk0;
    arg5B->unk4 = (s32) argA.unk4;
    arg5B->unk8 = (s32) argA.unk8;
    temp_r1_24 = arg5B + 0xC;
    arg5B->unkC = (s32) argA.unkC;
    temp_r1_24->unk4 = (s32) temp_r0_28->unk4;
    temp_r1_24->unk8 = (s32) temp_r0_28->unk8;
    if (saved_reg_r10->unk5C != 0) {
        goto block_182;
    }
    temp_r4_3 = 3 & saved_reg_r10->unk34->unk218B;
    if (temp_r4_3 != 0) {
        goto block_182;
    }
    if ((s32) (u8) (rand() >> 4) > 1) {
        goto block_182;
    }
    arg2B.unk0 = 0x331;
    arg2B.unk4 = temp_r4_3;
    (*temp_r3_3)->unk140(temp_r3_3, &arg2B, 0);
    *arg53 = 0;
    .L08031D78();
block_182:
    *arg53 = 0x1E;
    func_0802A4C0(saved_reg_r10, 0xA0, 0);
    .L08031F0E();
block_183:
    arg8 = &gUnk_080F0E80;
    arg8.unk4 = 0U;
    __12RucksackItem(&argA);
    arg8.unkC = 0;
    arg8.unkD = 0;
    arg8.unk10 = 0x3B;
    arg8.unk14 = 0;
    temp_r0_29 = saved_reg_r10 + 0x60;
    temp_r4_4 = &arg8 + 0xC;
    saved_reg_r10->unk60 = (s32 *) arg8.unk0;
    temp_r0_29->unk4 = (s32) arg8.unk4;
    temp_r0_29->unk8 = (s32) arg8.unk8;
    temp_r0_30 = temp_r0_29 + 0xC;
    temp_r0_29->unkC = (s32) arg8.unkC;
    temp_r0_30->unk4 = (s32) temp_r4_4->unk4;
    temp_r0_30->unk8 = (s32) temp_r4_4->unk8;
    *arg53 = 0x20;
    .L08030F4C();
    return;
case 8:                                             /* switch 1 */
    temp_r4_5 = saved_reg_r10->unk38;
    arg2D = func_0800E550(temp_r4_5, GetTool__C9ToolStack(temp_r4_5 + 0x5C));
    if (GetId__C4Tool() != 0x44) {
        goto block_190;
    }
    var_r0_9 = 0;
    arg5E = &arg4 + 0xA5;
loop_186:
    var_sb = 0;
    arg62 = var_r0_9 * 0x10;
    arg61 = var_r0_9 + 1;
loop_187:
    temp_r4_6 = saved_reg_r10->unk38;
    *arg5E = func_0800E550(temp_r4_6, GetTool__C9ToolStack(temp_r4_6 + 0x5C));
    GetId__C4Tool(&arg4 + 0xA5);
    temp_r2_6 = func_080245E0();
    temp_r0_31 = saved_reg_r10->unk0;
    temp_r4_7 = ((var_sb * 0x10) + saved_reg_r10->unkA) - 0x10;
    temp_r6 = (arg62 + saved_reg_r10->unkE) - 0x10;
    arg4.unk0 = (u16) ((0xFFFFFC00 & arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
    arg4.unk1 = (u8) ((3 & arg4.unk1) | ((temp_r4_7 & 0x3F) * 4));
    arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (temp_r4_7 << 0x10) >> 0x16) & 0x3FF));
    arg4.unk3 = (u8) ((3 & arg4.unk3) | ((temp_r6 & 0x3F) * 4));
    arg4.unk4 = (u16) ((0xFFFFFC00 & arg4.unk4) | (((u32) (temp_r6 << 0x10) >> 0x16) & 0x3FF));
    (*temp_r0_31)->unkDC(temp_r0_31, &arg4, temp_r2_6);
    var_sb += 1;
    if (var_sb <= 2) {
        goto loop_187;
    }
    var_r0_9 = arg61;
    if (var_r0_9 <= 2) {
        goto loop_186;
    }
    goto block_194;
block_190:
    temp_r4_8 = saved_reg_r10->unk38;
    arg4.unkA6 = func_0800E550(temp_r4_8, GetTool__C9ToolStack(temp_r4_8 + 0x5C));
    GetId__C4Tool();
    arg4A = func_080245E0();
    var_r0_10 = 0;
loop_191:
    var_r8_2 = 0;
    arg64 = var_r0_10 * 0x10;
    arg63 = var_r0_10 + 1;
loop_192:
    temp_r0_32 = saved_reg_r10->unk0;
    temp_r3_5 = ((var_r8_2 * 0x10) + saved_reg_r10->unkA) - 0x10;
    temp_r5_5 = (arg64 + saved_reg_r10->unkE) - 0x10;
    arg4.unk0 = (u16) ((0xFFFFFC00 & arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
    arg4.unk1 = (u8) ((3 & arg4.unk1) | ((temp_r3_5 & 0x3F) * 4));
    arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (temp_r3_5 << 0x10) >> 0x16) & 0x3FF));
    arg4.unk3 = (u8) ((3 & arg4.unk3) | ((temp_r5_5 & 0x3F) * 4));
    arg4.unk4 = (u16) ((0xFFFFFC00 & arg4.unk4) | (((u32) (temp_r5_5 << 0x10) >> 0x16) & 0x3FF));
    (*temp_r0_32)->unkDC(temp_r0_32, &arg4, arg4A);
    var_r8_2 += 1;
    if (var_r8_2 <= 2) {
        goto loop_192;
    }
    var_r0_10 = arg63;
    if (var_r0_10 <= 2) {
        goto loop_191;
    }
block_194:
    SubtractAmount__9ToolStackUi(saved_reg_r10->unk38 + 0x5C, 1);
    .L08031C7C();
case 6:                                             /* switch 1 */
    var_r8_3 = 3;
    temp_r3_6 = saved_reg_r10->unkB2;
    var_r2_2 = 0;
    if ((u32) (temp_r3_6 - 0x2B) > 0x1AU) {
        goto block_197;
    }
    var_r2_2 = 1;
block_197:
    if (var_r2_2 == 0) {
        goto block_199;
    }
    temp_r0_33 = saved_reg_r10->unk0;
    var_r5 = (*temp_r0_33)->unk40(temp_r0_33, temp_r3_6);
    goto block_200;
block_199:
    var_r5 = 0;
block_200:
    if (var_r5 == 0) {
        goto block_205;
    }
    if ((var_r5->unk14->unk48(var_r5) << 0x18) == 0) {
        goto block_205;
    }
    temp_r0_34 = GetFreePregnancyStall__C4Barn(saved_reg_r10->unk34 + 0x5F0);
    if (temp_r0_34 < 0) {
        goto block_205;
    }
    temp_r4_9 = saved_reg_r10->unkB2 - 0x36;
    if (temp_r4_9 > 0xFU) {
        goto block_205;
    }
    var_r5->unk14->unk68(var_r5);
    MoveToPregnancyStall__4BarnUiUi(saved_reg_r10->unk34 + 0x5F0, temp_r0_34, temp_r4_9);
    saved_reg_r10->unkB1 = (s8) temp_r4_9;
    var_r8_3 = 1;
block_205:
    temp_r0_35 = saved_reg_r10->unk0;
    arg2E.unk0 = var_r8_3;
    arg2E.unk4 = 0;
    (*temp_r0_35)->unk140(temp_r0_35, &arg2E, 0);
    SubtractAmount__9ToolStackUi(saved_reg_r10->unk38 + 0x5C, 1);
    *arg53 = 0;
    .L08031F0E();
case 7:                                             /* switch 1 */
    var_r8_4 = 3;
    temp_r3_7 = saved_reg_r10->unkB2;
    var_r2_3 = 0;
    if ((u32) (temp_r3_7 - 0x2B) > 0x1AU) {
        goto block_208;
    }
    var_r2_3 = 1;
block_208:
    if (var_r2_3 == 0) {
        goto block_210;
    }
    temp_r0_36 = saved_reg_r10->unk0;
    var_r5_2 = (*temp_r0_36)->unk40(temp_r0_36, temp_r3_7);
    goto block_211;
block_210:
    var_r5_2 = 0;
block_211:
    if (var_r5_2 == 0) {
        goto block_216;
    }
    if ((var_r5_2->unk14->unk4C(var_r5_2) << 0x18) == 0) {
        goto block_216;
    }
    temp_r0_37 = GetFreePregnancyStall__C4Barn(saved_reg_r10->unk34 + 0x5F0);
    if (temp_r0_37 < 0) {
        goto block_216;
    }
    temp_r4_10 = saved_reg_r10->unkB2 - 0x36;
    if (temp_r4_10 > 0xFU) {
        goto block_216;
    }
    var_r5_2->unk14->unk6C(var_r5_2);
    MoveToPregnancyStall__4BarnUiUi(saved_reg_r10->unk34 + 0x5F0, temp_r0_37, temp_r4_10);
    saved_reg_r10->unkB1 = (s8) temp_r4_10;
    var_r8_4 = 1;
block_216:
    temp_r0_38 = saved_reg_r10->unk0;
    arg30.unk0 = var_r8_4;
    arg30.unk4 = 0;
    (*temp_r0_38)->unk140(temp_r0_38, &arg30, 0);
    SubtractAmount__9ToolStackUi(saved_reg_r10->unk38 + 0x5C, 1);
    *arg53 = 0;
    .L08031F0E();
case 13:                                            /* switch 1 */
    var_r5_3 = 3;
    temp_r3_8 = saved_reg_r10->unkB2;
    var_r1_12 = 0;
    if ((u32) (temp_r3_8 - 0x2B) > 0x1AU) {
        goto block_219;
    }
    var_r1_12 = 1;
block_219:
    if (var_r1_12 == 0) {
        goto block_221;
    }
    temp_r0_39 = saved_reg_r10->unk0;
    var_r4_8 = (*temp_r0_39)->unk40(temp_r0_39, temp_r3_8);
    goto block_222;
block_221:
    var_r4_8 = 0;
block_222:
    if (var_r4_8 == 0) {
        goto block_225;
    }
    if ((var_r4_8->unk14->unk5C(var_r4_8) << 0x18) == 0) {
        goto block_225;
    }
    var_r4_8->unk14->unk7C(var_r4_8);
    var_r5_3 = 2;
block_225:
    temp_r0_40 = saved_reg_r10->unk0;
    arg32.unk0 = var_r5_3;
    arg32.unk4 = 0;
    (*temp_r0_40)->unk140(temp_r0_40, &arg32, 0);
    SubtractAmount__9ToolStackUi(saved_reg_r10->unk38 + 0x5C, 1);
    *arg53 = 0;
    .L08031F0E();
case 9:                                             /* switch 1 */
    temp_r3_9 = saved_reg_r10->unkB2;
    var_r1_13 = 0;
    if ((u32) (temp_r3_9 - 0x2B) > 0x1AU) {
        goto block_228;
    }
    var_r1_13 = 1;
block_228:
    if (var_r1_13 == 0) {
        goto block_230;
    }
    temp_r0_41 = saved_reg_r10->unk0;
    var_r4_9 = (*temp_r0_41)->unk40(temp_r0_41, temp_r3_9);
    goto block_231;
block_230:
    var_r4_9 = 0;
block_231:
    if (var_r4_9 != 0) {
        goto block_233;
    }
    .L08031C7C();
block_233:
    if ((var_r4_9->unk14->unk50(var_r4_9) << 0x18) != 0) {
        goto block_235;
    }
    .L08031C7C();
block_235:
    var_r4_9->unk14->unk70(var_r4_9);
    .L08031C7C();
case 10:                                            /* switch 1 */
    temp_r3_10 = saved_reg_r10->unkB2;
    var_r1_14 = 0;
    if ((u32) (temp_r3_10 - 0x2B) > 0x1AU) {
        goto block_238;
    }
    var_r1_14 = 1;
block_238:
    if (var_r1_14 == 0) {
        goto block_240;
    }
    temp_r0_42 = saved_reg_r10->unk0;
    var_r4_10 = (*temp_r0_42)->unk40(temp_r0_42, temp_r3_10);
    goto block_241;
block_240:
    var_r4_10 = 0;
block_241:
    if (var_r4_10 == 0) {
        goto block_252;
    }
    if ((var_r4_10->unk14->unk54(var_r4_10) << 0x18) == 0) {
        goto block_252;
    }
    temp_r0_43 = var_r4_10->unk14->unk74(var_r4_10);
    var_r1_15 = 0x1C;
    if (temp_r0_43 > 5U) {
        goto block_251;
    }
    switch (temp_r0_43);                            /* switch 4; jump table: .L08030C88 */
case 0:                                             /* switch 4 */
    var_r1_15 = 0x1C;
    goto block_251;
case 1:                                             /* switch 4 */
    var_r1_15 = 0x1D;
    goto block_251;
case 2:                                             /* switch 4 */
    var_r1_15 = 0x1E;
    goto block_251;
case 3:                                             /* switch 4 */
    var_r1_15 = 0x1F;
    goto block_251;
case 4:                                             /* switch 4 */
    var_r1_15 = 0x20;
    goto block_251;
case 5:                                             /* switch 4 */
    var_r1_15 = 0x21;
block_251:
    temp_r5_6 = saved_reg_r10->unk14;
    __4FoodUi(&arg5, var_r1_15);
    __12RucksackItemG4Food(&arg4, (arg4.unk6 << 0x10) | ((arg4.unk5 << 8) | arg5));
    temp_r5_6->unk5C(saved_reg_r10, &arg4, 0);
block_252:
    if ((func_0800F190(saved_reg_r10->unk34 + 0x1C2C) << 0x18) != 0) {
        goto block_254;
    }
    .L08031F0E();
block_254:
    .L08031D92();
case 11:                                            /* switch 1 */
    temp_r3_11 = saved_reg_r10->unkB2;
    var_r1_16 = 0;
    if ((u32) (temp_r3_11 - 0x2B) > 0x1AU) {
        goto block_257;
    }
    var_r1_16 = 1;
block_257:
    if (var_r1_16 == 0) {
        goto block_259;
    }
    temp_r0_44 = saved_reg_r10->unk0;
    var_r4_11 = (*temp_r0_44)->unk40(temp_r0_44, temp_r3_11);
    goto block_260;
block_259:
    var_r4_11 = 0;
block_260:
    if (var_r4_11 == 0) {
        goto block_271;
    }
    if ((var_r4_11->unk14->unk58(var_r4_11) << 0x18) == 0) {
        goto block_271;
    }
    temp_r0_45 = var_r4_11->unk14->unk78(var_r4_11);
    var_r1_17 = 5;
    if (temp_r0_45 > 5U) {
        goto block_270;
    }
    switch (temp_r0_45);                            /* switch 5; jump table: .L08030D64 */
case 0:                                             /* switch 5 */
    var_r1_17 = 5;
    goto block_270;
case 1:                                             /* switch 5 */
    var_r1_17 = 6;
    goto block_270;
case 2:                                             /* switch 5 */
    var_r1_17 = 7;
    goto block_270;
case 3:                                             /* switch 5 */
    var_r1_17 = 8;
    goto block_270;
case 4:                                             /* switch 5 */
    var_r1_17 = 9;
    goto block_270;
case 5:                                             /* switch 5 */
    var_r1_17 = 0xA;
block_270:
    temp_r5_7 = saved_reg_r10->unk14;
    __7ArticleUi(&arg34, var_r1_17);
    __12RucksackItemG7Article(&arg4, arg34);
    temp_r5_7->unk5C(saved_reg_r10, &arg4, 0);
block_271:
    if ((func_0800F190(saved_reg_r10->unk34 + 0x1C2C) << 0x18) != 0) {
        goto block_273;
    }
    .L08031F0E();
block_273:
    .L08031E84(0);
case 12:                                            /* switch 1 */
    GetLocation__C7AEntity(&arg4, saved_reg_r10);
    var_r4_12 = 0x2B;
loop_275:
    temp_r0_46 = saved_reg_r10->unk0;
    temp_r0_47 = (*temp_r0_46)->unk40(temp_r0_46, var_r4_12);
    if (temp_r0_47 == 0) {
        goto block_277;
    }
    temp_r0_47->unk14->unk3C(temp_r0_47, &arg4);
block_277:
    var_r4_12 += 1;
    if (var_r4_12 <= 0x45U) {
        goto loop_275;
    }
    sub_0803192E();
    return;
}

