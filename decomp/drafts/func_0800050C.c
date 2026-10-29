s32 func_080004F4(s32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Set IME-ish reg lalu
   teruskan nilai yg sama ke dispatcher. */
u16 func_0800050C(u16 arg0) {
    *(u16 *)0x04000202 = arg0;
    return (u16)func_080004F4(arg0);
}
