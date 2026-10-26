s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050DA0(s32, s32 *, void *);                  /* extern */
s32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, s32 *, s32 *, s32 *, s32, s32, void *); /* extern */
extern s32 gUnk_080FAA40;
extern s32 gUnk_080FAA5C;
extern s32 gUnk_080FAA60;
extern s32 gUnk_080FAA64;
extern s32 gUnk_080FAA74;
extern s32 gUnk_080FAA88;
extern s32 gUnk_080FAAA4;
extern s32 gUnk_080FAACC;
extern s32 gUnk_080FAAE0;
extern s32 gUnk_080FAAFC;
extern s32 gUnk_080FAB94;
extern s32 gUnk_080FABE0;
extern s32 gUnk_080FAC24;
extern s32 gUnk_080FAC8C;
extern s32 gUnk_080FAD08;
extern s32 gUnk_080FAD20;
extern s32 gUnk_080FAD28;
extern s32 gUnk_080FAD34;
extern s32 gUnk_080FAD50;
extern s32 gUnk_080FAD94;
extern s32 gUnk_080FADDC;
extern s32 gUnk_080FAE00;

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[5114];
    s32 unk140E;
    u8 _pad1412[18];
    s32 unk1424;
    u8 _pad1428[1];
    s32 unk1429;
    s32 unk142A;
    u8 _pad142E[112];
    s32 unk149E;
} GenObj;
void func_08059878(GenObj *arg0) {
    s32 *var_r1;
    s32 *var_r1_2;
    s32 *var_r1_3;
    s32 *var_r2;
    s32 *var_r3;
    s16 *var_r1_5;
    s16 temp_r0_3;
    s16 temp_r1;
    s16 var_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s8 *var_r1_4;
    u32 temp_r0;
    u8 temp_r5_2;

    temp_sb = arg0->unk10;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x14);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (arg0->unk1429 == 0) {
            func_08050D5C(arg0->unk10);
            arg0->unk1429 = 3U;
            return;
        }
        arg0->unk1429 = 2U;
        return;
    case 3:                                         /* switch 1 */
        temp_r5_2 = arg0->unk1429;
        switch (temp_r5_2) {                        /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            func_08050D74(arg0->unk10);
            arg0->unk1429 = 1U;
            return;
        case 4:                                     /* switch 2 */
            temp_r0_2 = func_08050DF0(arg0->unk10);
            arg0->unk1429 = 3U;
            temp_r1 = arg0->unk1424;
            switch (temp_r1) {                      /* switch 3; irregular */
            case 2:                                 /* switch 3 */
                switch (temp_r0_2) {                /* switch 4; irregular */
                case 1:                             /* switch 4 */
                    arg0->unk142A = 0;
                    arg0->unk1424 = 3;
                    return;
                case 2:                             /* switch 4 */
                    arg0->unk142A = 1;
                    arg0->unk1424 = (s16) temp_r5_2;
                    return;
                }
                break;
            case 7:                                 /* switch 3 */
                switch (temp_r0_2) {                /* switch 5; irregular */
                case 1:                             /* switch 5 */
                    arg0->unk142A = 0;
                    arg0->unk1424 = 8;
                    return;
                case 2:                             /* switch 5 */
                    arg0->unk142A = 1;
                    arg0->unk1424 = 9;
                    return;
                }
                break;
            case 14:                                /* switch 3 */
                switch (temp_r0_2) {                /* switch 6; irregular */
                case 2:                             /* switch 6 */
                case 1:                             /* switch 7 */
                    arg0->unk1424 = 0x15;
                    return;
                case 1:                             /* switch 6 */
                case 2:                             /* switch 7 */
                    arg0->unk1424 = 0xF;
                    return;
                }
                break;
            case 20:                                /* switch 3 */
                switch (temp_r0_2);                 /* switch 7; irregular */
                break;
            }
            break;
        case 3:                                     /* switch 2 */
            arg0->unk1429 = 5U;
            temp_r0_3 = (u16) arg0->unk1424 - 2;
            switch ((u32) temp_r0_3) {              /* switch 8; irregular */
            case 0:                                 /* switch 8 */
                var_r1 = &gUnk_080FAA40;
                var_r2 = &gUnk_080FAA5C;
                var_r3 = &gUnk_080FAA60;
block_57:
                func_08050E30(arg0->unk10, var_r1, var_r2, var_r3, 0, 0, arg0 + 0x14E0);
                arg0->unk1429 = 4U;
                return;
            case 1:                                 /* switch 8 */
                var_r1_2 = &gUnk_080FAA64;
block_61:
                func_08050DA0(arg0->unk10, var_r1_2, arg0 + 0x14E0);
                return;
            case 2:                                 /* switch 8 */
                var_r1_3 = &gUnk_080FAA74;
block_63:
                func_08050DA0(arg0->unk10, var_r1_3, arg0 + 0x14E0);
                return;
            case 5:                                 /* switch 8 */
                var_r1 = &gUnk_080FAA88;
                var_r2 = &gUnk_080FAA5C;
                var_r3 = &gUnk_080FAA60;
                goto block_57;
            case 6:                                 /* switch 8 */
                if (arg0->unk140E == 0) {
                    var_r1_2 = &gUnk_080FAAA4;
                    goto block_61;
                }
                var_r1_3 = &gUnk_080FAAA4;
                goto block_63;
            case 7:                                 /* switch 8 */
                var_r1_2 = &gUnk_080FAACC;
                goto block_61;
            case 12:                                /* switch 8 */
                var_r1 = &gUnk_080FAAE0;
                var_r2 = &gUnk_080FAA5C;
                var_r3 = &gUnk_080FAA60;
                goto block_57;
            case 13:                                /* switch 8 */
                func_08050DA0(arg0->unk10, &gUnk_080FAAFC, arg0 + 0x14E0);
                arg0->unk1424 = 0x10;
                var_r1_4 = arg0 + 0x1429;
block_55:
                *var_r1_4 = 3;
                return;
            case 14:                                /* switch 8 */
                func_08050DA0(arg0->unk10, &gUnk_080FAB94, arg0 + 0x14E0);
                arg0->unk1424 = 0x11;
                var_r1_4 = arg0 + 0x1429;
                goto block_55;
            case 15:                                /* switch 8 */
                func_08050DA0(arg0->unk10, &gUnk_080FABE0, arg0 + 0x14E0);
                arg0->unk149E = 0x78;
                var_r1_5 = arg0 + 0x1424;
                var_r0 = 0x12;
block_54:
                *var_r1_5 = var_r0;
                var_r1_4 = arg0 + 0x1429;
                goto block_55;
            case 16:                                /* switch 8 */
                func_08050DA0(arg0->unk10, &gUnk_080FAC24, arg0 + 0x14E0);
                arg0->unk149E = 0x3C;
                arg0->unk1424 = 0x13;
                var_r1_4 = arg0 + 0x1429;
                goto block_55;
            case 17:                                /* switch 8 */
                func_08050DA0(arg0->unk10, &gUnk_080FAC8C, arg0 + 0x14E0);
                arg0->unk149E = 0xFF;
                var_r1_5 = arg0 + 0x1424;
                var_r0 = 0x14;
                goto block_54;
            case 18:                                /* switch 8 */
                var_r1 = &gUnk_080FAD08;
                var_r2 = &gUnk_080FAD20;
                var_r3 = &gUnk_080FAD28;
                goto block_57;
            case 19:                                /* switch 8 */
                var_r1_2 = &gUnk_080FAD34;
                goto block_61;
            case 20:                                /* switch 8 */
                var_r1_3 = &gUnk_080FAD50;
                goto block_63;
            case 24:                                /* switch 8 */
                var_r1_2 = &gUnk_080FAD94;
                goto block_61;
            case 28:                                /* switch 8 */
                var_r1_3 = &gUnk_080FADDC;
                goto block_63;
            case 31:                                /* switch 8 */
                func_08050DA0(arg0->unk10, &gUnk_080FAE00, arg0 + 0x14E0);
                /* fallthrough */
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
