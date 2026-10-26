extern ? gUnk_0811783C;

void func_080CD534(s32 *arg0, s32 arg2) {
    s32 temp_r2;

    temp_r2 = *((arg2 * 4) + &gUnk_0811783C);
    *arg0 = (temp_r2 & 0xFFFFFF00) | (u8) (temp_r2 + 0x78);
}
