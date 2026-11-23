s32 func_08034F00();                                   /* extern */

void func_08036BF8(u8 *arg0, s32 arg1) {
    s32 x;
    s32 y;
    s32 v0;
    s32 v1;
    s32 *o;

    x = *(s16 *) (arg0 + 0xA);
    y = *(s16 *) (arg0 + 0xE);
    func_08034F00(arg0, arg1);
    if (arg1 <= 1) {
        return;
    }
    if (*(u16 *) (arg0 + 4) != 2) {
        return;
    }
    if (x == 0xF4 && y == 0xAB) {
        return;
    }
    v0 = *(s16 *) (arg0 + 0xA);
    v1 = *(s16 *) (arg0 + 0xE);
    if (v0 == 0xF4 && v1 == 0xAB) {
        o = (s32 *) *(s32 *) arg0;
        ((void (*)(s32 *)) ((s32 *) o[0])[0x45])(o);
    }
}
