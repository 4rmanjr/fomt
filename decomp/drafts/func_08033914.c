s32 func_08033914(s32 arg0) {
    u32 m = 0x18000;
    return ((m * (arg0 + 1)) >> 8) + 0x8000;
}

/* ATTEMPT-NOTE opencode: konstanta di u32 var agar muls (movs/lsl) bukan shift-add; u32 agar lsrs bukan asrs. */
