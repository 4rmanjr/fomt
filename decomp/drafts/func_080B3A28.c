s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_080B34DC();                                  /* extern */

void func_080B3A28(void *arg0) {
    s32 *temp_r1_4;
    s32 *temp_r2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3;
    void *temp_r6;
    void *var_r0;

    func_080B34DC();
    arg0->unk844 = 3;
    arg0->unk929 = 1;
    temp_r1 = arg0->unk884;
    temp_r3 = temp_r1 * 4;
    temp_r6 = arg0 + 0x870;
    temp_r2 = temp_r6 + temp_r3;
    temp_r0 = *temp_r2;
    if (temp_r0 == 0) {
        if (*(arg0 + 0x848 + temp_r3) != 1) {
            return;
        }
        *(arg0 + 0x8F0 + (temp_r1 * 2)) = 0;
        *(arg0 + 0x85C + (arg0->unk884 * 4)) = 1;
        arg0->unk90D = (u8) (arg0->unk90D + 1);
        *(arg0 + 0x91F + arg0->unk884) = 1;
        *(arg0 + 0x906 + arg0->unk884) = 0;
        func_08008B6C(arg0 + 0x814, 0xC7);
        return;
    }
    if (temp_r0 == 1) {
        *temp_r2 = 0;
        *(arg0 + 0x8F0 + (temp_r1 * 2)) = 0;
        *(arg0 + 0x915 + arg0->unk884) = 1;
        temp_r2_2 = arg0->unk884;
        temp_r1_2 = temp_r2_2 * 4;
        *(arg0 + 0x848 + temp_r1_2) = 1;
        *(arg0 + 0x85C + temp_r1_2) = 2;
        *(arg0 + 0x91A + temp_r2_2) = 1;
        *(arg0 + 0x924 + arg0->unk884) = 1;
        *(arg0 + 0x91F + arg0->unk884) = 1;
        func_08008B6C(arg0 + 0x814, 0x6C);
        return;
    }
    func_08008B6C(arg0 + 0x814, 0x6C);
    temp_r1_3 = arg0->unk884;
    *(temp_r6 + (temp_r1_3 * 4)) = 0;
    *(arg0 + 0x924 + temp_r1_3) = 1;
    temp_r2_3 = arg0->unk884;
    temp_r1_4 = arg0 + 0x848 + (temp_r2_3 * 4);
    temp_r0_2 = *temp_r1_4;
    if (temp_r0_2 == 4) {
        *temp_r1_4 = 3;
        var_r0 = arg0 + 0x91A;
        goto block_10;
    }
    if (temp_r0_2 == 5) {
        *temp_r1_4 = 6;
        var_r0 = arg0 + 0x91A;
block_10:
        *(var_r0 + temp_r2_3) = 1;
    }
}
