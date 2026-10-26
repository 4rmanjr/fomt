s32 func_080D6EAC(s32);                               /* extern */

void func_080D6ECC(void *arg0) {
    func_080D6EAC(arg0 + 4);
    func_080D6EAC(arg0 + 0x20);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}
