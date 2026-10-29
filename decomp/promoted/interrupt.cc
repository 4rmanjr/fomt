
// DECOMP-MATCHED func_080004C4 (dari interrupt.s; cek manusia sebelum ke src/)
s32 func_08000528(s32);
s32 func_080D100C(s32, s32);
extern void func_03000958(void);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal, tanpa draf). Pola:
   set IWRAM vector, loop blur 0..0xD. u32 agar bls. */
void func_080004C4(void) {
    u32 i;

    func_08000528(0xFFFF);
    *(s32 *)0x03007FFC = (s32)func_03000958;
    for (i = 0; i <= 0xD; i++) {
        func_080D100C((s32)i, 0);
    }
}

// DECOMP-MATCHED func_0800050C (dari interrupt.s; cek manusia sebelum ke src/)
s32 func_080004F4(s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Set IME-ish reg lalu
   teruskan nilai yg sama ke dispatcher. */
u16 func_0800050C(u16 arg0) {
    *(u16 *)0x04000202 = arg0;
    return (u16)func_080004F4(arg0);
}

// DECOMP-MATCHED func_08000528 (dari interrupt.s; cek manusia sebelum ke src/)
extern s32 func_03000A1C(s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Kembaran 004F4. */
u16 func_08000528(u16 arg0) {
    s32 (*f)(s32) = func_03000A1C;

    return (u16)f(arg0);
}

// DECOMP-MATCHED func_08000540 (dari interrupt.s; cek manusia sebelum ke src/)
s32 func_080D101C(s32, s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). r0 diteruskan utuh,
   r1 dipotong u16, hasil dipotong u16 (decl s32 agar masker tetap di-emit). */
u16 func_08000540(s32 arg0, u16 arg1) {
    return (u16)func_080D101C(arg0, arg1);
}

// DECOMP-MATCHED func_08000568 (dari interrupt.s; cek manusia sebelum ke src/)
void IntrWait(s32, s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Wrapper IntrWait(1, flags). */
void func_08000568(s32 arg0) {
    IntrWait(1, (u16)arg0);
}

// DECOMP-MATCHED func_080004F4 (dari interrupt.s; cek manusia sebelum ke src/)
extern s32 func_03000A1C(s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Indirect call via r1
   (ldr + bl _call_via_r1): cast fungsi ke pointer baru panggil. */
u16 func_080004F4(s32 arg0) {
    register s32 (*f)(s32) asm("r1");

    arg0 <<= 16;
    f = func_03000A1C;
    return (u16)f(arg0);
}
