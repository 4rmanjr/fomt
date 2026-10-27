
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

// DECOMP-MATCHED func_080D3778 (dari code_lib_sram.s; cek manusia sebelum ke src/)
void func_080D3778(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *dst;
    s32 n;

    dst = arg1;
    n = arg2 - 1;
    if (arg2 != 0) {
        arg2 = 0 - 1;
        do {
            *dst = *arg0;
            arg0 += 1;
            dst += 1;
            n -= 1;
        } while (n != arg2);
    }
}

/* ATTEMPT-NOTE opencode: dst-var (r4=arg1-copy), arg0 live sbg src; arg2=0-1 utk movs+rsbs(-1) di r2; incr arg0 dulu agar add-r4-dulu. */
