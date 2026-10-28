typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_0809CD78(void *arg0) {
    s32 var_r2;
    u8 *var_r1;
    s32 neg = 1;

    var_r1 = arg0;
    var_r2 = 0x3A;
    neg = 0 - neg;
    do {
        *(s32 *)var_r1 = 0;
        *(s32 *)(var_r1 + 4) = 0;
        var_r1 += 8;
        var_r2 -= 1;
    } while (var_r2 != neg);
}

/* ATTEMPT-NOTE opencode: var u8* (+=8 byte); neg-var utk movs+rsbs(-1); store via s32*. */

/* ATTEMPT-NOTE opencode: var u8* + neg-var; sisa push-r4 (ref push{r4,lr} utk alignment? compiler tak mau push tanpa var callee-saved; register-asm dicoba). */
