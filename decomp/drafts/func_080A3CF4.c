s32 GetChicken__4CoopUi(s32, u8);                   /* extern */
s32 GetCow__4BarnUi(s32, u8);                       /* extern */
s32 GetHorse__4Farm(s32);                           /* extern */
s32 GetSheep__4BarnUi(s32, u8);                     /* extern */
s32 SetName__6AnimalPCc(s32, s32);                    /* extern */
s32 func_08007078(s32 *, s32 *, s32);                     /* extern */
s32 func_080070A4(s32 *, s32);                          /* extern */
s32 func_080070D4(void ***, s32 *);                     /* extern */
s32 func_08007110(s32 *);                             /* extern */
s32 func_0800E9A8(s32, s32);                          /* extern */
s32 func_0809EB20(s32, s32);                          /* extern */
s32 func_080A0A04(s32);                             /* extern */
extern s32 gUnk_08104E0C;
extern s32 gUnk_08104E14;
extern s32 gUnk_08104E1C;
extern s32 gUnk_08104E24;
extern s32 gUnk_08104E30;
extern s32 gUnk_08104E38;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} GenObj;
s32 *func_080A3CF4(s32 *arg0, GenObj *arg1) {
s32 sp0;
    void **sp8;
    s32 *var_r1;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r0 = arg1->unkC;
    switch (temp_r0) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        var_r1 = &gUnk_08104E0C;
block_9:
        func_08007078(&sp0, var_r1, 0);
        func_080070D4(&sp8, &sp0);
        if (sp8 != 0) {
            (*sp8)->unk8(sp8, 3);
        }
        temp_r0_2 = arg1->unkC;
        switch (temp_r0_2) {                        /* switch 2 */
        case 0:                                     /* switch 2 */
            var_r0 = GetHorse__4Farm(arg1->unk8 + 0x14);
block_17:
            if (var_r0 != 0) {
                SetName__6AnimalPCc(var_r0, func_08007110(&sp0));
            }
block_23:
            temp_r1 = arg1->unk4;
            arg1->unk4 = 0;
            *arg0 = temp_r1;
            func_080070A4(&sp0, 2);
            break;
        case 1:                                     /* switch 2 */
            var_r0 = GetCow__4BarnUi(arg1->unk8 + 0x5F0, arg1->unk10);
            goto block_17;
        case 2:                                     /* switch 2 */
            var_r0 = GetSheep__4BarnUi(arg1->unk8 + 0x5F0, arg1->unk10);
            goto block_17;
        case 3:                                     /* switch 2 */
            var_r0 = GetChicken__4CoopUi(arg1->unk8 + 0x410, arg1->unk10);
            goto block_17;
        case 4:                                     /* switch 2 */
            temp_r0_3 = func_080A0A04(arg1->unk8 + 0x1CD4);
            if (temp_r0_3 != 0) {
                func_0809EB20(temp_r0_3, func_08007110(&sp0));
            }
            goto block_23;
        case 5:                                     /* switch 2 */
            temp_r4 = arg1->unk8 + 0x1BD8;
            func_0800E9A8(temp_r4, func_08007110(&sp0));
            goto block_23;
        default:                                    /* switch 2 */
            temp_r1_2 = arg1->unk4;
            arg1->unk4 = 0;
            *arg0 = temp_r1_2;
            func_080070A4(&sp0, 2);
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        var_r1 = &gUnk_08104E14;
        goto block_9;
    case 2:                                         /* switch 1 */
        var_r1 = &gUnk_08104E1C;
        goto block_9;
    case 3:                                         /* switch 1 */
        var_r1 = &gUnk_08104E24;
        goto block_9;
    case 4:                                         /* switch 1 */
        var_r1 = &gUnk_08104E30;
        goto block_9;
    case 5:                                         /* switch 1 */
        var_r1 = &gUnk_08104E38;
        goto block_9;
    default:                                        /* switch 1 */
        temp_r0_4 = arg1->unk4;
        arg1->unk4 = 0;
        *arg0 = temp_r0_4;
        break;
    }
    return arg0;
}
