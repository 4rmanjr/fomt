s32 CpuFastSet(s32 *, s32, s32);                        /* extern */

void func_0804E7A0(u32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 t;
    u32 lo;
    u32 m;

    t = 0xF & arg2;
    t |= t << 4;
    t |= t << 8;
    t |= t << 16;
    lo = (arg0 << 16) >> 16;
    m = ((arg0 >> 16) << 5) * lo;
    sp0 = t;
    CpuFastSet(&sp0, arg1, ((m >> 2) & 0x1FFFFF) | 0x01000000);
}
