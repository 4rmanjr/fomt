s32 func_0803A180(u8 *, u8 *, u32);
void func_0805E860(u8 *, u32);

void func_080DD540(u8 *arg0) {
    u32 v;
    u8 *p;

    if (func_0803A180(arg0, arg0 + 0x50, 0x10000) == 0) {
        return;
    }
    v = *(u32 *)(arg0 + 0x50) + 0x9A9;
    if (*(u16 *)(arg0 + 4) == v) {
        return;
    }
    func_0805E860(arg0 + 0x30, v);
    p = arg0 + 0x44;
    *(u8 *)(p) = 1;
    *(u8 *)(p + 2) = 0;
    *(u8 *)(p + 3) = 1;
    *(u16 *)(arg0 + 4) = (u16)v;
}
