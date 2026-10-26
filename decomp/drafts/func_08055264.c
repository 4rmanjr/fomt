s32 func_0800736C(void *);                          /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008E64(s32, s32, u16);                     /* extern */
s32 func_0805E790(s32 *, void *, s32);                  /* extern */
s32 func_0805E860(void *, u16);                       /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
s32 rand();                                         /* extern */
extern ? gUnk_080FA36C;

void func_08055264(void *arg0) {
    s32 sp0;
    s32 sp8;
    s32 sp10;
    s32 sp18;
s32 sp20;
    s32 *sp40;
    s32 *sp44;
    s32 *sp48;
    s32 *sp4C;
    s32 *sp50;
    void *sp54;
    s32 *sp58;
    s32 *sp5C;
    s32 *sp60;
    s16 var_r6_4;
    s32 temp_r1_12;
    s32 temp_r1_14;
    s32 temp_r1_17;
    s32 temp_r1_18;
    s32 temp_r1_21;
    s32 temp_r1_24;
    s32 temp_r1_27;
    s32 temp_r1_30;
    s32 temp_r1_31;
    s32 temp_r1_34;
    s32 temp_r1_35;
    s32 temp_r1_3;
    s32 temp_r1_6;
    s32 temp_r1_9;
    s32 var_r0;
    s32 var_r5_2;
    s32 var_r5_4;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_sb;
    u16 var_r1;
    u16 var_r1_2;
    u16 var_r2;
    u16 var_r2_10;
    u16 var_r2_11;
    u16 var_r2_12;
    u16 var_r2_13;
    u16 var_r2_14;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r2_4;
    u16 var_r2_5;
    u16 var_r2_6;
    u16 var_r2_7;
    u16 var_r2_8;
    u16 var_r2_9;
    u16 var_r5;
    void **temp_r1;
    void **temp_r1_10;
    void **temp_r1_15;
    void **temp_r1_19;
    void **temp_r1_22;
    void **temp_r1_25;
    void **temp_r1_28;
    void **temp_r1_32;
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
    void *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_11;
    void *temp_r1_13;
    void *temp_r1_16;
    void *temp_r1_20;
    void *temp_r1_23;
    void *temp_r1_26;
    void *temp_r1_29;
    void *temp_r1_2;
    void *temp_r1_33;
    void *temp_r1_5;
    void *temp_r1_8;
    void *temp_r2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;
    void *temp_r6;
    void *var_r4;
    void *var_r5_3;
    void *var_r6_3;

    sp0 = 0;
    sp0.unk4 = 0;
    sp8 = 0;
    sp8.unk4 = 0U;
    sp10 = 0;
    sp10.unk4 = 0;
    sp18 = 0;
    sp18.unk4 = 0;
    temp_r1 = arg0->unk238;
    (*temp_r1)->unk10(&sp20, temp_r1, *(arg0->unk23C + ((arg0 + 0x238)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_2 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r0_2 = arg0 + 0x470;
    temp_r1_3 = (func_080074C0(temp_r0_2, temp_r0_2->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (sp10 != 0) {
        var_r2 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_3, var_r2);
    temp_r1_4 = arg0->unk270;
    (*temp_r1_4)->unk10(&sp20, temp_r1_4, *(arg0->unk274 + ((arg0 + 0x270)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_3 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_5 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_5->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_5->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_5->unkC = (s32) temp_r0_3->unkC;
    (temp_r1_5 + 0xC)->unk4 = (s32) (temp_r0_3 + 0xC)->unk4;
    temp_r0_4 = arg0 + 0x480;
    temp_r1_6 = (func_080074C0(temp_r0_4, temp_r0_4->unk4) << 5) + 0x05000200;
    var_r2_2 = 0;
    sp60 = arg0 + 0x274;
    if (sp10 != 0) {
        var_r2_2 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_6, var_r2_2);
    var_r6 = 0;
    var_r5 = 0;
    sp48 = arg0 + 0x2AC;
    sp54 = arg0 + 0x80;
    sp4C = arg0 + 0x2E4;
    sp50 = arg0 + 0x31C;
    sp58 = arg0 + 0x354;
    temp_r4 = arg0 + 0x270;
    do {
        func_0805E860(temp_r4, var_r5);
        temp_r1_7 = arg0->unk270;
        (*temp_r1_7)->unk10(&sp20, temp_r1_7, *(*sp60 + (temp_r4->unkC * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_5 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_8 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_8->unk4 = (s32) temp_r0_5->unk4;
        temp_r1_8->unk8 = (s32) temp_r0_5->unk8;
        temp_r1_8->unkC = (s32) temp_r0_5->unkC;
        (temp_r1_8 + 0xC)->unk4 = (s32) (temp_r0_5 + 0xC)->unk4;
        *(arg0 + 0x2334 + (var_r5 * 4)) = var_r6;
        temp_r0_6 = arg0 + 0x478;
        temp_r1_9 = ((func_08007D4C(temp_r0_6, temp_r0_6->unk4) + var_r6) << 5) + 0x06010000;
        var_r2_3 = 0;
        if (sp8 != 0) {
            var_r2_3 = (u16) sp0.unkC;
        }
        func_08008E64(sp8, temp_r1_9, var_r2_3);
        var_r1 = 0;
        if (sp8 != 0) {
            var_r1 = (u16) sp0.unkC;
        }
        var_r6 += var_r1 >> 5;
        var_r5 += 1;
    } while ((s32) var_r5 <= 0x1A);
    temp_r1_10 = arg0->unk2A8;
    (*temp_r1_10)->unk10(&sp20, temp_r1_10, *(*sp48 + ((arg0 + 0x2A8)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_7 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_11 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_11->unk4 = (s32) temp_r0_7->unk4;
    temp_r1_11->unk8 = (s32) temp_r0_7->unk8;
    temp_r1_11->unkC = (s32) temp_r0_7->unkC;
    (temp_r1_11 + 0xC)->unk4 = (s32) (temp_r0_7 + 0xC)->unk4;
    temp_r0_8 = arg0 + 0x490;
    temp_r1_12 = (func_080074C0(temp_r0_8, temp_r0_8->unk4) << 5) + 0x05000200;
    var_r2_4 = 0;
    if (sp10 != 0) {
        var_r2_4 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_12, var_r2_4);
    var_r6_2 = 0;
    var_r5_2 = 0;
    sp40 = &sp0 + 8;
    temp_r2 = arg0 + 0x488;
    do {
        func_0805E790(&sp20, sp54, var_r5_2);
        temp_r0_9 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_13 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_13->unk4 = (s32) temp_r0_9->unk4;
        temp_r1_13->unk8 = (s32) temp_r0_9->unk8;
        temp_r1_13->unkC = (s32) temp_r0_9->unkC;
        (temp_r1_13 + 0xC)->unk4 = (s32) (temp_r0_9 + 0xC)->unk4;
        temp_r1_14 = ((func_08007D4C(temp_r2, temp_r2->unk4) + var_r6_2) << 5) + 0x06010000;
        var_r2_5 = 0;
        if (sp8 != 0) {
            var_r2_5 = (u16) sp0.unkC;
        }
        func_08008E64(sp8, temp_r1_14, var_r2_5);
        var_r1_2 = 0;
        if (sp8 != 0) {
            var_r1_2 = sp40->unk4;
        }
        var_r6_2 += var_r1_2 >> 5;
        var_r5_2 += 1;
    } while (var_r5_2 <= 2);
    temp_r6 = arg0 + 0x2E0;
    func_0805E860(temp_r6, 0x91AU);
    temp_r1_15 = arg0->unk2E0;
    (*temp_r1_15)->unk10(&sp20, temp_r1_15, *(*sp4C + (temp_r6->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_10 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_16 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_16->unk4 = (s32) temp_r0_10->unk4;
    temp_r1_16->unk8 = (s32) temp_r0_10->unk8;
    temp_r1_16->unkC = (s32) temp_r0_10->unkC;
    (temp_r1_16 + 0xC)->unk4 = (s32) (temp_r0_10 + 0xC)->unk4;
    sp44 = &sp0 + 0x10;
    temp_r0_11 = arg0 + 0x4B0;
    temp_r1_17 = (func_080074C0(temp_r0_11, temp_r0_11->unk4) << 5) + 0x05000200;
    var_r2_6 = 0;
    if (sp10 != 0) {
        var_r2_6 = sp44->unk4;
    }
    func_08008E64(sp10, temp_r1_17, var_r2_6);
    temp_r5 = arg0 + 0x4A8;
    temp_r1_18 = (func_08007D4C(temp_r5, temp_r5->unk4) << 5) + 0x06010000;
    var_r2_7 = 0;
    if (sp8 != 0) {
        var_r2_7 = sp8.unk4;
    }
    func_08008E64(sp8, temp_r1_18, var_r2_7);
    func_0805E860(temp_r6, 0x91BU);
    temp_r1_19 = arg0->unk2E0;
    (*temp_r1_19)->unk10(&sp20, temp_r1_19, *(*sp4C + (temp_r6->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_12 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_20 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_20->unk4 = (s32) temp_r0_12->unk4;
    temp_r1_20->unk8 = (s32) temp_r0_12->unk8;
    temp_r1_20->unkC = (s32) temp_r0_12->unkC;
    (temp_r1_20 + 0xC)->unk4 = (s32) (temp_r0_12 + 0xC)->unk4;
    temp_r1_21 = (func_08007D4C(temp_r5, temp_r5->unk4) << 5) + 0x06010040;
    var_r2_8 = 0;
    if (sp8 != 0) {
        var_r2_8 = sp8.unk4;
    }
    func_08008E64(sp8, temp_r1_21, var_r2_8);
    temp_r1_22 = arg0->unk318;
    (*temp_r1_22)->unk10(&sp20, temp_r1_22, *(*sp50 + ((arg0 + 0x318)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_13 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_23 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_23->unk4 = (s32) temp_r0_13->unk4;
    temp_r1_23->unk8 = (s32) temp_r0_13->unk8;
    temp_r1_23->unkC = (s32) temp_r0_13->unkC;
    (temp_r1_23 + 0xC)->unk4 = (s32) (temp_r0_13 + 0xC)->unk4;
    temp_r0_14 = arg0 + 0x4C0;
    temp_r1_24 = (func_080074C0(temp_r0_14, temp_r0_14->unk4) << 5) + 0x05000200;
    var_r2_9 = 0;
    if (sp10 != 0) {
        var_r2_9 = sp44->unk4;
    }
    func_08008E64(sp10, temp_r1_24, var_r2_9);
    arg0->unk34C = 0;
    temp_r1_25 = arg0->unk350;
    (*temp_r1_25)->unk10(&sp20, temp_r1_25, *(*sp58 + ((arg0 + 0x350)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_15 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_26 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_26->unk4 = (s32) temp_r0_15->unk4;
    temp_r1_26->unk8 = (s32) temp_r0_15->unk8;
    temp_r1_26->unkC = (s32) temp_r0_15->unkC;
    (temp_r1_26 + 0xC)->unk4 = (s32) (temp_r0_15 + 0xC)->unk4;
    temp_r0_16 = arg0 + 0x4D8;
    temp_r1_27 = (func_080074C0(temp_r0_16, temp_r0_16->unk4) << 5) + 0x05000200;
    var_r2_10 = 0;
    if (sp10 != 0) {
        var_r2_10 = sp44->unk4;
    }
    func_08008E64(sp10, temp_r1_27, var_r2_10);
    if (arg0->unk2324 != 1) {
        temp_r4_2 = arg0 + 0x4E8;
        func_080073E0(temp_r4_2, temp_r4_2->unk4);
        temp_r4_2->unk4 = func_0800736C(temp_r4_2);
        temp_r1_28 = arg0->unk3F8;
        (*temp_r1_28)->unk10(&sp20, temp_r1_28, *(arg0->unk3FC + ((arg0 + 0x3F8)->unkC * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_17 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_29 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_29->unk4 = (s32) temp_r0_17->unk4;
        temp_r1_29->unk8 = (s32) temp_r0_17->unk8;
        temp_r1_29->unkC = (s32) temp_r0_17->unkC;
        (temp_r1_29 + 0xC)->unk4 = (s32) (temp_r0_17 + 0xC)->unk4;
        temp_r1_30 = (func_080074C0(temp_r4_2, temp_r4_2->unk4) << 5) + 0x05000200;
        var_r2_11 = 0;
        if (sp10 != 0) {
            var_r2_11 = sp0.unk14;
        }
        func_08008E64(sp10, temp_r1_30, var_r2_11);
        temp_r0_18 = arg0 + 0x4E0;
        temp_r1_31 = (func_08007D4C(temp_r0_18, temp_r0_18->unk4) << 5) + 0x06010000;
        var_r2_12 = 0;
        if (sp8 != 0) {
            var_r2_12 = (u16) sp0.unkC;
        }
        func_08008E64(sp8, temp_r1_31, var_r2_12);
        arg0->unk42C = 0;
        temp_r4_3 = arg0 + 0x4F8;
        func_080073E0(temp_r4_3, temp_r4_3->unk4);
        temp_r4_3->unk4 = func_0800736C(temp_r4_3);
        arg0->unk464 = 0;
        return;
    }
    var_sb = 0;
    sp5C = arg0 + 0x3C4;
    temp_r0_19 = arg0 + 0x3C0;
    var_r5_3 = arg0 + 0x500;
    var_r6_3 = arg0 + 0x508;
    do {
        func_080073E0(var_r6_3, var_r5_3->unkC);
        var_r5_3->unkC = func_0800736C(var_r6_3);
        func_0805E860(temp_r0_19, *((var_sb * 2) + &gUnk_080FA36C));
        temp_r1_32 = arg0->unk3C0;
        (*temp_r1_32)->unk10(&sp20, temp_r1_32, *(*sp5C + (temp_r0_19->unkC * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_20 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_33 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_33->unk4 = (s32) temp_r0_20->unk4;
        temp_r1_33->unk8 = (s32) temp_r0_20->unk8;
        temp_r1_33->unkC = (s32) temp_r0_20->unkC;
        (temp_r1_33 + 0xC)->unk4 = (s32) (temp_r0_20 + 0xC)->unk4;
        temp_r1_34 = (func_080074C0(var_r6_3, var_r5_3->unkC) << 5) + 0x05000200;
        var_r2_13 = 0;
        if (sp10 != 0) {
            var_r2_13 = sp0.unk14;
        }
        func_08008E64(sp10, temp_r1_34, var_r2_13);
        temp_r1_35 = (func_08007D4C(var_r5_3, var_r5_3->unk4) << 5) + 0x06010000;
        var_r2_14 = 0;
        if (sp8 != 0) {
            var_r2_14 = (u16) sp0.unkC;
        }
        func_08008E64(sp8, temp_r1_35, var_r2_14);
        var_r5_3 += 0x10;
        var_r6_3 += 0x10;
        var_sb += 1;
    } while (var_sb <= 2);
    var_r6_4 = 0x28;
    var_r5_4 = 0;
    var_r4 = arg0 + 0x22E0;
    do {
        if (var_r5_4 & 1) {
            var_r0 = ((rand() >> 8) & 1) + 1;
        } else {
            var_r0 = ((rand() >> 8) & 3) + 4;
        }
        var_r4->unk0 = (u16) (var_r6_4 + (var_r0 * 0x18));
        var_r6_4 = (s16) var_r4->unk0;
        var_r4->unk2 = (s16) (var_r5_4 % 3);
        var_r4 += 4;
        var_r5_4 += 1;
    } while (var_r5_4 <= 0xF);
}
