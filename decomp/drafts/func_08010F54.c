s32 AddBathroom__9FarmHouse(void *);                  /* extern */
s32 DayUpdate__3Dog(void *);                          /* extern */
s32 DayUpdate__4FarmiRC8GameDate(void *, u32, void *); /* extern */
s32 GetDaysSinceRivalEvent__C12Bachelorette(void *); /* extern */
s32 GetRivalEventCount__C12Bachelorette(void *);    /* extern */
u32 GetUpgradeLevel__C9FarmHouse(void *);           /* extern */
s32 SetDoghouseStyle__9FarmHouseUi(void *, s32);      /* extern */
s32 SetMailboxStyle__9FarmHouseUi(void *, s32);       /* extern */
s32 SetWindowStyle__9FarmHouseUi(void *, s32);        /* extern */
s32 UpgradeHouseLevel__9FarmHouse(void *);            /* extern */
s32 Upgrade__4Barn(void *);                           /* extern */
s32 Upgrade__4Coop(void *);                           /* extern */
s32 func_0800EE60(void *);                            /* extern */
s32 func_08010F30(void *);                            /* extern */
s32 func_08011568(void *);                            /* extern */
s32 func_0803D7E4(void *, void *);                    /* extern */
s32 func_0809ADA8(void *);                            /* extern */
s32 func_0809AE6C(void *);                            /* extern */
s32 func_0809C0D4(void *);                            /* extern */
u32 func_0809EB68(void *);                          /* extern */
s32 func_0809EB70(void *);                          /* extern */
s32 func_0809EBD4(void *);                            /* extern */
s32 func_0809EC48(void *);                            /* extern */
s32 func_0809ECD8(void *);                          /* extern */
s32 func_0809ECE0(void *);                          /* extern */
s32 func_080A041C(void *);                          /* extern */
s32 func_080A0B18(void *, void *, void *, void *, void *); /* extern */
u8 *func_080A1480(void *);                          /* extern */
s32 func_080A1A4C(void *);                            /* extern */
s32 method_0800AB08__9FieldPlot6Season(u32, u32);     /* extern */
s32 method_0800C5C4__C4Coop(void *);                /* extern */
s32 method_0800C888__4Coop(void *);                   /* extern */
s32 method_0800CF00__C4Barn(void *);                /* extern */
s32 method_0800CF08__C4Barn(void *);                /* extern */
s32 method_0800D3A0__4Barn(void *);                   /* extern */
s32 method_0800D3B8__4Barn(void *);                   /* extern */
s32 rand();                                         /* extern */
extern ? gUnk_080F0566;

void func_08010F54(void *arg0) {
    u32 sp4;
    u32 sp8;
    u32 spC;
    u32 sp10;
    void *sp14;
    void *sp18;
    s32 temp_r0_2;
    s32 temp_r0_7;
    s32 temp_r2;
    s32 var_r2;
    s32 var_r5;
    s32 var_r8;
    s32 var_sb;
    u32 *var_r0;
    u32 *var_r2_2;
    u32 temp_r0_6;
    u32 temp_r1_3;
    u32 temp_r1_4;
    u32 var_r0_2;
    u8 *temp_ip;
    u8 *temp_r4_2;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r1_2;
    u8 temp_r1_5;
    u8 temp_r2_2;
    u8 temp_r2_3;
    void *temp_r0_5;
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_14;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5;
    void *var_r4;

    arg0->unk0 = (u8) (-0x11 & arg0->unk0);
    arg0->unk8 = (u32) arg0->unkC;
    temp_r0 = arg0->unk11;
    temp_r2 = (-4 & saved_reg_r9) | ((u32) (temp_r0 << 0x1E) >> 0x1E);
    var_sb = temp_r2;
    temp_r0_2 = ((u32) (temp_r0 << 0x19) >> 0x1B) + 1;
    var_r5 = temp_r0_2 + 1;
    if (temp_r0_2 == 0x1E) {
        var_sb = (temp_r2 & ~3) | ((((u32) (temp_r2 << 0x1E) >> 0x1E) + 1) & 3);
        var_r5 = 1;
    }
    var_r8 = 0;
    var_r2 = 0;
    temp_r1 = arg0 + 0x14;
    sp18 = arg0 + 0x11;
    sp14 = arg0 + 8;
    do {
        temp_r1_2 = *(var_r2 + &gUnk_080F0566);
        if ((((u32) (var_sb << 0x1E) >> 0x1E) == ((u32) (temp_r1_2 << 0x1E) >> 0x1E)) && (var_r5 == ((u32) (temp_r1_2 << 0x19) >> 0x1B))) {
            var_r8 = 1;
        }
        var_r2 += 1;
    } while (var_r2 <= 0x18);
    temp_r4 = arg0 + 0x1CD4;
    if (func_080A041C(temp_r4) == 0) {
        temp_r4_2 = func_080A1480(temp_r4);
        temp_ip = temp_r4_2;
        sp4 = 0xC8;
        temp_r0_3 = arg0->unk10;
        temp_r1_3 = ((temp_r0_3 >> 3) * 7) + ((u32) (temp_r0_3 << 0x1D) >> 0x1D);
        sp8 = temp_r1_3;
        var_r2_2 = &sp4;
        if (temp_r1_3 < 0xC8U) {
            var_r2_2 = &sp8;
        }
        spC = 0xC8;
        temp_r0_4 = temp_r4_2->unk0;
        temp_r1_4 = ((temp_r0_4 >> 3) * 7) + ((u32) (temp_r0_4 << 0x1D) >> 0x1D);
        sp10 = temp_r1_4;
        var_r0 = &spC;
        if (temp_r1_4 < 0xC8U) {
            var_r0 = &sp10;
        }
        if (*var_r2_2 == *var_r0) {
            temp_r2_2 = temp_ip->unk1;
            if (((var_sb << 0x1E) == (temp_r2_2 << 0x1E)) && (var_r5 == (((u32) (temp_r2_2 << 0x19) >> 0x1B) + 1))) {
                var_r8 = 1;
            }
        }
    }
    temp_r4_3 = arg0 + 0x1D6C;
    if ((GetRivalEventCount__C12Bachelorette(temp_r4_3) == 4) && (GetDaysSinceRivalEvent__C12Bachelorette(temp_r4_3) == 5)) {
        var_r8 = 1;
    }
    temp_r4_4 = arg0 + 0x1E28;
    if ((GetRivalEventCount__C12Bachelorette(temp_r4_4) == 4) && (GetDaysSinceRivalEvent__C12Bachelorette(temp_r4_4) == 5)) {
        var_r8 = 1;
    }
    temp_r4_5 = arg0 + 0x1EB8;
    if ((GetRivalEventCount__C12Bachelorette(temp_r4_5) == 4) && (GetDaysSinceRivalEvent__C12Bachelorette(temp_r4_5) == 5)) {
        var_r8 = 1;
    }
    temp_r4_6 = arg0 + 0x1EE4;
    if ((GetRivalEventCount__C12Bachelorette(temp_r4_6) == 4) && (GetDaysSinceRivalEvent__C12Bachelorette(temp_r4_6) == 5)) {
        var_r8 = 1;
    }
    temp_r4_7 = arg0 + 0x1F38;
    if ((GetRivalEventCount__C12Bachelorette(temp_r4_7) == 4) && (GetDaysSinceRivalEvent__C12Bachelorette(temp_r4_7) == 5)) {
        var_r8 = 1;
    }
    if (var_r8 == 1) {
        var_r0_2 = 0;
        goto block_54;
    }
    temp_r2_3 = (u8) (rand() >> 2);
    var_r0_2 = (u32) (var_sb << 0x1E) >> 0x1E;
    switch (var_r0_2) {                             /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if ((u32) temp_r2_3 > 0xB3U) {
            var_r0_2 = 1;
        }
block_54:
        arg0->unkC = var_r0_2;
        break;
    case 1:                                         /* switch 1 */
        if ((u32) temp_r2_3 <= 0xE5U) {
            var_r0_2 = 0;
        } else if ((u32) (temp_r2_3 - 0xE6) > 0xCU) {
            var_r0_2 = 3;
        }
        goto block_54;
    case 2:                                         /* switch 1 */
        if ((u32) temp_r2_3 <= 0xCDU) {
            var_r0_2 = 0;
        } else {
            var_r0_2 = 1;
        }
        goto block_54;
    case 3:                                         /* switch 1 */
        if ((u32) temp_r2_3 <= 0x7FU) {
            var_r0_2 = 0;
        } else if ((u32) (temp_r2_3 - 0x80) <= 0x65U) {
            var_r0_2 = 2;
        } else {
            var_r0_2 = 4;
        }
        goto block_54;
    }
    DayUpdate__4FarmiRC8GameDate(temp_r1, arg0->unk8, sp18);
    temp_r1_5 = arg0->unk11;
    if (((u32) (temp_r1_5 << 0x19) >> 0x1B) == 0) {
        var_r4 = arg0 + 0x9DC;
        temp_r0_5 = arg0 + 0x1AA8;
        if ((u32) var_r4 < (u32) temp_r0_5) {
            do {
                method_0800AB08__9FieldPlot6Season((u32) var_r4, (u32) (temp_r1_5 << 0x1E) >> 0x1E);
                var_r4 += 4;
            } while ((u32) var_r4 < (u32) temp_r0_5);
        }
    }
    temp_r5 = arg0 + 0x1BD8;
    func_0800EE60(temp_r5);
    DayUpdate__3Dog(arg0 + 0x1C70);
    func_08011568(arg0 + 0x2C74);
    temp_r4_8 = arg0 + 0x1CD4;
    func_080A0B18(temp_r4_8, sp14, arg0 + 0x214C, temp_r5, temp_r1);
    func_0803D7E4(temp_r4_8, arg0);
    temp_r4_9 = arg0 + 0x1F64;
    if ((func_0809EB70(temp_r4_9) << 0x18) == 0) {
        func_0809EC48(temp_r4_9);
    } else {
        temp_r0_6 = func_0809EB68(temp_r4_9);
        switch (temp_r0_6) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            temp_r4_10 = arg0 + 0x1F4;
            if (GetUpgradeLevel__C9FarmHouse(temp_r4_10) <= 1U) {
                UpgradeHouseLevel__9FarmHouse(temp_r4_10);
            } else {
                AddBathroom__9FarmHouse(temp_r4_10);
            }
            break;
        case 2:                                     /* switch 2 */
            Upgrade__4Coop(arg0 + 0x410);
            break;
        case 3:                                     /* switch 2 */
            Upgrade__4Barn(arg0 + 0x5F0);
            break;
        case 4:                                     /* switch 2 */
            func_08010F30(arg0);
            break;
        case 5:                                     /* switch 2 */
            SetWindowStyle__9FarmHouseUi(arg0 + 0x1F4, 0);
            break;
        case 6:                                     /* switch 2 */
            SetWindowStyle__9FarmHouseUi(arg0 + 0x1F4, 1);
            break;
        case 7:                                     /* switch 2 */
            SetWindowStyle__9FarmHouseUi(arg0 + 0x1F4, 2);
            break;
        case 8:                                     /* switch 2 */
            SetMailboxStyle__9FarmHouseUi(arg0 + 0x1F4, 0);
            break;
        case 9:                                     /* switch 2 */
            SetMailboxStyle__9FarmHouseUi(arg0 + 0x1F4, 1);
            break;
        case 10:                                    /* switch 2 */
            SetMailboxStyle__9FarmHouseUi(arg0 + 0x1F4, 2);
            break;
        case 11:                                    /* switch 2 */
            SetDoghouseStyle__9FarmHouseUi(arg0 + 0x1F4, 0);
            break;
        case 12:                                    /* switch 2 */
            SetDoghouseStyle__9FarmHouseUi(arg0 + 0x1F4, 1);
            break;
        case 13:                                    /* switch 2 */
            SetDoghouseStyle__9FarmHouseUi(arg0 + 0x1F4, 2);
            break;
        }
        func_0809EBD4(arg0 + 0x1F64);
    }
    temp_r4_11 = arg0 + 0x1DAC;
    if ((func_0809ECE0(temp_r4_11) << 0x18) != 0) {
        temp_r0_7 = func_0809ECD8(temp_r4_11);
        switch (temp_r0_7) {                        /* switch 3; irregular */
        case 35:                                    /* switch 3 */
            temp_r4_12 = arg0 + 0x410;
            if ((method_0800C5C4__C4Coop(temp_r4_12) << 0x18) == 0) {
                method_0800C888__4Coop(temp_r4_12);
            }
            break;
        case 36:                                    /* switch 3 */
            temp_r4_13 = arg0 + 0x5F0;
            if ((method_0800CF00__C4Barn(temp_r4_13) << 0x18) == 0) {
                method_0800D3A0__4Barn(temp_r4_13);
            }
            break;
        case 37:                                    /* switch 3 */
            temp_r4_14 = arg0 + 0x5F0;
            if ((method_0800CF08__C4Barn(temp_r4_14) << 0x18) == 0) {
                method_0800D3B8__4Barn(temp_r4_14);
            }
            break;
        }
    }
    if (((u32) (arg0->unk11 << 0x19) >> 0x1B) == 0) {
        func_0809AE6C(arg0 + 0x1AA8);
    } else {
        func_0809ADA8(arg0 + 0x1AA8);
    }
    func_080A1A4C(arg0 + 0x34C8);
    func_0809C0D4(arg0 + 0x34DC);
    arg0->unk3 = (u8) (0x7F & arg0->unk3);
    arg0->unk4 = (u8) (-2 & arg0->unk4);
}
