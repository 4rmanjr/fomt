s32 func_080CADA8(s32);                               /* extern */
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 gUnk_08117860;

void func_080CCDEC(s32 arg0, s32 arg1) {
    u32 spC;
    u8 *spC_bytes;
    s32 temp_r1;

    func_080CADA8(((arg1 * 2) + arg1) * 4 + arg0 + 0x218);
    temp_r1 = *(&gUnk_08117860 + arg1);
    spC = (temp_r1 & 0xFFFFFF00) | (u8) (temp_r1 + 0xF);
    spC_bytes = (u8 *)&spC;
    func_080CAE60(arg0, ((u32)spC_bytes[1] << 6) + ((u32)spC_bytes[0] * 2 + 0x0600F080), 0x54, 2, 1, 0, 0x20);
}
