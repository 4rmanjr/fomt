s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

s32 func_0803E6EC(void *arg0) {
s32 sp0;
    u8 temp_r2;
    u8 temp_r3;
    u8 temp_r4;

    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r2 = sp0.unk1;
    temp_r3 = sp0.unk2;
    temp_r4 = sp0.unk3;
    if ((temp_r2 == 3) && (temp_r3 == 2) && ((arg0->unk2178 & 0x43000) == 0x2000)) {
        if (((u32) (arg0->unk217A << 0x1B) >> 0x1E) != 2) {
            return 7;
        }
        return 0;
    }
    if ((func_0803D644(temp_r2, temp_r3) << 0x18) != 0) {
        return 6;
    }
    switch (temp_r4) {                              /* irregular */
    case 6:
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    case 0:
        if (arg0->unk8 == 0) {
            return 4;
        }
        return 5;
    default:
        return 1;
    }
}
