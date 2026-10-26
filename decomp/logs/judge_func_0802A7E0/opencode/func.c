#include "common.h"
s32 CanBeDiscarded__C7Article(s8 *);                /* extern */
s32 GetId__C7Article(s8 *);                         /* extern */
s32 func_0800F190();                                /* extern */
u32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F388(s32);                             /* extern */
s32 func_080AC070(s32 *);                             /* extern */
s32 func_080AC5D0(s32 *, s16, s16);                   /* extern */

s32 func_0802A7E0(void *arg0) {
s32 sp0;
s32 spC;
    s8 sp14;
s32 sp18;
s32 sp20;
s32 sp28;
    void **sp30;
    ? *var_r1_2;
    s16 var_r4;
    s16 var_r7;
    s16 var_sb;
    s16 var_sl;
    s32 temp_r0_4;
    s32 temp_r8;
    s32 var_r1;
    u16 temp_r6;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u8 temp_r0;
    void **temp_r1;

    temp_r8 = arg0->unk38 + 0x54;
    if ((func_0800F190() << 0x18) != 0) {
        goto block_41;
    }
    if ((func_0800F388(temp_r8) << 0x18) != 0) {
        goto block_34;
    }
    var_sb = arg0->unkA;
    var_sl = arg0->unkE;
    var_r4 = var_sb;
    var_r7 = var_sl;
    temp_r0 = arg0->unk20;
    switch (temp_r0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_sl = var_r7 - 0x14;
        var_r7 -= 0x10;
        break;
    case 0:                                         /* switch 1 */
        var_sl = var_r7 + 0x14;
        var_r7 += 0x10;
        break;
    case 2:                                         /* switch 1 */
        var_sb = var_r4 - 0x14;
        var_r4 -= 0x10;
        break;
    case 3:                                         /* switch 1 */
        var_sb = var_r4 + 0x14;
        var_r4 += 0x10;
        break;
    }
    temp_r1 = arg0->unk0;
    sp30 = temp_r1;
    temp_r6 = arg0->unk4;
    (*temp_r1)->unk34(&sp0, temp_r1, temp_r6);
    temp_r0_2 = func_0800F204(temp_r8);
    switch (temp_r0_2) {                            /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        sp14 = func_0800F258(temp_r8);
        if ((CanBeDiscarded__C7Article(&sp14) << 0x18) == 0) {
            goto block_41;
        }
        temp_r0_3 = GetId__C7Article(&sp14) - 0x31;
        switch (temp_r0_3) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            if ((func_080AC5D0(&sp0, var_sb, var_sl) << 0x18) != 0) {
                goto block_34;
            }
        case 1:                                     /* switch 3 */
        case 40:                                    /* switch 3 */
        case 41:                                    /* switch 3 */
            spC.unk0 = (u16) ((0xFFFFFC00 & spC.unk0) | (temp_r6 & 0x3FF));
            spC.unk1 = (u8) ((3 & spC.unk1) | (((u16) var_r4 & 0x3F) * 4));
            spC.unk2 = (u16) ((0xFFFFFC00 & spC.unk2) | (((u32) (var_r4 << 0x10) >> 0x16) & 0x3FF));
            spC.unk3 = (u8) ((3 & spC.unk3) | (((u16) var_r7 & 0x3F) * 4));
            spC.unk4 = (u16) ((0xFFFFFC00 & spC.unk4) | (((u32) (var_r7 << 0x10) >> 0x16) & 0x3FF));
            temp_r0_4 = (*sp30)->unkE8(sp30, &spC, &sp14);
            switch (temp_r0_4) {                    /* switch 4; irregular */
            case 0:                                 /* switch 4 */
                return 1;
            case 2:                                 /* switch 4 */
                if (GetId__C7Article(&sp14) != 0x31) {
                case 0:                             /* switch 2 */
                case 2:                             /* switch 3 */
                case 3:                             /* switch 3 */
                case 5:                             /* switch 3 */
                case 6:                             /* switch 3 */
                case 7:                             /* switch 3 */
                case 8:                             /* switch 3 */
                case 9:                             /* switch 3 */
                case 10:                            /* switch 3 */
                case 11:                            /* switch 3 */
                case 12:                            /* switch 3 */
                case 13:                            /* switch 3 */
                case 14:                            /* switch 3 */
                case 15:                            /* switch 3 */
                case 16:                            /* switch 3 */
                case 17:                            /* switch 3 */
                case 18:                            /* switch 3 */
                case 19:                            /* switch 3 */
                case 20:                            /* switch 3 */
                case 21:                            /* switch 3 */
                case 22:                            /* switch 3 */
                case 23:                            /* switch 3 */
                case 24:                            /* switch 3 */
                case 25:                            /* switch 3 */
                case 26:                            /* switch 3 */
                case 27:                            /* switch 3 */
                case 28:                            /* switch 3 */
                case 29:                            /* switch 3 */
                case 30:                            /* switch 3 */
                case 31:                            /* switch 3 */
                case 32:                            /* switch 3 */
                case 33:                            /* switch 3 */
                case 34:                            /* switch 3 */
                case 35:                            /* switch 3 */
                case 36:                            /* switch 3 */
                case 37:                            /* switch 3 */
                case 38:                            /* switch 3 */
                case 39:                            /* switch 3 */
block_34:
                    return 0;
                }
            case 5:                                 /* switch 2 */
            case 1:                                 /* switch 4 */
block_41:
                return 2;
            }
            break;
        case 4:                                     /* switch 3 */
            return 3;
        }
        break;
    case 2:                                         /* switch 2 */
        var_r1_2 = &sp18;
block_38:
        var_r1_2->unk0 = (s16) (var_r4 - 7);
        var_r1_2->unk2 = (s16) (var_r7 - 4);
        var_r1_2->unk4 = (s16) (var_r4 + 7);
        var_r1_2->unk6 = (s16) (var_r7 + 5);
        var_r1 = 1;
        if ((func_080AC070(&sp0) << 0x18) != 0) {
            var_r1 = 2;
        }
        return var_r1;
    case 3:                                         /* switch 2 */
        var_r1_2 = &sp20;
        goto block_38;
    case 4:                                         /* switch 2 */
        var_r1_2 = &sp28;
        goto block_38;
    }
}

