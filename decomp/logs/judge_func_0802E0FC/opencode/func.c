#include "common.h"
s32 GetCow__4BarnUi(s32);                           /* extern */
void *GetEgg__C4CoopUi(s32, s32);                   /* extern */
s32 GetGrowthStage__C5Horse();                      /* extern */
s32 GetHorse__4Farm(s32);                             /* extern */
s32 GetLocation__C7AEntity(s32 *, void *);            /* extern */
s32 GetPrice__C7Product(s8 *);                      /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 __12RucksackItemG4Food(s32 *, s32);               /* extern */
s32 __12RucksackItemG7Article(s32 *, u8);             /* extern */
s32 __4FoodUi(s32 *, s32);                              /* extern */
s32 __7ArticleUi(void *, s32);                        /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
u8 func_0800F190(s32);                              /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_0800FFD0(s32);                             /* extern */
s32 func_08021EE0();                                  /* extern */
s32 func_08024724(s32 *, s32 *, s32 *);               /* extern */
s32 func_080257D0(void *, s32);                       /* extern */
s32 func_08025838(void *, s32);                       /* extern */
s32 func_08025E38(void *);                            /* extern */
s32 func_08025EFC(void *, u8);                        /* extern */
s32 func_08025FC4(void *);                            /* extern */
s32 func_08026150(void *, s32 *, s32);                /* extern */
s8 func_080262C4(void *);                           /* extern */
s32 func_0802A7D8(void *);                            /* extern */
s32 func_0802A7E0(void *);                          /* extern */
s32 func_0802AB98(s32 *, void *, u8);                 /* extern */
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_08037EB4(void *, s8 *);                      /* extern */
s32 func_080380EC(s32, u8);                           /* extern */
s32 func_08038108();                                /* extern */
s32 func_080AC070(s32 *, s32 *);                    /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
s32 method_0800C9B8__4CoopUi(s32, s32);               /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    s32 unkA;
    s32 unkB;
    struct GenObj *unkC;
    s32 unkD;
    s32 unkE;
    struct GenObj *unk10;
    struct GenObj *unk14;
    struct GenObj *unk18;
    s32 unk1C;
    s32 unk20;
    u8 _pad24[16];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    u8 _pad40[29];
    s32 unk5D;
    s32 unk5E;
    u8 _pad62[38];
    s32 unk88;
    u8 _pad8C[37];
    s32 unkB1;
    u8 _padB5[3];
    s32 unkB8;
    s32 unkBC;
    u8 _padC0[3];
    s32 unkC3;
} GenObj;
void func_0802E0FC(GenObj *arg0, GenObj *arg1, ? arg3) {
    GenObj sp0;
    s32 sp8;
s32 spC;
    GenObj sp14;
    GenObj *sp20;
    GenObj *sp28;
    s32 sp2C;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
GenObj sp54;
    s8 sp5C;
    GenObj *sp60;
    s32 *sp68;
    u32 sp6C;
    s32 sp70;
    ? (**sp74)(void **, s32 *, s32 *);
    u8 *sp78;
    s8 *sp7C;
    s32 sp80;
    s16 var_r4_2;
    s16 var_r5_2;
    s16 var_r5_3;
    s16 var_sl;
    s32 *temp_r4_5;
    s32 *var_r4;
    s32 *var_r4_3;
    s32 temp_r0_11;
    s32 temp_r0_14;
    s32 temp_r0_24;
    s32 temp_r1_5;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4_11;
    s32 temp_r4_2;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r0;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_7;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r5;
    s32 var_r5_4;
    s32 var_r8;
    s8 *temp_r4_9;
    u16 temp_r0_8;
    u16 var_r2;
    u32 *var_r0_3;
    u32 temp_r0_26;
    u32 temp_r0_3;
    u32 temp_r1_2;
    u32 temp_r1_3;
    u8 temp_r0;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r1;
    u8 temp_r2;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r4;
    u8 temp_r4_4;
    u8 temp_r4_6;
    u8 temp_r4_7;
    u8 temp_r5_3;
    u8 var_r0_2;
    void **temp_r0_10;
    void **temp_r0_12;
    void **temp_r0_13;
    void **temp_r0_19;
    void **temp_r0_20;
    void **temp_r0_27;
    void **temp_r0_28;
    void **temp_r0_29;
    void **temp_r0_2;
    void **temp_r0_30;
    void **temp_r0_9;
    void **temp_r1_4;
    void **temp_r4_10;
    void **temp_r4_8;
    void **temp_r5;
    void **temp_sb;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_23;
    GenObj *temp_r0_25;
    void *temp_r0_31;
    void *temp_r0_4;
    void *temp_r0_5;
    GenObj *temp_r1_6;
    void *temp_r4_3;
    GenObj *var_r0_6;

    var_r2 = 0;
    sp28 = 0;
    if (arg1 != 0) {
        var_r2 = arg1->unk0;
        sp28 = (s32) arg1->unk4;
    }
    temp_r4 = arg0->unkC3;
    if (temp_r4 != 0) {
        arg0->unk3C = 0U;
        return;
    }
    temp_r0 = 1 & var_r2;
    if (temp_r0 != 0) {
        if (2 & sp28.unk0) {
            temp_r0_2 = arg0->unk0;
            sp20 = 0x3CE;
            sp20.unk4 = (s32) temp_r4;
            (*temp_r0_2)->unk140(temp_r0_2, &sp20, 0);
            arg0->unk3C = temp_r4;
            return;
        }
        temp_r1 = sp28.unk1;
        temp_r2 = 2 & temp_r1;
        if (temp_r2 != 0) {
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                func_080257D0(arg0, 1);
                return;
            }
            func_08025838(arg0, 0);
            return;
        }
        if (1 & temp_r1) {
            arg0->unk3C = temp_r2;
        }
    } else {
        arg0->unk3C = temp_r0;
        temp_sb = arg0->unk0;
        GetLocation__C7AEntity(&sp0, arg0);
        sp68 = &sp0;
        func_0802AB98(&sp2C, arg0, arg0->unk20);
        sp34 = sp2C;
        sp38 = sp30;
        temp_r6 = (*temp_sb)->unk134(temp_sb, &sp0, &sp34);
        sp6C = 0;
        sp70 = 0;
        temp_r0_3 = temp_r6 - 0x2B;
        sp7C = (GenObj *)((u8 *)arg0 + 0x3C);
        sp78 = (GenObj *)((u8 *)arg0 + 0x20);
        switch (temp_r0_3) {                        /* switch 1; irregular */
        case 0x1:                                   /* switch 1 */
            GetHorse__4Farm(arg0->unk34 + 0x14);
            if (GetGrowthStage__C5Horse() != 1) {
                sp6C = 9;
            } else if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                sp5C = func_080262C4(arg0);
                if (GetPrice__C7Product(&sp5C) == 0) {

                } else {
                    temp_r5 = arg0->unk0;
                    (*temp_r5)->unk15C(temp_r5, &sp5C);
                    *sp7C = 0xE;
                    sp70 = 1;
                    temp_r0_4 = (*temp_r5)->unk40(temp_r5, 0x2C);
                    if (temp_r0_4 != 0) {
                        ((void (*)(void *,...))(temp_r0_4->unk14->unk88))(temp_r0_4, 0x3C);
                        func_08032384(temp_r0_4, 5, 0);
                    }
                    temp_r0_5 = (*temp_r5)->unk14C(temp_r5);
                    var_r4 = temp_r0_5->unk0;
                    var_r5 = temp_r0_5->unk4;
                    if (var_r4 != var_r5) {
loop_44:
                        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                            var_r4 += 4;
                            if (var_r4 == var_r5) {
                                goto block_64;
                            }
                            goto loop_44;
                        }
block_55:
                        var_r0 = *var_r4;
                    } else {
block_64:
                        var_r0 = *(var_r5 - 4);
                    }
block_65:
                    func_08008B6C(var_r0, 0x6E);
                }
            } else {
                (*temp_sb)->unk34(&sp8, temp_sb, arg0->unk4);
                var_r5_2 = arg0->unkA;
                var_r4_2 = arg0->unkE;
                sp3C = (s16) (var_r5_2 - 7);
                sp3C.unk2 = (s16) (var_r4_2 - 9);
                sp3C.unk4 = (s16) (var_r5_2 + 7);
                sp3C.unk6 = (s16) (var_r4_2 + 5);
                sp44 = sp3C;
                sp48 = sp40;
                if ((((func_080AC070(&sp8, &sp44) ^ 1) << 0x18) == 0) && (func_08024724(&sp4C, &sp8, &sp44), sp50 = sp4C, var_r5_2 += sp50, var_r4_2 += sp50.unk2, sp54 = (s16) (var_r5_2 - 7), sp54.unk2 = (s16) (var_r4_2 - 9), sp54.unk4 = (s16) (var_r5_2 + 7), sp54.unk6 = (s16) (var_r4_2 + 5), (((func_080AC070(&sp8) ^ 1) << 0x18) == 0))) {

                } else {
                    temp_r6_2 = var_r5_2 << 0x10;
                    temp_r4_2 = var_r4_2 << 0x10;
                    temp_r4_3 = (*temp_sb)->unk40(temp_sb, 0x2C);
                    func_08021EE0();
                    temp_r4_3->unk8 = temp_r6_2;
                    temp_r4_3->unkC = temp_r4_2;
                    temp_r4_3->unk18 = 0;
                    temp_r4_3->unk1C = 0;
                    temp_r0_6 = *sp78;
                    switch (temp_r0_6) {            /* switch 2; irregular */
                    case 1:                         /* switch 2 */
                        if (temp_r4_3->unk20 != 3) {
                            SetAnimFacing__12AActorEntityUi(temp_r4_3, 3);
                        }
                        break;
                    case 0:                         /* switch 2 */
                        if (temp_r4_3->unk20 != 2) {
                            SetAnimFacing__12AActorEntityUi(temp_r4_3, 2);
                        }
                        break;
                    case 2:                         /* switch 2 */
                        if (temp_r4_3->unk20 != 1) {
                            SetAnimFacing__12AActorEntityUi(temp_r4_3, 1);
                        }
                        break;
                    case 3:                         /* switch 2 */
                        if (temp_r4_3->unk20 != 0) {
                            SetAnimFacing__12AActorEntityUi(temp_r4_3, 0);
                        }
                        break;
                    }
                    arg0->unkB8 = (s32) ((s32) (temp_r6_2 - arg0->unk8) / 24);
                    arg0->unkBC = (s32) ((s32) (temp_r4_2 - arg0->unkC) / 24);
                    arg0->unk18 = (s32) arg0->unkB8;
                    arg0->unk1C = (s32) arg0->unkBC;
                    sp70 = 1;
                    *sp7C = 0x22;
                }
            }
        case 0x39:                                  /* switch 1 */
block_95:
            if (sp70 != 0) {
                return;
            }
            if (sp6C != 0) {
                goto block_121;
            }
            memcpy(&sp8, sp68, 6);
            temp_r0_7 = *sp78;
            switch (temp_r0_7) {                    /* switch 4; irregular */
            case 1:                                 /* switch 4 */
                temp_r3 = sp0.unkB;
                temp_r1_2 = ((((sp0.unkC & 0x3FF) << 6) | (temp_r3 >> 2)) << 0x10) + 0xFFF00000;
                sp0.unkB = (u8) ((3 & temp_r3) | (((temp_r1_2 >> 0x10) & 0x3F) * 4));
                sp0.unkC = (u16) ((0xFFFFFC00 & sp0.unkC) | ((temp_r1_2 >> 0x16) & 0x3FF));
                break;
            case 0:                                 /* switch 4 */
                temp_r3_2 = sp0.unkB;
                temp_r1_3 = ((((sp0.unkC & 0x3FF) << 6) | (temp_r3_2 >> 2)) << 0x10) + 0x100000;
                sp0.unkB = (u8) ((3 & temp_r3_2) | (((temp_r1_3 >> 0x10) & 0x3F) * 4));
                sp0.unkC = (u16) ((0xFFFFFC00 & sp0.unkC) | ((temp_r1_3 >> 0x16) & 0x3FF));
                break;
            case 2:                                 /* switch 4 */
                var_r1 = ((s32) (sp8 << 6) >> 0x10) - 0x10;
block_110:
                sp8 = (0xFC0003FF & sp8) | ((u32) (var_r1 << 0x10) >> 6);
                break;
            case 3:                                 /* switch 4 */
                var_r1 = ((s32) (sp8 << 6) >> 0x10) + 0x10;
                goto block_110;
            }
            temp_r1_4 = arg0->unk0;
            (*temp_r1_4)->unk34(&sp14, temp_r1_4, arg0->unk4);
            temp_r5_2 = (s32) (sp8 << 6) >> 0x13;
            temp_r3_3 = (s32) ((((sp0.unkC & 0x3FF) << 6) | ((u8) sp0.unkB >> 2)) << 0x10) >> 0x13;
            temp_r0_8 = sp14.unk8;
            if ((sp14 != 0) && ((u32) temp_r5_2 <= (u32) temp_r0_8) && ((u32) temp_r3_3 <= (u32) sp14.unkA)) {
                temp_r1_5 = sp14.unk4;
                var_r0_2 = (temp_r3_3 * temp_r0_8) + temp_r5_2;
                if (temp_r1_5 != 0) {
                    var_r0_2 = *((u8 *)temp_r1_5 + var_r0_2);
                }
                var_r0_3 = sp14 + (var_r0_2 * 4);
            } else {
                var_r0_3 = 0;
            }
            if (var_r0_3 != 0) {
                sp6C = (u32) *var_r0_3 >> 0x11;
            }
            if (sp6C != 0) {
block_121:
                temp_r0_9 = arg0->unk0;
                sp60 = sp6C;
                sp60.unk4 = 0;
                (*temp_r0_9)->unk140(temp_r0_9, &sp60, 0);
                *sp7C = 0;
                return;
            }
            temp_r5_3 = func_0800F190(arg0->unk38 + 0x54);
            if (temp_r5_3 != 0) {
                var_r5_3 = arg0->unkA;
                var_sl = arg0->unkE;
                temp_r4_4 = *sp78;
                switch (temp_r4_4) {                /* switch 8; irregular */
                case 1:                             /* switch 8 */
                    var_sl -= 0x10;
                    break;
                case 0:                             /* switch 8 */
                    var_sl += 0x10;
                    break;
                case 2:                             /* switch 8 */
                    var_r5_3 -= 0x10;
                    break;
                case 3:                             /* switch 8 */
                    var_r5_3 += 0x10;
                    break;
                }
                __12RucksackItem(&sp8);
                temp_r0_10 = arg0->unk0;
                sp74 = *temp_r0_10 + 0xE0;
                spC = (s16) ((0xFFFFFC00 & (u16) spC) | (arg0->unk4 & 0x3FF));
                temp_r3_4 = ((u16) var_r5_3 & 0x3F) * 4;
                sp80 = temp_r3_4;
                spC.unk1 = (u8) ((3 & spC.unk1) | temp_r3_4);
                spC.unk2 = (u16) ((0xFFFFFC00 & spC.unk2) | (((u32) (var_r5_3 << 0x10) >> 0x16) & 0x3FF));
                spC.unk3 = (u8) ((3 & spC.unk3) | (((u16) var_sl & 0x3F) * 4));
                spC.unk4 = (u16) ((0xFFFFFC00 & spC.unk4) | (((u32) (var_sl << 0x10) >> 0x16) & 0x3FF));
                *sp74(temp_r0_10, &spC, &sp8);
                if ((IsEmpty__C12RucksackItem(&sp8) << 0x18) == 0) {
                    func_08026150(arg0, &sp8, 0);
                }
                return;
            }
            temp_r0_11 = func_0802A7E0(arg0);
            switch (temp_r0_11) {                   /* switch 5; irregular */
            case 2:                                 /* switch 5 */
                return;
            case 3:                                 /* switch 5 */
                *sp7C = 0xC;
                func_0802A7D8(arg0);
                func_0800F390(arg0->unk38 + 0x54);
                temp_r4_5 = arg0->unk34 + 0x1CCC;
                GetLocation__C7AEntity(&sp8, arg0);
                memcpy(temp_r4_5, &sp8, 6);
                temp_r0_12 = arg0->unk0;
                (*temp_r0_12)->unk38(temp_r0_12, 0x4B);
                temp_r0_13 = arg0->unk0;
                temp_r0_14 = (*temp_r0_13)->unk40(temp_r0_13, 0x4B);
                if (temp_r0_14 == 0) {
                    return;
                }
                func_080380EC(temp_r0_14, *sp78);
                temp_r0_15 = (*arg0->unk0)->unk14C();
                var_r4_3 = temp_r0_15->unk0;
                var_r5_4 = temp_r0_15->unk4;
                if (var_r4_3 != var_r5_4) {
loop_172:
                    if ((func_08008CD0(*var_r4_3) << 0x18) != 0) {
                        var_r4_3 += 4;
                        if (var_r4_3 == var_r5_4) {
                            goto block_174;
                        }
                        goto loop_172;
                    }
block_168:
                    var_r0_4 = *var_r4_3;
                } else {
block_174:
                    var_r0_4 = *(var_r5_4 - 4);
                }
block_175:
                func_08008B6C(var_r0_4, 0x6C);
                return;
            case 0:                                 /* switch 5 */
                *sp7C = 0xB;
                temp_r1_6 = (GenObj *)((u8 *)arg0 + 0x88);
                temp_r1_6->unk4 = (s32) temp_r5_3;
                temp_r1_6->unk8 = (s32) temp_r5_3;
                temp_r1_6->unk14 = 0x150000;
                temp_r4_6 = *sp78;
                switch (temp_r4_6) {                /* switch 6; irregular */
                case 2:                             /* switch 6 */
                    temp_r1_6->unkC = 0xFFFE5556;
                    temp_r1_6->unk10 = (s32) temp_r5_3;
block_145:
                    temp_r1_6->unk18 = (s32) temp_r5_3;
                    break;
                case 3:                             /* switch 6 */
                    temp_r1_6->unkC = 0x1AAAA;
                    temp_r1_6->unk10 = (s32) temp_r5_3;
                    goto block_145;
                case 1:                             /* switch 6 */
                    var_r0_5 = 0xFFFE5556;
block_144:
                    temp_r1_6->unkC = (s32) temp_r5_3;
                    temp_r1_6->unk10 = var_r0_5;
                    goto block_145;
                case 0:                             /* switch 6 */
                    var_r0_5 = 0x1AAAA;
                    goto block_144;
                }
                temp_r0_16 = (*arg0->unk0)->unk14C();
                var_r4_3 = temp_r0_16->unk0;
                var_r5_4 = temp_r0_16->unk4;
                if (var_r4_3 == var_r5_4) {
                    goto block_174;
                }
loop_148:
                if ((func_08008CD0(*var_r4_3) << 0x18) != 0) {
                    var_r4_3 += 4;
                    if (var_r4_3 == var_r5_4) {
                        goto block_174;
                    }
                    goto loop_148;
                }
                goto block_168;
                goto block_175;
            case 1:                                 /* switch 5 */
                *sp7C = 0xD;
                temp_r4_7 = *sp78;
                switch (temp_r4_7) {                /* switch 7; irregular */
                case 2:                             /* switch 7 */
                    var_r0_6 = (GenObj *)((u8 *)arg0 + 0x88);
                    var_r0_6->unk4 = 0xFFF60000;
                    var_r0_6->unk8 = (s32) temp_r5_3;
block_163:
                    var_r0_6->unk14 = 0xC0000;
                    break;
                case 3:                             /* switch 7 */
                    var_r0_6 = (GenObj *)((u8 *)arg0 + 0x88);
                    var_r0_6->unk4 = 0xA0000;
                    var_r0_6->unk8 = (s32) temp_r5_3;
                    goto block_163;
                case 1:                             /* switch 7 */
                    var_r0_6 = (GenObj *)((u8 *)arg0 + 0x88);
                    var_r1_2 = 0xFFF60000;
                    var_r0_6->unk4 = (s32) temp_r5_3;
block_162:
                    var_r0_6->unk8 = var_r1_2;
                    goto block_163;
                case 0:                             /* switch 7 */
                    var_r0_6 = (GenObj *)((u8 *)arg0 + 0x88);
                    var_r1_2 = 0xA0000;
                    var_r0_6->unk4 = (s32) temp_r4_7;
                    goto block_162;
                }
                temp_r0_17 = (*arg0->unk0)->unk14C();
                var_r4_3 = temp_r0_17->unk0;
                var_r5_4 = temp_r0_17->unk4;
                if (var_r4_3 != var_r5_4) {
loop_165:
                    if ((func_08008CD0(*var_r4_3) << 0x18) != 0) {
                        var_r4_3 += 4;
                        if (var_r4_3 == var_r5_4) {
                            goto block_174;
                        }
                        goto loop_165;
                    }
                    goto block_168;
                }
                goto block_174;
                goto block_175;
            }
            break;
        case 0x0:                                   /* switch 1 */
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                goto block_95;
            }
            temp_r4_8 = arg0->unk0;
            temp_r0_18 = (*temp_r4_8)->unk40(temp_r4_8, temp_r6);
            if (temp_r0_18 != 0) {
                ((void (*)(void *,...))(temp_r0_18->unk14->unk88))(temp_r0_18, 0x3C);
            }
            (*temp_r4_8)->unk3C(temp_r4_8, temp_r6);
            func_08025E38(arg0);
            return;
        case 0x1F:                                  /* switch 1 */
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
                temp_r0_19 = arg0->unk0;
                (*temp_r0_19)->unk3C(temp_r0_19, temp_r6);
                func_08025FC4(arg0);
                return;
            }
            temp_r4_9 = &(GenObj *)((u8 *)sp0 + 0x5D);
            sp0.unk5D = func_080262C4(arg0);
            if (GetPrice__C7Product(temp_r4_9) == 0) {

            } else {
                temp_r0_20 = arg0->unk0;
                temp_r0_21 = (*temp_r0_20)->unk40(temp_r0_20, 0x4A);
                var_r1_3 = 0;
                if (func_0800FFD0(temp_r0_21->unk18) == 0x1E) {
                    var_r1_3 = 1;
                }
                if (var_r1_3 == 0) {
                    func_08037EB4(temp_r0_21, temp_r4_9);
                    *sp7C = 0xE;
                    sp70 = 1;
                    temp_r0_22 = (*arg0->unk0)->unk14C();
                    var_r4 = temp_r0_22->unk0;
                    var_r5 = temp_r0_22->unk4;
                    if (var_r4 != var_r5) {
loop_62:
                        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                            var_r4 += 4;
                            if (var_r4 == var_r5) {
                                goto block_64;
                            }
                            goto loop_62;
                        }
                        goto block_55;
                    }
                    goto block_64;
                    goto block_65;
                }
                sp6C = 0x3CD;
            }
            goto block_95;
        case 0x3:                                   /* switch 1 */
        case 0x4:                                   /* switch 1 */
        case 0x5:                                   /* switch 1 */
        case 0x6:                                   /* switch 1 */
        case 0x7:                                   /* switch 1 */
        case 0x8:                                   /* switch 1 */
        case 0x9:                                   /* switch 1 */
        case 0xA:                                   /* switch 1 */
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                goto block_95;
            }
            temp_r4_10 = arg0->unk0;
            temp_r0_23 = (*temp_r4_10)->unk40(temp_r4_10, temp_r6);
            if (temp_r0_23 != 0) {
                ((void (*)(void *,...))(temp_r0_23->unk14->unk88))(temp_r0_23, 0x3C);
            }
            (*temp_r4_10)->unk3C(temp_r4_10, temp_r6);
            func_08025EFC(arg0, (u8) (temp_r6 - 0x2E));
            return;
        case 0xB:                                   /* switch 1 */
        case 0xC:                                   /* switch 1 */
        case 0xD:                                   /* switch 1 */
        case 0xE:                                   /* switch 1 */
        case 0xF:                                   /* switch 1 */
        case 0x10:                                  /* switch 1 */
        case 0x11:                                  /* switch 1 */
        case 0x12:                                  /* switch 1 */
        case 0x13:                                  /* switch 1 */
        case 0x14:                                  /* switch 1 */
        case 0x15:                                  /* switch 1 */
        case 0x16:                                  /* switch 1 */
        case 0x17:                                  /* switch 1 */
        case 0x18:                                  /* switch 1 */
        case 0x19:                                  /* switch 1 */
        case 0x1A:                                  /* switch 1 */
            arg0->unkB1 = (s8) (temp_r6 - 0x36);
            temp_r0_24 = GetCow__4BarnUi(arg0->unk34 + 0x5F0);
            sp6C = 0xD;
            if (temp_r0_24 == 0) {

            } else {
                sp6C = 8;
            }
            goto block_95;
        case 0x21:                                  /* switch 1 */
        case 0x22:                                  /* switch 1 */
        case 0x23:                                  /* switch 1 */
        case 0x24:                                  /* switch 1 */
        case 0x25:                                  /* switch 1 */
        case 0x26:                                  /* switch 1 */
        case 0x27:                                  /* switch 1 */
        case 0x28:                                  /* switch 1 */
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                goto block_95;
            }
            temp_r4_11 = temp_r6 - 0x4C;
            temp_r0_25 = GetEgg__C4CoopUi(arg0->unk34 + 0x410, temp_r4_11);
            if (temp_r0_25 == 0) {
                goto block_95;
            }
            temp_r0_26 = (u32) (temp_r0_25->unk6 << 0x1D) >> 0x1D;
            var_r8 = 0xF;
            switch (temp_r0_26) {                   /* switch 3 */
            case 0:                                 /* switch 3 */
                var_r0_7 = 0xF;
block_87:
                var_r8 = var_r0_7;
                break;
            case 1:                                 /* switch 3 */
                var_r8 = 0x10;
                break;
            case 2:                                 /* switch 3 */
                var_r8 = 0x11;
                break;
            case 3:                                 /* switch 3 */
                var_r8 = 0x12;
                break;
            case 4:                                 /* switch 3 */
                var_r8 = 0x13;
                break;
            case 5:                                 /* switch 3 */
                var_r0_7 = 0x14;
                goto block_87;
            }
            temp_r0_27 = arg0->unk0;
            (*temp_r0_27)->unk3C(temp_r0_27, temp_r6);
            method_0800C9B8__4CoopUi(arg0->unk34 + 0x410, temp_r4_11);
            __4FoodUi(&spC, var_r8);
            __12RucksackItemG4Food(&sp8, (sp0.unkE << 0x10) | ((sp0.unkD << 8) | spC));
block_92:
            func_08026150(arg0, &sp8, 0);
            return;
        case 0x20:                                  /* switch 1 */
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
                temp_r0_28 = arg0->unk0;
                (*temp_r0_28)->unk40(temp_r0_28, 0x4B);
                if ((func_08038108() << 0x18) == 0) {
                    temp_r0_29 = arg0->unk0;
                    (*temp_r0_29)->unk3C(temp_r0_29, temp_r6);
                    __7ArticleUi(&(GenObj *)((u8 *)sp0 + 0x5E), 0x35);
                    __12RucksackItemG7Article(&sp8, sp0.unk5E);
                    goto block_92;
                }
            }
            goto block_95;
        default:                                    /* switch 1 */
            temp_r0_30 = arg0->unk0;
            temp_r0_31 = (*temp_r0_30)->unk12C(temp_r0_30, temp_r6);
            if (temp_r0_31 != 0) {
                sp6C = (u32) ((void (*)(void *,...))(temp_r0_31->unk14->unk34))(temp_r0_31);
            }
            goto block_95;
        }
    }
}

