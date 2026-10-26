s32 func_080D6F0C(s32);                               /* extern */

void func_080D6F1C(void *arg0) {
    func_080D6F0C(arg0 + 0x10);
    func_080D6F0C(arg0 + 4);
    arg0->unk0 = 0;
    arg0->unk1 = 1;
}
