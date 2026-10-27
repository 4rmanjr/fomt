typedef struct GenObj {
    u8 _pad0[44];
    u8 unk2C;
} GenObj;
s32 func_08057F4C(GenObj *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if ((3 & arg0->unk2C) == 3) {
        var_r2 = 1;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk2C u8 (ldrb + adds#2c); movs+ands+cmp+bne. */
