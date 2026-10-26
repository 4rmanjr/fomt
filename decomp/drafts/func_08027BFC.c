s16 GetIconId__C4Tool(s32 *);                         /* extern */
s32 GetPrice__C7Product(void *);                    /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 SetAnim__12AActorEntityUi(void *, u16);           /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s32 func_0800FFD0(s32);                             /* extern */
s32 func_0800FFD4(s32);                             /* extern */
s32 func_0800FFD8(s32);                             /* extern */
s32 func_08010024(s32);                               /* extern */
s8 func_080262C4(void *);                           /* extern */
s32 func_0805E850(void *, s32, s32);                  /* extern */
extern s32 gUnk_080F0FCC;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    s32 unk5;
    s32 unk7;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    struct GenObj *unk14;
    u8 _pad18[8];
    s32 unk20;
    s32 unk22;
    u8 _pad26[14];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk3D;
    s32 unk3E;
    s32 unk3F;
    s32 unk40;
    s32 unk44;
    u8 _pad48[6];
    s32 unk4E;
    s32 unk4F;
    u8 _pad53[41];
    s32 unk7C;
    u8 _pad80[51];
    s32 unkB3;
    u8 _padB7[9];
    s32 unkC0;
    u8 _padC4[4];
    struct GenObj *unkC8;
} GenObj;
s32 func_08027BFC(GenObj *arg0) {
s32 sp0;
    s8 sp4;
    s8 sp8;
    s8 spC;
    s8 *sp10;
    s32 *var_r0_5;
    s16 *temp_r1;
    s32 *var_r4;
    s32 *var_r4_3;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_4;
    s32 var_r0_4;
    s32 var_r1_10;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r4_2;
    s8 *var_r0;
    s8 *var_r0_2;
    s8 *var_r0_3;
    s8 *var_r0_6;
    s8 *var_r0_7;
    s8 var_r1_2;
    s8 var_r1_3;
    s8 var_r1_4;
    s8 var_r1_8;
    s8 var_r1_9;
    u16 var_r1;
    u16 var_r1_7;
    u16 var_r5;
    u16 var_r5_2;
    u8 temp_r0_13;
    u8 temp_r0_14;
    u8 temp_r0_15;
    u8 temp_r0_17;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_6;
    u8 temp_r3;
    u8 temp_r3_2;
    void **temp_r0;
    void **temp_r0_11;
    void **temp_r0_16;
    void **temp_r0_18;
    void **temp_r0_19;
    void **temp_r0_20;
    void **temp_r0_5;
    void **temp_r0_7;
    void **temp_r0_8;
    void **temp_r0_9;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_21;
    void *temp_r4_2;
    GenObj *temp_r5_3;
    GenObj *temp_r7;
    void *var_r2;
    void *var_r2_2;

    temp_r4 = arg0->unk34 + 0x1C2C;
    if ((func_0800F190(temp_r4) << 0x18) != 0) {
        goto block_107;
    }
    if (func_0800F204(temp_r4) != 4) {
block_107:
        temp_r4_2 = &(GenObj *)((u8 *)sp0 + 7);
        sp0.unk7 = func_080262C4(arg0);
        if (GetPrice__C7Product(temp_r4_2) == 0) {
            goto block_108;
        }
        temp_r0 = arg0->unk0;
        (*temp_r0)->unk15C(temp_r0, temp_r4_2);
        arg0->unkC0 = 1;
        arg0->unk3C = 0xEU;
        var_r5 = 0x192;
        temp_r1 = ((GenObj *)((u8 *)arg0 + 0xC0)) - 0x44;
        *temp_r1 = 0xFFFF;
        temp_r0_2 = arg0->unk3C;
        switch ((u32) temp_r0_2) {                  /* switch 5; irregular */
        case 0x0:                                   /* switch 5 */
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                temp_r0_3 = arg0->unk3E;
                switch (temp_r0_3) {                /* switch 6; irregular */
                case 1:                             /* switch 6 */
block_197:
                    var_r5 = 0x156;
                    break;
                case 0:                             /* switch 6 */
                case 0x30:                          /* switch 5 */
                case 0x32:                          /* switch 5 */
                case 0x38:                          /* switch 5 */
                case 0x39:                          /* switch 5 */
block_193:
                    var_r5 = 0x152;
                    break;
                case 2:                             /* switch 6 */
                    var_r5 = 0x14E;
                    break;
                }
            } else {
                temp_r0_4 = arg0->unk3E;
                switch (temp_r0_4) {                /* switch 7; irregular */
                case 0:                             /* switch 7 */
                case 0x19:                          /* switch 5 */
                case 0x1A:                          /* switch 5 */
block_154:
                    var_r5 = 0x192;
                    break;
                case 1:                             /* switch 7 */
                    var_r1 = 0x132;
                    if (arg0->unkB3 == 0) {
                        var_r1 = 0x1C6;
                    }
block_133:
                    var_r5 = var_r1;
                    break;
                case 2:                             /* switch 7 */
                    var_r1 = 0x132;
                    if (arg0->unkB3 == 0) {
                        var_r1 = 0x15E;
                    }
                    goto block_133;
                }
            }
            break;
        case 0x2:                                   /* switch 5 */
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                goto block_193;
            }
            temp_r3 = arg0->unk3F;
            if (((s32) temp_r3 <= 5) && ((s32) temp_r3 >= 0)) {
                var_r5 = *((((temp_r3 * 7) + arg0->unk40) * 2) + &gUnk_080F0FCC);
                temp_r4_3 = arg0->unk38;
                var_r1_2 = func_0800E550(temp_r4_3, GetTool__C9ToolStack(temp_r4_3 + 0x5C));
                var_r0 = &sp8;
block_163:
                *var_r0 = var_r1_2;
                *temp_r1 = GetIconId__C4Tool();
            } else {
                goto block_154;
            }
            break;
        case 0x4:                                   /* switch 5 */
            var_r5 = 0x192;
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

            } else {
                goto block_193;
            }
            break;
        case 0x1:                                   /* switch 5 */
        case 0x3:                                   /* switch 5 */
        case 0x5:                                   /* switch 5 */
            var_r5 = 0x192;
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

            } else {
                var_r5 = 0x152;
            }
            break;
        case 0xD:                                   /* switch 5 */
            var_r5 = 0x136;
            break;
        case 0xB:                                   /* switch 5 */
        case 0xC:                                   /* switch 5 */
        case 0xE:                                   /* switch 5 */
            var_r5 = 0x19E;
            break;
        case 0xF:                                   /* switch 5 */
            var_r5 = 0x4E;
            break;
        case 0x10:                                  /* switch 5 */
            var_r5 = 0x46;
            break;
        case 0x13:                                  /* switch 5 */
            var_r5 = 0x13E;
            break;
        case 0x14:                                  /* switch 5 */
            var_r5 = 0x142;
            break;
        case 0x9:                                   /* switch 5 */
            var_r5 = arg0->unk44;
            temp_r4_4 = arg0->unk38;
            var_r1_3 = func_0800E550(temp_r4_4, GetTool__C9ToolStack(temp_r4_4 + 0x5C));
            var_r0_2 = &(GenObj *)((u8 *)sp0 + 9);
block_159:
            *var_r0_2 = var_r1_3;
            *temp_r1 = GetIconId__C4Tool();
            break;
        case 0x1B:                                  /* switch 5 */
            var_r5 = 0x1EA;
            temp_r4_5 = arg0->unk38;
            var_r1_4 = func_0800E550(temp_r4_5, GetTool__C9ToolStack(temp_r4_5 + 0x5C));
            var_r0_3 = &(GenObj *)((u8 *)sp0 + 0xA);
block_161:
            *var_r0_3 = var_r1_4;
            *temp_r1 = GetIconId__C4Tool();
            break;
        case 0x1C:                                  /* switch 5 */
        case 0x1D:                                  /* switch 5 */
            if (arg0->unk4E == arg0->unk4F) {
                goto block_154;
            }
            var_r5 = 0x182;
            if ((arg0->unk4F - arg0->unk4E) == 1) {
                var_r5 = 0x186;
            }
            temp_r4_6 = arg0->unk38;
            var_r1_2 = func_0800E550(temp_r4_6, GetTool__C9ToolStack(temp_r4_6 + 0x5C));
            var_r0 = &(GenObj *)((u8 *)sp0 + 0xB);
            goto block_163;
        case 0x1E:                                  /* switch 5 */
            var_r5 = 0x76;
            temp_r4_7 = arg0->unk38;
            var_r1_3 = func_0800E550(temp_r4_7, GetTool__C9ToolStack(temp_r4_7 + 0x5C));
            var_r0_2 = &spC;
            goto block_159;
        case 0x1F:                                  /* switch 5 */
            var_r5 = 0x6E;
            temp_r4_8 = arg0->unk38;
            var_r1_4 = func_0800E550(temp_r4_8, GetTool__C9ToolStack(temp_r4_8 + 0x5C));
            var_r0_3 = &(GenObj *)((u8 *)sp0 + 0xD);
            goto block_161;
        case 0x20:                                  /* switch 5 */
            var_r5 = 0x72;
            temp_r4_9 = arg0->unk38;
            var_r1_2 = func_0800E550(temp_r4_9, GetTool__C9ToolStack(temp_r4_9 + 0x5C));
            var_r0 = &(GenObj *)((u8 *)sp0 + 0xE);
            goto block_163;
        case 0x16:                                  /* switch 5 */
            var_r5 = 0x1FA;
            break;
        case 0x17:                                  /* switch 5 */
            var_r5 = 0x196;
            break;
        case 0x6:                                   /* switch 5 */
            var_r5 = 0x112;
            break;
        case 0x18:                                  /* switch 5 */
            var_r5 = 0x116;
            break;
        case 0x7:                                   /* switch 5 */
            temp_r0_5 = arg0->unk0;
            var_r2 = (*temp_r0_5)->unk40(temp_r0_5, 0x2C);
            temp_r0_6 = arg0->unk3E;
            switch (temp_r0_6) {                    /* switch 8; irregular */
            case 0:                                 /* switch 8 */
                var_r5 = 0xEA;
                var_r1_5 = 0x77A;
block_189:
                if (var_r2->unk22 != var_r1_5) {
                    SetAnim__12AActorEntityUi(var_r2);
                }
                break;
            case 1:                                 /* switch 8 */
                var_r5 = 0xEE;
                var_r1_5 = 0x77E;
                goto block_189;
            case 2:                                 /* switch 8 */
                var_r5 = 0xE6;
                var_r1_5 = 0x782;
                goto block_189;
            }
            break;
        case 0x22:                                  /* switch 5 */
            var_r5 = 0x15A;
            temp_r0_7 = arg0->unk0;
            var_r2 = (*temp_r0_7)->unk40(temp_r0_7, 0x2C);
            var_r1_5 = 0x77A;
            goto block_189;
        case 0x23:                                  /* switch 5 */
            var_r5 = 0x9A;
            temp_r0_8 = arg0->unk0;
            var_r2 = (*temp_r0_8)->unk40(temp_r0_8, 0x2C);
            var_r1_5 = 0x77A;
            goto block_189;
        case 0x24:                                  /* switch 5 */
            var_r5 = 0x106;
            break;
        case 0x25:                                  /* switch 5 */
            var_r5 = 0x102;
            break;
        case 0x26:                                  /* switch 5 */
            var_r5 = 0xFE;
            break;
        case 0x27:                                  /* switch 5 */
            var_r5 = 0xFA;
            break;
        case 0x28:                                  /* switch 5 */
            var_r5 = 0x122;
            break;
        case 0x29:                                  /* switch 5 */
            var_r5 = 0x11E;
            break;
        case 0x2A:                                  /* switch 5 */
        case 0x2B:                                  /* switch 5 */
            var_r5 = 0x11A;
            break;
        case 0x2C:                                  /* switch 5 */
            var_r5 = 0x14A;
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
                var_r5 = 0x10A;
            }
            break;
        case 0x2D:                                  /* switch 5 */
            var_r5 = 0xE2;
            temp_r0_9 = arg0->unk0;
            var_r2 = (*temp_r0_9)->unk40(temp_r0_9, 0x2C);
            var_r1_5 = 0x792;
            goto block_189;
        case 0x2E:                                  /* switch 5 */
            var_r5 = 0x3E;
            break;
        case 0x11:                                  /* switch 5 */
        case 0x21:                                  /* switch 5 */
        case 0x31:                                  /* switch 5 */
        case 0x36:                                  /* switch 5 */
        case 0x37:                                  /* switch 5 */
            var_r5 = 0x146;
            break;
        case 0x12:                                  /* switch 5 */
        case 0x33:                                  /* switch 5 */
            var_r5 = 0x13A;
            break;
        case 0xA:                                   /* switch 5 */
        case 0x15:                                  /* switch 5 */
        case 0x2F:                                  /* switch 5 */
        case 0x34:                                  /* switch 5 */
            var_r5 = 0x42;
            break;
        case 0x35:                                  /* switch 5 */
            var_r5 = 0x1C6;
            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
                goto block_197;
            }
            break;
        case 0x8:                                   /* switch 5 */
            var_r5 = 0xF6;
            if (arg0->unk3D != 0) {
                var_r5 = 0xF2;
            }
            break;
        }
        SetAnim__12AActorEntityUi(arg0, var_r5);
        temp_r0_10 = (*arg0->unk0)->unk14C();
        var_r4 = temp_r0_10->unk0;
        temp_r5 = temp_r0_10->unk4;
        if (var_r4 != temp_r5) {
loop_202:
            if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                var_r4 += 4;
                if (var_r4 == temp_r5) {
                    goto block_204;
                }
                goto loop_202;
            }
            var_r0_4 = *var_r4;
        } else {
block_204:
            var_r0_4 = *(temp_r5 - 4);
        }
        var_r1_6 = 0x6C;
        goto block_206;
    }
    if (func_0800FFD0(arg0->unk34 + 0x1CA0) == 0) {
block_108:
        return 0;
    }
    var_r4_2 = func_0800FFD4(arg0->unk34 + 0x1CA0);
    temp_r5_2 = func_0800FFD8(arg0->unk34 + 0x1CA0);
    temp_r7 = (GenObj *)((u8 *)arg0 + 0x88);
    sp10 = (GenObj *)((u8 *)arg0 + 0xC0);
    if (var_r4_2 != temp_r5_2) {
        do {
            temp_r0_11 = arg0->unk0;
            (*temp_r0_11)->unk15C(temp_r0_11, var_r4_2);
            var_r4_2 += 1;
        } while (var_r4_2 != temp_r5_2);
    }
    func_08010024(arg0->unk34 + 0x1CA0);
    temp_r7->unk4 = 0;
    temp_r7->unk8 = 0;
    temp_r7->unk14 = 0;
    temp_r5_3 = arg0->unk10;
    if (temp_r5_3 != 0) {
        temp_r4_10 = arg0->unk20 + 0x36;
        func_0805E850((GenObj *)((u8 *)temp_r5_3 + 0xB4), (**temp_r5_3->unk0)->unk64(), temp_r4_10);
        temp_r0_12 = (GenObj *)((u8 *)temp_r5_3 + 0xC8);
        temp_r5_3->unkC8 = 1;
        temp_r0_12->unk2 = 0;
        (temp_r0_12 + 2)->unk1 = 1;
    }
    arg0->unk3C = 0x2EU;
    *sp10 = 1;
    var_r5_2 = 0x192;
    arg0->unk7C = 0xFFFF;
    temp_r0_13 = arg0->unk3C;
    switch ((u32) temp_r0_13) {                     /* switch 1; irregular */
    case 0x0:                                       /* switch 1 */
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            temp_r0_14 = arg0->unk3E;
            switch (temp_r0_14) {                   /* switch 2; irregular */
            case 1:                                 /* switch 2 */
block_98:
                var_r5_2 = 0x156;
                break;
            case 0:                                 /* switch 2 */
            case 0x30:                              /* switch 1 */
            case 0x32:                              /* switch 1 */
            case 0x38:                              /* switch 1 */
            case 0x39:                              /* switch 1 */
block_94:
                var_r5_2 = 0x152;
                break;
            case 2:                                 /* switch 2 */
                var_r5_2 = 0x14E;
                break;
            }
        } else {
            temp_r0_15 = arg0->unk3E;
            switch (temp_r0_15) {                   /* switch 3; irregular */
            case 0:                                 /* switch 3 */
            case 0x19:                              /* switch 1 */
            case 0x1A:                              /* switch 1 */
block_55:
                var_r5_2 = 0x192;
                break;
            case 1:                                 /* switch 3 */
                var_r1_7 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1_7 = 0x1C6;
                }
block_34:
                var_r5_2 = var_r1_7;
                break;
            case 2:                                 /* switch 3 */
                var_r1_7 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1_7 = 0x15E;
                }
                goto block_34;
            }
        }
        break;
    case 0x2:                                       /* switch 1 */
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_94;
        }
        temp_r3_2 = arg0->unk3F;
        if (((s32) temp_r3_2 <= 5) && ((s32) temp_r3_2 >= 0)) {
            var_r5_2 = *((((temp_r3_2 * 7) + arg0->unk40) * 2) + &gUnk_080F0FCC);
            temp_r4_11 = arg0->unk38;
            sp0 = func_0800E550(temp_r4_11, GetTool__C9ToolStack(temp_r4_11 + 0x5C));
            var_r0_5 = &sp0;
block_62:
            arg0->unk7C = GetIconId__C4Tool(var_r0_5);
        } else {
            goto block_55;
        }
        break;
    case 0x4:                                       /* switch 1 */
        var_r5_2 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            goto block_94;
        }
        break;
    case 0x1:                                       /* switch 1 */
    case 0x3:                                       /* switch 1 */
    case 0x5:                                       /* switch 1 */
        var_r5_2 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            var_r5_2 = 0x152;
        }
        break;
    case 0xD:                                       /* switch 1 */
        var_r5_2 = 0x136;
        break;
    case 0xB:                                       /* switch 1 */
    case 0xC:                                       /* switch 1 */
    case 0xE:                                       /* switch 1 */
        var_r5_2 = 0x19E;
        break;
    case 0xF:                                       /* switch 1 */
        var_r5_2 = 0x4E;
        break;
    case 0x10:                                      /* switch 1 */
        var_r5_2 = 0x46;
        break;
    case 0x13:                                      /* switch 1 */
        var_r5_2 = 0x13E;
        break;
    case 0x14:                                      /* switch 1 */
        var_r5_2 = 0x142;
        break;
    case 0x9:                                       /* switch 1 */
        var_r5_2 = arg0->unk44;
        temp_r4_12 = arg0->unk38;
        var_r1_8 = func_0800E550(temp_r4_12, GetTool__C9ToolStack(temp_r4_12 + 0x5C));
        var_r0_6 = &(GenObj *)((u8 *)sp0 + 1);
block_64:
        *var_r0_6 = var_r1_8;
        arg0->unk7C = GetIconId__C4Tool();
        break;
    case 0x1B:                                      /* switch 1 */
        var_r5_2 = 0x1EA;
        temp_r4_13 = arg0->unk38;
        var_r1_9 = func_0800E550(temp_r4_13, GetTool__C9ToolStack(temp_r4_13 + 0x5C));
        var_r0_7 = &(GenObj *)((u8 *)sp0 + 2);
block_60:
        *var_r0_7 = var_r1_9;
        arg0->unk7C = GetIconId__C4Tool();
        break;
    case 0x1C:                                      /* switch 1 */
    case 0x1D:                                      /* switch 1 */
        if (arg0->unk4E == arg0->unk4F) {
            goto block_55;
        }
        var_r5_2 = 0x182;
        if ((arg0->unk4F - arg0->unk4E) == 1) {
            var_r5_2 = 0x186;
        }
        temp_r4_14 = arg0->unk38;
        var_r1_8 = func_0800E550(temp_r4_14, GetTool__C9ToolStack(temp_r4_14 + 0x5C));
        var_r0_6 = &(GenObj *)((u8 *)sp0 + 3);
        goto block_64;
    case 0x1E:                                      /* switch 1 */
        var_r5_2 = 0x76;
        temp_r4_15 = arg0->unk38;
        var_r1_9 = func_0800E550(temp_r4_15, GetTool__C9ToolStack(temp_r4_15 + 0x5C));
        var_r0_7 = &sp4;
        goto block_60;
    case 0x1F:                                      /* switch 1 */
        var_r5_2 = 0x6E;
        temp_r4_16 = arg0->unk38;
        var_r0_5 = &(GenObj *)((u8 *)sp0 + 5);
        sp0.unk5 = func_0800E550(temp_r4_16, GetTool__C9ToolStack(temp_r4_16 + 0x5C));
        goto block_62;
    case 0x20:                                      /* switch 1 */
        var_r5_2 = 0x72;
        temp_r4_17 = arg0->unk38;
        var_r1_8 = func_0800E550(temp_r4_17, GetTool__C9ToolStack(temp_r4_17 + 0x5C));
        var_r0_6 = &(GenObj *)((u8 *)sp0 + 6);
        goto block_64;
    case 0x16:                                      /* switch 1 */
        var_r5_2 = 0x1FA;
        break;
    case 0x17:                                      /* switch 1 */
        var_r5_2 = 0x196;
        break;
    case 0x6:                                       /* switch 1 */
        var_r5_2 = 0x112;
        break;
    case 0x18:                                      /* switch 1 */
        var_r5_2 = 0x116;
        break;
    case 0x7:                                       /* switch 1 */
        temp_r0_16 = arg0->unk0;
        var_r2_2 = (*temp_r0_16)->unk40(temp_r0_16, 0x2C);
        temp_r0_17 = arg0->unk3E;
        switch (temp_r0_17) {                       /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            var_r5_2 = 0xEA;
            var_r1_10 = 0x77A;
block_90:
            if (var_r2_2->unk22 != var_r1_10) {
                SetAnim__12AActorEntityUi(var_r2_2);
            }
            break;
        case 1:                                     /* switch 4 */
            var_r5_2 = 0xEE;
            var_r1_10 = 0x77E;
            goto block_90;
        case 2:                                     /* switch 4 */
            var_r5_2 = 0xE6;
            var_r1_10 = 0x782;
            goto block_90;
        }
        break;
    case 0x22:                                      /* switch 1 */
        var_r5_2 = 0x15A;
        temp_r0_18 = arg0->unk0;
        var_r2_2 = (*temp_r0_18)->unk40(temp_r0_18, 0x2C);
        var_r1_10 = 0x77A;
        goto block_90;
    case 0x23:                                      /* switch 1 */
        var_r5_2 = 0x9A;
        temp_r0_19 = arg0->unk0;
        var_r2_2 = (*temp_r0_19)->unk40(temp_r0_19, 0x2C);
        var_r1_10 = 0x77A;
        goto block_90;
    case 0x24:                                      /* switch 1 */
        var_r5_2 = 0x106;
        break;
    case 0x25:                                      /* switch 1 */
        var_r5_2 = 0x102;
        break;
    case 0x26:                                      /* switch 1 */
        var_r5_2 = 0xFE;
        break;
    case 0x27:                                      /* switch 1 */
        var_r5_2 = 0xFA;
        break;
    case 0x28:                                      /* switch 1 */
        var_r5_2 = 0x122;
        break;
    case 0x29:                                      /* switch 1 */
        var_r5_2 = 0x11E;
        break;
    case 0x2A:                                      /* switch 1 */
    case 0x2B:                                      /* switch 1 */
        var_r5_2 = 0x11A;
        break;
    case 0x2C:                                      /* switch 1 */
        var_r5_2 = 0x14A;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
            var_r5_2 = 0x10A;
        }
        break;
    case 0x2D:                                      /* switch 1 */
        var_r5_2 = 0xE2;
        temp_r0_20 = arg0->unk0;
        var_r2_2 = (*temp_r0_20)->unk40(temp_r0_20, 0x2C);
        var_r1_10 = 0x792;
        goto block_90;
    case 0x2E:                                      /* switch 1 */
        var_r5_2 = 0x3E;
        break;
    case 0x11:                                      /* switch 1 */
    case 0x21:                                      /* switch 1 */
    case 0x31:                                      /* switch 1 */
    case 0x36:                                      /* switch 1 */
    case 0x37:                                      /* switch 1 */
        var_r5_2 = 0x146;
        break;
    case 0x12:                                      /* switch 1 */
    case 0x33:                                      /* switch 1 */
        var_r5_2 = 0x13A;
        break;
    case 0xA:                                       /* switch 1 */
    case 0x15:                                      /* switch 1 */
    case 0x2F:                                      /* switch 1 */
    case 0x34:                                      /* switch 1 */
        var_r5_2 = 0x42;
        break;
    case 0x35:                                      /* switch 1 */
        var_r5_2 = 0x1C6;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_98;
        }
        break;
    case 0x8:                                       /* switch 1 */
        var_r5_2 = 0xF6;
        if (arg0->unk3D != 0) {
            var_r5_2 = 0xF2;
        }
        break;
    }
    SetAnim__12AActorEntityUi(arg0, var_r5_2);
    temp_r0_21 = (*arg0->unk0)->unk14C();
    var_r4_3 = temp_r0_21->unk0;
    temp_r5_4 = temp_r0_21->unk4;
    if (var_r4_3 != temp_r5_4) {
loop_103:
        if ((func_08008CD0(*var_r4_3) << 0x18) != 0) {
            var_r4_3 += 4;
            if (var_r4_3 == temp_r5_4) {
                goto block_105;
            }
            goto loop_103;
        }
        var_r0_4 = *var_r4_3;
    } else {
block_105:
        var_r0_4 = *(temp_r5_4 - 4);
    }
    var_r1_6 = 0x6E;
block_206:
    func_08008B6C(var_r0_4, var_r1_6);
    return 1;
}
