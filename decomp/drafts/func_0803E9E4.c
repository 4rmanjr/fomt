s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

s32 func_0803E9E4(void *arg0) {
s32 sp0;
    u8 temp_r4;

    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r4 = sp0.unk3;
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 5;
    }
    if ((s32) (arg0->unk21CA << 0x19) < 0) {
        return 0;
    }
    if (arg0->unk8 == 0) {
        if (temp_r4 == 6) {
            if ((arg0->unk2174 & 0x61000) == 0x41000) {
                return 4;
            }
            return 3;
        }
        return 1;
    }
    return 2;
}
