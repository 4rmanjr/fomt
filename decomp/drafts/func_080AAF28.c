extern s32 gUnk_08107458;

u16 func_080AAF28(s32 arg0, s32 arg1) {
    s32 t1 = arg1 << 0x18;
    u8 *base = (u8 *)&gUnk_08107458;
    s32 t = ((u32) t1 >> 0x17) + (arg0 * 4);

    return *(u16 *)(base + t);
}

/* ATTEMPT-NOTE opencode: t1/base/t terpisah agar ldr-pc di posisi 2 (dst r2); tanpa split ldr di posisi 5. */
