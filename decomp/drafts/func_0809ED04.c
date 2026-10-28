typedef struct GenObj {
    u8 _pad0[21];
    u8 unk15;
} GenObj;
s32 func_0809ED04(GenObj *arg0) {
    u8 t;
    u8 var_r1;

    t = arg0->unk15;
    var_r1 = (u8) (2 & t);
    var_r1 = (u8) (0 - var_r1) >> 0x1F;
    if ((4 & t) != 0) {
        var_r1 = (u8) (var_r1 + 1);
    }
    if ((8 & t) != 0) {
        var_r1 = (u8) (var_r1 + 1);
    }
    if ((0x10 & t) != 0) {
        var_r1 = (u8) (var_r1 + 1);
    }
    if ((0x20 & t) != 0) {
        var_r1 = (u8) (var_r1 + 1);
    }
    if ((0x40 & t) != 0) {
        var_r1 = (u8) (var_r1 + 1);
    }
    if (var_r1 != 6) {
        return 0;
    }
    return 1;
}

/* ATTEMPT-NOTE opencode: unk15 u8 + var u8 (zero-extend tiap adds via lsls/lsrs). */

/* ATTEMPT-NOTE opencode: unk15 u8; sisa pola awal (2&t -> rsbs/lsrs) + dst-and; ~5 varian and/cast dicoba, compiler fold/cabang. */
