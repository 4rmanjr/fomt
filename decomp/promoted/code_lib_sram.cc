
// DECOMP-MATCHED func_080D38D4 (dari code_lib_sram.s; cek manusia sebelum ke src/)

void func_080D3800(u8 *, u8 *, s32);
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
        func_080D3800((u8 *)arg0, (u8 *)arg1, arg2);
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

// DECOMP-MATCHED func_080D3840 (dari code_lib_sram.s; cek manusia sebelum ke src/)
s32 func_080D3840(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_r4;
    u8 *var_r3;
    u8 *var_r5;
    u8 temp_r0;
    u8 temp_r1;
    s32 var_r2;

    var_r5 = arg0;
    var_r3 = arg1;
    var_r4 = arg2 - 1;
    if (arg2 != 0) {
        var_r2 = -1;
loop_2:
        temp_r1 = *var_r3;
        temp_r0 = *var_r5;
        var_r5 += 1;
        var_r3 += 1;
        if (temp_r1 != temp_r0) {
            return (s32)(var_r3 - 1);
        }
        var_r4 -= 1;
        if (var_r4 != var_r2) {
            goto loop_2;
        }
    }
    return 0;
}

// DECOMP-MATCHED func_080D3870 (dari code_lib_sram.s; cek manusia sebelum ke src/)
extern s32 func_080D3840(u8 *, u8 *, s32);

s32 func_080D3870(s32 arg0, s32 arg1, s32 arg2) {
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
    return ((s32 (*)(s32, s32, s32))tfn)(arg0, arg1, arg2);
}

// DECOMP-MATCHED func_080D3800 (dari code_lib_sram.s; cek manusia sebelum ke src/)
void func_080D3800(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 n;
    u16 reg;

    n = arg2;
    reg = *(u16 *)0x04000204;
    reg &= 0xFFFC;
    reg |= 3;
    *(u16 *)0x04000204 = reg;
    n -= 1;
    if (n != -1) {
        do {
            *arg1 = *arg0;
            arg0 += 1;
            arg1 += 1;
            n -= 1;
        } while (n != -1);
    }
}
