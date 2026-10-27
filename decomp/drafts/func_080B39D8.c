extern s32 gUnk_08107890;

u16 func_080B39D8(s32 arg0, s32 arg1) {
    s32 off = 0x848;
    u8 *base = (u8 *)&gUnk_08107890;
    s32 idx = arg1 * 4;
    s32 addr = arg0 + off;
    s32 t;

    addr += idx;
    t = *(s32 *)addr;
    return *(u16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE hermes6: idx dulu agar lsls di depan (urutan spt ref). */
