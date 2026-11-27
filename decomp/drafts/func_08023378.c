u32 func_08023378(u8 *arg0) {
    u8 *o;
    u32 v;

    o = *(u8 **)(arg0 + 0x34);
    v = *(u32 *)(o + 0x28);
    if (v == 1) {
        if ((*(u8 *)(o + 0x2E) & 0x7F) == 0) {
            return 1;
        }
        return 6;
    }
    if (v > 1) {
        if (v <= 3) {
            return 1;
        }
        return 0;
    }
    if (v == 0) {
        return *(u8 *)(o + 0x2E);
    }
    return 0;
}
