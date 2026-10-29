#include "prelude.h"

// DECOMP-MATCHED func_080D3870 (dari code_lib_sram.s; cek manusia sebelum ke src/)
extern "C" {
extern u8 func_080D3840[];

i32 func_080D3870(i32 arg0, i32 arg1, i32 arg2) {
    u8 buf[0xC0];
    u16 *src;
    u16 *dst;
    u32 one;
    u32 tfn;
    u32 x;
    u32 n;
    u16 reg;

    reg = *(u16 *)0x04000204;
    reg &= 0xFFFC;
    reg |= 3;
    *(u16 *)0x04000204 = reg;
    /* agbcc lipat `& ~1` jadi mov+neg+and; jangkar agar `one` tetap di
       register sehingga jadi `movs r0,#1; bics r3,r0` seperti ref. */
    src = (u16 *)(u32)func_080D3840;
    one = 1;
    __asm__ volatile ("" : "+r" (one));
    src = (u16 *)((u32)src & ~one);
    dst = (u16 *)buf;
    x = ((u32)func_080D3870 - (u32)func_080D3840) << 15;
    goto test;
    do {
        *dst = *src;
        src += 1;
        dst += 1;
        x = (n - 1) << 16;
    test:
        n = x >> 16;
    } while (n != 0);
    /* target panggil = buf+1 (bit Thumb); hitung setelah loop agar tetap
       `mov r3,sp` (C murni selalu di-hoist sebelum loop -> r4). */
    __asm__ volatile ("mov %0, sp" : "=r" (tfn));
    tfn += 1;
    return ((i32 (*)(i32, i32, i32))tfn)(arg0, arg1, arg2);
}
}

// DECOMP-MATCHED func_080D38D4 (dari code_lib_sram.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_080D3800(i32, i32, i32);
i32 func_080D3870(i32, i32, i32);

i32 func_080D38D4(i32 arg0, i32 arg1, i32 arg2, i32 arg3) {
    i32 var_r3;
    u8 i;

    i = 0;
    goto check;
    do {
        i++;
check:
        if (i > 2) {
            break;
        }
        func_080D3800(arg0, arg1, arg2);
        var_r3 = func_080D3870(arg0, arg1, arg2);
    } while (var_r3 != 0);
    return var_r3;
}

/* ATTEMPT-NOTE opencode: counter u8 + do{goto-check/if-break} agar agbcc pakai r7 utk counter dan r3 utk retval (ref: movs r7,#0; b check; i++; cmp/bhi; call;call; cmp/bne loop). goto-check polos salah alokasi (counter di r4, +2 byte). */
}
