#include "common.h"
u32 GetId__C4Tool();                                /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_0800E94C(s32);                             /* extern */
s32 func_08025B10(void *);                          /* extern */

void func_0802C984(void *arg0) {
    s32 sp0;
    s8 spC;
    s16 var_r4;
    s16 var_r5;
    s32 *var_r0_4;
    s32 *var_r4_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r0_5;
    s8 *var_r1;
    s8 *var_r1_2;
    s8 var_r0;
    s8 var_r0_2;
    u16 temp_r0_4;
    u32 temp_r0;
    u32 temp_r0_2;
    u8 temp_r0_3;
    u8 var_r0_3;
    void **temp_r7;
    void *temp_r0_5;
    void *temp_r4_3;

    arg0->unk40 = 0;
    (arg0 + 0x40)->unk2 = 0;
    if ((IsEmpty__C9ToolStack(arg0->unk38 + 0x5C) << 0x18) != 0) {
        var_r1 = arg0 + 0x3F;
        var_r0 = 0xF;
        goto block_60;
    }
    temp_r4 = arg0->unk38;
    spC = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
    temp_r0 = GetId__C4Tool();
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0x0:                                       /* switch 1 */
    case 0x1:                                       /* switch 1 */
    case 0x2:                                       /* switch 1 */
    case 0x3:                                       /* switch 1 */
    case 0x4:                                       /* switch 1 */
    case 0x5:                                       /* switch 1 */
    case 0x6:                                       /* switch 1 */
    case 0x7:                                       /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0;
block_49:
        *var_r1_2 = var_r0_2;
        temp_r4_2 = arg0->unk38;
        sp0.unkD = func_0800E550(temp_r4_2, GetTool__C9ToolStack(temp_r4_2 + 0x5C));
        temp_r0_2 = GetId__C4Tool();
        switch (temp_r0_2) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
        case 8:                                     /* switch 3 */
        case 16:                                    /* switch 3 */
        case 24:                                    /* switch 3 */
        case 32:                                    /* switch 3 */
        case 40:                                    /* switch 3 */
            var_r1 = arg0 + 0x41;
            var_r0 = 1;
            break;
        case 1:                                     /* switch 3 */
        case 9:                                     /* switch 3 */
        case 17:                                    /* switch 3 */
        case 25:                                    /* switch 3 */
        case 33:                                    /* switch 3 */
        case 41:                                    /* switch 3 */
            var_r1 = arg0 + 0x41;
            var_r0 = 2;
            break;
        case 2:                                     /* switch 3 */
        case 10:                                    /* switch 3 */
        case 18:                                    /* switch 3 */
        case 26:                                    /* switch 3 */
        case 34:                                    /* switch 3 */
        case 42:                                    /* switch 3 */
            var_r1 = arg0 + 0x41;
            var_r0 = 3;
            break;
        case 3:                                     /* switch 3 */
        case 11:                                    /* switch 3 */
        case 19:                                    /* switch 3 */
        case 27:                                    /* switch 3 */
        case 35:                                    /* switch 3 */
        case 43:                                    /* switch 3 */
            var_r1 = arg0 + 0x41;
            var_r0 = 4;
            break;
        case 4:                                     /* switch 3 */
        case 12:                                    /* switch 3 */
        case 20:                                    /* switch 3 */
        case 28:                                    /* switch 3 */
        case 36:                                    /* switch 3 */
        case 44:                                    /* switch 3 */
            var_r1 = arg0 + 0x41;
            var_r0 = 5;
            break;
        case 5:                                     /* switch 3 */
        case 6:                                     /* switch 3 */
        case 13:                                    /* switch 3 */
        case 14:                                    /* switch 3 */
        case 21:                                    /* switch 3 */
        case 22:                                    /* switch 3 */
        case 29:                                    /* switch 3 */
        case 30:                                    /* switch 3 */
        case 37:                                    /* switch 3 */
        case 38:                                    /* switch 3 */
        case 45:                                    /* switch 3 */
        case 46:                                    /* switch 3 */
            var_r1 = arg0 + 0x41;
            var_r0 = 6;
            break;
        case 7:                                     /* switch 3 */
        case 15:                                    /* switch 3 */
        case 23:                                    /* switch 3 */
        case 31:                                    /* switch 3 */
        case 39:                                    /* switch 3 */
        case 47:                                    /* switch 3 */
            var_r1 = arg0 + 0x41;
            var_r0 = 7;
            break;
        default:                                    /* switch 3 */
            var_r1 = arg0 + 0x41;
            var_r0 = 0;
            break;
        }
block_60:
        *var_r1 = var_r0;
        return;
    case 0x8:                                       /* switch 1 */
    case 0x9:                                       /* switch 1 */
    case 0xA:                                       /* switch 1 */
    case 0xB:                                       /* switch 1 */
    case 0xC:                                       /* switch 1 */
    case 0xD:                                       /* switch 1 */
    case 0xE:                                       /* switch 1 */
    case 0xF:                                       /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 3;
        goto block_49;
    case 0x10:                                      /* switch 1 */
    case 0x11:                                      /* switch 1 */
    case 0x12:                                      /* switch 1 */
    case 0x13:                                      /* switch 1 */
    case 0x14:                                      /* switch 1 */
    case 0x15:                                      /* switch 1 */
    case 0x16:                                      /* switch 1 */
    case 0x17:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 1;
        goto block_49;
    case 0x18:                                      /* switch 1 */
    case 0x19:                                      /* switch 1 */
    case 0x1A:                                      /* switch 1 */
    case 0x1B:                                      /* switch 1 */
    case 0x1C:                                      /* switch 1 */
    case 0x1D:                                      /* switch 1 */
    case 0x1E:                                      /* switch 1 */
    case 0x1F:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 4;
        goto block_49;
    case 0x20:                                      /* switch 1 */
    case 0x21:                                      /* switch 1 */
    case 0x22:                                      /* switch 1 */
    case 0x23:                                      /* switch 1 */
    case 0x24:                                      /* switch 1 */
    case 0x25:                                      /* switch 1 */
    case 0x26:                                      /* switch 1 */
    case 0x27:                                      /* switch 1 */
        var_r5 = arg0->unkA;
        var_r4 = arg0->unkE;
        temp_r0_3 = arg0->unk20;
        switch (temp_r0_3) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_r4 -= 0x10;
            break;
        case 0:                                     /* switch 2 */
            var_r4 += 0x10;
            break;
        case 2:                                     /* switch 2 */
            var_r5 -= 0x10;
            break;
        case 3:                                     /* switch 2 */
            var_r5 += 0x10;
            break;
        }
        temp_r7 = arg0->unk0;
        (*temp_r7)->unk34(&sp0, temp_r7, arg0->unk4);
        temp_r5 = var_r5 >> 3;
        temp_r3 = var_r4 >> 3;
        temp_r0_4 = sp0.unk8;
        if ((sp0 != 0) && ((u32) temp_r5 <= (u32) temp_r0_4) && ((u32) temp_r3 <= (u32) sp0.unkA)) {
            var_r0_3 = (temp_r3 * temp_r0_4) + temp_r5;
            if (sp4 != 0) {
                var_r0_3 = *(sp4 + var_r0_3);
            }
            var_r0_4 = sp0 + (var_r0_3 * 4);
        } else {
            var_r0_4 = 0;
        }
        if ((var_r0_4 != 0) && ((s32) (*var_r0_4 << 0x1E) < 0)) {
            arg0->unk3C = 0x1B;
            (arg0 + 0x3C)->unk3 = 0xF;
            temp_r4_3 = arg0->unk14;
            temp_r4_3->unk64(arg0, -2, func_08025B10(arg0));
            temp_r0_5 = (*temp_r7)->unk14C(temp_r7);
            var_r4_2 = temp_r0_5->unk0;
            temp_r5_2 = temp_r0_5->unk4;
            if (var_r4_2 != temp_r5_2) {
loop_31:
                if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                    var_r4_2 += 4;
                    if (var_r4_2 == temp_r5_2) {
                        goto block_33;
                    }
                    goto loop_31;
                }
                var_r0_5 = *var_r4_2;
            } else {
block_33:
                var_r0_5 = *(temp_r5_2 - 4);
            }
            func_08008B6C(var_r0_5, 0x92);
            return;
        }
        if (func_0800E94C(arg0->unk38) != 0) {
            var_r1_2 = arg0 + 0x3F;
            var_r0_2 = 2;
            goto block_49;
        }
        var_r1 = arg0 + 0x3F;
        var_r0 = 0xF;
        goto block_60;
    case 0x28:                                      /* switch 1 */
    case 0x29:                                      /* switch 1 */
    case 0x2A:                                      /* switch 1 */
    case 0x2B:                                      /* switch 1 */
    case 0x2C:                                      /* switch 1 */
    case 0x2D:                                      /* switch 1 */
    case 0x2E:                                      /* switch 1 */
    case 0x2F:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 5;
        goto block_49;
    case 0x30:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 6;
        goto block_49;
    case 0x31:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 7;
        goto block_49;
    case 0x32:                                      /* switch 1 */
    case 0x33:                                      /* switch 1 */
    case 0x34:                                      /* switch 1 */
    case 0x35:                                      /* switch 1 */
    case 0x36:                                      /* switch 1 */
    case 0x37:                                      /* switch 1 */
    case 0x38:                                      /* switch 1 */
    case 0x39:                                      /* switch 1 */
    case 0x3A:                                      /* switch 1 */
    case 0x3B:                                      /* switch 1 */
    case 0x3C:                                      /* switch 1 */
    case 0x3D:                                      /* switch 1 */
    case 0x3E:                                      /* switch 1 */
    case 0x3F:                                      /* switch 1 */
    case 0x40:                                      /* switch 1 */
    case 0x41:                                      /* switch 1 */
    case 0x42:                                      /* switch 1 */
    case 0x43:                                      /* switch 1 */
    case 0x44:                                      /* switch 1 */
    case 0x45:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 8;
        goto block_49;
    case 0x46:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 9;
        goto block_49;
    case 0x47:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xA;
        goto block_49;
    case 0x48:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xB;
        goto block_49;
    case 0x49:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xC;
        goto block_49;
    case 0x4A:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xD;
        goto block_49;
    case 0x4B:                                      /* switch 1 */
    case 0x4C:                                      /* switch 1 */
    case 0x4D:                                      /* switch 1 */
    case 0x4E:                                      /* switch 1 */
    case 0x4F:                                      /* switch 1 */
    case 0x50:                                      /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xE;
        goto block_49;
    default:                                        /* switch 1 */
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xF;
        goto block_49;
    }
}

