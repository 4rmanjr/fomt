s32 func_08008E64(void *, s32, s32);                  /* extern */

void func_080096F0(void *arg0) {
    func_08008E64(arg0, 0x04000000, 0x54);
    *(u16 *)0x04000054 = arg0->unk54;
}
