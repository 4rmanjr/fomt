s32 func_080237F0(u32 arg0) {
    if (arg0 <= 1U) {
        goto ret1;
    }
    if (arg0 != 2) {
        goto ret1;
    }
    goto ret2;
ret1:
    return 1;
ret2:
    return 2;
}

/* ATTEMPT-NOTE opencode: goto-chain agar bls/beq + urutan movs. */
