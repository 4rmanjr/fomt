s32 func_0809D79C(s32 arg0, u32 arg1) {
    u32 v;
    u32 k;

    v = arg1;
    if (v <= 9) {
        return v;
    }
    v = 0x19;
    if (arg1 == 0xFF) {
        return v;
    }
    v = 0x18;
    if (arg1 > 0x4F) {
        return v;
    }
    v = 0x0A;
    k = 0x13;
    if (arg1 < 0x13) {
        return v;
    }
    if (arg1 == 0x13) {
        v = 0x0B;
        return v;
    }
    while (1) {
        v += 2;
        k += 0x0A;
        if (k > 0x4F) {
            return v;
        }
        if (arg1 < k) {
            return v;
        }
        if (arg1 == k) {
            break;
        }
    }
    return v + 1;
}
