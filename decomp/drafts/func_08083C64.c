u16 GetIconId__C7Article(s32 *);                      /* extern */
s32 GetUnk10__C4Farm(s32);                          /* extern */
s32 GetUpgradeLevel__C4Barn(s32);                   /* extern */
s32 GetUpgradeLevel__C4Coop(s32);                   /* extern */
s32 GetUpgradeLevel__C9FarmHouse(s32);              /* extern */
s32 HasBathroom__C9FarmHouse(s32);                  /* extern */
s32 __7ArticleUi(s32 *, s32);                           /* extern */
s32 func_08010E50(s32);                             /* extern */
s32 func_0804E9F4(s32, u32, s32, s32);                /* extern */
s32 func_0804EDB4(s32, s32, s32, s32);                /* extern */
s32 func_0805E6CC(s32 **, s32 *);                         /* extern */
s32 func_0805E824(void ***, s32 **, s32, s32);          /* extern */
s32 func_0805E860(void ***, u16);                     /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
extern s32 gUnk_080FF6A8;
extern s32 gUnk_086678A0;
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
    void *unk1C;
    s32 unk20;
    u8 _pad24[640];
    s32 unk2A4;
} GenObj;
s32 func_08083C64(GenObj *arg0) {
    s32 sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 *sp18;
s32 sp48;
    void **sp4C;
s32 sp60;
    s8 sp7C;
    GenObj *sp80;
    s32 sp88;
    s32 sp90;
s32 sp98;
s32 spA0;
GenObj spB4;
s32 spD4;
    u32 *spD8;
    void *spDC;
    u32 *spE0;
    s32 *var_r0_2;
    s32 *var_r4;
    s32 *temp_r1;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *temp_r2_6;
    s32 *temp_r2_7;
    s32 *temp_r2_8;
    s32 *var_r1;
    s32 *var_r2;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r1_3;
    s32 var_r5;
    s32 var_sb;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_15;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r3;
    u32 var_r8;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_16;
    void *temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *var_r1_2;

    temp_r2 = (GenObj *)((u8 *)arg0 + 0x2A4);
    temp_r0 = arg0->unk2A4 - ((s32) ((temp_r2 + ((arg0->unk2A4 * 4) + 4)) - ((GenObj *)((u8 *)arg0 + 0x2A8))) >> 2);
    arg0->unk2A4 = temp_r0;
    if (temp_r0 <= 0x27U) {
        temp_r1 = temp_r2 + ((temp_r0 * 4) + 4);
        if (temp_r1 != 0) {
            *temp_r1 = 0;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    if (GetUnk10__C4Farm(arg0->unk8 + 0x14) == 0x3E7) {
        temp_r0_2 = arg0->unk2A4;
        if (temp_r0_2 <= 0x27U) {
            temp_r2_2 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_2 * 4) + 4);
            if (temp_r2_2 != 0) {
                *temp_r2_2 = 1;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if (GetUpgradeLevel__C9FarmHouse(arg0->unk8 + 0x1F4) == 0) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0x2A4);
        temp_r0_3 = arg0->unk2A4;
        if (temp_r0_3 <= 0x27U) {
            var_r2 = var_r1 + ((temp_r0_3 * 4) + 4);
            if (var_r2 != 0) {
                var_r0 = 2;
                goto block_21;
            }
            goto block_22;
        }
    } else if (GetUpgradeLevel__C9FarmHouse(arg0->unk8 + 0x1F4) == 1) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0x2A4);
        temp_r0_4 = arg0->unk2A4;
        if (temp_r0_4 <= 0x27U) {
            var_r2 = var_r1 + ((temp_r0_4 * 4) + 4);
            if (var_r2 != 0) {
                var_r0 = 3;
                goto block_21;
            }
            goto block_22;
        }
    } else if ((HasBathroom__C9FarmHouse(arg0->unk8 + 0x1F4) << 0x18) == 0) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0x2A4);
        temp_r0_5 = arg0->unk2A4;
        if (temp_r0_5 <= 0x27U) {
            var_r2 = var_r1 + ((temp_r0_5 * 4) + 4);
            if (var_r2 != 0) {
                var_r0 = 4;
block_21:
                *var_r2 = var_r0;
            }
block_22:
            *var_r1 += 1;
        }
    }
    if (GetUpgradeLevel__C4Coop(arg0->unk8 + 0x410) == 0) {
        temp_r0_6 = arg0->unk2A4;
        if (temp_r0_6 <= 0x27U) {
            temp_r2_3 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_6 * 4) + 4);
            if (temp_r2_3 != 0) {
                *temp_r2_3 = 5;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if (GetUpgradeLevel__C4Barn(arg0->unk8 + 0x5F0) == 0) {
        temp_r0_7 = arg0->unk2A4;
        if (temp_r0_7 <= 0x27U) {
            temp_r2_4 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_7 * 4) + 4);
            if (temp_r2_4 != 0) {
                *temp_r2_4 = 6;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if ((func_08010E50(arg0->unk8) << 0x18) == 0) {
        temp_r0_8 = arg0->unk2A4;
        if (temp_r0_8 <= 0x27U) {
            temp_r2_5 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_8 * 4) + 4);
            if (temp_r2_5 != 0) {
                *temp_r2_5 = 7;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    if (GetUpgradeLevel__C9FarmHouse(arg0->unk8 + 0x1F4) == 2) {
        temp_r0_9 = arg0->unk2A4;
        if (temp_r0_9 <= 0x27U) {
            temp_r2_6 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_9 * 4) + 4);
            if (temp_r2_6 != 0) {
                *temp_r2_6 = 8;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_10 = arg0->unk2A4;
        if (temp_r0_10 <= 0x27U) {
            temp_r2_7 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_10 * 4) + 4);
            if (temp_r2_7 != 0) {
                *temp_r2_7 = 9;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_11 = arg0->unk2A4;
        if (temp_r0_11 <= 0x27U) {
            temp_r2_8 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_11 * 4) + 4);
            if (temp_r2_8 != 0) {
                *temp_r2_8 = 0xA;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    spC = 0x10;
    func_0805E6CC(&sp18, &gUnk_086678A0);
    sp48 = 0;
    sp48.unk2 = 0;
    func_0805E824(&sp4C, &sp18, 0, 0x100);
    sp60 = 0;
    sp60.unk2 = 0;
    sp60.unk4 = 0;
    sp60.unk6 = 0;
    sp60.unk8 = 0;
    sp60.unkC = 0;
    sp60.unk10 = 0;
    sp60.unk11 = 0;
    sp60.unk14 = 0;
    sp60.unk18 = 0;
    sp7C = 0;
    sp80 = 0;
    sp80.unk4 = 0;
    sp88 = 0;
    sp88.unk4 = 0;
    sp90 = 0;
    sp90.unk4 = 0;
    sp98 = 0;
    sp98.unk4 = 0;
    var_sb = 4;
    temp_r5 = (GenObj *)((u8 *)arg0 + 0x20);
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x24);
    temp_r0_12 = temp_r5 + ((arg0->unk20 * 0x10) + 4);
    spDC = temp_r5;
    var_r1_2 = temp_r6;
    if (var_r1_2 != temp_r0_12) {
        do {
            var_r1_2 += 0x10;
        } while (var_r1_2 != temp_r0_12);
    }
    arg0->unk20 = (u32) (arg0->unk20 - ((s32) (temp_r0_12 - temp_r6) >> 4));
    var_r8 = 0;
    if ((u32) arg0->unk2A4 <= 0U) {

    } else {
        spD8 = (GenObj *)((u8 *)arg0 + 0x2A4);
        spE0 = (GenObj *)((u8 *)arg0 + 0x2A8);
        var_r5 = 0x100;
loop_56:
        temp_r3 = *spE0;
        temp_r0_13 = (temp_r3 * 0x14) + &gUnk_080FF6A8;
        spA0 = (s32) temp_r0_13->unk0;
        spA0.unk4 = (s32) temp_r0_13->unk4;
        spA0.unk8 = (s32) temp_r0_13->unk8;
        spA0.unkC = (s32) temp_r0_13->unkC;
        (&(GenObj *)((u8 *)spA0 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_13 + 0xC))->unk4;
        if (temp_r3 <= 1U) {
            sp0 = 0x20;
            func_0804EDB4(spA0.unk4, arg0->unk1C->unk18 + var_r5 + 0x32, 0xA0, 0);
            sp0 = 0;
            sp4 = 0x20;
            func_0804E9F4(arg0->unk1C->unk18 + var_r5 + 0x34, 0x20U, 2, 2);
            if (*spE0 == 0) {
                var_r4 = &spD4;
                var_r0_2 = var_r4;
                var_r1_3 = 0x59;
            } else {
                var_r4 = &sp0 + 0xD5;
                var_r0_2 = var_r4;
                var_r1_3 = 0x5A;
            }
            __7ArticleUi(var_r0_2, var_r1_3);
            func_0805E860(&sp4C, GetIconId__C7Article(var_r4));
            (*sp4C)->unk10(&spB4, sp4C, *((u8 *)sp50 + (sp4C.unkC * 4)));
            memcpy(&spB4, &spB4, 0x20);
            temp_r4 = &(GenObj *)((u8 *)spB4 + 0xC);
            sp80.unk0 = spB4;
            sp80.unk4 = (s32) spB4.unk4;
            sp80.unk8 = (s32) spB4.unk8;
            temp_r0_14 = &(GenObj *)((u8 *)sp80 + 0xC);
            sp80.unkC = (s32) spB4.unkC;
            temp_r0_14->unk4 = (s32) temp_r4->unk4;
            temp_r0_14->unk8 = (s32) temp_r4->unk8;
            temp_r0_14->unkC = (s32) temp_r4->unkC;
            ((GenObj *)((u8 *)temp_r0_14 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r4 + 0xC))->unk4;
            sp8 = (s16) (var_sb * 8);
            sp10 = sp88;
            sp14 = sp90;
            temp_r0_15 = arg0->unk20;
            if (temp_r0_15 <= 0x27U) {
                temp_r0_16 = spDC + ((temp_r0_15 * 0x10) + 4);
                if (temp_r0_16 != 0) {
                    temp_r0_16->unk0 = (s32) sp8;
                    temp_r0_16->unk4 = (s32) sp8.unk4;
                    temp_r0_16->unk8 = (s32) sp8.unk8;
                    temp_r0_16->unkC = (s32) sp8.unkC;
                }
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
        } else {
            sp0 = 0;
            sp4 = 0x20;
            func_0804E9F4(arg0->unk1C->unk18 + var_r5 + 4, (u32) ((temp_r3 * 0x240000) + 0xD00000) >> 0x10, 0x12, 2);
        }
        var_r5 += 0x80;
        var_sb += 2;
        spE0 += 4;
        var_r8 += 1;
        if (var_r8 < (u32) *spD8) {
            goto loop_56;
        }
    }
    sp18 = &vtable_unk_080E5A28;
    return var_sb;
}
