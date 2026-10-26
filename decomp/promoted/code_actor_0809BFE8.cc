
// DECOMP-MATCHED func_0809C5B4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
void func_0809C5B4(s32 *arg0, u32 arg1) {
    if (arg1 <= 0xDU) {
        *arg0 |= 1 << (0x1F & arg1);
    }
}

// DECOMP-MATCHED func_0809C5D0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
void func_0809C5D0(s32 *arg0, u32 arg1) {
    if (arg1 <= 0xDU) {
        *arg0 &= ~(1 << (0x1F & arg1));
    }
}
