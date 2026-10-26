#include "common.h"
void *GetMapData(s32);                              /* extern */
s32 func_080AAE44(s32 *, void *);                     /* extern */
extern ? gUnk_086DC54C;
extern ? gUnk_086DC57C;
extern ? gUnk_086DCC88;
extern ? gUnk_086DD690;
extern ? gUnk_086DD6B0;
extern ? gUnk_086DD6E0;
extern ? gUnk_086DDDEC;
extern ? gUnk_086DE7F4;
extern ? gUnk_086EACDC;
extern ? gUnk_086EAD64;
extern ? gUnk_086EAD84;
extern ? gUnk_086EAD8C;

void func_080AA9C8(void *arg0, void *arg1, ? arg3) {
    s32 sp0;
    s32 sp4;
s32 sp8;
    u32 spC;
    s32 sp10;
    s32 sp14;
    s8 *sp18;
    ? *var_r0_3;
    ? *var_r0_4;
    ? *var_r8;
    s16 var_r0;
    s16 var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r0_2;
    s32 var_r5;
    u16 *var_r4;
    u32 temp_r2;
    u32 var_r4_2;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r7;
    u32 var_sl;
    u8 *temp_r2_5;
    u8 *temp_r3;
    void *temp_r2_4;
    void *temp_r3_4;

    if (arg1->unk4 != arg0->unk0) {
        return;
    }
    sp0.unk0 = 0xFFFFU;
    sp0.unk2 = 0xFFU;
    var_r5 = 0;
    var_r8 = 0;
    var_sl = 0;
    spC = 0;
    sp10 = 0;
    temp_r2 = arg1->unk0;
    switch (temp_r2) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 7:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
    case 9:                                         /* switch 1 */
    case 10:                                        /* switch 1 */
    case 11:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
    case 13:                                        /* switch 1 */
    case 14:                                        /* switch 1 */
    case 15:                                        /* switch 1 */
    case 16:                                        /* switch 1 */
    case 17:                                        /* switch 1 */
        func_080AAE44(&sp4, arg0 + 0x9C);
        sp0 = sp4;
    default:                                        /* switch 1 */
block_45:
        sp14 = (s32) GetMapData(arg0->unk4)->unk20;
        var_r0 = arg1->unk8;
        if ((s32) var_r0 < 0) {
            var_r0 += 7;
        }
        var_r1 = arg1->unkA;
        if ((s32) var_r1 < 0) {
            var_r1 += 7;
        }
        sp8.unk0 = (s16) (var_r0 >> 3);
        sp8.unk2 = (s16) (var_r1 >> 3);
        if (var_r5 != 0) {
            sp18 = arg0 + 0x29;
            if (var_r8 != 0) {
                var_r7 = 0;
                if (spC > 0U) {
                    do {
                        var_r5_2 = 0;
                        if (var_sl > 0U) {
                            var_r4 = var_r8 + (var_r7 * var_sl * 2);
                            do {
                                temp_r2_2 = sp0.unk8 + var_r5_2 + (sp14 * (sp8.unk2 + var_r7));
                                *(arg0->unk14 + (temp_r2_2 * 2)) = *var_r4;
                                temp_r2_3 = temp_r2_2 * 4;
                                temp_r3 = temp_r2_3 + arg0->unk2C;
                                *temp_r3 |= 1;
                                temp_r2_4 = temp_r2_3 + arg0->unk2C;
                                temp_r2_4->unk2 = (u16) ((1 & temp_r2_4->unk2) | (sp10 * 2));
                                var_r4 += 2;
                                var_r5_2 += 1;
                            } while (var_r5_2 < var_sl);
                        }
                        var_r7 += 1;
                    } while (var_r7 < spC);
                }
            }
        } else {
            var_r5_3 = 0;
            sp18 = arg0 + 0x29;
            do {
                var_r4_2 = 0;
loop_59:
                temp_r3_2 = sp0.unk8 + var_r4_2 + (sp14 * (sp8.unk2 + var_r5_3));
                *(arg0->unk14 + (temp_r3_2 * 2)) = (sp0.unk0 + var_r4_2 + (var_r5_3 * 2)) | ((sp0.unk2 + 1) << 0xC);
                temp_r3_3 = temp_r3_2 * 4;
                temp_r2_5 = temp_r3_3 + arg0->unk2C;
                *temp_r2_5 |= 1;
                temp_r3_4 = temp_r3_3 + arg0->unk2C;
                temp_r3_4->unk2 = (u16) ((1 & temp_r3_4->unk2) | (sp10 * 2));
                var_r4_2 += 1;
                if (var_r4_2 <= 1U) {
                    goto loop_59;
                }
                var_r5_3 += 1;
            } while (var_r5_3 <= 1U);
        }
        *sp18 = 1;
        return;
    case 19:                                        /* switch 1 */
        var_r5 = 1;
        temp_r0 = arg0->unk4;
        switch (temp_r0) {                          /* switch 2; irregular */
        case 14:                                    /* switch 2 */
            var_r8 = &gUnk_086DCC88;
block_11:
            var_sl = 4;
            spC = 4;
            var_r0_2 = 0x3CB;
block_44:
            sp10 = var_r0_2;
            goto block_45;
        case 15:                                    /* switch 2 */
            var_r8 = &gUnk_086DDDEC;
            goto block_11;
        }
        break;
    case 18:                                        /* switch 1 */
        var_r5 = 1;
        temp_r0_2 = arg0->unk4;
        switch (temp_r0_2) {                        /* switch 3; irregular */
        case 14:                                    /* switch 3 */
            var_r8 = &gUnk_086DC57C;
block_24:
            var_sl = 2;
            spC = 2;
            goto block_45;
        case 15:                                    /* switch 3 */
            var_r0_3 = &gUnk_086DD6E0;
block_23:
            var_r8 = var_r0_3;
            goto block_24;
        case 12:                                    /* switch 3 */
            var_r8 = &gUnk_086EACDC;
            goto block_24;
        case 13:                                    /* switch 3 */
            var_r0_3 = &gUnk_086EAD84;
            goto block_23;
        }
        break;
    case 21:                                        /* switch 1 */
        var_r5 = 1;
        temp_r0_3 = arg0->unk4;
        switch (temp_r0_3) {                        /* switch 4; irregular */
        case 14:                                    /* switch 4 */
            var_r8 = &gUnk_086DD690;
block_37:
            var_sl = 4;
            spC = 4;
            sp10 = 0x3CC;
            goto block_45;
        case 15:                                    /* switch 4 */
            var_r0_4 = &gUnk_086DE7F4;
block_36:
            var_r8 = var_r0_4;
            goto block_37;
        case 12:                                    /* switch 4 */
            var_r8 = &gUnk_086EAD64;
            goto block_37;
        case 13:                                    /* switch 4 */
            var_r0_4 = &gUnk_086EAD8C;
            goto block_36;
        }
        break;
    case 20:                                        /* switch 1 */
        var_r5 = 1;
        temp_r0_4 = arg0->unk4;
        switch (temp_r0_4) {                        /* switch 5; irregular */
        case 14:                                    /* switch 5 */
            var_r8 = &gUnk_086DC54C;
block_43:
            var_sl = 6;
            spC = 4;
            var_r0_2 = 0x3C9;
            goto block_44;
        case 15:                                    /* switch 5 */
            var_r8 = &gUnk_086DD6B0;
            goto block_43;
        }
        break;
    }
}

