s32 func_080D101C(s32, s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). r0 diteruskan utuh,
   r1 dipotong u16, hasil dipotong u16 (decl s32 agar masker tetap di-emit). */
u16 func_08000540(s32 arg0, u16 arg1) {
    return (u16)func_080D101C(arg0, arg1);
}
