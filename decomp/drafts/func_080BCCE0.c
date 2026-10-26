s32 func_080087C8(void *);                            /* extern */
s32 func_080088DC(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_0800934C(s32, s32, s32, s32);                /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08050D3C(s32, s32, s32, void *);             /* extern */
s32 func_080BCEBC(void *);                            /* extern */
s32 func_080BCFAC(void *);                            /* extern */
s32 func_080BD064(void *);                            /* extern */
s32 func_080BDF40(void *);                            /* extern */
s32 func_080BE954(void *);                            /* extern */
s32 func_080BEA34(void *);                            /* extern */
s32 func_080BEAD4(void *);                            /* extern */
s32 func_080BF0EC(void *);                            /* extern */
s32 func_080BF2EC(void *);                            /* extern */
s32 func_080BF348(void *);                            /* extern */
s32 func_080BF764(void *);                            /* extern */

s32 *func_080BCCE0(s32 *arg0, void *arg1) {
    void *sp0;
    s32 sp4;
    void *sp8;
    s16 spC;
    void **sp10;
    void **sp14;
    s32 *sp1C;
    s32 *sp20;
    void **sp24;
    void **sp28;
    s32 *temp_r2;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r1_2;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    u32 temp_r0_3;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r4;
    void *temp_r5;

    sp1C = arg0;
    func_080BCEBC(arg1);
    temp_r0 = func_08008918(arg1);
    spC = 0x3F;
    temp_r0->unk50 = 0x3F;
    func_0800934C(arg1->unk43C + 0xC, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    temp_r0_2->unk8->unk10(temp_r0_2, arg1->unk43C);
    func_080BE954(arg1);
    func_080BEA34(arg1);
    func_080BCFAC(arg1);
    func_080BD064(arg1);
    func_08008B6C(arg1 + 0x578, 0x22);
    temp_r1 = &sp0 + 0x10;
    sp24 = temp_r1;
    sp28 = temp_r1 + 4;
    if (arg1->unk5A0 != 5) {
        do {
            func_080087C8(arg1);
            temp_r0_3 = arg1->unk5A0;
            switch (temp_r0_3) {
            case 0:
                func_080BEAD4(arg1);
                break;
            case 1:
                func_080BF0EC(arg1);
                break;
            case 2:
                func_080BF2EC(arg1);
                break;
            case 3:
                func_080BF348(arg1);
                break;
            case 4:
                func_080BF764(arg1);
                break;
            }
        } while (arg1->unk5A0 != 5);
    }
    temp_r2 = arg1->unk43C;
    temp_r1_2 = *temp_r2;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
        func_08009378(temp_r2 + 0xC, 0x889, 1, 1);
        temp_r0_4 = func_08008940(arg1);
        temp_r0_4->unk8->unk10(temp_r0_4, arg1->unk43C);
    }
    temp_r0_5 = *arg1->unk43C;
    if ((s32) ((0 - temp_r0_5) | temp_r0_5) < 0) {
        sp20 = arg1 + 0x418;
        do {
            func_080087C8(arg1);
            temp_sb = *sp20;
            temp_r8 = func_080088DC(arg1);
            temp_r6 = func_08008920(arg1);
            temp_r5 = func_08008918(arg1);
            temp_r4 = func_08008940(arg1);
            temp_r0_7 = func_0800894C(arg1);
            sp0 = temp_r4;
            sp4 = temp_r0_7;
            sp8 = arg1 + 0x57C;
            func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5);
            func_080BDF40(arg1);
            temp_r0_6 = *arg1->unk43C;
        } while ((s32) ((0 - temp_r0_6) | temp_r0_6) < 0);
    }
    sp10 = 0;
    sp14 = sp24;
    sp28->unk4 = 0;
    *sp24 = 0;
    *sp1C = 0;
    if (sp10 != 0) {
        (*sp10)->unk8(sp10, 3);
    }
    return sp1C;
}
