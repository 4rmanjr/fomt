s32 func_080D0EBC(s32 *, s32, s32, s32);              /* extern */

void func_08008E64(s32 arg0, s32 arg1, s32 arg2) {
    s32 a;
    s32 t;
    s32 v;

    if (arg0 == 0) return;
    if (arg1 == 0) return;
    a = arg0;
    if (arg2 != 0) {
        t = a | arg1 | arg2;
        if ((t & 1) == 0) {
            if ((t & 3) == 0) {
                v = ((u32) (arg2 << 0xE) >> 0x10) | 0x84000000;
            } else {
                v = ((u32) (arg2 << 0xF) >> 0x10) | 0x80000000;
            }
        } else {
            v = 0;
        }
    } else {
        v = 0;
    }
    func_080D0EBC((s32 *) a, arg1, v, 0x040000D4);
}
