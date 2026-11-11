s32 func_08050E98(void **arg0, s32 arg1)
{
    register u8 *p __asm__("r3");
    register u8 b __asm__("r4");
    register s32 mask __asm__("r1");
    u32 lo;
    u32 m;

    p = (u8 *) *arg0 + 0x550;
    b = *p;
    lo = (u32) (b << 0x1A) >> 0x1A;
    m = lo & ~((u32) arg1);
    mask = 0x40;
    __asm__ volatile("" : "+r"(mask));
    mask = -mask;
    mask &= b;
    mask |= m;
    *p = (u8) mask;
    return (s32) lo;
}
