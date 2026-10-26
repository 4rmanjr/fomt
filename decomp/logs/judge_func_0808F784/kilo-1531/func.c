#include "common.h"
s32 AddAmount__9ToolStackUi(u32 *, u32);              /* extern */
s32 ExtractToolAt__8RucksackUi(u32 *, s32, s32);      /* extern */
u32 GetAmount__C9ToolStack(u32 *);                  /* extern */
u16 GetIconId__C4Tool();                            /* extern */
s32 GetId__C4Tool();                                /* extern */
u32 *GetToolAt__8RucksackUi(s32, s32);              /* extern */
u32 *GetToolStackAt__9ToolChestUi(s32, s32);        /* extern */
s8 GetTool__C9ToolStack(u32 *);                     /* extern */
s32 IsEmpty__C9ToolStack(u32 *, s32);               /* extern */
s32 SubtractAmount__9ToolStackUi(u32 *, u32);         /* extern */
s32 __9ToolStack(u32 *);                              /* extern */
s8 func_0800E550(s32, s8);                          /* extern */
s32 func_08050DC8(void *, s32, s32, s32);             /* extern */
u8 func_0808F080(void *, s32, s32);                 /* extern */
u32 func_080CAD14(u32 *);                           /* extern */
void *func_080CB2E8(s32, s32);                      /* extern */
void *func_080CB2FC(s32);                           /* extern */
s32 func_080CB304(s32, s32, ? *, u16);                /* extern */
s32 func_080CB63C(s32, s32, u32, u32);                /* extern */
s32 func_080CB948(s32, s32, u32);                     /* extern */
s32 func_080CB9DC(s32, u32);                          /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CBDD4(s32, u32, u32, u32);                /* extern */
s32 func_080CC0B4(s32);                               /* extern */
void *func_080CC70C(s32, s32);                      /* extern */
s32 func_080CC728(s32, s32, ? *, u16);                /* extern */
s32 func_080CCA40(s32, s32, u32, u32);                /* extern */
s32 func_080CCD48(s32, s32, u32);                     /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 func_080CE1C4(void *, s8);                      /* extern */
s32 func_080CF054(s32);                             /* extern */
s32 memcpy(u32 *, u32 *, s32);                        /* extern */
extern s32 gUnk_08117B10;
extern ? gUnk_086678A0;

u8 func_0808F784(void *arg0, s32 arg1, s32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 sp8;
    u32 spC;
    u32 sp10;
    u32 sp18;
    u32 sp1C;
    u32 sp20;
    u32 sp24;
    u32 sp28;
    s8 sp34;
    s8 sp38;
    s8 sp3C;
    s8 sp40;
    s8 sp44;
    s32 sp48;
    s32 sp4C;
    void **sp50;
    u32 *sp54;
    s32 sp58;
    u32 *sp5C;
    u32 *sp60;
    s32 sp64;
    s32 *sp68;
    s32 *sp6C;
    void **sp70;
    s32 temp_r0_7;
    s32 temp_r4;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_29;
    s32 temp_r4_2;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_33;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_38;
    s32 temp_r4_39;
    s32 temp_r4_40;
    s32 temp_r4_41;
    s32 temp_r4_43;
    s32 temp_r4_44;
    s32 temp_r4_45;
    s32 temp_r4_46;
    s32 temp_r4_47;
    s32 temp_r4_48;
    s32 temp_r4_49;
    s32 temp_r4_4;
    s32 temp_r4_50;
    s32 temp_r4_51;
    s32 temp_r4_52;
    s32 temp_r4_53;
    s32 temp_r4_54;
    s32 temp_r4_55;
    s32 temp_r4_56;
    s32 temp_r4_57;
    s32 temp_r4_58;
    s32 temp_r4_59;
    s32 temp_r4_60;
    s32 temp_r4_61;
    s32 temp_r4_63;
    s32 temp_r4_64;
    s32 temp_r4_65;
    s32 temp_r4_66;
    s32 temp_r4_67;
    s32 temp_r4_68;
    s32 temp_r4_69;
    s32 temp_r4_70;
    s32 temp_r4_71;
    s32 temp_r4_74;
    s32 temp_r4_75;
    s32 temp_r4_76;
    s32 temp_r4_7;
    s32 temp_r5_13;
    s32 temp_r5_14;
    s32 temp_r5_15;
    s32 temp_r5_18;
    s32 temp_r5_19;
    s32 temp_r5_23;
    s32 temp_r5_24;
    s32 temp_r5_27;
    s32 temp_r5_28;
    s32 temp_r5_29;
    s32 temp_r5_32;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_8;
    s32 temp_r5_9;
    s32 temp_r6;
    s32 temp_r6_10;
    s32 temp_r6_11;
    s32 temp_r6_12;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 temp_r6_6;
    s32 temp_r6_7;
    s32 temp_r6_8;
    s32 temp_r6_9;
    s32 temp_r8_2;
    s32 temp_r8_3;
    s32 temp_sl;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r1_7;
    s32 var_r1_8;
    s32 var_r1_9;
    s32 var_r2;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r4_5;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r6;
    s32 var_r8;
    s32 var_r8_2;
    s8 temp_r4_22;
    s8 temp_r4_5;
    s8 temp_r5_11;
    s8 temp_r5_2;
    s8 temp_r8;
    s8 temp_sl_2;
    u16 temp_r4_19;
    u16 temp_r4_23;
    u16 temp_r4_3;
    u16 temp_r4_6;
    u16 temp_r4_8;
    u16 var_r4;
    u32 *temp_r4_10;
    u32 *temp_r4_26;
    u32 *temp_r4_42;
    u32 *temp_r4_62;
    u32 *temp_r4_73;
    u32 *temp_r5;
    u32 *temp_r5_10;
    u32 *temp_r5_12;
    u32 *temp_r5_17;
    u32 *temp_r5_20;
    u32 *temp_r5_22;
    u32 *temp_r5_26;
    u32 *temp_r5_30;
    u32 *temp_r5_31;
    u32 *temp_r5_3;
    u32 *temp_r5_7;
    u32 *var_r0_4;
    u32 *var_r0_5;
    u32 temp_r4_72;
    u32 temp_r4_9;
    u32 temp_r5_16;
    u32 temp_r5_21;
    u32 temp_r5_25;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r6_2;
    u32 var_r6_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;

    sp48 = arg1;
    sp4C = 1;
    if (arg2 == 0) {
        var_r2 = func_080CF054(arg0->unk90);
        var_r1 = sp48;
        goto block_6;
    }
    if (sp48 != 0) {
        if (sp48 > 8) {
            sp68 = arg0 + 0x90;
            sp64 = func_080CE184(arg0, sp48, func_080CF054(arg0->unk90));
            if (arg2 > 8) {
                sp70 = arg0 + 0x94;
                temp_sl = func_080CE184(arg0, arg2, arg0->unk94->unkBC);
                memcpy(&sp4, GetToolStackAt__9ToolChestUi(arg0->unk104, sp64), 2);
                memcpy(&sp8, GetToolStackAt__9ToolChestUi(arg0->unk104, temp_sl), 2);
                if (((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) && ((IsEmpty__C9ToolStack(&sp8) << 0x18) != 0)) {

                } else if ((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) {
                    memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, sp64), &sp8, 2);
                    temp_r5 = GetToolStackAt__9ToolChestUi(arg0->unk104, temp_sl);
                    __9ToolStack(&spC);
                    memcpy(temp_r5, &spC, 2);
                    temp_r5_2 = GetTool__C9ToolStack(&sp8);
                    temp_r4 = arg0->unk7C;
                    func_080CCDEC(temp_r4, func_080CE184(arg0, arg2, 0));
                    temp_r4_2 = (*sp70)->unkBC;
                    if (temp_r4_2 != func_080CF054(*sp68)) {

                    } else {
                        sp40 = func_0800E550(arg0->unk8 + 0x1BD8, temp_r5_2);
                        var_r4 = GetIconId__C4Tool();
                        var_r6 = arg0->unk7C;
                        var_r5 = func_080CE184(arg0, sp48, 0);
                        goto block_90;
                    }
                } else {
                    if ((IsEmpty__C9ToolStack(&sp8) << 0x18) != 0) {
                        memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, temp_sl), &sp4, 2);
                        temp_r5_3 = GetToolStackAt__9ToolChestUi(arg0->unk104, sp64);
                        __9ToolStack(&spC);
                        memcpy(temp_r5_3, &spC, 2);
                        sp0.unk41 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(&sp4));
                        temp_r4_3 = GetIconId__C4Tool();
                        temp_r6 = arg0->unk7C;
                        temp_r5_4 = func_080CE184(arg0, arg2, 0);
                        sp0 = GetAmount__C9ToolStack(&sp4);
                        func_080CC728(temp_r6, temp_r5_4, &gUnk_086678A0, temp_r4_3);
                        var_r4_2 = (*sp70)->unkBC;
                        var_r0 = *sp68;
                        goto block_100;
                    }
                    sp0.unk42 = GetTool__C9ToolStack(&sp4);
                    temp_r4_4 = GetId__C4Tool();
                    sp0.unk43 = GetTool__C9ToolStack(&sp8);
                    var_r1_2 = 0;
                    if (temp_r4_4 == GetId__C4Tool()) {
                        var_r1_2 = 1;
                    }
                    if (var_r1_2 == 0) {
                        memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, sp64), &sp8, 2);
                        memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, temp_sl), &sp4, 2);
                        temp_r4_5 = GetTool__C9ToolStack(&sp4);
                        temp_sl_2 = GetTool__C9ToolStack(&sp8);
                        sp44 = func_0800E550(arg0->unk8 + 0x1BD8, temp_r4_5);
                        temp_r4_6 = GetIconId__C4Tool();
                        temp_r6_2 = arg0->unk7C;
                        temp_r5_5 = func_080CE184(arg0, arg2, 0);
                        sp0 = GetAmount__C9ToolStack(&sp4);
                        func_080CC728(temp_r6_2, temp_r5_5, &gUnk_086678A0, temp_r4_6);
                        temp_r4_7 = (*sp70)->unkBC;
                        if (temp_r4_7 == func_080CF054(*sp68)) {
                            sp0.unk45 = func_0800E550(arg0->unk8 + 0x1BD8, temp_sl_2);
                            temp_r4_8 = GetIconId__C4Tool();
                            temp_r6_3 = arg0->unk7C;
                            temp_r5_6 = func_080CE184(arg0, sp48, 0);
                            sp0 = GetAmount__C9ToolStack(&sp8);
                            func_080CC728(temp_r6_3, temp_r5_6, &gUnk_086678A0, temp_r4_8);
                        }
                    } else {
                        temp_r4_9 = 0x63 - GetAmount__C9ToolStack(&sp8);
                        if (temp_r4_9 > GetAmount__C9ToolStack(&sp4)) {
                            temp_r4_10 = GetToolStackAt__9ToolChestUi(arg0->unk104, temp_sl);
                            AddAmount__9ToolStackUi(temp_r4_10, GetAmount__C9ToolStack(&sp4));
                            temp_r5_7 = GetToolStackAt__9ToolChestUi(arg0->unk104, sp64);
                            __9ToolStack(&spC);
                            memcpy(temp_r5_7, &spC, 2);
                            temp_r5_8 = arg0->unk7C;
                            temp_r4_11 = func_080CE184(arg0, arg2, 0);
                            GetToolStackAt__9ToolChestUi(arg0->unk104, temp_sl);
                            func_080CCD48(temp_r5_8, temp_r4_11, GetAmount__C9ToolStack());
                            var_r4_2 = (*sp70)->unkBC;
                            var_r0 = *sp68;
                            goto block_100;
                        }
                        AddAmount__9ToolStackUi(GetToolStackAt__9ToolChestUi(arg0->unk104, temp_sl), temp_r4_9);
                        SubtractAmount__9ToolStackUi(GetToolStackAt__9ToolChestUi(arg0->unk104, sp64), temp_r4_9);
                        temp_r5_9 = arg0->unk7C;
                        temp_r4_12 = func_080CE184(arg0, arg2, 0);
                        GetToolStackAt__9ToolChestUi(arg0->unk104, temp_sl);
                        func_080CCD48(temp_r5_9, temp_r4_12, GetAmount__C9ToolStack());
                        temp_r4_13 = (*sp70)->unkBC;
                        if (temp_r4_13 == func_080CF054(*sp68)) {
                            var_r5_2 = arg0->unk7C;
                            var_r4_3 = func_080CE184(arg0, sp48, 0);
                            var_r0_2 = arg0->unk104;
                            goto block_105;
                        }
                    }
                }
            } else {
                sp6C = arg0 + 0x104;
                memcpy(&sp4, GetToolStackAt__9ToolChestUi(arg0->unk104, sp64), 2);
                temp_r4_14 = arg0->unk100;
                memcpy(&sp8, GetToolAt__8RucksackUi(temp_r4_14, func_080CE184(arg0, arg2, 0)), 2);
                if (((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) && ((IsEmpty__C9ToolStack(&sp8) << 0x18) != 0)) {

                } else if ((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) {
                    memcpy(GetToolStackAt__9ToolChestUi(*sp6C, sp64), &sp8, 2);
                    temp_r4_15 = arg0->unk100;
                    temp_r5_10 = GetToolAt__8RucksackUi(temp_r4_15, func_080CE184(arg0, arg2, 0));
                    __9ToolStack(&spC);
                    memcpy(temp_r5_10, &spC, 2);
                    temp_r5_11 = GetTool__C9ToolStack(&sp8);
                    temp_r4_16 = arg0->unk78;
                    func_080CBA60(temp_r4_16, func_080CE184(arg0, arg2, 0));
                    temp_r4_17 = arg0->unk94->unkBC;
                    if (temp_r4_17 != func_080CF054(*sp68)) {

                    } else {
                        sp0.unk3A = func_0800E550(arg0->unk8 + 0x1BD8, temp_r5_11);
                        var_r4 = GetIconId__C4Tool();
                        var_r6 = arg0->unk7C;
                        var_r5 = func_080CE184(arg0, sp48, 0);
block_90:
                        sp0 = GetAmount__C9ToolStack(&sp8);
                        var_r0_3 = var_r6;
                        var_r1_3 = var_r5;
                        goto block_91;
                    }
                } else {
                    if ((IsEmpty__C9ToolStack(&sp8) << 0x18) != 0) {
                        temp_r5_12 = GetToolStackAt__9ToolChestUi(*sp6C, sp64);
                        __9ToolStack(&spC);
                        memcpy(temp_r5_12, &spC, 2);
                        temp_r4_18 = arg0->unk100;
                        memcpy(GetToolAt__8RucksackUi(temp_r4_18, func_080CE184(arg0, arg2, 0)), &sp4, 2);
                        sp0.unk3B = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(&sp4));
                        temp_r4_19 = GetIconId__C4Tool();
                        temp_r6_4 = arg0->unk78;
                        temp_r5_13 = func_080CE184(arg0, arg2, 0);
                        sp0 = GetAmount__C9ToolStack(&sp4);
                        func_080CB304(temp_r6_4, temp_r5_13, &gUnk_086678A0, temp_r4_19);
                        var_r4_2 = arg0->unk94->unkBC;
                        var_r0 = *sp68;
                        goto block_100;
                    }
                    sp3C = GetTool__C9ToolStack(&sp4);
                    temp_r4_20 = GetId__C4Tool();
                    sp0.unk3D = GetTool__C9ToolStack(&sp8);
                    var_r1_4 = 0;
                    if (temp_r4_20 == GetId__C4Tool()) {
                        var_r1_4 = 1;
                    }
                    if (var_r1_4 == 0) {
                        temp_r4_21 = arg0->unk100;
                        memcpy(GetToolAt__8RucksackUi(temp_r4_21, func_080CE184(arg0, arg2, 0)), &sp4, 2);
                        memcpy(GetToolStackAt__9ToolChestUi(*sp6C, sp64), &sp8, 2);
                        temp_r4_22 = GetTool__C9ToolStack(&sp4);
                        temp_r8 = GetTool__C9ToolStack(&sp8);
                        sp0.unk3E = func_0800E550(arg0->unk8 + 0x1BD8, temp_r4_22);
                        temp_r4_23 = GetIconId__C4Tool();
                        temp_r6_5 = arg0->unk78;
                        temp_r5_14 = func_080CE184(arg0, arg2, 0);
                        sp0 = GetAmount__C9ToolStack(&sp4);
                        func_080CB304(temp_r6_5, temp_r5_14, &gUnk_086678A0, temp_r4_23);
                        temp_r4_24 = arg0->unk94->unkBC;
                        if (temp_r4_24 != func_080CF054(*sp68)) {

                        } else {
                            sp0.unk3F = func_0800E550(arg0->unk8 + 0x1BD8, temp_r8);
                            var_r4 = GetIconId__C4Tool();
                            temp_r6_6 = arg0->unk7C;
                            temp_r5_15 = func_080CE184(arg0, sp48, 0);
                            sp0 = GetAmount__C9ToolStack(&sp8);
                            var_r0_3 = temp_r6_6;
                            var_r1_3 = temp_r5_15;
block_91:
                            func_080CC728(var_r0_3, var_r1_3, &gUnk_086678A0, var_r4);
                        }
                    } else {
                        temp_r5_16 = 0x63 - GetAmount__C9ToolStack(&sp8);
                        if (temp_r5_16 > GetAmount__C9ToolStack(&sp4)) {
                            temp_r4_25 = arg0->unk100;
                            temp_r4_26 = GetToolAt__8RucksackUi(temp_r4_25, func_080CE184(arg0, arg2, 0));
                            AddAmount__9ToolStackUi(temp_r4_26, GetAmount__C9ToolStack(&sp4));
                            temp_r5_17 = GetToolStackAt__9ToolChestUi(*sp6C, sp64);
                            __9ToolStack(&spC);
                            memcpy(temp_r5_17, &spC, 2);
                            temp_r6_7 = arg0->unk78;
                            temp_r5_18 = func_080CE184(arg0, arg2, 0);
                            temp_r4_27 = arg0->unk100;
                            GetToolAt__8RucksackUi(temp_r4_27, func_080CE184(arg0, arg2, 0));
                            func_080CB948(temp_r6_7, temp_r5_18, GetAmount__C9ToolStack());
                            var_r4_2 = arg0->unk94->unkBC;
                            var_r0 = *sp68;
block_100:
                            if (var_r4_2 != func_080CF054(var_r0)) {

                            } else {
                                temp_r4_28 = arg0->unk7C;
                                func_080CCDEC(temp_r4_28, func_080CE184(arg0, sp48, 0));
                            }
                        } else {
                            temp_r4_29 = arg0->unk100;
                            AddAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_29, func_080CE184(arg0, arg2, 0)), temp_r5_16);
                            SubtractAmount__9ToolStackUi(GetToolStackAt__9ToolChestUi(*sp6C, sp64), temp_r5_16);
                            temp_r6_8 = arg0->unk78;
                            temp_r5_19 = func_080CE184(arg0, arg2, 0);
                            temp_r4_30 = arg0->unk100;
                            GetToolAt__8RucksackUi(temp_r4_30, func_080CE184(arg0, arg2, 0));
                            func_080CB948(temp_r6_8, temp_r5_19, GetAmount__C9ToolStack());
                            temp_r4_31 = arg0->unk94->unkBC;
                            if (temp_r4_31 != func_080CF054(*sp68)) {

                            } else {
                                var_r5_2 = arg0->unk7C;
                                var_r4_3 = func_080CE184(arg0, sp48, 0);
                                var_r0_2 = *sp6C;
block_105:
                                var_r1_5 = sp64;
                                goto block_106;
                            }
                        }
                    }
                }
            }
        } else if (arg2 > 8) {
            sp58 = func_080CE184(arg0, arg2, arg0->unk94->unkBC);
            temp_r4_32 = arg0->unk100;
            memcpy(&sp4, GetToolAt__8RucksackUi(temp_r4_32, func_080CE184(arg0, sp48, 0)), 2);
            memcpy(&sp8, GetToolStackAt__9ToolChestUi(arg0->unk104, sp58), 2);
            sp5C = &sp0 + 0xC;
            temp_r4_33 = arg0->unk78;
            temp_r0 = func_080CB2E8(temp_r4_33, func_080CE184(arg0, sp48, 0));
            sp5C->unk0 = temp_r0->unk0;
            sp5C->unk4 = (s32) temp_r0->unk4;
            sp5C->unk8 = (s32) temp_r0->unk8;
            sp60 = &sp0 + 0x18;
            temp_r4_34 = arg0->unk7C;
            temp_r0_2 = func_080CC70C(temp_r4_34, func_080CE184(arg0, arg2, 0));
            sp60->unk0 = temp_r0_2->unk0;
            sp60->unk4 = (s32) temp_r0_2->unk4;
            sp60->unk8 = (s32) temp_r0_2->unk8;
            if (((IsEmpty__C9ToolStack(&sp4, sp60 + 0xC) << 0x18) == 0) || ((IsEmpty__C9ToolStack(&sp8) << 0x18) == 0)) {
                if ((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) {
                    temp_r4_35 = arg0->unk100;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_35, func_080CE184(arg0, sp48, 0)), &sp8, 2);
                    temp_r5_20 = GetToolStackAt__9ToolChestUi(arg0->unk104, sp58);
                    __9ToolStack(&sp24);
                    memcpy(temp_r5_20, &sp24, 2);
                    temp_r4_36 = arg0->unk7C;
                    func_080CCDEC(temp_r4_36, func_080CE184(arg0, arg2, 0));
                    var_r8 = arg0->unk78;
                    var_r4_4 = func_080CE184(arg0, sp48, 0);
                    var_r5_3 = sp1C;
                    var_r6_2 = sp20;
                    var_r0_4 = sp60;
                    goto block_46;
                }
                if ((IsEmpty__C9ToolStack(&sp8) << 0x18) != 0) {
                    memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, sp58), &sp4, 2);
                    temp_r4_37 = arg0->unk100;
                    ExtractToolAt__8RucksackUi(&sp24, temp_r4_37, func_080CE184(arg0, sp48, 0));
                    temp_r4_38 = arg0->unk78;
                    func_080CBA60(temp_r4_38, func_080CE184(arg0, sp48, 0));
                    var_r8_2 = arg0->unk7C;
                    goto block_58;
                }
                sp38 = GetTool__C9ToolStack(&sp4);
                temp_r4_39 = GetId__C4Tool();
                sp0.unk39 = GetTool__C9ToolStack(&sp8);
                var_r1_6 = 0;
                if (temp_r4_39 == GetId__C4Tool()) {
                    var_r1_6 = 1;
                }
                if (var_r1_6 == 0) {
                    temp_r4_40 = arg0->unk100;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_40, func_080CE184(arg0, sp48, 0)), &sp8, 2);
                    memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, sp58), &sp4, 2);
                    temp_r8_2 = arg0->unk78;
                    temp_r4_41 = func_080CE184(arg0, sp48, 0);
                    sp0 = func_080CAD14(sp60);
                    func_080CB63C(temp_r8_2, temp_r4_41, sp1C, sp20);
                    var_r8_2 = arg0->unk7C;
block_58:
                    var_r4_5 = func_080CE184(arg0, arg2, 0);
                    var_r5_4 = sp10;
                    var_r6_3 = sp14;
                    var_r0_5 = sp5C;
                    goto block_59;
                }
                temp_r5_21 = 0x63 - GetAmount__C9ToolStack(&sp8);
                if (temp_r5_21 > GetAmount__C9ToolStack(&sp4)) {
                    temp_r4_42 = GetToolStackAt__9ToolChestUi(arg0->unk104, sp58);
                    AddAmount__9ToolStackUi(temp_r4_42, GetAmount__C9ToolStack(&sp4));
                    temp_r4_43 = arg0->unk100;
                    temp_r5_22 = GetToolAt__8RucksackUi(temp_r4_43, func_080CE184(arg0, sp48, 0));
                    __9ToolStack(&sp24);
                    memcpy(temp_r5_22, &sp24, 2);
                    temp_r5_23 = arg0->unk7C;
                    temp_r4_44 = func_080CE184(arg0, arg2, 0);
                    GetToolStackAt__9ToolChestUi(arg0->unk104, sp58);
                    func_080CCD48(temp_r5_23, temp_r4_44, GetAmount__C9ToolStack());
                    goto block_55;
                }
                temp_r4_45 = arg0->unk100;
                SubtractAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_45, func_080CE184(arg0, sp48, 0)), temp_r5_21);
                AddAmount__9ToolStackUi(GetToolStackAt__9ToolChestUi(arg0->unk104, sp58), temp_r5_21);
                temp_r6_9 = arg0->unk78;
                temp_r5_24 = func_080CE184(arg0, sp48, 0);
                temp_r4_46 = arg0->unk100;
                GetToolAt__8RucksackUi(temp_r4_46, func_080CE184(arg0, sp48, 0));
                func_080CB948(temp_r6_9, temp_r5_24, GetAmount__C9ToolStack());
                var_r5_2 = arg0->unk7C;
                var_r4_3 = func_080CE184(arg0, arg2, 0);
                var_r0_2 = arg0->unk104;
                var_r1_5 = sp58;
                goto block_106;
            }
        } else {
            temp_r4_47 = arg0->unk100;
            memcpy(&sp4, GetToolAt__8RucksackUi(temp_r4_47, func_080CE184(arg0, sp48, 0)), 2);
            temp_r4_48 = arg0->unk100;
            memcpy(&sp8, GetToolAt__8RucksackUi(temp_r4_48, func_080CE184(arg0, arg2, 0)), 2);
            sp54 = &sp0 + 0xC;
            temp_r4_49 = arg0->unk78;
            temp_r0_3 = func_080CB2E8(temp_r4_49, func_080CE184(arg0, sp48, 0));
            sp54->unk0 = temp_r0_3->unk0;
            sp54->unk4 = (s32) temp_r0_3->unk4;
            sp54->unk8 = (s32) temp_r0_3->unk8;
            temp_r4_50 = arg0->unk78;
            temp_r0_4 = func_080CB2E8(temp_r4_50, func_080CE184(arg0, arg2, 0));
            sp28.unk0 = temp_r0_4->unk0;
            sp28.unk4 = (s32) temp_r0_4->unk4;
            sp28.unk8 = (s32) temp_r0_4->unk8;
            if (((IsEmpty__C9ToolStack(&sp4, &sp28 + 0xC) << 0x18) == 0) || ((IsEmpty__C9ToolStack(&sp8) << 0x18) == 0)) {
                if ((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) {
                    temp_r4_51 = arg0->unk100;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_51, func_080CE184(arg0, sp48, 0)), &sp8, 2);
                    temp_r4_52 = arg0->unk100;
                    ExtractToolAt__8RucksackUi(&sp18, temp_r4_52, func_080CE184(arg0, arg2, 0));
                    temp_r4_53 = arg0->unk78;
                    func_080CBA60(temp_r4_53, func_080CE184(arg0, arg2, 0));
                    var_r8 = arg0->unk78;
                    var_r4_4 = func_080CE184(arg0, sp48, 0);
                    var_r5_3 = sp2C;
                    var_r6_2 = sp30;
                    var_r0_4 = &sp28;
                    goto block_46;
                }
                if ((IsEmpty__C9ToolStack(&sp8) << 0x18) != 0) {
                    temp_r4_54 = arg0->unk100;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_54, func_080CE184(arg0, arg2, 0)), &sp4, 2);
                    temp_r4_55 = arg0->unk100;
                    ExtractToolAt__8RucksackUi(&sp18, temp_r4_55, func_080CE184(arg0, sp48, 0));
                    temp_r4_56 = arg0->unk78;
                    func_080CBA60(temp_r4_56, func_080CE184(arg0, sp48, 0));
                    var_r8 = arg0->unk78;
                    var_r4_4 = func_080CE184(arg0, arg2, 0);
                    var_r5_3 = sp10;
                    var_r6_2 = sp14;
                    var_r0_4 = sp54;
                    goto block_46;
                }
                sp0.unk36 = GetTool__C9ToolStack(&sp4);
                temp_r4_57 = GetId__C4Tool();
                sp0.unk37 = GetTool__C9ToolStack(&sp8);
                var_r1_7 = 0;
                if (temp_r4_57 == GetId__C4Tool()) {
                    var_r1_7 = 1;
                }
                if (var_r1_7 == 0) {
                    temp_r4_58 = arg0->unk100;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_58, func_080CE184(arg0, sp48, 0)), &sp8, 2);
                    temp_r4_59 = arg0->unk100;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_59, func_080CE184(arg0, arg2, 0)), &sp4, 2);
                    temp_r8_3 = arg0->unk78;
                    temp_r4_60 = func_080CE184(arg0, sp48, 0);
                    sp0 = func_080CAD14(&sp28);
                    func_080CB63C(temp_r8_3, temp_r4_60, sp2C, sp30);
                    var_r8 = arg0->unk78;
                    var_r4_4 = func_080CE184(arg0, arg2, 0);
                    var_r5_3 = sp10;
                    var_r6_2 = sp14;
                    var_r0_4 = sp54;
block_46:
                    sp0 = func_080CAD14(var_r0_4);
                    func_080CB63C(var_r8, var_r4_4, var_r5_3, var_r6_2);
                } else {
                    temp_r5_25 = 0x63 - GetAmount__C9ToolStack(&sp8);
                    if (temp_r5_25 > GetAmount__C9ToolStack(&sp4)) {
                        temp_r4_61 = arg0->unk100;
                        temp_r4_62 = GetToolAt__8RucksackUi(temp_r4_61, func_080CE184(arg0, arg2, 0));
                        AddAmount__9ToolStackUi(temp_r4_62, GetAmount__C9ToolStack(&sp4));
                        temp_r4_63 = arg0->unk100;
                        temp_r5_26 = GetToolAt__8RucksackUi(temp_r4_63, func_080CE184(arg0, sp48, 0));
                        __9ToolStack(&sp18);
                        memcpy(temp_r5_26, &sp18, 2);
                        temp_r6_10 = arg0->unk78;
                        temp_r5_27 = func_080CE184(arg0, arg2, 0);
                        temp_r4_64 = arg0->unk100;
                        GetToolAt__8RucksackUi(temp_r4_64, func_080CE184(arg0, arg2, 0));
                        func_080CB948(temp_r6_10, temp_r5_27, GetAmount__C9ToolStack());
block_55:
                        temp_r4_65 = arg0->unk78;
                        func_080CBA60(temp_r4_65, func_080CE184(arg0, sp48, 0));
                    } else {
                        temp_r4_66 = arg0->unk100;
                        AddAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_66, func_080CE184(arg0, arg2, 0)), temp_r5_25);
                        temp_r4_67 = arg0->unk100;
                        SubtractAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_67, func_080CE184(arg0, sp48, 0)), temp_r5_25);
                        temp_r6_11 = arg0->unk78;
                        temp_r5_28 = func_080CE184(arg0, sp48, 0);
                        temp_r4_68 = arg0->unk100;
                        GetToolAt__8RucksackUi(temp_r4_68, func_080CE184(arg0, sp48, 0));
                        func_080CB948(temp_r6_11, temp_r5_28, GetAmount__C9ToolStack());
                        temp_r6_12 = arg0->unk78;
                        temp_r5_29 = func_080CE184(arg0, arg2, 0);
                        temp_r4_69 = arg0->unk100;
                        GetToolAt__8RucksackUi(temp_r4_69, func_080CE184(arg0, arg2, 0));
                        func_080CB948(temp_r6_12, temp_r5_29, GetAmount__C9ToolStack());
                    }
                }
            }
        }
    } else if (arg2 <= 8) {
        var_r1 = arg2;
        var_r2 = 0;
block_6:
        sp4C = (s32) func_0808F080(arg0, var_r1, var_r2);
    } else {
        temp_r0_5 = func_080CB2FC(arg0->unk78);
        sp4.unk0 = temp_r0_5->unk0;
        sp4.unk4 = (s32) temp_r0_5->unk4;
        sp4.unk8 = (s32) temp_r0_5->unk8;
        temp_r4_70 = arg0->unk7C;
        temp_r0_6 = func_080CC70C(temp_r4_70, func_080CE184(arg0, arg2, 0));
        sp10.unk0 = temp_r0_6->unk0;
        sp10.unk4 = (s32) temp_r0_6->unk4;
        sp10.unk8 = (s32) temp_r0_6->unk8;
        memcpy(&sp1C, arg0->unkFC, 2);
        sp50 = arg0 + 0x94;
        temp_r0_7 = func_080CE184(arg0, arg2, arg0->unk94->unkBC);
        memcpy(&sp20, GetToolStackAt__9ToolChestUi(arg0->unk104, temp_r0_7), 2);
        if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) != 0) {
            func_0808F080(arg0, arg2, (*sp50)->unkBC);
        } else if ((func_080CE1C4(arg0, GetTool__C9ToolStack(&sp1C)) << 0x18) != 0) {
            func_08050DC8(arg0 + 0x80, gUnk_08117B10, 0, 0);
            arg0->unk108 = sp4C;
            sp4C = 0;
        } else {
            var_r1_8 = 0;
            if ((sp14 == 0) || (sp18 == 0)) {
                var_r1_8 = 1;
            }
            if (var_r1_8 != 0) {
                temp_r5_30 = arg0->unkFC;
                __9ToolStack(&sp24);
                memcpy(temp_r5_30, &sp24, 2);
                memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, temp_r0_7), &sp1C, 2);
                func_080CC0B4(arg0->unk78);
                var_r8_2 = arg0->unk7C;
                var_r4_5 = func_080CE184(arg0, arg2, 0);
                var_r5_4 = sp8;
                var_r6_3 = spC;
                var_r0_5 = &sp4;
                goto block_59;
            }
            sp34 = GetTool__C9ToolStack(&sp1C);
            temp_r4_71 = GetId__C4Tool();
            sp0.unk35 = GetTool__C9ToolStack(&sp20);
            var_r1_9 = 0;
            if (temp_r4_71 == GetId__C4Tool()) {
                var_r1_9 = 1;
            }
            if (var_r1_9 != 0) {
                temp_r4_72 = 0x63 - GetAmount__C9ToolStack(&sp20);
                if (temp_r4_72 >= GetAmount__C9ToolStack(&sp1C)) {
                    temp_r4_73 = GetToolStackAt__9ToolChestUi(arg0->unk104, temp_r0_7);
                    AddAmount__9ToolStackUi(temp_r4_73, GetAmount__C9ToolStack(&sp1C));
                    temp_r5_31 = arg0->unkFC;
                    __9ToolStack(&sp24);
                    memcpy(temp_r5_31, &sp24, 2);
                    temp_r5_32 = arg0->unk7C;
                    temp_r4_74 = func_080CE184(arg0, arg2, 0);
                    GetToolStackAt__9ToolChestUi(arg0->unk104, temp_r0_7);
                    func_080CCD48(temp_r5_32, temp_r4_74, GetAmount__C9ToolStack());
                    func_080CC0B4(arg0->unk78);
                } else {
                    AddAmount__9ToolStackUi(GetToolStackAt__9ToolChestUi(arg0->unk104, temp_r0_7), temp_r4_72);
                    SubtractAmount__9ToolStackUi(arg0->unkFC, temp_r4_72);
                    temp_r4_75 = arg0->unk78;
                    func_080CB9DC(temp_r4_75, GetAmount__C9ToolStack(arg0->unkFC));
                    var_r5_2 = arg0->unk7C;
                    var_r4_3 = func_080CE184(arg0, arg2, 0);
                    var_r0_2 = arg0->unk104;
                    var_r1_5 = temp_r0_7;
block_106:
                    GetToolStackAt__9ToolChestUi(var_r0_2, var_r1_5);
                    func_080CCD48(var_r5_2, var_r4_3, GetAmount__C9ToolStack());
                }
            } else {
                memcpy(arg0->unkFC, &sp20, 2);
                memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, temp_r0_7), &sp1C, 2);
                temp_r4_76 = arg0->unk78;
                func_080CBDD4(temp_r4_76, sp14, sp18, func_080CAD14(&sp10));
                var_r8_2 = arg0->unk7C;
                var_r4_5 = func_080CE184(arg0, arg2, 0);
                var_r5_4 = sp8;
                var_r6_3 = spC;
                var_r0_5 = &sp4;
block_59:
                sp0 = func_080CAD14(var_r0_5);
                func_080CCA40(var_r8_2, var_r4_5, var_r5_4, var_r6_3);
            }
        }
    }
    return sp4C;
}

