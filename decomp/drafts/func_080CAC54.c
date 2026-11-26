void func_080CAC54(s32 arg0, s32 arg1) {
    volatile u16 *r2;

    arg1 = arg1 << 0x10;
    r2 = (volatile u16 *)0x04000004;
    *r2 = *r2 & 0xFF;
    *r2 = ((u32)arg1 >> 8) | *r2;
}
