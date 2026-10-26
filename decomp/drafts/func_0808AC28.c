s32 AddAmount__9ToolStackUi(s32 *, u32);              /* extern */
s32 ExtractItemAt__8RucksackUi(s32 *, s32, s32);      /* extern */
s32 ExtractToolAt__8RucksackUi(s32 *, s32, s32);      /* extern */
u32 GetAmount__C9ToolStack(s32 *);                  /* extern */
s32 GetId__C4Tool();                                /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 *GetToolAt__8RucksackUi(s32, s32);              /* extern */
s8 GetTool__C9ToolStack(s32 *);                     /* extern */
s32 IsEmpty__C9ToolStack(s32 *);                    /* extern */
s32 SubtractAmount__9ToolStackUi(s32 *, u32);         /* extern */
s32 __9ToolStack(s32 *);                              /* extern */
s32 func_0800F190(s32);                             /* extern */
u32 func_0800F204(s32);                             /* extern */
s32 func_0800F294(s32 *, s32);                        /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_0800F418(s32);                               /* extern */
s32 func_08050DC8(void *, s32, s32, s32);             /* extern */
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
void *func_080CC720(s32, s32);                      /* extern */
s32 func_080CCA40(s32, s32, s32, s32);                /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CD14C(s32, s32, s32, s32);                /* extern */
s32 func_080CD4D4(s32);                               /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 func_080CE1C4(void *, s8);                      /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
extern s32 gUnk_08117B10;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 _padC[37];
    s32 unk31;
    u8 _pad35[67];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[124];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
    s32 unk108;
} GenObj;
u8 func_0808AC28(GenObj *arg0, s32 arg1) {
    GenObj *sp0;
    s32 sp4;
    s32 sp10;
    GenObj *sp14;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s8 sp30;
    s32 sp34;
    s32 *sp38;
    s32 *temp_r4_19;
    s32 *temp_r5;
    s32 *temp_r6_2;
    s32 *var_r0;
    s32 *var_r1_4;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 temp_r4_10;
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
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_5;
    s32 var_r1_6;
    u32 temp_r0_2;
    u32 temp_r5_2;
    GenObj *temp_r0;
    GenObj *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    GenObj *temp_r0_7;

    sp34 = 1;
    if (arg1 == 9) {

    } else if (arg1 == 0) {

    } else if (arg1 > 8) {
        if ((func_0800F190(arg0->unk100) << 0x18) != 0) {
            temp_r4 = arg0->unk7C;
            temp_r0 = func_080CC70C(temp_r4, func_080CE184(arg0, arg1, 0));
            sp4 = temp_r0->unk0;
            sp4.unk4 = (s32) temp_r0->unk4;
            sp4.unk8 = (s32) temp_r0->unk8;
            var_r1 = 0;
            if ((sp8 == 0) || (spC == 0)) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {

            } else {
                func_080CD14C(arg0->unk7C, sp8, spC, 1);
                temp_r4_2 = arg0->unk7C;
                func_080CCDEC(temp_r4_2, func_080CE184(arg0, arg1, 0));
                temp_r4_3 = arg0->unk104;
                ExtractItemAt__8RucksackUi(&sp10, temp_r4_3, func_080CE184(arg0, arg1, 0));
                sp14 = sp10;
                func_0800F418(arg0->unk100);
            }
        } else {
            temp_r0_2 = func_0800F204(arg0->unk100);
            switch (temp_r0_2) {                    /* irregular */
            case 0:
            case 1:
                temp_r4_4 = arg0->unk7C;
                temp_r0_3 = func_080CC70C(temp_r4_4, func_080CE184(arg0, arg1, 0));
                sp4 = temp_r0_3->unk0;
                sp4.unk4 = (s32) temp_r0_3->unk4;
                sp4.unk8 = (s32) temp_r0_3->unk8;
                temp_r0_4 = func_080CC720(arg0->unk7C, &(GenObj *)((u8 *)sp4 + 0xC));
                sp10 = temp_r0_4->unk0;
                sp10.unk4 = (s32) temp_r0_4->unk4;
                sp10.unk8 = (s32) temp_r0_4->unk8;
                var_r1_2 = 0;
                if ((sp8 == 0) || (spC == 0)) {
                    var_r1_2 = 1;
                }
                if (var_r1_2 == 0) {
                    func_080CD14C(arg0->unk7C, sp8, spC, 1);
                    temp_r4_5 = arg0->unk7C;
                    temp_r1 = func_080CE184(arg0, arg1, 0);
                    sp0 = 1;
                    func_080CCA40(temp_r4_5, temp_r1, sp14, sp18);
                    func_0800F294(&sp1C, arg0->unk100);
                    func_0800F390(arg0->unk100);
                    temp_r4_6 = arg0->unk104;
                    ExtractItemAt__8RucksackUi(&sp20, temp_r4_6, func_080CE184(arg0, arg1, 0));
                    temp_r4_7 = arg0->unk104;
                    *GetItemAt__8RucksackUi(temp_r4_7, func_080CE184(arg0, arg1, 0)) = sp1C;
                    sp2C = sp20;
                    func_0800F418(arg0->unk100);
                } else {
                    func_080CD4D4(arg0->unk7C);
                    temp_r4_8 = arg0->unk7C;
                    temp_r1_2 = func_080CE184(arg0, arg1, 0);
                    sp0 = 1;
                    func_080CCA40(temp_r4_8, temp_r1_2, sp14, sp18);
                    func_0800F294(&sp1C, arg0->unk100);
                    func_0800F390(arg0->unk100);
                    temp_r4_9 = arg0->unk104;
                    *GetItemAt__8RucksackUi(temp_r4_9, func_080CE184(arg0, arg1, 0)) = sp1C;
                }
                break;
            case 2:
            case 3:
            case 4:
                sp34 = 0;
                break;
            }
        }
    } else if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) != 0) {
        temp_r4_10 = arg0->unk78;
        temp_r0_5 = func_080CB2E8(temp_r4_10, func_080CE184(arg0, arg1, 0));
        sp4 = temp_r0_5->unk0;
        sp4.unk4 = (s32) temp_r0_5->unk4;
        sp4.unk8 = (s32) temp_r0_5->unk8;
        var_r1_3 = 0;
        if ((sp8 == 0) || (spC == 0)) {
            var_r1_3 = 1;
        }
        if (var_r1_3 != 0) {

        } else {
            temp_r4_11 = arg0->unk78;
            func_080CBDD4(temp_r4_11, sp8, spC, func_080CAD14(&sp4));
            temp_r4_12 = arg0->unk78;
            func_080CBA60(temp_r4_12, func_080CE184(arg0, arg1, 0));
            temp_r4_13 = arg0->unk104;
            ExtractToolAt__8RucksackUi(&sp10, temp_r4_13, func_080CE184(arg0, arg1, 0));
            var_r0 = arg0->unkFC;
            var_r1_4 = &sp10;
            goto block_28;
        }
    } else {
        temp_r0_6 = func_080CB2FC(arg0->unk78);
        sp4 = temp_r0_6->unk0;
        sp4.unk4 = (s32) temp_r0_6->unk4;
        sp4.unk8 = (s32) temp_r0_6->unk8;
        temp_r4_14 = arg0->unk78;
        temp_r0_7 = func_080CB2E8(temp_r4_14, func_080CE184(arg0, arg1, 0));
        sp14.unk0 = temp_r0_7->unk0;
        sp14.unk4 = (s32) temp_r0_7->unk4;
        sp14.unk8 = (s32) temp_r0_7->unk8;
        memcpy(&sp20, arg0->unkFC, 2);
        if ((func_080CE1C4(arg0, GetTool__C9ToolStack(&sp20)) << 0x18) != 0) {
            func_08050DC8((GenObj *)((u8 *)arg0 + 0x80), gUnk_08117B10, 0, 0);
            arg0->unk108 = 2;
            sp34 = 0;
        } else {
            var_r1_5 = 0;
            if ((sp18 == 0) || (sp1C == 0)) {
                var_r1_5 = 1;
            }
            if (var_r1_5 != 0) {
                func_080CC0B4(arg0->unk78);
                temp_r8 = arg0->unk78;
                temp_r4_15 = func_080CE184(arg0, arg1, 0);
                sp0 = func_080CAD14(&sp4);
                func_080CB63C(temp_r8, temp_r4_15, sp8, spC);
                temp_r4_16 = arg0->unk104;
                memcpy(GetToolAt__8RucksackUi(temp_r4_16, func_080CE184(arg0, arg1, 0)), arg0->unkFC, 2);
                temp_r5 = arg0->unkFC;
                __9ToolStack(&sp24);
                var_r0 = temp_r5;
                var_r1_4 = &sp24;
                goto block_28;
            }
            sp38 = (GenObj *)((u8 *)arg0 + 0x104);
            temp_r4_17 = arg0->unk104;
            memcpy(&sp24, GetToolAt__8RucksackUi(temp_r4_17, func_080CE184(arg0, arg1, 0)), 2);
            sp30 = GetTool__C9ToolStack(&sp20);
            temp_r4_18 = GetId__C4Tool();
            sp0.unk31 = GetTool__C9ToolStack(&sp24);
            var_r1_6 = 0;
            if (temp_r4_18 == GetId__C4Tool()) {
                var_r1_6 = 1;
            }
            if (var_r1_6 != 0) {
                temp_r5_2 = 0x63 - GetAmount__C9ToolStack(&sp20);
                if (temp_r5_2 >= GetAmount__C9ToolStack(&sp24)) {
                    temp_r4_19 = arg0->unkFC;
                    AddAmount__9ToolStackUi(temp_r4_19, GetAmount__C9ToolStack(&sp24));
                    temp_r4_20 = *sp38;
                    ExtractToolAt__8RucksackUi(&sp28, temp_r4_20, func_080CE184(arg0, arg1, 0));
                    temp_r4_21 = arg0->unk78;
                    func_080CB9DC(temp_r4_21, GetAmount__C9ToolStack(arg0->unkFC));
                    temp_r4_22 = arg0->unk78;
                    func_080CBA60(temp_r4_22, func_080CE184(arg0, arg1, 0));
                } else {
                    AddAmount__9ToolStackUi(arg0->unkFC, temp_r5_2);
                    temp_r4_23 = *sp38;
                    SubtractAmount__9ToolStackUi(GetToolAt__8RucksackUi(temp_r4_23, func_080CE184(arg0, arg1, 0)), temp_r5_2);
                    temp_r4_24 = arg0->unk78;
                    func_080CB9DC(temp_r4_24, GetAmount__C9ToolStack(arg0->unkFC));
                    temp_r6 = arg0->unk78;
                    temp_r5_3 = func_080CE184(arg0, arg1, 0);
                    temp_r4_25 = *sp38;
                    GetToolAt__8RucksackUi(temp_r4_25, func_080CE184(arg0, arg1, 0));
                    func_080CB948(temp_r6, temp_r5_3, GetAmount__C9ToolStack());
                }
            } else {
                temp_r4_26 = arg0->unk78;
                func_080CBDD4(temp_r4_26, sp18, sp1C, func_080CAD14(&sp14));
                temp_r8_2 = arg0->unk78;
                temp_r4_27 = func_080CE184(arg0, arg1, 0);
                sp0 = func_080CAD14(&sp4);
                func_080CB63C(temp_r8_2, temp_r4_27, sp8, spC);
                temp_r6_2 = arg0->unkFC;
                temp_r5_4 = *sp38;
                ExtractToolAt__8RucksackUi(&sp28, temp_r5_4, func_080CE184(arg0, arg1, 0));
                memcpy(temp_r6_2, &sp28, 2);
                temp_r4_28 = *sp38;
                var_r0 = GetToolAt__8RucksackUi(temp_r4_28, func_080CE184(arg0, arg1, 0));
                var_r1_4 = &sp20;
block_28:
                memcpy(var_r0, var_r1_4, 2);
            }
        }
    }
    return sp34;
}
