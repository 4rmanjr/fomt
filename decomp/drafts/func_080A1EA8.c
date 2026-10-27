u32 func_080A1EA8(s32 dummy, u32 arg1, s32 arg2) {
    u32 var_r0;

    var_r0 = arg1;
    if (var_r0 <= 0x5FU) {
        if (arg2 == 1) {
            goto c1;
        }
        if (arg2 <= 1) {
            goto end;
        }
        if (arg2 == 2) {
            goto c2;
        }
        if (arg2 == 3) {
            goto c3;
        }
        goto end;
    c1:
        var_r0 -= 0x1A;
        goto end;
    c2:
        var_r0 -= 0x3A;
        goto end;
    c3:
        var_r0 -= 0x5E;
        goto end;
    end:;
    } else {
        var_r0 -= 0x3C;
    }
    return var_r0;
}

/* ATTEMPT-NOTE opencode: goto-chain agar compare-di-depan + body-di-belakang (switch/if-else digabung compiler). */
