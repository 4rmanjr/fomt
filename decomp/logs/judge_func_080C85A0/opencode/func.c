#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 free();                                           /* extern */
s32 func_0800050C(s32);                               /* extern */
s16 func_08000540(s32, s32);                        /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008E64(s32 **, s32, s32);                    /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_08008F0C(s32 *, ? *, s32, u16);                /* extern */
s32 func_0804E5AC(s32, ? *, s32, s32);                /* extern */
s32 func_0804E7A0(s32, ? *, s32);                     /* extern */
s32 func_0804E958(s32, ? *, s32, s32);                /* extern */
s32 func_0804E9F4(s32, s32, s32, s32);                /* extern */
s32 func_08050D5C(void *);                            /* extern */
s32 func_08051320(s32, s32, s32, s32);                /* extern */
s32 func_08075B00(s32, s32, s32, s16 *);            /* extern */
s32 func_08075DEC(s32, s32);                          /* extern */
s32 func_080C8550(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? **gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern ? **gUnk_080F9F78;
extern u16 gUnk_081177F6;
extern ? gUnk_0811780C;
extern ? gUnk_08752F8C;
extern ? gUnk_0875300C;

void func_080C85A0(void *arg0) {
    ? *sp0;
    s32 sp4;
    s32 sp8;
    s16 spC;
s32 sp14;
s32 sp54;
s32 spC4;
    s16 spC8;
    s16 spCC;
    u32 spD0;
    u32 spD4;
    u32 spD8;
    u32 spDC;
    u32 spE0;
    u32 spE4;
    u32 spE8;
    u32 spEC;
    u32 spF0;
    u32 spF4;
    u32 spF8;
    u32 spFC;
    ? **sp100;
    ? **sp104;
    ? **sp108;
    ? **sp10C;
    ? **sp110;
    s32 sp114;
    void *sp118;
    ? **sp11C;
    s16 *sp120;
    s32 *sp124;
    s32 *sp128;
    s32 *sp12C;
    ? **sp130;
    s32 *sp134;
    void *sp138;
    void *sp13C;
    void *sp140;
    ? **temp_r0_7;
    ? **temp_r1;
    ? *temp_r5;
    ? *temp_r5_3;
    ? *temp_r5_4;
    s16 *temp_r0;
    s16 *temp_r0_17;
    s16 *temp_r0_18;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r2;
    s16 *temp_r3;
    s32 temp_r0_11;
    s32 temp_r0_14;
    s32 temp_r0_16;
    s32 temp_r0_20;
    s32 temp_r0_23;
    s32 temp_r0_26;
    s32 temp_r0_8;
    s32 temp_r2_10;
    s32 temp_r2_12;
    s32 temp_r2_3;
    s32 temp_r2_5;
    s32 temp_r2_7;
    s32 temp_r2_8;
    s32 temp_r4;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_2;
    s32 var_r1_4;
    s32 var_r5;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    s32 var_sb_6;
    s32 var_sl;
    u16 *var_r4;
    u16 var_r3_4;
    u16 var_r3_6;
    u16 var_r3_8;
    u32 *var_r0;
    u32 *var_r0_11;
    u32 *var_r0_3;
    u32 *var_r0_5;
    u32 *var_r0_7;
    u32 *var_r0_9;
    u32 temp_r1_11;
    u32 var_r3_10;
    u32 var_r8;
    u32 var_r8_2;
    u32 var_r8_3;
    u32 var_r8_4;
    u32 var_r8_5;
    void **temp_r1_5;
    void **temp_r1_7;
    void **temp_r1_9;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_15;
    void *temp_r0_19;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_24;
    void *temp_r0_25;
    void *temp_r0_27;
    void *temp_r0_9;
    void *temp_r1_10;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r2_11;
    void *temp_r2_13;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_9;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_14;
    void *temp_r4_17;
    void *temp_r4_3;
    void *temp_r4_6;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r2;
    void *var_r2_10;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;
    void *var_r3_5;
    void *var_r3_7;
    void *var_r3_9;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;

    temp_r0 = func_08008918();
    spC = 0x1C40;
    temp_r0->unk8 = 0x1C40;
    temp_r0_2 = func_08008918(arg0);
    spC = 0x1D42;
    temp_r0_2->unkA = 0x1D42;
    temp_r0_3 = func_08008918(arg0);
    spC = 0x3E41;
    temp_r0_3->unkC = 0x3E41;
    temp_r0_4 = func_08008918(arg0);
    spC = 0x1F40;
    temp_r0_4->unkE = 0x1F40;
    func_08008EB8(-1, 0x0600E800, 0x800);
    func_08008EB8(-1, 0x0600F000, 0x800);
    func_08008EB8(-1, 0x0600F800, 0x800);
    func_08008EB8(0, 0x06000000, 0x8000);
    temp_r0_5 = func_08008918(arg0);
    spC = 0x1E40;
    *temp_r0_5 = 0x1E40;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, 0x0600F000, 0x800);
    sp0 = (s32 *)3;
    sp4 = 0;
    sp8 = 0;
    func_08051320(0x0600F000, 0, 0, 0x1E);
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    func_08008EB8(0x03FF03FF, 0x0600E800, 0x800);
    temp_r0_6 = func_08008918(arg0);
    spC = 0x1EB;
    temp_r0_6->unk1E = 0x1EB;
    var_sl = 0;
    temp_r0_7 = &sp0 + 0x14;
    sp130 = temp_r0_7;
    temp_r1 = &sp0 + 0xC8;
    sp11C = temp_r1;
    temp_r2 = &spC + 0xC0;
    sp120 = temp_r2;
    sp100 = &sp0 + 0x54;
    sp104 = &sp0 + 0x64;
    sp108 = &sp0 + 0x74;
    sp10C = &sp0 + 0x84;
    sp110 = temp_r0_7 + 0x80;
    sp114 = temp_r1 - 0x24;
    sp118 = temp_r2 - 0x18;
    var_r5 = 0x06001400;
    var_r4 = &gUnk_081177F6;
    do {
        spC4.unk0 = 1;
        spC4.unk2 = 2;
        sp0 = (s32 *) *var_r4;
        sp4 = 0;
        sp8 = 1;
        func_0804E5AC((s32) spC4.unk0, &sp14, 0, 0);
        func_08008E64(sp130, var_r5, 0x40);
        var_r5 += 0x40;
        var_r4 += 2;
        var_sl += 1;
    } while (var_sl <= 9);
    func_08050D5C(arg0 + 0x348);
    spC8 = 2;
    sp11C->unk2 = 2;
    temp_r5 = arg0 + 0x454;
    func_0804E7A0((s32) spC8, temp_r5, 0);
    spCC = 2;
    sp120->unk2 = 2;
    sp0 = &gUnk_0811780C;
    sp4 = 0;
    sp8 = 1;
    func_0804E958((s32) spCC, temp_r5, 0, 0);
    sp138 = func_08008910(arg0);
    func_08008F0C(&sp54, temp_r5, 0x06000400, 0x80U);
    temp_r1_2 = sp138->unk4;
    if (temp_r1_2 != sp138->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32 *) sp100->unk0;
            temp_r1_2->unk4 = (s32) sp100->unk4;
            temp_r1_2->unk8 = (s32) sp100->unk8;
            temp_r1_2->unkC = (s32) sp100->unkC;
        }
        sp138->unk4 = (void *) (sp138->unk4 + 0x10);
        sp134 = arg0 + 0x1C;
        sp12C = arg0 + 0x650;
        sp124 = arg0 + 0x56C;
        sp128 = arg0 + 0x5DC;
    } else {
        spD4 = 1;
        temp_r4 = (s32) (temp_r1_2 - sp138->unk0) >> 4;
        var_r0 = &spD0;
        *var_r0 = (u32) temp_r4;
        if ((u32) temp_r4 < (u32) spD4) {
            var_r0 = &spD4;
        }
        temp_r0_8 = temp_r4 + *var_r0;
        if (temp_r0_8 != 0) {
            temp_r4_2 = temp_r0_8 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_sb = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        sp13C = var_r0_2;
        var_r2 = sp138->unk0;
        var_r3 = sp13C;
        sp134 = arg0 + 0x1C;
        sp12C = arg0 + 0x650;
        sp124 = arg0 + 0x56C;
        sp128 = arg0 + 0x5DC;
        if (var_r2 != temp_r1_2) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != temp_r1_2);
        }
        if (spD4 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32 *) sp100->unk0;
                var_r3->unk4 = (s32) sp100->unk4;
                var_r3->unk8 = (s32) sp100->unk8;
                var_r3->unkC = (s32) sp100->unkC;
            }
            var_r5_2 = var_r3 + 0x10;
        } else {
            var_r8 = spD4;
            var_r2_2 = var_r3;
            if (spD4 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32 *) sp100->unk0;
                        var_r2_2->unk4 = (s32) sp100->unk4;
                        var_r2_2->unk8 = (s32) sp100->unk8;
                        var_r2_2->unkC = (s32) sp100->unkC;
                    }
                    var_r8 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r8 != 0);
            }
            var_r5_2 = var_r2_2;
        }
        temp_r2_2 = sp138->unk4;
        temp_r0_9 = sp138->unk0;
        var_r1 = temp_r0_9;
        if (temp_r0_9 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_9 != 0) {
            free();
        }
        sp138->unk0 = sp13C;
        sp138->unk4 = var_r5_2;
        sp138->unkC = (void *) (sp13C + var_sb);
    }
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(0x0600FFB4, 0x20, 2, 2);
    func_080C8550(arg0);
    temp_r4_3 = func_08008910(arg0);
    temp_r0_10 = arg0 + 0x354;
    temp_r2_3 = func_08007D4C(temp_r0_10, temp_r0_10->unk4);
    sp138 = temp_r4_3;
    func_08008F0C(&sp54, &gUnk_08752F8C, (temp_r2_3 << 5) + 0x06010000, 0x80U);
    temp_r1_3 = sp138->unk4;
    if (temp_r1_3 != sp138->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32 *) sp100->unk0;
            temp_r1_3->unk4 = (s32) sp100->unk4;
            temp_r1_3->unk8 = (s32) sp100->unk8;
            temp_r1_3->unkC = (s32) sp100->unkC;
        }
        sp138->unk4 = (void *) (sp138->unk4 + 0x10);
    } else {
        spDC = 1;
        temp_r4_4 = (s32) (temp_r1_3 - sp138->unk0) >> 4;
        var_r0_3 = &spD8;
        *var_r0_3 = (u32) temp_r4_4;
        if ((u32) temp_r4_4 < (u32) spDC) {
            var_r0_3 = &spDC;
        }
        temp_r0_11 = temp_r4_4 + *var_r0_3;
        if (temp_r0_11 != 0) {
            temp_r4_5 = temp_r0_11 * 0x10;
            var_r0_4 = malloc(temp_r4_5);
            var_sb_2 = temp_r4_5;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_4 = 0;
            var_sb_2 = 0;
        }
        sp13C = var_r0_4;
        var_r2_3 = sp138->unk0;
        var_r3_2 = var_r0_4;
        if (var_r2_3 != temp_r1_3) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2_3->unk0;
                    var_r3_2->unk4 = (s32) var_r2_3->unk4;
                    var_r3_2->unk8 = (s32) var_r2_3->unk8;
                    var_r3_2->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2_3 != temp_r1_3);
        }
        if (spDC == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32 *) sp100->unk0;
                var_r3_2->unk4 = (s32) sp100->unk4;
                var_r3_2->unk8 = (s32) sp100->unk8;
                var_r3_2->unkC = (s32) sp100->unkC;
            }
            var_r5_3 = var_r3_2 + 0x10;
        } else {
            var_r8_2 = spDC;
            var_r2_4 = var_r3_2;
            if (spDC != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32 *) sp100->unk0;
                        var_r2_4->unk4 = (s32) sp100->unk4;
                        var_r2_4->unk8 = (s32) sp100->unk8;
                        var_r2_4->unkC = (s32) sp100->unkC;
                    }
                    var_r8_2 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r8_2 != 0);
            }
            var_r5_3 = var_r2_4;
        }
        temp_r2_4 = sp138->unk4;
        temp_r0_12 = sp138->unk0;
        var_r1_2 = temp_r0_12;
        if (temp_r0_12 != temp_r2_4) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_4);
        }
        if (temp_r0_12 != 0) {
            free();
        }
        sp138->unk0 = sp13C;
        sp138->unk4 = var_r5_3;
        sp138->unkC = (void *) (sp13C + var_sb_2);
    }
    temp_r4_6 = func_08008910(arg0);
    temp_r0_13 = arg0 + 0x35C;
    temp_r2_5 = func_080074C0(temp_r0_13, temp_r0_13->unk4);
    sp138 = temp_r4_6;
    func_08008F0C(&sp54, &gUnk_0875300C, (temp_r2_5 << 5) + 0x05000200, 0x20U);
    temp_r1_4 = sp138->unk4;
    if (temp_r1_4 != sp138->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32 *) sp100->unk0;
            temp_r1_4->unk4 = (s32) sp100->unk4;
            temp_r1_4->unk8 = (s32) sp100->unk8;
            temp_r1_4->unkC = (s32) sp100->unkC;
        }
        sp138->unk4 = (void *) (sp138->unk4 + 0x10);
    } else {
        spE4 = 1;
        temp_r4_7 = (s32) (temp_r1_4 - sp138->unk0) >> 4;
        var_r0_5 = &spE0;
        *var_r0_5 = (u32) temp_r4_7;
        if ((u32) temp_r4_7 < (u32) spE4) {
            var_r0_5 = &spE4;
        }
        temp_r0_14 = temp_r4_7 + *var_r0_5;
        if (temp_r0_14 != 0) {
            temp_r4_8 = temp_r0_14 * 0x10;
            var_r0_6 = malloc(temp_r4_8);
            var_sb_3 = temp_r4_8;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_sb_3);
            }
        } else {
            var_r0_6 = 0;
            var_sb_3 = 0;
        }
        sp13C = var_r0_6;
        var_r2_5 = sp138->unk0;
        var_r3_3 = var_r0_6;
        if (var_r2_5 != temp_r1_4) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_5->unk0;
                    var_r3_3->unk4 = (s32) var_r2_5->unk4;
                    var_r3_3->unk8 = (s32) var_r2_5->unk8;
                    var_r3_3->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_5 != temp_r1_4);
        }
        if (spE4 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32 *) sp100->unk0;
                var_r3_3->unk4 = (s32) sp100->unk4;
                var_r3_3->unk8 = (s32) sp100->unk8;
                var_r3_3->unkC = (s32) sp100->unkC;
            }
            var_r5_4 = var_r3_3 + 0x10;
        } else {
            var_r8_3 = spE4;
            var_r2_6 = var_r3_3;
            if (spE4 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32 *) sp100->unk0;
                        var_r2_6->unk4 = (s32) sp100->unk4;
                        var_r2_6->unk8 = (s32) sp100->unk8;
                        var_r2_6->unkC = (s32) sp100->unkC;
                    }
                    var_r8_3 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r8_3 != 0);
            }
            var_r5_4 = var_r2_6;
        }
        temp_r2_6 = sp138->unk4;
        temp_r0_15 = sp138->unk0;
        var_r1_3 = temp_r0_15;
        if (temp_r0_15 != temp_r2_6) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_6);
        }
        if (temp_r0_15 != 0) {
            free();
        }
        sp138->unk0 = sp13C;
        sp138->unk4 = var_r5_4;
        sp138->unkC = (void *) (sp13C + var_sb_3);
    }
    temp_r5_2 = __builtin_new(0x4C);
    temp_r4_9 = func_0800894C(arg0);
    temp_r3 = func_08008918(arg0);
    sp0 = (s32 *)0x0600E800;
    temp_r0_16 = func_08075B00(temp_r5_2, 0x64, temp_r4_9, temp_r3);
    temp_r4_10 = arg0->unk1C;
    if ((temp_r0_16 != temp_r4_10) && (temp_r4_10 != 0)) {
        func_08075DEC(temp_r4_10 + 0x28, 2);
        temp_r2_7 = (temp_r4_10 + 0x18)->unk4;
        var_r1_4 = temp_r4_10->unk18;
        if (var_r1_4 != temp_r2_7) {
            do {
                var_r1_4 += 0x40;
            } while (var_r1_4 != temp_r2_7);
        }
        if (temp_r4_10->unk18 != 0) {
            free();
        }
        __builtin_delete(temp_r4_10);
    }
    *sp134 = temp_r0_16;
    temp_r0_17 = func_08008918(arg0);
    temp_r0_17->unk4 = (u16) (temp_r0_17->unk4 | 0x20);
    temp_r0_18 = func_08008918(arg0);
    temp_r0_18->unk4 = (u16) (temp_r0_18->unk4 | 0x1700);
    func_0800050C(4);
    arg0->unk434 = func_08000540(0, 4);
    arg0->unk564 = 0xE8;
    arg0->unk566 = 0x18;
    arg0->unk59C = 0xE8;
    arg0->unk59E = 0x60;
    temp_r1_5 = arg0->unk64C;
    (*temp_r1_5)->unk10(sp104, temp_r1_5, *(*sp12C + ((arg0 + 0x64C)->unkC * 4)));
    temp_r4_11 = func_08008910(arg0);
    temp_r0_19 = arg0 + 0x36C;
    temp_r2_8 = func_080074C0(temp_r0_19, temp_r0_19->unk4);
    var_r3_4 = 0;
    if (sp74 != 0) {
        var_r3_4 = sp108->unk4;
    }
    sp138 = temp_r4_11;
    func_08008F0C(&sp54, sp74, (temp_r2_8 << 5) + 0x05000200, var_r3_4);
    temp_r1_6 = temp_r4_11->unk4;
    if (temp_r1_6 != temp_r4_11->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32 *) sp100->unk0;
            temp_r1_6->unk4 = (s32) sp100->unk4;
            temp_r1_6->unk8 = (s32) sp100->unk8;
            temp_r1_6->unkC = (s32) sp100->unkC;
        }
        sp138->unk4 = (void *) (sp138->unk4 + 0x10);
    } else {
        spEC = 1;
        temp_r4_12 = (s32) (temp_r1_6 - sp138->unk0) >> 4;
        var_r0_7 = &spE8;
        *var_r0_7 = (u32) temp_r4_12;
        if ((u32) temp_r4_12 < (u32) spEC) {
            var_r0_7 = &spEC;
        }
        temp_r0_20 = temp_r4_12 + *var_r0_7;
        if (temp_r0_20 != 0) {
            temp_r4_13 = temp_r0_20 * 0x10;
            var_r0_8 = malloc(temp_r4_13);
            var_sb_4 = temp_r4_13;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_sb_4);
            }
        } else {
            var_r0_8 = 0;
            var_sb_4 = 0;
        }
        sp13C = var_r0_8;
        var_r2_7 = sp138->unk0;
        var_r3_5 = var_r0_8;
        if (var_r2_7 != temp_r1_6) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_7->unk0;
                    var_r3_5->unk4 = (s32) var_r2_7->unk4;
                    var_r3_5->unk8 = (s32) var_r2_7->unk8;
                    var_r3_5->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_7 != temp_r1_6);
        }
        if (spEC == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32 *) sp100->unk0;
                var_r3_5->unk4 = (s32) sp100->unk4;
                var_r3_5->unk8 = (s32) sp100->unk8;
                var_r3_5->unkC = (s32) sp100->unkC;
            }
            var_r5_5 = var_r3_5 + 0x10;
        } else {
            var_r8_4 = spEC;
            var_r2_8 = var_r3_5;
            if (spEC != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32 *) sp100->unk0;
                        var_r2_8->unk4 = (s32) sp100->unk4;
                        var_r2_8->unk8 = (s32) sp100->unk8;
                        var_r2_8->unkC = (s32) sp100->unkC;
                    }
                    var_r8_4 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r8_4 != 0);
            }
            var_r5_5 = var_r2_8;
        }
        temp_r2_9 = sp138->unk4;
        temp_r0_21 = sp138->unk0;
        var_r1_5 = temp_r0_21;
        if (temp_r0_21 != temp_r2_9) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_9);
        }
        if (temp_r0_21 != 0) {
            free();
        }
        sp138->unk0 = sp13C;
        sp138->unk4 = var_r5_5;
        sp138->unkC = (void *) (sp13C + var_sb_4);
    }
    temp_r1_7 = arg0->unk568;
    (*temp_r1_7)->unk10(sp10C, temp_r1_7, *(*sp124 + ((arg0 + 0x568)->unkC * 4)));
    temp_r4_14 = func_08008910(arg0);
    temp_r5_3 = sp110->unk0;
    temp_r0_22 = arg0 + 0x384;
    temp_r2_10 = func_080074C0(temp_r0_22, temp_r0_22->unk4);
    var_r3_6 = 0;
    if (sp110->unk0 != 0) {
        var_r3_6 = sp110->unk4;
    }
    sp138 = temp_r4_14;
    func_08008F0C(&sp54, temp_r5_3, (temp_r2_10 << 5) + 0x05000200, var_r3_6);
    temp_r1_8 = sp138->unk4;
    if (temp_r1_8 != sp138->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32 *) sp100->unk0;
            temp_r1_8->unk4 = (s32) sp100->unk4;
            temp_r1_8->unk8 = (s32) sp100->unk8;
            temp_r1_8->unkC = (s32) sp100->unkC;
        }
        sp138->unk4 = (void *) (sp138->unk4 + 0x10);
    } else {
        spF4 = 1;
        temp_r4_15 = (s32) (temp_r1_8 - sp138->unk0) >> 4;
        var_r0_9 = &spF0;
        *var_r0_9 = (u32) temp_r4_15;
        if ((u32) temp_r4_15 < (u32) spF4) {
            var_r0_9 = &spF4;
        }
        temp_r0_23 = temp_r4_15 + *var_r0_9;
        if (temp_r0_23 != 0) {
            temp_r4_16 = temp_r0_23 * 0x10;
            var_r0_10 = malloc(temp_r4_16);
            var_sb_5 = temp_r4_16;
            if (var_r0_10 == 0) {
                var_r0_10 = func_080D3BC0(var_sb_5);
            }
        } else {
            var_r0_10 = 0;
            var_sb_5 = 0;
        }
        sp13C = var_r0_10;
        var_r2_9 = sp138->unk0;
        var_r3_7 = var_r0_10;
        if (var_r2_9 != temp_r1_8) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_9->unk0;
                    var_r3_7->unk4 = (s32) var_r2_9->unk4;
                    var_r3_7->unk8 = (s32) var_r2_9->unk8;
                    var_r3_7->unkC = (s32) var_r2_9->unkC;
                }
                var_r2_9 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_9 != temp_r1_8);
        }
        if (spF4 == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32 *) sp100->unk0;
                var_r3_7->unk4 = (s32) sp100->unk4;
                var_r3_7->unk8 = (s32) sp100->unk8;
                var_r3_7->unkC = (s32) sp100->unkC;
            }
            var_r5_6 = var_r3_7 + 0x10;
        } else {
            var_r8_5 = spF4;
            var_r2_10 = var_r3_7;
            if (spF4 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32 *) sp100->unk0;
                        var_r2_10->unk4 = (s32) sp100->unk4;
                        var_r2_10->unk8 = (s32) sp100->unk8;
                        var_r2_10->unkC = (s32) sp100->unkC;
                    }
                    var_r8_5 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r8_5 != 0);
            }
            var_r5_6 = var_r2_10;
        }
        temp_r2_11 = sp138->unk4;
        temp_r0_24 = sp138->unk0;
        var_r1_6 = temp_r0_24;
        if (temp_r0_24 != temp_r2_11) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_11);
        }
        if (temp_r0_24 != 0) {
            free();
        }
        sp138->unk0 = sp13C;
        sp138->unk4 = var_r5_6;
        sp138->unkC = (void *) (sp13C + var_sb_5);
    }
    temp_r1_9 = arg0->unk5D8;
    (*temp_r1_9)->unk10(sp114, temp_r1_9, *(*sp128 + ((arg0 + 0x5D8)->unkC * 4)));
    temp_r4_17 = func_08008910(arg0);
    temp_r5_4 = sp118->unk0;
    temp_r0_25 = arg0 + 0x39C;
    temp_r2_12 = func_080074C0(temp_r0_25, temp_r0_25->unk4);
    var_r3_8 = 0;
    if (sp118->unk0 != 0) {
        var_r3_8 = sp118->unk4;
    }
    func_08008F0C(&sp54, temp_r5_4, (temp_r2_12 << 5) + 0x05000200, var_r3_8);
    temp_r1_10 = temp_r4_17->unk4;
    if (temp_r1_10 != temp_r4_17->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32 *) sp100->unk0;
            temp_r1_10->unk4 = (s32) sp100->unk4;
            temp_r1_10->unk8 = (s32) sp100->unk8;
            temp_r1_10->unkC = (s32) sp100->unkC;
        }
        temp_r4_17->unk4 = (void *) (temp_r4_17->unk4 + 0x10);
        return;
    }
    sp140 = temp_r1_10;
    spFC = 1;
    temp_r4_18 = (s32) (sp140 - temp_r4_17->unk0) >> 4;
    var_r0_11 = &spF8;
    *var_r0_11 = (u32) temp_r4_18;
    if ((u32) temp_r4_18 < (u32) spFC) {
        var_r0_11 = &spFC;
    }
    temp_r0_26 = temp_r4_18 + *var_r0_11;
    if (temp_r0_26 != 0) {
        temp_r4_19 = temp_r0_26 * 0x10;
        var_r0_12 = malloc(temp_r4_19);
        var_sb_6 = temp_r4_19;
        if (var_r0_12 == 0) {
            var_r0_12 = func_080D3BC0(var_sb_6);
        }
    } else {
        var_r0_12 = 0;
        var_sb_6 = 0;
    }
    sp13C = var_r0_12;
    var_r2_11 = temp_r4_17->unk0;
    var_r3_9 = var_r0_12;
    if (var_r2_11 != sp140) {
        do {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) var_r2_11->unk0;
                var_r3_9->unk4 = (s32) var_r2_11->unk4;
                var_r3_9->unk8 = (s32) var_r2_11->unk8;
                var_r3_9->unkC = (s32) var_r2_11->unkC;
            }
            var_r2_11 += 0x10;
            var_r3_9 += 0x10;
        } while (var_r2_11 != sp140);
    }
    temp_r1_11 = spFC;
    if (temp_r1_11 == 1) {
        if (var_r3_9 != 0) {
            var_r3_9->unk0 = (s32 *) sp100->unk0;
            var_r3_9->unk4 = (s32) sp100->unk4;
            var_r3_9->unk8 = (s32) sp100->unk8;
            var_r3_9->unkC = (s32) sp100->unkC;
        }
        var_r5_7 = var_r3_9 + 0x10;
    } else {
        var_r3_10 = temp_r1_11;
        var_r2_12 = var_r3_9;
        if (var_r3_10 != 0) {
            do {
                if (var_r2_12 != 0) {
                    var_r2_12->unk0 = (s32 *) sp100->unk0;
                    var_r2_12->unk4 = (s32) sp100->unk4;
                    var_r2_12->unk8 = (s32) sp100->unk8;
                    var_r2_12->unkC = (s32) sp100->unkC;
                }
                var_r3_10 -= 1;
                var_r2_12 += 0x10;
            } while (var_r3_10 != 0);
        }
        var_r5_7 = var_r2_12;
    }
    temp_r2_13 = temp_r4_17->unk4;
    temp_r0_27 = temp_r4_17->unk0;
    var_r1_7 = temp_r0_27;
    if (temp_r0_27 != temp_r2_13) {
        do {
            var_r1_7 += 0x10;
        } while (var_r1_7 != temp_r2_13);
    }
    if (temp_r0_27 != 0) {
        free();
    }
    temp_r4_17->unk0 = sp13C;
    temp_r4_17->unk4 = var_r5_7;
    temp_r4_17->unkC = (void *) (sp13C + var_sb_6);
}

