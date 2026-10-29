u16 func_08000528(u16);
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
