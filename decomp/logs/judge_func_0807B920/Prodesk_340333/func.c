#include "common.h"
u32 GetAge__C6Animal(s32);                          /* extern */
s32 GetChicken__4CoopUi(s32, s32);                  /* extern */
void *GetDesc__C4Tool(void *);                      /* extern */
void *GetDesc__C7Article(s32 *);                      /* extern */
u8 IsSick__C9Livestock();                           /* extern */
u8 IsUnhappy__C9Livestock(s32);                     /* extern */
s32 __4ToolUi(void *, s32);                           /* extern */
s32 __7ArticleUi(s32 *, s32);                           /* extern */
s32 func_0804EC84(u32, ? *, s32);                     /* extern */
s32 func_080CABEC(void *, void *);                    /* extern */
s32 memcpy(void *, ? *, u32);                         /* extern */
u32 strlen(s32 *, s32);                               /* extern */
extern ? gUnk_080FD964;
extern ? gUnk_080FD988;
extern ? gUnk_080FD9F0;
extern ? gUnk_080FD9FC;
extern ? gUnk_080FDA10;
extern ? gUnk_080FDA20;
extern ? gUnk_080FDA24;
extern ? gUnk_080FDA40;
extern ? gUnk_080FDA48;
extern ? gUnk_080FDA50;
extern ? gUnk_080FDA58;
extern ? gUnk_080FDA60;
extern ? gUnk_080FDA78;

void func_0807B920(void *arg0, s32 arg1) {
    s32 sp0;
s32 sp14;
s32 sp28;
    ? *temp_r4_2;
    ? *temp_r4_3;
    ? *temp_r4_4;
    ? *temp_r4_5;
    ? *temp_r4_7;
    ? *temp_r4_8;
    ? *temp_r4_9;
    ? *temp_r6_12;
    ? *temp_r6_4;
    ? *temp_r6_9;
    ? *var_r4_10;
    ? *var_r7;
    s32 temp_r6_11;
    s32 temp_sl;
    u32 temp_r0_11;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_17;
    u32 temp_r0_18;
    u32 temp_r0_19;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r4_6;
    u32 temp_r5_10;
    u32 temp_r5_11;
    u32 temp_r5_12;
    u32 temp_r5_13;
    u32 temp_r5_14;
    u32 temp_r5_15;
    u32 temp_r5_16;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r5_4;
    u32 temp_r5_5;
    u32 temp_r5_6;
    u32 temp_r5_7;
    u32 temp_r5_8;
    u32 temp_r5_9;
    u32 temp_r6_6;
    u32 var_r3;
    u32 var_r4;
    u32 var_r4_11;
    u32 var_r4_12;
    u32 var_r4_13;
    u32 var_r4_14;
    u32 var_r4_15;
    u32 var_r4_16;
    u32 var_r4_17;
    u32 var_r4_18;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r4_8;
    u32 var_r4_9;
    u32 var_r5;
    u8 temp_r0_10;
    u8 temp_r0_2;
    u8 temp_r1_2;
    u8 temp_r7;
    void *temp_r0;
    void *temp_r1;
    void *temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *temp_r6_10;
    void *temp_r6_13;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_5;
    void *temp_r6_7;
    void *temp_r6_8;
    void *temp_r7_2;
    void *temp_r7_3;
    void *temp_r7_4;
    void *temp_r7_5;
    void *temp_r7_6;
    void *temp_r7_7;
    void *temp_r7_8;
    void *var_r1;

    temp_r0 = (arg1 * 0x14) + &gUnk_080FD988;
    sp0.unk0 = temp_r0->unk0;
    sp0.unk4 = (s32) temp_r0->unk4;
    sp0.unk8 = (s32) temp_r0->unk8;
    temp_r1 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0->unkC;
    temp_r1->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r5 = arg0 + 0x2234;
    var_r4 = strlen(&gUnk_080FD964, temp_r1 + 8);
    if (var_r4 > 0x7FU) {
        var_r4 = 0x7F;
    }
    memcpy(temp_r5, &gUnk_080FD964, var_r4);
    *(temp_r5 + var_r4) = 0;
    switch (sp10) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        __7ArticleUi(&sp28, sp0);
        var_r1 = GetDesc__C7Article(&sp28);
block_8:
        func_080CABEC(arg0, var_r1);
        return;
    case 1:                                         /* switch 1 */
        temp_r4 = &sp0 + 0x29;
        __4ToolUi(temp_r4, sp0);
        var_r1 = GetDesc__C4Tool(temp_r4);
        goto block_8;
    case 2:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
        var_r1 = spC;
        goto block_8;
    case 4:                                         /* switch 1 */
        temp_sl = GetChicken__4CoopUi(arg0->unk8 + 0x410, *(arg0 + 0x6AC + (arg0->unk10 * 8)));
        temp_r0_2 = IsSick__C9Livestock();
        if (temp_r0_2 != 0) {
            temp_r4_2 = arg0 + 0x2234;
            temp_r0_3 = strlen(temp_r4_2);
            temp_r6 = temp_r4_2 + temp_r0_3;
            temp_r5_2 = 0x7F - temp_r0_3;
            if (temp_r5_2 != 0) {
                var_r4_2 = strlen(&gUnk_080FD9F0);
                if (var_r4_2 > temp_r5_2) {
                    var_r4_2 = temp_r5_2;
                }
                memcpy(temp_r6, &gUnk_080FD9F0, var_r4_2);
                *(temp_r6 + var_r4_2) = 0;
            }
        } else {
            temp_r7 = IsUnhappy__C9Livestock(temp_sl);
            if (temp_r7 != 0) {
                temp_r4_3 = arg0 + 0x2234;
                temp_r0_4 = strlen(temp_r4_3);
                temp_r6_2 = temp_r4_3 + temp_r0_4;
                temp_r5_3 = 0x7F - temp_r0_4;
                if (temp_r5_3 != 0) {
                    var_r4_3 = strlen(&gUnk_080FD9FC);
                    if (var_r4_3 > temp_r5_3) {
                        var_r4_3 = temp_r5_3;
                    }
                    memcpy(temp_r6_2, &gUnk_080FD9FC, var_r4_3);
                    *(temp_r6_2 + var_r4_3) = temp_r0_2;
                }
            } else {
                temp_r4_4 = arg0 + 0x2234;
                temp_r0_5 = strlen(temp_r4_4);
                temp_r6_3 = temp_r4_4 + temp_r0_5;
                temp_r5_4 = 0x7F - temp_r0_5;
                if (temp_r5_4 != 0) {
                    var_r4_4 = strlen(&gUnk_080FDA10);
                    if (var_r4_4 > temp_r5_4) {
                        var_r4_4 = temp_r5_4;
                    }
                    memcpy(temp_r6_3, &gUnk_080FDA10, var_r4_4);
                    *(temp_r6_3 + var_r4_4) = temp_r7;
                }
            }
        }
        temp_r0_6 = GetAge__C6Animal(temp_sl) / 120U;
        if ((s32) temp_r0_6 <= 9) {
            temp_r4_5 = arg0 + 0x2234;
            temp_r0_7 = strlen(temp_r4_5);
            temp_r7_2 = temp_r4_5 + temp_r0_7;
            temp_r5_5 = 0x7F - temp_r0_7;
            if (temp_r5_5 != 0) {
                var_r4_5 = strlen(&gUnk_080FDA20);
                if (var_r4_5 > temp_r5_5) {
                    var_r4_5 = temp_r5_5;
                }
                memcpy(temp_r7_2, &gUnk_080FDA20, var_r4_5);
                *(temp_r7_2 + var_r4_5) = 0;
            }
        }
        func_0804EC84(temp_r0_6, &sp14, 0);
        temp_r6_4 = arg0 + 0x2234;
        temp_r0_8 = strlen(temp_r6_4);
        temp_r7_3 = temp_r6_4 + temp_r0_8;
        temp_r5_6 = 0x7F - temp_r0_8;
        if (temp_r5_6 != 0) {
            var_r4_6 = strlen(&sp14);
            if (var_r4_6 > temp_r5_6) {
                var_r4_6 = temp_r5_6;
            }
            memcpy(temp_r7_3, &sp14, var_r4_6);
            *(temp_r7_3 + var_r4_6) = 0;
        }
        temp_r0_9 = strlen(temp_r6_4);
        temp_r6_5 = temp_r6_4 + temp_r0_9;
        temp_r5_7 = 0x7F - temp_r0_9;
        if (temp_r5_7 != 0) {
            var_r4_7 = strlen(&gUnk_080FDA24);
            if (var_r4_7 > temp_r5_7) {
                var_r4_7 = temp_r5_7;
            }
            memcpy(temp_r6_5, &gUnk_080FDA24, var_r4_7);
            *(temp_r6_5 + var_r4_7) = 0;
        }
        temp_r4_6 = GetAge__C6Animal(temp_sl);
        sp0.unk2A = (u8) arg0->unk8->unk11;
        if (temp_r4_6 <= 0x1DU) {
            var_r5 = temp_r4_6;
            var_r4_8 = 0;
        } else {
            var_r5 = temp_r4_6 % 30U;
            var_r4_8 = temp_r4_6 / 30U;
        }
        temp_r0_10 = sp0.unk2A;
        var_r3 = ((u32) (temp_r0_10 << 0x19) >> 0x1B) - (var_r5 - 0x1E);
        if (var_r3 <= 0x1DU) {
            var_r4_8 += 1;
        } else {
            var_r3 -= 0x1E;
        }
        temp_r1_2 = (((-4 & sp0.unk2A) | ((((u32) (temp_r0_10 << 0x1E) >> 0x1E) - var_r4_8) & 3)) & ~0x7C) | ((var_r3 & 0x1F) * 4);
        sp0.unk2A = temp_r1_2;
        temp_r6_6 = (u32) (temp_r1_2 << 0x1E) >> 0x1E;
        switch (temp_r6_6) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_r4_7 = arg0 + 0x2234;
            temp_r0_11 = strlen(temp_r4_7);
            temp_r7_4 = temp_r4_7 + temp_r0_11;
            temp_r5_8 = 0x7F - temp_r0_11;
            if (temp_r5_8 != 0) {
                var_r4_9 = strlen(&gUnk_080FDA40);
                if (var_r4_9 > temp_r5_8) {
                    var_r4_9 = temp_r5_8;
                }
                memcpy(temp_r7_4, &gUnk_080FDA40, var_r4_9);
                *(temp_r7_4 + var_r4_9) = (s8) temp_r6_6;
            }
            break;
        case 1:                                     /* switch 2 */
            var_r4_10 = arg0 + 0x2234;
            var_r7 = &gUnk_080FDA48;
block_56:
            temp_r0_12 = strlen(var_r4_10);
            temp_r6_7 = var_r4_10 + temp_r0_12;
            temp_r5_9 = 0x7F - temp_r0_12;
            if (temp_r5_9 != 0) {
                var_r4_11 = strlen(var_r7);
                if (var_r4_11 > temp_r5_9) {
                    var_r4_11 = temp_r5_9;
                }
                memcpy(temp_r6_7, var_r7, var_r4_11);
                *(temp_r6_7 + var_r4_11) = 0;
            }
            break;
        case 2:                                     /* switch 2 */
            var_r4_10 = arg0 + 0x2234;
            var_r7 = &gUnk_080FDA50;
            goto block_56;
        case 3:                                     /* switch 2 */
            var_r4_10 = arg0 + 0x2234;
            var_r7 = &gUnk_080FDA58;
            goto block_56;
        }
        if ((s32) (((u32) (temp_r1_2 << 0x19) >> 0x1B) + 1) <= 9) {
            temp_r4_8 = arg0 + 0x2234;
            temp_r0_13 = strlen(temp_r4_8);
            temp_r6_8 = temp_r4_8 + temp_r0_13;
            temp_r5_10 = 0x7F - temp_r0_13;
            if (temp_r5_10 != 0) {
                var_r4_12 = strlen(&gUnk_080FDA20);
                if (var_r4_12 > temp_r5_10) {
                    var_r4_12 = temp_r5_10;
                }
                memcpy(temp_r6_8, &gUnk_080FDA20, var_r4_12);
                *(temp_r6_8 + var_r4_12) = 0;
            }
        }
        func_0804EC84(((u32) (temp_r1_2 << 0x19) >> 0x1B) + 1, &sp14, 0);
        temp_r6_9 = arg0 + 0x2234;
        temp_r0_14 = strlen(temp_r6_9);
        temp_r7_5 = temp_r6_9 + temp_r0_14;
        temp_r5_11 = 0x7F - temp_r0_14;
        if (temp_r5_11 != 0) {
            var_r4_13 = strlen(&gUnk_080FDA20);
            if (var_r4_13 > temp_r5_11) {
                var_r4_13 = temp_r5_11;
            }
            memcpy(temp_r7_5, &gUnk_080FDA20, var_r4_13);
            *(temp_r7_5 + var_r4_13) = 0;
        }
        temp_r0_15 = strlen(temp_r6_9);
        temp_r7_6 = temp_r6_9 + temp_r0_15;
        temp_r5_12 = 0x7F - temp_r0_15;
        if (temp_r5_12 != 0) {
            var_r4_14 = strlen(&sp14);
            if (var_r4_14 > temp_r5_12) {
                var_r4_14 = temp_r5_12;
            }
            memcpy(temp_r7_6, &sp14, var_r4_14);
            *(temp_r7_6 + var_r4_14) = 0;
        }
        temp_r0_16 = strlen(temp_r6_9);
        temp_r6_10 = temp_r6_9 + temp_r0_16;
        temp_r5_13 = 0x7F - temp_r0_16;
        if (temp_r5_13 != 0) {
            var_r4_15 = strlen(&gUnk_080FDA60);
            if (var_r4_15 > temp_r5_13) {
                var_r4_15 = temp_r5_13;
            }
            memcpy(temp_r6_10, &gUnk_080FDA60, var_r4_15);
            *(temp_r6_10 + var_r4_15) = 0;
        }
        temp_r6_11 = *(arg0 + 0x6B0 + (arg0->unk10 * 8));
        if (temp_r6_11 <= 0x3E7) {
            temp_r4_9 = arg0 + 0x2234;
            temp_r0_17 = strlen(temp_r4_9);
            temp_r7_7 = temp_r4_9 + temp_r0_17;
            temp_r5_14 = 0x7F - temp_r0_17;
            if (temp_r5_14 != 0) {
                var_r4_16 = strlen(&gUnk_080FDA20);
                if (var_r4_16 > temp_r5_14) {
                    var_r4_16 = temp_r5_14;
                }
                memcpy(temp_r7_7, &gUnk_080FDA20, var_r4_16);
                *(temp_r7_7 + var_r4_16) = 0;
            }
        }
        func_0804EC84((u32) temp_r6_11, &sp14, 0);
        temp_r6_12 = arg0 + 0x2234;
        temp_r0_18 = strlen(temp_r6_12);
        temp_r7_8 = temp_r6_12 + temp_r0_18;
        temp_r5_15 = 0x7F - temp_r0_18;
        if (temp_r5_15 != 0) {
            var_r4_17 = strlen(&sp14);
            if (var_r4_17 > temp_r5_15) {
                var_r4_17 = temp_r5_15;
            }
            memcpy(temp_r7_8, &sp14, var_r4_17);
            *(temp_r7_8 + var_r4_17) = 0;
        }
        temp_r0_19 = strlen(temp_r6_12);
        temp_r6_13 = temp_r6_12 + temp_r0_19;
        temp_r5_16 = 0x7F - temp_r0_19;
        if (temp_r5_16 != 0) {
            var_r4_18 = strlen(&gUnk_080FDA78);
            if (var_r4_18 > temp_r5_16) {
                var_r4_18 = temp_r5_16;
            }
            memcpy(temp_r6_13, &gUnk_080FDA78, var_r4_18);
            *(temp_r6_13 + var_r4_18) = 0;
        }
        func_080CABEC(arg0, arg0 + 0x2234);
        return;
    }
}

