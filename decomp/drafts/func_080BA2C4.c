s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08050D34(s32);                             /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050D8C(s32, s32 *);                          /* extern */
s32 func_08050DD8(s32);                               /* extern */
s32 func_08050DE4(s32);                               /* extern */
s32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, s32 *, s32 *, s32 *, s32, s32, s32); /* extern */
s32 func_080B5318(void *);                            /* extern */
s32 func_080BA574(void *, u8);                        /* extern */
extern s32 gUnk_08107A68;
extern s32 gUnk_08107A80;
extern s32 gUnk_08107A9C;
extern s32 gUnk_08107AB4;
extern s32 gUnk_08107B00;
extern s32 gUnk_08107B14;
extern s32 gUnk_08107B1C;

typedef struct GenObj {
    u8 _pad0[132];
    s32 unk84;
    u8 _pad88[1680];
    s32 unk718;
    u8 _pad71C[1016];
    s32 unkB14;
    s32 unkB18;
    u8 _padB1C[23];
    s32 unkB33;
    s32 unkB34;
    u8 _padB38[3];
    s32 unkB3B;
    s32 unkB3C;
    u8 _padB40[16];
    s32 unkB50;
} GenObj;
s32 func_080BA2C4(GenObj *arg0, s32 arg1) {
    s32 spC;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_sl;
    u32 temp_r0;
    u8 temp_r0_2;

    var_sl = arg1;
    temp_r6 = func_08050D34(arg0->unk718);
    spC = arg0->unk718;
    temp_r8 = func_080088DC(arg0);
    temp_sb = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(spC, temp_r8, temp_sb, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x708);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (arg0->unkB34 != 0) {
            arg0->unkB14 = 2;
        } else if ((arg0->unkB3C == 3) && ((u32) arg0->unkB3B <= 0xB3U)) {

        } else {
            func_08050D5C(arg0->unk718);
        }
        break;
    case 3:                                         /* switch 1 */
        if (temp_r6 <= 5) {
            if (temp_r6 < 4) {
                if (temp_r6 != 1) {
                    goto block_14;
                }
                if ((arg0->unkB3C == 4) && ((s32) arg0->unk84 > 0)) {
                    func_08050DD8(arg0->unk718);
                }
                if ((arg0->unkB3C == 5) && (arg0->unk84 == 0)) {
                    func_08050DD8(arg0->unk718);
                }
                func_080BA574(arg0, arg0->unkB3C);
            } else {
                temp_r0_2 = arg0->unkB3C + 1;
                arg0->unkB3C = temp_r0_2;
                if (temp_r0_2 == 6) {
                    func_08050E30(arg0->unk718, &gUnk_08107B00, &gUnk_08107B14, &gUnk_08107B1C, 0, 0, 0);
                }
            }
        } else if (temp_r6 != 6) {
block_14:
            func_08050D74(arg0->unk718);
        } else {
            temp_r0_3 = func_08050DF0(arg0->unk718);
            switch (temp_r0_3) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                temp_r0_4 = arg0->unkB18;
                switch (temp_r0_4) {                /* switch 3; irregular */
                case 0:                             /* switch 3 */
                    func_08050D8C(arg0->unk718, &gUnk_08107A68);
                    break;
                case 1:                             /* switch 3 */
                    func_08050D8C(arg0->unk718, &gUnk_08107A80);
                    break;
                case 2:                             /* switch 3 */
                    func_08050D8C(arg0->unk718, &gUnk_08107A9C);
                    break;
                }
                func_08050DD8(arg0->unk718);
                var_sl = 0;
                break;
            case 2:                                 /* switch 2 */
                arg0->unkB3C = 1U;
                arg0->unkB33 = 1;
                break;
            }
        }
        /* fallthrough */
    case 1:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
        if (var_sl <= 0x77) {
            var_sl += 1;
        }
        if (var_sl == 0x78) {
            arg0->unkB50 = 1;
            var_sl = 0x7A;
            func_08050DE4(arg0->unk718);
            func_08050D8C(arg0->unk718, &gUnk_08107AB4);
            func_08050DD8(arg0->unk718);
        }
        if ((u32) (var_sl - 0x7A) <= 0x59U) {
            var_sl += 1;
        }
        if (var_sl == 0xD4) {
            arg0->unkB50 = 0;
            var_sl = 0x79;
            func_08050DE4(arg0->unk718);
            func_08050D74(arg0->unk718);
            arg0->unkB33 = 0;
            arg0->unkB34 = 1U;
        }
        break;
    }
    func_080B5318(arg0);
    return var_sl;
}
