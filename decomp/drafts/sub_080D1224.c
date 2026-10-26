/* Warning: missing "bx $lr" in last block of sub_080D1224 (.L080D1274). */

? .L080D145C();                                     /* extern */
s32 func_080D11A4();                                  /* extern */
s32 func_080D14EC();                                  /* extern */

void sub_080D1224(void) {
    u8 temp_r4;
    void *temp_r1;

    func_080D14EC();
    func_080D11A4();
    if (2U >= 2U) {
        if (2 != 2) {
            func_080D11A4();
            temp_r1 = SECOND_REG(func_080D11A4());
            if ((s32) ((temp_r1 + 1) << 0x1F) >= 0) {
                temp_r1->unk1 = (s16) (saved_reg_r10 + 0x800);
            }
            .L080D145C();
            return;
        }
        func_080D11A4();
        saved_reg_r9();
        return;
    }
    temp_r4 = (saved_reg_r7 + 8)->unk6;
    func_080D11A4();
    func_080D11A4();
    .L080D145C();
}
