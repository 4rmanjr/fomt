typedef struct GenObj {
    u8 _pad0[3];
    u8 unk3;
} GenObj;
s32 func_080114C8(GenObj *arg0, u32 arg1) {
    u32 var_r1;
    u8 temp_r2;
    s32 mask;
    s32 seven = 0x7F;

    var_r1 = arg1;
    if (var_r1 > 0x63U) {
        var_r1 = 0x63;
    }
    temp_r2 = arg0->unk3;
    if ((u32) ((u32) (temp_r2 << 0x19) >> 0x1A) < var_r1) {
        var_r1 &= 0x3F;
        var_r1 *= 2;
        mask = seven;
        mask = 0 - mask;
        mask &= temp_r2;
        arg0->unk3 = var_r1 | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE opencode: seven-var cegah fold subs (movs+negs); mask-var andeq dst r0. */
