s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804EDB4(s32, s32, s32, s32, s32);           /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
    u8 _padC[6812];
    s32 unk1AA8;
} GenObj;
void func_080C8550(GenObj *arg0) {
    func_08008EB8(0x03FF03FF, 0x0600FF8A, 0x28);
    func_08008EB8(0x03FF03FF, 0x0600FFCA, 0x28);
    func_0804EDB4(arg0->unk8->unk1AA8, 0x0600FFB2, 0xA0, 0, 0x20);
}
