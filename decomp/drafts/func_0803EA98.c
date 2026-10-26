s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

s32 func_0803EA98(void *arg0) {
s32 sp0;

    if ((s32) (arg0->unk21CA << 0x1A) < 0) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) == 0) {
        return 1;
    }
    return 2;
}
