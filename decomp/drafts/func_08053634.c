s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050D8C(s32, ? *);                          /* extern */
s32 func_08050DA0(s32, ? *, void *);                  /* extern */
s32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, ? *, ? *, ? *, s32, s32, s32); /* extern */
extern ? gUnk_080FA39C;
extern ? gUnk_080FA3B8;
extern ? gUnk_080FA3BC;
extern ? gUnk_080FA3C0;
extern ? gUnk_080FA458;
extern ? gUnk_080FA49C;
extern ? gUnk_080FA510;
extern ? gUnk_080FA614;
extern ? gUnk_080FA660;
extern ? gUnk_080FA670;
extern ? gUnk_080FA684;
extern ? gUnk_080FA6A0;
extern ? gUnk_080FA6AC;
extern ? gUnk_080FA6E0;
extern ? gUnk_080FA6F4;

void func_08053634(void *arg0) {
    ? *var_r1;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 temp_r0_2;
    s16 temp_r0_4;
    s16 temp_r1;
    s32 temp_r0_3;
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
        if (arg0->unk232C == 0) {
            func_08050D5C(arg0->unk10);
            arg0->unk232C = 3;
            return;
        }
        arg0->unk232C = 2;
        return;
    case 3:                                         /* switch 1 */
        temp_r0_2 = arg0->unk232C;
        switch (temp_r0_2) {                        /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            func_08050D74(arg0->unk10);
            arg0->unk232C = 1;
            return;
        case 4:                                     /* switch 2 */
            temp_r0_3 = func_08050DF0(arg0->unk10);
            arg0->unk232C = 3;
            temp_r1 = arg0->unk2328;
            switch (temp_r1) {                      /* switch 3; irregular */
            case 2:                                 /* switch 3 */
                switch (temp_r0_3) {                /* switch 4; irregular */
                case 1:                             /* switch 4 */
                    arg0->unk232E = 0;
                    arg0->unk2328 = 3;
                    return;
                case 2:                             /* switch 4 */
                    arg0->unk232E = 1;
                    arg0->unk232C = 5;
                    return;
                }
                break;
            case 9:                                 /* switch 3 */
                if (temp_r0_3 != 1) {
block_24:
                    if (temp_r0_3 == 2) {
                        arg0->unk232E = 1;
                    }
                } else {
block_23:
                    arg0->unk232E = 0;
                }
block_26:
                arg0->unk232C = 5;
                return;
            case 23:                                /* switch 3 */
                if (temp_r0_3 == 1) {
                    goto block_23;
                }
                goto block_24;
                goto block_26;
            }
            break;
        case 3:                                     /* switch 2 */
            arg0->unk232C = 5;
            temp_r0_4 = (u16) arg0->unk2328 - 2;
            switch ((u32) temp_r0_4) {              /* switch 5; irregular */
            case 0:                                 /* switch 5 */
                var_r1 = &gUnk_080FA39C;
block_43:
                func_08050E30(arg0->unk10, var_r1, &gUnk_080FA3B8, &gUnk_080FA3BC, 0, 0, 0);
                var_r1_2 = arg0 + 0x232C;
block_44:
                *var_r1_2 = 4;
                return;
            case 1:                                 /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA3C0);
                return;
            case 3:                                 /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA458);
                return;
            case 4:                                 /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA49C);
                return;
            case 5:                                 /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA510);
                arg0->unk2328 = 9;
                var_r1_3 = arg0 + 0x232C;
block_38:
                *var_r1_3 = 3;
                return;
            case 6:                                 /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA614);
                arg0->unk2328 = 9;
                var_r1_3 = arg0 + 0x232C;
                goto block_38;
            case 7:                                 /* switch 5 */
                func_08050E30(arg0->unk10, &gUnk_080FA660, &gUnk_080FA3BC, &gUnk_080FA3B8, 0, 0, 0);
                var_r1_2 = arg0 + 0x232C;
                goto block_44;
            case 22:                                /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA670);
                return;
            case 23:                                /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA684);
                return;
            case 21:                                /* switch 5 */
                var_r1 = &gUnk_080FA6A0;
                goto block_43;
            case 24:                                /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA6AC);
                return;
            case 18:                                /* switch 5 */
                func_08050DA0(arg0->unk10, &gUnk_080FA6E0, arg0 + 0x23A0);
                return;
            case 19:                                /* switch 5 */
                func_08050D8C(arg0->unk10, &gUnk_080FA6F4);
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
