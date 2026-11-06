s32 func_080CADA8(s32);                               /* extern */
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 gUnk_0811785C;

typedef struct { u8 unk0; u8 unk1; u8 _pad2[2]; } S_CC0B4;

void func_080CC0B4(s32 arg0) {
    S_CC0B4 spC;
    S_CC0B4 *sp;

    func_080CADA8(arg0 + 0x280);
    spC = *(S_CC0B4 *) &gUnk_0811785C;
    sp = &spC;
    func_080CAE60(arg0, (sp->unk1 << 6) + ((sp->unk0 * 2) + 0x0600F000), 0x54, 2, 2, 0, 0x20);
    func_080CAE60(arg0, (sp->unk1 << 6) + ((sp->unk0 * 2) + 0x0600F080), 0x54, 2, 1, 0, 0x20);
}
