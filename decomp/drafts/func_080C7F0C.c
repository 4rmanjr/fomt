// DECOMP-MATCHED func_080C7F0C (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct InnerC7F0C { u8 _pad0[2420]; s32 unk974; } InnerC7F0C;
typedef struct GenObj {
    u8 _pad0[4];
    InnerC7F0C *unk4;
} GenObj;
s32 func_080C7F0C(GenObj *arg0) {
    return arg0->unk4->unk974;
}
