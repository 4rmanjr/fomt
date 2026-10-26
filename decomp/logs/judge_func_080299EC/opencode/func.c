#include "common.h"
s16 GetIconId__C4Tool(s8 *);                        /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 SetAnim__12AActorEntityUi(void *, u16);           /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0802A588(void *);                            /* extern */
extern ? gUnk_080F0FCC;

void func_080299EC(void *arg0) {
    s8 sp0;
    s8 sp4;
    s16 *var_r7;
    s32 *var_r4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_5;
    s8 *var_r0_4;
    s8 *var_sl;
    s8 var_r1_4;
    u16 var_r1_3;
    u16 var_r5;
    u8 *var_r8;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_6;
    u8 temp_r3;
    u8 temp_r3_2;
    void **temp_r0_5;
    void **temp_r0_7;
    void **temp_r0_8;
    void **temp_r0_9;
    void *temp_r0;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r2;

    arg0->unkA4 = 1;
    func_0802A588(arg0);
    if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
        temp_r0 = (*arg0->unk0)->unk14C();
        var_r4 = temp_r0->unk0;
        temp_r5 = temp_r0->unk4;
        var_r8 = arg0 + 0x3C;
        var_r7 = arg0 + 0x7C;
        var_sl = arg0 + 0xC0;
        if (var_r4 != temp_r5) {
loop_2:
            if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                var_r4 += 4;
                if (var_r4 == temp_r5) {
                    goto block_4;
                }
                goto loop_2;
            }
            var_r0 = *var_r4;
        } else {
block_4:
            var_r0 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0, 0x6A);
        arg0->unk3C = 0x11;
        temp_r3 = arg0->unk20;
        switch (temp_r3) {                          /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            var_r0_2 = arg0 + 0x88;
            var_r1 = 0xFFF60000;
block_15:
            var_r0_2->unk4 = var_r1;
            var_r0_2->unk8 = 0;
            var_r0_2->unk14 = 0xC0000;
            break;
        case 3:                                     /* switch 1 */
            var_r0_2 = arg0 + 0x88;
            var_r1 = 0xA0000;
            goto block_15;
        case 1:                                     /* switch 1 */
            var_r0_3 = arg0 + 0x88;
            var_r1_2 = 0xFFF60000;
            var_r0_3->unk4 = 0;
block_18:
            var_r0_3->unk8 = var_r1_2;
            var_r0_3->unk14 = 0xC0000;
            break;
        case 0:                                     /* switch 1 */
            var_r0_3 = arg0 + 0x88;
            var_r1_2 = 0xA0000;
            var_r0_3->unk4 = (s32) temp_r3;
            goto block_18;
        }
    } else {
        arg0->unk3C = 0;
        var_r8 = arg0 + 0x3C;
        var_r7 = arg0 + 0x7C;
        var_sl = arg0 + 0xC0;
    }
    var_r5 = 0x192;
    *var_r7 = 0xFFFF;
    temp_r0_2 = *var_r8;
    switch ((u32) temp_r0_2) {                      /* switch 2; irregular */
    case 0x0:                                       /* switch 2 */
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            temp_r0_3 = arg0->unk3E;
            switch (temp_r0_3) {                    /* switch 3; irregular */
            case 1:                                 /* switch 3 */
block_107:
                var_r5 = 0x156;
                break;
            case 0:                                 /* switch 3 */
            case 0x30:                              /* switch 2 */
            case 0x32:                              /* switch 2 */
            case 0x38:                              /* switch 2 */
            case 0x39:                              /* switch 2 */
block_103:
                var_r5 = 0x152;
                break;
            case 2:                                 /* switch 3 */
                var_r5 = 0x14E;
                break;
            }
        } else {
            temp_r0_4 = arg0->unk3E;
            switch (temp_r0_4) {                    /* switch 4; irregular */
            case 0:                                 /* switch 4 */
            case 0x19:                              /* switch 2 */
            case 0x1A:                              /* switch 2 */
block_65:
                var_r5 = 0x192;
                break;
            case 1:                                 /* switch 4 */
                var_r1_3 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1_3 = 0x1C6;
                }
block_44:
                var_r5 = var_r1_3;
                break;
            case 2:                                 /* switch 4 */
                var_r1_3 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1_3 = 0x15E;
                }
                goto block_44;
            }
        }
        break;
    case 0x2:                                       /* switch 2 */
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_103;
        }
        temp_r3_2 = arg0->unk3F;
        if (((s32) temp_r3_2 <= 5) && ((s32) temp_r3_2 >= 0)) {
            var_r5 = *((((temp_r3_2 * 7) + arg0->unk40) * 2) + &gUnk_080F0FCC);
            temp_r4 = arg0->unk38;
            sp0 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
            var_r0_4 = &sp0;
block_73:
            *var_r7 = GetIconId__C4Tool(var_r0_4);
        } else {
            goto block_65;
        }
        break;
    case 0x4:                                       /* switch 2 */
        var_r5 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            goto block_103;
        }
        break;
    case 0x1:                                       /* switch 2 */
    case 0x3:                                       /* switch 2 */
    case 0x5:                                       /* switch 2 */
        var_r5 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            var_r5 = 0x152;
        }
        break;
    case 0xD:                                       /* switch 2 */
        var_r5 = 0x136;
        break;
    case 0xB:                                       /* switch 2 */
    case 0xC:                                       /* switch 2 */
    case 0xE:                                       /* switch 2 */
        var_r5 = 0x19E;
        break;
    case 0xF:                                       /* switch 2 */
        var_r5 = 0x4E;
        break;
    case 0x10:                                      /* switch 2 */
        var_r5 = 0x46;
        break;
    case 0x13:                                      /* switch 2 */
        var_r5 = 0x13E;
        break;
    case 0x14:                                      /* switch 2 */
        var_r5 = 0x142;
        break;
    case 0x9:                                       /* switch 2 */
        var_r5 = arg0->unk44;
        temp_r4_2 = arg0->unk38;
        var_r1_4 = func_0800E550(temp_r4_2, GetTool__C9ToolStack(temp_r4_2 + 0x5C));
        var_r0_4 = &sp0 + 1;
block_72:
        *var_r0_4 = var_r1_4;
        goto block_73;
    case 0x1B:                                      /* switch 2 */
        var_r5 = 0x1EA;
        temp_r4_3 = arg0->unk38;
        var_r1_4 = func_0800E550(temp_r4_3, GetTool__C9ToolStack(temp_r4_3 + 0x5C));
        var_r0_4 = &sp0 + 2;
        goto block_72;
    case 0x1C:                                      /* switch 2 */
    case 0x1D:                                      /* switch 2 */
        if (arg0->unk4E == arg0->unk4F) {
            goto block_65;
        }
        var_r5 = 0x182;
        if ((arg0->unk4F - arg0->unk4E) == 1) {
            var_r5 = 0x186;
        }
        temp_r4_4 = arg0->unk38;
        var_r1_4 = func_0800E550(temp_r4_4, GetTool__C9ToolStack(temp_r4_4 + 0x5C));
        var_r0_4 = &sp0 + 3;
        goto block_72;
    case 0x1E:                                      /* switch 2 */
        var_r5 = 0x76;
        temp_r4_5 = arg0->unk38;
        var_r1_4 = func_0800E550(temp_r4_5, GetTool__C9ToolStack(temp_r4_5 + 0x5C));
        var_r0_4 = &sp4;
        goto block_72;
    case 0x1F:                                      /* switch 2 */
        var_r5 = 0x6E;
        temp_r4_6 = arg0->unk38;
        var_r1_4 = func_0800E550(temp_r4_6, GetTool__C9ToolStack(temp_r4_6 + 0x5C));
        var_r0_4 = &sp0 + 5;
        goto block_72;
    case 0x20:                                      /* switch 2 */
        var_r5 = 0x72;
        temp_r4_7 = arg0->unk38;
        var_r1_4 = func_0800E550(temp_r4_7, GetTool__C9ToolStack(temp_r4_7 + 0x5C));
        var_r0_4 = &sp0 + 6;
        goto block_72;
    case 0x16:                                      /* switch 2 */
        var_r5 = 0x1FA;
        break;
    case 0x17:                                      /* switch 2 */
        var_r5 = 0x196;
        break;
    case 0x6:                                       /* switch 2 */
        var_r5 = 0x112;
        break;
    case 0x18:                                      /* switch 2 */
        var_r5 = 0x116;
        break;
    case 0x7:                                       /* switch 2 */
        temp_r0_5 = arg0->unk0;
        var_r2 = (*temp_r0_5)->unk40(temp_r0_5, 0x2C);
        temp_r0_6 = arg0->unk3E;
        switch (temp_r0_6) {                        /* switch 5; irregular */
        case 0:                                     /* switch 5 */
            var_r5 = 0xEA;
            var_r1_5 = 0x77A;
block_99:
            if (var_r2->unk22 != var_r1_5) {
                SetAnim__12AActorEntityUi(var_r2);
            }
            break;
        case 1:                                     /* switch 5 */
            var_r5 = 0xEE;
            var_r1_5 = 0x77E;
            goto block_99;
        case 2:                                     /* switch 5 */
            var_r5 = 0xE6;
            var_r1_5 = 0x782;
            goto block_99;
        }
        break;
    case 0x22:                                      /* switch 2 */
        var_r5 = 0x15A;
        temp_r0_7 = arg0->unk0;
        var_r2 = (*temp_r0_7)->unk40(temp_r0_7, 0x2C);
        var_r1_5 = 0x77A;
        goto block_99;
    case 0x23:                                      /* switch 2 */
        var_r5 = 0x9A;
        temp_r0_8 = arg0->unk0;
        var_r2 = (*temp_r0_8)->unk40(temp_r0_8, 0x2C);
        var_r1_5 = 0x77A;
        goto block_99;
    case 0x24:                                      /* switch 2 */
        var_r5 = 0x106;
        break;
    case 0x25:                                      /* switch 2 */
        var_r5 = 0x102;
        break;
    case 0x26:                                      /* switch 2 */
        var_r5 = 0xFE;
        break;
    case 0x27:                                      /* switch 2 */
        var_r5 = 0xFA;
        break;
    case 0x28:                                      /* switch 2 */
        var_r5 = 0x122;
        break;
    case 0x29:                                      /* switch 2 */
        var_r5 = 0x11E;
        break;
    case 0x2A:                                      /* switch 2 */
    case 0x2B:                                      /* switch 2 */
        var_r5 = 0x11A;
        break;
    case 0x2C:                                      /* switch 2 */
        var_r5 = 0x14A;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
            var_r5 = 0x10A;
        }
        break;
    case 0x2D:                                      /* switch 2 */
        var_r5 = 0xE2;
        temp_r0_9 = arg0->unk0;
        var_r2 = (*temp_r0_9)->unk40(temp_r0_9, 0x2C);
        var_r1_5 = 0x792;
        goto block_99;
    case 0x2E:                                      /* switch 2 */
        var_r5 = 0x3E;
        break;
    case 0x11:                                      /* switch 2 */
    case 0x21:                                      /* switch 2 */
    case 0x31:                                      /* switch 2 */
    case 0x36:                                      /* switch 2 */
    case 0x37:                                      /* switch 2 */
        var_r5 = 0x146;
        break;
    case 0x12:                                      /* switch 2 */
    case 0x33:                                      /* switch 2 */
        var_r5 = 0x13A;
        break;
    case 0xA:                                       /* switch 2 */
    case 0x15:                                      /* switch 2 */
    case 0x2F:                                      /* switch 2 */
    case 0x34:                                      /* switch 2 */
        var_r5 = 0x42;
        break;
    case 0x35:                                      /* switch 2 */
        var_r5 = 0x1C6;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_107;
        }
        break;
    case 0x8:                                       /* switch 2 */
        var_r5 = 0xF6;
        if (arg0->unk3D != 0) {
            var_r5 = 0xF2;
        }
        break;
    }
    SetAnim__12AActorEntityUi(arg0, var_r5);
    *var_sl = 1;
}

