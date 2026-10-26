s32 AddAmount__9ToolStackUi(s32 *, u32);              /* extern */
s32 ExtractToolAt__8RucksackUi(s32 *, s32, s32);      /* extern */
u32 GetAmount__C9ToolStack(s32 *);                  /* extern */
s32 GetId__C4Tool();                                /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 *GetToolAt__8RucksackUi(s32, s32);              /* extern */
s8 GetTool__C9ToolStack(s32 *);                     /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 IsEmpty__C9ToolStack(s32 *, s32);               /* extern */
s32 SubtractAmount__9ToolStackUi(s32 *, u32);         /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 __9ToolStack(s32 *);                              /* extern */
s32 func_08050DC8(void *, s32, s32, s32);             /* extern */
u8 func_0808AC28(void *, s32);                      /* extern */
s32 func_080CAD14(s32 *);                           /* extern */
void *func_080CB2E8(s32, s32);                      /* extern */
void *func_080CB2FC(s32);                           /* extern */
s32 func_080CB63C(s32, s32, s32, s32);                /* extern */
s32 func_080CB948(s32, s32, u32);                     /* extern */
s32 func_080CB9DC(s32, u32);                          /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CBDD4(s32, s32, s32, s32);                /* extern */
s32 func_080CC0B4(s32);                               /* extern */
void *func_080CC70C(s32, s32);                      /* extern */
s32 func_080CCA40(s32, s32, s32, s32);                /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 func_080CE1C4(void *, s8);                      /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
extern s32 gUnk_08117B10;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 _padC[41];
    s32 unk35;
    s32 unk36;
    s32 unk37;
    u8 _pad3B[61];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[124];
    s32 unkFC;
    u8 _pad100[4];
    s32 unk104;
    s32 unk108;
} GenObj;
u8 func_0808B16C(GenObj *arg0, s32 arg1, s32 arg2) {
    GenObj *sp0;
    s32 sp4;
    s32 sp8;
    s32 sp10;
    s32 sp14;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s8 sp34;
    s32 sp38;
    s32 *sp3C;
    s32 *sp40;
    s32 **sp44;
    s32 *temp_r4_10;
    s32 *temp_r4_33;
    s32 *temp_r4_50;
    s32 *temp_r4_6;
    s32 *temp_r5_3;
    s32 *temp_r5_6;
    s32 *temp_r5_8;
    s32 *temp_r6_4;
    s32 *var_r0;
    s32 *var_r0_2;
    s32 *var_r0_3;
    s32 *var_r1_4;
    s32 temp_r0_5;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r4;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_29;
    s32 temp_r4_2;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_38;
    s32 temp_r4_39;
    s32 temp_r4_3;
    s32 temp_r4_40;
    s32 temp_r4_41;
    s32 temp_r4_42;
    s32 temp_r4_43;
    s32 temp_r4_44;
    s32 temp_r4_45;
    s32 temp_r4_46;
    s32 temp_r4_47;
    s32 temp_r4_48;
    s32 temp_r4_49;
    s32 temp_r4_4;
    s32 temp_r4_51;
    s32 temp_r4_52;
    s32 temp_r4_53;
    s32 temp_r4_54;
    s32 temp_r4_55;
    s32 temp_r4_56;
    s32 temp_r4_57;
    s32 temp_r4_5;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_10;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_9;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_r8_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r8;
    u32 temp_r5_2;
    u32 temp_r5_7;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_6;
    GenObj *temp_r0_7;
    GenObj *temp_r0_8;

    sp38 = 1;
    if ((arg2 == 0) || (arg2 == 9)) {
        var_r1 = arg1;
        goto block_51;
    }
    if (arg1 != 0) {
        if (arg1 == 9) {
            goto block_50;
        }
        if (arg1 > 8) {
            if (arg1 == 9) {
block_50:
                var_r1 = arg2;
block_51:
                sp38 = (s32) func_0808AC28(arg0, var_r1);
            } else {
                temp_r4 = arg0->unk7C;
                temp_r0 = func_080CC70C(temp_r4, func_080CE184(arg0, arg1, 0));
                sp4 = temp_r0->unk0;
                sp4.unk4 = (s32) temp_r0->unk4;
                sp4.unk8 = (s32) temp_r0->unk8;
                temp_r5 = arg0->unk7C;
                temp_r0_2 = func_080CC70C(temp_r5, func_080CE184(arg0, arg2, 0));
                sp10 = temp_r0_2->unk0;
                sp10.unk4 = (s32) temp_r0_2->unk4;
                sp10.unk8 = (s32) temp_r0_2->unk8;
                temp_r4_2 = arg0->unk104;
                sp1C = *GetItemAt__8RucksackUi(temp_r4_2, func_080CE184(arg0, arg1, 0));
                temp_r4_3 = arg0->unk104;
                sp20 = *GetItemAt__8RucksackUi(temp_r4_3, func_080CE184(arg0, arg2, 0));
                if (((IsEmpty__C12RucksackItem(&sp1C) << 0x18) != 0) && ((IsEmpty__C12RucksackItem(&sp20) << 0x18) != 0)) {

                } else if ((IsEmpty__C12RucksackItem(&sp1C) << 0x18) != 0) {
                    temp_r4_4 = arg0->unk104;
                    *GetItemAt__8RucksackUi(temp_r4_4, func_080CE184(arg0, arg1, 0)) = sp20;
                    temp_r4_5 = arg0->unk104;
                    temp_r4_6 = GetItemAt__8RucksackUi(temp_r4_5, func_080CE184(arg0, arg2, 0));
                    __12RucksackItem(&sp30);
                    *temp_r4_6 = sp30;
                    temp_r4_7 = arg0->unk7C;
                    temp_r1 = func_080CE184(arg0, arg1, 0);
                    sp0 = sp38;
                    func_080CCA40(temp_r4_7, temp_r1, sp14, sp18);
                    temp_r4_8 = arg0->unk7C;
                    func_080CCDEC(temp_r4_8, func_080CE184(arg0, arg2, 0));
                } else if ((IsEmpty__C12RucksackItem(&sp20) << 0x18) != 0) {
                    temp_r4_9 = arg0->unk104;
                    temp_r4_10 = GetItemAt__8RucksackUi(temp_r4_9, func_080CE184(arg0, arg1, 0));
                    __12RucksackItem(&sp30);
                    *temp_r4_10 = sp30;
                    temp_r4_11 = arg0->unk104;
                    *GetItemAt__8RucksackUi(temp_r4_11, func_080CE184(arg0, arg2, 0)) = sp1C;
                    temp_r4_12 = arg0->unk7C;
                    func_080CCDEC(temp_r4_12, func_080CE184(arg0, arg1, 0));
                    temp_r4_13 = arg0->unk7C;
                    temp_r1_2 = func_080CE184(arg0, arg2, 0);
                    sp0 = sp38;
                    func_080CCA40(temp_r4_13, temp_r1_2, sp8, spC);
                } else {
                    temp_r4_14 = arg0->unk104;
                    *GetItemAt__8RucksackUi(temp_r4_14, func_080CE184(arg0, arg1, 0)) = sp20;
                    temp_r4_15 = arg0->unk104;
                    *GetItemAt__8RucksackUi(temp_r4_15, func_080CE184(arg0, arg2, 0)) = sp1C;
                    temp_r4_16 = arg0->unk7C;
                    temp_r1_3 = func_080CE184(arg0, arg1, 0);
                    sp0 = sp38;
                    func_080CCA40(temp_r4_16, temp_r1_3, sp14, sp18);
                    temp_r4_17 = arg0->unk7C;
                    temp_r1_4 = func_080CE184(arg0, arg2, 0);
                    sp0 = sp38;
                    func_080CCA40(temp_r4_17, temp_r1_4, sp8, spC);
                }
            }
        } else {
            temp_r4_18 = arg0->unk104;
            memcpy(&sp4, GetToolAt__8RucksackUi(temp_r4_18, func_080CE184(arg0, arg1, 0)), 2);
            temp_r4_19 = arg0->unk104;
            memcpy(&sp8, GetToolAt__8RucksackUi(temp_r4_19, func_080CE184(arg0, arg2, 0)), 2);
            sp3C = &(GenObj *)((u8 *)sp0 + 0xC);
            temp_r4_20 = arg0->unk78;
            temp_r0_3 = func_080CB2E8(temp_r4_20, func_080CE184(arg0, arg1, 0));
            sp3C->unk0 = temp_r0_3->unk0;
            sp3C->unk4 = (s32) temp_r0_3->unk4;
            sp3C->unk8 = (s32) temp_r0_3->unk8;
            sp40 = &(GenObj *)((u8 *)sp0 + 0x18);
            temp_r4_21 = arg0->unk78;
            temp_r0_4 = func_080CB2E8(temp_r4_21, func_080CE184(arg0, arg2, 0));
            sp40->unk0 = temp_r0_4->unk0;
            sp40->unk4 = (s32) temp_r0_4->unk4;
            sp40->unk8 = (s32) temp_r0_4->unk8;
            if (((IsEmpty__C9ToolStack(&sp4, (GenObj *)((u8 *)sp40 + 0xC)) << 0x18) != 0) && ((IsEmpty__C9ToolStack(&sp8) << 0x18) != 0)) {

            } else {
                if ((IsEmpty__C9ToolStack(&sp4) << 0x18) != 0) {
                    temp_r4_22 = arg0->unk104;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_22, func_080CE184(arg0, arg1, 0)), &sp8, 2);
                    temp_r4_23 = arg0->unk104;
                    ExtractToolAt__8RucksackUi(&sp2C, temp_r4_23, func_080CE184(arg0, arg2, 0));
                    temp_r4_24 = arg0->unk78;
                    func_080CBA60(temp_r4_24, func_080CE184(arg0, arg2, 0));
                    var_r8 = arg0->unk78;
                    var_r4 = func_080CE184(arg0, arg1, 0);
                    var_r5 = sp1C;
                    var_r6 = sp20;
                    var_r0 = sp40;
                    goto block_48;
                }
                if ((IsEmpty__C9ToolStack(&sp8) << 0x18) != 0) {
                    temp_r4_25 = arg0->unk104;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_25, func_080CE184(arg0, arg2, 0)), &sp4, 2);
                    temp_r4_26 = arg0->unk104;
                    ExtractToolAt__8RucksackUi(&sp2C, temp_r4_26, func_080CE184(arg0, arg1, 0));
                    temp_r4_27 = arg0->unk78;
                    func_080CBA60(temp_r4_27, func_080CE184(arg0, arg1, 0));
                    var_r8 = arg0->unk78;
                    goto block_47;
                }
                sp0.unk36 = GetTool__C9ToolStack(&sp4);
                temp_r4_28 = GetId__C4Tool();
                sp0.unk37 = GetTool__C9ToolStack(&sp8);
                var_r1_2 = 0;
                if (temp_r4_28 == GetId__C4Tool()) {
                    var_r1_2 = 1;
                }
                if (var_r1_2 == 0) {
                    temp_r4_29 = arg0->unk104;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_29, func_080CE184(arg0, arg1, 0)), &sp8, 2);
                    temp_r4_30 = arg0->unk104;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_30, func_080CE184(arg0, arg2, 0)), &sp4, 2);
                    temp_r8 = arg0->unk78;
                    temp_r4_31 = func_080CE184(arg0, arg1, 0);
                    sp0 = func_080CAD14(sp40);
                    func_080CB63C(temp_r8, temp_r4_31, sp1C, sp20);
                    var_r8 = arg0->unk78;
block_47:
                    var_r4 = func_080CE184(arg0, arg2, 0);
                    var_r5 = sp10;
                    var_r6 = sp14;
                    var_r0 = sp3C;
block_48:
                    sp0 = func_080CAD14(var_r0);
                    func_080CB63C(var_r8, var_r4, var_r5, var_r6);
                } else {
                    temp_r5_2 = 0x63 - GetAmount__C9ToolStack(&sp8);
                    if (temp_r5_2 > GetAmount__C9ToolStack(&sp4)) {
                        temp_r4_32 = arg0->unk104;
                        temp_r4_33 = GetToolAt__8RucksackUi(temp_r4_32, func_080CE184(arg0, arg2, 0));
                        AddAmount__9ToolStackUi(temp_r4_33, GetAmount__C9ToolStack(&sp4));
                        temp_r4_34 = arg0->unk104;
                        temp_r5_3 = GetToolAt__8RucksackUi(temp_r4_34, func_080CE184(arg0, arg1, 0));
                        __9ToolStack(&sp2C);
                        memcpy(temp_r5_3, &sp2C, 2);
                        temp_r6 = arg0->unk78;
                        temp_r5_4 = func_080CE184(arg0, arg2, 0);
                        temp_r4_35 = arg0->unk104;
                        GetToolAt__8RucksackUi(temp_r4_35, func_080CE184(arg0, arg2, 0));
                        func_080CB948(temp_r6, temp_r5_4, GetAmount__C9ToolStack());
                        temp_r4_36 = arg0->unk78;
                        func_080CBA60(temp_r4_36, func_080CE184(arg0, arg1, 0));
                    } else {
                        temp_r4_37 = arg0->unk104;
                        AddAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_37, func_080CE184(arg0, arg2, 0)), temp_r5_2);
                        temp_r4_38 = arg0->unk104;
                        SubtractAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_38, func_080CE184(arg0, arg1, 0)), temp_r5_2);
                        temp_r6_2 = arg0->unk78;
                        temp_r5_5 = func_080CE184(arg0, arg1, 0);
                        temp_r4_39 = arg0->unk104;
                        GetToolAt__8RucksackUi(temp_r4_39, func_080CE184(arg0, arg1, 0));
                        func_080CB948(temp_r6_2, temp_r5_5, GetAmount__C9ToolStack());
                        var_r6_2 = arg0->unk78;
                        var_r5_2 = func_080CE184(arg0, arg2, 0);
                        var_r0_2 = (GenObj *)((u8 *)arg0 + 0x104);
                        goto block_45;
                    }
                }
            }
        }
    } else {
        temp_r0_5 = IsEmpty__C9ToolStack(arg0->unkFC) << 0x18;
        sp44 = (GenObj *)((u8 *)arg0 + 0xFC);
        if (temp_r0_5 != 0) {
            temp_r4_40 = arg0->unk78;
            temp_r0_6 = func_080CB2E8(temp_r4_40, func_080CE184(arg0, arg2, 0));
            sp4 = temp_r0_6->unk0;
            sp4.unk4 = (s32) temp_r0_6->unk4;
            sp4.unk8 = (s32) temp_r0_6->unk8;
            var_r1_3 = 0;
            if ((sp8 == 0) || (spC == 0)) {
                var_r1_3 = 1;
            }
            if (var_r1_3 == 0) {
                temp_r4_41 = arg0->unk78;
                func_080CBDD4(temp_r4_41, sp8, spC, func_080CAD14(&sp4));
                temp_r4_42 = arg0->unk78;
                func_080CBA60(temp_r4_42, func_080CE184(arg0, arg2, 0));
                temp_r4_43 = arg0->unk104;
                ExtractToolAt__8RucksackUi(&sp10, temp_r4_43, func_080CE184(arg0, arg2, 0));
                var_r0_3 = *sp44;
                var_r1_4 = &sp10;
                goto block_26;
            }
        } else {
            temp_r0_7 = func_080CB2FC(arg0->unk78);
            sp4 = temp_r0_7->unk0;
            sp4.unk4 = (s32) temp_r0_7->unk4;
            sp4.unk8 = (s32) temp_r0_7->unk8;
            temp_r4_44 = arg0->unk78;
            temp_r0_8 = func_080CB2E8(temp_r4_44, func_080CE184(arg0, arg2, 0));
            sp14 = temp_r0_8->unk0;
            sp14.unk4 = (s32) temp_r0_8->unk4;
            sp14.unk8 = (s32) temp_r0_8->unk8;
            memcpy(&sp20, *sp44, 2);
            if ((func_080CE1C4(arg0, GetTool__C9ToolStack(&sp20)) << 0x18) != 0) {
                func_08050DC8((GenObj *)((u8 *)arg0 + 0x80), gUnk_08117B10, 0, 0);
                arg0->unk108 = 2;
                sp38 = 0;
            } else {
                var_r1_5 = 0;
                if ((sp18 == 0) || (sp1C == 0)) {
                    var_r1_5 = 1;
                }
                if (var_r1_5 != 0) {
                    func_080CC0B4(arg0->unk78);
                    temp_r8_2 = arg0->unk78;
                    temp_r4_45 = func_080CE184(arg0, arg2, 0);
                    sp0 = func_080CAD14(&sp4);
                    func_080CB63C(temp_r8_2, temp_r4_45, sp8, spC);
                    temp_r4_46 = arg0->unk104;
                    memcpy(GetToolAt__8RucksackUi(temp_r4_46, func_080CE184(arg0, arg2, 0)), *sp44, 2);
                    temp_r5_6 = *sp44;
                    __9ToolStack(&sp24);
                    var_r0_3 = temp_r5_6;
                    var_r1_4 = &sp24;
                    goto block_26;
                }
                temp_r4_47 = arg0->unk104;
                memcpy(&sp24, GetToolAt__8RucksackUi(temp_r4_47, func_080CE184(arg0, arg2, 0)), 2);
                sp34 = GetTool__C9ToolStack(&sp20);
                temp_r4_48 = GetId__C4Tool();
                sp0.unk35 = GetTool__C9ToolStack(&sp24);
                var_r1_6 = 0;
                if (temp_r4_48 == GetId__C4Tool()) {
                    var_r1_6 = 1;
                }
                if (var_r1_6 != 0) {
                    temp_r5_7 = 0x63 - GetAmount__C9ToolStack(&sp24);
                    if (temp_r5_7 >= GetAmount__C9ToolStack(&sp20)) {
                        temp_r4_49 = arg0->unk104;
                        temp_r4_50 = GetToolAt__8RucksackUi(temp_r4_49, func_080CE184(arg0, arg2, 0));
                        AddAmount__9ToolStackUi(temp_r4_50, GetAmount__C9ToolStack(&sp20));
                        temp_r5_8 = *sp44;
                        __9ToolStack(&sp28);
                        memcpy(temp_r5_8, &sp28, 2);
                        temp_r6_3 = arg0->unk78;
                        temp_r5_9 = func_080CE184(arg0, arg2, 0);
                        temp_r4_51 = arg0->unk104;
                        GetToolAt__8RucksackUi(temp_r4_51, func_080CE184(arg0, arg2, 0));
                        func_080CB948(temp_r6_3, temp_r5_9, GetAmount__C9ToolStack());
                        func_080CC0B4(arg0->unk78);
                    } else {
                        temp_r4_52 = arg0->unk104;
                        AddAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_52, func_080CE184(arg0, arg2, 0)), temp_r5_7);
                        SubtractAmount__9ToolStackUi(*sp44, temp_r5_7);
                        temp_r4_53 = arg0->unk78;
                        func_080CB9DC(temp_r4_53, GetAmount__C9ToolStack(*sp44));
                        var_r6_2 = arg0->unk78;
                        var_r5_2 = func_080CE184(arg0, arg2, 0);
                        var_r0_2 = (GenObj *)((u8 *)arg0 + 0x104);
block_45:
                        temp_r4_54 = *var_r0_2;
                        GetToolAt__8RucksackUi(temp_r4_54, func_080CE184(arg0, arg2, 0));
                        func_080CB948(var_r6_2, var_r5_2, GetAmount__C9ToolStack());
                    }
                } else {
                    temp_r4_55 = arg0->unk78;
                    func_080CBDD4(temp_r4_55, sp18, sp1C, func_080CAD14(&sp14));
                    temp_r8_3 = arg0->unk78;
                    temp_r4_56 = func_080CE184(arg0, arg2, 0);
                    sp0 = func_080CAD14(&sp4);
                    func_080CB63C(temp_r8_3, temp_r4_56, sp8, spC);
                    temp_r6_4 = *sp44;
                    temp_r5_10 = arg0->unk104;
                    ExtractToolAt__8RucksackUi(&sp28, temp_r5_10, func_080CE184(arg0, arg2, 0));
                    memcpy(temp_r6_4, &sp28, 2);
                    temp_r4_57 = arg0->unk104;
                    var_r0_3 = GetToolAt__8RucksackUi(temp_r4_57, func_080CE184(arg0, arg2, 0));
                    var_r1_4 = &sp20;
block_26:
                    memcpy(var_r0_3, var_r1_4, 2);
                }
            }
        }
    }
    return sp38;
}
