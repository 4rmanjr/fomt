s32 func_0805E8F0(void *);                             /* extern */
s32 func_080CE120(s32 *, s32, s32);                    /* extern */

void func_080CEC84(u8 *arg0, s32 arg1, s32 arg2) {
    s32 buf[1];
    s32 v;
    s32 t;

    *(u8 *) (arg0 + 0x84) = 1;
    *(u8 *) (arg0 + 0x68) = 1;
    do {
        t = func_0805E8F0(arg0 + 0x38) << 0x1D;
    } while (t >= 0);
    v = *(s32 *) arg0;
    func_080CE120(buf, v, arg1);
    *(u16 *) (arg0 + 0x34) = *(u8 *) buf + 8;
    *(u16 *) (arg0 + 0x36) = *((u8 *) buf + 1);
    *(s32 *) (arg0 + 0x7C) = arg1;
    *(s32 *) (arg0 + 0x80) = arg2;
}
