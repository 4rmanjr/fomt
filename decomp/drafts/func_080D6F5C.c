void func_080D6F3C(u8 *);                              /* extern */

void func_080D6F5C(u8 *arg0) {
    func_080D6F3C(arg0 + 0x40);
    func_080D6F3C(arg0 + 4);
    arg0[0] = 0;
    arg0[1] = 1;
}
