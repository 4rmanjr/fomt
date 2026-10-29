extern s32 func_03000A1C(s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Indirect call via r1
   (ldr + bl _call_via_r1): cast fungsi ke pointer baru panggil. */
u16 func_080004F4(s32 arg0) {
    register s32 (*f)(s32) asm("r1");

    arg0 <<= 16;
    f = func_03000A1C;
    return (u16)f(arg0);
}
