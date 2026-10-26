#include "common.h"
typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    s32 unkB;
    s32 unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    s32 unk18;
    s32 unk1C;
    u8 _pad20[24];
    s32 unk38;
    s32 unk3C;
    s32 unk3D;
    s32 unk3E;
    s32 unk3F;
    s32 unk40;
} GenObj;
void func_08035380(GenObj *arg0, ? arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    GenObj *sp18;
    s32 sp1C;
    s32 sp20;
    GenObj *sp28;
    s32 sp2C;
s32 sp30;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    GenObj *sp50;
    s32 sp54;
    s32 sp58;
    GenObj *sp60;
    s32 sp64;
s32 sp68;
    GenObj *sp70;
    GenObj *sp74;
    s32 sp78;
    GenObj *sp7C;
    s32 *sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    GenObj *sp94;
    s32 *sp98;
    s32 *sp9C;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    u8 *spB0;
    u8 *spB4;
    u16 *spB8;
    s16 temp_r0_10;
    s16 temp_r0_11;
    s16 temp_r2_4;
    s16 temp_r3_5;
    s16 temp_r3_8;
    s16 temp_r5_2;
    s16 temp_r5_3;
    s16 temp_r7_3;
    s16 temp_r7_4;
    s16 temp_r7_6;
    s32 *var_sl;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r2_2;
    s32 temp_r3_3;
    s32 temp_r3_7;
    s32 temp_r4_3;
    s32 temp_r7_2;
    s32 temp_r7_5;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r2_5;
    s32 var_r3;
    s32 var_r7;
    s32 var_sb;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r3_2;
    u16 temp_r4;
    u16 temp_r4_2;
    u32 temp_r1_3;
    u8 temp_r0_12;
    u8 temp_r0_4;
    u8 temp_r0_8;
    u8 temp_r1_2;
    u8 temp_r2;
    u8 temp_r2_3;
    u8 temp_r2_5;
    void **temp_r5;
    void *temp_r0;
    void *temp_r0_7;
    void *temp_r0_9;
    GenObj *temp_r1;
    void *temp_r3;
    void *temp_r3_4;
    void *temp_r3_6;
    GenObj *temp_r7;

    temp_r5 = arg0->unk0;
    temp_r1 = arg0->unk38;
    if (temp_r1 == 0) {
        return;
    }
    temp_r0 = *((arg0->unk3C * 4) + temp_r1->unk8);
    sp70 = temp_r0;
    if (temp_r0 == 0) {
        return;
    }
    temp_r1_2 = arg0->unk3D;
    spB0 = (GenObj *)((u8 *)arg0 + 0x3D);
    if ((u32) temp_r1_2 >= (u32) sp70->unk0) {
        return;
    }
    temp_r7 = sp70->unk4 + (temp_r1_2 * 8);
    temp_r3 = temp_r7->unk4;
    sp74 = temp_r3;
    if (temp_r3 == 0) {
        return;
    }
    temp_r3_2 = (*temp_r5)->unk144(temp_r5)->unkA;
    var_r2 = ((u32) (temp_r3_2 << 0x1B) >> 0x1B) - 6;
    if (var_r2 < 0) {
        var_r2 += 0x18;
    }
    temp_r1_3 = (var_r2 * 0x3C) + ((u32) (temp_r3_2 << 0x15) >> 0x1A);
    sp78 = 0;
    temp_r3_3 = sp74->unk0;
    if (temp_r3_3 == 0) {
        goto block_107;
    }
    temp_r4 = sp74->unk4;
    if (temp_r4 == 0) {
block_107:
        if (((s32) (*spB0 + 1) < (s32) sp70->unk0) && (temp_r1_3 >= (u32) temp_r7->unk8)) {
            arg0->unk3E = 0U;
            *spB0 += 1;
            sp78 = 2;
        }
        goto block_110;
    }
    temp_r2 = arg0->unk3E;
    spB4 = (GenObj *)((u8 *)arg0 + 0x3E);
    if ((u32) temp_r2 >= (u32) temp_r4) {
        return;
    }
    if ((s32) (sp74->unkB << 0x1B) < 0) {
        temp_r3_4 = temp_r3_3 + (temp_r2 * 8);
        sp94 = temp_r3_4;
        var_r2_2 = 0;
        if ((s32) (temp_r3_4->unk6 << 0x1D) >= 0) {
            var_r2_2 = 1;
        }
        var_r2_3 = 0;
        if (((s32) (*spB0 + 1) < (s32) sp70->unk0) && (temp_r1_3 >= (u32) temp_r7->unk8)) {
            var_r2_3 = 1;
        }
        if (var_r2_3 != 0) {
            temp_r4_2 = arg0->unk4;
            if (temp_r4_2 != (*temp_r5)->unk14(temp_r5)) {
                *spB4 = 0;
                goto block_104;
            }
        }
        temp_r0_2 = arg0->unk40;
        spB8 = (GenObj *)((u8 *)arg0 + 0x40);
        if (temp_r0_2 != 0) {
            if ((var_r2_3 != 0) || (temp_r0_3 = temp_r0_2 + 1, arg0->unk40 = temp_r0_3, ((u32) temp_r0_3 > (u32) sp94->unk4))) {
                arg0->unk40 = 0U;
                temp_r0_4 = *spB4 + 1;
                *spB4 = temp_r0_4;
                if ((u32) temp_r0_4 >= (u32) sp74->unk4) {
                    *spB4 = 0;
                    if (var_r2_3 != 0) {
block_104:
                        *spB0 += 1;
                    }
                    sp78 = 2;
                } else {
                    sp78 = 1;
                }
                goto block_111;
            }
            goto block_110;
        }
        sp38 = arg0->unk8;
        sp40 = arg0->unkC;
        sp3C = arg0->unk18;
        sp44 = arg0->unk1C;
        if (var_r2_2 != 0) {
            sp98 = &sp0 + 0x38;
            sp9C = &sp0 + 0x3C;
        } else {
            sp98 = &sp0 + 0x40;
            sp9C = &sp0 + 0x44;
        }
        temp_r0_5 = *sp98;
        temp_r2_2 = temp_r0_5 >> 0x10;
        spA0 = temp_r2_2;
        temp_r0_6 = temp_r0_5 + *sp9C;
        spA4 = temp_r0_6;
        temp_r4_3 = temp_r0_6 >> 0x10;
        spA8 = temp_r4_3;
        temp_r7_2 = temp_r4_3 - temp_r2_2;
        spAC = 1;
        temp_r2_3 = arg0->unk3F;
        if (temp_r2_3 != 0) {
            spAC = 0;
            if (var_r2_3 != 0) {
                arg0->unk3F = 0U;
            } else {
                arg0->unk3F = (u8) (temp_r2_3 - 1);
            }
            if (arg0->unk3F == 0) {
                sp78 = 1;
            }
        }
        if ((var_r2_3 == 0) && (temp_r7_2 != 0)) {
            temp_r0_7 = (*temp_r5)->unk40(temp_r5, 0);
            if ((temp_r0_7 != 0) && (temp_r0_7->unk4 == arg0->unk4)) {
                ((void (*)(void *,...))(arg0->unk14->unkC))(&sp48, arg0);
                sp50 = sp48;
                sp54 = sp4C;
                ((void (*)(void *,...))(temp_r0_7->unk14->unkC))(&sp58, temp_r0_7);
                sp60 = sp58;
                sp64 = sp5C;
                if (var_r2_2 != 0) {
                    var_r2_4 = temp_r7_2;
                    var_sb = 0;
                } else {
                    var_r2_4 = 0;
                    var_sb = temp_r7_2;
                }
                temp_r3_5 = sp50.unk0;
                temp_r7_3 = sp50.unk4;
                temp_r7_4 = sp50.unk2;
                temp_r5_2 = sp50.unk6;
                if ((s32) ((temp_r3_5 - sp60.unk4) & (sp60.unk0 - temp_r7_3) & (temp_r7_4 - sp60.unk6) & (sp60.unk2 - temp_r5_2)) >= 0) {
                    sp68 = (s16) (var_r2_4 + temp_r3_5);
                    sp68.unk2 = (s16) (var_sb + temp_r7_4);
                    sp68.unk4 = (s16) (var_r2_4 + temp_r7_3);
                    sp68.unk6 = (s16) (var_sb + temp_r5_2);
                    if ((s32) ((sp68 - sp60.unk4) & (sp60.unk0 - sp68.unk4) & (sp68.unk2 - sp60.unk6) & (sp60.unk2 - sp68.unk6)) < 0) {
                        spAC = 0;
                    }
                }
            }
        }
        if (spAC != 0) {
            temp_r2_4 = sp94->unk0;
            if ((spA8 == temp_r2_4) || ((s32) ((temp_r2_4 - spA0) ^ (temp_r2_4 - spA8)) < 0)) {
                *sp98 = temp_r2_4 << 0x10;
                *sp9C = 0;
                if ((var_r2_3 != 0) || (sp94->unk4 == 0)) {
                    temp_r0_8 = *spB4 + 1;
                    *spB4 = temp_r0_8;
                    if ((u32) temp_r0_8 >= (u32) sp74->unk4) {
                        *spB4 = 0;
                        if (var_r2_3 != 0) {
                            *spB0 += 1;
                        }
                        sp78 = 2;
                    } else {
                        sp78 = 1;
                    }
                } else {
                    *spB8 = 1;
                    sp78 = 1;
                }
            } else {
                *sp98 = spA4;
            }
            arg0->unk8 = sp38;
            arg0->unkC = sp40;
            arg0->unk18 = sp3C;
            arg0->unk1C = sp44;
        }
        goto block_110;
    }
    temp_r3_6 = temp_r3_3 + (temp_r2 * 8);
    sp7C = temp_r3_6;
    var_r1 = 0;
    if ((temp_r3_6->unk4 << 0x1F) == 0) {
        var_r1 = 1;
    }
    sp0 = arg0->unk8;
    sp8 = arg0->unkC;
    sp4 = arg0->unk18;
    spC = arg0->unk1C;
    if (var_r1 != 0) {
        var_sl = &sp0;
        sp80 = &sp0 + 4;
    } else {
        var_sl = &sp8;
        sp80 = &sp0 + 0xC;
    }
    temp_r1_4 = *var_sl;
    temp_r3_7 = temp_r1_4 >> 0x10;
    sp84 = temp_r3_7;
    temp_r1_5 = temp_r1_4 + *sp80;
    sp88 = temp_r1_5;
    temp_r7_5 = temp_r1_5 >> 0x10;
    sp8C = temp_r7_5;
    var_r7 = temp_r7_5 - temp_r3_7;
    var_r3 = 0;
    spB8 = (GenObj *)((u8 *)arg0 + 0x40);
    if ((s32) arg0->unk40 >= 0x2EE) {
        var_r3 = 1;
    }
    sp90 = 1;
    temp_r2_5 = arg0->unk3F;
    if (temp_r2_5 != 0) {
        sp90 = 0;
        if (var_r3 != 0) {
            arg0->unk3F = 0U;
        } else {
            arg0->unk3F = (u8) (temp_r2_5 - 1);
        }
        if (arg0->unk3F == 0) {
            sp78 = 1;
        }
    }
    if ((var_r3 == 0) && (var_r7 != 0)) {
        temp_r0_9 = (*temp_r5)->unk40(temp_r5, 0);
        if ((temp_r0_9 != 0) && (temp_r0_9->unk4 == arg0->unk4)) {
            ((void (*)(void *,...))(arg0->unk14->unkC))(&sp10, arg0);
            sp18 = sp10;
            sp1C = sp14;
            ((void (*)(void *,...))(temp_r0_9->unk14->unkC))(&sp20, temp_r0_9);
            sp28 = sp20;
            sp2C = sp24;
            if (var_r1 != 0) {
                var_r2_5 = var_r7;
                var_r7 = 0;
            } else {
                var_r2_5 = 0;
            }
            temp_r0_10 = sp18.unk0;
            temp_r3_8 = sp18.unk4;
            temp_r7_6 = sp18.unk2;
            temp_r5_3 = sp18.unk6;
            if ((s32) ((temp_r0_10 - sp28.unk4) & (sp28.unk0 - temp_r3_8) & (temp_r7_6 - sp28.unk6) & (sp28.unk2 - temp_r5_3)) >= 0) {
                sp30 = (s16) (var_r2_5 + temp_r0_10);
                sp30.unk2 = (s16) (var_r7 + temp_r7_6);
                sp30.unk4 = (s16) (var_r2_5 + temp_r3_8);
                sp30.unk6 = (s16) (var_r7 + temp_r5_3);
                if ((s32) ((sp30 - sp28.unk4) & (sp28.unk0 - sp30.unk4) & (sp30.unk2 - sp28.unk6) & (sp28.unk2 - sp30.unk6)) < 0) {
                    sp90 = 0;
                }
            }
        }
    }
    if (sp90 != 0) {
        temp_r0_11 = sp7C->unk2;
        if ((sp84 != temp_r0_11) && (sp8C != temp_r0_11)) {
            var_r1_2 = 0;
            if ((s32) temp_r0_11 < sp84) {
                var_r1_2 = 1;
            }
            if ((s32) temp_r0_11 < sp8C) {
                if (var_r1_2 != 0) {
                    goto block_55;
                }
                goto block_50;
            }
            if (var_r1_2 != 0) {
                goto block_50;
            }
block_55:
            *var_sl = sp88;
            goto block_56;
        }
block_50:
        *var_sl = temp_r0_11 << 0x10;
        *sp80 = 0;
        temp_r0_12 = *spB4 + 1;
        *spB4 = temp_r0_12;
        if ((u32) temp_r0_12 < (u32) sp74->unk4) {
            sp78 = 1;
            goto block_56;
        }
        if ((s32) (*spB0 + 1) >= (s32) sp70->unk0) {
            return;
        }
        *spB4 = 0;
        *spB0 += 1;
        sp78 = 2;
block_56:
        arg0->unk8 = sp0;
        arg0->unkC = sp8;
        arg0->unk18 = sp4;
        arg0->unk1C = spC;
        goto block_110;
    }
    *spB8 += 1;
block_110:
    if (sp78 > 0) {
block_111:
        ((void (*)(void *,...))(arg0->unk14->unk3C))(arg0, sp78);
    }
}

