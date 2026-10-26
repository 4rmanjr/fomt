#include "common.h"
s32 AddAmount__9ToolStackUi(s32 *, u32);              /* extern */
s32 ExtractToolAt__8RucksackUi(s32 *, s32, s32);      /* extern */
u32 GetAmount__C9ToolStack(s32 *);                  /* extern */
u16 GetIconId__C4Tool();                            /* extern */
s32 GetId__C4Tool();                                /* extern */
s32 *GetToolAt__8RucksackUi(s32, s32);              /* extern */
s32 *GetToolStackAt__9ToolChestUi(s32, s32);        /* extern */
s8 GetTool__C9ToolStack(s32 *);                     /* extern */
s32 IsEmpty__C9ToolStack(s32 *);                    /* extern */
s32 SubtractAmount__9ToolStackUi(s32 *, u32);         /* extern */
s32 __9ToolStack(s32 *);                              /* extern */
s8 func_0800E550(s32, s8);                          /* extern */
s32 func_08050DC8(void *, s32, s32, s32);             /* extern */
u32 func_080CAD14(s32 *);                           /* extern */
void *func_080CB2E8(s32, s32);                      /* extern */
void *func_080CB2FC(s32);                           /* extern */
s32 func_080CB63C(s32, s32, s32, s32);                /* extern */
s32 func_080CB948(s32, s32, u32);                     /* extern */
s32 func_080CB9DC(s32, u32);                          /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CBAF0(s32, ? *, u16, u32);                /* extern */
s32 func_080CBDD4(s32, s32, s32, u32);                /* extern */
s32 func_080CC0B4(s32);                               /* extern */
s32 func_080CC728(s32, s32, ? *, u16);                /* extern */
s32 func_080CCD48(s32, s32, u32);                     /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 func_080CE1C4(void *, s8);                      /* extern */
s32 func_080CF054(s32);                             /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
extern s32 gUnk_08117B10;
extern ? gUnk_086678A0;

u8 func_0808F080(void *arg0, s32 arg1, s32 arg2) {
    u32 sp0;
    s32 sp4;
    s32 sp8;
    s32 sp10;
    s32 sp14;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s8 sp2C;
    s8 sp30;
    s32 sp34;
    s32 sp38;
    s32 *sp3C;
    s32 sp40;
    s32 *temp_r4_26;
    s32 *temp_r4_6;
    s32 *temp_r5;
    s32 *temp_r5_10;
    s32 *temp_r5_5;
    s32 *temp_r5_6;
    s32 *temp_r6_6;
    s32 *var_r0;
    s32 *var_r1_2;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_15;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_23;
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
    s32 temp_r4_4;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_12;
    s32 temp_r5_13;
    s32 temp_r5_2;
    s32 temp_r5_4;
    s32 temp_r5_7;
    s32 temp_r5_8;
    s32 temp_r5_9;
    s32 temp_r6_2;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 var_r1;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s8 temp_r4_13;
    s8 temp_r5_3;
    s8 temp_r6;
    s8 temp_r6_3;
    u16 temp_r4;
    u16 temp_r4_14;
    u16 temp_r4_16;
    u16 temp_r4_3;
    u32 temp_r4_5;
    u32 temp_r5_11;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    sp34 = arg2;
    sp38 = 1;
    if (arg1 == 0) {

    } else if (arg1 > 8) {
        sp40 = func_080CE184(arg0, arg1, sp34);
        memcpy(&sp4, GetToolStackAt__9ToolChestUi(arg0->unk104, sp40), 2);
        if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) != 0) {
            if ((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) {

            } else {
                temp_r6 = GetTool__C9ToolStack(&sp4);
                memcpy(arg0->unkFC, &sp4, 2);
                temp_r5 = GetToolStackAt__9ToolChestUi(arg0->unk104, sp40);
                __9ToolStack(&sp8);
                memcpy(temp_r5, &sp8, 2);
                sp0.unk2E = func_0800E550(arg0->unk8 + 0x1BD8, temp_r6);
                temp_r4 = GetIconId__C4Tool();
                temp_r5_2 = arg0->unk78;
                func_080CBAF0(temp_r5_2, &gUnk_086678A0, temp_r4, GetAmount__C9ToolStack(&sp4));
                if (arg0->unk94->unkBC != sp34) {

                } else {
                    goto block_42;
                }
            }
        } else if ((func_080CE1C4(arg0, GetTool__C9ToolStack(arg0->unkFC)) << 0x18) != 0) {
            func_08050DC8(arg0 + 0x80, gUnk_08117B10, 0, 0);
            arg0->unk108 = sp38;
            sp38 = 0;
        } else if ((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) {
            temp_r5_3 = GetTool__C9ToolStack(arg0->unkFC);
            func_080CC0B4(arg0->unk78);
            temp_r4_2 = arg0->unk94->unkBC;
            if (temp_r4_2 == func_080CF054(arg0->unk90)) {
                sp0.unk33 = func_0800E550(arg0->unk8 + 0x1BD8, temp_r5_3);
                temp_r4_3 = GetIconId__C4Tool();
                temp_r6_2 = arg0->unk7C;
                temp_r5_4 = func_080CE184(arg0, arg1, 0);
                sp0 = GetAmount__C9ToolStack(arg0->unkFC);
                func_080CC728(temp_r6_2, temp_r5_4, &gUnk_086678A0, temp_r4_3);
            }
            memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, sp40), arg0->unkFC, 2);
            temp_r5_5 = arg0->unkFC;
            __9ToolStack(&sp8);
            memcpy(temp_r5_5, &sp8, 2);
        } else {
            sp0.unk2F = GetTool__C9ToolStack(&sp4);
            temp_r4_4 = GetId__C4Tool();
            sp30 = GetTool__C9ToolStack(arg0->unkFC);
            var_r1 = 0;
            if (temp_r4_4 == GetId__C4Tool()) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {
                temp_r4_5 = 0x63 - GetAmount__C9ToolStack(arg0->unkFC);
                if (temp_r4_5 >= GetAmount__C9ToolStack(&sp4)) {
                    temp_r4_6 = arg0->unkFC;
                    AddAmount__9ToolStackUi(temp_r4_6, GetAmount__C9ToolStack(&sp4));
                    temp_r5_6 = GetToolStackAt__9ToolChestUi(arg0->unk104, sp40);
                    __9ToolStack(&sp8);
                    memcpy(temp_r5_6, &sp8, 2);
                    temp_r4_7 = arg0->unk78;
                    func_080CB9DC(temp_r4_7, GetAmount__C9ToolStack(arg0->unkFC));
                    temp_r4_8 = arg0->unk94->unkBC;
                    if (temp_r4_8 != func_080CF054(arg0->unk90)) {

                    } else {
block_42:
                        temp_r4_9 = arg0->unk7C;
                        func_080CCDEC(temp_r4_9, func_080CE184(arg0, arg1, 0));
                    }
                } else {
                    AddAmount__9ToolStackUi(arg0->unkFC, temp_r4_5);
                    SubtractAmount__9ToolStackUi(GetToolStackAt__9ToolChestUi(arg0->unk104, sp40), temp_r4_5);
                    temp_r4_10 = arg0->unk78;
                    func_080CB9DC(temp_r4_10, GetAmount__C9ToolStack(arg0->unkFC));
                    temp_r4_11 = arg0->unk94->unkBC;
                    if (temp_r4_11 != func_080CF054(arg0->unk90)) {

                    } else {
                        temp_r5_7 = arg0->unk7C;
                        temp_r4_12 = func_080CE184(arg0, arg1, 0);
                        GetToolStackAt__9ToolChestUi(arg0->unk104, sp40);
                        func_080CCD48(temp_r5_7, temp_r4_12, GetAmount__C9ToolStack());
                    }
                }
            } else {
                temp_r4_13 = GetTool__C9ToolStack(&sp4);
                temp_r6_3 = GetTool__C9ToolStack(arg0->unkFC);
                sp0.unk31 = func_0800E550(arg0->unk8 + 0x1BD8, temp_r4_13);
                temp_r4_14 = GetIconId__C4Tool();
                temp_r5_8 = arg0->unk78;
                func_080CBAF0(temp_r5_8, &gUnk_086678A0, temp_r4_14, GetAmount__C9ToolStack(&sp4));
                temp_r4_15 = arg0->unk94->unkBC;
                if (temp_r4_15 == func_080CF054(arg0->unk90)) {
                    sp0.unk32 = func_0800E550(arg0->unk8 + 0x1BD8, temp_r6_3);
                    temp_r4_16 = GetIconId__C4Tool();
                    temp_r6_4 = arg0->unk7C;
                    temp_r5_9 = func_080CE184(arg0, arg1, 0);
                    sp0 = GetAmount__C9ToolStack(arg0->unkFC);
                    func_080CC728(temp_r6_4, temp_r5_9, &gUnk_086678A0, temp_r4_16);
                }
                memcpy(GetToolStackAt__9ToolChestUi(arg0->unk104, sp40), arg0->unkFC, 2);
                var_r0 = arg0->unkFC;
                var_r1_2 = &sp4;
                goto block_49;
            }
        }
    } else if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) != 0) {
        temp_r4_17 = arg0->unk78;
        temp_r0 = func_080CB2E8(temp_r4_17, func_080CE184(arg0, arg1, 0));
        sp4.unk0 = temp_r0->unk0;
        sp4.unk4 = (s32) temp_r0->unk4;
        sp4.unk8 = (s32) temp_r0->unk8;
        var_r1_3 = 0;
        if ((sp8 == 0) || (spC == 0)) {
            var_r1_3 = 1;
        }
        if (var_r1_3 != 0) {

        } else {
            temp_r4_18 = arg0->unk78;
            func_080CBDD4(temp_r4_18, sp8, spC, func_080CAD14(&sp4));
            temp_r4_19 = arg0->unk78;
            func_080CBA60(temp_r4_19, func_080CE184(arg0, arg1, 0));
            temp_r4_20 = arg0->unk100;
            ExtractToolAt__8RucksackUi(&sp10, temp_r4_20, func_080CE184(arg0, arg1, 0));
            var_r0 = arg0->unkFC;
            var_r1_2 = &sp10;
            goto block_49;
        }
    } else {
        temp_r0_2 = func_080CB2FC(arg0->unk78);
        sp4.unk0 = temp_r0_2->unk0;
        sp4.unk4 = (s32) temp_r0_2->unk4;
        sp4.unk8 = (s32) temp_r0_2->unk8;
        temp_r4_21 = arg0->unk78;
        temp_r0_3 = func_080CB2E8(temp_r4_21, func_080CE184(arg0, arg1, 0));
        sp14.unk0 = temp_r0_3->unk0;
        sp14.unk4 = (s32) temp_r0_3->unk4;
        sp14.unk8 = (s32) temp_r0_3->unk8;
        memcpy(&sp20, arg0->unkFC, 2);
        if ((func_080CE1C4(arg0, GetTool__C9ToolStack(&sp20)) << 0x18) != 0) {
            func_08050DC8(arg0 + 0x80, gUnk_08117B10, 0, 0);
            arg0->unk108 = sp38;
            sp38 = 0;
        } else {
            var_r1_4 = 0;
            if ((sp18 == 0) || (sp1C == 0)) {
                var_r1_4 = 1;
            }
            if (var_r1_4 != 0) {
                func_080CC0B4(arg0->unk78);
                temp_r8 = arg0->unk78;
                temp_r4_22 = func_080CE184(arg0, arg1, 0);
                sp0 = func_080CAD14(&sp4);
                func_080CB63C(temp_r8, temp_r4_22, sp8, spC);
                temp_r4_23 = arg0->unk100;
                memcpy(GetToolAt__8RucksackUi(temp_r4_23, func_080CE184(arg0, arg1, 0)), arg0->unkFC, 2);
                temp_r5_10 = arg0->unkFC;
                __9ToolStack(&sp24);
                var_r0 = temp_r5_10;
                var_r1_2 = &sp24;
                goto block_49;
            }
            sp3C = arg0 + 0x100;
            temp_r4_24 = arg0->unk100;
            memcpy(&sp24, GetToolAt__8RucksackUi(temp_r4_24, func_080CE184(arg0, arg1, 0)), 2);
            sp2C = GetTool__C9ToolStack(&sp20);
            temp_r4_25 = GetId__C4Tool();
            sp0.unk2D = GetTool__C9ToolStack(&sp24);
            var_r1_5 = 0;
            if (temp_r4_25 == GetId__C4Tool()) {
                var_r1_5 = 1;
            }
            if (var_r1_5 != 0) {
                temp_r5_11 = 0x63 - GetAmount__C9ToolStack(&sp20);
                if (temp_r5_11 >= GetAmount__C9ToolStack(&sp24)) {
                    temp_r4_26 = arg0->unkFC;
                    AddAmount__9ToolStackUi(temp_r4_26, GetAmount__C9ToolStack(&sp24));
                    temp_r4_27 = *sp3C;
                    ExtractToolAt__8RucksackUi(&sp28, temp_r4_27, func_080CE184(arg0, arg1, 0));
                    temp_r4_28 = arg0->unk78;
                    func_080CB9DC(temp_r4_28, GetAmount__C9ToolStack(arg0->unkFC));
                    temp_r4_29 = arg0->unk78;
                    func_080CBA60(temp_r4_29, func_080CE184(arg0, arg1, 0));
                } else {
                    AddAmount__9ToolStackUi(arg0->unkFC, temp_r5_11);
                    temp_r4_30 = *sp3C;
                    SubtractAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_30, func_080CE184(arg0, arg1, 0)), temp_r5_11);
                    temp_r4_31 = arg0->unk78;
                    func_080CB9DC(temp_r4_31, GetAmount__C9ToolStack(arg0->unkFC));
                    temp_r6_5 = arg0->unk78;
                    temp_r5_12 = func_080CE184(arg0, arg1, 0);
                    temp_r4_32 = *sp3C;
                    GetToolAt__8RucksackUi(temp_r4_32, func_080CE184(arg0, arg1, 0));
                    func_080CB948(temp_r6_5, temp_r5_12, GetAmount__C9ToolStack());
                }
            } else {
                temp_r4_33 = arg0->unk78;
                func_080CBDD4(temp_r4_33, sp18, sp1C, func_080CAD14(&sp14));
                temp_r8_2 = arg0->unk78;
                temp_r4_34 = func_080CE184(arg0, arg1, 0);
                sp0 = func_080CAD14(&sp4);
                func_080CB63C(temp_r8_2, temp_r4_34, sp8, spC);
                temp_r6_6 = arg0->unkFC;
                temp_r5_13 = *sp3C;
                ExtractToolAt__8RucksackUi(&sp28, temp_r5_13, func_080CE184(arg0, arg1, 0));
                memcpy(temp_r6_6, &sp28, 2);
                temp_r4_35 = *sp3C;
                var_r0 = GetToolAt__8RucksackUi(temp_r4_35, func_080CE184(arg0, arg1, 0));
                var_r1_2 = &sp20;
block_49:
                memcpy(var_r0, var_r1_2, 2);
            }
        }
    }
    return sp38;
}

