#include "common.h"
s32 AddAmountOfTool__8RucksackUiUi(s32, s32, s32);    /* extern */
u16 GetIconId__C4Tool(s8 *);                        /* extern */
s32 GetId__C4Tool(s8 *);                            /* extern */
s32 GetTool__C9ToolStack(s32);                      /* extern */
s32 SetAnim__12AActorEntityUi(void *, u16);           /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s8 func_0800E550(s32, s32);                         /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0805E850(void *, s32, u16);                  /* extern */
extern s32 gUnk_080F0FCC;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    struct GenObj *unk14;
    u8 _pad18[10];
    s32 unk22;
    u8 _pad26[18];
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
    u8 _pad80[8];
    s32 unk88;
    u8 _pad8C[39];
    s32 unkB3;
    u8 _padB7[9];
    s32 unkC0;
    u8 _padC4[4];
    struct GenObj *unkC8;
} GenObj;
void func_0802720C(GenObj *arg0, s8 *arg1) {
    s8 sp0;
    s8 sp4;
    s32 *var_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_2;
    s32 var_r0_2;
    s32 var_r1_3;
    s8 *var_r0;
    s8 var_r1_2;
    u16 temp_r4;
    u16 var_r1;
    u16 var_r5;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_7;
    u8 temp_r3;
    void **temp_r0_10;
    void **temp_r0_6;
    void **temp_r0_8;
    void **temp_r0_9;
    GenObj *temp_r0;
    void *temp_r0_11;
    void *temp_r0_2;
    GenObj *temp_r5;
    void *var_r2;

    temp_r0 = (GenObj *)((u8 *)arg0 + 0x88);
    arg0->unk88 = 1;
    temp_r0->unk1 = 0;
    temp_r0->unk4 = 0xFFF80000;
    temp_r0->unk8 = 0;
    temp_r0->unk14 = 0x110000;
    temp_r5 = arg0->unk10;
    if (temp_r5 != 0) {
        temp_r4 = GetIconId__C4Tool(arg1);
        func_0805E850((GenObj *)((u8 *)temp_r5 + 0xB4), (**temp_r5->unk0)->unk64(), temp_r4);
        temp_r0_2 = (GenObj *)((u8 *)temp_r5 + 0xC8);
        temp_r5->unkC8 = 1;
        temp_r0_2->unk2 = 0;
        (temp_r0_2 + 2)->unk1 = 1;
    }
    temp_r4_2 = arg0->unk38 + 0x60;
    AddAmountOfTool__8RucksackUiUi(temp_r4_2, GetId__C4Tool(arg1), 1);
    arg0->unk3C = 0x34U;
    arg0->unk3D = 0x78U;
    var_r5 = 0x192;
    arg0->unk7C = 0xFFFFU;
    temp_r0_3 = arg0->unk3C;
    switch ((u32) temp_r0_3) {                      /* switch 1; irregular */
    case 0x0:                                       /* switch 1 */
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            temp_r0_4 = arg0->unk3E;
            switch (temp_r0_4) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
block_89:
                var_r5 = 0x156;
                break;
            case 0:                                 /* switch 2 */
            case 0x30:                              /* switch 1 */
            case 0x32:                              /* switch 1 */
            case 0x38:                              /* switch 1 */
            case 0x39:                              /* switch 1 */
block_85:
                var_r5 = 0x152;
                break;
            case 2:                                 /* switch 2 */
                var_r5 = 0x14E;
                break;
            }
        } else {
            temp_r0_5 = arg0->unk3E;
            switch (temp_r0_5) {                    /* switch 3; irregular */
            case 0:                                 /* switch 3 */
            case 0x19:                              /* switch 1 */
            case 0x1A:                              /* switch 1 */
block_47:
                var_r5 = 0x192;
                break;
            case 1:                                 /* switch 3 */
                var_r1 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1 = 0x1C6;
                }
block_26:
                var_r5 = var_r1;
                break;
            case 2:                                 /* switch 3 */
                var_r1 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1 = 0x15E;
                }
                goto block_26;
            }
        }
        break;
    case 0x2:                                       /* switch 1 */
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_85;
        }
        temp_r3 = arg0->unk3F;
        if (((s32) temp_r3 <= 5) && ((s32) temp_r3 >= 0)) {
            var_r5 = *((((temp_r3 * 7) + arg0->unk40) * 2) + &gUnk_080F0FCC);
            temp_r4_3 = arg0->unk38;
            sp0 = func_0800E550(temp_r4_3, GetTool__C9ToolStack(temp_r4_3 + 0x5C));
            var_r0 = &sp0;
block_55:
            arg0->unk7C = GetIconId__C4Tool(var_r0);
        } else {
            goto block_47;
        }
        break;
    case 0x4:                                       /* switch 1 */
        var_r5 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            goto block_85;
        }
        break;
    case 0x1:                                       /* switch 1 */
    case 0x3:                                       /* switch 1 */
    case 0x5:                                       /* switch 1 */
        var_r5 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            var_r5 = 0x152;
        }
        break;
    case 0xD:                                       /* switch 1 */
        var_r5 = 0x136;
        break;
    case 0xB:                                       /* switch 1 */
    case 0xC:                                       /* switch 1 */
    case 0xE:                                       /* switch 1 */
        var_r5 = 0x19E;
        break;
    case 0xF:                                       /* switch 1 */
        var_r5 = 0x4E;
        break;
    case 0x10:                                      /* switch 1 */
        var_r5 = 0x46;
        break;
    case 0x13:                                      /* switch 1 */
        var_r5 = 0x13E;
        break;
    case 0x14:                                      /* switch 1 */
        var_r5 = 0x142;
        break;
    case 0x9:                                       /* switch 1 */
        var_r5 = arg0->unk44;
        temp_r4_4 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_4, GetTool__C9ToolStack(temp_r4_4 + 0x5C));
        var_r0 = &sp0 + 1;
block_54:
        *var_r0 = var_r1_2;
        goto block_55;
    case 0x1B:                                      /* switch 1 */
        var_r5 = 0x1EA;
        temp_r4_5 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_5, GetTool__C9ToolStack(temp_r4_5 + 0x5C));
        var_r0 = &sp0 + 2;
        goto block_54;
    case 0x1C:                                      /* switch 1 */
    case 0x1D:                                      /* switch 1 */
        if (arg0->unk4E == arg0->unk4F) {
            goto block_47;
        }
        var_r5 = 0x182;
        if ((arg0->unk4F - arg0->unk4E) == 1) {
            var_r5 = 0x186;
        }
        temp_r4_6 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_6, GetTool__C9ToolStack(temp_r4_6 + 0x5C));
        var_r0 = &sp0 + 3;
        goto block_54;
    case 0x1E:                                      /* switch 1 */
        var_r5 = 0x76;
        temp_r4_7 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_7, GetTool__C9ToolStack(temp_r4_7 + 0x5C));
        var_r0 = &sp4;
        goto block_54;
    case 0x1F:                                      /* switch 1 */
        var_r5 = 0x6E;
        temp_r4_8 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_8, GetTool__C9ToolStack(temp_r4_8 + 0x5C));
        var_r0 = &sp0 + 5;
        goto block_54;
    case 0x20:                                      /* switch 1 */
        var_r5 = 0x72;
        temp_r4_9 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_9, GetTool__C9ToolStack(temp_r4_9 + 0x5C));
        var_r0 = &sp0 + 6;
        goto block_54;
    case 0x16:                                      /* switch 1 */
        var_r5 = 0x1FA;
        break;
    case 0x17:                                      /* switch 1 */
        var_r5 = 0x196;
        break;
    case 0x6:                                       /* switch 1 */
        var_r5 = 0x112;
        break;
    case 0x18:                                      /* switch 1 */
        var_r5 = 0x116;
        break;
    case 0x7:                                       /* switch 1 */
        temp_r0_6 = arg0->unk0;
        var_r2 = (*temp_r0_6)->unk40(temp_r0_6, 0x2C);
        temp_r0_7 = arg0->unk3E;
        switch (temp_r0_7) {                        /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            var_r5 = 0xEA;
            var_r1_3 = 0x77A;
block_81:
            if (var_r2->unk22 != var_r1_3) {
                SetAnim__12AActorEntityUi(var_r2);
            }
            break;
        case 1:                                     /* switch 4 */
            var_r5 = 0xEE;
            var_r1_3 = 0x77E;
            goto block_81;
        case 2:                                     /* switch 4 */
            var_r5 = 0xE6;
            var_r1_3 = 0x782;
            goto block_81;
        }
        break;
    case 0x22:                                      /* switch 1 */
        var_r5 = 0x15A;
        temp_r0_8 = arg0->unk0;
        var_r2 = (*temp_r0_8)->unk40(temp_r0_8, 0x2C);
        var_r1_3 = 0x77A;
        goto block_81;
    case 0x23:                                      /* switch 1 */
        var_r5 = 0x9A;
        temp_r0_9 = arg0->unk0;
        var_r2 = (*temp_r0_9)->unk40(temp_r0_9, 0x2C);
        var_r1_3 = 0x77A;
        goto block_81;
    case 0x24:                                      /* switch 1 */
        var_r5 = 0x106;
        break;
    case 0x25:                                      /* switch 1 */
        var_r5 = 0x102;
        break;
    case 0x26:                                      /* switch 1 */
        var_r5 = 0xFE;
        break;
    case 0x27:                                      /* switch 1 */
        var_r5 = 0xFA;
        break;
    case 0x28:                                      /* switch 1 */
        var_r5 = 0x122;
        break;
    case 0x29:                                      /* switch 1 */
        var_r5 = 0x11E;
        break;
    case 0x2A:                                      /* switch 1 */
    case 0x2B:                                      /* switch 1 */
        var_r5 = 0x11A;
        break;
    case 0x2C:                                      /* switch 1 */
        var_r5 = 0x14A;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
            var_r5 = 0x10A;
        }
        break;
    case 0x2D:                                      /* switch 1 */
        var_r5 = 0xE2;
        temp_r0_10 = arg0->unk0;
        var_r2 = (*temp_r0_10)->unk40(temp_r0_10, 0x2C);
        var_r1_3 = 0x792;
        goto block_81;
    case 0x2E:                                      /* switch 1 */
        var_r5 = 0x3E;
        break;
    case 0x11:                                      /* switch 1 */
    case 0x21:                                      /* switch 1 */
    case 0x31:                                      /* switch 1 */
    case 0x36:                                      /* switch 1 */
    case 0x37:                                      /* switch 1 */
        var_r5 = 0x146;
        break;
    case 0x12:                                      /* switch 1 */
    case 0x33:                                      /* switch 1 */
        var_r5 = 0x13A;
        break;
    case 0xA:                                       /* switch 1 */
    case 0x15:                                      /* switch 1 */
    case 0x2F:                                      /* switch 1 */
    case 0x34:                                      /* switch 1 */
        var_r5 = 0x42;
        break;
    case 0x35:                                      /* switch 1 */
        var_r5 = 0x1C6;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_89;
        }
        break;
    case 0x8:                                       /* switch 1 */
        var_r5 = 0xF6;
        if (arg0->unk3D != 0) {
            var_r5 = 0xF2;
        }
        break;
    }
    SetAnim__12AActorEntityUi(arg0, var_r5);
    temp_r0_11 = (*arg0->unk0)->unk14C();
    var_r4 = temp_r0_11->unk0;
    temp_r5_2 = temp_r0_11->unk4;
    if (var_r4 != temp_r5_2) {
loop_94:
        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
            var_r4 += 4;
            if (var_r4 == temp_r5_2) {
                goto block_96;
            }
            goto loop_94;
        }
        var_r0_2 = *var_r4;
    } else {
block_96:
        var_r0_2 = *(temp_r5_2 - 4);
    }
    func_08008B6C(var_r0_2, 0xBC);
    arg0->unkC0 = 1;
}

