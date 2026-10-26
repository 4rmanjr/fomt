s32 func_0804EC84(s8, s32 *, s32);                      /* extern */
s32 memcpy(s32 *, s32 *, u32);                            /* extern */
s32 strcpy(void *, s32 *);                              /* extern */
u32 strlen(s32 *);                                    /* extern */
extern s32 gUnk_08104938;
extern s32 gUnk_08104940;
extern s32 gUnk_08104948;
extern s32 gUnk_08104950;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    s32 unk5;
    s32 unk8;
} GenObj;
s8 *func_080E3F40(s8 *arg0, GenObj *arg1, s32 arg2) {
s32 sp0;
s32 sp8;
s32 sp20;
    s32 *temp_r7;
    s32 *var_r0;
    s32 *var_r1;
    s32 *var_r5;
    s32 *var_r5_2;
    s8 temp_r5;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;

    switch (arg2) {                                 /* switch 1; irregular */
    case 0xF2:                                      /* switch 1 */
        var_r5 = &sp8;
        temp_r7 = arg1->unk8;
        var_r4 = strlen(temp_r7);
        if (var_r4 > 0x1FU) {
            var_r4 = 0x1F;
        }
        var_r0 = var_r5;
        var_r1 = temp_r7;
block_35:
        memcpy(var_r0, var_r1, var_r4);
        *((u8 *)var_r5 + var_r4) = 0;
        *arg0 = 1;
        strcpy(arg0 + 4, var_r5);
        break;
    case 0xF0:                                      /* switch 1 */
        temp_r5 = arg1->unk5;
        switch (temp_r5) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_r4_2 = strlen(&gUnk_08104938);
            if (var_r4_2 > 0x1FU) {
                var_r4_2 = 0x1F;
            }
            memcpy(&sp0, &gUnk_08104938, var_r4_2);
            *(&sp0 + var_r4_2) = temp_r5;
            *arg0 = 1;
            strcpy(arg0 + 4);
            break;
        case 1:                                     /* switch 2 */
            var_r4_3 = strlen(&gUnk_08104940);
            if (var_r4_3 > 0x1FU) {
                var_r4_3 = 0x1F;
            }
            memcpy(&sp0, &gUnk_08104940, var_r4_3);
            *(&sp0 + var_r4_3) = 0;
            *arg0 = temp_r5;
block_25:
            strcpy(arg0 + 4, &sp0);
            break;
        case 2:                                     /* switch 2 */
            var_r5_2 = &gUnk_08104948;
block_22:
            var_r4_4 = strlen(var_r5_2);
            if (var_r4_4 > 0x1FU) {
                var_r4_4 = 0x1F;
            }
            memcpy(&sp0, var_r5_2, var_r4_4);
            *(&sp0 + var_r4_4) = 0;
            *arg0 = 1;
            goto block_25;
        case 3:                                     /* switch 2 */
            var_r5_2 = &gUnk_08104950;
            goto block_22;
        }
        break;
    case 0xF1:                                      /* switch 1 */
        if ((s32) arg1->unk4 <= 9) {
            sp0 = 0x81;
            sp0.unk1 = 0x40;
            func_0804EC84(arg1->unk4, &sp0 + 2, 0);
        } else {
            func_0804EC84(arg1->unk4, &sp0, 0);
        }
        var_r5 = &sp20;
        var_r4 = strlen(&sp0);
        if (var_r4 > 0x1FU) {
            var_r4 = 0x1F;
        }
        var_r0 = var_r5;
        var_r1 = &sp0;
        goto block_35;
    default:                                        /* switch 1 */
        sp0 = 0;
        *arg0 = 0;
        strcpy(arg0 + 4);
        break;
    }
    return arg0;
}
