u32 GetRivalEventCount__C12Bachelorette(void *);    /* extern */
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

s32 func_0803EB9C(void *arg0, ? arg3) {
s32 sp0;
    u32 temp_r0;
    u8 temp_r4;
    u8 temp_r6;
    u8 temp_r8;

    if ((s32) (arg0->unk21CA << 0x1B) < 0) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r6 = sp0.unk1;
    temp_r8 = sp0.unk2;
    temp_r4 = sp0.unk3;
    temp_r0 = GetRivalEventCount__C12Bachelorette(arg0 + 0x1E28);
    if (temp_r0 > 4U) {
        if ((func_0803D644(temp_r6, temp_r8) << 0x18) != 0) {
            return 9;
        }
        if (temp_r4 == 4) {
            if (arg0->unk8 == 0) {
                return 6;
            }
            return 7;
        }
        return 5;
    }
    if ((func_0803D644(temp_r6, temp_r8) << 0x18) != 0) {
        return 8;
    }
    if (temp_r0 != 0) {
        switch (temp_r4) {                          /* irregular */
        case 1:
            return 3;
        case 4:
            return 4;
        default:
            return 2;
        }
    } else {
        return 1;
    }
}
