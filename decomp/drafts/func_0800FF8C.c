typedef struct GenObj {
    s32 unk0;
    u8 _pad4[32];
    u16 unk24;
    u8 _pad26[2];
    u32 unk28;
} GenObj;
GenObj *func_0800FF8C(GenObj *arg0) {
    register u8 *p asm("r4");
    register u32 mask asm("r3");
    register u16 t asm("r2");
    u32 v;

    arg0->unk0 = 0;
    p = (u8 *)arg0;
    p += 0x24;
    v = (0x8D << 2);
    t = arg0->unk24;
    mask = 0xFFFFFC00;
    arg0->unk24 = (t & mask) | v;
    *(p + 1) &= 3;
    *(u16 *)(p + 2) &= mask;
    *(p + 3) &= 3;
    *(u16 *)(p + 4) &= mask;
    return arg0;
}
