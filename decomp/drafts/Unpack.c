s32 func_080D10F0();                                  /* extern */
s32 func_080D11A4(s32, s32, s32, s32);                /* extern */
s32 func_080D1518();                                  /* extern */
s32 func_080D1548();                                  /* extern */
s32 func_080D1564();                                  /* extern */
s32 func_080D1574();                                  /* extern */
s32 sub_080D1204();                                   /* extern */
s32 sub_080D1224();                                   /* extern */
s32 sub_080D129A();                                   /* extern */
s32 sub_080D12EC();                                   /* extern */
s32 sub_080D139C();                                   /* extern */

void Unpack(u32 *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    void *temp_r7;
    void *temp_sp;

    temp_sp = sp + 0xFFFFFBE0;
    temp_r7 = temp_sp;
    func_080D11A4(arg0 + 4, arg1 - 2, 0, 0);
    unksp0 = 8;
    temp_r4 = (0x40000000U >> 0x1E) - 1;
    if (temp_r4 != 0) {
        if ((temp_r4 - 1) != 0) {

        } else {
            goto block_5;
        }
    } else {
block_5:
        func_080D10F0();
    }
    temp_r6 = (0x100000000U >> 0x1D) - 1;
    if (temp_r6 != 0) {
        temp_r6_2 = temp_r6 - 1;
        if (temp_r6_2 != 0) {
            temp_r6_3 = temp_r6_2 - 1;
            if (temp_r6_3 != 0) {
                if ((temp_r6_3 - 1) != 0) {
                    sub_080D1224();
                } else {
                    sub_080D1204();
                }
            } else {
                sub_080D139C();
            }
        } else {
            sub_080D12EC();
        }
    } else {
        sub_080D129A();
    }
    temp_r4_2 = ((u32) (unksp0 << 0x18) >> 0x1D) - 1;
    if (temp_r4_2 != 0) {
        temp_r4_3 = temp_r4_2 - 1;
        if (temp_r4_3 != 0) {
            temp_r4_4 = temp_r4_3 - 1;
            if (temp_r4_4 != 0) {
                if ((temp_r4_4 - 1) != 0) {

                } else {
                    func_080D1574();
                }
            } else {
                func_080D1564();
            }
        } else {
            func_080D1548();
        }
    } else {
        func_080D1518();
    }
}
