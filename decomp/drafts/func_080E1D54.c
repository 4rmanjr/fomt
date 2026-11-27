s32 func_08076E0C();

void func_080E1D54(u8 *arg0, u8 *arg1) {
    u32 *p;
    u8 *end;
    u8 *q;

    p = (u32 *)(arg0 + 0x2164);
    end = (u8 *)p + 4 + (*p << 4);
    q = arg0 + 0x2168;
    while (q != end) q += 0x10;
    ((s32 (*)(void *, void *))func_08076E0C)(arg0, arg1);
}
