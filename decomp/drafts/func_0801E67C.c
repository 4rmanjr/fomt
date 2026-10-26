void *GetMapData(s32);                              /* extern */
s32 SetLocation__7AEntityUiii(void *, s32, s16, s16); /* extern */
s32 func_080AC070(s32 *, s32 *);                      /* extern */
s32 method_0800C9B8__4CoopUi(s32, s32);               /* extern */
u32 rand();                                         /* extern */
extern s32 gUnk_080F0704;
extern s32 gUnk_080F0718;
extern s32 gUnk_080F0730;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    u8 _pad8[4];
    struct GenObj *unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    u8 _pad18[8];
    s32 unk20;
    s32 unk22;
    u8 _pad26[6];
    struct GenObj *unk2C;
    u8 _pad30[12];
    s32 unk3C;
    s32 unk40;
    u8 _pad44[4084];
    s32 unk1038;
} GenObj;
void func_0801E67C(GenObj *arg0, ? arg3) {
    s32 sp0;
    s32 sp4;
s32 spC;
    s32 *sp14;
    s32 *var_r1_2;
    s32 temp_r0;
    s32 var_r8;
    s32 var_sb;
    u16 temp_r5;
    u16 temp_r6;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 var_r1;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r0_6;
    GenObj *temp_r4;

    temp_r0 = arg0->unk4->unk4;
    switch (temp_r0) {                              /* switch 1; irregular */
    case 41:                                        /* switch 1 */
        sp14 = &gUnk_080F0704;
        var_r1 = 5;
block_10:
        temp_r0_2 = GetMapData();
        temp_r5 = temp_r0_2->unk20;
        temp_r6 = temp_r0_2->unk22;
        temp_r4 = arg0->unk4;
        GetMapData(temp_r4->unk4);
        sp0 = temp_r4->unk2C;
        sp4 = 0;
        sp0.unk8 = temp_r5;
        sp0.unkA = temp_r6;
        var_r8 = 0;
loop_11:
        temp_r0_3 = ((void (*)(void *,...))(arg0->unk0->unk40))(arg0, var_r8);
        if (temp_r0_3 == 0) {

        } else {
            var_sb = 0;
            temp_r0_4 = var_r8 - 0x2B;
            switch (temp_r0_4) {                    /* switch 2 */
            case 0:                                 /* switch 2 */
            case 3:                                 /* switch 2 */
            case 4:                                 /* switch 2 */
            case 5:                                 /* switch 2 */
            case 6:                                 /* switch 2 */
            case 7:                                 /* switch 2 */
            case 8:                                 /* switch 2 */
            case 9:                                 /* switch 2 */
            case 10:                                /* switch 2 */
            case 31:                                /* switch 2 */
            case 32:                                /* switch 2 */
            case 33:                                /* switch 2 */
            case 34:                                /* switch 2 */
            case 35:                                /* switch 2 */
            case 36:                                /* switch 2 */
            case 37:                                /* switch 2 */
            case 38:                                /* switch 2 */
            case 39:                                /* switch 2 */
            case 40:                                /* switch 2 */
                if (temp_r0_3->unk4 == 0x1D) {
                    ((void (*)(void *,...))(temp_r0_3->unk14->unkC))(&spC, temp_r0_3);
                    if ((func_080AC070(&sp0, &spC) << 0x18) != 0) {
                        var_sb = 1;
                    }
                }
                break;
            }
            if (var_sb == 0) {

            } else {
                temp_r0_5 = var_r8 - 0x2B;
                switch (temp_r0_5) {                /* switch 3 */
                default:                            /* switch 3 */
                    if (temp_r0_3 != 0) {
                        temp_r0_6 = sp14 + ((rand() % var_r1) * 4);
                        SetLocation__7AEntityUiii(temp_r0_3, 0x1D, temp_r0_6->unk0, temp_r0_6->unk2);
                    }
                    break;
                case 33:                            /* switch 3 */
                case 34:                            /* switch 3 */
                case 35:                            /* switch 3 */
                case 36:                            /* switch 3 */
                case 37:                            /* switch 3 */
                case 38:                            /* switch 3 */
                case 39:                            /* switch 3 */
                case 40:                            /* switch 3 */
                    if (temp_r0_3 != 0) {
                        ((void (*)(void *,...))(arg0->unk0->unk3C))(arg0, var_r8);
                        method_0800C9B8__4CoopUi(arg0->unk1038 + 0x410, var_r8 - 0x4C);
                    }
                    break;
                }
            }
        }
        var_r8 += 1;
        if (var_r8 <= 0x63) {
            goto loop_11;
        }
        return;
    case 42:                                        /* switch 1 */
        var_r1_2 = &gUnk_080F0718;
block_9:
        sp14 = var_r1_2;
        var_r1 = 6;
        goto block_10;
    case 43:                                        /* switch 1 */
        var_r1_2 = &gUnk_080F0730;
        goto block_9;
    }
}
