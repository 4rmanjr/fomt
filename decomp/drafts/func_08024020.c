u32 func_08024020(u8 *arg0) {
    u8 *o;
    u32 v;
    u32 b;

    o = *(u8 **)(arg0 + 0x34);
    v = *(u32 *)(o + 0x28);
    switch (v) {
    case 0:
        return *(u8 *)(o + 0x2E);
    case 1:
        b = *(u8 *)(o + 0x2E) & 0x7F;
        if (b == 0) {
            return 1;
        }
        return 6;
    case 2:
    case 3:
        return 1;
    }
    return 0;
}
