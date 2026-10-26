#include "common.h"
u16 GetIconId__C4Food(s16 *);                       /* extern */
s32 __4FoodUi(s16 *, s32);                            /* extern */
s32 __builtin_delete();                               /* extern */
s32 *__builtin_new(s32);                            /* extern */
s32 func_08008724();                                  /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08009300(s32 *, void *);                     /* extern */
s32 func_0800934C(s32 *, s32, s32, s32);              /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_0800E9E4(void *, s32);                       /* extern */
s32 func_0800EA68(void *, s32);                       /* extern */
s32 func_0800F510(void *, u16);                       /* extern */
s32 func_0804E9F4(s32, s32, s32, s32, s32, s32);      /* extern */
s32 func_0804EDB4(u32, s32, s32, s32, s32);           /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_08050E5C(void *);                            /* extern */
s32 func_0805E6CC(s32 **, ? *);                         /* extern */
s32 func_0805E824(void ***, ? **, s32, s32);          /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_08075C88(void *, s16);                       /* extern */
s32 func_08075E24(void *, s16);                       /* extern */
s32 func_0807EF14(void *, s32);                       /* extern */
s32 func_0809ACC0(void *, u32);                       /* extern */
s32 func_080A0A1C(void *, s32);                       /* extern */
s32 func_080C8550(void *);                            /* extern */
s32 func_080C85A0(void *);                            /* extern */
s32 func_080C9020(void *, s32);                       /* extern */
s32 func_080C96C4(void *);                            /* extern */
s32 func_080CABA0(void *, ? *);                       /* extern */
s32 memcpy(s16 *, s16 *, s32);                        /* extern */
extern ? gUnk_080FE2D8;
extern ? gUnk_080FE3D4;
extern ? gUnk_080FE404;
extern ? gUnk_080FE448;
extern ? gUnk_086678A0;
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E5B80;

void func_0807EF90(void *arg0) {
s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    ? *sp34;
s32 sp64;
    void **sp68;
s32 sp7C;
    s8 sp98;
s32 sp9C;
    s32 spA4;
    s32 spAC;
s32 spB4;
    s16 spBC;
    s16 spC0;
    s32 spE0;
    u32 *spE4;
    void *spE8;
    s32 spEC;
    s32 *spF0;
    s32 *temp_r0_23;
    s32 *temp_r1_7;
    s32 *temp_r1_8;
    s32 *temp_r2;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *temp_r2_6;
    s32 *temp_r2_7;
    s32 *temp_r4_3;
    s32 *temp_r5;
    s32 *var_r1;
    s32 *var_r2;
    s32 *var_r5;
    s32 temp_r0_17;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r3_2;
    s32 temp_r4_2;
    s32 var_r0;
    s32 var_r2_2;
    u16 var_r0_2;
    u16 var_r1_2;
    u32 temp_r0;
    u32 temp_r0_13;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 var_sb;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_18;
    void *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r3;
    void *temp_r4;

    func_08008724();
    func_080C85A0(arg0);
    temp_r0 = arg0->unk2A4;
    if (temp_r0 <= 0x27U) {
        temp_r2 = arg0 + 0x2A4 + ((temp_r0 * 4) + 4);
        if (temp_r2 != 0) {
            *temp_r2 = 0;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    if ((u32) ((u32) (arg0->unk8->unk12 << 0x1B) >> 0x1B) <= 0x11U) {
        temp_r0_2 = arg0->unk2A4;
        if (temp_r0_2 <= 0x27U) {
            temp_r2_2 = arg0 + 0x2A4 + ((temp_r0_2 * 4) + 4);
            if (temp_r2_2 != 0) {
                *temp_r2_2 = 1;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_3 = arg0->unk2A4;
        if (temp_r0_3 <= 0x27U) {
            temp_r2_3 = arg0 + 0x2A4 + ((temp_r0_3 * 4) + 4);
            if (temp_r2_3 != 0) {
                *temp_r2_3 = 2;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_4 = arg0->unk2A4;
        if (temp_r0_4 <= 0x27U) {
            temp_r2_4 = arg0 + 0x2A4 + ((temp_r0_4 * 4) + 4);
            if (temp_r2_4 != 0) {
                *temp_r2_4 = 3;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_5 = arg0->unk2A4;
        if (temp_r0_5 <= 0x27U) {
            temp_r2_5 = arg0 + 0x2A4 + ((temp_r0_5 * 4) + 4);
            if (temp_r2_5 != 0) {
                *temp_r2_5 = 4;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        var_r1 = arg0 + 0x2A4;
        temp_r0_6 = arg0->unk2A4;
        if (temp_r0_6 <= 0x27U) {
            var_r2 = var_r1 + ((temp_r0_6 * 4) + 4);
            if (var_r2 != 0) {
                var_r0 = 5;
                goto block_35;
            }
            goto block_36;
        }
    } else {
        temp_r0_7 = arg0->unk2A4;
        if (temp_r0_7 <= 0x27U) {
            temp_r2_6 = arg0 + 0x2A4 + ((temp_r0_7 * 4) + 4);
            if (temp_r2_6 != 0) {
                *temp_r2_6 = 6;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_8 = arg0->unk2A4;
        if (temp_r0_8 <= 0x27U) {
            temp_r2_7 = arg0 + 0x2A4 + ((temp_r0_8 * 4) + 4);
            if (temp_r2_7 != 0) {
                *temp_r2_7 = 7;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        var_r1 = arg0 + 0x2A4;
        temp_r0_9 = arg0->unk2A4;
        if (temp_r0_9 <= 0x27U) {
            var_r2 = var_r1 + ((temp_r0_9 * 4) + 4);
            if (var_r2 != 0) {
                var_r0 = 8;
block_35:
                *var_r2 = var_r0;
            }
block_36:
            *var_r1 += 1;
        }
    }
    spC = 0x10;
    spE0 = 4;
    func_0805E6CC(&sp34, &gUnk_086678A0);
    sp64.unk0 = 0;
    sp64.unk2 = 0;
    func_0805E824(&sp68, &sp34, 0, 0x100);
    sp7C.unk0 = 0;
    sp7C.unk2 = 0;
    sp7C.unk4 = 0;
    sp7C.unk6 = 0;
    sp7C.unk8 = 0;
    sp7C.unkC = 0;
    sp7C.unk10 = 0;
    sp7C.unk11 = 0;
    sp7C.unk14 = 0;
    sp7C.unk18 = 0;
    sp98 = 0;
    sp9C.unk0 = 0;
    sp9C.unk4 = 0;
    spA4.unk0 = 0;
    spA4.unk4 = 0;
    spAC.unk0 = 0;
    spAC.unk4 = 0;
    spB4.unk0 = 0;
    spB4.unk4 = 0;
    var_sb = 0;
    if ((u32) arg0->unk2A4 <= 0U) {

    } else {
        spE4 = arg0 + 0x2A4;
        var_r5 = arg0 + 0x2A8;
        spE8 = &sp9C - 0x34;
        do {
            sp8.unk0 = (s16) (spE0 * 8);
            temp_r0_10 = (*var_r5 * 0x1C) + &gUnk_080FE2D8;
            temp_r0_11 = temp_r0_10 + 0xC;
            sp18.unk0 = temp_r0_10->unk0;
            sp18.unk4 = (u32) temp_r0_10->unk4;
            sp18.unk8 = (s32) temp_r0_10->unk8;
            temp_r1 = &sp18 + 0xC;
            sp18.unkC = (s32) temp_r0_10->unkC;
            temp_r1->unk4 = (s32) temp_r0_11->unk4;
            temp_r1->unk8 = (s32) temp_r0_11->unk8;
            temp_r1->unkC = (s32) temp_r0_11->unkC;
            if (sp18.unkC == 0) {
                __4FoodUi(&spBC, sp18);
                var_r1_2 = GetIconId__C4Food(&spBC);
            } else {
                var_r1_2 = (u16) sp18;
            }
            func_0805E860(spE8, (s32) var_r1_2);
            (*sp68)->unk10(&spC0, sp68, *(sp6C + (spE8->unkC * 4)));
            memcpy(&spC0, &spC0, 0x20);
            temp_r4 = &spC0 + 0xC;
            sp9C.unk0 = (s32) spC0.unk0;
            sp9C.unk4 = (s32) spC0.unk4;
            sp9C.unk8 = (s32) spC0.unk8;
            temp_r0_12 = &sp9C + 0xC;
            sp9C.unkC = (s32) spC0.unkC;
            temp_r0_12->unk4 = (s32) temp_r4->unk4;
            temp_r0_12->unk8 = (s32) temp_r4->unk8;
            temp_r0_12->unkC = (s32) temp_r4->unkC;
            (temp_r0_12 + 0xC)->unk4 = (s32) (temp_r4 + 0xC)->unk4;
            sp10 = spA4;
            sp14 = spAC;
            temp_r0_13 = arg0->unk20;
            if (temp_r0_13 <= 0x27U) {
                temp_r0_14 = arg0 + 0x20 + ((temp_r0_13 * 0x10) + 4);
                if (temp_r0_14 != 0) {
                    temp_r0_14->unk0 = (s32) sp8.unk0;
                    temp_r0_14->unk4 = (s32) sp8.unk4;
                    temp_r0_14->unk8 = (s32) sp8.unk8;
                    temp_r0_14->unkC = (s32) sp8.unkC;
                }
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
            temp_r4_2 = spE0 << 6;
            func_0804EDB4(sp18.unk4, arg0->unk1C->unk18 + temp_r4_2 + 0x32, 0xA0, 0, 0x20);
            func_0804E9F4(arg0->unk1C->unk18 + temp_r4_2 + 0x34, 0x20, 2, 2, 0, 0x20);
            spE0 += 2;
            var_r5 += 4;
            var_sb += 1;
        } while (var_sb < (u32) *spE4);
    }
    func_08075C88(arg0->unk1C, arg0->unkC);
    func_08075E24(arg0->unk1C, (s16) ((spE0 + 8) * 8));
    func_0807EF14(arg0, arg0->unk10);
    temp_r0_15 = func_08008918(arg0);
    spBC = 0x3F;
    temp_r0_15->unk50 = 0x3F;
    temp_r4_3 = __builtin_new(0x10);
    temp_r1_2 = func_08008918(arg0);
    temp_r4_3->unk0 = 0;
    temp_r4_3->unk4 = 0;
    temp_r4_3->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4_3 + 0xC;
    func_08009300(temp_r5, temp_r1_2);
    spBC = temp_r4_3;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_16 = func_08008940(arg0);
    temp_r0_16->unk8->unk10(temp_r0_16, (s32) spBC);
    spEC = 0;
    spF0 = arg0 + 0x2A4;
loop_49:
    func_080087C8(arg0);
    func_080088B8(arg0);
    temp_r3 = (void *) spBC;
    temp_r1_3 = temp_r3->unk0;
    if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
block_88:
        func_080C96C4(arg0);
        goto loop_49;
    }
    if (spEC == 0) {
        temp_r0_17 = arg0->unk6A4;
        switch (temp_r0_17) {                       /* irregular */
        case 1:
            temp_r1_4 = arg0->unk350;
            if (temp_r1_4 == 3) {
                if (arg0->unk6A8 != 0) {
                    arg0->unk6A4 = temp_r1_4;
                } else {
                    func_08050E5C(arg0 + 0x348);
                    arg0->unk6A4 = spEC;
                    arg0->unk14 = -1;
                }
            }
            break;
        case 2:
            temp_r3_2 = spF0[arg0->unk10].unk4;
            temp_r0_18 = (temp_r3_2 * 0x1C) + &gUnk_080FE2D8;
            temp_r0_19 = temp_r0_18 + 0xC;
            sp18.unk0 = temp_r0_18->unk0;
            sp18.unk4 = (u32) temp_r0_18->unk4;
            sp18.unk8 = (s32) temp_r0_18->unk8;
            temp_r1_5 = &sp18 + 0xC;
            sp18.unkC = (s32) temp_r0_18->unkC;
            temp_r1_5->unk4 = (s32) temp_r0_19->unk4;
            temp_r1_5->unk8 = (s32) temp_r0_19->unk8;
            temp_r1_5->unkC = (s32) temp_r0_19->unkC;
            if (temp_r3_2 != 0) {
                func_080A0A1C(arg0->unk8 + 0x1CD4, 1);
            }
            func_0809ACC0(arg0->unk8 + 0x1AA8, sp18.unk4);
            arg0->unk6A8 = 1U;
            func_080C8550(arg0);
            func_080CABA0(arg0, &gUnk_080FE448);
            func_08050E50(arg0 + 0x348, 0x54);
            arg0->unk6A4 = 1;
            break;
        case 3:
            if (arg0->unk350 == 3) {
                spEC = 1;
                func_08009378(temp_r3 + 0xC, 0x889, 1, 1);
                temp_r0_20 = func_08008940(arg0);
                temp_r0_20->unk8->unk10(temp_r0_20, (s32) spBC);
            }
            break;
        case 0:
            if (arg0->unk14 != arg0->unk10) {
                func_0807EF14(arg0);
            }
            if (arg0->unk6A1 != 0) {
                temp_r0_21 = (spF0[arg0->unk10].unk4 * 0x1C) + &gUnk_080FE2D8;
                temp_r0_22 = temp_r0_21 + 0xC;
                sp18.unk0 = temp_r0_21->unk0;
                sp18.unk4 = (u32) temp_r0_21->unk4;
                sp18.unk8 = (s32) temp_r0_21->unk8;
                temp_r1_6 = &sp18 + 0xC;
                sp18.unkC = (s32) temp_r0_21->unkC;
                temp_r1_6->unk4 = (s32) temp_r0_22->unk4;
                temp_r1_6->unk8 = (s32) temp_r0_22->unk8;
                temp_r1_6->unkC = (s32) temp_r0_22->unkC;
                var_r2_2 = 0;
                if ((u32) arg0->unk8->unk1AA8 >= (u32) sp18.unk4) {
                    var_r2_2 = 1;
                }
                if (var_r2_2 != 0) {
                    arg0->unk6A4 = 2;
                    temp_r0_23 = __builtin_new(0x10);
                    if (temp_r0_23 != arg0->unk6AC) {
                        __builtin_delete();
                    }
                    arg0->unk6AC = temp_r0_23;
                    if (sp18.unkC == 0) {
                        __4FoodUi(&spC0, sp18);
                        var_r0_2 = GetIconId__C4Food(&spC0);
                    } else {
                        var_r0_2 = (u16) sp18;
                    }
                    *temp_r0_23 = (s32) var_r0_2;
                    temp_r1_7 = arg0->unk6AC;
                    temp_r1_7->unk4 = (s32) sp18.unk18;
                    func_0800F510(arg0->unk8 + 0x1C2C, temp_r1_7->unk0);
                    func_0800E9E4(arg0->unk8 + 0x1BD8, sp18.unk10);
                    func_0800EA68(arg0->unk8 + 0x1BD8, sp18.unk14);
                    temp_r1_8 = arg0->unk6AC;
                    temp_r1_8->unk8 = (s32) sp18.unk10;
                    temp_r1_8->unkC = (s32) sp18.unk14;
                } else {
                    func_080CABA0(arg0, &gUnk_080FE3D4);
                    func_08050E50(arg0 + 0x348, 0x55);
                    arg0->unk6A4 = 1;
                }
            } else if (func_080088CC(arg0) & 2) {
                func_080CABA0(arg0, &gUnk_080FE404);
                func_08050E50(arg0 + 0x348, 0x53);
                arg0->unk6A4 = 3;
            }
            arg0->unk14 = (s32) arg0->unk10;
            func_080C9020(arg0, *spF0);
            break;
        }
        goto block_88;
    }
    temp_r3->unk8->unkC(temp_r3, 3);
    sp34 = &vtable_unk_080E5A28;
}

