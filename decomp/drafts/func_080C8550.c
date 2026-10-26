s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804EDB4(s32, s32, s32, s32, s32);           /* extern */

void func_080C8550(void *arg0) {
    func_08008EB8(0x03FF03FF, 0x0600FF8A, 0x28);
    func_08008EB8(0x03FF03FF, 0x0600FFCA, 0x28);
    func_0804EDB4(arg0->unk8->unk1AA8, 0x0600FFB2, 0xA0, 0, 0x20);
}
