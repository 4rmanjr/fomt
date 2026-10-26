s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050DA0(s32, ? *, void *);                  /* extern */
s32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, ? *, ? *, ? *, s32, s32, void *); /* extern */
extern ? gUnk_080FB108;
extern ? gUnk_080FB120;
extern ? gUnk_080FB124;
extern ? gUnk_080FB128;
extern ? gUnk_080FB140;
extern ? gUnk_080FB158;
extern ? gUnk_080FB164;
extern ? gUnk_080FB17C;

void func_0805D760(void *arg0) {
    ? *var_r1_2;
    s16 *var_r1;
    s16 temp_r0_3;
    s16 temp_r1;
    s16 temp_r4_2;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    u32 temp_r0;

    temp_sb = arg0->unk10;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x14);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (arg0->unkADC == 0) {
            func_08050D5C(arg0->unk10);
            arg0->unkADC = 3;
            return;
        }
        arg0->unkADC = 2;
        return;
    case 3:                                         /* switch 1 */
        temp_r4_2 = arg0->unkADC;
        switch (temp_r4_2) {                        /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            func_08050D74(arg0->unk10);
            arg0->unkADC = 1;
            return;
        case 4:                                     /* switch 2 */
            temp_r0_2 = func_08050DF0(arg0->unk10);
            arg0->unkADC = 3;
            temp_r1 = arg0->unkADA;
            switch (temp_r1) {                      /* switch 3; irregular */
            case 2:                                 /* switch 3 */
                switch (temp_r0_2) {                /* switch 4; irregular */
                case 1:                             /* switch 4 */
                    arg0->unkADE = 0;
                    arg0->unkADA = 3;
                    return;
                case 2:                             /* switch 4 */
                    arg0->unkADE = 1;
                    arg0->unkADA = temp_r4_2;
                    return;
                }
                break;
            case 8:                                 /* switch 3 */
                switch (temp_r0_2) {                /* switch 5; irregular */
                case 1:                             /* switch 5 */
                    arg0->unkADE = 0;
                    arg0->unkADC = 5;
                    arg0->unkADA = 9;
                    return;
                case 2:                             /* switch 5 */
                    arg0->unkADE = 1;
                    arg0->unkADA = 0xA;
                    return;
                }
                break;
            }
            break;
        case 3:                                     /* switch 2 */
            arg0->unkADC = 5;
            temp_r0_3 = (u16) arg0->unkADA - 2;
            switch (temp_r0_3) {                    /* switch 6 */
            case 0:                                 /* switch 6 */
                func_08050E30(arg0->unk10, &gUnk_080FB108, &gUnk_080FB120, &gUnk_080FB124, 0, 0, arg0 + 0xAEC);
                var_r1 = arg0 + 0xADC;
block_30:
                *var_r1 = 4;
                return;
            case 1:                                 /* switch 6 */
                var_r1_2 = &gUnk_080FB128;
block_32:
                func_08050DA0(arg0->unk10, var_r1_2, arg0 + 0xAEC);
                return;
            case 2:                                 /* switch 6 */
                func_08050DA0(arg0->unk10, &gUnk_080FB140, arg0 + 0xAEC);
                return;
            case 6:                                 /* switch 6 */
                func_08050E30(arg0->unk10, &gUnk_080FB158, &gUnk_080FB120, &gUnk_080FB124, 0, 0, arg0 + 0xAEC);
                var_r1 = arg0 + 0xADC;
                goto block_30;
            case 8:                                 /* switch 6 */
                var_r1_2 = &gUnk_080FB164;
                goto block_32;
            case 5:                                 /* switch 6 */
                func_08050DA0(arg0->unk10, &gUnk_080FB17C, arg0 + 0xAEC);
                /* fallthrough */
            case 1:                                 /* switch 1 */
            case 2:                                 /* switch 1 */
            case 4:                                 /* switch 1 */
            case 5:                                 /* switch 1 */
            case 6:                                 /* switch 1 */
            default:                                /* switch 6 */
                return;
            }
            break;
        }
        break;
    }
}
