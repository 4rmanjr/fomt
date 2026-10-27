extern s32 gUnk_080F16D2;

s16 func_0803A334(s32 dummy, s16 arg1) {
    u8 *base = (u8 *)&gUnk_080F16D2;
    s32 t = (arg1 + 0x40) & 0xFF;

    return *(s16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE opencode: arg di r1 (s32 dummy + s16 arg1); & 0xFF imm (movs belakangan, bukan var di awal); base (u8*) di var; ldrsh [r1,r2]. */
