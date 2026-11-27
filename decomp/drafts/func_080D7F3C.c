void func_080D7F3C(s32 arg0) {
    u8 *obj;
    void (*fn)(s32);

    obj = *(u8 **)((u8 *)arg0 + 0xA8);
    fn = *(void (**)(s32))((u8 *)*(u32 **)obj + 0x124);
    fn(arg0);
    *(u32 *)((u8 *)arg0 + 0x9C) = 2;
}
