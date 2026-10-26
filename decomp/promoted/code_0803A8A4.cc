
// DECOMP-MATCHED func_0803BEBC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BCF8(s32);                               /* extern */

void func_0803BEBC(s32 *arg0) {
    func_0803BCF8(*arg0);
}

// DECOMP-MATCHED func_0803BEC8 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BD60(s32);                               /* extern */

void func_0803BEC8(s32 *arg0) {
    func_0803BD60(*arg0);
}

// DECOMP-MATCHED func_0803BED4 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BD88(s32);                               /* extern */

void func_0803BED4(s32 *arg0) {
    func_0803BD88(*arg0);
}

// DECOMP-MATCHED func_0803BEE0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BDB8(s32);                               /* extern */

void func_0803BEE0(s32 *arg0) {
    func_0803BDB8(*arg0);
}

// DECOMP-MATCHED func_0803BEEC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s16 func_0803BEEC(s16 **arg0) {
    return **arg0;
}

// DECOMP-MATCHED func_0803BEFC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BDE4(s32);                               /* extern */

void func_0803BEFC(s32 *arg0) {
    func_0803BDE4(*arg0);
}

// DECOMP-MATCHED func_0803C7A0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 __builtin_delete(s32 *);                          /* extern */
s32 func_080E0D70(s32, s32);                          /* extern */

void func_0803C7A0(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        func_080E0D70(temp_r0, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
