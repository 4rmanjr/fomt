#include "common.h"
void *GetMapData(u32);                              /* extern */
s32 Unpack(s32 *, s32);                                 /* extern */
s32 func_03000C2C(s32, ? **, s32, s32);               /* extern */
s32 func_08008E64(s32 *, s32, u32);                     /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_0805E6CC(s32 **, ? *);                         /* extern */
s32 func_080AA270(void *, s32, s32);                  /* extern */
s32 func_080AAF10(void *);                          /* extern */
s32 func_080AAF1C(void *);                          /* extern */
u16 func_080AAF28(s32, s32);                        /* extern */
s32 func_080E2B28(void *);                          /* extern */
s32 memcpy(s32 **, ? **, s32);                          /* extern */
extern ? gUnk_08107204;
extern ? gUnk_08107230;
extern ? gUnk_0810725C;
extern ? gUnk_08107288;
extern ? gUnk_081072B4;
extern ? gUnk_081072E0;
extern ? gUnk_0810730C;
extern ? gUnk_086678A0;
extern ? gUnk_08698B00;
extern ? gUnk_08699FF4;
extern ? gUnk_0869B284;
extern ? gUnk_086D6368;
extern ? gUnk_086D6548;
extern ? gUnk_086D74F8;
extern ? gUnk_086EACE4;
extern ? gUnk_086EAD04;
extern ? gUnk_086EAD24;
extern ? gUnk_086EAD44;
extern ? gUnk_08714A30;
extern ? gUnk_08714B60;
extern ? gUnk_08714BEC;
extern ? gUnk_08716F84;
extern ? gUnk_087170B8;
extern ? vtable_unk_080E5A28;

void func_080A95A4(void *arg0, s32 arg1, s32 arg2) {
    ? *sp0;
    ? *sp30;
    s32 sp38;
    ? *sp40;
    s32 sp48;
    ? *sp50;
    u8 sp70;
    s32 sp74;
    u8 sp78;
    s32 sp7C;
    u16 *sp80;
    u16 *sp88;
    u16 *sp90;
    u16 *sp98;
    u16 *spA0;
    u16 *spA8;
    u16 *spB0;
    u16 *spB8;
    u16 *spC0;
    u16 *spC8;
    u16 *spD0;
    s32 spD8;
    void *spDC;
    ? **spE0;
    ? **spE4;
    ? **temp_r2;
    ? **var_r2_2;
    ? **var_r2_3;
    ? *var_r0;
    ? *var_r0_2;
    ? *var_r0_3;
    s32 *temp_r0_11;
    s32 *temp_r4;
    s32 temp_r0;
    s32 temp_r0_15;
    s32 temp_r1_8;
    s32 temp_r1_9;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r5_3;
    s32 var_r6;
    u16 var_r2_10;
    u16 var_r2_11;
    u16 var_r2_12;
    u16 var_r2_13;
    u16 var_r2_14;
    u16 var_r2_15;
    u16 var_r2_16;
    u16 var_r2_17;
    u16 var_r2_4;
    u16 var_r2_5;
    u16 var_r2_6;
    u16 var_r2_7;
    u16 var_r2_8;
    u16 var_r2_9;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 var_r5_2;
    u32 var_r6_2;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r5;
    void *var_r5;
    void *var_r8;

    spD8 = arg1;
    spDC = arg0->unk94 + 0x214C;
    temp_r5 = GetMapData(arg0->unk4);
    var_r6 = func_0800E324(arg0->unk94 + 0x10);
    var_r4 = arg0->unk94->unk8;
    func_0805E6CC(&sp0, &gUnk_086678A0);
    temp_r0 = arg0->unk0;
    if (temp_r0 <= 0x2E) {
        if (temp_r0 < 0x2D) {

        } else {
            var_r6 = 1;
            spD8 = 1;
            var_r4 = 0;
        }
    } else if (temp_r0 != 0x2F) {

    } else {
        var_r6 = 3;
        spD8 = 1;
        var_r4 = 4;
    }
    temp_r0_2 = arg0->unk4;
    if (temp_r0_2 != 0x10) {
        if (temp_r0_2 != 0x11) {
            if (spD8 >= 0) {
                if (spD8 > 2) {
                    if (spD8 != 3) {

                    } else {
                        Unpack(temp_r5->unk8, *(arg0 + 0x1C + (arg2 * 4)));
                    }
                } else {
                    var_r0 = temp_r5->unk4;
                    goto block_36;
                }
            }
        } else {
            if (((u32) (spDC->unk5D << 0x1C) >> 0x1E) == 1) {
                var_r0 = &gUnk_08714BEC;
                goto block_36;
            }
            if (spD8 >= 0) {
                if (spD8 > 2) {
                    if (spD8 != 3) {

                    } else {
                        if (var_r4 == 0) {
                            var_r0 = temp_r5->unk8;
                            var_r2 = arg2 * 4;
                        } else {
                            var_r0 = &gUnk_087170B8;
                            var_r2 = arg2 * 4;
                        }
                        goto block_37;
                    }
                } else {
                    if (var_r4 == 0) {
                        var_r0 = temp_r5->unk4;
                        var_r2 = arg2 * 4;
                    } else {
                        var_r0 = &gUnk_08716F84;
                        goto block_36;
                    }
                    goto block_37;
                }
            }
        }
    } else if (spD8 >= 0) {
        if (spD8 > 2) {
            if (spD8 != 3) {

            } else {
                if (var_r4 == 0) {
                    var_r0 = temp_r5->unk8;
                    var_r2 = arg2 * 4;
                } else {
                    var_r0 = &gUnk_08714B60;
                    var_r2 = arg2 * 4;
                }
                goto block_37;
            }
        } else {
            if (var_r4 == 0) {
                var_r0 = temp_r5->unk4;
                var_r2 = arg2 * 4;
            } else {
                var_r0 = &gUnk_08714A30;
block_36:
                var_r2 = arg2 * 4;
            }
block_37:
            Unpack(var_r0, *(arg0 + 0x1C + var_r2));
        }
    }
    temp_r0_3 = arg0->unk4;
    var_r8 = arg0 + 0x9C;
    switch (temp_r0_3) {                            /* switch 1; irregular */
    case 0x0:                                       /* switch 1 */
        if (spD8 != 3) {
            var_r4_2 = arg2 * 4;
            var_r5 = arg0 + 0x1C;
            func_08008E64(&gUnk_086D6368, *(var_r5 + var_r4_2) + 0x100, 0x60U);
        } else {
            var_r4_2 = arg2 * 4;
            var_r5 = arg0 + 0x1C;
            func_08008E64(&gUnk_086D6548, *(var_r5 + var_r4_2) + 0x100, 0x60U);
        }
        switch (var_r6) {                           /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_r0_2 = &gUnk_08699FF4;
            var_r1 = *(var_r5 + var_r4_2) + 0x160;
block_53:
            func_08008E64(var_r0_2, var_r1, 0x80U);
            break;
        case 1:                                     /* switch 2 */
            var_r0_2 = &gUnk_0869B284;
            var_r1 = *(var_r5 + var_r4_2) + 0x160;
            goto block_53;
        case 2:                                     /* switch 2 */
            func_08008E64(&gUnk_08698B00, *(var_r5 + var_r4_2) + 0x160, 0x80U);
            break;
        }
        var_r8 = arg0 + 0x9C;
        if (spD8 != 3) {

        } else {
            sp70 = (-0x20 & sp70) | 0xA;
            sp70 = (s16) ((0xFFFFFC1F & (u16) sp70) | 0x280);
            sp74 = 0x14A5;
            var_r2_2 = &sp30;
            if (var_r2_2 != &sp50) {
                do {
                    *var_r2_2 = 0x14A5;
                    var_r2_2 += 2;
                } while (var_r2_2 != &sp50);
            }
            var_r6_2 = 9;
            var_r4_3 = *(var_r5 + var_r4_2) + 0x120;
            do {
                func_03000C2C(var_r4_3, &sp30, var_r4_3, (s32) sp70);
                var_r4_3 += 0x20;
                var_r6_2 += 1;
            } while (var_r6_2 < 0xFU);
        }
        break;
    case 0x1:                                       /* switch 1 */
        temp_r4 = arg0 + 0x1C + (arg2 * 4);
        func_08008E64(&gUnk_086D74F8, *temp_r4 + 0x100, 0x60U);
        var_r8 = arg0 + 0x9C;
        if (spD8 != 3) {

        } else {
            sp78 = (-0x20 & sp78) | 0xA;
            sp78 = (s16) ((0xFFFFFC1F & (u16) sp78) | 0x280);
            sp7C = 0x14A5;
            var_r2_3 = &sp30;
            if (var_r2_3 != &sp50) {
                do {
                    *var_r2_3 = 0x14A5;
                    var_r2_3 += 2;
                } while (var_r2_3 != &sp50);
            }
            var_r5_2 = 8;
            var_r4_4 = *temp_r4 + 0x100;
            do {
                func_03000C2C(var_r4_4, &sp30, var_r4_4, (s32) sp78);
                var_r4_4 += 0x20;
                var_r5_2 += 1;
            } while (var_r5_2 < 0xFU);
        }
        break;
    case 0xC:                                       /* switch 1 */
        if (spD8 != 3) {
            switch (var_r6) {                       /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                var_r0_3 = &gUnk_086EACE4;
                goto block_79;
            case 2:                                 /* switch 3 */
                func_08008E64(&gUnk_086EAD24, *(arg0 + 0x1C + (arg2 * 4)) + 0xC0, 0x20U);
                goto block_101;
            }
        } else {
            switch (var_r6) {                       /* switch 4; irregular */
            case 0:                                 /* switch 4 */
                var_r0_3 = &gUnk_086EAD04;
block_79:
                func_08008E64(var_r0_3, *(arg0 + 0x1C + (arg2 * 4)) + 0xC0, 0x20U);
                var_r8 = arg0 + 0x9C;
                break;
            case 2:                                 /* switch 4 */
                func_08008E64(&gUnk_086EAD44, *(arg0 + 0x1C + (arg2 * 4)) + 0xC0, 0x20U);
block_101:
                var_r8 = arg0 + 0x9C;
                break;
            }
        }
        break;
    case 0x33:                                      /* switch 1 */
        sp30 = 0;
        sp30.unk4 = 0;
        sp38 = 0;
        sp38.unk4 = 0;
        sp40 = 0;
        sp40.unk4 = 0U;
        sp48 = 0;
        sp48.unk4 = 0;
        switch (var_r6) {                           /* switch 5; irregular */
        case 0:                                     /* switch 5 */
            sp0->unkC(&sp80, &sp0, 0x12FU);
            sp0->unk10(&sp50, &sp0, *sp80);
            memcpy(&sp50, &sp50, 0x20);
            temp_r4_2 = &sp50 + 0xC;
            sp30.unk0 = sp50.unk0;
            sp30.unk4 = (s32) sp50.unk4;
            sp30.unk8 = (s32) sp50.unk8;
            temp_r0_4 = &sp30 + 0xC;
            sp30.unkC = (s32) sp50.unkC;
            temp_r0_4->unk4 = (s32) temp_r4_2->unk4;
            temp_r0_4->unk8 = (s32) temp_r4_2->unk8;
            temp_r0_4->unkC = (s32) temp_r4_2->unkC;
            (temp_r0_4 + 0xC)->unk4 = (s32) (temp_r4_2 + 0xC)->unk4;
            var_r2_4 = 0;
            if (sp40 != 0) {
                var_r2_4 = sp40.unk4;
            }
            func_08008E64(sp40, *(arg0 + 0x1C + (arg2 * 4)) + 0x160, (u32) var_r2_4);
block_126:
            var_r8 = arg0 + 0x9C;
            break;
        case 1:                                     /* switch 5 */
            sp0->unkC(&sp88, &sp0, 0x151U);
            sp0->unk10(&sp50, &sp0, *sp88);
            memcpy(&sp50, &sp50, 0x20);
            temp_r4_3 = &sp50 + 0xC;
            sp30.unk0 = sp50.unk0;
            sp30.unk4 = (s32) sp50.unk4;
            sp30.unk8 = (s32) sp50.unk8;
            temp_r0_5 = &sp30 + 0xC;
            sp30.unkC = (s32) sp50.unkC;
            temp_r0_5->unk4 = (s32) temp_r4_3->unk4;
            temp_r0_5->unk8 = (s32) temp_r4_3->unk8;
            temp_r0_5->unkC = (s32) temp_r4_3->unkC;
            (temp_r0_5 + 0xC)->unk4 = (s32) (temp_r4_3 + 0xC)->unk4;
            var_r2_5 = 0;
            if (sp40 != 0) {
                var_r2_5 = sp40.unk4;
            }
            func_08008E64(sp40, *(arg0 + 0x1C + (arg2 * 4)) + 0x160, (u32) var_r2_5);
            goto block_126;
        case 2:                                     /* switch 5 */
            sp0->unkC(&sp90, &sp0, 0x110U);
            sp0->unk10(&sp50, &sp0, *sp90);
            memcpy(&sp50, &sp50, 0x20);
            temp_r4_4 = &sp50 + 0xC;
            sp30.unk0 = sp50.unk0;
            sp30.unk4 = (s32) sp50.unk4;
            sp30.unk8 = (s32) sp50.unk8;
            temp_r0_6 = &sp30 + 0xC;
            sp30.unkC = (s32) sp50.unkC;
            temp_r0_6->unk4 = (s32) temp_r4_4->unk4;
            temp_r0_6->unk8 = (s32) temp_r4_4->unk8;
            temp_r0_6->unkC = (s32) temp_r4_4->unkC;
            (temp_r0_6 + 0xC)->unk4 = (s32) (temp_r4_4 + 0xC)->unk4;
            var_r2_6 = 0;
            if (sp40 != 0) {
                var_r2_6 = sp40.unk4;
            }
            func_08008E64(sp40, *(arg0 + 0x1C + (arg2 * 4)) + 0x160, (u32) var_r2_6);
            goto block_126;
        }
        break;
    case 0x4:                                       /* switch 1 */
    case 0x6:                                       /* switch 1 */
        sp30 = 0;
        sp30.unk4 = 0;
        sp38 = 0;
        sp38.unk4 = 0;
        sp40 = 0;
        sp40.unk4 = 0U;
        sp48 = 0;
        sp48.unk4 = 0;
        switch (var_r6) {                           /* switch 6; irregular */
        case 0:                                     /* switch 6 */
            var_r2_7 = 0x130;
            if (spD8 != 3) {
                var_r2_7 = 0x12F;
            }
            sp0->unkC(&sp98, &sp0, var_r2_7);
            sp0->unk10(&sp50, &sp0, *sp98);
            memcpy(&sp50, &sp50, 0x20);
            temp_r4_5 = &sp50 + 0xC;
            sp30.unk0 = sp50.unk0;
            sp30.unk4 = (s32) sp50.unk4;
            sp30.unk8 = (s32) sp50.unk8;
            temp_r0_7 = &sp30 + 0xC;
            sp30.unkC = (s32) sp50.unkC;
            temp_r0_7->unk4 = (s32) temp_r4_5->unk4;
            temp_r0_7->unk8 = (s32) temp_r4_5->unk8;
            temp_r0_7->unkC = (s32) temp_r4_5->unkC;
            (temp_r0_7 + 0xC)->unk4 = (s32) (temp_r4_5 + 0xC)->unk4;
            var_r2_8 = 0;
            if (sp40 != 0) {
                var_r2_8 = sp40.unk4;
            }
            func_08008E64(sp40, *(arg0 + 0x1C + (arg2 * 4)) + 0x160, (u32) var_r2_8);
            goto block_126;
        case 1:                                     /* switch 6 */
            var_r2_9 = 0x152;
            if (spD8 != 3) {
                var_r2_9 = 0x151;
            }
            sp0->unkC(&spA0, &sp0, var_r2_9);
            sp0->unk10(&sp50, &sp0, *spA0);
            memcpy(&sp50, &sp50, 0x20);
            temp_r4_6 = &sp50 + 0xC;
            sp30.unk0 = sp50.unk0;
            sp30.unk4 = (s32) sp50.unk4;
            sp30.unk8 = (s32) sp50.unk8;
            temp_r0_8 = &sp30 + 0xC;
            sp30.unkC = (s32) sp50.unkC;
            temp_r0_8->unk4 = (s32) temp_r4_6->unk4;
            temp_r0_8->unk8 = (s32) temp_r4_6->unk8;
            temp_r0_8->unkC = (s32) temp_r4_6->unkC;
            (temp_r0_8 + 0xC)->unk4 = (s32) (temp_r4_6 + 0xC)->unk4;
            var_r2_10 = 0;
            if (sp40 != 0) {
                var_r2_10 = sp40.unk4;
            }
            func_08008E64(sp40, *(arg0 + 0x1C + (arg2 * 4)) + 0x160, (u32) var_r2_10);
            goto block_126;
        case 2:                                     /* switch 6 */
            var_r2_11 = 0x111;
            if (spD8 != 3) {
                var_r2_11 = 0x110;
            }
            sp0->unkC(&spA8, &sp0, var_r2_11);
            sp0->unk10(&sp50, &sp0, *spA8);
            memcpy(&sp50, &sp50, 0x20);
            temp_r4_7 = &sp50 + 0xC;
            sp30.unk0 = sp50.unk0;
            sp30.unk4 = (s32) sp50.unk4;
            sp30.unk8 = (s32) sp50.unk8;
            temp_r0_9 = &sp30 + 0xC;
            sp30.unkC = (s32) sp50.unkC;
            temp_r0_9->unk4 = (s32) temp_r4_7->unk4;
            temp_r0_9->unk8 = (s32) temp_r4_7->unk8;
            temp_r0_9->unkC = (s32) temp_r4_7->unkC;
            (temp_r0_9 + 0xC)->unk4 = (s32) (temp_r4_7 + 0xC)->unk4;
            var_r2_12 = 0;
            if (sp40 != 0) {
                var_r2_12 = sp40.unk4;
            }
            func_08008E64(sp40, *(arg0 + 0x1C + (arg2 * 4)) + 0x160, (u32) var_r2_12);
            goto block_126;
        }
        break;
    case 0x2A:                                      /* switch 1 */
    case 0x2B:                                      /* switch 1 */
        sp30 = 0;
        sp30.unk4 = 0;
        sp38 = 0;
        sp38.unk4 = 0;
        temp_r2 = &sp0 + 0x40;
        spE0 = temp_r2;
        sp40 = 0;
        temp_r2->unk4 = 0;
        sp48 = 0;
        sp48.unk4 = 0;
        sp0->unkC(&spB0, &sp0, 0x109U);
        sp0->unk10(&sp50, &sp0, *spB0);
        memcpy(&sp50, &sp50, 0x20);
        temp_r0_10 = &sp50 + 0xC;
        sp30.unk0 = sp50.unk0;
        sp30.unk4 = (s32) sp50.unk4;
        sp30.unk8 = (s32) sp50.unk8;
        temp_r1 = &sp30 + 0xC;
        sp30.unkC = (s32) sp50.unkC;
        temp_r1->unk4 = (s32) temp_r0_10->unk4;
        temp_r1->unk8 = (s32) temp_r0_10->unk8;
        temp_r1->unkC = (s32) temp_r0_10->unkC;
        (temp_r1 + 0xC)->unk4 = (s32) (temp_r0_10 + 0xC)->unk4;
        temp_r0_11 = arg0 + 0x1C + (arg2 * 4);
        var_r2_13 = 0;
        if (sp40 != 0) {
            var_r2_13 = spE0->unk4;
        }
        func_08008E64(sp40, *temp_r0_11 + 0x140, (u32) var_r2_13);
        sp0->unkC(&spB8, &sp0, 0x147U);
        sp0->unk10(&sp50, &sp0, *spB8);
        memcpy(&sp50, &sp50, 0x20);
        temp_r0_12 = &sp50 + 0xC;
        sp30.unk0 = sp50.unk0;
        sp30.unk4 = (s32) sp50.unk4;
        sp30.unk8 = (s32) sp50.unk8;
        temp_r1_2 = &sp30 + 0xC;
        sp30.unkC = (s32) sp50.unkC;
        temp_r1_2->unk4 = (s32) temp_r0_12->unk4;
        temp_r1_2->unk8 = (s32) temp_r0_12->unk8;
        temp_r1_2->unkC = (s32) temp_r0_12->unkC;
        (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0_12 + 0xC)->unk4;
        var_r2_14 = 0;
        if (sp40 != 0) {
            var_r2_14 = spE0->unk4;
        }
        func_08008E64(sp40, *temp_r0_11 + 0x160, (u32) var_r2_14);
        sp0->unkC(&spC0, &sp0, 0x40U);
        sp0->unk10(&sp50, &sp0, *spC0);
        memcpy(&sp50, &sp50, 0x20);
        temp_r0_13 = &sp50 + 0xC;
        sp30.unk0 = sp50.unk0;
        sp30.unk4 = (s32) sp50.unk4;
        sp30.unk8 = (s32) sp50.unk8;
        temp_r1_3 = &sp30 + 0xC;
        sp30.unkC = (s32) sp50.unkC;
        temp_r1_3->unk4 = (s32) temp_r0_13->unk4;
        temp_r1_3->unk8 = (s32) temp_r0_13->unk8;
        temp_r1_3->unkC = (s32) temp_r0_13->unkC;
        (temp_r1_3 + 0xC)->unk4 = (s32) (temp_r0_13 + 0xC)->unk4;
        var_r2_15 = 0;
        if (sp40 != 0) {
            var_r2_15 = spE0->unk4;
        }
        func_08008E64(sp40, *temp_r0_11 + 0x180, (u32) var_r2_15);
        sp0->unkC(&spC8, &sp0, 0x190U);
        sp0->unk10(&sp50, &sp0, *spC8);
        memcpy(&sp50, &sp50, 0x20);
        temp_r0_14 = &sp50 + 0xC;
        sp30.unk0 = sp50.unk0;
        sp30.unk4 = (s32) sp50.unk4;
        sp30.unk8 = (s32) sp50.unk8;
        temp_r1_4 = &sp30 + 0xC;
        sp30.unkC = (s32) sp50.unkC;
        temp_r1_4->unk4 = (s32) temp_r0_14->unk4;
        temp_r1_4->unk8 = (s32) temp_r0_14->unk8;
        temp_r1_4->unkC = (s32) temp_r0_14->unkC;
        (temp_r1_4 + 0xC)->unk4 = (s32) (temp_r0_14 + 0xC)->unk4;
        var_r2_16 = 0;
        if (sp40 != 0) {
            var_r2_16 = spE0->unk4;
        }
        func_08008E64(sp40, *temp_r0_11 + 0x1A0, (u32) var_r2_16);
        goto block_126;
    }
    if (arg0->unk0 != 6) {

    } else {
        if (((u32) (spDC->unk5D << 0x1E) >> 0x1E) == 1) {
            var_r0_4 = 0;
            if (spD8 == 3) {
                var_r0_4 = 4;
            }
            temp_r1_5 = &gUnk_0810725C + 0x20;
            if (*(var_r0_4 + temp_r1_5) != 0) {
                var_r0_5 = 0;
                if (spD8 == 3) {
                    var_r0_5 = 4;
                }
                func_08008E64(*(var_r0_5 + temp_r1_5), *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_0810725C.unk28 - 1) << 5), (u32) (gUnk_0810725C.unk29 << 8) >> 3);
            }
        }
        if ((((u32) (spDC->unk54 << 0x1E) >> 0x1E) == 1) && (gUnk_0810730C.unk20 != 0)) {
            func_08008E64(gUnk_0810730C.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_0810730C.unk28 - 1) << 5), gUnk_0810730C.unk29 << 5);
        }
        if ((((u32) (spDC->unk4E << 0x17) >> 0x1E) == 1) && (gUnk_08107230.unk20 != 0)) {
            func_08008E64(gUnk_08107230.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_08107230.unk28 - 1) << 5), gUnk_08107230.unk29 << 5);
        }
        if ((((u32) (spDC->unk4F << 0x1A) >> 0x1E) == 1) && (gUnk_08107230.unk20 != 0)) {
            func_08008E64(gUnk_08107230.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_08107230.unk28 - 1) << 5), gUnk_08107230.unk29 << 5);
        }
        if (((u32) ((u8) spDC->unk4E << 0x1C) >> 0x1E) == 1) {
            if (gUnk_08107204.unk20 != 0) {
                func_08008E64(gUnk_08107204.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_08107204.unk28 - 1) << 5), gUnk_08107204.unk29 << 5);
            }
            if (gUnk_081072B4.unk20 != 0) {
                func_08008E64(gUnk_081072B4.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_081072B4.unk28 - 1) << 5), gUnk_081072B4.unk29 << 5);
            }
        }
        if ((((u32) (spDC->unk51 << 0x1B) >> 0x1E) == 1) && (gUnk_08107288.unk20 != 0)) {
            func_08008E64(gUnk_08107288.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_08107288.unk28 - 1) << 5), gUnk_08107288.unk29 << 5);
        }
        if ((((u32) (spDC->unk52 << 0x1D) >> 0x1E) == 1) && (gUnk_08107204.unk20 != 0)) {
            func_08008E64(gUnk_08107204.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_08107204.unk28 - 1) << 5), gUnk_08107204.unk29 << 5);
        }
        if (((u32) (spDC->unk55 << 0x1B) >> 0x1E) == 1) {
            if (gUnk_08107204.unk20 != 0) {
                func_08008E64(gUnk_08107204.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_08107204.unk28 - 1) << 5), gUnk_08107204.unk29 << 5);
            }
            if (gUnk_081072B4.unk20 != 0) {
                func_08008E64(gUnk_081072B4.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_081072B4.unk28 - 1) << 5), gUnk_081072B4.unk29 << 5);
            }
        }
        if ((((u32) (spDC->unk56 << 0x1D) >> 0x1E) == 1) && (gUnk_08107204.unk20 != 0)) {
            func_08008E64(gUnk_08107204.unk20, *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_08107204.unk28 - 1) << 5), gUnk_08107204.unk29 << 5);
        }
        if (((u8) spDC->unk4C >> 6) == 1) {
            var_r0_6 = 0;
            if (spD8 == 3) {
                var_r0_6 = 4;
            }
            temp_r1_6 = &gUnk_081072E0 + 0x20;
            if (*(var_r0_6 + temp_r1_6) != 0) {
                var_r0_7 = 0;
                if (spD8 == 3) {
                    var_r0_7 = 4;
                }
                func_08008E64(*(var_r0_7 + temp_r1_6), *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_081072E0.unk28 - 1) << 5), (u32) (gUnk_081072E0.unk29 << 8) >> 3);
            }
            var_r0_8 = 0;
            if (spD8 == 3) {
                var_r0_8 = 4;
            }
            temp_r1_7 = &gUnk_08107230 + 0x20;
            if (*(var_r0_8 + temp_r1_7) != 0) {
                var_r0_9 = 0;
                if (spD8 == 3) {
                    var_r0_9 = 4;
                }
                func_08008E64(*(var_r0_9 + temp_r1_7), *(arg0 + 0x1C + (arg2 * 4)) + ((gUnk_08107230.unk28 - 1) << 5), (u32) (gUnk_08107230.unk29 << 8) >> 3);
            }
        }
    }
    var_r5_3 = func_080AAF10(var_r8);
    temp_r0_15 = func_080AAF1C(var_r8);
    temp_r1_8 = var_r5_3 ^ temp_r0_15;
    if ((s32) ((0 - temp_r1_8) | temp_r1_8) < 0) {
        spE4 = &sp0 + 0x30;
        do {
            var_r1_2 = 0;
            if (spD8 == 3) {
                var_r1_2 = 1;
            }
            sp0->unkC(&spD0, &sp0, func_080AAF28(var_r5_3->unk10, var_r1_2));
            sp0->unk10(spE4, &sp0, *spD0);
            var_r2_17 = 0;
            if (sp40 != 0) {
                var_r2_17 = sp40.unk4;
            }
            func_08008E64(sp40, *(arg0 + 0x1C + (arg2 * 4)) + ((var_r5_3 + 0x14)->unk2 << 5), (u32) var_r2_17);
            var_r5_3 = func_080E2B28((void *) var_r5_3);
            temp_r1_9 = var_r5_3 ^ temp_r0_15;
        } while ((s32) ((0 - temp_r1_9) | temp_r1_9) < 0);
    }
    func_080AA270(arg0, spD8, arg2);
    sp0 = &vtable_unk_080E5A28;
    /* bug: did not emit code for node #99; contents below: */
    var_r8 = arg0 + 0x9C;
}

