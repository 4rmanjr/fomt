s32 func_080088D4();                                /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */

void func_0806DEC0(void *arg0) {
    s32 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_6;
    s8 temp_r1;
    s8 temp_r3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_7;
    u8 temp_r1_2;

    temp_r0 = func_080088D4();
    if (0x40 & temp_r0) {
        if (arg0->unk39 == 0) {
            return;
        }
        func_08008B6C(arg0 + 0x14, 0xCB);
        temp_r1 = arg0->unk39;
        if ((s32) temp_r1 > 1) {
            arg0->unk39 = (s8) ((u8) arg0->unk39 - 1);
            return;
        }
        if (temp_r1 != 1) {
            return;
        }
        if ((s32) (s8) arg0->unk38 > 3) {
            arg0->unk39 = 4;
            return;
        }
        arg0->unk39 = 5;
        return;
    }
    if (0x80 & temp_r0) {
        if ((arg0->unk39 != 0) && ((func_08008B6C(arg0 + 0x14, 0xCB), temp_r0_2 = (u8) arg0->unk39 + 1, arg0->unk39 = temp_r0_2, temp_r0_3 = temp_r0_2, (temp_r0_3 == 6)) || ((temp_r0_3 == 5) && ((s32) (s8) arg0->unk38 > 3)))) {
            arg0->unk39 = 1;
        }
    } else if (0x20 & temp_r0) {
        func_08008B6C(arg0 + 0x14, 0xCB);
        if (arg0->unk39 == 0) {
            temp_r0_4 = arg0->unk38 - 4;
            arg0->unk38 = temp_r0_4;
            if ((s32) (temp_r0_4 << 0x18) < 0) {
                arg0->unk38 = 0xCU;
            }
        } else {
            temp_r0_5 = arg0->unk38 - 2;
            arg0->unk38 = temp_r0_5;
            if ((s32) (temp_r0_5 << 0x18) < 0) {
                temp_r0_6 = (u8) arg0->unk39 - 1;
                arg0->unk39 = temp_r0_6;
                if ((s32) (temp_r0_6 << 0x18) <= 0) {
                    arg0->unk39 = 5;
                    arg0->unk38 = 3U;
                    return;
                }
                arg0->unk38 = 0xDU;
            }
        }
    } else if (0x10 & temp_r0) {
        func_08008B6C(arg0 + 0x14, 0xCB);
        temp_r3 = arg0->unk39;
        if (temp_r3 == 0) {
            temp_r0_7 = arg0->unk38 + 4;
            arg0->unk38 = temp_r0_7;
            if ((s32) (s8) temp_r0_7 > 0xC) {
                arg0->unk38 = (u8) temp_r3;
            }
        } else {
            temp_r1_2 = arg0->unk38 + 2;
            arg0->unk38 = temp_r1_2;
            if (arg0->unk39 == 5) {
                if ((s32) (s8) temp_r1_2 > 3) {
                    arg0->unk39 = 1;
                    goto block_33;
                }
            } else if ((s32) (s8) temp_r1_2 > 0xD) {
                arg0->unk39 = (s8) ((u8) arg0->unk39 + 1);
block_33:
                arg0->unk38 = 1U;
            }
        }
    }
}
