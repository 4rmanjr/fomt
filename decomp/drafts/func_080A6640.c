void func_080A5760();

void func_080A6640(u8 *arg0) {
    u8 *p;
    u8 *q;

    func_080A5760();
    p = arg0 + 0xB4;
    *p = 0;
    p[1] = 0;
    q = p + 4;
    *q = 0;
    q[1] = 0;
}
