s32 func_080CADA8(s32);                               /* extern */
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 gUnk_0811785C;

void func_080CD4D4(s32 arg0) {
    s32 spC;

    func_080CADA8(arg0 + 0x280);
    spC = (gUnk_0811785C & 0xFFFFFF00) | (u8) (gUnk_0811785C + 0xF);
    func_080CAE60(arg0, (spC.unk1 << 6) + ((spC.unk0 * 2) + 0x0600F080), 0x54, 2, 1, 0, 0x20);
}
