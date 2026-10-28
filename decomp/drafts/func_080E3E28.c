u16 *func_080E3E28(u16 *arg0, u16 *arg1, u16 *arg2) {
    s32 temp_r0;
    s32 var_r2;
    u8 *var_r3;
    u16 temp_r1;

    var_r3 = (u8 *)arg0;
    var_r2 = ((s32)((u8 *)arg1 - var_r3)) >> 3;
    if (var_r2 > 0) {
        temp_r1 = *arg2;
    loop_2:
        if (*(u16 *)var_r3 != temp_r1) {
            var_r3 += 2;
            if (*(u16 *)var_r3 != temp_r1) {
                var_r3 += 2;
                if (*(u16 *)var_r3 != temp_r1) {
                    var_r3 += 2;
                    if (*(u16 *)var_r3 != temp_r1) {
                        var_r3 += 2;
                        var_r2 -= 1;
                        if (var_r2 <= 0) {
                            goto block_7;
                        }
                        goto loop_2;
                    }
                }
            }
        }
        goto block_16;
    }
block_7:
    temp_r0 = ((s32)((u8 *)arg1 - var_r3)) >> 1;
    if (temp_r0 == 1) {
        goto c1;
    }
    if (temp_r0 <= 1) {
        goto ret_arg1;
    }
    if (temp_r0 == 2) {
        goto c2;
    }
    if (temp_r0 != 3) {
        goto ret_arg1;
    }
    if (*(u16 *)var_r3 != *arg2) {
        var_r3 += 2;
    }
c2:
    if (*(u16 *)var_r3 != *arg2) {
        var_r3 += 2;
    }
c1:
    if (*(u16 *)var_r3 != *arg2) {
        goto ret_arg1;
    }
block_16:
    return (u16 *)var_r3;
ret_arg1:
    return arg1;
}

/* ATTEMPT-NOTE opencode: pola E3DB4 + tail dua asrs eksplisit. */

/* ATTEMPT-NOTE opencode: pola E3DB4; sisa 1 byte: >>1>>1 di-fold jadi >>2 (ref 2x asrs#1); tmp2/var-reuse dicoba. */
