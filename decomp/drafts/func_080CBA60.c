s32 func_080CADA8(s32);                               /* extern */
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 gUnk_08117860;

typedef struct { u8 unk0; u8 unk1; u8 _pad2[2]; } S_CBA60;

void func_080CBA60(s32 arg0, s32 arg1) {
    S_CBA60 spC;
    S_CBA60 *sp;

    func_080CADA8((arg1 * 0xC) + arg0 + 0x218);
    spC = *(S_CBA60 *) ((s32) &gUnk_08117860 + arg1 * 4);
    sp = &spC;
    func_080CAE60(arg0, (sp->unk1 << 6) + ((sp->unk0 * 2) + 0x0600F000), 0x54, 2, 2, 0, 0x20);
    func_080CAE60(arg0, (sp->unk1 << 6) + ((sp->unk0 * 2) + 0x0600F080), 0x54, 2, 1, 0, 0x20);
}
