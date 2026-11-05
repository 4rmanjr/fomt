// DECOMP-MATCHED func_08093AC8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
typedef struct Inner93AC8 { u8 _pad0[452]; s32 unk1C4; } Inner93AC8;
typedef struct GenObj {
    u8 _pad0[4];
    Inner93AC8 *unk4;
} GenObj;
s32 func_08093AC8(GenObj *arg0) {
    return arg0->unk4->unk1C4;
}
