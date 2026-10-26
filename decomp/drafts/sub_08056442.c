s32 free();                                           /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u32);                /* extern */
s32 func_080579B4(void *, s32, u16, ? *);             /* extern */
s32 func_08057B84(void *);                            /* extern */
s32 func_0805E860(void *, u16);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(s32, s32, u16, ? *);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? gUnk_080FA36C;

void sub_08056442(void *arg4, ? arg5, s32 argC, s32 argE, s32 arg10, ? arg14, u32 arg2C, u32 arg2D, u32 arg2E, u32 arg2F, u32 arg30, u32 arg31, u32 arg32, u32 arg33, u32 arg34, u32 arg35, u32 arg36, u32 arg37, u32 arg38, u32 arg39, u32 arg3A, u32 arg3B, u32 arg3C, u32 arg3D, s32 arg42, void *arg43, u16 *arg44, void *arg45, void *arg46, void *arg47, s32 *arg48, s32 *arg49, s32 *arg4A, s32 *arg4B, void *arg4C, void *arg4D) {
    s16 temp_r0_9;
    s16 temp_r2;
    s16 temp_r2_11;
    s16 temp_r2_13;
    s16 temp_r2_15;
    s16 temp_r2_17;
    s16 temp_r2_3;
    s16 temp_r2_5;
    s16 temp_r2_7;
    s16 temp_r2_9;
    s32 temp_r0_17;
    s32 temp_r0_18;
    s32 temp_r0_23;
    s32 temp_r0_26;
    s32 temp_r0_29;
    s32 temp_r0_36;
    s32 temp_r0_42;
    s32 temp_r0_49;
    s32 temp_r0_56;
    s32 temp_r0_63;
    s32 temp_r0_70;
    s32 temp_r0_82;
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_sl;
    s32 var_sl_2;
    s32 var_sl_3;
    s32 var_sl_4;
    s32 var_sl_5;
    s32 var_sl_6;
    s32 var_sl_7;
    s32 var_sl_8;
    s32 var_sl_9;
    u16 var_r1_3;
    u16 var_r2;
    u16 var_r2_10;
    u16 var_r2_13;
    u16 var_r2_16;
    u16 var_r2_19;
    u16 var_r2_22;
    u16 var_r2_25;
    u16 var_r2_28;
    u16 var_r2_29;
    u16 var_r2_2;
    u16 var_r2_30;
    u16 var_r2_31;
    u16 var_r2_3;
    u16 var_r3;
    u16 var_r3_10;
    u16 var_r3_13;
    u16 var_r3_16;
    u16 var_r3_19;
    u16 var_r3_22;
    u16 var_r3_25;
    u16 var_r3_4;
    u16 var_r3_7;
    u32 *var_r0;
    u32 *var_r0_11;
    u32 *var_r0_13;
    u32 *var_r0_15;
    u32 *var_r0_17;
    u32 *var_r0_3;
    u32 *var_r0_5;
    u32 *var_r0_7;
    u32 *var_r0_9;
    u32 var_r3_12;
    u32 var_r3_15;
    u32 var_r3_18;
    u32 var_r3_21;
    u32 var_r3_24;
    u32 var_r3_27;
    u32 var_r3_3;
    u32 var_r3_6;
    u32 var_r3_9;
    u8 temp_r0_31;
    u8 temp_r0_44;
    u8 temp_r0_51;
    u8 temp_r0_58;
    u8 temp_r0_65;
    u8 temp_r0_79;
    void **temp_r1;
    void **temp_r1_10;
    void **temp_r1_16;
    void **temp_r1_20;
    void **temp_r1_24;
    void **temp_r1_28;
    void **temp_r1_32;
    void **temp_r1_36;
    void **temp_r1_40;
    void **temp_r1_43;
    void **temp_r1_45;
    void **temp_r1_4;
    void **temp_r1_7;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_24;
    void *temp_r0_25;
    void *temp_r0_27;
    void *temp_r0_28;
    void *temp_r0_2;
    void *temp_r0_30;
    void *temp_r0_32;
    void *temp_r0_33;
    void *temp_r0_34;
    void *temp_r0_35;
    void *temp_r0_37;
    void *temp_r0_38;
    void *temp_r0_39;
    void *temp_r0_3;
    void *temp_r0_40;
    void *temp_r0_41;
    void *temp_r0_43;
    void *temp_r0_45;
    void *temp_r0_46;
    void *temp_r0_47;
    void *temp_r0_48;
    void *temp_r0_4;
    void *temp_r0_50;
    void *temp_r0_52;
    void *temp_r0_53;
    void *temp_r0_54;
    void *temp_r0_55;
    void *temp_r0_57;
    void *temp_r0_59;
    void *temp_r0_5;
    void *temp_r0_60;
    void *temp_r0_61;
    void *temp_r0_62;
    void *temp_r0_64;
    void *temp_r0_66;
    void *temp_r0_67;
    void *temp_r0_68;
    void *temp_r0_69;
    void *temp_r0_6;
    void *temp_r0_71;
    void *temp_r0_72;
    void *temp_r0_73;
    void *temp_r0_74;
    void *temp_r0_75;
    void *temp_r0_76;
    void *temp_r0_77;
    void *temp_r0_78;
    void *temp_r0_7;
    void *temp_r0_80;
    void *temp_r0_81;
    void *temp_r0_8;
    void *temp_r1_11;
    void *temp_r1_12;
    void *temp_r1_13;
    void *temp_r1_14;
    void *temp_r1_15;
    void *temp_r1_17;
    void *temp_r1_18;
    void *temp_r1_19;
    void *temp_r1_21;
    void *temp_r1_22;
    void *temp_r1_23;
    void *temp_r1_25;
    void *temp_r1_26;
    void *temp_r1_27;
    void *temp_r1_29;
    void *temp_r1_2;
    void *temp_r1_30;
    void *temp_r1_31;
    void *temp_r1_33;
    void *temp_r1_34;
    void *temp_r1_35;
    void *temp_r1_37;
    void *temp_r1_38;
    void *temp_r1_39;
    void *temp_r1_3;
    void *temp_r1_41;
    void *temp_r1_42;
    void *temp_r1_44;
    void *temp_r1_46;
    void *temp_r1_47;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_10;
    void *temp_r2_12;
    void *temp_r2_14;
    void *temp_r2_16;
    void *temp_r2_18;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_8;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_13;
    void *temp_r4_16;
    void *temp_r4_19;
    void *temp_r4_22;
    void *temp_r4_25;
    void *temp_r4_28;
    void *temp_r4_29;
    void *temp_r4_2;
    void *temp_r4_30;
    void *temp_r4_31;
    void *temp_r4_5;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;
    void *temp_r5_8;
    void *temp_r5_9;
    void *temp_r7;
    void *temp_r7_2;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_16;
    void *var_r0_18;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_10;
    void *var_r1_2;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r1_9;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_14;
    void *var_r2_15;
    void *var_r2_17;
    void *var_r2_18;
    void *var_r2_20;
    void *var_r2_21;
    void *var_r2_23;
    void *var_r2_24;
    void *var_r2_26;
    void *var_r2_27;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3_11;
    void *var_r3_14;
    void *var_r3_17;
    void *var_r3_20;
    void *var_r3_23;
    void *var_r3_26;
    void *var_r3_2;
    void *var_r3_5;
    void *var_r3_8;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;
    void *var_r5_8;
    void *var_r5_9;
    void *var_r7;

    func_08057B84(saved_reg_r6);
    temp_r5 = saved_reg_r6 + 0x2A8;
    saved_reg_r6->unk2D8 = func_0805E8F0(temp_r5);
    temp_r1 = saved_reg_r6->unk2A8;
    (*temp_r1)->unk10(&arg14, temp_r1, *(*arg49 + (temp_r5->unkC * 4)));
    memcpy(saved_reg_r9, saved_reg_r9, 0x20);
    temp_r0 = saved_reg_r9 + 0xC;
    argC.unk0 = saved_reg_r9->unk0;
    argC.unk4 = (s32) saved_reg_r9->unk4;
    argC.unk8 = (s32) saved_reg_r9->unk8;
    temp_r1_2 = &argC + 0xC;
    argC.unkC = (s32) saved_reg_r9->unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r0_2 = saved_reg_r6 + 0x2BC;
    temp_r0_3 = temp_r0_2 + 0xC;
    arg5.unk0 = (s32) saved_reg_r6->unk2BC;
    arg5.unk4 = (s32) temp_r0_2->unk4;
    arg5.unk8 = (s32) temp_r0_2->unk8;
    temp_r1_3 = &arg5 + 0xC;
    arg5.unkC = (s32) temp_r0_2->unkC;
    temp_r1_3->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_3->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_3->unkC = (s32) temp_r0_3->unkC;
    arg5.unk0 = 0x18;
    arg5.unk2 = (u16) saved_reg_r6->unk22D8;
    arg5.unk8 = 2;
    temp_r0_4 = saved_reg_r6 + 0x490;
    arg5.unk4 = func_080074C0(temp_r0_4, temp_r0_4->unk4);
    temp_r0_5 = saved_reg_r6 + 0x488;
    arg5.unk6 = (s16) (func_08007D4C(temp_r0_5, temp_r0_5->unk4) + (*(*arg49 + (temp_r5->unkC * 4)) * 2));
    arg5.unk18 = 1U;
    temp_r3 = func_08008920(saved_reg_r6);
    var_r2 = 0;
    if (argC != 0) {
        var_r2 = arg4.unk24;
    }
    func_0805E99C(temp_r3, argC, var_r2, &arg5);
    if (saved_reg_r6->unk2324 != 1) {

    } else {
        arg4B = saved_reg_r6 + 0x3C4;
        arg43 = saved_reg_r6 + 0x3C0;
        var_r7 = saved_reg_r6 + 0x22E0;
        arg44 = saved_reg_r6 + 0x2330;
        arg42 = 0xF;
loop_5:
        func_0805E860(arg43, *((var_r7->unk2 * 2) + &gUnk_080FA36C));
        temp_r1_4 = arg43->unk0;
        (*temp_r1_4)->unk10(&arg14, temp_r1_4, *(*arg4B + (arg43->unkC * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_6 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_5 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_5->unk4 = (s32) temp_r0_6->unk4;
        temp_r1_5->unk8 = (s32) temp_r0_6->unk8;
        temp_r1_5->unkC = (s32) temp_r0_6->unkC;
        (temp_r1_5 + 0xC)->unk4 = (s32) (temp_r0_6 + 0xC)->unk4;
        temp_r0_7 = saved_reg_r6 + 0x3D4;
        temp_r0_8 = temp_r0_7 + 0xC;
        arg5.unk0 = (s32) saved_reg_r6->unk3D4;
        arg5.unk4 = (s32) temp_r0_7->unk4;
        arg5.unk8 = (s32) temp_r0_7->unk8;
        temp_r1_6 = &arg5 + 0xC;
        arg5.unkC = (s32) temp_r0_7->unkC;
        temp_r1_6->unk4 = (s32) temp_r0_8->unk4;
        temp_r1_6->unk8 = (s32) temp_r0_8->unk8;
        temp_r1_6->unkC = (s32) temp_r0_8->unkC;
        temp_r0_9 = var_r7->unk0 - *arg44;
        arg5.unk0 = temp_r0_9;
        if ((u32) ((temp_r0_9 + 0x18) << 0x10) <= 0x01100000U) {
            arg5.unk2 = 0x90U;
            arg5.unk8 = 2;
            temp_r0_10 = (var_r7->unk2 * 0x10) + saved_reg_r6;
            arg5.unk6 = func_08007D4C(temp_r0_10 + 0x500, temp_r0_10->unk504);
            temp_r0_11 = (var_r7->unk2 * 0x10) + saved_reg_r6 + 0x508;
            arg5.unk4 = func_080074C0(temp_r0_11, temp_r0_11->unk4);
            arg5.unk18 = 1U;
            temp_r3_2 = func_08008920(saved_reg_r6);
            var_r2_2 = 0;
            if (argC != 0) {
                var_r2_2 = arg4.unk24;
            }
            func_0805E99C(temp_r3_2, argC, var_r2_2, &arg5);
            temp_r4 = saved_reg_r6 + 0x2E0;
            func_0805E860(temp_r4, 0x91BU);
            temp_r1_7 = saved_reg_r6->unk2E0;
            (*temp_r1_7)->unk10(saved_reg_r9, temp_r1_7, *(*arg4A + (temp_r4->unkC * 4)));
            memcpy(saved_reg_r9, saved_reg_r9, 0x20);
            temp_r0_12 = saved_reg_r9 + 0xC;
            argC.unk0 = saved_reg_r9->unk0;
            argC.unk4 = (s32) saved_reg_r9->unk4;
            argC.unk8 = (s32) saved_reg_r9->unk8;
            temp_r1_8 = &argC + 0xC;
            argC.unkC = (s32) saved_reg_r9->unkC;
            temp_r1_8->unk4 = (s32) temp_r0_12->unk4;
            temp_r1_8->unk8 = (s32) temp_r0_12->unk8;
            temp_r1_8->unkC = (s32) temp_r0_12->unkC;
            (temp_r1_8 + 0xC)->unk4 = (s32) (temp_r0_12 + 0xC)->unk4;
            temp_r0_13 = saved_reg_r6 + 0x2F4;
            temp_r0_14 = temp_r0_13 + 0xC;
            arg5.unk0 = (s32) saved_reg_r6->unk2F4;
            arg5.unk4 = (s32) temp_r0_13->unk4;
            arg5.unk8 = (s32) temp_r0_13->unk8;
            temp_r1_9 = &arg5 + 0xC;
            arg5.unkC = (s32) temp_r0_13->unkC;
            temp_r1_9->unk4 = (s32) temp_r0_14->unk4;
            temp_r1_9->unk8 = (s32) temp_r0_14->unk8;
            temp_r1_9->unkC = (s32) temp_r0_14->unkC;
            arg5.unk0 = (s16) (var_r7->unk0 - *arg44);
            arg5.unk2 = 0x90U;
            arg5.unk8 = 2;
            temp_r0_15 = saved_reg_r6 + 0x4A8;
            arg5.unk6 = (s16) (func_08007D4C(temp_r0_15, temp_r0_15->unk4) + 2);
            temp_r0_16 = saved_reg_r6 + 0x4B0;
            arg5.unk4 = func_080074C0(temp_r0_16, temp_r0_16->unk4);
            arg5.unk18 = 1U;
            temp_r0_17 = func_08008920(saved_reg_r6);
            var_r2_3 = 0;
            if (argC != 0) {
                var_r2_3 = arg4.unk24;
            }
            func_0805E99C(temp_r0_17, argC, var_r2_3, &arg5);
        }
        var_r7 += 4;
        temp_r0_18 = arg42 - 1;
        arg42 = temp_r0_18;
        if (temp_r0_18 >= 0) {
            goto loop_5;
        }
    }
    if ((u32) saved_reg_r6->unk2330 > 0xFFU) {

    } else {
        temp_r1_10 = saved_reg_r6->unk200;
        (*temp_r1_10)->unk10(&arg14, temp_r1_10, *(saved_reg_r6->unk204 + (saved_reg_r6->unk20C * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_19 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_11 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_11->unk4 = (s32) temp_r0_19->unk4;
        temp_r1_11->unk8 = (s32) temp_r0_19->unk8;
        temp_r1_11->unkC = (s32) temp_r0_19->unkC;
        (temp_r1_11 + 0xC)->unk4 = (s32) (temp_r0_19 + 0xC)->unk4;
        temp_r0_20 = saved_reg_r6 + 0x214;
        temp_r0_21 = temp_r0_20 + 0xC;
        arg5.unk0 = (s32) saved_reg_r6->unk214;
        arg5.unk4 = (s32) temp_r0_20->unk4;
        arg5.unk8 = (s32) temp_r0_20->unk8;
        temp_r1_12 = &arg5 + 0xC;
        arg5.unkC = (s32) temp_r0_20->unkC;
        temp_r1_12->unk4 = (s32) temp_r0_21->unk4;
        temp_r1_12->unk8 = (s32) temp_r0_21->unk8;
        temp_r1_12->unkC = (s32) temp_r0_21->unkC;
        arg5.unk0 = (s16) (0x40 - saved_reg_r6->unk2330);
        arg5.unk2 = 0x50U;
        arg5.unk8 = 2;
        temp_r4_2 = saved_reg_r6 + 0x540;
        arg5.unk6 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
        temp_r0_22 = saved_reg_r6 + 0x548;
        arg5.unk4 = func_080074C0(temp_r0_22, temp_r0_22->unk4);
        arg5.unk18 = 1U;
        if ((s32) (saved_reg_r6->unk230 << 0x1E) >= 0) {

        } else {
            temp_r5_2 = func_08008910(saved_reg_r6);
            temp_r2 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
            var_r3 = 0;
            if (argE != 0) {
                var_r3 = arg4.unk2C;
            }
            arg4C = temp_r5_2;
            func_08008F0C(saved_reg_r9, argE, (temp_r2 << 5) + 0x06010000, (u32) var_r3);
            temp_r1_13 = temp_r5_2->unk4;
            if (temp_r1_13 != temp_r5_2->unkC) {
                if (temp_r1_13 != 0) {
                    temp_r1_13->unk0 = (s32) saved_reg_r9->unk0;
                    temp_r1_13->unk4 = (s32) saved_reg_r9->unk4;
                    temp_r1_13->unk8 = (s32) saved_reg_r9->unk8;
                    temp_r1_13->unkC = (s32) saved_reg_r9->unkC;
                }
                arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
            } else {
                arg2D = 1;
                temp_r4_3 = (s32) (temp_r1_13 - arg4C->unk0) >> 4;
                var_r0 = &arg2C;
                *var_r0 = temp_r4_3;
                if ((u32) temp_r4_3 < (u32) arg2D) {
                    var_r0 = &arg2D;
                }
                temp_r0_23 = temp_r4_3 + *var_r0;
                if (temp_r0_23 != 0) {
                    temp_r4_4 = temp_r0_23 * 0x10;
                    var_r0_2 = malloc(temp_r4_4);
                    var_sl = temp_r4_4;
                    if (var_r0_2 == 0) {
                        var_r0_2 = func_080D3BC0(var_sl);
                    }
                } else {
                    var_r0_2 = 0;
                    var_sl = 0;
                }
                arg4D = var_r0_2;
                var_r2_4 = arg4C->unk0;
                var_r3_2 = var_r0_2;
                if (var_r2_4 != temp_r1_13) {
                    do {
                        if (var_r3_2 != 0) {
                            var_r3_2->unk0 = (s32) var_r2_4->unk0;
                            var_r3_2->unk4 = (s32) var_r2_4->unk4;
                            var_r3_2->unk8 = (s32) var_r2_4->unk8;
                            var_r3_2->unkC = (s32) var_r2_4->unkC;
                        }
                        var_r2_4 += 0x10;
                        var_r3_2 += 0x10;
                    } while (var_r2_4 != temp_r1_13);
                }
                if (arg2D == 1) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) arg14.unk0;
                        var_r3_2->unk4 = (s32) arg14.unk4;
                        var_r3_2->unk8 = (s32) arg14.unk8;
                        var_r3_2->unkC = (s32) arg14.unkC;
                    }
                    var_r5 = var_r3_2 + 0x10;
                } else {
                    var_r3_3 = arg2D;
                    var_r2_5 = var_r3_2;
                    if (var_r3_3 != 0) {
                        do {
                            if (var_r2_5 != 0) {
                                var_r2_5->unk0 = (s32) arg14.unk0;
                                var_r2_5->unk4 = (s32) arg14.unk4;
                                var_r2_5->unk8 = (s32) arg14.unk8;
                                var_r2_5->unkC = (s32) arg14.unkC;
                            }
                            var_r3_3 -= 1;
                            var_r2_5 += 0x10;
                        } while (var_r3_3 != 0);
                    }
                    var_r5 = var_r2_5;
                }
                temp_r2_2 = arg4C->unk4;
                temp_r0_24 = arg4C->unk0;
                var_r1 = temp_r0_24;
                if (temp_r0_24 != temp_r2_2) {
                    do {
                        var_r1 += 0x10;
                    } while (var_r1 != temp_r2_2);
                }
                if (temp_r0_24 != 0) {
                    free();
                }
                arg4C->unk0 = arg4D;
                arg4C->unk4 = var_r5;
                arg4C->unkC = (void *) (arg4D + var_sl);
            }
            temp_r4_5 = func_08008910(saved_reg_r6);
            temp_r0_25 = saved_reg_r6 + 0x548;
            temp_r2_3 = func_080074C0(temp_r0_25, temp_r0_25->unk4);
            var_r3_4 = 0;
            if (arg10 != 0) {
                var_r3_4 = arg4.unk34;
            }
            arg4C = temp_r4_5;
            func_08008F0C(&arg14, arg10, (temp_r2_3 << 5) + 0x05000200, var_r3_4 >> 1);
            temp_r1_14 = temp_r4_5->unk4;
            if (temp_r1_14 != temp_r4_5->unkC) {
                if (temp_r1_14 != 0) {
                    temp_r1_14->unk0 = (s32) saved_reg_r9->unk0;
                    temp_r1_14->unk4 = (s32) saved_reg_r9->unk4;
                    temp_r1_14->unk8 = (s32) saved_reg_r9->unk8;
                    temp_r1_14->unkC = (s32) saved_reg_r9->unkC;
                }
                arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
            } else {
                arg2F = 1;
                temp_r4_6 = (s32) (temp_r1_14 - arg4C->unk0) >> 4;
                var_r0_3 = &arg2E;
                *var_r0_3 = temp_r4_6;
                if ((u32) temp_r4_6 < (u32) arg2F) {
                    var_r0_3 = &arg2F;
                }
                temp_r0_26 = temp_r4_6 + *var_r0_3;
                if (temp_r0_26 != 0) {
                    temp_r4_7 = temp_r0_26 * 0x10;
                    var_r0_4 = malloc(temp_r4_7);
                    var_sl_2 = temp_r4_7;
                    if (var_r0_4 == 0) {
                        var_r0_4 = func_080D3BC0(var_sl_2);
                    }
                } else {
                    var_r0_4 = 0;
                    var_sl_2 = 0;
                }
                arg4D = var_r0_4;
                var_r2_6 = arg4C->unk0;
                var_r3_5 = var_r0_4;
                if (var_r2_6 != temp_r1_14) {
                    do {
                        if (var_r3_5 != 0) {
                            var_r3_5->unk0 = (s32) var_r2_6->unk0;
                            var_r3_5->unk4 = (s32) var_r2_6->unk4;
                            var_r3_5->unk8 = (s32) var_r2_6->unk8;
                            var_r3_5->unkC = (s32) var_r2_6->unkC;
                        }
                        var_r2_6 += 0x10;
                        var_r3_5 += 0x10;
                    } while (var_r2_6 != temp_r1_14);
                }
                if (arg2F == 1) {
                    if (var_r3_5 != 0) {
                        var_r3_5->unk0 = (s32) arg45->unk0;
                        var_r3_5->unk4 = (s32) arg45->unk4;
                        var_r3_5->unk8 = (s32) arg45->unk8;
                        var_r3_5->unkC = (s32) arg45->unkC;
                    }
                    var_r5_2 = var_r3_5 + 0x10;
                } else {
                    var_r3_6 = arg2F;
                    var_r2_7 = var_r3_5;
                    if (var_r3_6 != 0) {
                        do {
                            if (var_r2_7 != 0) {
                                var_r2_7->unk0 = (s32) arg45->unk0;
                                var_r2_7->unk4 = (s32) arg45->unk4;
                                var_r2_7->unk8 = (s32) arg45->unk8;
                                var_r2_7->unkC = (s32) arg45->unkC;
                            }
                            var_r3_6 -= 1;
                            var_r2_7 += 0x10;
                        } while (var_r3_6 != 0);
                    }
                    var_r5_2 = var_r2_7;
                }
                temp_r2_4 = arg4C->unk4;
                temp_r0_27 = arg4C->unk0;
                var_r1_2 = temp_r0_27;
                if (temp_r0_27 != temp_r2_4) {
                    do {
                        var_r1_2 += 0x10;
                    } while (var_r1_2 != temp_r2_4);
                }
                if (temp_r0_27 != 0) {
                    free();
                }
                arg4C->unk0 = arg4D;
                arg4C->unk4 = var_r5_2;
                arg4C->unkC = (void *) (arg4D + var_sl_2);
            }
            temp_r7 = func_08008910(saved_reg_r6);
            var_r1_3 = 0;
            if (arg10 != 0) {
                var_r1_3 = arg10.unk4;
            }
            temp_r0_28 = saved_reg_r6 + 0x550;
            temp_r2_5 = func_080074C0(temp_r0_28, temp_r0_28->unk4);
            var_r3_7 = 0;
            if (arg10 != 0) {
                var_r3_7 = arg4.unk34;
            }
            arg4C = temp_r7;
            func_08008F0C(&arg14, arg10 + (var_r1_3 >> 1), (temp_r2_5 << 5) + 0x05000200, var_r3_7 >> 1);
            temp_r1_15 = temp_r7->unk4;
            if (temp_r1_15 != temp_r7->unkC) {
                if (temp_r1_15 != 0) {
                    temp_r1_15->unk0 = (s32) saved_reg_r9->unk0;
                    temp_r1_15->unk4 = (s32) saved_reg_r9->unk4;
                    temp_r1_15->unk8 = (s32) saved_reg_r9->unk8;
                    temp_r1_15->unkC = (s32) saved_reg_r9->unkC;
                }
                arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
            } else {
                arg31 = 1;
                temp_r4_8 = (s32) (temp_r1_15 - arg4C->unk0) >> 4;
                var_r0_5 = &arg30;
                *var_r0_5 = temp_r4_8;
                if ((u32) temp_r4_8 < (u32) arg31) {
                    var_r0_5 = &arg31;
                }
                temp_r0_29 = temp_r4_8 + *var_r0_5;
                if (temp_r0_29 != 0) {
                    temp_r4_9 = temp_r0_29 * 0x10;
                    var_r0_6 = malloc(temp_r4_9);
                    var_sl_3 = temp_r4_9;
                    if (var_r0_6 == 0) {
                        var_r0_6 = func_080D3BC0(var_sl_3);
                    }
                } else {
                    var_r0_6 = 0;
                    var_sl_3 = 0;
                }
                arg4D = var_r0_6;
                var_r2_8 = arg4C->unk0;
                var_r3_8 = var_r0_6;
                if (var_r2_8 != temp_r1_15) {
                    do {
                        if (var_r3_8 != 0) {
                            var_r3_8->unk0 = (s32) var_r2_8->unk0;
                            var_r3_8->unk4 = (s32) var_r2_8->unk4;
                            var_r3_8->unk8 = (s32) var_r2_8->unk8;
                            var_r3_8->unkC = (s32) var_r2_8->unkC;
                        }
                        var_r2_8 += 0x10;
                        var_r3_8 += 0x10;
                    } while (var_r2_8 != temp_r1_15);
                }
                if (arg31 == 1) {
                    if (var_r3_8 != 0) {
                        var_r3_8->unk0 = (s32) arg46->unk0;
                        var_r3_8->unk4 = (s32) arg46->unk4;
                        var_r3_8->unk8 = (s32) arg46->unk8;
                        var_r3_8->unkC = (s32) arg46->unkC;
                    }
                    var_r5_3 = var_r3_8 + 0x10;
                } else {
                    var_r3_9 = arg31;
                    var_r2_9 = var_r3_8;
                    if (var_r3_9 != 0) {
                        do {
                            if (var_r2_9 != 0) {
                                var_r2_9->unk0 = (s32) arg46->unk0;
                                var_r2_9->unk4 = (s32) arg46->unk4;
                                var_r2_9->unk8 = (s32) arg46->unk8;
                                var_r2_9->unkC = (s32) arg46->unkC;
                            }
                            var_r3_9 -= 1;
                            var_r2_9 += 0x10;
                        } while (var_r3_9 != 0);
                    }
                    var_r5_3 = var_r2_9;
                }
                temp_r2_6 = arg4C->unk4;
                temp_r0_30 = arg4C->unk0;
                var_r1_4 = temp_r0_30;
                if (temp_r0_30 != temp_r2_6) {
                    do {
                        var_r1_4 += 0x10;
                    } while (var_r1_4 != temp_r2_6);
                }
                if (temp_r0_30 != 0) {
                    free();
                }
                arg4C->unk0 = arg4D;
                arg4C->unk4 = var_r5_3;
                arg4C->unkC = (void *) (arg4D + var_sl_3);
            }
        }
        var_r2_10 = 0;
        if (argC != 0) {
            var_r2_10 = arg4.unk24;
        }
        arg4 = saved_reg_r6 + 0x540;
        func_080579B4(saved_reg_r6, argC, var_r2_10, &arg5);
    }
    temp_r0_31 = saved_reg_r6->unk384;
    if (temp_r0_31 != 1) {

    } else {
        temp_r1_16 = saved_reg_r6->unk350;
        (*temp_r1_16)->unk10(&arg14, temp_r1_16, *(saved_reg_r6->unk354 + ((saved_reg_r6 + 0x350)->unkC * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_32 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_17 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_17->unk4 = (s32) temp_r0_32->unk4;
        temp_r1_17->unk8 = (s32) temp_r0_32->unk8;
        temp_r1_17->unkC = (s32) temp_r0_32->unkC;
        (temp_r1_17 + 0xC)->unk4 = (s32) (temp_r0_32 + 0xC)->unk4;
        temp_r0_33 = saved_reg_r6 + 0x364;
        temp_r0_34 = temp_r0_33 + 0xC;
        arg5.unk0 = (s32) saved_reg_r6->unk364;
        arg5.unk4 = (s32) temp_r0_33->unk4;
        arg5.unk8 = (s32) temp_r0_33->unk8;
        temp_r1_18 = &arg5 + 0xC;
        arg5.unkC = (s32) temp_r0_33->unkC;
        temp_r1_18->unk4 = (s32) temp_r0_34->unk4;
        temp_r1_18->unk8 = (s32) temp_r0_34->unk8;
        temp_r1_18->unkC = (s32) temp_r0_34->unkC;
        arg5.unk0 = (s16) ((saved_reg_r6 + 0x2268)->unk2 - saved_reg_r6->unk2330);
        arg5.unk2 = (u16) (saved_reg_r6 + 0x226C)->unk2;
        arg5.unk8 = 2;
        temp_r4_10 = saved_reg_r6 + 0x4C8;
        arg5.unk6 = func_08007D4C(temp_r4_10, temp_r4_10->unk4);
        temp_r0_35 = saved_reg_r6 + 0x4D8;
        arg5.unk4 = func_080074C0(temp_r0_35, temp_r0_35->unk4);
        arg5.unk18 = temp_r0_31;
        if ((s32) (saved_reg_r6->unk380 << 0x1E) >= 0) {

        } else {
            temp_r5_3 = func_08008910(saved_reg_r6);
            temp_r2_7 = func_08007D4C(temp_r4_10, temp_r4_10->unk4);
            var_r3_10 = 0;
            if (argE != 0) {
                var_r3_10 = arg4.unk2C;
            }
            arg4C = temp_r5_3;
            func_08008F0C(saved_reg_r9, argE, (temp_r2_7 << 5) + 0x06010000, (u32) var_r3_10);
            temp_r1_19 = temp_r5_3->unk4;
            if (temp_r1_19 != temp_r5_3->unkC) {
                if (temp_r1_19 != 0) {
                    temp_r1_19->unk0 = (s32) saved_reg_r9->unk0;
                    temp_r1_19->unk4 = (s32) saved_reg_r9->unk4;
                    temp_r1_19->unk8 = (s32) saved_reg_r9->unk8;
                    temp_r1_19->unkC = (s32) saved_reg_r9->unkC;
                }
                arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
            } else {
                arg33 = (u32) temp_r0_31;
                temp_r4_11 = (s32) (temp_r1_19 - arg4C->unk0) >> 4;
                var_r0_7 = &arg32;
                *var_r0_7 = temp_r4_11;
                if ((u32) temp_r4_11 < (u32) arg33) {
                    var_r0_7 = &arg33;
                }
                temp_r0_36 = temp_r4_11 + *var_r0_7;
                if (temp_r0_36 != 0) {
                    temp_r4_12 = temp_r0_36 * 0x10;
                    var_r0_8 = malloc(temp_r4_12);
                    var_sl_4 = temp_r4_12;
                    if (var_r0_8 == 0) {
                        var_r0_8 = func_080D3BC0(var_sl_4);
                    }
                } else {
                    var_r0_8 = 0;
                    var_sl_4 = 0;
                }
                arg4D = var_r0_8;
                var_r2_11 = arg4C->unk0;
                var_r3_11 = var_r0_8;
                if (var_r2_11 != temp_r1_19) {
                    do {
                        if (var_r3_11 != 0) {
                            var_r3_11->unk0 = (s32) var_r2_11->unk0;
                            var_r3_11->unk4 = (s32) var_r2_11->unk4;
                            var_r3_11->unk8 = (s32) var_r2_11->unk8;
                            var_r3_11->unkC = (s32) var_r2_11->unkC;
                        }
                        var_r2_11 += 0x10;
                        var_r3_11 += 0x10;
                    } while (var_r2_11 != temp_r1_19);
                }
                if (arg33 == 1) {
                    if (var_r3_11 != 0) {
                        var_r3_11->unk0 = (s32) arg14.unk0;
                        var_r3_11->unk4 = (s32) arg14.unk4;
                        var_r3_11->unk8 = (s32) arg14.unk8;
                        var_r3_11->unkC = (s32) arg14.unkC;
                    }
                    var_r5_4 = var_r3_11 + 0x10;
                } else {
                    var_r3_12 = arg33;
                    var_r2_12 = var_r3_11;
                    if (var_r3_12 != 0) {
                        do {
                            if (var_r2_12 != 0) {
                                var_r2_12->unk0 = (s32) arg14.unk0;
                                var_r2_12->unk4 = (s32) arg14.unk4;
                                var_r2_12->unk8 = (s32) arg14.unk8;
                                var_r2_12->unkC = (s32) arg14.unkC;
                            }
                            var_r3_12 -= 1;
                            var_r2_12 += 0x10;
                        } while (var_r3_12 != 0);
                    }
                    var_r5_4 = var_r2_12;
                }
                temp_r2_8 = arg4C->unk4;
                temp_r0_37 = arg4C->unk0;
                var_r1_5 = temp_r0_37;
                if (temp_r0_37 != temp_r2_8) {
                    do {
                        var_r1_5 += 0x10;
                    } while (var_r1_5 != temp_r2_8);
                }
                if (temp_r0_37 != 0) {
                    free();
                }
                arg4C->unk0 = arg4D;
                arg4C->unk4 = var_r5_4;
                arg4C->unkC = (void *) (arg4D + var_sl_4);
            }
        }
        temp_r3_3 = func_08008920(saved_reg_r6);
        var_r2_13 = 0;
        if (argC != 0) {
            var_r2_13 = arg4.unk24;
        }
        func_0805E99C(temp_r3_3, argC, var_r2_13, &arg5);
    }
    temp_r1_20 = saved_reg_r6->unk238;
    (*temp_r1_20)->unk10(&arg14, temp_r1_20, *(*arg48 + ((saved_reg_r6 + 0x238)->unkC * 4)));
    memcpy(saved_reg_r9, saved_reg_r9, 0x20);
    temp_r0_38 = saved_reg_r9 + 0xC;
    argC.unk0 = saved_reg_r9->unk0;
    argC.unk4 = (s32) saved_reg_r9->unk4;
    argC.unk8 = (s32) saved_reg_r9->unk8;
    temp_r1_21 = &argC + 0xC;
    argC.unkC = (s32) saved_reg_r9->unkC;
    temp_r1_21->unk4 = (s32) temp_r0_38->unk4;
    temp_r1_21->unk8 = (s32) temp_r0_38->unk8;
    temp_r1_21->unkC = (s32) temp_r0_38->unkC;
    (temp_r1_21 + 0xC)->unk4 = (s32) (temp_r0_38 + 0xC)->unk4;
    temp_r0_39 = saved_reg_r6 + 0x24C;
    temp_r0_40 = temp_r0_39 + 0xC;
    arg5.unk0 = (s32) saved_reg_r6->unk24C;
    arg5.unk4 = (s32) temp_r0_39->unk4;
    arg5.unk8 = (s32) temp_r0_39->unk8;
    temp_r1_22 = &arg5 + 0xC;
    arg5.unkC = (s32) temp_r0_39->unkC;
    temp_r1_22->unk4 = (s32) temp_r0_40->unk4;
    temp_r1_22->unk8 = (s32) temp_r0_40->unk8;
    temp_r1_22->unkC = (s32) temp_r0_40->unkC;
    arg5.unk0 = (s16) ((saved_reg_r6 + 0x2268)->unk2 - saved_reg_r6->unk2330);
    arg5.unk2 = (u16) (saved_reg_r6 + 0x226C)->unk2;
    arg5.unk8 = 2;
    temp_r4_13 = saved_reg_r6 + 0x468;
    arg5.unk6 = func_08007D4C(temp_r4_13, temp_r4_13->unk4);
    temp_r0_41 = saved_reg_r6 + 0x470;
    arg5.unk4 = func_080074C0(temp_r0_41, temp_r0_41->unk4);
    arg5.unk18 = 1U;
    if ((s32) (saved_reg_r6->unk268 << 0x1E) >= 0) {

    } else {
        temp_r5_4 = func_08008910(saved_reg_r6);
        temp_r2_9 = func_08007D4C(temp_r4_13, temp_r4_13->unk4);
        var_r3_13 = 0;
        if (argE != 0) {
            var_r3_13 = arg4.unk2C;
        }
        arg4C = temp_r5_4;
        func_08008F0C(saved_reg_r9, argE, (temp_r2_9 << 5) + 0x06010000, (u32) var_r3_13);
        temp_r1_23 = temp_r5_4->unk4;
        if (temp_r1_23 != temp_r5_4->unkC) {
            if (temp_r1_23 != 0) {
                temp_r1_23->unk0 = (s32) saved_reg_r9->unk0;
                temp_r1_23->unk4 = (s32) saved_reg_r9->unk4;
                temp_r1_23->unk8 = (s32) saved_reg_r9->unk8;
                temp_r1_23->unkC = (s32) saved_reg_r9->unkC;
            }
            arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
        } else {
            arg35 = 1;
            temp_r4_14 = (s32) (temp_r1_23 - arg4C->unk0) >> 4;
            var_r0_9 = &arg34;
            *var_r0_9 = temp_r4_14;
            if ((u32) temp_r4_14 < (u32) arg35) {
                var_r0_9 = &arg35;
            }
            temp_r0_42 = temp_r4_14 + *var_r0_9;
            if (temp_r0_42 != 0) {
                temp_r4_15 = temp_r0_42 * 0x10;
                var_r0_10 = malloc(temp_r4_15);
                var_sl_5 = temp_r4_15;
                if (var_r0_10 == 0) {
                    var_r0_10 = func_080D3BC0(var_sl_5);
                }
            } else {
                var_r0_10 = 0;
                var_sl_5 = 0;
            }
            arg4D = var_r0_10;
            var_r2_14 = arg4C->unk0;
            var_r3_14 = var_r0_10;
            if (var_r2_14 != temp_r1_23) {
                do {
                    if (var_r3_14 != 0) {
                        var_r3_14->unk0 = (s32) var_r2_14->unk0;
                        var_r3_14->unk4 = (s32) var_r2_14->unk4;
                        var_r3_14->unk8 = (s32) var_r2_14->unk8;
                        var_r3_14->unkC = (s32) var_r2_14->unkC;
                    }
                    var_r2_14 += 0x10;
                    var_r3_14 += 0x10;
                } while (var_r2_14 != temp_r1_23);
            }
            if (arg35 == 1) {
                if (var_r3_14 != 0) {
                    var_r3_14->unk0 = (s32) arg14.unk0;
                    var_r3_14->unk4 = (s32) arg14.unk4;
                    var_r3_14->unk8 = (s32) arg14.unk8;
                    var_r3_14->unkC = (s32) arg14.unkC;
                }
                var_r5_5 = var_r3_14 + 0x10;
            } else {
                var_r3_15 = arg35;
                var_r2_15 = var_r3_14;
                if (var_r3_15 != 0) {
                    do {
                        if (var_r2_15 != 0) {
                            var_r2_15->unk0 = (s32) arg14.unk0;
                            var_r2_15->unk4 = (s32) arg14.unk4;
                            var_r2_15->unk8 = (s32) arg14.unk8;
                            var_r2_15->unkC = (s32) arg14.unkC;
                        }
                        var_r3_15 -= 1;
                        var_r2_15 += 0x10;
                    } while (var_r3_15 != 0);
                }
                var_r5_5 = var_r2_15;
            }
            temp_r2_10 = arg4C->unk4;
            temp_r0_43 = arg4C->unk0;
            var_r1_6 = temp_r0_43;
            if (temp_r0_43 != temp_r2_10) {
                do {
                    var_r1_6 += 0x10;
                } while (var_r1_6 != temp_r2_10);
            }
            if (temp_r0_43 != 0) {
                free();
            }
            arg4C->unk0 = arg4D;
            arg4C->unk4 = var_r5_5;
            arg4C->unkC = (void *) (arg4D + var_sl_5);
        }
    }
    temp_r3_4 = func_08008920(saved_reg_r6);
    var_r2_16 = 0;
    if (argC != 0) {
        var_r2_16 = arg4.unk24;
    }
    func_0805E99C(temp_r3_4, argC, var_r2_16, &arg5);
    temp_r0_44 = saved_reg_r6->unk42C;
    if (temp_r0_44 != 1) {

    } else {
        temp_r1_24 = saved_reg_r6->unk3F8;
        (*temp_r1_24)->unk10(&arg14, temp_r1_24, *(saved_reg_r6->unk3FC + ((saved_reg_r6 + 0x3F8)->unkC * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_45 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_25 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_25->unk4 = (s32) temp_r0_45->unk4;
        temp_r1_25->unk8 = (s32) temp_r0_45->unk8;
        temp_r1_25->unkC = (s32) temp_r0_45->unkC;
        (temp_r1_25 + 0xC)->unk4 = (s32) (temp_r0_45 + 0xC)->unk4;
        temp_r0_46 = saved_reg_r6 + 0x40C;
        temp_r0_47 = temp_r0_46 + 0xC;
        arg5.unk0 = (s32) saved_reg_r6->unk40C;
        arg5.unk4 = (s32) temp_r0_46->unk4;
        arg5.unk8 = (s32) temp_r0_46->unk8;
        temp_r1_26 = &arg5 + 0xC;
        arg5.unkC = (s32) temp_r0_46->unkC;
        temp_r1_26->unk4 = (s32) temp_r0_47->unk4;
        temp_r1_26->unk8 = (s32) temp_r0_47->unk8;
        temp_r1_26->unkC = (s32) temp_r0_47->unkC;
        arg5.unk0 = (s16) (((saved_reg_r6 + 0x2268)->unk2 - saved_reg_r6->unk2330) - 8);
        arg5.unk2 = (u16) ((saved_reg_r6 + 0x226C)->unk2 - 0x18);
        arg5.unk8 = 2;
        temp_r4_16 = saved_reg_r6 + 0x4E0;
        arg5.unk6 = func_08007D4C(temp_r4_16, temp_r4_16->unk4);
        temp_r0_48 = saved_reg_r6 + 0x4E8;
        arg5.unk4 = func_080074C0(temp_r0_48, temp_r0_48->unk4);
        arg5.unk18 = temp_r0_44;
        if ((s32) (saved_reg_r6->unk428 << 0x1E) >= 0) {

        } else {
            temp_r5_5 = func_08008910(saved_reg_r6);
            temp_r2_11 = func_08007D4C(temp_r4_16, temp_r4_16->unk4);
            var_r3_16 = 0;
            if (argE != 0) {
                var_r3_16 = arg4.unk2C;
            }
            arg4C = temp_r5_5;
            func_08008F0C(saved_reg_r9, argE, (temp_r2_11 << 5) + 0x06010000, (u32) var_r3_16);
            temp_r1_27 = temp_r5_5->unk4;
            if (temp_r1_27 != temp_r5_5->unkC) {
                if (temp_r1_27 != 0) {
                    temp_r1_27->unk0 = (s32) saved_reg_r9->unk0;
                    temp_r1_27->unk4 = (s32) saved_reg_r9->unk4;
                    temp_r1_27->unk8 = (s32) saved_reg_r9->unk8;
                    temp_r1_27->unkC = (s32) saved_reg_r9->unkC;
                }
                arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
            } else {
                arg37 = (u32) temp_r0_44;
                temp_r4_17 = (s32) (temp_r1_27 - arg4C->unk0) >> 4;
                var_r0_11 = &arg36;
                *var_r0_11 = temp_r4_17;
                if ((u32) temp_r4_17 < (u32) arg37) {
                    var_r0_11 = &arg37;
                }
                temp_r0_49 = temp_r4_17 + *var_r0_11;
                if (temp_r0_49 != 0) {
                    temp_r4_18 = temp_r0_49 * 0x10;
                    var_r0_12 = malloc(temp_r4_18);
                    var_sl_6 = temp_r4_18;
                    if (var_r0_12 == 0) {
                        var_r0_12 = func_080D3BC0(var_sl_6);
                    }
                } else {
                    var_r0_12 = 0;
                    var_sl_6 = 0;
                }
                arg4D = var_r0_12;
                var_r2_17 = arg4C->unk0;
                var_r3_17 = var_r0_12;
                if (var_r2_17 != temp_r1_27) {
                    do {
                        if (var_r3_17 != 0) {
                            var_r3_17->unk0 = (s32) var_r2_17->unk0;
                            var_r3_17->unk4 = (s32) var_r2_17->unk4;
                            var_r3_17->unk8 = (s32) var_r2_17->unk8;
                            var_r3_17->unkC = (s32) var_r2_17->unkC;
                        }
                        var_r2_17 += 0x10;
                        var_r3_17 += 0x10;
                    } while (var_r2_17 != temp_r1_27);
                }
                if (arg37 == 1) {
                    if (var_r3_17 != 0) {
                        var_r3_17->unk0 = (s32) arg14.unk0;
                        var_r3_17->unk4 = (s32) arg14.unk4;
                        var_r3_17->unk8 = (s32) arg14.unk8;
                        var_r3_17->unkC = (s32) arg14.unkC;
                    }
                    var_r5_6 = var_r3_17 + 0x10;
                } else {
                    var_r3_18 = arg37;
                    var_r2_18 = var_r3_17;
                    if (var_r3_18 != 0) {
                        do {
                            if (var_r2_18 != 0) {
                                var_r2_18->unk0 = (s32) arg14.unk0;
                                var_r2_18->unk4 = (s32) arg14.unk4;
                                var_r2_18->unk8 = (s32) arg14.unk8;
                                var_r2_18->unkC = (s32) arg14.unkC;
                            }
                            var_r3_18 -= 1;
                            var_r2_18 += 0x10;
                        } while (var_r3_18 != 0);
                    }
                    var_r5_6 = var_r2_18;
                }
                temp_r2_12 = arg4C->unk4;
                temp_r0_50 = arg4C->unk0;
                var_r1_7 = temp_r0_50;
                if (temp_r0_50 != temp_r2_12) {
                    do {
                        var_r1_7 += 0x10;
                    } while (var_r1_7 != temp_r2_12);
                }
                if (temp_r0_50 != 0) {
                    free();
                }
                arg4C->unk0 = arg4D;
                arg4C->unk4 = var_r5_6;
                arg4C->unkC = (void *) (arg4D + var_sl_6);
            }
        }
        temp_r3_5 = func_08008920(saved_reg_r6);
        var_r2_19 = 0;
        if (argC != 0) {
            var_r2_19 = arg4.unk24;
        }
        func_0805E99C(temp_r3_5, argC, var_r2_19, &arg5);
    }
    temp_r0_51 = saved_reg_r6->unk464;
    if (temp_r0_51 != 1) {

    } else {
        temp_r1_28 = saved_reg_r6->unk430;
        (*temp_r1_28)->unk10(&arg14, temp_r1_28, *(saved_reg_r6->unk434 + ((saved_reg_r6 + 0x430)->unkC * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_52 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_29 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_29->unk4 = (s32) temp_r0_52->unk4;
        temp_r1_29->unk8 = (s32) temp_r0_52->unk8;
        temp_r1_29->unkC = (s32) temp_r0_52->unkC;
        (temp_r1_29 + 0xC)->unk4 = (s32) (temp_r0_52 + 0xC)->unk4;
        temp_r0_53 = saved_reg_r6 + 0x444;
        temp_r0_54 = temp_r0_53 + 0xC;
        arg5.unk0 = (s32) saved_reg_r6->unk444;
        arg5.unk4 = (s32) temp_r0_53->unk4;
        arg5.unk8 = (s32) temp_r0_53->unk8;
        temp_r1_30 = &arg5 + 0xC;
        arg5.unkC = (s32) temp_r0_53->unkC;
        temp_r1_30->unk4 = (s32) temp_r0_54->unk4;
        temp_r1_30->unk8 = (s32) temp_r0_54->unk8;
        temp_r1_30->unkC = (s32) temp_r0_54->unkC;
        arg5.unk0 = (s16) ((saved_reg_r6 + 0x2268)->unk2 - saved_reg_r6->unk2330);
        arg5.unk2 = (u16) ((saved_reg_r6 + 0x226C)->unk2 - (saved_reg_r6->unk228C + 8));
        arg5.unk8 = 2;
        temp_r4_19 = saved_reg_r6 + 0x4F0;
        arg5.unk6 = func_08007D4C(temp_r4_19, temp_r4_19->unk4);
        temp_r0_55 = saved_reg_r6 + 0x4F8;
        arg5.unk4 = func_080074C0(temp_r0_55, temp_r0_55->unk4);
        arg5.unk18 = temp_r0_51;
        if ((s32) (saved_reg_r6->unk460 << 0x1E) >= 0) {

        } else {
            temp_r5_6 = func_08008910(saved_reg_r6);
            temp_r2_13 = func_08007D4C(temp_r4_19, temp_r4_19->unk4);
            var_r3_19 = 0;
            if (argE != 0) {
                var_r3_19 = arg4.unk2C;
            }
            arg4C = temp_r5_6;
            func_08008F0C(saved_reg_r9, argE, (temp_r2_13 << 5) + 0x06010000, (u32) var_r3_19);
            temp_r1_31 = temp_r5_6->unk4;
            if (temp_r1_31 != temp_r5_6->unkC) {
                if (temp_r1_31 != 0) {
                    temp_r1_31->unk0 = (s32) saved_reg_r9->unk0;
                    temp_r1_31->unk4 = (s32) saved_reg_r9->unk4;
                    temp_r1_31->unk8 = (s32) saved_reg_r9->unk8;
                    temp_r1_31->unkC = (s32) saved_reg_r9->unkC;
                }
                arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
            } else {
                arg39 = (u32) temp_r0_51;
                temp_r4_20 = (s32) (temp_r1_31 - arg4C->unk0) >> 4;
                var_r0_13 = &arg38;
                *var_r0_13 = temp_r4_20;
                if ((u32) temp_r4_20 < (u32) arg39) {
                    var_r0_13 = &arg39;
                }
                temp_r0_56 = temp_r4_20 + *var_r0_13;
                if (temp_r0_56 != 0) {
                    temp_r4_21 = temp_r0_56 * 0x10;
                    var_r0_14 = malloc(temp_r4_21);
                    var_sl_7 = temp_r4_21;
                    if (var_r0_14 == 0) {
                        var_r0_14 = func_080D3BC0(var_sl_7);
                    }
                } else {
                    var_r0_14 = 0;
                    var_sl_7 = 0;
                }
                arg4D = var_r0_14;
                var_r2_20 = arg4C->unk0;
                var_r3_20 = var_r0_14;
                if (var_r2_20 != temp_r1_31) {
                    do {
                        if (var_r3_20 != 0) {
                            var_r3_20->unk0 = (s32) var_r2_20->unk0;
                            var_r3_20->unk4 = (s32) var_r2_20->unk4;
                            var_r3_20->unk8 = (s32) var_r2_20->unk8;
                            var_r3_20->unkC = (s32) var_r2_20->unkC;
                        }
                        var_r2_20 += 0x10;
                        var_r3_20 += 0x10;
                    } while (var_r2_20 != temp_r1_31);
                }
                if (arg39 == 1) {
                    if (var_r3_20 != 0) {
                        var_r3_20->unk0 = (s32) arg14.unk0;
                        var_r3_20->unk4 = (s32) arg14.unk4;
                        var_r3_20->unk8 = (s32) arg14.unk8;
                        var_r3_20->unkC = (s32) arg14.unkC;
                    }
                    var_r5_7 = var_r3_20 + 0x10;
                } else {
                    var_r3_21 = arg39;
                    var_r2_21 = var_r3_20;
                    if (var_r3_21 != 0) {
                        do {
                            if (var_r2_21 != 0) {
                                var_r2_21->unk0 = (s32) arg14.unk0;
                                var_r2_21->unk4 = (s32) arg14.unk4;
                                var_r2_21->unk8 = (s32) arg14.unk8;
                                var_r2_21->unkC = (s32) arg14.unkC;
                            }
                            var_r3_21 -= 1;
                            var_r2_21 += 0x10;
                        } while (var_r3_21 != 0);
                    }
                    var_r5_7 = var_r2_21;
                }
                temp_r2_14 = arg4C->unk4;
                temp_r0_57 = arg4C->unk0;
                var_r1_8 = temp_r0_57;
                if (temp_r0_57 != temp_r2_14) {
                    do {
                        var_r1_8 += 0x10;
                    } while (var_r1_8 != temp_r2_14);
                }
                if (temp_r0_57 != 0) {
                    free();
                }
                arg4C->unk0 = arg4D;
                arg4C->unk4 = var_r5_7;
                arg4C->unkC = (void *) (arg4D + var_sl_7);
            }
        }
        temp_r3_6 = func_08008920(saved_reg_r6);
        var_r2_22 = 0;
        if (argC != 0) {
            var_r2_22 = arg4.unk24;
        }
        func_0805E99C(temp_r3_6, argC, var_r2_22, &arg5);
    }
    temp_r0_58 = saved_reg_r6->unk3BC;
    if (temp_r0_58 != 1) {

    } else {
        temp_r1_32 = saved_reg_r6->unk388;
        (*temp_r1_32)->unk10(&arg14, temp_r1_32, *(saved_reg_r6->unk38C + ((saved_reg_r6 + 0x388)->unkC * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_59 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_33 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_33->unk4 = (s32) temp_r0_59->unk4;
        temp_r1_33->unk8 = (s32) temp_r0_59->unk8;
        temp_r1_33->unkC = (s32) temp_r0_59->unkC;
        (temp_r1_33 + 0xC)->unk4 = (s32) (temp_r0_59 + 0xC)->unk4;
        temp_r0_60 = saved_reg_r6 + 0x39C;
        temp_r0_61 = temp_r0_60 + 0xC;
        arg5.unk0 = (s32) saved_reg_r6->unk39C;
        arg5.unk4 = (s32) temp_r0_60->unk4;
        arg5.unk8 = (s32) temp_r0_60->unk8;
        temp_r1_34 = &arg5 + 0xC;
        arg5.unkC = (s32) temp_r0_60->unkC;
        temp_r1_34->unk4 = (s32) temp_r0_61->unk4;
        temp_r1_34->unk8 = (s32) temp_r0_61->unk8;
        temp_r1_34->unkC = (s32) temp_r0_61->unkC;
        arg5.unk0 = (s16) ((saved_reg_r6 + 0x2294)->unk2 - saved_reg_r6->unk2330);
        arg5.unk2 = (u16) (saved_reg_r6 + 0x2298)->unk2;
        arg5.unk8 = 2;
        temp_r4_22 = saved_reg_r6 + 0x4D0;
        arg5.unk6 = func_08007D4C(temp_r4_22, temp_r4_22->unk4);
        temp_r0_62 = saved_reg_r6 + 0x4D8;
        arg5.unk4 = func_080074C0(temp_r0_62, temp_r0_62->unk4);
        arg5.unk18 = temp_r0_58;
        if ((s32) (saved_reg_r6->unk3B8 << 0x1E) >= 0) {

        } else {
            temp_r5_7 = func_08008910(saved_reg_r6);
            temp_r2_15 = func_08007D4C(temp_r4_22, temp_r4_22->unk4);
            var_r3_22 = 0;
            if (argE != 0) {
                var_r3_22 = arg4.unk2C;
            }
            arg4C = temp_r5_7;
            func_08008F0C(saved_reg_r9, argE, (temp_r2_15 << 5) + 0x06010000, (u32) var_r3_22);
            temp_r1_35 = temp_r5_7->unk4;
            if (temp_r1_35 != temp_r5_7->unkC) {
                if (temp_r1_35 != 0) {
                    temp_r1_35->unk0 = (s32) saved_reg_r9->unk0;
                    temp_r1_35->unk4 = (s32) saved_reg_r9->unk4;
                    temp_r1_35->unk8 = (s32) saved_reg_r9->unk8;
                    temp_r1_35->unkC = (s32) saved_reg_r9->unkC;
                }
                arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
            } else {
                arg3B = (u32) temp_r0_58;
                temp_r4_23 = (s32) (temp_r1_35 - arg4C->unk0) >> 4;
                var_r0_15 = &arg3A;
                *var_r0_15 = temp_r4_23;
                if ((u32) temp_r4_23 < (u32) arg3B) {
                    var_r0_15 = &arg3B;
                }
                temp_r0_63 = temp_r4_23 + *var_r0_15;
                if (temp_r0_63 != 0) {
                    temp_r4_24 = temp_r0_63 * 0x10;
                    var_r0_16 = malloc(temp_r4_24);
                    var_sl_8 = temp_r4_24;
                    if (var_r0_16 == 0) {
                        var_r0_16 = func_080D3BC0(var_sl_8);
                    }
                } else {
                    var_r0_16 = 0;
                    var_sl_8 = 0;
                }
                arg4D = var_r0_16;
                var_r2_23 = arg4C->unk0;
                var_r3_23 = var_r0_16;
                if (var_r2_23 != temp_r1_35) {
                    do {
                        if (var_r3_23 != 0) {
                            var_r3_23->unk0 = (s32) var_r2_23->unk0;
                            var_r3_23->unk4 = (s32) var_r2_23->unk4;
                            var_r3_23->unk8 = (s32) var_r2_23->unk8;
                            var_r3_23->unkC = (s32) var_r2_23->unkC;
                        }
                        var_r2_23 += 0x10;
                        var_r3_23 += 0x10;
                    } while (var_r2_23 != temp_r1_35);
                }
                if (arg3B == 1) {
                    if (var_r3_23 != 0) {
                        var_r3_23->unk0 = (s32) arg14.unk0;
                        var_r3_23->unk4 = (s32) arg14.unk4;
                        var_r3_23->unk8 = (s32) arg14.unk8;
                        var_r3_23->unkC = (s32) arg14.unkC;
                    }
                    var_r5_8 = var_r3_23 + 0x10;
                } else {
                    var_r3_24 = arg3B;
                    var_r2_24 = var_r3_23;
                    if (var_r3_24 != 0) {
                        do {
                            if (var_r2_24 != 0) {
                                var_r2_24->unk0 = (s32) arg14.unk0;
                                var_r2_24->unk4 = (s32) arg14.unk4;
                                var_r2_24->unk8 = (s32) arg14.unk8;
                                var_r2_24->unkC = (s32) arg14.unkC;
                            }
                            var_r3_24 -= 1;
                            var_r2_24 += 0x10;
                        } while (var_r3_24 != 0);
                    }
                    var_r5_8 = var_r2_24;
                }
                temp_r2_16 = arg4C->unk4;
                temp_r0_64 = arg4C->unk0;
                var_r1_9 = temp_r0_64;
                if (temp_r0_64 != temp_r2_16) {
                    do {
                        var_r1_9 += 0x10;
                    } while (var_r1_9 != temp_r2_16);
                }
                if (temp_r0_64 != 0) {
                    free();
                }
                arg4C->unk0 = arg4D;
                arg4C->unk4 = var_r5_8;
                arg4C->unkC = (void *) (arg4D + var_sl_8);
            }
        }
        temp_r3_7 = func_08008920(saved_reg_r6);
        var_r2_25 = 0;
        if (argC != 0) {
            var_r2_25 = arg4.unk24;
        }
        func_0805E99C(temp_r3_7, argC, var_r2_25, &arg5);
    }
    temp_r0_65 = saved_reg_r6->unk34C;
    if (temp_r0_65 != 1) {

    } else {
        temp_r1_36 = saved_reg_r6->unk318;
        (*temp_r1_36)->unk10(&arg14, temp_r1_36, *(saved_reg_r6->unk31C + ((saved_reg_r6 + 0x318)->unkC * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_66 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_37 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_37->unk4 = (s32) temp_r0_66->unk4;
        temp_r1_37->unk8 = (s32) temp_r0_66->unk8;
        temp_r1_37->unkC = (s32) temp_r0_66->unkC;
        (temp_r1_37 + 0xC)->unk4 = (s32) (temp_r0_66 + 0xC)->unk4;
        temp_r0_67 = saved_reg_r6 + 0x32C;
        temp_r0_68 = temp_r0_67 + 0xC;
        arg5.unk0 = (s32) saved_reg_r6->unk32C;
        arg5.unk4 = (s32) temp_r0_67->unk4;
        arg5.unk8 = (s32) temp_r0_67->unk8;
        temp_r1_38 = &arg5 + 0xC;
        arg5.unkC = (s32) temp_r0_67->unkC;
        temp_r1_38->unk4 = (s32) temp_r0_68->unk4;
        temp_r1_38->unk8 = (s32) temp_r0_68->unk8;
        temp_r1_38->unkC = (s32) temp_r0_68->unkC;
        arg5.unk0 = (s16) ((saved_reg_r6 + 0x2294)->unk2 - saved_reg_r6->unk2330);
        arg5.unk2 = (u16) (saved_reg_r6 + 0x2298)->unk2;
        arg5.unk8 = 2;
        temp_r4_25 = saved_reg_r6 + 0x4B8;
        arg5.unk6 = func_08007D4C(temp_r4_25, temp_r4_25->unk4);
        temp_r0_69 = saved_reg_r6 + 0x4C0;
        arg5.unk4 = func_080074C0(temp_r0_69, temp_r0_69->unk4);
        arg5.unk18 = temp_r0_65;
        if ((s32) (saved_reg_r6->unk348 << 0x1E) >= 0) {

        } else {
            temp_r5_8 = func_08008910(saved_reg_r6);
            temp_r2_17 = func_08007D4C(temp_r4_25, temp_r4_25->unk4);
            var_r3_25 = 0;
            if (argE != 0) {
                var_r3_25 = arg4.unk2C;
            }
            arg4C = temp_r5_8;
            func_08008F0C(saved_reg_r9, argE, (temp_r2_17 << 5) + 0x06010000, (u32) var_r3_25);
            temp_r1_39 = temp_r5_8->unk4;
            if (temp_r1_39 != temp_r5_8->unkC) {
                if (temp_r1_39 != 0) {
                    temp_r1_39->unk0 = (s32) saved_reg_r9->unk0;
                    temp_r1_39->unk4 = (s32) saved_reg_r9->unk4;
                    temp_r1_39->unk8 = (s32) saved_reg_r9->unk8;
                    temp_r1_39->unkC = (s32) saved_reg_r9->unkC;
                }
                arg4C->unk4 = (void *) (arg4C->unk4 + 0x10);
            } else {
                arg3D = (u32) temp_r0_65;
                temp_r4_26 = (s32) (temp_r1_39 - arg4C->unk0) >> 4;
                var_r0_17 = &arg3C;
                *var_r0_17 = temp_r4_26;
                if ((u32) temp_r4_26 < (u32) arg3D) {
                    var_r0_17 = &arg3D;
                }
                temp_r0_70 = temp_r4_26 + *var_r0_17;
                if (temp_r0_70 != 0) {
                    temp_r4_27 = temp_r0_70 * 0x10;
                    var_r0_18 = malloc(temp_r4_27);
                    var_sl_9 = temp_r4_27;
                    if (var_r0_18 == 0) {
                        var_r0_18 = func_080D3BC0(var_sl_9);
                    }
                } else {
                    var_r0_18 = 0;
                    var_sl_9 = 0;
                }
                arg4D = var_r0_18;
                var_r2_26 = arg4C->unk0;
                var_r3_26 = var_r0_18;
                if (var_r2_26 != temp_r1_39) {
                    do {
                        if (var_r3_26 != 0) {
                            var_r3_26->unk0 = (s32) var_r2_26->unk0;
                            var_r3_26->unk4 = (s32) var_r2_26->unk4;
                            var_r3_26->unk8 = (s32) var_r2_26->unk8;
                            var_r3_26->unkC = (s32) var_r2_26->unkC;
                        }
                        var_r2_26 += 0x10;
                        var_r3_26 += 0x10;
                    } while (var_r2_26 != temp_r1_39);
                }
                if (arg3D == 1) {
                    if (var_r3_26 != 0) {
                        var_r3_26->unk0 = (s32) arg14.unk0;
                        var_r3_26->unk4 = (s32) arg14.unk4;
                        var_r3_26->unk8 = (s32) arg14.unk8;
                        var_r3_26->unkC = (s32) arg14.unkC;
                    }
                    var_r5_9 = var_r3_26 + 0x10;
                } else {
                    var_r3_27 = arg3D;
                    var_r2_27 = var_r3_26;
                    if (var_r3_27 != 0) {
                        do {
                            if (var_r2_27 != 0) {
                                var_r2_27->unk0 = (s32) arg14.unk0;
                                var_r2_27->unk4 = (s32) arg14.unk4;
                                var_r2_27->unk8 = (s32) arg14.unk8;
                                var_r2_27->unkC = (s32) arg14.unkC;
                            }
                            var_r3_27 -= 1;
                            var_r2_27 += 0x10;
                        } while (var_r3_27 != 0);
                    }
                    var_r5_9 = var_r2_27;
                }
                temp_r2_18 = arg4C->unk4;
                temp_r0_71 = arg4C->unk0;
                var_r1_10 = temp_r0_71;
                if (temp_r0_71 != temp_r2_18) {
                    do {
                        var_r1_10 += 0x10;
                    } while (var_r1_10 != temp_r2_18);
                }
                if (temp_r0_71 != 0) {
                    free();
                }
                arg4C->unk0 = arg4D;
                arg4C->unk4 = var_r5_9;
                arg4C->unkC = (void *) (arg4D + var_sl_9);
            }
        }
        temp_r3_8 = func_08008920(saved_reg_r6);
        var_r2_28 = 0;
        if (argC != 0) {
            var_r2_28 = arg4.unk24;
        }
        func_0805E99C(temp_r3_8, argC, var_r2_28, &arg5);
    }
    if ((u32) saved_reg_r6->unk2330 <= 0xFFU) {
        temp_r4_28 = saved_reg_r6 + 0x2E0;
        func_0805E860(temp_r4_28, 0x91BU);
        temp_r1_40 = saved_reg_r6->unk2E0;
        (*temp_r1_40)->unk10(&arg14, temp_r1_40, *(*arg4A + (temp_r4_28->unkC * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_72 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_41 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_41->unk4 = (s32) temp_r0_72->unk4;
        temp_r1_41->unk8 = (s32) temp_r0_72->unk8;
        temp_r1_41->unkC = (s32) temp_r0_72->unkC;
        (temp_r1_41 + 0xC)->unk4 = (s32) (temp_r0_72 + 0xC)->unk4;
        temp_r0_73 = saved_reg_r6 + 0x2F4;
        temp_r0_74 = temp_r0_73 + 0xC;
        arg5.unk0 = (s32) saved_reg_r6->unk2F4;
        arg5.unk4 = (s32) temp_r0_73->unk4;
        arg5.unk8 = (s32) temp_r0_73->unk8;
        temp_r1_42 = &arg5 + 0xC;
        arg5.unkC = (s32) temp_r0_73->unkC;
        temp_r1_42->unk4 = (s32) temp_r0_74->unk4;
        temp_r1_42->unk8 = (s32) temp_r0_74->unk8;
        temp_r1_42->unkC = (s32) temp_r0_74->unkC;
        arg5.unk0 = (s16) (0x40 - saved_reg_r6->unk2330);
        arg5.unk2 = 0x50U;
        arg5.unk8 = 2;
        temp_r0_75 = saved_reg_r6 + 0x4A8;
        arg5.unk6 = (s16) (func_08007D4C(temp_r0_75, temp_r0_75->unk4) + 2);
        temp_r0_76 = saved_reg_r6 + 0x4B0;
        arg5.unk4 = func_080074C0(temp_r0_76, temp_r0_76->unk4);
        arg5.unk18 = 1U;
        temp_r3_9 = func_08008920(saved_reg_r6);
        var_r2_29 = 0;
        if (argC != 0) {
            var_r2_29 = arg4.unk24;
        }
        func_0805E99C(temp_r3_9, argC, var_r2_29, &arg5);
    }
    temp_r5_9 = saved_reg_r6 + 0x2E0;
    func_0805E860(temp_r5_9, 0x91AU);
    temp_r1_43 = saved_reg_r6->unk2E0;
    (*temp_r1_43)->unk10(&arg14, temp_r1_43, *(*arg4A + (temp_r5_9->unkC * 4)));
    memcpy(saved_reg_r9, saved_reg_r9, 0x20);
    temp_r4_29 = saved_reg_r9 + 0xC;
    argC.unk0 = saved_reg_r9->unk0;
    argC.unk4 = (s32) saved_reg_r9->unk4;
    argC.unk8 = (s32) saved_reg_r9->unk8;
    temp_r0_77 = &argC + 0xC;
    argC.unkC = (s32) saved_reg_r9->unkC;
    temp_r0_77->unk4 = (s32) temp_r4_29->unk4;
    temp_r0_77->unk8 = (s32) temp_r4_29->unk8;
    temp_r0_77->unkC = (s32) temp_r4_29->unkC;
    (temp_r0_77 + 0xC)->unk4 = (s32) (temp_r4_29 + 0xC)->unk4;
    temp_r4_30 = saved_reg_r6 + 0x2F4;
    arg47 = temp_r4_30;
    temp_r0_78 = temp_r4_30 + 0xC;
    arg5.unk0 = (s32) saved_reg_r6->unk2F4;
    arg5.unk4 = (s32) temp_r4_30->unk4;
    arg5.unk8 = (s32) temp_r4_30->unk8;
    temp_r1_44 = &arg5 + 0xC;
    arg5.unkC = (s32) temp_r4_30->unkC;
    temp_r1_44->unk4 = (s32) temp_r0_78->unk4;
    temp_r1_44->unk8 = (s32) temp_r0_78->unk8;
    temp_r1_44->unkC = (s32) temp_r0_78->unkC;
    arg5.unk0 = (s16) ((saved_reg_r6 + 0x2268)->unk2 - saved_reg_r6->unk2330);
    arg5.unk2 = 0x50U;
    arg5.unk8 = 2;
    temp_r7_2 = saved_reg_r6 + 0x4A8;
    arg5.unk6 = func_08007D4C(temp_r7_2, temp_r7_2->unk4);
    temp_r4_31 = saved_reg_r6 + 0x4B0;
    arg5.unk4 = func_080074C0(temp_r4_31, temp_r4_31->unk4);
    arg5.unk18 = 1U;
    temp_r3_10 = func_08008920(saved_reg_r6);
    var_r2_30 = 0;
    if (argC != 0) {
        var_r2_30 = (u16) argC.unk4;
    }
    func_0805E99C(temp_r3_10, argC, var_r2_30, &arg5);
    temp_r0_79 = saved_reg_r6->unk34C;
    if (temp_r0_79 == 1) {
        func_0805E860(temp_r5_9, 0x91AU);
        temp_r1_45 = saved_reg_r6->unk2E0;
        (*temp_r1_45)->unk10(saved_reg_r9, temp_r1_45, *(*arg4A + (temp_r5_9->unkC * 4)));
        memcpy(saved_reg_r9, saved_reg_r9, 0x20);
        temp_r0_80 = saved_reg_r9 + 0xC;
        argC.unk0 = saved_reg_r9->unk0;
        argC.unk4 = (s32) saved_reg_r9->unk4;
        argC.unk8 = (s32) saved_reg_r9->unk8;
        temp_r1_46 = &argC + 0xC;
        argC.unkC = (s32) saved_reg_r9->unkC;
        temp_r1_46->unk4 = (s32) temp_r0_80->unk4;
        temp_r1_46->unk8 = (s32) temp_r0_80->unk8;
        temp_r1_46->unkC = (s32) temp_r0_80->unkC;
        (temp_r1_46 + 0xC)->unk4 = (s32) (temp_r0_80 + 0xC)->unk4;
        temp_r0_81 = arg47 + 0xC;
        arg5.unk0 = (s32) arg47->unk0;
        arg5.unk4 = (s32) arg47->unk4;
        arg5.unk8 = (s32) arg47->unk8;
        temp_r1_47 = &arg5 + 0xC;
        arg5.unkC = (s32) arg47->unkC;
        temp_r1_47->unk4 = (s32) temp_r0_81->unk4;
        temp_r1_47->unk8 = (s32) temp_r0_81->unk8;
        temp_r1_47->unkC = (s32) temp_r0_81->unkC;
        arg5.unk0 = (s16) ((saved_reg_r6 + 0x2294)->unk2 - saved_reg_r6->unk2330);
        arg5.unk2 = 0x50U;
        arg5.unk8 = 2;
        arg5.unk6 = func_08007D4C(temp_r7_2, temp_r7_2->unk4);
        arg5.unk4 = func_080074C0(temp_r4_31, temp_r4_31->unk4);
        arg5.unk18 = temp_r0_79;
        temp_r0_82 = func_08008920(saved_reg_r6);
        var_r2_31 = 0;
        if (argC != 0) {
            var_r2_31 = arg4.unk24;
        }
        func_0805E99C(temp_r0_82, argC, var_r2_31, &arg5);
    }
}
