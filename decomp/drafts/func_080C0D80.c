// DECOMP-MATCHED func_080C0D80 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct InnerC0D80 { u8 _pad0[1540]; s32 unk604; } InnerC0D80;
typedef struct GenObj {
    u8 _pad0[4];
    InnerC0D80 *unk4;
} GenObj;
s32 func_080C0D80(GenObj *arg0) {
    return arg0->unk4->unk604;
}
