s32 func_08050DA0(void *, ? *, void *);               /* extern */
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
s32 func_08050DF0(void *);                          /* extern */
s32 func_08050E0C(void *, ? *, ? *, ? *, s32, s32, s32, s32); /* extern */
s32 func_08050E30(void *, ? *, ? *, ? *, s32, s32, s32); /* extern */
s32 func_08050E98(void *, s32);                       /* extern */
s32 func_08050EBC(void *, s32);                       /* extern */
extern ? gUnk_08100E34;
extern ? gUnk_08100E48;
extern ? gUnk_08100E5C;
extern ? gUnk_08100E74;
extern ? gUnk_08100E90;
extern ? gUnk_08100EA4;
extern ? gUnk_08100EBC;
extern ? gUnk_08100ED8;
extern ? gUnk_08100EF0;
extern ? gUnk_08100F04;
extern ? gUnk_08100F30;
extern ? gUnk_08100F44;
extern ? gUnk_08100F78;
extern ? gUnk_08100F90;
extern ? gUnk_08100FA4;
extern ? gUnk_08100FBC;
extern ? gUnk_08100FCC;
extern ? gUnk_08100FE0;

void func_08097D38(void *arg0) {
    ? *var_r5;
    s32 temp_r1;
    s8 *var_r1;
    s8 *var_r1_2;
    s8 temp_r0_2;
    s8 var_r0;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u32 temp_r0;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r2;
    void *var_r4;

    temp_r0 = arg0->unk88;
    switch (temp_r0) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        temp_r0_2 = arg0->unk33D2;
        switch (temp_r0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            arg0->unk33D2 = 3;
            return;
        case 5:                                     /* switch 2 */
            arg0->unk33D2 = 2;
            return;
        case 4:                                     /* switch 2 */
            temp_r1 = func_08050DF0(arg0 + 0x80);
            arg0->unk33D2 = 3;
            temp_r0_3 = arg0->unk33D4;
            if ((s32) temp_r0_3 < 0) {
                return;
            }
            if ((s32) temp_r0_3 > 2) {
                if ((s32) temp_r0_3 > 9) {
                    return;
                }
                if ((s32) temp_r0_3 < 8) {
                    return;
                }
                goto block_15;
            }
block_15:
            switch (temp_r1) {                      /* switch 3; irregular */
            case 1:                                 /* switch 3 */
                var_r1 = arg0 + 0x33D3;
                var_r0 = 0;
block_21:
                *var_r1 = var_r0;
                break;
            case 2:                                 /* switch 3 */
                var_r1 = arg0 + 0x33D3;
                var_r0 = 1;
                goto block_21;
            case 3:                                 /* switch 3 */
                var_r1 = arg0 + 0x33D3;
                var_r0 = 2;
                goto block_21;
            }
            arg0->unk33D2 = 5;
            return;
        case 3:                                     /* switch 2 */
            arg0->unk33D2 = 5;
            temp_r0_4 = arg0->unk33D4;
            switch ((u32) temp_r0_4) {              /* switch 4; irregular */
            case 0:                                 /* switch 4 */
                func_08050E0C(arg0 + 0x80, &gUnk_08100E34, &gUnk_08100E48, &gUnk_08100E5C, 0, 0, 0, 0);
                var_r1_2 = arg0 + 0x33D2;
block_41:
                *var_r1_2 = 4;
                return;
            case 1:                                 /* switch 4 */
                func_08050E30(arg0 + 0x80, &gUnk_08100E74, &gUnk_08100E90, &gUnk_08100E5C, 0, 0, 0);
block_40:
                var_r1_2 = arg0 + 0x33D2;
                goto block_41;
            case 2:                                 /* switch 4 */
                func_08050E0C(arg0 + 0x80, &gUnk_08100EA4, &gUnk_08100EBC, &gUnk_08100ED8, 0, 0, 0, 0);
                var_r1_2 = arg0 + 0x33D2;
                goto block_41;
            case 3:                                 /* switch 4 */
                var_r5 = &gUnk_08100EF0;
                var_r4 = arg0 + 0x80;
                func_08050EBC(var_r4, 4);
                var_r2 = arg0 + 0x33D8;
block_37:
                func_08050DA0(var_r4, var_r5, var_r2);
                return;
            case 4:                                 /* switch 4 */
                var_r5 = &gUnk_08100F04;
block_36:
                var_r4 = arg0 + 0x80;
                func_08050EBC(var_r4, 4);
                var_r2 = arg0 + 0x33D8;
                goto block_37;
            case 5:                                 /* switch 4 */
                var_r5 = &gUnk_08100F30;
                var_r4 = arg0 + 0x80;
                func_08050EBC(var_r4, 4);
                var_r2 = arg0 + 0x33D8;
                goto block_37;
            case 6:                                 /* switch 4 */
                temp_r4 = arg0 + 0x80;
                func_08050EBC(temp_r4, 4);
                func_08050DA0(temp_r4, &gUnk_08100F30, arg0 + 0x33D8);
                arg0->unk33D2 = 3;
                arg0->unk33D4 = 7U;
                return;
            case 7:                                 /* switch 4 */
                var_r5 = &gUnk_08100F44;
                goto block_36;
            case 8:                                 /* switch 4 */
                func_08050E0C(arg0 + 0x80, &gUnk_08100F78, &gUnk_08100F90, &gUnk_08100FA4, 0, 0, 0, 0);
                var_r1_2 = arg0 + 0x33D2;
                goto block_41;
            case 9:                                 /* switch 4 */
                func_08050E0C(arg0 + 0x80, &gUnk_08100FBC, &gUnk_08100F90, &gUnk_08100FCC, 0, 0, 0, 0);
                goto block_40;
            case 10:                                /* switch 4 */
                temp_r4_2 = arg0 + 0x80;
                func_08050E98(temp_r4_2, 4);
                func_08050DC8(temp_r4_2, &gUnk_08100FE0, 0, 0);
            case 0:                                 /* switch 1 */
            case 1:                                 /* switch 1 */
            case 2:                                 /* switch 1 */
            case 4:                                 /* switch 1 */
            case 5:                                 /* switch 1 */
            case 6:                                 /* switch 1 */
                return;
            }
            break;
        }
        break;
    }
}
