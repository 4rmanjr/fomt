s32 func_0804E7A0(s32, s32, s32);                     /* extern */
s32 func_0804E8F0(s32, s32, s32, s32, s32);           /* extern */

s32 func_08063E04(s32 arg0, u32 arg1, s32 arg2) {
    s32 sp4;
    s32 sp8;
    s32 temp_r4;

    if (arg1 > 0xFU) {
        return 0;
    }
    sp4.unk0 = 0xC;
    sp4.unk2 = 2;
    temp_r4 = (arg1 * 0x304) + arg0 + 0x12E0;
    func_0804E7A0(sp4, temp_r4, 0);
    sp8.unk0 = 0xC;
    sp8.unk2 = 2;
    func_0804E8F0(sp8, temp_r4, 0, 0, arg2);
    return temp_r4;
}
