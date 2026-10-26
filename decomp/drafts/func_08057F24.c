s32 func_08057F64();                                  /* extern */

void func_08057F24(void *arg0) {
    u8 temp_r4;

    temp_r4 = arg0->unk2C;
    arg0->unk2C = (u8) ((-4 & temp_r4) | ((((u32) (temp_r4 << 0x1E) >> 0x1E) + 1) & 3));
    func_08057F64();
}
