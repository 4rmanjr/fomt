s32 __builtin_delete();                               /* extern */
void *__builtin_new(s32);                           /* extern */
s32 free();                                           /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *, s32);                   /* extern */
s32 func_08008E64(s32, s32, s32);                     /* extern */
s32 func_08008EB8(s32, void *, s32);                  /* extern */
s32 func_08008F0C(s32 **, void *, s32, u16);            /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32);             /* extern */
s32 func_0804EA94(s32 **, s32, s32, s16);               /* extern */
s32 func_0804EC84(u8, s32 *, s32);                      /* extern */
void *func_0805E824(void *, s32, s32, s32);         /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_080C14C8(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 **, s32 **, s32);                          /* extern */
extern s32 gUnk_080F9F78;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
    u8 _pad1C[1284];
    s32 unk520;
    u8 _pad524[4];
    s32 unk528;
    s32 unk52C;
    s32 unk530;
    s32 unk534;
    s32 unk538;
    u8 _pad53C[12];
    s32 unk548;
    u8 _pad54C[4];
    s32 unk550;
    void *unk554;
    s32 unk558;
    u8 _pad55C[4];
    s32 unk560;
    u8 _pad564[4];
    s32 unk568;
    u8 _pad56C[12];
    s32 unk578;
    void *unk57C;
    s32 unk580;
    u8 _pad584[4];
    s32 unk588;
    u8 _pad58C[4];
    s32 unk590;
    u8 _pad594[12];
    s32 unk5A0;
    void *unk5A4;
    u8 _pad5A8[32];
    s32 unk5C8;
    void *unk5CC;
    s32 unk5D0;
    u8 _pad5D4[4];
    s32 unk5D8;
    u8 _pad5DC[4];
    s32 unk5E0;
    u8 _pad5E4[12];
    s32 unk5F0;
    void *unk5F4;
    u8 _pad5F8[32];
    s32 unk618;
    s32 unk61C;
    u8 _pad620[96];
    s32 unk680;
    u8 _pad684[4];
    s32 unk688;
    u8 _pad68C[4];
    s32 unk690;
    u8 _pad694[12];
    s32 unk6A0;
    s32 unk6A4;
    u8 _pad6A8[96];
    s32 unk708;
    u8 _pad70C[4];
    s32 unk710;
    u8 _pad714[4];
    s32 unk718;
    u8 _pad71C[12];
    s32 unk728;
    void *unk72C;
    s32 unk730;
    u8 _pad734[4];
    s32 unk738;
    u8 _pad73C[4];
    s32 unk740;
    u8 _pad744[368];
    s32 unk8B4;
    s32 unk8B5;
    u8 _pad8B9[194];
    s32 unk97B;
    u8 _pad97F[1];
    s32 unk980;
} GenObj;
void func_080C16D4(GenObj *arg0) {
    s32 *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
s32 sp10;
    s32 *sp14;
s32 sp24;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    u32 sp94;
    u32 sp98;
    u32 sp9C;
    u32 spA0;
    u32 spA4;
    u32 spA8;
    u32 spAC;
    u32 spB0;
    u32 spB4;
    u32 spB8;
    s32 spBC;
    s32 **spC0;
    s32 spC4;
    s32 **spC8;
    void *spCC;
    void *spD0;
    s16 temp_r2_11;
    s16 temp_r2_14;
    s16 temp_r2_17;
    s16 temp_r2_2;
    s16 temp_r2_5;
    s16 temp_r2_8;
    s16 temp_r3;
    s32 *var_r0;
    s32 *var_r0_11;
    s32 *var_r0_13;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 *var_r0_9;
    s32 *var_r2_15;
    s32 temp_r0_12;
    s32 temp_r0_18;
    s32 temp_r0_21;
    s32 temp_r0_27;
    s32 temp_r0_2;
    s32 temp_r0_30;
    s32 temp_r0_39;
    s32 temp_r0_42;
    s32 temp_r0_51;
    s32 temp_r0_54;
    s32 temp_r0_56;
    s32 temp_r0_61;
    s32 temp_r0_64;
    s32 temp_r0_9;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_2;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_38;
    s32 temp_r4_39;
    s32 temp_r4_3;
    s32 temp_r4_41;
    s32 temp_r4_42;
    s32 temp_r4_44;
    s32 temp_r4_45;
    s32 temp_r4_47;
    s32 temp_r4_48;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r6_5;
    s32 temp_r6_7;
    s32 var_r3_11;
    s32 var_r3_14;
    s32 var_r3_17;
    s32 var_r3_20;
    s32 var_r3_23;
    s32 var_r3_2;
    s32 var_r3_5;
    s32 var_r3_8;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r8;
    s32 var_r8_10;
    s32 var_r8_11;
    s32 var_r8_12;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    s32 var_r8_9;
    s32 var_sl;
    u16 var_r3_12;
    u16 var_r3_15;
    u16 var_r3_18;
    u16 var_r3_21;
    u16 var_r3_24;
    u16 var_r3_27;
    u16 var_r3_30;
    u16 var_r3_33;
    u16 var_r3_36;
    u16 var_r3_3;
    u16 var_r3_6;
    u16 var_r3_9;
    u32 *var_r0_16;
    u32 *var_r0_18;
    u32 *var_r0_20;
    u32 *var_r0_22;
    u32 *var_r0_24;
    u32 temp_r1_22;
    u32 temp_r1_29;
    u32 var_r3_26;
    u32 var_r3_29;
    u32 var_r3_32;
    u32 var_r3_35;
    u32 var_r3_38;
    void **temp_r1_11;
    void **temp_r1_14;
    void **temp_r1_17;
    void **temp_r1_24;
    void **temp_r1_5;
    void **temp_r1_8;
    GenObj *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_14;
    GenObj *temp_r0_15;
    GenObj *temp_r0_16;
    void *temp_r0_17;
    void *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_22;
    void *temp_r0_23;
    GenObj *temp_r0_24;
    GenObj *temp_r0_25;
    void *temp_r0_26;
    void *temp_r0_28;
    void *temp_r0_29;
    void *temp_r0_31;
    void *temp_r0_32;
    GenObj *temp_r0_33;
    GenObj *temp_r0_34;
    void *temp_r0_35;
    GenObj *temp_r0_36;
    GenObj *temp_r0_37;
    void *temp_r0_38;
    void *temp_r0_3;
    void *temp_r0_40;
    void *temp_r0_41;
    void *temp_r0_43;
    void *temp_r0_44;
    GenObj *temp_r0_45;
    GenObj *temp_r0_46;
    void *temp_r0_47;
    GenObj *temp_r0_48;
    GenObj *temp_r0_49;
    GenObj *temp_r0_4;
    void *temp_r0_50;
    void *temp_r0_52;
    void *temp_r0_53;
    void *temp_r0_55;
    void *temp_r0_57;
    GenObj *temp_r0_58;
    GenObj *temp_r0_59;
    void *temp_r0_5;
    void *temp_r0_60;
    void *temp_r0_62;
    void *temp_r0_63;
    void *temp_r0_65;
    GenObj *temp_r0_6;
    GenObj *temp_r0_7;
    GenObj *temp_r0_8;
    void *temp_r1;
    GenObj *temp_r1_10;
    GenObj *temp_r1_12;
    GenObj *temp_r1_13;
    GenObj *temp_r1_15;
    GenObj *temp_r1_16;
    GenObj *temp_r1_18;
    void *temp_r1_19;
    void *temp_r1_20;
    GenObj *temp_r1_21;
    GenObj *temp_r1_23;
    GenObj *temp_r1_25;
    void *temp_r1_26;
    void *temp_r1_27;
    GenObj *temp_r1_28;
    void *temp_r1_2;
    GenObj *temp_r1_30;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_6;
    GenObj *temp_r1_7;
    GenObj *temp_r1_9;
    void *temp_r2;
    void *temp_r2_10;
    void *temp_r2_12;
    void *temp_r2_13;
    void *temp_r2_15;
    void *temp_r2_16;
    void *temp_r2_18;
    void *temp_r2_19;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_9;
    void *temp_r4;
    GenObj *temp_r4_12;
    GenObj *temp_r4_13;
    void *temp_r4_14;
    GenObj *temp_r4_17;
    GenObj *temp_r4_20;
    GenObj *temp_r4_21;
    void *temp_r4_22;
    GenObj *temp_r4_25;
    GenObj *temp_r4_28;
    GenObj *temp_r4_29;
    void *temp_r4_30;
    GenObj *temp_r4_33;
    GenObj *temp_r4_36;
    void *temp_r4_37;
    GenObj *temp_r4_40;
    void *temp_r4_43;
    GenObj *temp_r4_46;
    GenObj *temp_r4_4;
    GenObj *temp_r4_5;
    void *temp_r4_6;
    GenObj *temp_r4_9;
    GenObj *temp_r5;
    GenObj *temp_r5_2;
    GenObj *temp_r5_3;
    GenObj *temp_r5_4;
    GenObj *temp_r5_5;
    void *temp_r5_6;
    GenObj *temp_r5_7;
    void *temp_r5_8;
    GenObj *temp_r5_9;
    GenObj *temp_r6;
    GenObj *temp_r6_2;
    GenObj *temp_r6_3;
    GenObj *temp_r6_4;
    GenObj *temp_r6_6;
    GenObj *temp_r6_8;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r7_3;
    void *temp_r7_4;
    void *temp_r7_5;
    void *temp_r7_6;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_15;
    void *var_r0_17;
    void *var_r0_19;
    void *var_r0_21;
    void *var_r0_23;
    void *var_r0_25;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_10;
    void *var_r1_11;
    void *var_r1_12;
    void *var_r1_13;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r1_9;
    GenObj *var_r2;
    GenObj *var_r2_10;
    GenObj *var_r2_11;
    GenObj *var_r2_12;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_16;
    GenObj *var_r2_17;
    GenObj *var_r2_18;
    GenObj *var_r2_19;
    GenObj *var_r2_20;
    GenObj *var_r2_21;
    GenObj *var_r2_22;
    GenObj *var_r2_23;
    GenObj *var_r2_24;
    GenObj *var_r2_25;
    GenObj *var_r2_26;
    GenObj *var_r2_27;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r2_9;
    GenObj *var_r3;
    GenObj *var_r3_10;
    GenObj *var_r3_13;
    GenObj *var_r3_16;
    GenObj *var_r3_19;
    GenObj *var_r3_22;
    GenObj *var_r3_25;
    GenObj *var_r3_28;
    GenObj *var_r3_31;
    GenObj *var_r3_34;
    GenObj *var_r3_37;
    GenObj *var_r3_4;
    GenObj *var_r3_7;
    void *var_r5;
    void *var_r5_10;
    void *var_r5_11;
    void *var_r5_12;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;
    void *var_r5_8;
    void *var_r5_9;
    void *var_r6;

    func_08008E64(gUnk_080F9F78, 0x05000360, 0x20);
    func_080C14C8(arg0);
    (void *)0x0500024A->unk0 = (u16) *(u16 *)0x05000362;
    temp_r1 = (void *)0x0500024A + 2;
    (void *)0x0500024A->unk2 = (u16) *(u16 *)0x05000364;
    temp_r1->unk2 = 0x1F;
    ((GenObj *)((u8 *)temp_r1 + 2))->unk2 = 0x675E;
    func_08008EB8(0, (GenObj *)((u8 *)arg0 + 0x548), 8);
    func_0804EC84(arg0->unk97B, &sp10, 0);
    (void *)0x05000240->unk0 = 0x3E0;
    temp_r1_2 = (void *)0x05000240 + 2;
    (void *)0x05000240->unk2 = 0x303;
    temp_r1_3 = (GenObj *)((u8 *)temp_r1_2 + 2);
    temp_r1_2->unk2 = 0x4F15;
    temp_r1_3->unk2 = 0x7FFF;
    ((GenObj *)((u8 *)temp_r1_3 + 2))->unk2 = 0x52F8;
    sp44 = 4;
    sp44.unk2 = 2;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0xC);
    func_0804E7A0(sp44, temp_r4, 0);
    sp48 = 4;
    sp48.unk2 = 2;
    sp0 = &sp10;
    sp4 = 0;
    sp8 = 1;
    func_0804E958(sp48, temp_r4, 0, 0);
    temp_r5 = func_08008910(arg0);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x83C);
    func_08008F0C(&sp14, temp_r4, (func_08007D4C(temp_r0, temp_r0->unk4) << 5) + 0x06010000, 0x100U);
    temp_r1_4 = temp_r5->unk4;
    if (temp_r1_4 != temp_r5->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32 *) sp14.unk0;
            temp_r1_4->unk4 = (s32) sp14.unk4;
            temp_r1_4->unk8 = (s32) sp14.unk8;
            temp_r1_4->unkC = (s32) sp14.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        spC0 = &sp0 + 0x54;
        spC8 = &sp0 + 0x24;
    } else {
        spCC = temp_r1_4;
        sp50 = 1;
        temp_r4_2 = (s32) (temp_r1_4 - temp_r5->unk0) >> 4;
        sp4C = temp_r4_2;
        var_r0 = &sp4C;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp50;
        }
        temp_r0_2 = temp_r4_2 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_3 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_sl = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        spD0 = var_r0_2;
        var_r2 = temp_r5->unk0;
        var_r3 = var_r0_2;
        spC0 = &sp0 + 0x54;
        spC8 = &sp0 + 0x24;
        if (var_r2 != spCC) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != spCC);
        }
        if (sp50 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32 *) sp14.unk0;
                var_r3->unk4 = (s32) sp14.unk4;
                var_r3->unk8 = (s32) sp14.unk8;
                var_r3->unkC = (s32) sp14.unkC;
            }
            var_r6 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_r3_2 = sp50;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32 *) sp14.unk0;
                        var_r2_2->unk4 = (s32) sp14.unk4;
                        var_r2_2->unk8 = (s32) sp14.unk8;
                        var_r2_2->unkC = (s32) sp14.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r6 = var_r2_2;
        }
        temp_r2 = temp_r5->unk4;
        temp_r0_3 = temp_r5->unk0;
        var_r1 = temp_r0_3;
        if (temp_r0_3 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_3 != 0) {
            free();
        }
        temp_r5->unk0 = spD0;
        temp_r5->unk4 = var_r6;
        temp_r5->unkC = (void *) (spD0 + var_sl);
    }
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x83C);
    temp_r3 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
    sp0 = (s32 *)2;
    sp4 = 0;
    sp8 = 2;
    spC = 1;
    func_0804EA94(spC0, 0xD0, 8, temp_r3);
    arg0->unk548 = sp54;
    ((GenObj *)((u8 *)arg0 + 0x548))->unk4 = sp58;
    temp_r0_5 = func_0805E824(__builtin_new(0x14), arg0->unk520, 0, 0x100);
    if (temp_r0_5 != arg0->unk550) {
        __builtin_delete();
    }
    arg0->unk550 = temp_r0_5;
    temp_r0_6 = __builtin_new(0x1C);
    temp_r0_6->unk0 = 0;
    temp_r0_6->unk2 = 0;
    temp_r0_6->unk4 = 0;
    temp_r0_6->unk6 = 0;
    temp_r0_6->unk8 = 0;
    temp_r0_6->unkC = 0;
    temp_r0_6->unk10 = 0;
    temp_r0_6->unk11 = 0;
    temp_r0_6->unk14 = 0;
    temp_r0_6->unk18 = 0;
    if (temp_r0_6 != arg0->unk554) {
        __builtin_delete();
    }
    arg0->unk554 = temp_r0_6;
    func_0805E860(arg0->unk550, 0);
    arg0->unk554->unk0 = 0x40;
    arg0->unk554->unk2 = 0x40;
    temp_r4_4 = arg0->unk554;
    temp_r5_2 = (GenObj *)((u8 *)arg0 + 0x844);
    temp_r4_4->unk6 = func_08007D4C(temp_r5_2, temp_r5_2->unk4);
    arg0->unk554->unk4 = 3;
    arg0->unk554->unk18 = 1;
    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x558);
    temp_r0_7 = arg0->unk550;
    temp_r1_5 = temp_r0_7->unk0;
    (*temp_r1_5)->unk10(&sp24, temp_r1_5, *(temp_r0_7->unk4 + (temp_r0_7->unkC * 4)));
    memcpy(spC8, spC8, 0x20);
    temp_r0_8 = spC8 + 0xC;
    arg0->unk558 = (s32 *) spC8->unk0;
    temp_r4_5->unk4 = (s32) spC8->unk4;
    temp_r4_5->unk8 = (s32) spC8->unk8;
    temp_r4_6 = (GenObj *)((u8 *)temp_r4_5 + 0xC);
    temp_r4_5->unkC = (s32) spC8->unkC;
    temp_r4_6->unk4 = (s32) temp_r0_8->unk4;
    temp_r4_6->unk8 = (s32) temp_r0_8->unk8;
    temp_r4_6->unkC = (s32) temp_r0_8->unkC;
    (temp_r4_6 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_8 + 0xC))->unk4;
    temp_r6 = func_08008910(arg0);
    temp_r7 = arg0->unk560;
    temp_r2_2 = func_08007D4C(temp_r5_2, temp_r5_2->unk4);
    var_r3_3 = 0;
    if (arg0->unk560 != 0) {
        var_r3_3 = ((GenObj *)((u8 *)arg0 + 0x560))->unk4;
    }
    func_08008F0C(&sp14, temp_r7, (temp_r2_2 << 5) + 0x06010000, var_r3_3);
    temp_r1_6 = temp_r6->unk4;
    if (temp_r1_6 != temp_r6->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32 *) sp14.unk0;
            temp_r1_6->unk4 = (s32) sp14.unk4;
            temp_r1_6->unk8 = (s32) sp14.unk8;
            temp_r1_6->unkC = (s32) sp14.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
    } else {
        spCC = temp_r1_6;
        sp60 = 1;
        temp_r4_7 = (s32) (temp_r1_6 - temp_r6->unk0) >> 4;
        sp5C = temp_r4_7;
        var_r0_3 = &sp5C;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_3 = &sp60;
        }
        temp_r0_9 = temp_r4_7 + *var_r0_3;
        if (temp_r0_9 != 0) {
            temp_r4_8 = temp_r0_9 * 0x10;
            var_r0_4 = malloc(temp_r4_8);
            var_r8 = temp_r4_8;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_4 = 0;
            var_r8 = 0;
        }
        spD0 = var_r0_4;
        var_r2_3 = temp_r6->unk0;
        var_r3_4 = var_r0_4;
loop_48:
        if (var_r2_3 != spCC) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32 *) var_r2_3->unk0;
                var_r3_4->unk4 = (s32) var_r2_3->unk4;
                var_r3_4->unk8 = (s32) var_r2_3->unk8;
                var_r3_4->unkC = (s32) var_r2_3->unkC;
            }
            var_r2_3 += 0x10;
            var_r3_4 += 0x10;
            goto loop_48;
        }
        if (sp60 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32 *) sp14.unk0;
                var_r3_4->unk4 = (s32) sp14.unk4;
                var_r3_4->unk8 = (s32) sp14.unk8;
                var_r3_4->unkC = (s32) sp14.unkC;
            }
            var_r5 = (GenObj *)((u8 *)var_r3_4 + 0x10);
        } else {
            var_r3_5 = sp60;
            var_r2_4 = var_r3_4;
            if (var_r3_5 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32 *) sp14.unk0;
                        var_r2_4->unk4 = (s32) sp14.unk4;
                        var_r2_4->unk8 = (s32) sp14.unk8;
                        var_r2_4->unkC = (s32) sp14.unkC;
                    }
                    var_r3_5 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_5 != 0);
            }
            var_r5 = var_r2_4;
        }
        temp_r2_3 = temp_r6->unk4;
        temp_r0_10 = temp_r6->unk0;
        var_r1_2 = temp_r0_10;
        if (temp_r0_10 != temp_r2_3) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_3);
        }
        if (temp_r0_10 != 0) {
            free();
        }
        temp_r6->unk0 = spD0;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (spD0 + var_r8);
    }
    temp_r4_9 = func_08008910(arg0);
    temp_r0_11 = arg0->unk568;
    var_r3_6 = 0;
    if (temp_r0_11 != 0) {
        var_r3_6 = ((GenObj *)((u8 *)arg0 + 0x568))->unk4;
    }
    func_08008F0C(&sp14, temp_r0_11, 0x05000260, var_r3_6);
    temp_r1_7 = temp_r4_9->unk4;
    if (temp_r1_7 != temp_r4_9->unkC) {
        if (temp_r1_7 != 0) {
            temp_r1_7->unk0 = (s32 *) sp14.unk0;
            temp_r1_7->unk4 = (s32) sp14.unk4;
            temp_r1_7->unk8 = (s32) sp14.unk8;
            temp_r1_7->unkC = (s32) sp14.unkC;
        }
        temp_r4_9->unk4 = (void *) (temp_r4_9->unk4 + 0x10);
    } else {
        spCC = temp_r1_7;
        sp68 = 1;
        temp_r4_10 = (s32) (temp_r1_7 - temp_r4_9->unk0) >> 4;
        sp64 = temp_r4_10;
        var_r0_5 = &sp64;
        if ((u32) temp_r4_10 < 1U) {
            var_r0_5 = &sp68;
        }
        temp_r0_12 = temp_r4_10 + *var_r0_5;
        if (temp_r0_12 != 0) {
            temp_r4_11 = temp_r0_12 * 0x10;
            var_r0_6 = malloc(temp_r4_11);
            var_r8_2 = temp_r4_11;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_6 = 0;
            var_r8_2 = 0;
        }
        spD0 = var_r0_6;
        var_r2_5 = temp_r4_9->unk0;
        var_r3_7 = var_r0_6;
        if (var_r2_5 != spCC) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_5->unk0;
                    var_r3_7->unk4 = (s32) var_r2_5->unk4;
                    var_r3_7->unk8 = (s32) var_r2_5->unk8;
                    var_r3_7->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_5 != spCC);
        }
        if (sp68 == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32 *) sp14.unk0;
                var_r3_7->unk4 = (s32) sp14.unk4;
                var_r3_7->unk8 = (s32) sp14.unk8;
                var_r3_7->unkC = (s32) sp14.unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_7 + 0x10);
        } else {
            var_r3_8 = sp68;
            var_r2_6 = var_r3_7;
            if (var_r3_8 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32 *) sp14.unk0;
                        var_r2_6->unk4 = (s32) sp14.unk4;
                        var_r2_6->unk8 = (s32) sp14.unk8;
                        var_r2_6->unkC = (s32) sp14.unkC;
                    }
                    var_r3_8 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_8 != 0);
            }
            var_r5_2 = var_r2_6;
        }
        temp_r2_4 = temp_r4_9->unk4;
        temp_r0_13 = temp_r4_9->unk0;
        var_r1_3 = temp_r0_13;
        if (temp_r0_13 != temp_r2_4) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_4);
        }
        if (temp_r0_13 != 0) {
            free();
        }
        temp_r4_9->unk0 = spD0;
        temp_r4_9->unk4 = var_r5_2;
        temp_r4_9->unkC = (void *) (spD0 + var_r8_2);
    }
    temp_r0_14 = func_0805E824(__builtin_new(0x14), arg0->unk528, 0, 0x100);
    if (temp_r0_14 != arg0->unk578) {
        __builtin_delete();
    }
    arg0->unk578 = temp_r0_14;
    temp_r0_15 = __builtin_new(0x1C);
    temp_r0_15->unk0 = 0;
    temp_r0_15->unk2 = 0;
    temp_r0_15->unk4 = 0;
    temp_r0_15->unk6 = 0;
    temp_r0_15->unk8 = 0;
    temp_r0_15->unkC = 0;
    temp_r0_15->unk10 = 0;
    temp_r0_15->unk11 = 0;
    temp_r0_15->unk14 = 0;
    temp_r0_15->unk18 = 0;
    if (temp_r0_15 != arg0->unk57C) {
        __builtin_delete();
    }
    arg0->unk57C = temp_r0_15;
    func_0805E860(arg0->unk578, 0);
    arg0->unk57C->unk0 = 0xC0;
    arg0->unk57C->unk2 = 0;
    temp_r4_12 = arg0->unk57C;
    temp_r5_3 = (GenObj *)((u8 *)arg0 + 0x864);
    temp_r4_12->unk6 = func_08007D4C(temp_r5_3, temp_r5_3->unk4);
    arg0->unk57C->unk4 = 7;
    arg0->unk57C->unk8 = 1;
    arg0->unk57C->unk18 = 1;
    temp_r4_13 = (GenObj *)((u8 *)arg0 + 0x580);
    temp_r0_16 = arg0->unk578;
    temp_r1_8 = temp_r0_16->unk0;
    (*temp_r1_8)->unk10(&sp14, temp_r1_8, *(temp_r0_16->unk4 + (temp_r0_16->unkC * 4)));
    memcpy(&sp14, &sp14, 0x20);
    temp_r0_17 = &(GenObj *)((u8 *)sp14 + 0xC);
    arg0->unk580 = (s32 *) sp14.unk0;
    temp_r4_13->unk4 = (s32) sp14.unk4;
    temp_r4_13->unk8 = (s32) sp14.unk8;
    temp_r4_14 = (GenObj *)((u8 *)temp_r4_13 + 0xC);
    temp_r4_13->unkC = (s32) sp14.unkC;
    temp_r4_14->unk4 = (s32) temp_r0_17->unk4;
    temp_r4_14->unk8 = (s32) temp_r0_17->unk8;
    temp_r4_14->unkC = (s32) temp_r0_17->unkC;
    (temp_r4_14 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_17 + 0xC))->unk4;
    temp_r6_2 = func_08008910(arg0);
    temp_r7_2 = arg0->unk588;
    temp_r2_5 = func_08007D4C(temp_r5_3, temp_r5_3->unk4);
    var_r3_9 = 0;
    if (arg0->unk588 != 0) {
        var_r3_9 = ((GenObj *)((u8 *)arg0 + 0x588))->unk4;
    }
    func_08008F0C(&sp14, temp_r7_2, (temp_r2_5 << 5) + 0x06010000, var_r3_9);
    temp_r1_9 = temp_r6_2->unk4;
    if (temp_r1_9 != temp_r6_2->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32 *) sp14.unk0;
            temp_r1_9->unk4 = (s32) sp14.unk4;
            temp_r1_9->unk8 = (s32) sp14.unk8;
            temp_r1_9->unkC = (s32) sp14.unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        spCC = temp_r1_9;
        sp70 = 1;
        temp_r4_15 = (s32) (temp_r1_9 - temp_r6_2->unk0) >> 4;
        sp6C = temp_r4_15;
        var_r0_7 = &sp6C;
        if ((u32) temp_r4_15 < 1U) {
            var_r0_7 = &sp70;
        }
        temp_r0_18 = temp_r4_15 + *var_r0_7;
        if (temp_r0_18 != 0) {
            temp_r4_16 = temp_r0_18 * 0x10;
            var_r0_8 = malloc(temp_r4_16);
            var_r8_3 = temp_r4_16;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_8 = 0;
            var_r8_3 = 0;
        }
        spD0 = var_r0_8;
        var_r2_7 = temp_r6_2->unk0;
        var_r3_10 = var_r0_8;
        if (var_r2_7 != spCC) {
            do {
                if (var_r3_10 != 0) {
                    var_r3_10->unk0 = (s32) var_r2_7->unk0;
                    var_r3_10->unk4 = (s32) var_r2_7->unk4;
                    var_r3_10->unk8 = (s32) var_r2_7->unk8;
                    var_r3_10->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_10 += 0x10;
            } while (var_r2_7 != spCC);
        }
        if (sp70 == 1) {
            if (var_r3_10 != 0) {
                var_r3_10->unk0 = (s32 *) sp14.unk0;
                var_r3_10->unk4 = (s32) sp14.unk4;
                var_r3_10->unk8 = (s32) sp14.unk8;
                var_r3_10->unkC = (s32) sp14.unkC;
            }
            var_r5_3 = (GenObj *)((u8 *)var_r3_10 + 0x10);
        } else {
            var_r3_11 = sp70;
            var_r2_8 = var_r3_10;
            if (var_r3_11 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32 *) sp14.unk0;
                        var_r2_8->unk4 = (s32) sp14.unk4;
                        var_r2_8->unk8 = (s32) sp14.unk8;
                        var_r2_8->unkC = (s32) sp14.unkC;
                    }
                    var_r3_11 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r3_11 != 0);
            }
            var_r5_3 = var_r2_8;
        }
        temp_r2_6 = temp_r6_2->unk4;
        temp_r0_19 = temp_r6_2->unk0;
        var_r1_4 = temp_r0_19;
        if (temp_r0_19 != temp_r2_6) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_6);
        }
        if (temp_r0_19 != 0) {
            free();
        }
        temp_r6_2->unk0 = spD0;
        temp_r6_2->unk4 = var_r5_3;
        temp_r6_2->unkC = (void *) (spD0 + var_r8_3);
    }
    temp_r4_17 = func_08008910(arg0);
    temp_r0_20 = arg0->unk590;
    var_r3_12 = 0;
    if (temp_r0_20 != 0) {
        var_r3_12 = ((GenObj *)((u8 *)arg0 + 0x590))->unk4;
    }
    func_08008F0C(&sp14, temp_r0_20, 0x050002E0, var_r3_12);
    temp_r1_10 = temp_r4_17->unk4;
    if (temp_r1_10 != temp_r4_17->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32 *) sp14.unk0;
            temp_r1_10->unk4 = (s32) sp14.unk4;
            temp_r1_10->unk8 = (s32) sp14.unk8;
            temp_r1_10->unkC = (s32) sp14.unkC;
        }
        temp_r4_17->unk4 = (void *) (temp_r4_17->unk4 + 0x10);
    } else {
        spCC = temp_r1_10;
        sp78 = 1;
        temp_r4_18 = (s32) (temp_r1_10 - temp_r4_17->unk0) >> 4;
        sp74 = temp_r4_18;
        var_r0_9 = &sp74;
        if ((u32) temp_r4_18 < 1U) {
            var_r0_9 = &sp78;
        }
        temp_r0_21 = temp_r4_18 + *var_r0_9;
        if (temp_r0_21 != 0) {
            temp_r4_19 = temp_r0_21 * 0x10;
            var_r0_10 = malloc(temp_r4_19);
            var_r8_4 = temp_r4_19;
            if (var_r0_10 == 0) {
                var_r0_10 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_10 = 0;
            var_r8_4 = 0;
        }
        spD0 = var_r0_10;
        var_r2_9 = temp_r4_17->unk0;
        var_r3_13 = var_r0_10;
        if (var_r2_9 != spCC) {
            do {
                if (var_r3_13 != 0) {
                    var_r3_13->unk0 = (s32) var_r2_9->unk0;
                    var_r3_13->unk4 = (s32) var_r2_9->unk4;
                    var_r3_13->unk8 = (s32) var_r2_9->unk8;
                    var_r3_13->unkC = (s32) var_r2_9->unkC;
                }
                var_r2_9 += 0x10;
                var_r3_13 += 0x10;
            } while (var_r2_9 != spCC);
        }
        if (sp78 == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32 *) sp14.unk0;
                var_r3_13->unk4 = (s32) sp14.unk4;
                var_r3_13->unk8 = (s32) sp14.unk8;
                var_r3_13->unkC = (s32) sp14.unkC;
            }
            var_r5_4 = (GenObj *)((u8 *)var_r3_13 + 0x10);
        } else {
            var_r3_14 = sp78;
            var_r2_10 = var_r3_13;
            if (var_r3_14 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32 *) sp14.unk0;
                        var_r2_10->unk4 = (s32) sp14.unk4;
                        var_r2_10->unk8 = (s32) sp14.unk8;
                        var_r2_10->unkC = (s32) sp14.unkC;
                    }
                    var_r3_14 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r3_14 != 0);
            }
            var_r5_4 = var_r2_10;
        }
        temp_r2_7 = temp_r4_17->unk4;
        temp_r0_22 = temp_r4_17->unk0;
        var_r1_5 = temp_r0_22;
        if (temp_r0_22 != temp_r2_7) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_7);
        }
        if (temp_r0_22 != 0) {
            free();
        }
        temp_r4_17->unk0 = spD0;
        temp_r4_17->unk4 = var_r5_4;
        temp_r4_17->unkC = (void *) (spD0 + var_r8_4);
    }
    temp_r0_23 = func_0805E824(__builtin_new(0x14), arg0->unk538, 0, 0x100);
    if (temp_r0_23 != arg0->unk728) {
        __builtin_delete();
    }
    arg0->unk728 = temp_r0_23;
    temp_r0_24 = __builtin_new(0x1C);
    temp_r0_24->unk0 = 0;
    temp_r0_24->unk2 = 0;
    temp_r0_24->unk4 = 0;
    temp_r0_24->unk6 = 0;
    temp_r0_24->unk8 = 0;
    temp_r0_24->unkC = 0;
    temp_r0_24->unk10 = 0;
    temp_r0_24->unk11 = 0;
    temp_r0_24->unk14 = 0;
    temp_r0_24->unk18 = 0;
    if (temp_r0_24 != arg0->unk72C) {
        __builtin_delete();
    }
    arg0->unk72C = temp_r0_24;
    func_0805E860(arg0->unk728, 6);
    temp_r4_20 = arg0->unk72C;
    temp_r5_4 = (GenObj *)((u8 *)arg0 + 0x86C);
    temp_r4_20->unk6 = func_08007D4C(temp_r5_4, temp_r5_4->unk4);
    arg0->unk72C->unk4 = 8;
    arg0->unk72C->unk18 = 1;
    temp_r4_21 = (GenObj *)((u8 *)arg0 + 0x730);
    temp_r0_25 = arg0->unk728;
    temp_r1_11 = temp_r0_25->unk0;
    (*temp_r1_11)->unk10(&sp14, temp_r1_11, *(temp_r0_25->unk4 + (temp_r0_25->unkC * 4)));
    memcpy(&sp14, &sp14, 0x20);
    temp_r0_26 = &(GenObj *)((u8 *)sp14 + 0xC);
    arg0->unk730 = (s32 *) sp14.unk0;
    temp_r4_21->unk4 = (s32) sp14.unk4;
    temp_r4_21->unk8 = (s32) sp14.unk8;
    temp_r4_22 = (GenObj *)((u8 *)temp_r4_21 + 0xC);
    temp_r4_21->unkC = (s32) sp14.unkC;
    temp_r4_22->unk4 = (s32) temp_r0_26->unk4;
    temp_r4_22->unk8 = (s32) temp_r0_26->unk8;
    temp_r4_22->unkC = (s32) temp_r0_26->unkC;
    (temp_r4_22 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_26 + 0xC))->unk4;
    temp_r6_3 = func_08008910(arg0);
    temp_r7_3 = arg0->unk738;
    temp_r2_8 = func_08007D4C(temp_r5_4, temp_r5_4->unk4);
    var_r3_15 = 0;
    if (arg0->unk738 != 0) {
        var_r3_15 = ((GenObj *)((u8 *)arg0 + 0x738))->unk4;
    }
    func_08008F0C(&sp14, temp_r7_3, (temp_r2_8 << 5) + 0x06010000, var_r3_15);
    temp_r1_12 = temp_r6_3->unk4;
    if (temp_r1_12 != temp_r6_3->unkC) {
        if (temp_r1_12 != 0) {
            temp_r1_12->unk0 = (s32 *) sp14.unk0;
            temp_r1_12->unk4 = (s32) sp14.unk4;
            temp_r1_12->unk8 = (s32) sp14.unk8;
            temp_r1_12->unkC = (s32) sp14.unkC;
        }
        temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
    } else {
        spCC = temp_r1_12;
        sp80 = 1;
        temp_r4_23 = (s32) (temp_r1_12 - temp_r6_3->unk0) >> 4;
        sp7C = temp_r4_23;
        var_r0_11 = &sp7C;
        if ((u32) temp_r4_23 < 1U) {
            var_r0_11 = &sp80;
        }
        temp_r0_27 = temp_r4_23 + *var_r0_11;
        if (temp_r0_27 != 0) {
            temp_r4_24 = temp_r0_27 * 0x10;
            var_r0_12 = malloc(temp_r4_24);
            var_r8_5 = temp_r4_24;
            if (var_r0_12 == 0) {
                var_r0_12 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_12 = 0;
            var_r8_5 = 0;
        }
        spD0 = var_r0_12;
        var_r2_11 = temp_r6_3->unk0;
        var_r3_16 = var_r0_12;
loop_177:
        if (var_r2_11 != spCC) {
            if (var_r3_16 != 0) {
                var_r3_16->unk0 = (s32 *) var_r2_11->unk0;
                var_r3_16->unk4 = (s32) var_r2_11->unk4;
                var_r3_16->unk8 = (s32) var_r2_11->unk8;
                var_r3_16->unkC = (s32) var_r2_11->unkC;
            }
            var_r2_11 += 0x10;
            var_r3_16 += 0x10;
            goto loop_177;
        }
        if (sp80 == 1) {
            if (var_r3_16 != 0) {
                var_r3_16->unk0 = (s32 *) sp14.unk0;
                var_r3_16->unk4 = (s32) sp14.unk4;
                var_r3_16->unk8 = (s32) sp14.unk8;
                var_r3_16->unkC = (s32) sp14.unkC;
            }
            var_r5_5 = (GenObj *)((u8 *)var_r3_16 + 0x10);
        } else {
            var_r3_17 = sp80;
            var_r2_12 = var_r3_16;
            if (var_r3_17 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32 *) sp14.unk0;
                        var_r2_12->unk4 = (s32) sp14.unk4;
                        var_r2_12->unk8 = (s32) sp14.unk8;
                        var_r2_12->unkC = (s32) sp14.unkC;
                    }
                    var_r3_17 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_17 != 0);
            }
            var_r5_5 = var_r2_12;
        }
        temp_r2_9 = temp_r6_3->unk4;
        temp_r0_28 = temp_r6_3->unk0;
        var_r1_6 = temp_r0_28;
        if (temp_r0_28 != temp_r2_9) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_9);
        }
        if (temp_r0_28 != 0) {
            free();
        }
        temp_r6_3->unk0 = spD0;
        temp_r6_3->unk4 = var_r5_5;
        temp_r6_3->unkC = (void *) (spD0 + var_r8_5);
    }
    temp_r4_25 = func_08008910(arg0);
    temp_r0_29 = arg0->unk740;
    var_r3_18 = 0;
    if (temp_r0_29 != 0) {
        var_r3_18 = ((GenObj *)((u8 *)arg0 + 0x740))->unk4;
    }
    func_08008F0C(&sp14, temp_r0_29, 0x05000300, var_r3_18);
    temp_r1_13 = temp_r4_25->unk4;
    if (temp_r1_13 != temp_r4_25->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32 *) sp14.unk0;
            temp_r1_13->unk4 = (s32) sp14.unk4;
            temp_r1_13->unk8 = (s32) sp14.unk8;
            temp_r1_13->unkC = (s32) sp14.unkC;
        }
        temp_r4_25->unk4 = (void *) (temp_r4_25->unk4 + 0x10);
    } else {
        spCC = temp_r1_13;
        sp88 = 1;
        temp_r4_26 = (s32) (temp_r1_13 - temp_r4_25->unk0) >> 4;
        sp84 = temp_r4_26;
        var_r0_13 = &sp84;
        if ((u32) temp_r4_26 < 1U) {
            var_r0_13 = &sp88;
        }
        temp_r0_30 = temp_r4_26 + *var_r0_13;
        if (temp_r0_30 != 0) {
            temp_r4_27 = temp_r0_30 * 0x10;
            var_r0_14 = malloc(temp_r4_27);
            var_r8_6 = temp_r4_27;
            if (var_r0_14 == 0) {
                var_r0_14 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_14 = 0;
            var_r8_6 = 0;
        }
        spD0 = var_r0_14;
        var_r2_13 = temp_r4_25->unk0;
        var_r3_19 = var_r0_14;
        if (var_r2_13 != spCC) {
            do {
                if (var_r3_19 != 0) {
                    var_r3_19->unk0 = (s32) var_r2_13->unk0;
                    var_r3_19->unk4 = (s32) var_r2_13->unk4;
                    var_r3_19->unk8 = (s32) var_r2_13->unk8;
                    var_r3_19->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_19 += 0x10;
            } while (var_r2_13 != spCC);
        }
        if (sp88 == 1) {
            if (var_r3_19 != 0) {
                var_r3_19->unk0 = (s32 *) sp14.unk0;
                var_r3_19->unk4 = (s32) sp14.unk4;
                var_r3_19->unk8 = (s32) sp14.unk8;
                var_r3_19->unkC = (s32) sp14.unkC;
            }
            var_r5_6 = (GenObj *)((u8 *)var_r3_19 + 0x10);
        } else {
            var_r3_20 = sp88;
            var_r2_14 = var_r3_19;
            if (var_r3_20 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32 *) sp14.unk0;
                        var_r2_14->unk4 = (s32) sp14.unk4;
                        var_r2_14->unk8 = (s32) sp14.unk8;
                        var_r2_14->unkC = (s32) sp14.unkC;
                    }
                    var_r3_20 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r3_20 != 0);
            }
            var_r5_6 = var_r2_14;
        }
        temp_r2_10 = temp_r4_25->unk4;
        temp_r0_31 = temp_r4_25->unk0;
        var_r1_7 = temp_r0_31;
        if (temp_r0_31 != temp_r2_10) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_10);
        }
        if (temp_r0_31 != 0) {
            free();
        }
        temp_r4_25->unk0 = spD0;
        temp_r4_25->unk4 = var_r5_6;
        temp_r4_25->unkC = (void *) (spD0 + var_r8_6);
    }
    temp_r0_32 = func_0805E824(__builtin_new(0x14), arg0->unk52C, 0, 0x100);
    if (temp_r0_32 != arg0->unk5A0) {
        __builtin_delete();
    }
    arg0->unk5A0 = temp_r0_32;
    temp_r0_33 = __builtin_new(0x1C);
    temp_r0_33->unk0 = 0;
    temp_r0_33->unk2 = 0;
    temp_r0_33->unk4 = 0;
    temp_r0_33->unk6 = 0;
    temp_r0_33->unk8 = 0;
    temp_r0_33->unkC = 0;
    temp_r0_33->unk10 = 0;
    temp_r0_33->unk11 = 0;
    temp_r0_33->unk14 = 0;
    temp_r0_33->unk18 = 0;
    if (temp_r0_33 != arg0->unk5A4) {
        __builtin_delete();
    }
    arg0->unk5A4 = temp_r0_33;
    temp_r0_33->unk0 = (s16) arg0->unk8B4;
    temp_r0_33->unk2 = (s16) arg0->unk8B5;
    temp_r0_34 = (GenObj *)((u8 *)arg0 + 0x87C);
    temp_r0_33->unk6 = func_08007D4C(temp_r0_34, temp_r0_34->unk4);
    arg0->unk5A4->unk4 = 0xC;
    arg0->unk5A4->unk8 = 1;
    arg0->unk5A4->unk18 = 1;
    temp_r0_35 = func_0805E824(__builtin_new(0x14), arg0->unk52C, 0, 0x100);
    if (temp_r0_35 != arg0->unk5C8) {
        __builtin_delete();
    }
    arg0->unk5C8 = temp_r0_35;
    temp_r0_36 = __builtin_new(0x1C);
    temp_r0_36->unk0 = 0;
    temp_r0_36->unk2 = 0;
    temp_r0_36->unk4 = 0;
    temp_r0_36->unk6 = 0;
    temp_r0_36->unk8 = 0;
    temp_r0_36->unkC = 0;
    temp_r0_36->unk10 = 0;
    temp_r0_36->unk11 = 0;
    temp_r0_36->unk14 = 0;
    temp_r0_36->unk18 = 0;
    if (temp_r0_36 != arg0->unk5CC) {
        __builtin_delete();
    }
    arg0->unk5CC = temp_r0_36;
    func_0805E860(arg0->unk5C8, 0x91A);
    temp_r4_28 = arg0->unk5CC;
    temp_r5_5 = (GenObj *)((u8 *)arg0 + 0x884);
    temp_r4_28->unk6 = func_08007D4C(temp_r5_5, temp_r5_5->unk4);
    arg0->unk5CC->unk4 = 0xA;
    arg0->unk5CC->unk8 = 1;
    arg0->unk5CC->unk18 = 1;
    temp_r4_29 = (GenObj *)((u8 *)arg0 + 0x5D0);
    temp_r0_37 = arg0->unk5C8;
    temp_r1_14 = temp_r0_37->unk0;
    (*temp_r1_14)->unk10(&sp14, temp_r1_14, *(temp_r0_37->unk4 + (temp_r0_37->unkC * 4)));
    memcpy(&sp14, &sp14, 0x20);
    temp_r0_38 = &(GenObj *)((u8 *)sp14 + 0xC);
    arg0->unk5D0 = (s32 *) sp14.unk0;
    temp_r4_29->unk4 = (s32) sp14.unk4;
    temp_r4_29->unk8 = (s32) sp14.unk8;
    temp_r4_30 = (GenObj *)((u8 *)temp_r4_29 + 0xC);
    temp_r4_29->unkC = (s32) sp14.unkC;
    temp_r4_30->unk4 = (s32) temp_r0_38->unk4;
    temp_r4_30->unk8 = (s32) temp_r0_38->unk8;
    temp_r4_30->unkC = (s32) temp_r0_38->unkC;
    (temp_r4_30 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_38 + 0xC))->unk4;
    temp_r6_4 = func_08008910(arg0);
    temp_r7_4 = arg0->unk5D8;
    temp_r2_11 = func_08007D4C(temp_r5_5, temp_r5_5->unk4);
    var_r3_21 = 0;
    if (arg0->unk5D8 != 0) {
        var_r3_21 = ((GenObj *)((u8 *)arg0 + 0x5D8))->unk4;
    }
    func_08008F0C(&sp14, temp_r7_4, (temp_r2_11 << 5) + 0x06010000, var_r3_21);
    temp_r1_15 = temp_r6_4->unk4;
    if (temp_r1_15 != temp_r6_4->unkC) {
        if (temp_r1_15 != 0) {
            temp_r1_15->unk0 = (s32 *) sp14.unk0;
            temp_r1_15->unk4 = (s32) sp14.unk4;
            temp_r1_15->unk8 = (s32) sp14.unk8;
            temp_r1_15->unkC = (s32) sp14.unkC;
        }
        temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
    } else {
        spCC = temp_r1_15;
        sp90 = 1;
        temp_r4_31 = (s32) (spCC - temp_r6_4->unk0) >> 4;
        sp8C = temp_r4_31;
        var_r2_15 = &sp8C;
        if ((u32) temp_r4_31 < (u32) sp90) {
            var_r2_15 = &sp90;
        }
        temp_r0_39 = temp_r4_31 + *var_r2_15;
        if (temp_r0_39 != 0) {
            temp_r4_32 = temp_r0_39 * 0x10;
            var_r0_15 = malloc(temp_r4_32);
            var_r8_7 = temp_r4_32;
            if (var_r0_15 == 0) {
                var_r0_15 = func_080D3BC0(var_r8_7);
            }
        } else {
            var_r0_15 = 0;
            var_r8_7 = 0;
        }
        spD0 = var_r0_15;
        var_r2_16 = temp_r6_4->unk0;
        var_r3_22 = var_r0_15;
loop_246:
        if (var_r2_16 != spCC) {
            if (var_r3_22 != 0) {
                var_r3_22->unk0 = (s32 *) var_r2_16->unk0;
                var_r3_22->unk4 = (s32) var_r2_16->unk4;
                var_r3_22->unk8 = (s32) var_r2_16->unk8;
                var_r3_22->unkC = (s32) var_r2_16->unkC;
            }
            var_r2_16 += 0x10;
            var_r3_22 += 0x10;
            goto loop_246;
        }
        if (sp90 == 1) {
            if (var_r3_22 != 0) {
                var_r3_22->unk0 = (s32 *) sp14.unk0;
                var_r3_22->unk4 = (s32) sp14.unk4;
                var_r3_22->unk8 = (s32) sp14.unk8;
                var_r3_22->unkC = (s32) sp14.unkC;
            }
            var_r5_7 = (GenObj *)((u8 *)var_r3_22 + 0x10);
        } else {
            var_r3_23 = sp90;
            var_r2_17 = var_r3_22;
            if (var_r3_23 != 0) {
                do {
                    if (var_r2_17 != 0) {
                        var_r2_17->unk0 = (s32 *) sp14.unk0;
                        var_r2_17->unk4 = (s32) sp14.unk4;
                        var_r2_17->unk8 = (s32) sp14.unk8;
                        var_r2_17->unkC = (s32) sp14.unkC;
                    }
                    var_r3_23 -= 1;
                    var_r2_17 += 0x10;
                } while (var_r3_23 != 0);
            }
            var_r5_7 = var_r2_17;
        }
        temp_r2_12 = temp_r6_4->unk4;
        temp_r0_40 = temp_r6_4->unk0;
        var_r1_8 = temp_r0_40;
        if (temp_r0_40 != temp_r2_12) {
            do {
                var_r1_8 += 0x10;
            } while (var_r1_8 != temp_r2_12);
        }
        if (temp_r0_40 != 0) {
            free();
        }
        temp_r6_4->unk0 = spD0;
        temp_r6_4->unk4 = var_r5_7;
        temp_r6_4->unkC = (void *) (spD0 + var_r8_7);
    }
    temp_r4_33 = func_08008910(arg0);
    temp_r0_41 = arg0->unk5E0;
    var_r3_24 = 0;
    if (temp_r0_41 != 0) {
        var_r3_24 = ((GenObj *)((u8 *)arg0 + 0x5E0))->unk4;
    }
    func_08008F0C(&sp14, temp_r0_41, 0x05000340, var_r3_24);
    temp_r1_16 = temp_r4_33->unk4;
    if (temp_r1_16 != temp_r4_33->unkC) {
        if (temp_r1_16 != 0) {
            temp_r1_16->unk0 = (s32 *) sp14.unk0;
            temp_r1_16->unk4 = (s32) sp14.unk4;
            temp_r1_16->unk8 = (s32) sp14.unk8;
            temp_r1_16->unkC = (s32) sp14.unkC;
        }
        temp_r4_33->unk4 = (void *) (temp_r4_33->unk4 + 0x10);
    } else {
        spCC = temp_r1_16;
        sp98 = 1;
        temp_r4_34 = (s32) (spCC - temp_r4_33->unk0) >> 4;
        var_r0_16 = &sp94;
        *var_r0_16 = (u32) temp_r4_34;
        if ((u32) temp_r4_34 < (u32) sp98) {
            var_r0_16 = &sp98;
        }
        temp_r0_42 = temp_r4_34 + *var_r0_16;
        if (temp_r0_42 != 0) {
            temp_r4_35 = temp_r0_42 * 0x10;
            var_r0_17 = malloc(temp_r4_35);
            var_r8_8 = temp_r4_35;
            if (var_r0_17 == 0) {
                var_r0_17 = func_080D3BC0(var_r8_8);
            }
        } else {
            var_r0_17 = 0;
            var_r8_8 = 0;
        }
        spD0 = var_r0_17;
        var_r2_18 = temp_r4_33->unk0;
        var_r3_25 = var_r0_17;
        if (var_r2_18 != spCC) {
            do {
                if (var_r3_25 != 0) {
                    var_r3_25->unk0 = (s32) var_r2_18->unk0;
                    var_r3_25->unk4 = (s32) var_r2_18->unk4;
                    var_r3_25->unk8 = (s32) var_r2_18->unk8;
                    var_r3_25->unkC = (s32) var_r2_18->unkC;
                }
                var_r2_18 += 0x10;
                var_r3_25 += 0x10;
            } while (var_r2_18 != spCC);
        }
        if (sp98 == 1) {
            if (var_r3_25 != 0) {
                var_r3_25->unk0 = (s32 *) sp14.unk0;
                var_r3_25->unk4 = (s32) sp14.unk4;
                var_r3_25->unk8 = (s32) sp14.unk8;
                var_r3_25->unkC = (s32) sp14.unkC;
            }
            var_r5_8 = (GenObj *)((u8 *)var_r3_25 + 0x10);
        } else {
            var_r3_26 = sp98;
            var_r2_19 = var_r3_25;
            if (var_r3_26 != 0) {
                do {
                    if (var_r2_19 != 0) {
                        var_r2_19->unk0 = (s32 *) sp14.unk0;
                        var_r2_19->unk4 = (s32) sp14.unk4;
                        var_r2_19->unk8 = (s32) sp14.unk8;
                        var_r2_19->unkC = (s32) sp14.unkC;
                    }
                    var_r3_26 -= 1;
                    var_r2_19 += 0x10;
                } while (var_r3_26 != 0);
            }
            var_r5_8 = var_r2_19;
        }
        temp_r2_13 = temp_r4_33->unk4;
        temp_r0_43 = temp_r4_33->unk0;
        var_r1_9 = temp_r0_43;
        if (temp_r0_43 != temp_r2_13) {
            do {
                var_r1_9 += 0x10;
            } while (var_r1_9 != temp_r2_13);
        }
        if (temp_r0_43 != 0) {
            free();
        }
        temp_r4_33->unk0 = spD0;
        temp_r4_33->unk4 = var_r5_8;
        temp_r4_33->unkC = (void *) (spD0 + var_r8_8);
    }
    temp_r0_44 = func_0805E824(__builtin_new(0x14), arg0->unk52C, 0, 0x100);
    if (temp_r0_44 != arg0->unk5F0) {
        __builtin_delete();
    }
    arg0->unk5F0 = temp_r0_44;
    temp_r0_45 = __builtin_new(0x1C);
    temp_r0_45->unk0 = 0;
    temp_r0_45->unk2 = 0;
    temp_r0_45->unk4 = 0;
    temp_r0_45->unk6 = 0;
    temp_r0_45->unk8 = 0;
    temp_r0_45->unkC = 0;
    temp_r0_45->unk10 = 0;
    temp_r0_45->unk11 = 0;
    temp_r0_45->unk14 = 0;
    temp_r0_45->unk18 = 0;
    if (temp_r0_45 != arg0->unk5F4) {
        __builtin_delete();
    }
    arg0->unk5F4 = temp_r0_45;
    func_0805E860(arg0->unk5F0, (arg0->unk980 * 0x54) + 0x42C);
    arg0->unk5F4->unk0 = (s16) arg0->unk8B4;
    arg0->unk5F4->unk2 = (s16) arg0->unk8B5;
    temp_r4_36 = arg0->unk5F4;
    temp_r0_46 = (GenObj *)((u8 *)arg0 + 0x84C);
    temp_r4_36->unk6 = func_08007D4C(temp_r0_46, temp_r0_46->unk4);
    arg0->unk5F4->unk4 = 4;
    arg0->unk5F4->unk8 = 1;
    arg0->unk5F4->unk18 = 1;
    temp_r0_47 = func_0805E824(__builtin_new(0x14), arg0->unk534, 0, 0x100);
    if (temp_r0_47 != arg0->unk6A0) {
        __builtin_delete();
    }
    arg0->unk6A0 = temp_r0_47;
    func_0805E860(temp_r0_47, 0);
    spBC = 0;
loop_298:
    var_r7 = 0;
    do {
        temp_r0_48 = __builtin_new(0x1C);
        temp_r0_48->unk0 = 0;
        temp_r0_48->unk2 = 0;
        temp_r0_48->unk4 = 0;
        temp_r0_48->unk6 = 0;
        temp_r0_48->unk8 = 0;
        temp_r0_48->unkC = 0;
        temp_r0_48->unk10 = 0;
        temp_r0_48->unk11 = 0;
        temp_r0_48->unk14 = 0;
        temp_r0_48->unk18 = 0;
        temp_r6_5 = ((spBC * 5) + var_r7) * 4;
        temp_r5_6 = temp_r6_5 + arg0;
        if (temp_r0_48 != temp_r5_6->unk6A4) {
            __builtin_delete();
        }
        temp_r5_6->unk6A4 = temp_r0_48;
        *((u8 *)temp_r6_5 + arg0)->unk6A4 = (var_r7 * 0x10) + 0x50;
        (temp_r6_5 + arg0)->unk6A4->unk2 = (s16) ((spBC * 0x10) + 0x28);
        temp_r4_37 = (temp_r6_5 + arg0)->unk6A4;
        temp_r5_7 = (GenObj *)((u8 *)arg0 + 0x854);
        temp_r4_37->unk6 = func_08007D4C(temp_r5_7, temp_r5_7->unk4);
        (temp_r6_5 + arg0)->unk6A4->unk4 = 5;
        (temp_r6_5 + arg0)->unk6A4->unk8 = 1;
        (temp_r6_5 + arg0)->unk6A4->unk18 = 1;
        var_r7 += 1;
    } while (var_r7 <= 4);
    temp_r0_49 = arg0->unk6A0;
    temp_r1_17 = temp_r0_49->unk0;
    (*temp_r1_17)->unk10(&sp14, temp_r1_17, *(temp_r0_49->unk4 + (temp_r0_49->unkC * 4)));
    memcpy(&sp14, &sp14, 0x20);
    temp_r1_18 = (GenObj *)((u8 *)arg0 + 0x708);
    temp_r0_50 = &(GenObj *)((u8 *)sp14 + 0xC);
    arg0->unk708 = (s32 *) sp14.unk0;
    temp_r1_18->unk4 = (s32) sp14.unk4;
    temp_r1_18->unk8 = (s32) sp14.unk8;
    temp_r1_19 = (GenObj *)((u8 *)temp_r1_18 + 0xC);
    temp_r1_18->unkC = (s32) sp14.unkC;
    temp_r1_19->unk4 = (s32) temp_r0_50->unk4;
    temp_r1_19->unk8 = (s32) temp_r0_50->unk8;
    temp_r1_20 = temp_r1_19 + 0xC;
    temp_r1_19->unkC = (s32) temp_r0_50->unkC;
    temp_r1_20->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_50 + 0xC))->unk4;
    temp_r6_6 = func_08008910(arg0, temp_r1_20 + 8);
    temp_r7_5 = arg0->unk710;
    temp_r2_14 = func_08007D4C(temp_r5_7, temp_r5_7->unk4);
    var_r3_27 = 0;
    if (arg0->unk710 != 0) {
        var_r3_27 = ((GenObj *)((u8 *)arg0 + 0x710))->unk4;
    }
    func_08008F0C(&sp14, temp_r7_5, (temp_r2_14 << 5) + 0x06010000, var_r3_27);
    temp_r1_21 = temp_r6_6->unk4;
    if (temp_r1_21 != temp_r6_6->unkC) {
        if (temp_r1_21 != 0) {
            temp_r1_21->unk0 = (s32 *) sp14.unk0;
            temp_r1_21->unk4 = (s32) sp14.unk4;
            temp_r1_21->unk8 = (s32) sp14.unk8;
            temp_r1_21->unkC = (s32) sp14.unkC;
        }
        temp_r6_6->unk4 = (void *) (temp_r6_6->unk4 + 0x10);
    } else {
        spCC = temp_r1_21;
        spA0 = 1;
        temp_r4_38 = (s32) (spCC - temp_r6_6->unk0) >> 4;
        var_r0_18 = &sp9C;
        *var_r0_18 = (u32) temp_r4_38;
        if ((u32) temp_r4_38 < (u32) spA0) {
            var_r0_18 = &spA0;
        }
        temp_r0_51 = temp_r4_38 + *var_r0_18;
        if (temp_r0_51 != 0) {
            temp_r4_39 = temp_r0_51 * 0x10;
            var_r0_19 = malloc(temp_r4_39);
            var_r8_9 = temp_r4_39;
            if (var_r0_19 == 0) {
                var_r0_19 = func_080D3BC0(var_r8_9);
            }
        } else {
            var_r0_19 = 0;
            var_r8_9 = 0;
        }
        spD0 = var_r0_19;
        var_r2_20 = temp_r6_6->unk0;
        var_r3_28 = var_r0_19;
        if (var_r2_20 != spCC) {
            do {
                if (var_r3_28 != 0) {
                    var_r3_28->unk0 = (s32) var_r2_20->unk0;
                    var_r3_28->unk4 = (s32) var_r2_20->unk4;
                    var_r3_28->unk8 = (s32) var_r2_20->unk8;
                    var_r3_28->unkC = (s32) var_r2_20->unkC;
                }
                var_r2_20 += 0x10;
                var_r3_28 += 0x10;
            } while (var_r2_20 != spCC);
        }
        temp_r1_22 = spA0;
        if (temp_r1_22 == 1) {
            if (var_r3_28 != 0) {
                var_r3_28->unk0 = (s32 *) sp14.unk0;
                var_r3_28->unk4 = (s32) sp14.unk4;
                var_r3_28->unk8 = (s32) sp14.unk8;
                var_r3_28->unkC = (s32) sp14.unkC;
            }
            var_r5_9 = (GenObj *)((u8 *)var_r3_28 + 0x10);
        } else {
            var_r3_29 = temp_r1_22;
            var_r2_21 = var_r3_28;
            if (var_r3_29 != 0) {
                do {
                    if (var_r2_21 != 0) {
                        var_r2_21->unk0 = (s32 *) sp14.unk0;
                        var_r2_21->unk4 = (s32) sp14.unk4;
                        var_r2_21->unk8 = (s32) sp14.unk8;
                        var_r2_21->unkC = (s32) sp14.unkC;
                    }
                    var_r3_29 -= 1;
                    var_r2_21 += 0x10;
                } while (var_r3_29 != 0);
            }
            var_r5_9 = var_r2_21;
        }
        temp_r2_15 = temp_r6_6->unk4;
        temp_r0_52 = temp_r6_6->unk0;
        var_r1_10 = temp_r0_52;
        if (temp_r0_52 != temp_r2_15) {
            do {
                var_r1_10 += 0x10;
            } while (var_r1_10 != temp_r2_15);
        }
        if (temp_r0_52 != 0) {
            free();
        }
        temp_r6_6->unk0 = spD0;
        temp_r6_6->unk4 = var_r5_9;
        temp_r6_6->unkC = (void *) (spD0 + var_r8_9);
    }
    temp_r4_40 = func_08008910(arg0);
    temp_r0_53 = arg0->unk718;
    var_r3_30 = 0;
    if (temp_r0_53 != 0) {
        var_r3_30 = ((GenObj *)((u8 *)arg0 + 0x718))->unk4;
    }
    func_08008F0C(&sp14, temp_r0_53, 0x050002A0, var_r3_30);
    temp_r1_23 = temp_r4_40->unk4;
    if (temp_r1_23 != temp_r4_40->unkC) {
        if (temp_r1_23 != 0) {
            temp_r1_23->unk0 = (s32 *) sp14.unk0;
            temp_r1_23->unk4 = (s32) sp14.unk4;
            temp_r1_23->unk8 = (s32) sp14.unk8;
            temp_r1_23->unkC = (s32) sp14.unkC;
        }
        temp_r4_40->unk4 = (void *) (temp_r4_40->unk4 + 0x10);
    } else {
        spCC = temp_r1_23;
        spA8 = 1;
        temp_r4_41 = (s32) (spCC - temp_r4_40->unk0) >> 4;
        var_r0_20 = &spA4;
        *var_r0_20 = (u32) temp_r4_41;
        if ((u32) temp_r4_41 < (u32) spA8) {
            var_r0_20 = &spA8;
        }
        temp_r0_54 = temp_r4_41 + *var_r0_20;
        if (temp_r0_54 != 0) {
            temp_r4_42 = temp_r0_54 * 0x10;
            var_r0_21 = malloc(temp_r4_42);
            var_r8_10 = temp_r4_42;
            if (var_r0_21 == 0) {
                var_r0_21 = func_080D3BC0(var_r8_10);
            }
        } else {
            var_r0_21 = 0;
            var_r8_10 = 0;
        }
        spD0 = var_r0_21;
        var_r2_22 = temp_r4_40->unk0;
        var_r3_31 = var_r0_21;
        if (var_r2_22 != spCC) {
            do {
                if (var_r3_31 != 0) {
                    var_r3_31->unk0 = (s32) var_r2_22->unk0;
                    var_r3_31->unk4 = (s32) var_r2_22->unk4;
                    var_r3_31->unk8 = (s32) var_r2_22->unk8;
                    var_r3_31->unkC = (s32) var_r2_22->unkC;
                }
                var_r2_22 += 0x10;
                var_r3_31 += 0x10;
            } while (var_r2_22 != spCC);
        }
        if (spA8 == 1) {
            if (var_r3_31 != 0) {
                var_r3_31->unk0 = (s32 *) sp14.unk0;
                var_r3_31->unk4 = (s32) sp14.unk4;
                var_r3_31->unk8 = (s32) sp14.unk8;
                var_r3_31->unkC = (s32) sp14.unkC;
            }
            var_r5_10 = (GenObj *)((u8 *)var_r3_31 + 0x10);
        } else {
            var_r3_32 = spA8;
            var_r2_23 = var_r3_31;
            if (var_r3_32 != 0) {
                do {
                    if (var_r2_23 != 0) {
                        var_r2_23->unk0 = (s32 *) sp14.unk0;
                        var_r2_23->unk4 = (s32) sp14.unk4;
                        var_r2_23->unk8 = (s32) sp14.unk8;
                        var_r2_23->unkC = (s32) sp14.unkC;
                    }
                    var_r3_32 -= 1;
                    var_r2_23 += 0x10;
                } while (var_r3_32 != 0);
            }
            var_r5_10 = var_r2_23;
        }
        temp_r2_16 = temp_r4_40->unk4;
        temp_r0_55 = temp_r4_40->unk0;
        var_r1_11 = temp_r0_55;
        if (temp_r0_55 != temp_r2_16) {
            do {
                var_r1_11 += 0x10;
            } while (var_r1_11 != temp_r2_16);
        }
        if (temp_r0_55 != 0) {
            free();
        }
        temp_r4_40->unk0 = spD0;
        temp_r4_40->unk4 = var_r5_10;
        temp_r4_40->unkC = (void *) (spD0 + var_r8_10);
    }
    temp_r0_56 = spBC + 1;
    spBC = temp_r0_56;
    if (temp_r0_56 <= 4) {
        goto loop_298;
    }
    temp_r0_57 = func_0805E824(__builtin_new(0x14), arg0->unk530, 0, 0x100);
    if (temp_r0_57 != arg0->unk618) {
        __builtin_delete();
    }
    arg0->unk618 = temp_r0_57;
    func_0805E860(temp_r0_57, 0);
    spBC = 0;
loop_367:
    var_r7_2 = 0;
    spC4 = spBC + 1;
    do {
        temp_r0_58 = __builtin_new(0x1C);
        temp_r0_58->unk0 = 0;
        temp_r0_58->unk2 = 0;
        temp_r0_58->unk4 = 0;
        temp_r0_58->unk6 = 0;
        temp_r0_58->unk8 = 0;
        temp_r0_58->unkC = 0;
        temp_r0_58->unk10 = 0;
        temp_r0_58->unk11 = 0;
        temp_r0_58->unk14 = 0;
        temp_r0_58->unk18 = 0;
        temp_r6_7 = ((spBC * 5) + var_r7_2) * 4;
        temp_r5_8 = temp_r6_7 + arg0;
        if (temp_r0_58 != temp_r5_8->unk61C) {
            __builtin_delete();
        }
        temp_r5_8->unk61C = temp_r0_58;
        *((u8 *)temp_r6_7 + arg0)->unk61C = (var_r7_2 * 0x10) + 0x50;
        (temp_r6_7 + arg0)->unk61C->unk2 = (s16) ((spBC * 0x10) + 0x28);
        temp_r4_43 = (temp_r6_7 + arg0)->unk61C;
        temp_r5_9 = (GenObj *)((u8 *)arg0 + 0x85C);
        temp_r4_43->unk6 = func_08007D4C(temp_r5_9, temp_r5_9->unk4);
        (temp_r6_7 + arg0)->unk61C->unk4 = 6;
        (temp_r6_7 + arg0)->unk61C->unk8 = 1;
        (temp_r6_7 + arg0)->unk61C->unk18 = 1;
        var_r7_2 += 1;
    } while (var_r7_2 <= 4);
    temp_r0_59 = arg0->unk618;
    temp_r1_24 = temp_r0_59->unk0;
    (*temp_r1_24)->unk10(&sp14, temp_r1_24, *(temp_r0_59->unk4 + (temp_r0_59->unkC * 4)));
    memcpy(&sp14, &sp14, 0x20);
    temp_r1_25 = (GenObj *)((u8 *)arg0 + 0x680);
    temp_r0_60 = &(GenObj *)((u8 *)sp14 + 0xC);
    arg0->unk680 = (s32 *) sp14.unk0;
    temp_r1_25->unk4 = (s32) sp14.unk4;
    temp_r1_25->unk8 = (s32) sp14.unk8;
    temp_r1_26 = (GenObj *)((u8 *)temp_r1_25 + 0xC);
    temp_r1_25->unkC = (s32) sp14.unkC;
    temp_r1_26->unk4 = (s32) temp_r0_60->unk4;
    temp_r1_26->unk8 = (s32) temp_r0_60->unk8;
    temp_r1_27 = temp_r1_26 + 0xC;
    temp_r1_26->unkC = (s32) temp_r0_60->unkC;
    temp_r1_27->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_60 + 0xC))->unk4;
    temp_r6_8 = func_08008910(arg0, temp_r1_27 + 8);
    temp_r7_6 = arg0->unk688;
    temp_r2_17 = func_08007D4C(temp_r5_9, temp_r5_9->unk4);
    var_r3_33 = 0;
    if (arg0->unk688 != 0) {
        var_r3_33 = ((GenObj *)((u8 *)arg0 + 0x688))->unk4;
    }
    func_08008F0C(&sp14, temp_r7_6, (temp_r2_17 << 5) + 0x06010000, var_r3_33);
    temp_r1_28 = temp_r6_8->unk4;
    if (temp_r1_28 != temp_r6_8->unkC) {
        if (temp_r1_28 != 0) {
            temp_r1_28->unk0 = (s32 *) sp14.unk0;
            temp_r1_28->unk4 = (s32) sp14.unk4;
            temp_r1_28->unk8 = (s32) sp14.unk8;
            temp_r1_28->unkC = (s32) sp14.unkC;
        }
        temp_r6_8->unk4 = (void *) (temp_r6_8->unk4 + 0x10);
    } else {
        spCC = temp_r1_28;
        spB0 = 1;
        temp_r4_44 = (s32) (spCC - temp_r6_8->unk0) >> 4;
        var_r0_22 = &spAC;
        *var_r0_22 = (u32) temp_r4_44;
        if ((u32) temp_r4_44 < (u32) spB0) {
            var_r0_22 = &spB0;
        }
        temp_r0_61 = temp_r4_44 + *var_r0_22;
        if (temp_r0_61 != 0) {
            temp_r4_45 = temp_r0_61 * 0x10;
            var_r0_23 = malloc(temp_r4_45);
            var_r8_11 = temp_r4_45;
            if (var_r0_23 == 0) {
                var_r0_23 = func_080D3BC0(var_r8_11);
            }
        } else {
            var_r0_23 = 0;
            var_r8_11 = 0;
        }
        spD0 = var_r0_23;
        var_r2_24 = temp_r6_8->unk0;
        var_r3_34 = var_r0_23;
        if (var_r2_24 != spCC) {
            do {
                if (var_r3_34 != 0) {
                    var_r3_34->unk0 = (s32) var_r2_24->unk0;
                    var_r3_34->unk4 = (s32) var_r2_24->unk4;
                    var_r3_34->unk8 = (s32) var_r2_24->unk8;
                    var_r3_34->unkC = (s32) var_r2_24->unkC;
                }
                var_r2_24 += 0x10;
                var_r3_34 += 0x10;
            } while (var_r2_24 != spCC);
        }
        temp_r1_29 = spB0;
        if (temp_r1_29 == 1) {
            if (var_r3_34 != 0) {
                var_r3_34->unk0 = (s32 *) sp14.unk0;
                var_r3_34->unk4 = (s32) sp14.unk4;
                var_r3_34->unk8 = (s32) sp14.unk8;
                var_r3_34->unkC = (s32) sp14.unkC;
            }
            var_r5_11 = (GenObj *)((u8 *)var_r3_34 + 0x10);
        } else {
            var_r3_35 = temp_r1_29;
            var_r2_25 = var_r3_34;
            if (var_r3_35 != 0) {
                do {
                    if (var_r2_25 != 0) {
                        var_r2_25->unk0 = (s32 *) sp14.unk0;
                        var_r2_25->unk4 = (s32) sp14.unk4;
                        var_r2_25->unk8 = (s32) sp14.unk8;
                        var_r2_25->unkC = (s32) sp14.unkC;
                    }
                    var_r3_35 -= 1;
                    var_r2_25 += 0x10;
                } while (var_r3_35 != 0);
            }
            var_r5_11 = var_r2_25;
        }
        temp_r2_18 = temp_r6_8->unk4;
        temp_r0_62 = temp_r6_8->unk0;
        var_r1_12 = temp_r0_62;
        if (temp_r0_62 != temp_r2_18) {
            do {
                var_r1_12 += 0x10;
            } while (var_r1_12 != temp_r2_18);
        }
        if (temp_r0_62 != 0) {
            free();
        }
        temp_r6_8->unk0 = spD0;
        temp_r6_8->unk4 = var_r5_11;
        temp_r6_8->unkC = (void *) (spD0 + var_r8_11);
    }
    temp_r4_46 = func_08008910(arg0);
    temp_r0_63 = arg0->unk690;
    var_r3_36 = 0;
    if (temp_r0_63 != 0) {
        var_r3_36 = ((GenObj *)((u8 *)arg0 + 0x690))->unk4;
    }
    func_08008F0C(&sp14, temp_r0_63, 0x050002C0, var_r3_36);
    temp_r1_30 = temp_r4_46->unk4;
    if (temp_r1_30 != temp_r4_46->unkC) {
        if (temp_r1_30 != 0) {
            temp_r1_30->unk0 = (s32 *) sp14.unk0;
            temp_r1_30->unk4 = (s32) sp14.unk4;
            temp_r1_30->unk8 = (s32) sp14.unk8;
            temp_r1_30->unkC = (s32) sp14.unkC;
        }
        temp_r4_46->unk4 = (void *) (temp_r4_46->unk4 + 0x10);
    } else {
        spCC = temp_r1_30;
        spB8 = 1;
        temp_r4_47 = (s32) (spCC - temp_r4_46->unk0) >> 4;
        var_r0_24 = &spB4;
        *var_r0_24 = (u32) temp_r4_47;
        if ((u32) temp_r4_47 < (u32) spB8) {
            var_r0_24 = &spB8;
        }
        temp_r0_64 = temp_r4_47 + *var_r0_24;
        if (temp_r0_64 != 0) {
            temp_r4_48 = temp_r0_64 * 0x10;
            var_r0_25 = malloc(temp_r4_48);
            var_r8_12 = temp_r4_48;
            if (var_r0_25 == 0) {
                var_r0_25 = func_080D3BC0(var_r8_12);
            }
        } else {
            var_r0_25 = 0;
            var_r8_12 = 0;
        }
        spD0 = var_r0_25;
        var_r2_26 = temp_r4_46->unk0;
        var_r3_37 = var_r0_25;
        if (var_r2_26 != spCC) {
            do {
                if (var_r3_37 != 0) {
                    var_r3_37->unk0 = (s32) var_r2_26->unk0;
                    var_r3_37->unk4 = (s32) var_r2_26->unk4;
                    var_r3_37->unk8 = (s32) var_r2_26->unk8;
                    var_r3_37->unkC = (s32) var_r2_26->unkC;
                }
                var_r2_26 += 0x10;
                var_r3_37 += 0x10;
            } while (var_r2_26 != spCC);
        }
        if (spB8 == 1) {
            if (var_r3_37 != 0) {
                var_r3_37->unk0 = (s32 *) sp14.unk0;
                var_r3_37->unk4 = (s32) sp14.unk4;
                var_r3_37->unk8 = (s32) sp14.unk8;
                var_r3_37->unkC = (s32) sp14.unkC;
            }
            var_r5_12 = (GenObj *)((u8 *)var_r3_37 + 0x10);
        } else {
            var_r3_38 = spB8;
            var_r2_27 = var_r3_37;
            if (var_r3_38 != 0) {
                do {
                    if (var_r2_27 != 0) {
                        var_r2_27->unk0 = (s32 *) sp14.unk0;
                        var_r2_27->unk4 = (s32) sp14.unk4;
                        var_r2_27->unk8 = (s32) sp14.unk8;
                        var_r2_27->unkC = (s32) sp14.unkC;
                    }
                    var_r3_38 -= 1;
                    var_r2_27 += 0x10;
                } while (var_r3_38 != 0);
            }
            var_r5_12 = var_r2_27;
        }
        temp_r2_19 = temp_r4_46->unk4;
        temp_r0_65 = temp_r4_46->unk0;
        var_r1_13 = temp_r0_65;
        if (temp_r0_65 != temp_r2_19) {
            do {
                var_r1_13 += 0x10;
            } while (var_r1_13 != temp_r2_19);
        }
        if (temp_r0_65 != 0) {
            free();
        }
        temp_r4_46->unk0 = spD0;
        temp_r4_46->unk4 = var_r5_12;
        temp_r4_46->unkC = (void *) (spD0 + var_r8_12);
    }
    spBC = spC4;
    if (spC4 <= 4) {
        goto loop_367;
    }
}
