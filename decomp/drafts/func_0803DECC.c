// DECOMP-MATCHED func_0803DECC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

s32 func_0803DECC(s32 arg0) {
    struct { u8 _pad0; u8 unk1; u8 unk2; u8 _pad3; } sp0;

    func_0803D52C((s32 *)&sp0, arg0 + 0x10);
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 2;
    }
    return 1;
}
