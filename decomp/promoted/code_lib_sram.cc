
// DECOMP-MATCHED func_080D38D4 (dari code_lib_sram.s; cek manusia sebelum ke src/)

s32 func_080D3800(s32, s32, s32);
s32 func_080D3870(s32, s32, s32);

s32 func_080D38D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r3;
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
