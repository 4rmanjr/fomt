// DECOMP-MATCHED func_08076BEC (dari code_0803EE94.s; cek manusia sebelum ke src/)
typedef struct Inner76BEC { u8 _pad0[1424]; s16 unk590; } Inner76BEC;
typedef struct GenObj {
    u8 _pad0[8];
    Inner76BEC *unk8;
} GenObj;
s16 func_08076BEC(GenObj *arg0) {
    return arg0->unk8->unk590;
}
