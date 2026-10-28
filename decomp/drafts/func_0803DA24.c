s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                              /* extern */

s32 func_0803DA24(u8 *arg0) {
    u8 sp0[4];
    u8 *bp;
    u8 a1, a2;

    if ((arg0[0x21CA] & 0xC) != 0) {
        return 0;
    }
    bp = sp0;
    func_0803D52C((s32 *)sp0, (s32)(arg0 + 0x10));
    a1 = bp[1];
    a2 = bp[2];
    bp = (u8 *)bp[3];
    if ((func_0803D644(a1, a2) << 0x18) != 0) {
        return 4;
    }
    if (*(s32 *)(arg0 + 8) == 0) {
        if ((u32)bp == 2) {
            return 3;
        }
        return 1;
    }
    return 2;
}
