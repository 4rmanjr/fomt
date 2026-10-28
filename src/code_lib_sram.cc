#include "prelude.h"

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
