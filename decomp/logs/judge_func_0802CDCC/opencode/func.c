#include "common.h"
s32 func_0802536C(void *, s32, s32);                  /* extern */
s32 func_080AC070(s32 *, s32 *);                      /* extern */
extern s32 gUnk_080F0E88;
extern s32 gUnk_080F0F78;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    s32 unk18;
    s32 unk1A;
    s32 unk1C;
    s32 unk1E;
    s32 unk20;
    u8 _pad24[24];
    s32 unk3C;
    s32 unk3E;
    s32 unk40;
    u8 _pad44[64];
    s32 unk84;
    u8 _pad88[43];
    s32 unkB3;
    s32 unkB4;
} GenObj;
void func_0802CDCC(GenObj *arg0) {
s32 sp0;
    s32 spC;
    GenObj *sp14;
    s32 sp18;
    s32 sp1C;
    GenObj *sp24;
    s32 sp28;
    s32 sp2C;
    GenObj *sp34;
    s32 sp38;
    s32 sp3C;
    GenObj *sp44;
    s32 sp48;
s32 sp4C;
    void **sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    u32 sp68;
    s32 *sp6C;
    u32 sp70;
    s32 sp74;
    GenObj *sp78;
    s32 sp7C;
    s16 temp_r0_10;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 temp_r4;
    s16 temp_r4_2;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r0_2;
    s32 var_r1_2;
    s32 var_r8;
    s32 var_sb;
    s8 *var_r1;
    s8 var_r0;
    u32 temp_r0_11;
    u32 temp_r0_8;
    u32 temp_r1;
    u32 temp_r2;
    u32 var_r4;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    void **temp_r0_3;
    void *temp_r0_14;
    void *temp_r0_4;
    void *temp_r0_9;

    temp_r0 = arg0->unkB3;
    if (temp_r0 != 0) {
        temp_r0_2 = temp_r0 - 1;
        arg0->unkB3 = temp_r0_2;
        if ((temp_r0_2 << 0x18) == 0) {
            var_r4 = 0x2B;
            do {
                temp_r0_3 = arg0->unk0;
                temp_r0_4 = (*temp_r0_3)->unk40(temp_r0_3, var_r4);
                if (temp_r0_4 != 0) {
                    ((void (*)(void *,...))(temp_r0_4->unk14->unk40))(temp_r0_4);
                }
                var_r4 += 1;
            } while (var_r4 <= 0x45U);
        } else {
            var_r1 = (GenObj *)((u8 *)arg0 + 0xB4);
            temp_r0_5 = arg0->unkB4;
            if ((u32) temp_r0_5 <= 0x59U) {
                var_r0 = temp_r0_5 + 1;
                goto block_11;
            }
        }
    } else {
        var_r1 = (GenObj *)((u8 *)arg0 + 0xB4);
        temp_r0_6 = arg0->unkB4;
        if (temp_r0_6 != 0) {
            var_r0 = temp_r0_6 - 1;
block_11:
            *var_r1 = var_r0;
        }
    }
    sp54 = arg0->unk0;
    sp58 = (s32) arg0->unk4;
    if ((arg0->unk18 == 0) && (arg0->unk1C == 0)) {

    } else {
        temp_r0_7 = arg0->unk3C;
        if (temp_r0_7 == 0x2C) {

        } else if (temp_r0_7 == 0x35) {

        } else {
            ((void (*)(void *,...))(arg0->unk14->unkC))(&spC, arg0);
            sp14 = spC;
            sp18 = sp10;
            sp5C = (s32) (u8) (((void (*)(void *,...))(arg0->unk14->unk40))(arg0) ^ 1);
            sp60 = (s32) arg0->unk20;
            sp64 = (s32) arg0->unkB4;
            temp_r3 = arg0->unk1A;
            temp_r4 = arg0->unk1E;
            sp1C = (s16) (temp_r3 + sp14.unk0);
            sp1C.unk2 = (s16) (temp_r4 + sp14.unk2);
            sp1C.unk4 = (s16) (temp_r3 + sp14.unk4);
            sp1C.unk6 = (s16) (temp_r4 + sp14.unk6);
            sp24 = sp1C;
            sp28 = sp20;
            if (arg0->unk3E != 2) {
                sp68 = 0x3C;
                sp6C = &gUnk_080F0E88;
            } else {
                sp68 = 0x15;
                sp6C = &gUnk_080F0F78;
            }
            sp70 = 0;
            if (sp68 > 0U) {
                do {
                    sp74 = *((sp70 * 4) + sp6C);
                    temp_r0_9 = (*sp54)->unk40(sp54, sp74);
                    sp78 = temp_r0_9;
                    if ((temp_r0_9 != 0) && (temp_r0_9->unk4 == sp58)) {
                        ((void (*)(void *,...))(temp_r0_9->unk14->unkC))(&sp2C, temp_r0_9);
                        sp34 = sp2C;
                        sp38 = sp30;
                        temp_r0_10 = sp34.unk0;
                        temp_r4_2 = sp34.unk4;
                        sp7C = (s32) sp34.unk2;
                        temp_r3_2 = sp34.unk6;
                        temp_r2 = (u32) ((temp_r0_10 - sp14.unk4) & (sp14.unk0 - temp_r4_2) & (sp7C - sp14.unk6) & (sp14.unk2 - temp_r3_2)) >> 0x1F;
                        if ((temp_r2 == 0) && ((s32) ((temp_r0_10 - sp24.unk4) & (sp24.unk0 - temp_r4_2) & (sp7C - sp24.unk6) & (sp24.unk2 - temp_r3_2)) < 0)) {
                            arg0->unk18 = temp_r2;
                            arg0->unk1C = temp_r2;
                            if (sp5C != 0) {
                                var_r1_2 = 0;
                                if ((u32) (sp74 - 0x2B) <= 0x1AU) {
                                    var_r1_2 = 1;
                                }
                                if (var_r1_2 != 0) {
                                    ((void (*)(void *,...))(sp78->unk14->unk84))(sp78, sp60, sp64);
                                    arg0->unkB3 = 8U;
                                }
                            }
                        }
                    }
                    temp_r0_8 = sp70 + 1;
                    sp70 = temp_r0_8;
                } while (temp_r0_8 < sp68);
            }
        }
    }
    temp_r0_11 = arg0->unk18;
    temp_r1 = arg0->unk1C;
    if ((temp_r0_11 == 0) && (temp_r1 == 0)) {
        return;
    }
    temp_r5 = arg0->unk8;
    temp_r6 = arg0->unkC;
    temp_r0_12 = temp_r0_11 + temp_r5;
    var_r8 = temp_r0_12;
    var_sb = temp_r1 + temp_r6;
    if (temp_r0_12 < 0) {
        var_r8 = 0;
    } else {
        temp_r0_13 = (*sp54)->unk2C(sp54, sp58) << 0x10;
        if (var_r8 > temp_r0_13) {
            var_r8 = temp_r0_13;
        }
    }
    if (var_sb < 0) {
        var_r0_2 = 0;
        goto block_44;
    }
    var_r0_2 = (*sp54)->unk30(sp54, sp58) << 0x10;
    if (var_sb > var_r0_2) {
block_44:
        var_sb = var_r0_2;
    }
    if ((u32) (u8) (arg0->unk3C - 0x2C) > 1U) {
        (*sp54)->unk34(&sp0, sp54, sp58);
        ((void (*)(void *,...))(arg0->unk14->unkC))(&sp3C, arg0);
        sp44 = sp3C;
        sp48 = sp40;
        if ((func_080AC070(&sp0, &sp44) << 0x18) != 0) {
            arg0->unk8 = var_r8;
            arg0->unkC = var_sb;
        } else {
            temp_r5_2 = (var_r8 >> 0x10) - (temp_r5 >> 0x10);
            temp_r6_2 = (var_sb >> 0x10) - (temp_r6 >> 0x10);
            sp4C = (s16) (temp_r5_2 + sp44.unk0);
            sp4C.unk2 = (s16) (temp_r6_2 + sp44.unk2);
            sp4C.unk4 = (s16) (temp_r5_2 + sp44.unk4);
            sp4C.unk6 = (s16) (temp_r6_2 + sp44.unk6);
            if (((func_080AC070(&sp0) ^ 1) << 0x18) != 0) {
                goto block_49;
            }
            if (temp_r5_2 > 0) {
                func_0802536C(arg0, 3, temp_r5_2);
            } else if (temp_r5_2 < 0) {
                func_0802536C(arg0, 2, 0 - temp_r5_2);
            } else if (temp_r6_2 > 0) {
                func_0802536C(arg0, 0, temp_r6_2);
            } else if (temp_r6_2 < 0) {
                func_0802536C(arg0, 1, 0 - temp_r6_2);
            }
        }
    } else {
block_49:
        arg0->unk8 = var_r8;
        arg0->unkC = var_sb;
    }
    if ((((void (*)(void *,...))(arg0->unk14->unk40))(arg0) << 0x18) != 0) {
        temp_r0_14 = (*sp54)->unk40(sp54, 0x2C);
        temp_r0_14->unk8 = (s32) arg0->unk8;
        temp_r0_14->unkC = (s32) arg0->unkC;
    }
}

