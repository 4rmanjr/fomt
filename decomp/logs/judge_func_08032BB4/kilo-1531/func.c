#include "common.h"
s32 GetBarnAnimal__C4BarnUi(s32, u32);              /* extern */
u32 GetCapacity__C4Barn(s32);                       /* extern */
u32 GetCapacity__C4Coop(s32);                       /* extern */
s32 GetChicken__C4CoopUi(s32, u32);                 /* extern */
u32 GetPregnancyStallCapacity__C4Barn(s32);         /* extern */
u32 GetPregnancyStallLinkedStall__C4BarnUi(s32, s8); /* extern */
s32 GetStoredBushelCount__C4Barn(s32);              /* extern */
s32 GetStoredBushelCount__C4Coop(s32);              /* extern */
s32 HasBeenFed__C9Livestock(s32);                   /* extern */
s32 HasBushelForEnt__C4CoopUi(s32, u32);            /* extern */
s32 HasBushelForPregnancyStall__C4BarnUi(s32, s8);  /* extern */
s32 HasBushelForStall__C4BarnUi(s32, u32);          /* extern */
s32 IsPregnant__C10BarnAnimal(s32);                 /* extern */
s32 func_0809E968(void *, ? *);                     /* extern */
s32 method_0800C6F0__C4CoopUi(s32 *, s32, u32);       /* extern */
s32 method_0800D074__C4BarnUi(s32 *, s32, u32);       /* extern */
s32 method_0800D0C0__C4BarnUi(s32 *, s32, s8);        /* extern */

void *func_08032BB4(void *arg0, s32 arg1, void **arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
s32 sp0;
s32 sp8;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    void *sp28;
    s32 sp2C;
    s32 sp30;
    u32 sp34;
    u32 sp38;
    u32 sp3C;
    u32 sp40;
    void *sp44;
    s32 temp_r0_10;
    s32 temp_r0_12;
    s32 temp_r0_14;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r1;
    s32 temp_r1_10;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r8;
    s32 var_r8_2;
    s8 var_r6;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 temp_r0_7;
    u32 temp_r1_11;
    u32 temp_r1_9;
    u32 temp_r2;
    u32 temp_r2_2;
    u32 temp_r4;
    u32 temp_r5;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r5;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r6_2;
    u32 var_sb;
    u32 var_sb_2;
    u8 temp_r1_2;
    u8 temp_r1_5;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_5;
    void *temp_r0_9;
    void *var_r2;
    void *var_r2_2;

    sp28 = arg0;
    sp2C = arg1;
    sp30 = arg3;
    sp0.unk0 = (u8) (-0x10 & sp0.unk0);
    sp34 = 0;
    if (sp30 != 0x25) {

    } else {
        temp_r7 = sp2C + 0x5DC;
        if (GetStoredBushelCount__C4Barn(temp_r7) == 0) {

        } else {
            var_r6 = 0;
            sp38 = 0;
            temp_r0 = GetPregnancyStallCapacity__C4Barn(temp_r7);
            if (sp34 < temp_r0) {
                do {
                    temp_r4 = (u32) ~GetPregnancyStallLinkedStall__C4BarnUi(temp_r7, var_r6) >> 0x1F;
                    if ((HasBushelForPregnancyStall__C4BarnUi(temp_r7, var_r6) << 0x18) != 0) {
                        if (temp_r4 == 0) {
                            sp38 += 1;
                        }
                    } else if ((temp_r4 != 0) && ((method_0800D0C0__C4BarnUi(&sp10, temp_r7, var_r6), sp14 = sp10, temp_r1 = sp14.unk0 - arg4, temp_r0_2 = sp14.unk2 - arg5, temp_r5 = (temp_r1 * temp_r1) + (temp_r0_2 * temp_r0_2), ((sp0.unk0 << 0x1C) == 0)) || (temp_r5 < sp34))) {
                        sp8.unk0 = (u8) ((-0x10 & sp8.unk0) | 5);
                        sp8.unk1 = var_r6;
                        if ((func_0809E968(arg6, &sp8) << 0x18) == 0) {
                            sp0.unk0 = (s32) sp8.unk0;
                            sp0.unk4 = (s32) sp8.unk4;
                            sp34 = temp_r5;
                        }
                    }
                    var_r6 += 1;
                } while ((u32) var_r6 < temp_r0);
            }
            var_sb = 0;
            temp_r0_3 = GetCapacity__C4Barn(sp2C + 0x5DC);
            var_r5 = 0;
            if (temp_r0_3 > 0U) {
                do {
                    temp_r0_4 = GetBarnAnimal__C4BarnUi(temp_r7, var_r5);
                    if (temp_r0_4 != 0) {
                        temp_r0_5 = (*arg2)->unk44(arg2, var_r5 + 0x36);
                        if ((temp_r0_5 != 0) && (temp_r0_5->unk4 == 0x25) && ((HasBeenFed__C9Livestock(temp_r0_4) << 0x18) == 0) && ((IsPregnant__C10BarnAnimal(temp_r0_4) << 0x18) == 0)) {
                            var_sb += 1;
                        }
                    }
                    var_r5 += 1;
                } while (var_r5 < temp_r0_3);
            }
            if (var_sb == 0) {

            } else {
                sp3C = temp_r0_3;
                var_r8 = 0;
                var_r4 = 0;
                if (temp_r0_3 > 0U) {
                    do {
                        if ((HasBushelForStall__C4BarnUi(temp_r7, var_r4) << 0x18) != 0) {
                            sp38 += 1;
                        } else if (var_r4 <= 0xFU) {
                            var_r8 |= 1 << (0x1F & var_r4);
                        }
                        var_r4 += 1;
                    } while (var_r4 < sp3C);
                }
                if (var_sb > sp38) {
                    var_r3 = 0;
                    var_r2 = arg6;
                    do {
                        if (((u32) (var_r2->unk0 << 0x1C) >> 0x1C) == 4) {
                            sp38 += 1;
                            temp_r1_2 = var_r2->unk1;
                            if ((u32) temp_r1_2 <= 0xFU) {
                                var_r8 &= ~(1 << (temp_r1_2 & 0x1F));
                            }
                        }
                        var_r2 += 8;
                        var_r3 += 1;
                    } while (var_r3 <= 6U);
                    if (var_sb > sp38) {
                        var_r4_2 = 0;
                        if (sp3C > 0U) {
                            sp44 = &sp0 + 0x1C;
                            do {
                                var_r0 = 0;
                                if (var_r4_2 <= 0xFU) {
                                    temp_r1_3 = (1 << (0x1F & var_r4_2)) & var_r8;
                                    var_r0 = (u32) ((0 - temp_r1_3) | temp_r1_3) >> 0x1F;
                                }
                                if ((var_r0 != 0) && ((method_0800D074__C4BarnUi(&sp18, temp_r7, var_r4_2), sp1C = sp18, temp_r1_4 = sp44->unk0 - arg4, temp_r0_6 = sp44->unk2 - arg5, temp_r2 = (temp_r1_4 * temp_r1_4) + (temp_r0_6 * temp_r0_6), ((sp0.unk0 << 0x1C) == 0)) || (temp_r2 < sp34))) {
                                    sp8.unk0 = (u8) ((-0x10 & sp8.unk0) | 4);
                                    sp8.unk1 = (s8) var_r4_2;
                                    sp0.unk0 = (s32) sp8.unk0;
                                    sp0.unk4 = (s32) sp8.unk4;
                                    sp34 = temp_r2;
                                }
                                var_r4_2 += 1;
                            } while (var_r4_2 < sp3C);
                        }
                    }
                }
            }
        }
    }
    if (sp30 != 0x11) {

    } else {
        temp_r7_2 = sp2C + 0x3FC;
        if (GetStoredBushelCount__C4Coop(temp_r7_2) == 0) {

        } else {
            temp_r0_7 = GetCapacity__C4Coop(temp_r7_2);
            var_sb_2 = 0;
            var_r5_2 = 0;
            if (temp_r0_7 > 0U) {
                do {
                    temp_r0_8 = GetChicken__C4CoopUi(temp_r7_2, var_r5_2);
                    if (temp_r0_8 != 0) {
                        temp_r0_9 = (*arg2)->unk44(arg2, var_r5_2 + 0x2E);
                        if ((temp_r0_9 != 0) && (temp_r0_9->unk4 == 0x11) && ((HasBeenFed__C9Livestock(temp_r0_8) << 0x18) == 0)) {
                            var_sb_2 += 1;
                        }
                    }
                    var_r5_2 += 1;
                } while (var_r5_2 < temp_r0_7);
            }
            if (var_sb_2 != 0) {
                sp40 = temp_r0_7;
                var_r5_3 = 0;
                var_r8_2 = 0;
                var_r4_3 = 0;
                if (temp_r0_7 > 0U) {
                    do {
                        if ((HasBushelForEnt__C4CoopUi(temp_r7_2, var_r4_3) << 0x18) != 0) {
                            var_r5_3 += 1;
                        } else if (var_r4_3 <= 7U) {
                            var_r8_2 |= 1 << (0x1F & var_r4_3);
                        }
                        var_r4_3 += 1;
                    } while (var_r4_3 < sp40);
                }
                if (var_sb_2 > var_r5_3) {
                    var_r3_2 = 0;
                    var_r2_2 = arg6;
                    do {
                        if (((u32) (var_r2_2->unk0 << 0x1C) >> 0x1C) == 3) {
                            var_r5_3 += 1;
                            temp_r1_5 = var_r2_2->unk1;
                            if ((u32) temp_r1_5 <= 7U) {
                                var_r8_2 &= ~(1 << (temp_r1_5 & 0x1F));
                            }
                        }
                        var_r2_2 += 8;
                        var_r3_2 += 1;
                    } while (var_r3_2 <= 6U);
                    if (var_sb_2 > var_r5_3) {
                        var_r4_4 = 0;
                        if (sp40 > 0U) {
                            sp44 = &sp0 + 0x24;
                            do {
                                var_r0_2 = 0;
                                if (var_r4_4 <= 7U) {
                                    temp_r1_6 = (1 << (0x1F & var_r4_4)) & var_r8_2;
                                    var_r0_2 = (u32) ((0 - temp_r1_6) | temp_r1_6) >> 0x1F;
                                }
                                if ((var_r0_2 != 0) && ((method_0800C6F0__C4CoopUi(&sp20, temp_r7_2, var_r4_4), sp24 = sp20, temp_r1_7 = sp44->unk0 - arg4, temp_r0_10 = sp44->unk2 - arg5, temp_r2_2 = (temp_r1_7 * temp_r1_7) + (temp_r0_10 * temp_r0_10), ((sp0.unk0 << 0x1C) == 0)) || (temp_r2_2 < sp34))) {
                                    sp8.unk0 = (u8) ((-0x10 & sp8.unk0) | 3);
                                    sp8.unk1 = (s8) var_r4_4;
                                    sp0.unk0 = (s32) sp8.unk0;
                                    sp0.unk4 = (s32) sp8.unk4;
                                    sp34 = temp_r2_2;
                                }
                                var_r4_4 += 1;
                            } while (var_r4_4 < sp40);
                        }
                    }
                }
            }
        }
    }
    var_r6_2 = 0x36;
    do {
        temp_r0_11 = (*arg2)->unk44(arg2, var_r6_2);
        if ((temp_r0_11 != 0) && (temp_r0_11->unk4 == sp30) && (((temp_r0_11->unk14->unk50(temp_r0_11) << 0x18) != 0) || ((temp_r0_11->unk14->unk54(temp_r0_11) << 0x18) != 0) || ((temp_r0_11->unk14->unk58(temp_r0_11) << 0x18) != 0)) && ((temp_r1_8 = temp_r0_11->unkA - arg4, temp_r0_12 = temp_r0_11->unkE - arg5, temp_r1_9 = (temp_r1_8 * temp_r1_8) + (temp_r0_12 * temp_r0_12), ((sp0.unk0 << 0x1C) == 0)) || (temp_r1_9 < sp34))) {
            sp8.unk0 = (u8) ((-0x10 & sp8.unk0) | 6);
            sp8.unk1 = (s8) (var_r6_2 - 0x36);
            if ((func_0809E968(arg6, &sp8) << 0x18) == 0) {
                sp0.unk0 = (s32) sp8.unk0;
                sp0.unk4 = (s32) sp8.unk4;
                sp34 = temp_r1_9;
            }
        }
        var_r6_2 += 1;
    } while (var_r6_2 <= 0x45U);
    var_r4_5 = 0x2E;
    do {
        (*arg2)->unk44(arg2, var_r4_5);
        var_r4_5 += 1;
    } while (var_r4_5 <= 0x35U);
    var_r5_4 = 0x4C;
    do {
        temp_r0_13 = (*arg2)->unk44(arg2, var_r5_4);
        if ((temp_r0_13 != 0) && (temp_r0_13->unk4 == sp30) && ((temp_r1_10 = temp_r0_13->unkA - arg4, temp_r0_14 = temp_r0_13->unkE - arg5, temp_r1_11 = (temp_r1_10 * temp_r1_10) + (temp_r0_14 * temp_r0_14), ((sp0.unk0 << 0x1C) == 0)) || (temp_r1_11 < sp34))) {
            sp8.unk0 = (u8) ((-0x10 & sp8.unk0) | 8);
            sp8.unk1 = (s8) (var_r5_4 - 0x4C);
            if ((func_0809E968(arg6, &sp8) << 0x18) == 0) {
                sp0.unk0 = (s32) sp8.unk0;
                sp0.unk4 = (s32) sp8.unk4;
                sp34 = temp_r1_11;
            }
        }
        var_r5_4 += 1;
    } while (var_r5_4 <= 0x53U);
    sp28->unk0 = (s32) sp0.unk0;
    sp28->unk4 = (s32) sp0.unk4;
    return sp28;
}

