s32 func_080088D4();                                /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_080B92B4(void *);                            /* extern */

void func_080BA6B8(void *arg0) {
    s32 temp_r0;
    u8 temp_r1;

    temp_r0 = func_080088D4();
    temp_r1 = arg0->unk9C;
    if ((temp_r1 == 1) && (temp_r0 & temp_r1)) {
        arg0->unk98 = temp_r1;
        if ((u32) arg0->unk6C <= 1U) {
            arg0->unk9C = 0U;
            arg0->unk88 = 0;
            (arg0 + 0x88)->unk11 = temp_r1;
            arg0->unk6C = 5U;
            func_08008B6C(arg0 + 0x70C, 0xCC);
        }
    }
    if (arg0->unkDC == 1) {
        arg0->unkB3A = (u8) (arg0->unkB3A + 1);
        if ((s32) arg0->unkB3A > (s32) (arg0->unkB5A - 1)) {
            arg0->unkB3A = 0U;
            func_080B92B4(arg0);
        }
    }
}
