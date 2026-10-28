void func_080B9828(s32 arg0, s32 arg1) {
    u8 *var_r1;

    if ((arg1 << 0x18) != 0) {
        goto hi;
    }
    goto lo;
hi:
    var_r1 = (u8 *)arg0 + 0xC0;
    goto store;
lo:
    var_r1 = (u8 *)arg0 + 0x80;
    goto store;
store:
    *(s32 *)var_r1 = 1;
}

/* ATTEMPT-NOTE opencode: goto per-cabang anti-fold. */
