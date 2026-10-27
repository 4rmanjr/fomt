s32 func_0809CE24(s32 arg0, s32 arg1) {
    s32 off = arg1 * 8;
    arg0 += 4;
    return *(s32 *)(arg0 + off);
}

/* ATTEMPT-NOTE opencode: off terpisah agar urutan lsls/adds-r0/adds/ldr-[r0,#0]; lipat +4 ke offset load salah urutan. */
