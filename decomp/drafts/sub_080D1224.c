/* Warning: missing "bx $lr" in last block of sub_080D1224 (0). */

? 0();                                     /* extern */
s32 func_080D11A4();                                  /* extern */
s32 func_080D14EC();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
} GenObj;
void sub_080D1224(void) {
    u8 temp_r4;
    GenObj *temp_r1;

    func_080D14EC();
    func_080D11A4();
    if (2U >= 2U) {
        if (2 != 2) {
            func_080D11A4();
            temp_r1 = SECOND_REG(func_080D11A4());
            if ((s32) (((GenObj *)((u8 *)temp_r1 + 1)) << 0x1F) >= 0) {
                temp_r1->unk1 = (s16) (saved_reg_r10 + 0x800);
            }
            0();
            return;
        }
        func_080D11A4();
        saved_reg_r9();
        return;
    }
    temp_r4 = (saved_reg_r7 + 8)->unk6;
    func_080D11A4();
    func_080D11A4();
    0();
}
