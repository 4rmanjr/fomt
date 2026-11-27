s32 func_08076E0C(void *, s32);

void func_080E1D54(u8 *arg0, s32 arg1) {
    u8 *end;
    u8 *p;

    end = arg0 + 0x2164 + ((*(s32 *)(arg0 + 0x2164) << 4) + 4);
    for (p = arg0 + 0x2168; p != end; p += 0x10) {
    }
    func_08076E0C(arg0, arg1);
}
