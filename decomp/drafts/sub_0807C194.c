s32 AddAmountOfTool__8RucksackUiUi(void *, s32, u32); /* extern */
s32 AddAmountOf__9ToolChestUiUi(void *, s32);         /* extern */
s32 AddAmount__9ToolStackUi(void *, u32);             /* extern */
s32 AddStoredBushels__4CoopUi(void *, u32);           /* extern */
s32 CountChickens__C4Coop(void *);                  /* extern */
s32 GetAmountOfTool__C8RucksackUi(void *, s32);     /* extern */
s32 GetAmountOf__C9ToolChestUi(void *, s32);        /* extern */
s32 GetAmount__C9ToolStack(void *);                 /* extern */
s32 GetAvailableSpaceForTool__C8RucksackUi(void *, s32); /* extern */
s32 GetAvailableSpaceFor__C9ToolChestUi(void *, s32); /* extern */
u32 GetCapacity__C4Coop(void *);                    /* extern */
s32 GetChicken__4CoopUi(void *, u32);               /* extern */
s32 GetGrowthStage__C7Chicken();                    /* extern */
s32 GetId__C4Tool();                                /* extern */
u32 GetIncubatorCapacity__C4Coop(void *);           /* extern */
s32 *GetName__C4Tool(u8 *);                           /* extern */
s32 *GetName__C7Article(s32 *);                         /* extern */
u32 GetStoredBushelCount__C4Coop(void *);           /* extern */
s8 GetTool__C9ToolStack(void *);                    /* extern */
s32 GetUnkEnt__C4Coop(void *);                      /* extern */
s32 InsertChicken__4CoopRC7Chicken(void *, s32 *);    /* extern */
s32 IsEmpty__C9ToolStack(void *);                   /* extern */
s32 IsIncubatorOccupied__C4CoopUi(void *, u32);     /* extern */
s32 Remove__4CoopUi(void *, s32);                     /* extern */
s32 __4ToolUi(u8 *, s32);                             /* extern */
s32 __7ArticleUi(s32 *, s32);                           /* extern */
s32 __7ChickenPCcRC13ActorLocationUiUi(s32 *, s32 *, s32 *, s32); /* extern */
s32 __9ToolStackG4ToolUi(s32 *, u8, u32);               /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_0804EC84(u32, s32 *, s32);                     /* extern */
u8 func_08050DF0(void *);                           /* extern */
s32 func_08050E30(void *, void *, s32 *, s32 *);          /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_08050E5C(void *);                            /* extern */
s32 func_08075DB8(s32, s16);                          /* extern */
s32 func_08075DD4(s32);                               /* extern */
s32 func_08075E24(s32, s16);                          /* extern */
s32 func_0807B188(void *);                          /* extern */
s32 func_0807B3B0(void *);                          /* extern */
s32 func_0807B920(void *, s32);                       /* extern */
s32 func_0807BE74(void *, u32);                     /* extern */
s32 func_0809ABD8(void *, s32);                       /* extern */
s32 func_0809ACC0(void *, u32);                       /* extern */
s32 func_080C8550(void *);                            /* extern */
s32 func_080C9020(void *, u32);                       /* extern */
s32 func_080C96C4(void *, s32);                       /* extern */
s32 func_080CA8B4(void *, u32, s32, s32);             /* extern */
s32 func_080CA98C(void *);                            /* extern */
s32 func_080CAAF4(void *);                            /* extern */
s32 func_080CABA0(void *, s32 *);                       /* extern */
s32 func_080CABEC(void *, void *);                    /* extern */
s32 memcpy(s32 *, s32 *, u32);                            /* extern */
u32 strlen(s32 *);                                    /* extern */
extern s32 gUnk_080FD964;
extern s32 gUnk_080FD988;
extern s32 gUnk_080FDA78;
extern s32 gUnk_080FDA7C;
extern s32 gUnk_080FDAA8;
extern s32 gUnk_080FDAD4;
extern s32 gUnk_080FDADC;
extern s32 gUnk_080FDB0C;
extern s32 gUnk_080FDB38;
extern s32 gUnk_080FDB6C;
extern s32 gUnk_080FDB9C;
extern s32 gUnk_080FDBC4;
extern s32 gUnk_080FDBE8;
extern s32 gUnk_080FDBF8;
extern s32 gUnk_080FDBFC;
extern s32 gUnk_080FDC00;
extern s32 gUnk_080FDC58;
extern s32 gUnk_080FDCBC;
extern s32 gUnk_080FDD04;
extern s32 gUnk_080FDD1C;
extern s32 gUnk_080FDD68;
extern s32 gUnk_080FDD84;
extern s32 *gUnk_08117814;
extern s32 *gUnk_08117828;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[105];
    s32 unk7D;
    s32 unk7E;
    s32 unk81;
    u8 _pad85[1575];
    s32 unk6AC;
    u8 _pad6B0[5112];
    struct GenObj *unk1AA8;
} GenObj;
s32 sub_0807C194(GenObj *arg4, GenObj *arg7, GenObj *arg8, u32 argA, ? argD, ? argF, ? arg10, ? arg14, ? arg23, u8 arg24, s32 arg25, s32 arg26, s32 arg28, s32 arg29) {
    s32 *temp_r1_5;
    s32 *temp_r1_6;
    s32 *temp_r1_7;
    s32 *temp_r1_8;
    s32 *temp_r2;
    s32 *temp_r3_3;
    s32 *temp_r3_6;
    s32 *temp_r4_3;
    s32 *temp_r4_5;
    s32 *temp_r4_7;
    s32 *temp_r5_10;
    s32 *temp_r5_2;
    s32 *temp_r5_5;
    s32 *temp_r5_8;
    s32 *temp_r6_12;
    s32 *temp_r6_16;
    s32 *temp_r6_19;
    s32 *temp_r6_4;
    s32 *temp_r6_8;
    s32 *temp_r8;
    s32 *temp_r8_3;
    s32 *temp_sb;
    s32 *temp_sb_2;
    s32 *temp_sb_3;
    s32 *temp_sb_4;
    s32 *var_r1_3;
    s32 *temp_r0_8;
    s32 *var_r0;
    s32 temp_r0_17;
    s32 temp_r1;
    s32 temp_r1_4;
    s32 temp_r1_9;
    s32 temp_r4;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r5_11;
    s32 temp_r5_4;
    s32 temp_r5_7;
    s32 temp_r6;
    s32 temp_r6_10;
    s32 temp_r6_20;
    s32 temp_r6_2;
    s32 temp_r6_9;
    GenObj *var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r4_5;
    s32 var_r5;
    s32 var_r5_6;
    s32 var_r8;
    s32 var_r8_2;
    s8 var_r2_4;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_9;
    u32 temp_r3;
    u32 temp_r4_9;
    u32 temp_r5_3;
    u32 temp_r5_6;
    u32 temp_r5_9;
    u32 temp_r6_11;
    u32 temp_r6_13;
    u32 temp_r6_14;
    u32 temp_r6_15;
    u32 temp_r6_17;
    u32 temp_r6_18;
    u32 temp_r6_3;
    u32 temp_r6_5;
    u32 temp_r6_6;
    u32 temp_r6_7;
    u32 temp_r8_2;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_6;
    u32 var_r5_10;
    u32 var_r5_11;
    u32 var_r5_12;
    u32 var_r5_13;
    u32 var_r5_14;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r5_5;
    u32 var_r5_7;
    u32 var_r5_8;
    u32 var_r5_9;
    u32 var_r8_3;
    u8 *temp_r5;
    u8 temp_r0_19;
    u8 temp_r4_6;
    u8 temp_ret;
    GenObj *temp_r0_18;
    void *temp_r0_20;
    GenObj *temp_r0_21;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r3_2;
    GenObj *temp_r3_4;
    GenObj *temp_r3_5;
    void *temp_r4_10;
    void *temp_r4_13;
    void *temp_r4_8;

    func_080087C8(saved_reg_r7);
    func_080088B8(saved_reg_r7);
    var_r1 = arg7->unk0;
    if ((s32) ((0 - var_r1) | var_r1) >= 0) {
        if (arg28 != 0) {
            ((void (*)(void *,...))(arg7->unk8->unkC))(arg7, 3);
            return -1;
        }
        var_r1 = 0x6A4;
        temp_r0 = saved_reg_r7->unk6A4;
        if (temp_r0 <= 0xAU) {
            var_r1 = (s32) &0;
            switch (*((temp_r0 * 4) + (s32) &0)) { /* switch 1; unable to parse jump table */
            case 0:                                 /* switch 1 */
                temp_r1 = saved_reg_r7->unk10;
                if (saved_reg_r7->unk14 != temp_r1) {
                    func_0807B920(saved_reg_r7, ((temp_r1 * 4) + saved_reg_r7)->unk2A8);
                }
                saved_reg_r7->unk14 = (s32) saved_reg_r7->unk10;
                func_080C9020(saved_reg_r7, saved_reg_r7->unk2A4);
                if (saved_reg_r7->unk6A1 == 0) {
                    var_r1 = 2;
                    if (!(func_080088CC(saved_reg_r7) & 2)) {

                    } else {
                        if (saved_reg_r7->unk6A8 != 0) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDB9C);
                            func_08050E50(saved_reg_r7 + 0x348, 0xE);
                        } else {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDBC4);
                            func_08050E50(saved_reg_r7 + 0x348, 0x11);
                        }
                        var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                        *var_r1 = 9;
                    }
                } else {
                    temp_r3 = *(saved_reg_r7 + 0x2A4 + ((saved_reg_r7->unk10 * 4) + 4));
                    temp_r1_2 = (temp_r3 * 0x14) + &gUnk_080FD988;
                    temp_r1_3 = (GenObj *)((u8 *)temp_r1_2 + 0xC);
                    arg8.unk0 = temp_r1_2->unk0;
                    arg8.unk4 = (s32) temp_r1_2->unk4;
                    arg8.unk8 = (u32) temp_r1_2->unk8;
                    var_r1 = (GenObj *)((u8 *)temp_r1_3 + 8);
                    arg8.unkC = (s32) temp_r1_2->unkC;
                    (&(GenObj *)((u8 *)arg8 + 0xC))->unk4 = (s32) temp_r1_3->unk4;
                    switch (temp_r3) {              /* switch 2; irregular */
                    case 1:                         /* switch 2 */
                        temp_r3_2 = saved_reg_r7->unk8;
                        var_r2 = 0;
                        if ((u32) temp_r3_2->unk1AA8 < (u32) arg8.unk8) {
                            var_r2 = 1;
                        }
                        if (var_r2 != 0) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDA7C);
                            func_08050E50(saved_reg_r7 + 0x348, 0xE);
                            var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                            goto block_188;
                        }
                        var_r5 = 0;
                        temp_r6 = GetAvailableSpaceForTool__C8RucksackUi((GenObj *)((u8 *)temp_r3_2 + 0x1C38), 0x4A);
                        if ((IsEmpty__C9ToolStack(saved_reg_r7->unk8 + 0x1C34) << 0x18) != 0) {
                            var_r5 = 0x63;
                        } else {
                            arg4.unk7D = GetTool__C9ToolStack(saved_reg_r7->unk8 + 0x1C34);
                            if ((GetId__C4Tool() == 0x4A) && (GetAmount__C9ToolStack(saved_reg_r7->unk8 + 0x1C34) != 0x63)) {
                                var_r5 = 0x63 - GetAmount__C9ToolStack(saved_reg_r7->unk8 + 0x1C34);
                            }
                        }
                        temp_r1_4 = temp_r6 + var_r5 + GetAvailableSpaceFor__C9ToolChestUi(saved_reg_r7->unk8 + 0x380, 0x4A);
                        arg29 = temp_r1_4;
                        if (temp_r1_4 == 0) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDADC);
                            func_08050E50(saved_reg_r7 + 0x348, 0xE);
                            var_r1 = (s32) (saved_reg_r7 + 0x6A4);
block_188:
                            *var_r1 = 6;
                        } else {
                            temp_r6_2 = GetAmountOfTool__C8RucksackUi(saved_reg_r7->unk8 + 0x1C38, arg8);
                            var_r8 = 0;
                            temp_r4_2 = GetAmountOf__C9ToolChestUi(saved_reg_r7->unk8 + 0x380, arg8);
                            if ((IsEmpty__C9ToolStack(saved_reg_r7->unk8 + 0x1C34) << 0x18) == 0) {
                                arg4.unk7E = GetTool__C9ToolStack(saved_reg_r7->unk8 + 0x1C34);
                                var_r2_2 = 0;
                                if (GetId__C4Tool() == arg8) {
                                    var_r2_2 = 1;
                                }
                                if (var_r2_2 != 0) {
                                    var_r8 = GetAmount__C9ToolStack(saved_reg_r7->unk8 + 0x1C34);
                                }
                            }
                            func_0804EC84(temp_r6_2 + var_r8 + temp_r4_2, &argD, 7);
                            temp_r5 = &(GenObj *)((u8 *)arg4 + 0x7F);
                            __4ToolUi(temp_r5, arg8);
                            temp_r4_3 = saved_reg_r7 + 0x22B4;
                            saved_reg_r7->unk22B4 = 0;
                            temp_sb = GetName__C4Tool(temp_r5);
                            temp_r5_2 = temp_sb;
                            temp_r0_2 = strlen(temp_r4_3);
                            temp_r1_5 = temp_r4_3 + temp_r0_2;
                            temp_r6_3 = 0x63 - temp_r0_2;
                            if (temp_r6_3 != 0) {
                                var_r5_2 = strlen(temp_r5_2);
                                if (var_r5_2 > temp_r6_3) {
                                    var_r5_2 = temp_r6_3;
                                }
                                memcpy(temp_r1_5, temp_sb, var_r5_2);
                                *((u8 *)temp_r1_5 + var_r5_2) = 0;
                            }
                            temp_r0_3 = strlen(temp_r4_3);
                            temp_r6_4 = temp_r4_3 + temp_r0_3;
                            temp_r6_5 = 0x63 - temp_r0_3;
                            if (temp_r6_5 != 0) {
                                var_r5_3 = strlen(&gUnk_080FDAD4);
                                if (var_r5_3 > temp_r6_5) {
                                    var_r5_3 = temp_r6_5;
                                }
                                memcpy(temp_r6_4, &gUnk_080FDAD4, var_r5_3);
                                *((u8 *)temp_r6_4 + var_r5_3) = 0;
                            }
                            temp_sb_2 = gUnk_08117828;
                            temp_r0_4 = strlen(temp_r4_3);
                            temp_r1_6 = temp_r4_3 + temp_r0_4;
                            temp_r6_6 = 0x63 - temp_r0_4;
                            if (temp_r6_6 != 0) {
                                var_r5_4 = strlen(temp_sb_2);
                                if (var_r5_4 > temp_r6_6) {
                                    var_r5_4 = temp_r6_6;
                                }
                                memcpy(temp_r1_6, temp_sb_2, var_r5_4);
                                *((u8 *)temp_r1_6 + var_r5_4) = 0;
                            }
                            temp_r0_5 = strlen(temp_r4_3);
                            temp_r3_3 = temp_r4_3 + temp_r0_5;
                            temp_r6_7 = 0x63 - temp_r0_5;
                            if (temp_r6_7 != 0) {
                                var_r5_5 = strlen(&argD);
                                if (var_r5_5 > temp_r6_7) {
                                    var_r5_5 = temp_r6_7;
                                }
                                memcpy(temp_r3_3, &argD, var_r5_5);
                                *((u8 *)temp_r3_3 + var_r5_5) = 0;
                            }
                            temp_r8 = gUnk_08117814;
                            temp_r0_6 = strlen(temp_r4_3);
                            temp_r6_8 = temp_r4_3 + temp_r0_6;
                            temp_r5_3 = 0x63 - temp_r0_6;
                            if (temp_r5_3 != 0) {
                                var_r4 = strlen(temp_r8);
                                if (var_r4 > temp_r5_3) {
                                    var_r4 = temp_r5_3;
                                }
                                memcpy(temp_r6_8, temp_r8, var_r4);
                                *((u8 *)temp_r6_8 + var_r4) = 0;
                            }
                            func_080CABEC(saved_reg_r7, saved_reg_r7 + 0x22B4);
                            func_080CA8B4(saved_reg_r7 + 0x684, argA, arg29, 5);
block_81:
                            var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                            *var_r1 = 2;
                        }
                        break;
                    case 2:                         /* switch 2 */
                        temp_r3_4 = saved_reg_r7->unk8;
                        var_r2_3 = 0;
                        if ((u32) temp_r3_4->unk1AA8 < (u32) arg8.unk8) {
                            var_r2_3 = 1;
                        }
                        if (var_r2_3 != 0) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDA7C);
                            func_08050E50(saved_reg_r7 + 0x348, 0xE);
                            var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                            goto block_188;
                        }
                        temp_r8_2 = GetCapacity__C4Coop((GenObj *)((u8 *)temp_r3_4 + 0x410));
                        temp_r6_9 = CountChickens__C4Coop(saved_reg_r7->unk8 + 0x410);
                        var_r5_6 = 0;
                        var_r4_2 = 0;
loop_90:
                        if (var_r4_2 < GetIncubatorCapacity__C4Coop(saved_reg_r7->unk8 + 0x410)) {
                            if ((IsIncubatorOccupied__C4CoopUi(saved_reg_r7->unk8 + 0x410, var_r4_2) << 0x18) != 0) {
                                var_r5_6 += 1;
                            }
                            var_r4_2 += 1;
                            goto loop_90;
                        }
                        if ((temp_r8_2 - temp_r6_9) == var_r5_6) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDB0C);
block_187:
                            var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                            goto block_188;
                        }
                        func_080CABA0(saved_reg_r7, &gUnk_080FDB38);
                        func_08050E50(saved_reg_r7 + 0x348, 0xF);
                        var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                        *var_r1 = 3;
                        break;
                    case 3:                         /* switch 2 */
                        temp_r6_10 = GetUnkEnt__C4Coop(saved_reg_r7->unk8 + 0x410);
                        var_r1_2 = 7;
                        var_r0 = saved_reg_r7 + 0x6E4;
                        do {
                            *var_r0 = -1;
                            var_r0 -= 8;
                            var_r1_2 -= 1;
                        } while (var_r1_2 >= 0);
                        var_r5_7 = 0;
loop_98:
                        if ((var_r5_7 < GetCapacity__C4Coop(saved_reg_r7->unk8 + 0x410)) && (((temp_r6_10 != -1) && (var_r5_7 == temp_r6_10)) || (GetChicken__4CoopUi(saved_reg_r7->unk8 + 0x410, var_r5_7) == 0) || (GetGrowthStage__C7Chicken() != 1))) {
                            var_r5_7 += 1;
                            goto loop_98;
                        }
                        if (var_r5_7 == GetCapacity__C4Coop(saved_reg_r7->unk8 + 0x410)) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDB6C);
                            goto block_187;
                        }
                        saved_reg_r7->unk6EC = (u32) (saved_reg_r7->unk6EC - ((s32) ((saved_reg_r7 + 0x6EC + ((saved_reg_r7->unk6EC * 4) + 4)) - (saved_reg_r7 + 0x6F0)) >> 2));
                        var_r8_2 = 0;
                        var_r5_8 = 0;
loop_116:
                        if (var_r5_8 < GetCapacity__C4Coop(saved_reg_r7->unk8 + 0x410)) {
                            if (((temp_r6_10 == -1) || (var_r5_8 != temp_r6_10)) && (GetChicken__4CoopUi(saved_reg_r7->unk8 + 0x410, var_r5_8) != 0) && (GetGrowthStage__C7Chicken() == 1)) {
                                temp_r0_7 = saved_reg_r7->unk6EC;
                                if (temp_r0_7 <= 7U) {
                                    temp_r0_8 = saved_reg_r7 + 0x6EC + ((temp_r0_7 * 4) + 4);
                                    if (temp_r0_8 != 0) {
                                        *temp_r0_8 = 4;
                                    }
                                    saved_reg_r7->unk6EC = (u32) (saved_reg_r7->unk6EC + 1);
                                }
                                temp_r4_4 = var_r8_2 * 8;
                                *((u8 *)saved_reg_r7 + 0x6AC + temp_r4_4) = var_r5_8;
                                *((u8 *)saved_reg_r7 + 0x6B0 + temp_r4_4) = func_0807BE74(saved_reg_r7, var_r5_8);
                                var_r8_2 += 1;
                            }
                            var_r5_8 += 1;
                            goto loop_116;
                        }
                        func_08075DD4(saved_reg_r7->unk1C);
                        temp_r5_4 = func_0807B3B0(saved_reg_r7);
                        saved_reg_r7->unkC = 0;
                        saved_reg_r7->unk648 = 0x28;
                        func_08075DB8(saved_reg_r7->unk1C, saved_reg_r7->unkC);
                        func_08075E24(saved_reg_r7->unk1C, (s16) ((temp_r5_4 + 8) * 8));
                        saved_reg_r7->unk10 = 0;
                        saved_reg_r7->unk14 = -1;
                        var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                        *var_r1 = 1;
                        break;
                    default:                        /* switch 2 */
                        temp_r3_5 = saved_reg_r7->unk8;
                        var_r2_4 = 0;
                        if ((u32) temp_r3_5->unk1AA8 < (u32) arg8.unk8) {
                            var_r2_4 = 1;
                        }
                        if (var_r2_4 != 0) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDA7C);
                            func_08050E50(saved_reg_r7 + 0x348, 0xE);
                            var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                            goto block_188;
                        }
                        if (GetStoredBushelCount__C4Coop((GenObj *)((u8 *)temp_r3_5 + 0x410)) > 0x3E6U) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FDAA8);
                            var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                            goto block_188;
                        }
                        arg29 = 0x3E7 - GetStoredBushelCount__C4Coop(saved_reg_r7->unk8 + 0x410);
                        func_080CA8B4(saved_reg_r7 + 0x684, arg8.unk8, arg29, 5);
                        func_0804EC84(GetStoredBushelCount__C4Coop(saved_reg_r7->unk8 + 0x410), &arg10, 7);
                        __7ArticleUi(&arg23, arg8);
                        temp_r4_5 = saved_reg_r7 + 0x22B4;
                        saved_reg_r7->unk22B4 = var_r2_4;
                        temp_sb_3 = GetName__C7Article(&arg23);
                        temp_r5_5 = temp_sb_3;
                        temp_r0_9 = strlen(temp_r4_5);
                        temp_r1_7 = temp_r4_5 + temp_r0_9;
                        temp_r6_11 = 0x63 - temp_r0_9;
                        if (temp_r6_11 != 0) {
                            var_r5_9 = strlen(temp_r5_5);
                            if (var_r5_9 > temp_r6_11) {
                                var_r5_9 = temp_r6_11;
                            }
                            memcpy(temp_r1_7, temp_sb_3, var_r5_9);
                            *((u8 *)temp_r1_7 + var_r5_9) = var_r2_4;
                        }
                        temp_r0_10 = strlen(temp_r4_5);
                        temp_r6_12 = temp_r4_5 + temp_r0_10;
                        temp_r6_13 = 0x63 - temp_r0_10;
                        if (temp_r6_13 != 0) {
                            var_r5_10 = strlen(&gUnk_080FDAD4);
                            if (var_r5_10 > temp_r6_13) {
                                var_r5_10 = temp_r6_13;
                            }
                            memcpy(temp_r6_12, &gUnk_080FDAD4, var_r5_10);
                            *((u8 *)temp_r6_12 + var_r5_10) = 0;
                        }
                        temp_sb_4 = gUnk_08117828;
                        temp_r0_11 = strlen(temp_r4_5);
                        temp_r1_8 = temp_r4_5 + temp_r0_11;
                        temp_r6_14 = 0x63 - temp_r0_11;
                        if (temp_r6_14 != 0) {
                            var_r5_11 = strlen(temp_sb_4);
                            if (var_r5_11 > temp_r6_14) {
                                var_r5_11 = temp_r6_14;
                            }
                            memcpy(temp_r1_8, temp_sb_4, var_r5_11);
                            *((u8 *)temp_r1_8 + var_r5_11) = 0;
                        }
                        temp_r0_12 = strlen(temp_r4_5);
                        temp_r3_6 = temp_r4_5 + temp_r0_12;
                        temp_r6_15 = 0x63 - temp_r0_12;
                        if (temp_r6_15 != 0) {
                            var_r5_12 = strlen(&arg10);
                            if (var_r5_12 > temp_r6_15) {
                                var_r5_12 = temp_r6_15;
                            }
                            memcpy(temp_r3_6, &arg10, var_r5_12);
                            *((u8 *)temp_r3_6 + var_r5_12) = 0;
                        }
                        temp_r8_3 = gUnk_08117814;
                        temp_r0_13 = strlen(temp_r4_5);
                        temp_r6_16 = temp_r4_5 + temp_r0_13;
                        temp_r5_6 = 0x63 - temp_r0_13;
                        if (temp_r5_6 != 0) {
                            var_r4_3 = strlen(temp_r8_3);
                            if (var_r4_3 > temp_r5_6) {
                                var_r4_3 = temp_r5_6;
                            }
                            memcpy(temp_r6_16, temp_r8_3, var_r4_3);
                            *((u8 *)temp_r6_16 + var_r4_3) = 0;
                        }
                        func_080CABEC(saved_reg_r7, saved_reg_r7 + 0x22B4);
                        goto block_81;
                    }
                }
                goto block_202;
            case 1:                                 /* switch 1 */
                temp_r1_9 = saved_reg_r7->unk10;
                if (saved_reg_r7->unk14 != temp_r1_9) {
                    func_0807B920(saved_reg_r7, ((temp_r1_9 * 4) + saved_reg_r7)->unk6F0);
                }
                saved_reg_r7->unk14 = (s32) saved_reg_r7->unk10;
                var_r1 = SECOND_REG(func_080C9020(saved_reg_r7, saved_reg_r7->unk6EC));
                temp_r4_6 = saved_reg_r7->unk6A1;
                if (temp_r4_6 == 0) {
                    if (saved_reg_r7->unk6A3 == 0) {

                    } else {
                        func_08075DD4(saved_reg_r7->unk1C);
                        temp_r5_7 = func_0807B188(saved_reg_r7);
                        saved_reg_r7->unkC = (s16) temp_r4_6;
                        saved_reg_r7->unk648 = 0x28;
                        func_08075DB8(saved_reg_r7->unk1C, saved_reg_r7->unkC);
                        var_r1 = SECOND_REG(func_08075E24(saved_reg_r7->unk1C, (s16) ((temp_r5_7 + 8) * 8)));
                        saved_reg_r7->unk6A4 = (u32) temp_r4_6;
                        saved_reg_r7->unk10 = (s32) temp_r4_6;
block_196:
                        saved_reg_r7->unk14 = -1;
                    }
                } else {
                    temp_r4_7 = saved_reg_r7 + 0x2234;
                    saved_reg_r7->unk2234 = 0;
                    func_0804EC84(*(saved_reg_r7 + 0x6B0 + (saved_reg_r7->unk10 * 8)), &argD, 0);
                    temp_r0_14 = strlen(temp_r4_7);
                    temp_r5_8 = temp_r4_7 + temp_r0_14;
                    temp_r6_17 = 0x7F - temp_r0_14;
                    if (temp_r6_17 != 0) {
                        var_r5_13 = strlen(&gUnk_080FDBE8);
                        if (var_r5_13 > temp_r6_17) {
                            var_r5_13 = temp_r6_17;
                        }
                        memcpy(temp_r5_8, &gUnk_080FDBE8, var_r5_13);
                        *((u8 *)temp_r5_8 + var_r5_13) = 0;
                    }
                    temp_r0_15 = strlen(temp_r4_7);
                    temp_r2 = temp_r4_7 + temp_r0_15;
                    temp_r6_18 = 0x7F - temp_r0_15;
                    if (temp_r6_18 != 0) {
                        var_r5_14 = strlen(&argD);
                        if (var_r5_14 > temp_r6_18) {
                            var_r5_14 = temp_r6_18;
                        }
                        memcpy(temp_r2, &argD, var_r5_14);
                        *((u8 *)temp_r2 + var_r5_14) = 0;
                    }
                    temp_r0_16 = strlen(temp_r4_7);
                    temp_r6_19 = temp_r4_7 + temp_r0_16;
                    temp_r5_9 = 0x7F - temp_r0_16;
                    if (temp_r5_9 != 0) {
                        var_r4_4 = strlen(&gUnk_080FDA78);
                        if (var_r4_4 > temp_r5_9) {
                            var_r4_4 = temp_r5_9;
                        }
                        memcpy(temp_r6_19, &gUnk_080FDA78, var_r4_4);
                        *((u8 *)temp_r6_19 + var_r4_4) = 0;
                    }
                    temp_r4_8 = saved_reg_r7 + 0x348;
                    arg4 = 0;
                    arg5 = 0;
                    arg6 = 0;
                    func_08050E30(temp_r4_8, saved_reg_r7 + 0x2234, &gUnk_080FDBF8, &gUnk_080FDBFC);
                    func_08050E50(temp_r4_8, 0xF);
                    var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                    *var_r1 = 8;
                }
                goto block_202;
            case 2:                                 /* switch 1 */
                temp_r4_9 = func_080088CC(saved_reg_r7) & 1;
                if (temp_r4_9 == 0) {
                    if (func_080088CC(saved_reg_r7) & 2) {
                        var_r1 = SECOND_REG(func_080CAAF4(saved_reg_r7 + 0x684));
                        saved_reg_r7->unk6A4 = temp_r4_9;
                        goto block_196;
                    }
                    var_r1 = (s32) (saved_reg_r7 + 0x684);
                    if (var_r1->unk8 == 0) {

                    } else {
                        var_r1 = SECOND_REG(func_080CA98C((void *) var_r1));
                    }
                } else {
                    var_r8_3 = (saved_reg_r7 + 0x684)->unk14;
                    func_080CAAF4();
                    temp_r4_10 = saved_reg_r7 + 0x2A4;
                    temp_r1_10 = (*(temp_r4_10 + ((saved_reg_r7->unk10 * 4) + 4)) * 0x14) + &gUnk_080FD988;
                    arg8.unk0 = temp_r1_10->unk0;
                    arg8.unk4 = (s32) temp_r1_10->unk4;
                    arg8.unk8 = (u32) temp_r1_10->unk8;
                    arg8.unkC = (s32) temp_r1_10->unkC;
                    (&(GenObj *)((u8 *)arg8 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r1_10 + 0xC))->unk4;
                    func_0809ACC0(saved_reg_r7->unk8 + 0x1AA8, arg8.unk8 * var_r8_3);
                    func_080C8550(saved_reg_r7);
                    temp_r4_11 = *(temp_r4_10 + ((saved_reg_r7->unk10 * 4) + 4));
                    switch (temp_r4_11) {           /* switch 3; irregular */
                    case 0:                         /* switch 3 */
                        AddStoredBushels__4CoopUi(saved_reg_r7->unk8 + 0x410, var_r8_3);
                        func_080CABA0(saved_reg_r7, &gUnk_080FDC00);
                        func_08050E50(saved_reg_r7 + 0x348, 0xE);
                        break;
                    case 1:                         /* switch 3 */
                        var_r4_5 = 0;
                        if ((IsEmpty__C9ToolStack(saved_reg_r7->unk8 + 0x1C34) << 0x18) != 0) {
                            temp_r5_10 = saved_reg_r7->unk8 + 0x1C34;
                            __4ToolUi(&arg24, 0x4A);
                            __9ToolStackG4ToolUi(&argD, arg24, var_r8_3);
                            memcpy(temp_r5_10, &argD, 2U);
                            var_r8_3 = 0;
                            goto block_157;
                        }
                        arg4.unk81 = GetTool__C9ToolStack(saved_reg_r7->unk8 + 0x1C34);
                        if ((GetId__C4Tool() == 0x4A) && (GetAmount__C9ToolStack(saved_reg_r7->unk8 + 0x1C34) != 0x63)) {
                            var_r4_6 = 0x63 - GetAmount__C9ToolStack(saved_reg_r7->unk8 + 0x1C34);
                            if (var_r8_3 < var_r4_6) {
                                var_r4_6 = var_r8_3;
                            }
                            AddAmount__9ToolStackUi(saved_reg_r7->unk8 + 0x1C34, var_r4_6);
                            var_r8_3 -= var_r4_6;
block_157:
                            var_r4_5 = 1;
                        }
                        if (var_r8_3 != 0) {
                            temp_r0_17 = AddAmountOfTool__8RucksackUiUi(saved_reg_r7->unk8 + 0x1C38, 0x4A, var_r8_3);
                            if (var_r8_3 != temp_r0_17) {
                                var_r4_5 = 1;
                            }
                            if (temp_r0_17 != 0) {
                                AddAmountOf__9ToolChestUiUi(saved_reg_r7->unk8 + 0x380, 0x4A);
                                if (var_r4_5 != 0) {
                                    var_r1_3 = &gUnk_080FDC58;
                                } else {
                                    var_r1_3 = &gUnk_080FDCBC;
                                }
                                func_080CABA0(saved_reg_r7, var_r1_3);
                            } else {
                                goto block_166;
                            }
                        } else {
block_166:
                            func_080CABA0(saved_reg_r7, &gUnk_080FDD04);
                        }
                        func_08050E50(saved_reg_r7 + 0x348, 0xF);
                        break;
                    }
                    saved_reg_r7->unk6A8 = 1U;
                    var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                    goto block_188;
                }
                goto block_202;
            case 3:                                 /* switch 1 */
                var_r1 = 0x350;
                temp_r6_20 = saved_reg_r7->unk350;
                if (temp_r6_20 != 3) {

                } else {
                    temp_r1_11 = (((saved_reg_r7->unk10 * 4) + saved_reg_r7)->unk2A8 * 0x14) + &gUnk_080FD988;
                    arg8.unk0 = temp_r1_11->unk0;
                    arg8.unk4 = (s32) temp_r1_11->unk4;
                    arg8.unk8 = (u32) temp_r1_11->unk8;
                    arg8.unkC = (s32) temp_r1_11->unkC;
                    (&(GenObj *)((u8 *)arg8 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r1_11 + 0xC))->unk4;
                    func_0809ACC0(saved_reg_r7->unk8 + 0x1AA8, arg8.unk8);
                    func_080C8550(saved_reg_r7);
                    argF.unk0 = (u16) ((0xFFFFFC00 & argF.unk0) | 0x11);
                    argF.unk1 = (u8) ((temp_r6_20 & argF.unk1) | 0x90);
                    argF.unk2 = (u16) ((0xFFFFFC00 & argF.unk2) | 1);
                    argF.unk3 = (u8) ((temp_r6_20 & argF.unk3) | 0x90);
                    argF.unk4 = (u16) ((0xFFFFFC00 & argF.unk4) | 1);
                    memcpy(&argD, &argF, 6U);
                    argD.unk6 = 0;
                    arg4 = 7;
                    __7ChickenPCcRC13ActorLocationUiUi(&arg14, &gUnk_080FD964, &argD, 7);
                    temp_r4_12 = InsertChicken__4CoopRC7Chicken(saved_reg_r7->unk8 + 0x410, &arg14);
                    func_08009378((GenObj *)((u8 *)arg7 + 0xC), 0x889, 1, 1);
                    temp_r0_18 = func_08008940(saved_reg_r7);
                    ((void (*)(void *,...))(temp_r0_18->unk8->unk10))(temp_r0_18, arg7);
                    var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                    *var_r1 = 0xA;
                    saved_reg_r7->unk2318 = temp_r4_12;
                }
                goto block_202;
            case 4:                                 /* switch 1 */
                func_080CABA0(saved_reg_r7, &gUnk_080FDD1C);
                func_08050E50(saved_reg_r7 + 0x348, 0xF);
                saved_reg_r7->unk6A8 = 1U;
                var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                *var_r1 = 5;
                goto block_202;
            case 5:                                 /* switch 1 */
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    func_080CABA0(saved_reg_r7, &gUnk_080FDD68);
                    func_08050E50(saved_reg_r7 + 0x348, 0xE);
                    var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                    goto block_188;
                }
                goto block_202;
            case 6:                                 /* switch 1 */
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    saved_reg_r7->unk14 = -1;
                    func_08050E5C(saved_reg_r7 + 0x348);
                    var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                    *var_r1 = 0;
                }
                goto block_202;
            case 7:                                 /* switch 1 */
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    func_08075DD4(saved_reg_r7->unk1C);
                    temp_r5_11 = func_0807B188(saved_reg_r7);
                    saved_reg_r7->unkC = 0;
                    saved_reg_r7->unk648 = 0x28;
                    func_08075DB8(saved_reg_r7->unk1C, saved_reg_r7->unkC);
                    func_08075E24(saved_reg_r7->unk1C, (s16) ((temp_r5_11 + 8) * 8));
                    saved_reg_r7->unk10 = 0;
                    saved_reg_r7->unk14 = -1;
                    func_080CABA0(saved_reg_r7, &gUnk_080FDD68);
                    func_08050E50(saved_reg_r7 + 0x348, 0xE);
                    goto block_187;
                }
                goto block_202;
            case 8:                                 /* switch 1 */
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    temp_r4_13 = saved_reg_r7 + 0x348;
                    temp_ret = func_08050DF0(temp_r4_13);
                    temp_r0_19 = temp_ret;
                    var_r1 = SECOND_REG(temp_ret);
                    switch (temp_r0_19) {           /* switch 4; irregular */
                    case 1:                         /* switch 4 */
                        temp_r0_20 = (saved_reg_r7->unk10 * 8) + saved_reg_r7;
                        arg25 = temp_r0_20->unk6AC;
                        arg26 = ((GenObj *)((u8 *)temp_r0_20 + 0x6AC))->unk4;
                        func_0809ABD8(saved_reg_r7->unk8 + 0x1AA8, arg26);
                        func_080C8550(saved_reg_r7);
                        Remove__4CoopUi(saved_reg_r7->unk8 + 0x410, arg25);
                        func_080CABA0(saved_reg_r7, &gUnk_080FDD84);
                        func_08050E50(temp_r4_13, 0xF);
                        var_r1 = (s32) (saved_reg_r7 + 0x6A4);
                        *var_r1 = 7;
                        saved_reg_r7->unk6A8 = temp_r0_19;
                        break;
                    case 2:                         /* switch 4 */
                        func_08050E5C(temp_r4_13);
                        var_r1 = 1;
                        saved_reg_r7->unk6A4 = 1U;
                        goto block_196;
                    }
                }
                goto block_202;
            case 9:                                 /* switch 1 */
                if (saved_reg_r7->unk350 == 3) {
                    var_r1 = arg7->unk0;
                    if ((s32) ((0 - var_r1) | var_r1) >= 0) {
                        arg28 = 1;
                        func_08009378((GenObj *)((u8 *)arg7 + 0xC), 0x889, 1);
                        temp_r0_21 = func_08008940(saved_reg_r7);
                        var_r1 = SECOND_REG(((void (*)(void *,...))(temp_r0_21->unk8->unk10))(temp_r0_21, arg7));
                    }
                }
                goto block_202;
            case 10:                                /* switch 1 */
                var_r1 = arg7->unk0;
                if ((s32) ((0 - var_r1) | var_r1) >= 0) {
                    temp_r4 = saved_reg_r7->unk2318;
                    ((void (*)(void *,...))(arg7->unk8->unkC))(arg7, 3);
                    return temp_r4;
                }
                goto block_202;
            }
        } else {
            goto block_202;
        }
    } else {
block_202:
        func_080C96C4(saved_reg_r7, var_r1);
        return sub_0807C194();
    }
}
