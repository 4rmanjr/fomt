void sub_0801B464(void) {
    if (saved_reg_r5 != 0) {
        *((u8 *)saved_reg_r6 + 8 + (saved_reg_r10 * 4)) = saved_reg_r5;
        saved_reg_r5->unk14->unk10(saved_reg_r5);
    }
}
