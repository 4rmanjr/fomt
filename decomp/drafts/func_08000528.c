extern s32 func_03000A1C(s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Kembaran 004F4. */
u16 func_08000528(u16 arg0) {
    s32 (*f)(s32) = func_03000A1C;

    return (u16)f(arg0);
}
