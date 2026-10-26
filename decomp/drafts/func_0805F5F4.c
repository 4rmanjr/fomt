s32 func_080088DC(void *);                          /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *); /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050DA0(s32, ? *, void *);                  /* extern */
s32 func_08050E68(s32, ? *);                          /* extern */
s32 func_08050E74(s32);                               /* extern */
extern ? gUnk_080FB234;
extern ? gUnk_080FB23C;
extern ? gUnk_080FB27C;
extern ? gUnk_080FB284;
extern ? gUnk_080FB2D0;
extern ? gUnk_080FB2F4;
extern ? gUnk_080FB300;
extern ? gUnk_080FB308;
extern ? gUnk_080FB398;
extern ? gUnk_080FB3CC;
extern ? gUnk_080FB420;
extern ? gUnk_080FB46C;
extern ? gUnk_080FB484;
extern ? gUnk_080FB4D4;
extern ? gUnk_080FB51C;
extern ? gUnk_080FB520;
extern ? gUnk_080FB534;
extern ? gUnk_080FB53C;
extern ? gUnk_080FB544;
extern ? gUnk_080FB578;
extern ? gUnk_080FB5D4;
extern ? gUnk_080FB634;
extern ? gUnk_080FB6C0;
extern ? gUnk_080FB710;
extern ? gUnk_080FB738;
extern ? gUnk_080FB754;
extern ? gUnk_080FB7A0;
extern ? gUnk_080FB7F0;

void func_0805F5F4(void *arg0) {
    ? *var_r1;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r0_4;
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
        temp_r0_2 = arg0->unk6426;
        if (temp_r0_2 == 0) {
            func_08050E74(arg0->unk10);
            func_08050D5C(arg0->unk10);
            arg0->unk6426 = 3;
            return;
        }
        if (temp_r0_2 == 6) {
            arg0->unk6426 = 0;
            return;
        }
        arg0->unk6426 = 2;
        return;
    case 3:                                         /* switch 1 */
        temp_r0_3 = arg0->unk6426;
        switch (temp_r0_3) {                        /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            func_08050D74(arg0->unk10);
            arg0->unk6426 = 1;
            return;
        case 6:                                     /* switch 2 */
            func_08050D74(arg0->unk10);
            return;
        case 3:                                     /* switch 2 */
            arg0->unk6426 = 5;
            temp_r0_4 = arg0->unk6424;
            switch ((u32) temp_r0_4) {              /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB234);
                func_08050DA0(arg0->unk10, &gUnk_080FB23C, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 1;
                return;
            case 1:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB27C);
                func_08050DA0(arg0->unk10, &gUnk_080FB284, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 2;
                return;
            case 2:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB234);
                func_08050DA0(arg0->unk10, &gUnk_080FB2D0, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 3;
                return;
            case 3:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB27C);
                var_r1 = &gUnk_080FB2F4;
block_39:
                func_08050DA0(arg0->unk10, var_r1, arg0 + 0x6428);
                return;
            case 4:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                var_r1 = &gUnk_080FB308;
                goto block_39;
            case 5:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB234);
                func_08050DA0(arg0->unk10, &gUnk_080FB398, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 6;
                return;
            case 6:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB27C);
                func_08050DA0(arg0->unk10, &gUnk_080FB3CC, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 7;
                return;
            case 7:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB420, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 9;
                return;
            case 9:                                 /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB27C);
                func_08050DA0(arg0->unk10, &gUnk_080FB46C, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0xA;
                return;
            case 10:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB484, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0xB;
                return;
            case 11:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB234);
                var_r1 = &gUnk_080FB4D4;
                goto block_39;
            case 14:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB51C);
                func_08050DA0(arg0->unk10, &gUnk_080FB520, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0xF;
                return;
            case 15:                                /* switch 3 */
                var_r1 = &gUnk_080FB534;
                goto block_39;
            case 16:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                func_08050DA0(arg0->unk10, &gUnk_080FB544, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x11;
                return;
            case 17:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                func_08050DA0(arg0->unk10, &gUnk_080FB578, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x12;
                return;
            case 18:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                var_r1 = &gUnk_080FB5D4;
                goto block_39;
            case 19:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB634, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x14;
                return;
            case 20:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB6C0, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x15;
                return;
            case 21:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                var_r1 = &gUnk_080FB710;
                goto block_39;
            case 22:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                func_08050DA0(arg0->unk10, &gUnk_080FB738, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x17;
                return;
            case 23:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                func_08050DA0(arg0->unk10, &gUnk_080FB754, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x18;
                return;
            case 24:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                var_r1 = &gUnk_080FB7A0;
                goto block_39;
            case 25:                                /* switch 3 */
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB7F0, arg0 + 0x6428);
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
