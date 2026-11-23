s32 func_080D0EBC(s32 *, s32, s32, s32);               /* extern */

void func_08008FB8(s32 *arg0) {
    s32 sp0;
    s32 *t;

    t = (s32 *) arg0[1];
    if (arg0[0] == 1) {
        sp0 = (s32) t;
        t = &sp0;
    }
    func_080D0EBC(t, arg0[2], arg0[3], 0x040000D4);
}
