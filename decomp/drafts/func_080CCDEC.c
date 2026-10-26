s32 func_080CADA8(s32);                               /* extern */
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 gUnk_08117860;

void func_080CCDEC(s32 arg0, s32 arg1) {
    s32 spC;
    s32 temp_r1;

    func_080CADA8((arg1 * 0xC) + arg0 + 0x218);
    temp_r1 = *((arg1 * 4) + &gUnk_08117860);
    spC = (temp_r1 & 0xFFFFFF00) | (u8) (temp_r1 + 0xF);
    func_080CAE60(arg0, (spC.unk1 << 6) + ((spC.unk0 * 2) + 0x0600F080), 0x54, 2, 1, 0, 0x20);
}
