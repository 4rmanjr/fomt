#include "prelude.h"

// DECOMP-MATCHED func_080004C4 (dari interrupt.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08000528(i32);
i32 func_080D100C(i32, i32);
extern void func_03000958(void);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal, tanpa draf). Pola:
   set IWRAM vector, loop blur 0..0xD. u32 agar bls. */
void func_080004C4(void) {
    u32 i;

    func_08000528(0xFFFF);
    *(i32 *)0x03007FFC = (i32)func_03000958;
    for (i = 0; i <= 0xD; i++) {
        func_080D100C((i32)i, 0);
    }
}
}

// DECOMP-MATCHED func_080004F4 (dari interrupt.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 func_03000A1C(i32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Indirect call via r1
   (ldr + bl _call_via_r1): cast fungsi ke pointer baru panggil. */
u16 func_080004F4(i32 arg0) {
    register i32 (*f)(i32) asm("r1");

    arg0 <<= 16;
    f = func_03000A1C;
    return (u16)f(arg0);
}
}

// DECOMP-MATCHED func_0800050C (dari interrupt.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080004F4(i32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Set IME-ish reg lalu
   teruskan nilai yg sama ke dispatcher. */
u16 func_0800050C(u16 arg0) {
    *(u16 *)0x04000202 = arg0;
    return (u16)func_080004F4(arg0);
}
}

// DECOMP-MATCHED func_08000528 (dari interrupt.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 func_03000A1C(i32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Kembaran 004F4. */
u16 func_08000528(u16 arg0) {
    i32 (*f)(i32) = func_03000A1C;

    return (u16)f(arg0);
}
}

// DECOMP-MATCHED func_08000540 (dari interrupt.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D101C(i32, i32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). r0 diteruskan utuh,
   r1 dipotong u16, hasil dipotong u16 (decl i32 agar masker tetap di-emit). */
u16 func_08000540(i32 arg0, u16 arg1) {
    return (u16)func_080D101C(arg0, arg1);
}
}
// ekor tak-bermarker dari interrupt.s (verbatim, jangan diubah)
asm(
"    .align 2, 0\n"
".L08000554:\n"
"    .byte 0x00, 0xB5, 0x01, 0x1C, 0x09, 0x04, 0x09, 0x0C, 0x00, 0x20, 0xD3, 0xF0\n"
"    .byte 0xF9, 0xF8, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_08000568 (dari interrupt.s; cek manusia sebelum ke src/)
extern "C" {
void IntrWait(i32, i32);

/* ATTEMPT-NOTE hermes: tulis manual (m2c gagal). Wrapper IntrWait(1, flags). */
void func_08000568(i32 arg0) {
    IntrWait(1, (u16)arg0);
}
}
// 2B pad ala rakitan asli (objek ref menaruh 0000 antara akhir fungsi dan
// ekor .byte; tanpa ini ekor bergeser -2). Zona ekor tak direferensi
// siapa pun (cek: tanpa pools/ldr-pc ke 0x0800057A-0x0800059C) — murni
// byte-identity, bukan perilaku.
asm(".hword 0x0000");
// ekor tak-bermarker dari interrupt.s (verbatim, jangan diubah)
asm(
"    .byte 0x08, 0x1C, 0x70, 0x47\n"
"    .byte 0x08, 0x1C, 0x70, 0x47, 0x00, 0xB5, 0x00, 0xF0, 0x25, 0xF8, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00\n"
"    .byte 0x00, 0xB5, 0x00, 0xF0, 0x39, 0xF8, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00\n"
);
