
// DECOMP-MATCHED func_0800FFD0 (promoted from asm/more_items.s; human review before src/)
s32 func_0800FFD0(s32 *arg0) {
    return *arg0;
}

// DECOMP-MATCHED func_0800FFD4 (promoted from asm/more_items.s; human review before src/)
s32 func_0800FFD4(s32 arg0) {
    return arg0 + 4;
}

// DECOMP-MATCHED func_0800FFE0 (dari more_items.s; cek manusia sebelum ke src/)
s32 memcpy(s32, s32, s32);

s32 func_0800FFE0(s32 arg0, s32 arg1) {
    memcpy(arg0, arg1 + 0x24, 6);
    return arg0;
}

// DECOMP-MATCHED func_08010014 (dari more_items.s; cek manusia sebelum ke src/)
s32 memcpy(s32, s32, s32);

void func_08010014(s32 arg0, s32 arg1) {
    memcpy(arg0 + 0x24, arg1, 6);
}

// DECOMP-MATCHED func_0800FFD8 (dari more_items.s; cek manusia sebelum ke src/)
void *func_0800FFD8(s32 *arg0) {
    return (u8 *)arg0 + (*arg0 + 4);
}

/* ATTEMPT-NOTE opencode: pointer arithmetic byte ((u8 *)arg0 + N); draf m2c (GenObj* + N) mengalikan sizeof. */
