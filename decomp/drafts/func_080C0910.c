s32 func_08008B6C(void *, s32);                       /* extern */

void func_080C0910(void *arg0) {
    u8 temp_r0;

    temp_r0 = arg0->unk5FA;
    switch (temp_r0) {                              /* irregular */
    case 19:
        if (arg0->unk5AC == 3) {
            arg0->unk60A = 0U;
            return;
        }
        arg0->unk60A = 1U;
        return;
    case 20:
        arg0->unk5F9 = 0;
        arg0->unk5F8 = 0;
        arg0->unk5FA = 0U;
        arg0->unk609 = 0;
        if (arg0->unk60A == 0) {
            arg0->unk5FF = (u8) (arg0->unk5FF + 1);
            func_08008B6C(arg0 + 0x580, 0xC7);
        } else {
            arg0->unk5FE = (u8) (arg0->unk5FE + 1);
            func_08008B6C(arg0 + 0x580, 0xBC);
        }
        arg0->unk5AC = 0;
        arg0->unk60E = 1;
        arg0->unk5A4 = 1;
        return;
    }
}
