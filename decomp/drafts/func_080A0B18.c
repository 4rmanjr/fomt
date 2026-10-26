s32 AddFriendship__3Npci(void *, s32);                /* extern */
s32 AddLove__12Bachelorettei(void *, s32);            /* extern */
s32 CountChickens__C4Coop(s32);                     /* extern */
s32 DayUpdate__12BachelorettebUi(void *, u32, s32);   /* extern */
s32 DayUpdate__13HarvestSprite(void *);               /* extern */
s32 DayUpdate__3NpcUi(void *, s32);                   /* extern */
s32 GetAffection__C6Animal();                       /* extern */
s32 GetChicken__C4CoopUi(s32, u32);                 /* extern */
u32 GetFriendship__C3Npc(void *);                   /* extern */
u32 GetRivalEventCount__C12Bachelorette(void *);    /* extern */
s32 SetLocation__3NpcRC13ActorLocation(void *, ? *);  /* extern */
u32 func_0800E970(s32);                             /* extern */
s32 func_0809E804(s32 *, s32);                          /* extern */
s32 func_0809E994(void *, s32);                       /* extern */
s32 func_0809EAF8(void *);                            /* extern */
s32 func_0809EBEC(void *);                            /* extern */
s32 func_0809EE4C(void *);                            /* extern */
s32 func_080A0490(void *);                          /* extern */
s32 func_080A06B0(void *, u32);                     /* extern */
s32 func_080A17A0(s32 *, s32);                          /* extern */
s32 func_080A1890(s32 *, s32);                          /* extern */
s32 func_080A198C(s32 *, s32);                          /* extern */
s32 func_080A19EC(s32 *, s32);                          /* extern */
u32 method_0809E4BC__C12Bachelorette(void *);       /* extern */
s32 method_0809E550__12Bachelorette(void *);          /* extern */
s32 method_0809E7C8__13HarvestSprite(void *, s32 *);  /* extern */
s32 rand();                                         /* extern */
extern ? gUnk_08104109;
extern ? gUnk_0810410E;
extern ? gUnk_08104113;
extern ? gUnk_08104118;
extern ? gUnk_0810411D;
extern ? gUnk_08104122;

s32 func_080A0B18(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
s32 sp0;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    void *sp28;
    void *sp2C;
    void *sp30;
    void *sp34;
    void *sp38;
    void *sp3C;
    void *sp40;
    void *sp44;
    s16 temp_r2_6;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_sb;
    u16 temp_r2_5;
    u32 temp_r0_3;
    u32 temp_r0_5;
    u32 temp_r1_5;
    u32 temp_r2_7;
    u32 temp_r5;
    u32 temp_r6;
    u32 temp_r6_2;
    u32 temp_r6_3;
    u32 temp_r6_4;
    u32 temp_r8;
    u32 var_r4;
    u32 var_r5;
    u32 var_r5_2;
    u32 var_r6;
    u32 var_r6_2;
    u8 *var_r0;
    u8 temp_r2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_14;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;

    sp24 = arg3;
    arg0->unk2 = (u8) (-0x21 & arg0->unk2);
    temp_r0 = func_080A0490(arg0);
    temp_sb = temp_r0;
    temp_r8 = (u32) ((0 - temp_r0) | temp_sb) >> 0x1F;
    temp_r4 = arg0 + 0x70;
    DayUpdate__3NpcUi(temp_r4, rand() % 100);
    temp_r4_2 = temp_r4 + 0x14;
    DayUpdate__3NpcUi(temp_r4_2, rand() % 100);
    temp_r4_3 = temp_r4_2 + 0x14;
    if ((GetRivalEventCount__C12Bachelorette(temp_r4_3) <= 4U) || (((u32) (arg1->unk9 << 0x1E) >> 0x1E) == 1)) {
        DayUpdate__12BachelorettebUi(temp_r4_3, temp_r8, rand() % 100);
    }
    temp_r4_4 = arg0 + 0xB0;
    DayUpdate__3NpcUi(temp_r4_4, rand() % 100);
    temp_r4_5 = temp_r4_4 + 0x14;
    DayUpdate__3NpcUi(temp_r4_5, rand() % 100);
    func_0809EE4C(arg0 + 0xD8);
    DayUpdate__3NpcUi(temp_r4_5 + 0x2C, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x104, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x118, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x12C, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x140, rand() % 100);
    DayUpdate__12BachelorettebUi(arg0 + 0x154, temp_r8, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x16C, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x180, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x194, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x1A8, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x1BC, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x1D0, rand() % 100);
    DayUpdate__12BachelorettebUi(arg0 + 0x1E4, temp_r8, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x1FC, rand() % 100);
    DayUpdate__12BachelorettebUi(arg0 + 0x210, temp_r8, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x228, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x23C, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x250, rand() % 100);
    DayUpdate__12BachelorettebUi(arg0 + 0x264, temp_r8, rand() % 100);
    if (((u32) (arg1->unk9 << 0x1E) >> 0x1E) == 1) {
        temp_r4_6 = arg0 + 0x27C;
        temp_r5 = GetFriendship__C3Npc(temp_r4_6);
        DayUpdate__3NpcUi(temp_r4_6, rand() % 100);
        if (GetFriendship__C3Npc(temp_r4_6) > temp_r5) {
            AddFriendship__3Npci(temp_r4_6, GetFriendship__C3Npc(temp_r4_6) - temp_r5);
        }
    }
    func_0809EBEC(arg0 + 0x290);
    DayUpdate__3NpcUi(arg0 + 0x2A8, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x2BC, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x2D0, rand() % 100);
    DayUpdate__12BachelorettebUi(arg0 + 0x2E4, temp_r8, rand() % 100);
    DayUpdate__3NpcUi(arg0 + 0x2FC, rand() % 100);
    if (((u32) (arg2->unk3A << 0x19) >> 0x1E) == 2) {
        DayUpdate__3NpcUi(arg0 + 0x310, rand() % 100);
    }
    if (((u32) (arg2->unk3B << 0x1B) >> 0x1E) == 2) {
        DayUpdate__3NpcUi(arg0 + 0x328, rand() % 100);
    }
    if ((s32) (arg0->unk3 << 0x1E) < 0) {
        func_0809EAF8(arg0 + 4);
    }
    temp_r4_7 = arg0 + 0x33C;
    DayUpdate__13HarvestSprite(temp_r4_7);
    func_0809E804(&sp0, 0);
    SetLocation__3NpcRC13ActorLocation(temp_r4_7, &sp0);
    sp8 = 0;
    method_0809E7C8__13HarvestSprite(temp_r4_7, &sp8);
    temp_r5_2 = arg0 + 0x438;
    func_0809E994(temp_r5_2, 0);
    temp_r4_8 = arg0 + 0x360;
    DayUpdate__13HarvestSprite(temp_r4_8);
    func_0809E804(&sp0, 1);
    SetLocation__3NpcRC13ActorLocation(temp_r4_8, &sp0);
    spC = 0;
    method_0809E7C8__13HarvestSprite(temp_r4_8, &spC);
    func_0809E994(temp_r5_2, 1);
    temp_r4_9 = arg0 + 0x384;
    DayUpdate__13HarvestSprite(temp_r4_9);
    func_0809E804(&sp0, 2);
    SetLocation__3NpcRC13ActorLocation(temp_r4_9, &sp0);
    sp10 = 0;
    method_0809E7C8__13HarvestSprite(temp_r4_9, &sp10);
    func_0809E994(temp_r5_2, 2);
    temp_r4_10 = arg0 + 0x3A8;
    DayUpdate__13HarvestSprite(temp_r4_10);
    func_0809E804(&sp0, 3);
    SetLocation__3NpcRC13ActorLocation(temp_r4_10, &sp0);
    sp14 = 0;
    method_0809E7C8__13HarvestSprite(temp_r4_10, &sp14);
    func_0809E994(temp_r5_2, 3);
    temp_r4_11 = arg0 + 0x3CC;
    DayUpdate__13HarvestSprite(temp_r4_11);
    func_0809E804(&sp0, 4);
    SetLocation__3NpcRC13ActorLocation(temp_r4_11, &sp0);
    sp18 = 0;
    method_0809E7C8__13HarvestSprite(temp_r4_11, &sp18);
    func_0809E994(temp_r5_2, 4);
    temp_r4_12 = arg0 + 0x3F0;
    DayUpdate__13HarvestSprite(temp_r4_12);
    func_0809E804(&sp0, 5);
    SetLocation__3NpcRC13ActorLocation(temp_r4_12, &sp0);
    sp1C = 0;
    method_0809E7C8__13HarvestSprite(temp_r4_12, &sp1C);
    func_0809E994(temp_r5_2, 5);
    temp_r4_13 = arg0 + 0x414;
    DayUpdate__13HarvestSprite(temp_r4_13);
    func_0809E804(&sp0, 6);
    SetLocation__3NpcRC13ActorLocation(temp_r4_13, &sp0);
    sp20 = 0;
    method_0809E7C8__13HarvestSprite(temp_r4_13, &sp20);
    func_0809E994(temp_r5_2, 6);
    temp_r2 = arg2->unk1C;
    if (((((1 & temp_r2) * 2) | ((u8) arg2->unk1B >> 7)) == 2) || (((u32) (temp_r2 << 0x1D) >> 0x1E) == 2) || (((u32) (temp_r2 << 0x1B) >> 0x1E) == 2) || (((u32) (temp_r2 << 0x19) >> 0x1E) == 2) || (((u32) ((u16) arg2->unk1C << 0x17) >> 0x1E) == 2) || (((u32) (arg2->unk4B << 0x1E) >> 0x1E) == 2)) {
        temp_r0_2 = arg0->unk470;
        if (temp_r0_2 != 0x3C) {
            arg0->unk470 = (s32) (temp_r0_2 + 1);
        }
    }
    temp_r4_14 = arg0 + 0x98;
    temp_r0_3 = method_0809E4BC__C12Bachelorette(temp_r4_14);
    temp_r1 = arg0 + 0x30;
    sp28 = temp_r1;
    temp_r2_2 = arg0 + 0x38;
    sp2C = temp_r2_2;
    temp_r3 = arg0 + 0x40;
    sp30 = temp_r3;
    temp_r1_2 = temp_r1 + 0x18;
    sp34 = temp_r1_2;
    temp_r2_3 = temp_r2_2 + 0x18;
    sp38 = temp_r2_3;
    sp3C = temp_r3 + 0x18;
    sp40 = temp_r1_2 + 0x18;
    sp44 = temp_r2_3 + 0x18;
    if ((temp_r0_3 <= 4U) && ((temp_r8 == 0) || (temp_sb == 3))) {
        temp_r0_4 = CountChickens__C4Coop(arg4 + 0x3FC);
        temp_r3_2 = arg0 + 0x30;
        sp28 = temp_r3_2;
        temp_r1_3 = arg0 + 0x38;
        sp2C = temp_r1_3;
        temp_r2_4 = arg0 + 0x40;
        sp30 = temp_r2_4;
        temp_r3_3 = temp_r3_2 + 0x18;
        sp34 = temp_r3_3;
        temp_r1_4 = temp_r1_3 + 0x18;
        sp38 = temp_r1_4;
        sp3C = temp_r2_4 + 0x18;
        sp40 = temp_r3_3 + 0x18;
        sp44 = temp_r1_4 + 0x18;
        if (temp_r0_4 == 8) {
            var_r6 = 0;
            var_r5 = 0;
            do {
                if (GetChicken__C4CoopUi(arg4 + 0x3FC, var_r5) != 0) {
                    var_r6 += GetAffection__C6Animal();
                }
                var_r5 += 1;
            } while (var_r5 <= 7U);
loop_30:
            if ((method_0809E4BC__C12Bachelorette(temp_r4_14) <= 4U) && ((u32) (var_r6 >> 3) >= (u32) *(method_0809E4BC__C12Bachelorette(temp_r4_14) + &gUnk_08104109))) {
                AddLove__12Bachelorettei(temp_r4_14, 0x9C4);
                method_0809E550__12Bachelorette(temp_r4_14);
                goto loop_30;
            }
        }
    }
    if ((method_0809E4BC__C12Bachelorette(arg0 + 0x154) <= 4U) && ((temp_r8 == 0) || (temp_sb == 0xC))) {
        temp_r6 = (u32) (arg0->unk0 << 0xB) >> 0x18;
        temp_r5_3 = arg0 + 0x154;
loop_37:
        if ((method_0809E4BC__C12Bachelorette(temp_r5_3) <= 4U) && (temp_r6 >= (u32) *(method_0809E4BC__C12Bachelorette(temp_r5_3) + &gUnk_0810410E))) {
            AddLove__12Bachelorettei(temp_r5_3, 0x9C4);
            method_0809E550__12Bachelorette(temp_r5_3);
            goto loop_37;
        }
    }
    if ((method_0809E4BC__C12Bachelorette(arg0 + 0x1E4) <= 4U) && ((temp_r8 == 0) || (temp_sb == 0x13))) {
        temp_r6_2 = (u32) ((u16) arg0->unk0 << 0x13) >> 0x19;
        temp_r5_4 = arg0 + 0x1E4;
loop_44:
        if ((method_0809E4BC__C12Bachelorette(temp_r5_4) <= 4U) && (temp_r6_2 >= (u32) *(method_0809E4BC__C12Bachelorette(temp_r5_4) + &gUnk_08104113))) {
            AddLove__12Bachelorettei(temp_r5_4, 0x9C4);
            method_0809E550__12Bachelorette(temp_r5_4);
            goto loop_44;
        }
    }
    if ((method_0809E4BC__C12Bachelorette(arg0 + 0x210) <= 4U) && ((temp_r8 == 0) || (temp_sb == 0x15))) {
        temp_r6_3 = func_0800E970(sp24);
        temp_r5_5 = arg0 + 0x210;
loop_51:
        if ((method_0809E4BC__C12Bachelorette(temp_r5_5) <= 4U) && (temp_r6_3 >= (u32) *(method_0809E4BC__C12Bachelorette(temp_r5_5) + &gUnk_08104118))) {
            AddLove__12Bachelorettei(temp_r5_5, 0x9C4);
            method_0809E550__12Bachelorette(temp_r5_5);
            goto loop_51;
        }
    }
    if ((method_0809E4BC__C12Bachelorette(arg0 + 0x264) <= 4U) && ((temp_r8 == 0) || (temp_sb == 0x19))) {
        temp_r6_4 = (u32) ((u8) arg0->unk0 << 0x1A) >> 0x1A;
        temp_r5_6 = arg0 + 0x264;
loop_58:
        if ((method_0809E4BC__C12Bachelorette(temp_r5_6) <= 4U) && (temp_r6_4 >= (u32) *(method_0809E4BC__C12Bachelorette(temp_r5_6) + &gUnk_0810411D))) {
            AddLove__12Bachelorettei(temp_r5_6, 0x9C4);
            method_0809E550__12Bachelorette(temp_r5_6);
            goto loop_58;
        }
    }
    if ((u32) ((u32) ((u16) arg0->unk2 << 0x17) >> 0x1D) > 4U) {

    } else {
        var_r6_2 = 0;
        var_r4 = 0;
        var_r5_2 = 0;
        do {
            temp_r0_5 = var_r5_2 - 0x17;
            switch (temp_r0_5) {
            case 0:
            case 3:
            case 7:
            case 10:
            case 11:
            case 12:
                break;
            default:
            case 1:
            case 2:
            case 4:
            case 5:
            case 6:
            case 8:
            case 9:
                if (func_080A06B0(arg0, var_r5_2) != 0) {
                    var_r6_2 += GetFriendship__C3Npc();
                    var_r4 += 1;
                }
                break;
            }
            var_r5_2 += 1;
        } while (var_r5_2 <= 0x2AU);
        temp_r1_5 = (u32) ((u16) arg0->unk2 << 0x17) >> 0x1D;
        if (temp_r1_5 <= 4U) {
            var_r0 = temp_r1_5 + &gUnk_08104122;
loop_90:
            if ((u32) (var_r6_2 / var_r4) >= (u32) *var_r0) {
                if ((temp_r8 == 0) || (temp_sb == 3)) {
                    AddLove__12Bachelorettei(temp_r4_14, 0x9C4);
                }
                if ((temp_r8 == 0) || (temp_sb == 0xC)) {
                    AddLove__12Bachelorettei(arg0 + 0x154, 0x9C4);
                }
                if ((temp_r8 == 0) || (temp_sb == 0x13)) {
                    AddLove__12Bachelorettei(arg0 + 0x1E4, 0x9C4);
                }
                if ((temp_r8 == 0) || (temp_sb == 0x15)) {
                    AddLove__12Bachelorettei(arg0 + 0x210, 0x9C4);
                }
                if ((temp_r8 == 0) || (temp_sb == 0x19)) {
                    AddLove__12Bachelorettei(arg0 + 0x264, 0x9C4);
                }
                if ((temp_r8 == 0) || (temp_sb == 0x1F)) {
                    AddLove__12Bachelorettei(arg0 + 0x2E4, 0x9C4);
                }
                temp_r2_5 = (u16) arg0->unk2;
                temp_r2_6 = (temp_r2_5 & 0xFFFFFE3F) | (((((u32) (temp_r2_5 << 0x17) >> 0x1D) + 1) & 7) << 6);
                arg0->unk2 = temp_r2_6;
                temp_r2_7 = (u32) (temp_r2_6 << 0x17) >> 0x1D;
                if (temp_r2_7 <= 4U) {
                    var_r0 = temp_r2_7 + &gUnk_08104122;
                    goto loop_90;
                }
            }
        }
    }
    func_080A17A0(&sp0, 0);
    sp28->unk0 = (s32) sp0.unk0;
    sp28->unk4 = (s32) sp0.unk4;
    func_080A17A0(&sp0, 1);
    sp2C->unk0 = (s32) sp0.unk0;
    sp2C->unk4 = (s32) sp0.unk4;
    func_080A17A0(&sp0, 2);
    sp30->unk0 = (s32) sp0.unk0;
    sp30->unk4 = (s32) sp0.unk4;
    func_080A1890(&sp0, 0);
    sp34->unk0 = (s32) sp0.unk0;
    sp34->unk4 = (s32) sp0.unk4;
    func_080A1890(&sp0, 1);
    sp38->unk0 = (s32) sp0.unk0;
    sp38->unk4 = (s32) sp0.unk4;
    func_080A1890(&sp0, 2);
    sp3C->unk0 = (s32) sp0.unk0;
    sp3C->unk4 = (s32) sp0.unk4;
    func_080A198C(&sp0, sp3C + 8);
    sp40->unk0 = (s32) sp0.unk0;
    sp40->unk4 = (s32) sp0.unk4;
    func_080A19EC(&sp0, sp40 + 8);
    sp44->unk0 = (s32) sp0.unk0;
    sp44->unk4 = (s32) sp0.unk4;
    return &sp0 + 8;
}
