
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

// DECOMP-MATCHED func_0809D8A0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
s32 func_0809D8A0(s32 *arg0) {
    return *arg0;
}

// DECOMP-MATCHED func_0809C5EC (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
void func_0809C5EC(s32 *arg0) {
    *arg0 = 0;
}
